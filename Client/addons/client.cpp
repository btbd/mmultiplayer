#include "../stdafx.h"

static char roomInput[0xFF] = "lobby";
static char nameInput[0xFF] = "anonymous";

static auto connected = false, loading = false;
static std::string room(roomInput), chat;
static sockaddr_in server = { 0 };
static SOCKET tcpSocket = 0, udpSocket = 0;

static Client::Player client = {
	0, Engine::Character::Faith, std::string(nameInput),
};

static struct {
	std::vector<Client::Player> List;
	std::shared_mutex Mutex;
} players;

static Client::Player *GetPlayerById(unsigned int id) {
	for (auto i = 0UL; i < players.List.size(); ++i) {
		auto p = &players.List[i];
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

static void Disconnect() {
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
	
	connected = false;
}

static void PlayerHandler() {
	std::thread receiver([]() {
		for (;;) {
			Client::PACKET packet;

			int serverSize = sizeof(server);
			if (recvfrom(udpSocket, reinterpret_cast<char *>(&packet), sizeof(packet), 0, reinterpret_cast<sockaddr *>(&server), &serverSize) < 0) {
				return;
			}

			players.Mutex.lock_shared();

			auto player = GetPlayerById(packet.Id);
			if (player) {
				player->LastPacket = packet;
			}

			players.Mutex.unlock_shared();
		}
	});

	for (;;) {
		if (!loading) {
			auto pawn = Engine::GetPlayerPawn();
			if (pawn) {
				Client::PACKET packet;
				packet.Id = client.Id;
				packet.Position = pawn->Location;
				packet.Rotation = pawn->Rotation;
				memcpy(packet.Bones, pawn->Mesh3p->LocalAtoms.Buffer(), PLAYER_PAWN_BONE_COUNT * sizeof(Classes::FBoneAtom));

				if (sendto(udpSocket, reinterpret_cast<const char *>(&packet), sizeof(packet), 0, reinterpret_cast<const sockaddr *>(&server), sizeof(server)) < 0) {
					break;
				}
			}
		}

		Sleep(17);
	}

	if (receiver.joinable()) {
		receiver.join();
	}
}

static bool RecvJsonMessage(json &msg) {
	char buffer[0xFFF] = { 0 };
	if (recv(tcpSocket, buffer, sizeof(buffer), 0) <= 0) {
		return false;
	}

	msg = json::parse(buffer);
	return true;
}

static bool SendJsonMessage(json msg) {
	auto data = msg.dump();
	if (send(tcpSocket, data.c_str(), data.length(), 0) != data.length()) {
		return false;
	}

	return true;
}

static bool Join() {
	auto world = Engine::GetWorld();
	if (!world) {
		printf("client: no world available\n");
		return false;
	}

	client.Level = std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>().to_bytes(world->GetMapName(false).c_str());

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

static void AddChatMessage(Client::Player *player, std::string message) {
	chat += player->Name + ": " + message + "\n";
}

static void ClientListener() {
	for (;; Disconnect(), Sleep(2000)) {
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
		std::thread playerHandlerThread(PlayerHandler);

		auto lastPing = GetTickCount64();
		std::thread statusThread([&lastPing]() {
			for (;;) {
				Sleep(2000);

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

				Client::Player player;
				player.Id = msgId;
				player.Name = msgName.get<std::string>();
				player.Character = msgCharacter;
				player.Level = msgLevel.get<std::string>();
				if (player.Level == client.Level) {
					if (!loading) {
						Engine::SpawnCharacter(player.Character, player.Pawn);
					}
				} else {
					player.Pawn = nullptr;
				}

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
					player->Name = msgName.get<std::string>();
				}

				players.Mutex.unlock_shared();
			} else if (msgType == "chat") {
				auto msgId = msg["id"];
				auto msgBody = msg["name"];

				if (!msgId.is_number_integer() || !msgBody.is_string()) {
					continue;
				}

				players.Mutex.lock_shared();

				auto player = GetPlayerById(msgId);
				if (player) {
					AddChatMessage(player, msgBody.get<std::string>());
				}

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
				players.List.erase(std::remove_if(players.List.begin(), players.List.end(), [&msgId](Client::Player &p) {
					if (p.Id != msgId) {
						return false;
					}

					if (p.Pawn) {
						Engine::Despawn(p.Pawn);
						p.Pawn = nullptr;
					}

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

static void OnBonesTick(Classes::TArray<Classes::FBoneAtom> *bones) {
	players.Mutex.lock_shared();

	for (auto &p : players.List) {
		if (p.Pawn && &p.Pawn->Mesh3p->LocalAtoms == bones && p.Id == p.LastPacket.Id) {
			p.Pawn->Location = p.LastPacket.Position;
			p.Pawn->Rotation = p.LastPacket.Rotation;
			Engine::TransformBones(p.Character, bones, p.LastPacket.Bones);
			p.Pawn->Mesh3p->bNeedsUpdateTransform = true;
		}
	}

	players.Mutex.unlock_shared();
}

static void MultiplayerTab() {
	ImGui::Text("Status: %s", connected ? "Connected" : "Connecting");
	
	ImGui::InputText("Name##client-input", nameInput, sizeof(nameInput));
	ImGui::SameLine();
	if (ImGui::Button("Change##client-name-button")) {
		client.Name = nameInput;

		if (connected) {
			SendJsonMessage({
				{ "type", "name" },
				{ "id", client.Id },
				{ "name", client.Name },
			});
		}
	}
	
	ImGui::InputText("Room##client-input", roomInput, sizeof(roomInput));
	ImGui::SameLine();
	if (ImGui::Button("Join##client-name-button")) {
		room = roomInput;
	}

	ImGui::Text("Chat");
	ImGui::InputTextMultiline("##client-chat", const_cast<char *>(chat.c_str()), chat.size(), { 0, 0 }, ImGuiInputTextFlags_ReadOnly);

	static char chatInput[0x200] = { 0 };
	ImGui::InputText("##client-chat-input", chatInput, sizeof(chatInput));
	ImGui::SameLine();
	if (ImGui::Button("Send##client-chat-send") && connected) {
		SendJsonMessage({
			{ "type", "chat" },
			{ "id", client.Id },
			{ "body", chatInput },
		});

		AddChatMessage(&client, std::string(chatInput));
		chatInput[0] = 0;
	}
}

bool Client::Initialize() {
	Menu::AddTab("Multiplayer", MultiplayerTab);
	Engine::OnBonesTick(OnBonesTick);

	Engine::OnPreLevelLoad([](const wchar_t *levelName) {
		players.Mutex.lock();
		loading = true;

		for (auto &p : players.List) {
			p.Pawn = nullptr;
		}

		players.Mutex.unlock();
	});

	Engine::OnPostLevelLoad([](const wchar_t *levelName) {
		players.Mutex.lock();

		for (auto &p : players.List) {
			if (!p.Pawn && p.Level == std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>().to_bytes(levelName)) {
				Engine::SpawnCharacter(p.Character, p.Pawn);
			}
		}

		loading = false;
		players.Mutex.unlock();
	});

	std::thread(ClientListener).detach();
	return true;
}

std::string Client::GetName() {
	return "Multiplayer Client";
}