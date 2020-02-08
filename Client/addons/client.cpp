#include "../stdafx.h"

static char roomInput[0xFF] = { 0 };
static char nameInput[0xFF] = { 0 };
static char chatInput[0x200] = { 0 };

static auto connected = false, loading = false;
static std::string room;

static sockaddr_in server = { 0 };
static SOCKET tcpSocket = 0, udpSocket = 0;

static struct {
	bool Focused = false, ShowOverlay = true;
	int Keybind = 0;
	std::string Raw;
	unsigned long long LastTime;
	std::mutex Mutex;
} chat;

static Client::Player client = { 0 };

static struct {
	bool ShowNameTags = true;
	std::vector<Client::Player *> List;
	std::shared_mutex Mutex;
} players;

static Client::Player *GetPlayerById(unsigned int id) {
	for (auto p : players.List) {
		if (p->Id == id) {
			return p;
		}
	}

	return nullptr;
}

static bool Setup() {
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(2, 2), &wsa)) {
		printf("client: WSAStartup failed\n");
		return false;
	}

	addrinfo *result = nullptr;
	if (getaddrinfo("soaphub.org", nullptr, nullptr, &result)) {
		printf("client: getaddrinfo failed\n");
		return false;
	}

	IN_ADDR serverAddr = { 0 };
	for (; result; result = result->ai_next) {
		if (result->ai_family == AF_INET) {
			serverAddr = reinterpret_cast<SOCKADDR_IN *>(result->ai_addr)->sin_addr;
		}
	}

	freeaddrinfo(result);
	if (!serverAddr.S_un.S_addr) {
		printf("client: found no server address\n");
		return false;
	}

	server = { 0 };
	server.sin_family = AF_INET;
	server.sin_port = htons(Client::Port);
	server.sin_addr = serverAddr;

	return true;
}

static bool RecvJsonMessage(json &msg) {
	char buffer[0xFFF] = { 0 };
	if (recv(tcpSocket, buffer, sizeof(buffer), 0) <= 0) {
		return false;
	}

	try {
		msg = json::parse(buffer);
	} catch (...) {
		printf("client: failed parse -> %s\n", buffer);
		return false;
	}

	return true;
}

static bool SendJsonMessage(json msg) {
	static std::mutex sendMutex;

	auto data = msg.dump();

	sendMutex.lock();
	if (send(tcpSocket, data.c_str(), data.length(), 0) != data.length()) {
		sendMutex.unlock();
		return false;
	}

	sendMutex.unlock();
	return true;
}

static void AddChatMessage(std::string message) {
	static const auto maxMessages = 100;

	SYSTEMTIME time;
	GetLocalTime(&time);

	char formattedTime[0xFF];
	sprintf_s(formattedTime, sizeof(formattedTime), "%d:%02d: ", time.wHour, time.wMinute);

	auto formattedMsg = formattedTime + message + "\n";

	chat.Mutex.lock();

	chat.Raw += formattedMsg;
	chat.LastTime = GetTickCount64();

	if (std::count(chat.Raw.begin(), chat.Raw.end(), '\n') > maxMessages) {
		chat.Raw.erase(0, chat.Raw.find('\n') + 1);
	}

	chat.Mutex.unlock();
}

static void SendChatInput() {
	if (connected) {
		for (auto c = &chatInput[0]; *c; ++c) {
			if (!isblank(*c)) {
				SendJsonMessage({
					{ "type", "chat" },
					{ "id", client.Id },
					{ "body", chatInput },
				});

				break;
			}
		}
	}

	chatInput[0] = 0;
}

static void Disconnect() {
	if (connected) {
		SendJsonMessage({
			{ "type", "disconnect" },
			{ "id", client.Id },
		});

		AddChatMessage("Disconnected");
	}

	if (tcpSocket) {
		shutdown(tcpSocket, SD_BOTH);
		closesocket(tcpSocket);
		tcpSocket = 0;
	}

	if (udpSocket) {
		shutdown(udpSocket, SD_BOTH);
		closesocket(udpSocket);
		udpSocket = 0;
	}

	players.Mutex.lock();
	for (auto p : players.List) {
		if (p->Pawn) {
			Engine::Despawn(p->Pawn);
		}

		delete p;
	}

	players.List.clear();
	players.List.shrink_to_fit();
	players.Mutex.unlock();
	
	connected = false;
}

static void PlayerHandler() {
	while (connected) {
		Client::PACKET_COMPRESSED packet;

		int serverSize = sizeof(server);
		if (recvfrom(udpSocket, reinterpret_cast<char *>(&packet), sizeof(packet), 0, reinterpret_cast<sockaddr *>(&server), &serverSize) < 0) {
			continue;
		}

		players.Mutex.lock_shared();

		auto player = GetPlayerById(packet.Id);
		if (player) {
			auto defaultPlayer = Engine::GetPlayerPawn();
			if (defaultPlayer) {
				memcpy(&player->LastPacket, &packet, FIELD_OFFSET(Client::PACKET_COMPRESSED, CompressedBones));
				memcpy(player->LastPacket.Bones, defaultPlayer->Mesh3p->LocalAtoms.Buffer(), PLAYER_PAWN_BONE_COUNT * sizeof(Classes::FBoneAtom));

				auto bonesBase = reinterpret_cast<byte *>(player->LastPacket.Bones);
				for (auto i = 0; i < LENGTH(CompressedBoneOffsets); ++i) {
					*reinterpret_cast<float *>(bonesBase + CompressedBoneOffsets[i]) = static_cast<float>(packet.CompressedBones[i]) / 215.f;
				}
			}
		}

		players.Mutex.unlock_shared();
	}
}

static bool Join() {
	if (client.Level == "") {
		auto world = Engine::GetWorld();
		if (!world) {
			printf("client: no world available\n");
			return false;
		}

		client.Level = std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>().to_bytes(world->GetMapName(false).c_str());
		std::transform(client.Level.begin(), client.Level.end(), client.Level.begin(), [](char c) {
			return tolower(c);
		});

		if (client.Level == "tdmainmenu") {
			loading = true;
		}
	}

	if (!SendJsonMessage({
		{ "type", "connect" },
		{ "room", room },
		{ "name", client.Name },
		{ "level", client.Level },
		{ "character", client.Character },
	})) {
		printf("client: failed to send connect msg\n");
		return false;
	}

	json msg;
	if (!RecvJsonMessage(msg)) {
		printf("client: failed to receive connect\n");
		return false;
	}

	auto msgType = msg["type"];
	auto msgId = msg["id"];
	if (!msgType.is_string() || msgType != "id" || !msgId.is_number_integer()) {
		printf("client: malformed connect response\n");
		return false;
	}

	client.Id = msgId;

	printf("client: joined with id %x\n", client.Id);
	return true;
}

static void ClientListener() {
	for (;; Disconnect(), Sleep(500)) {
		printf("client: connecting\n");

		if (!Setup()) {
			continue;
		}

		tcpSocket = socket(AF_INET, SOCK_STREAM, 0);
		if (tcpSocket < 0) {
			tcpSocket = 0;

			printf("client: failed to create tcp socket\n");
			continue;
		}

		udpSocket = socket(AF_INET, SOCK_DGRAM, 0);
		if (udpSocket < 0) {
			udpSocket = 0;

			printf("client: failed to create udp socket\n");
			continue;
		}

		if (connect(tcpSocket, reinterpret_cast<const sockaddr *>(&server), sizeof(server))) {
			printf("client: failed to connect\n");
			continue;
		}

		if (!Join()) {
			continue;
		}

		connected = true;
		AddChatMessage("Connected");

		std::thread playerHandlerThread(PlayerHandler);

		auto lastPing = GetTickCount64();
		std::thread statusThread([&lastPing]() {
			while (connected) {
				Sleep(500);

				if (GetTickCount64() - lastPing > 5000) {
					printf("client: timed out\n");
					Disconnect();
					return;
				}
			}
		});

		json msg;
		while (RecvJsonMessage(msg)) {
			auto msgType = msg["type"];
			if (!msgType.is_string()) {
				continue;
			}

			if (msgType == "connect") {
				auto msgId = msg["id"];
				auto msgName = msg["name"];
				auto msgCharacter = msg["character"];
				auto msgLevel = msg["level"];

				if (!msgId.is_number_integer() || !msgName.is_string() || !msgCharacter.is_number_integer() || !msgLevel.is_string()) {
					continue;
				}

				players.Mutex.lock();

				auto player = new Client::Player();
				player->Id = msgId;
				player->Name = msgName.get<std::string>();
				player->Character = msgCharacter;
				player->Level = msgLevel.get<std::string>();
				player->LastPacket = { 0 };

				if (player->Level == client.Level && !loading) {
					Engine::SpawnCharacter(player->Character, player->Pawn);
				} else {
					player->Pawn = nullptr;
				}

				AddChatMessage(player->Name + " joined the room");

				players.List.push_back(player);
				players.Mutex.unlock();
			} else if (msgType == "name") {
				auto msgId = msg["id"];
				auto msgName = msg["name"];

				if (!msgId.is_number_integer() || !msgName.is_string()) {
					continue;
				}

				players.Mutex.lock_shared();

				auto player = GetPlayerById(msgId);
				if (player) {
					auto newName = msgName.get<std::string>();
					AddChatMessage(player->Name + " renamed to " + newName);
					player->Name = newName;
				}

				players.Mutex.unlock_shared();
			} else if (msgType == "chat") {
				auto msgBody = msg["body"];
				if (!msgBody.is_string()) {
					continue;
				}

				players.Mutex.lock_shared();
				AddChatMessage(msgBody.get<std::string>());
				players.Mutex.unlock_shared();
			} else if (msgType == "level") {
				auto msgId = msg["id"];
				auto msgLevel = msg["level"];

				if (!msgId.is_number_integer() || !msgLevel.is_string()) {
					continue;
				}

				players.Mutex.lock_shared();

				auto player = GetPlayerById(msgId);
				if (player) {
					player->Level = msgLevel.get<std::string>();

					if (player->Level == client.Level) {
						if (!player->Pawn && !loading) {
							Engine::SpawnCharacter(player->Character, player->Pawn);
						}
					} else {
						if (player->Pawn) {
							Engine::Despawn(player->Pawn);
							player->Pawn = nullptr;
						}
					}
				}

				players.Mutex.unlock_shared();
			} else if (msgType == "character") {
				auto msgId = msg["id"];
				auto msgCharacter = msg["character"];

				if (!msgId.is_number_integer() || !msgCharacter.is_number_integer() || msgCharacter < 0 || msgCharacter >= Engine::Character::Max) {
					continue;
				}

				players.Mutex.lock_shared();

				auto player = GetPlayerById(msgId);
				if (player) {
					player->Character = msgCharacter;

					if (!loading) {
						if (player->Pawn) {
							Engine::Despawn(player->Pawn);
							player->Pawn = nullptr;
						}

						Engine::SpawnCharacter(player->Character, player->Pawn);
					}
				}

				players.Mutex.unlock_shared();
			} else if (msgType == "ping") {
				if (SendJsonMessage({
					{ "type", "pong" },
					{ "id", client.Id },
				})) {
					lastPing = GetTickCount64();
				}
			} else if (msgType == "disconnect") {
				auto msgId = msg["id"];
				if (!msgId.is_number_integer()) {
					continue;
				}

				players.Mutex.lock();
				players.List.erase(std::remove_if(players.List.begin(), players.List.end(), [&msgId](Client::Player *p) {
					if (p->Id != msgId) {
						return false;
					}

					if (p->Pawn) {
						Engine::Despawn(p->Pawn);
						p->Pawn = nullptr;
					}

					AddChatMessage(p->Name + " left the room");

					delete p;
					return true;
				}));
				players.Mutex.unlock();
			}
		}

		if (statusThread.joinable()) {
			statusThread.join();
		}

		if (playerHandlerThread.joinable()) {
			playerHandlerThread.join();
		}

		printf("client: shutdown\n");
	}
}

static void OnTick(float delta) {
	static float sum = 0;
	sum += delta;

	auto pawn = Engine::GetPlayerPawn();
	if (pawn && !loading && connected) {
		if (sum > 0.016f) {
			Client::PACKET_COMPRESSED packet;
			packet.Id = client.Id;
			packet.Position = pawn->Location;
			packet.Position.Z += pawn->TargetMeshTranslationZ;
			packet.Yaw = pawn->Rotation.Yaw % 0x10000;

			auto bonesBase = reinterpret_cast<byte *>(pawn->Mesh3p->LocalAtoms.Buffer());
			for (auto i = 0; i < LENGTH(CompressedBoneOffsets); ++i) {
				packet.CompressedBones[i] = static_cast<short>(roundf(*reinterpret_cast<float *>(bonesBase + CompressedBoneOffsets[i]) * 215.0f));
			}

			sendto(udpSocket, reinterpret_cast<const char *>(&packet), sizeof(packet), 0, reinterpret_cast<const sockaddr *>(&server), sizeof(server));

			sum = 0;
		}
	}
}

static void OnRender(IDirect3DDevice9 *device) {
	static const auto inputHeightOffset = 50.0f;
	static const auto inputWidthOffset = 50.0f;
	
	if (players.ShowNameTags) {
		auto window = ImGui::BeginRawScene("##client-backbuffer-nametags");
		players.Mutex.lock_shared();

		for (auto p : players.List) {
			if (p->Pawn && p->Level == client.Level) {
				auto pos = p->Pawn->Location;
				pos.Z = p->MaxZ;

				if (Engine::WorldToScreen(device, pos)) {
					auto size = ImGui::CalcTextSize(p->Name.c_str());
					auto topLeft = ImVec2(pos.X - size.x / 2.0f, pos.Y - size.y);

					window->DrawList->AddRectFilled(topLeft, ImVec2(pos.X + size.x / 2.0f, pos.Y), ImColor(ImVec4(0, 0, 0, 0.4f)));
					window->DrawList->AddText(topLeft, ImColor(ImVec4(1, 1, 1, 1)), p->Name.c_str());
				}
			}
		}

		players.Mutex.unlock_shared();
		ImGui::EndRawScene();
	}

	auto window = ImGui::BeginRawScene("##client-backbuffer-chat");
	auto &io = ImGui::GetIO();

	auto width = io.DisplaySize.x / 3.0f;

	auto opacity = 1.0f;
	if (!chat.Focused) {
		if (chat.ShowOverlay) {
			auto diff = static_cast<float>(GetTickCount64() - chat.LastTime) / 1000.0f;
			if (diff > 5.0f) {
				opacity = max(0, 1.0f - (diff - 5.0f));
			}
		} else {
			opacity = 0.0f;
		}
	}

	if (opacity > 0.0f) {
		chat.Mutex.lock();

		auto height = ImGui::CalcTextSize(chat.Raw.c_str(), nullptr, false, width).y + (ImGui::GetTextLineHeight() / 6.0f);
		auto pos = ImVec2(inputWidthOffset, io.DisplaySize.y - inputHeightOffset - height);

		ImGui::SetWindowPos(pos, ImGuiCond_Always);
		ImGui::SetWindowSize(ImVec2(window->Size.x, max(window->Size.y, height)));

		window->DrawList->AddRectFilled(pos, ImVec2(pos.x + width, pos.y + height), ImColor(ImVec4(0, 0, 0, 0.4f * opacity)));
	
		ImGui::PushTextWrapPos(width);
		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1, 1, 1, opacity));
		ImGui::TextWrapped(chat.Raw.c_str());
		ImGui::PopStyleColor();

		chat.Mutex.unlock();
	}

	ImGui::EndRawScene();

	if (chat.Focused) {
		auto window = ImGui::BeginRawScene("##client-backbuffer-chatinput");

		ImGui::SetWindowPos(ImVec2(inputWidthOffset, io.DisplaySize.y - inputHeightOffset), ImGuiCond_Always);
		ImGui::SetKeyboardFocusHere(0);

		ImGui::PushItemWidth(io.DisplaySize.x - inputWidthOffset * 2);
		ImGui::InputText("##client-chat-overlay-input", chatInput, sizeof(chatInput));
		ImGui::PopItemWidth();

		ImGui::EndRawScene();
	}
}

static void MultiplayerTab() {
	ImGui::Text("Status: %s", connected ? "Connected" : "Connecting");

	auto nameInputCallback = []() {
		if (client.Name != nameInput) {
			AddChatMessage(client.Name + " renamed to " + nameInput);
			client.Name = nameInput;
			Settings::SetSetting("client", "name", client.Name);

			if (connected) {
				SendJsonMessage({
					{ "type", "name" },
					{ "id", client.Id },
					{ "name", client.Name },
					});
			}
		}
	};
	
	ImGui::Text("Name");
	ImGui::SameLine();
	if (ImGui::InputText("##client-name-input", nameInput, sizeof(nameInput), ImGuiInputTextFlags_EnterReturnsTrue)) {
		nameInputCallback();
	}

	ImGui::SameLine();
	if (ImGui::Button("Change##client-name-button")) {
		nameInputCallback();
	}
	
	ImGui::Text("Character");
	ImGui::SameLine();

	auto selectedCharacter = Engine::Characters[static_cast<size_t>(client.Character)];
	if (ImGui::BeginCombo("##client-character", selectedCharacter)) {
		for (auto i = 0; i < IM_ARRAYSIZE(Engine::Characters); ++i) {
			auto c = Engine::Characters[i];
			auto s = (c == selectedCharacter);
			if (ImGui::Selectable(c, s)) {
				client.Character = static_cast<Engine::Character>(i);
				Settings::SetSetting("client", "character", client.Character);

				if (connected) {
					SendJsonMessage({
						{ "type", "character" },
						{ "id", client.Id },
						{ "character", client.Character },
					});
				}
			}

			if (s) {
				ImGui::SetItemDefaultFocus();
			}
		}

		ImGui::EndCombo();
	}

	auto roomInputCallback = []() {
		if (room != roomInput) {
			room = roomInput;
			Settings::SetSetting("client", "room", room);

			if (connected) {
				Disconnect();
			}
		}
	};

	ImGui::Text("Room");
	ImGui::SameLine();
	if (ImGui::InputText("##client-room-input", roomInput, sizeof(roomInput), ImGuiInputTextFlags_EnterReturnsTrue)) {
		roomInputCallback();
	}

	ImGui::SameLine();
	if (ImGui::Button("Join##client-room-button")) {
		roomInputCallback();
	}

	if (ImGui::Hotkey("Chat Keybind##client-chat-keybind", &chat.Keybind)) {
		Settings::SetSetting("client", "chatKeybind", chat.Keybind);
	}

	if (ImGui::Checkbox("Show Nametags##client-show-nametags", &players.ShowNameTags)) {
		Settings::SetSetting("client", "showNameTags", players.ShowNameTags);
	}

	ImGui::SameLine();

	if (ImGui::Checkbox("Show Chat Overlay##client-show-chat", &chat.ShowOverlay)) {
		Settings::SetSetting("client", "showChatOverlay", chat.ShowOverlay);
	}

	ImGui::Text("Chat");

	chat.Mutex.lock();
	ImGui::InputTextMultiline("##client-chat", const_cast<char *>(chat.Raw.c_str()), chat.Raw.size(), { 0, 0 }, ImGuiInputTextFlags_ReadOnly);
	chat.Mutex.unlock();

	if (ImGui::InputText("##client-chat-input", chatInput, sizeof(chatInput), ImGuiInputTextFlags_EnterReturnsTrue)) {
		SendChatInput();
	}

	ImGui::SameLine();
	if (ImGui::Button("Send##client-chat-send")) {
		SendChatInput();
	}

	players.Mutex.lock_shared();
	if (ImGui::TreeNode("##client-players", "Players (%d)", players.List.size())) {
		for (auto p : players.List) {
			ImGui::Text("%s - %s", p->Name.c_str(), p->Level.c_str());
			ImGui::SameLine();
			if (ImGui::Button(("Goto##client-goto-" + std::to_string(p->Id)).c_str()) && p->Level == client.Level && p->Pawn) {
				auto pawn = Engine::GetPlayerPawn();
				if (pawn) {
					pawn->Location = p->Pawn->Location;
				}
			}
		}

		ImGui::TreePop();
	}
	players.Mutex.unlock_shared();
}

bool Client::Initialize() {
	// Settings
	client.Name = Settings::GetSetting("client", "name", "anonymous").get<std::string>();
	strncpy(nameInput, client.Name.c_str(), sizeof(nameInput) - 1);

	room = Settings::GetSetting("client", "room", "lobby").get<std::string>();
	strncpy(roomInput, room.c_str(), sizeof(roomInput) - 1);

	client.Character = Settings::GetSetting("client", "character", Engine::Character::Faith).get<Engine::Character>();

	chat.Keybind = Settings::GetSetting("client", "chatKeybind", 0x54);

	players.ShowNameTags = Settings::GetSetting("client", "showNameTags", true);
	chat.ShowOverlay = Settings::GetSetting("client", "showChatOverlay", true);

	// Functions
	Menu::AddTab("Multiplayer", MultiplayerTab);
	Engine::OnTick(OnTick);
	Engine::OnRenderScene(OnRender);

	Engine::OnInput([](int msg, int keycode) {
		if (!chat.Focused && msg == WM_KEYDOWN && keycode == chat.Keybind) {
			chat.Focused = true;
			Engine::BlockInput(true);
		}
	});

	Engine::OnSuperInput([](int msg, int keycode) {
		if (chat.Focused) {
			if (msg == WM_KEYUP && keycode == VK_RETURN) {
				SendChatInput();
				chat.Focused = false;
				Engine::BlockInput(false);
			} else if (msg == WM_KEYUP && keycode == VK_ESCAPE) {
				chat.Focused = false;
				Engine::BlockInput(false);
			}
		}
	});

	Engine::OnActorTick([](Classes::AActor *actor) {
		if (!actor) {
			return;
		}

		players.Mutex.lock_shared();

		for (auto &p : players.List) {
			if (p->Pawn == actor && p->Id == p->LastPacket.Id) {
				p->Pawn->Location = p->LastPacket.Position;
				p->Pawn->Rotation = { 0, p->LastPacket.Yaw, 0 };

				Classes::FBox boundingBox;
				p->Pawn->GetComponentsBoundingBox(&boundingBox);
				p->MaxZ = boundingBox.Max.Z;
			}
		}

		players.Mutex.unlock_shared();
	});

	Engine::OnBonesTick([](Classes::TArray<Classes::FBoneAtom> *bones) {
		players.Mutex.lock_shared();

		for (auto &p : players.List) {
			if (p->Pawn && &p->Pawn->Mesh3p->LocalAtoms == bones && p->Id == p->LastPacket.Id) {
				Engine::TransformBones(p->Character, bones, p->LastPacket.Bones);
			}
		}

		players.Mutex.unlock_shared();
	});

	Engine::OnPreLevelLoad([](const wchar_t *levelNameW) {
		players.Mutex.lock_shared();
		loading = true;

		client.Level = std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>().to_bytes(levelNameW);
		std::transform(client.Level.begin(), client.Level.end(), client.Level.begin(), [](char c) {
			return tolower(c);
		});

		for (auto &p : players.List) {
			p->Pawn = nullptr;
		}

		players.Mutex.unlock_shared();
	});

	Engine::OnPostLevelLoad([](const wchar_t *) {
		if (client.Level != "tdmainmenu") {
			players.Mutex.lock_shared();

			for (auto &p : players.List) {
				if (!p->Pawn && p->Level == client.Level) {
					Engine::SpawnCharacter(p->Character, p->Pawn);
				}
			}

			loading = false;
			players.Mutex.unlock_shared();
		}

		if (connected) {
			SendJsonMessage({
				{ "type", "level" },
				{ "id", client.Id },
				{ "level", client.Level },
			});
		}
	});

	Engine::OnPreDeath([]() {
		players.Mutex.lock_shared();
		loading = true;

		for (auto &p : players.List) {
			p->Pawn = nullptr;
		}

		players.Mutex.unlock_shared();
	});

	Engine::OnPostDeath([]() {
		players.Mutex.lock_shared();
		loading = false;

		for (auto &p : players.List) {
			if (!p->Pawn && p->Level == client.Level) {
				Engine::SpawnCharacter(p->Character, p->Pawn);
			}
		}

		players.Mutex.unlock_shared();
	});

	std::thread(ClientListener).detach();
	return true;
}

std::string Client::GetName() {
	return "Multiplayer Client";
}