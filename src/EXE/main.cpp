#include "stdafx.h"

// #define DEBUG
#ifndef DEBUG
#define printf //
#endif

char index = 0;
SOCKET server_socket, client_socket;
SOCKADDR_IN server_addr = { 0 };
char clients[0xFF][0xFF];
int clients_length = 0;
SETTINGS settings = { 0 };
DWORD last_ping = 0;

HANDLE process = 0;
DWORD  base_path = 0;
DWORD  players = 0;
DWORD  level = 0;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	CreateMutexA(0, FALSE, "Local\\MMultiplayer.exe");
	if (GetLastError() == ERROR_ALREADY_EXISTS) {
		return -1;
	}

#ifdef DEBUG
	AllocConsole();
	freopen("CONIN$", "r", stdin);
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);
#endif

	if (!PathFileExistsA("mp_actors.me1")) {
		MessageBoxA(0, "Unable to load the sublevel", "Error", MB_ICONWARNING);
		printf("unable to load the sublevel\n");
		return 1;
	}

	LoadLibraryA("MDLL.dll");
	if (!GetModuleHandleA("MDLL.dll")) {
		MessageBoxA(0, "Unable to load the DLL", "Error", MB_ICONWARNING);
		printf("unable to load the DLL\n");
		return 1;
	}

	WSADATA wsaData = { 0 };
	struct sockaddr_in self = { 0 };
	SOCKADDR_IN server = { 0 };

	if (WSAStartup(MAKEWORD(2, 2), &wsaData)) {
		printf("wsastartup failed\n");
		return 1;
	}

	client_socket = socket(AF_INET, SOCK_DGRAM, 0);

	if (client_socket < 0) {
		printf("failed to create a client socket\n");
		return 1;
	}

	int enable = 1;
	if (setsockopt(client_socket, SOL_SOCKET, SO_REUSEADDR, (char *)&enable, sizeof(int)) < 0) {
		printf("setsockopt(SO_REUSEADDR) failed");
		return 1;
	}

	self.sin_family = AF_INET;
	self.sin_addr.s_addr = htonl(INADDR_ANY);
	self.sin_port = htons(CLIENT_PORT);
	if (bind(client_socket, (struct sockaddr *)&self, sizeof(self)) < 0) {
		printf("failed to bind\n");
		return 1;
	}

	struct addrinfo *result = 0;
	getaddrinfo("soaphub.org", 0, 0, &result);
	for (; result; result = result->ai_next) {
		if (result->ai_family == AF_INET) {
			server.sin_addr = ((SOCKADDR_IN *)result->ai_addr)->sin_addr;
		}
	}

	printf("server ip: %s\n", inet_ntoa(server.sin_addr));

	if (!server.sin_addr.s_addr) {
		printf("unable to get server ip\n");
		MessageBoxA(0, "Unable to acquire server IP", "Error", 0);
		return 0;
	}

	server.sin_family = AF_INET;
	server.sin_port = htons(SERVER_PORT);
	server_addr = server;
	server_addr.sin_port = htons(CLIENT_PORT);

	if ((server_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) == INVALID_SOCKET) {
		printf("unable to create a server socket\n");
		return 1;
	}

	if (connect(server_socket, (SOCKADDR *)&server, sizeof(server)) == SOCKET_ERROR) {
		MessageBoxA(0, "Unable to connect to the server", "Error", MB_ICONWARNING);
		printf("unable to connect to server\n");
		return 1;
	}

	if (connect(client_socket, (SOCKADDR *)&server_addr, sizeof(server_addr)) == SOCKET_ERROR) {
		MessageBoxA(0, "UDP punch failed", "Error", MB_ICONWARNING);
		printf("UDP punch failed\n");
		return 1;
	}

	if (!TestUDP()) {
		char msg[0xFF] = { 0 };
		sprintf(msg, "Check your network connection and make sure that port %d (UDP) is open.", CLIENT_PORT);
		MessageBoxA(0, msg, "Error", 0);
		return 1;
	}

	printf("connected\n");

	send(server_socket, "v\n", 2, 0);
	char version[0xFF] = { 0 };
	int len = recv(server_socket, version, sizeof(version), 0);
	if (version[len - 1] == '\n') version[len - 1] = 0;

	printf("server version: %s\nclient version: %s\n", version, VERSION);
	if (strcmp(version, VERSION) != 0) {
		char msg[0xFF] = { 0 };
		ShellExecuteA(0, 0, "http://www.github.com/btbd/mmultiplayer/releases", 0, 0, SW_SHOW);
		sprintf(msg, "Outdated version\nServer: %s\nClient: %s", version, VERSION);
		MessageBoxA(0, msg, "Error", MB_ICONWARNING);
		printf("outdated version");
		return 1;
	}

	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)WindowThread, 0, 0, 0);
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ProcessListener, 0, 0, 0);
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Listener, 0, 0, 0);
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Sender, 0, 0, 0);

	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ServerListener, 0, 0, 0);

	last_ping = timeGetTime();
	for (;;) {
		if (timeGetTime() - last_ping > 2500 || send(server_socket, "p\n", 2, 0) != 2) {
			closesocket(server_socket);
			server_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
			connect(server_socket, (SOCKADDR *)&server, sizeof(server));
			connect(client_socket, (SOCKADDR *)&server_addr, sizeof(server_addr));
			last_ping = timeGetTime();

			printf("reconnected\n");
		}

		Sleep(1000);
	}

	return 0;
}

void TestUDPListener(bool *b) {
	struct sockaddr_in client = { 0 };
	char buffer[8] = { 0 };

	for (;;) {
		int size = sizeof(client);
		if (recvfrom(client_socket, buffer, sizeof(buffer), 0, (struct sockaddr *)&client, &size) > 0 && memcmp(buffer, "received", 8) == 0) {
			*b = true;
			return;
		}
	}
}

bool TestUDP() {
	bool r = false;
	HANDLE thread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)TestUDPListener, &r, 0, 0);
	for (int i = 0; i < 30; ++i) {
		sendto(client_socket, "pinging", 7, 0, (struct sockaddr *)&server_addr, sizeof(server_addr));
		if (r) {
			TerminateThread(thread, 0);
			return true;
		}
		Sleep(100);
	}

	TerminateThread(thread, 0);
	return false;
}

void ServerListener() {
	int size = 0;
	char buffer[0xFFF] = { 0 };
	for (;;) {
		memset(buffer, 0, sizeof(buffer));
		if ((size = recv(server_socket, buffer, sizeof(buffer), 0)) > 0 && strchr(buffer, '\n')) {
			ParseMessage(buffer);
		}
	}
}

void ParseMessage(char *buffer) {
	for (;;) {
		char *end = strchr(buffer, '\n');
		if (!end) break;
		*end = 0;

		if (*buffer == 'c') {
			++buffer;
			clients_length = 0;

			char *c;
			while ((c = strchr(buffer, ' '))) {
				*c = 0;
				strcpy(clients[clients_length], buffer);

				printf("added client: %s\n", buffer);

				buffer = c + 1;
				++clients_length;
			}

			printf("client count: %d\n", clients_length);
		} else if (*buffer == 'i') {
			++buffer;
			sscanf(buffer, "%hhu", &index);
			printf("index: %d\n", index);

			SetIndex();
		} else if (*buffer == 'm') {
			++buffer;
			printf("chat msg: %s\n", buffer);

			if (process) {
				DWORD length = strlen(buffer) + 1;
				LPVOID msg = VirtualAllocEx(process, NULL, length, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
				WriteBuffer(process, msg, buffer, length);
				WaitForSingleObject(CallFunction("EXPORT_AddChatMessage", msg), INFINITE);
				VirtualFreeEx(process, msg, 0, MEM_RELEASE);
			}
		} else if (*buffer == 'k') {
			++buffer;
			printf("kismet message: %s\n", buffer);

			ExecuteCommand(buffer);
		} else if (*buffer == 'p') {
			last_ping = timeGetTime();
		}

		buffer = end + 1;
	}
}

void ProcessListener() {
	DWORD pid, tpid;
	for (pid = tpid = 0;;) {
		tpid = GetProcessInfoByName(L"MirrorsEdge.exe").th32ProcessID;
		if (!tpid) {
			process = 0;
		} else if (pid != tpid && GetModuleInfoByName(tpid, L"HID.dll").modBaseAddr > 0 && CopyMaps(tpid)) {
			pid = tpid;
			if (process) {
				CloseHandle(process);
			}

			process = OpenProcess(PROCESS_ALL_ACCESS, 0, pid);
			if (process) {
				MODULEENTRY32 module = GetModuleInfoByName(pid, L"MirrorsEdge.exe");
				base_path = (DWORD)ProcessFindPattern(process, module.modBaseAddr, module.modBaseSize, "\x89\x0D\x00\x00\x00\x00\xB9\x00\x00\x00\x00\xFF", "xx????x????x");
				base_path = ReadInt(process, (void *)(base_path + 2));

				if (!GetModuleInfoByName(pid, L"MDLL.dll").dwSize) {
					char path[MAX_PATH];
					GetFullPathNameA("MDLL.dll", MAX_PATH, path, NULL);

					LPVOID loadLibAddr = (LPVOID)GetProcAddress(GetModuleHandleA("kernel32.dll"), "LoadLibraryA");
					LPVOID arg = (LPVOID)VirtualAllocEx(process, NULL, strlen(path) + 1, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
					WriteProcessMemory(process, arg, path, strlen(path) + 1, NULL);

					HANDLE thread = CreateRemoteThread(process, 0, 0, (LPTHREAD_START_ROUTINE)loadLibAddr, arg, 0, 0);
					WaitForSingleObject(thread, INFINITE);
					CloseHandle(thread);

					VirtualFreeEx(process, arg, 0, MEM_RELEASE);
				}

				LPVOID base = VirtualAllocEx(process, NULL, sizeof(DWORD), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);

				do {
					Sleep(100);
					WaitForSingleObject(CallFunction("EXPORT_GetPlayersBase", base), INFINITE);
					ReadProcessMemory(process, base, &players, sizeof(DWORD), NULL);
				} while (!players);

				do {
					Sleep(100);
					WaitForSingleObject(CallFunction("EXPORT_GetLevelBase", base), INFINITE);
					ReadProcessMemory(process, base, &level, sizeof(DWORD), NULL);
				} while (!level);

				WriteInt(process, base, (int)GetCurrentProcessId());
				WaitForSingleObject(CallFunction("EXPORT_SetHostPID", base), INFINITE);

				WriteInt(process, base, (int)SendServer);
				WaitForSingleObject(CallFunction("EXPORT_SetSendServer", base), INFINITE);

				WriteInt(process, base, index);
				WaitForSingleObject(CallFunction("EXPORT_SetIndex", base), INFINITE);

				VirtualFreeEx(process, base, 0, MEM_RELEASE);
			} else {
				pid = tpid = 0;
			}
		}

		Sleep(2000);
	}
}

void Listener() {
	int client_size, size;
	struct sockaddr_in client;

	PACKET packet = { 0 };
	PLAYER player = { 0 };
	int length = 0;
	DWORD base = 0, player_bones = 0;

	char bones[BONES_SIZE] = { 0 };

	for (;;) {
		client_size = sizeof(client);
		memset(&packet, 0, sizeof(PACKET));
		size = recvfrom(client_socket, (char *)&packet, sizeof(PACKET), 0, (struct sockaddr *)&client, (int *)&client_size);

		if (process && players && size == sizeof(PACKET) && packet.level && packet.level == ReadInt(process, (void *)level) && (player_bones = (DWORD)GetPointer(process, 3, GetPlayerBase() + 0x5DC, 0x24C, 0x00))) {
			memset(&player, 0, sizeof(PLAYER));
			base = players + (sizeof(PLAYER) * packet.index);
			ReadBuffer(process, (void *)base, (char *)&player, sizeof(PLAYER));
			if (!player.base || !player.bones || !player.name) {
				continue;
			}

			int character = packet.index / ACTORS_PER_CHARACTER;
			WriteBuffer(process, (void *)(player.base + 0xE8), (char *)packet.position, sizeof(float) * 3);
			if (fabs(packet.position[3]) > 750) {
				packet.position[3] = 110;
			}
			WriteFloat(process, (void *)(player.base + 0x40), packet.position[3]);
			WriteInt(process, (void *)(player.base + 0xF8), packet.rotation);

			ReadBuffer(process, (void *)player_bones, bones, BONES_SIZE);
			for (int i = 0; i < BONE_OFFSET_COUNT; ++i) {
				*(float *)(bones + BONE_OFFSETS[i]) = ((float)((short *)packet.bones)[i]) / 215;
				// *(float *)(bones + BONE_OFFSETS[i]) = ((float *)packet.bones)[i];
			}
			WriteBuffer(process, player.bones, bones, BONES_SIZE);

			WriteInt(process, (void *)(base + ((DWORD)&player.level - (DWORD)&player)), packet.level);
			WriteInt(process, (void *)(base + ((DWORD)&player.ping - (DWORD)&player)), 0);

			WriteBuffer(process, player.name, packet.name, 33);
		}
	}
}

void Sender() {
	PACKET packet = { 0 };
	DWORD player_base, player_bones;

	char bones[BONES_SIZE] = { 0 };

	for (;;) {
		if (process && !settings.spectator) {
			memset(&packet, 0, sizeof(PACKET));

			player_base = GetPlayerBase();
			if (!player_base) {
				goto next;
			}

			player_bones = (DWORD)GetPointer(process, 3, player_base + 0x5DC, 0x24C, 0x00);
			if (!player_bones) {
				goto next;
			}

			packet.index = index;
			ReadBuffer(process, (void *)player_bones, bones, BONES_SIZE);
			for (int i = 0; i < BONE_OFFSET_COUNT; ++i) {
				((short *)packet.bones)[i] = (short)((*(float *)(bones + BONE_OFFSETS[i])) * 215);
				// ((float *)packet.bones)[i] = *(float *)(bones + BONE_OFFSETS[i]);
			}
			ReadBuffer(process, (void *)(player_base + 0xE8), (char *)packet.position, sizeof(float) * 3);
			packet.position[2] += (float)fabs(ReadFloat(process, (void *)(player_base + 0x5D4)));
			packet.position[3] = (ReadFloat(process, (void *)(player_base + 0x9B4)) - packet.position[2]) + 40;

			packet.rotation = ReadInt(process, (void *)(player_base + 0xF8)) % 0x10000;
			packet.level = ReadInt(process, (void *)level);
			memcpy(packet.name, settings.username, 33);
			packet.name[32] = 0;

			sendto(client_socket, (char *)&packet, sizeof(PACKET), 0, (struct sockaddr *)&server_addr, sizeof(server_addr));
			/* for (int i = 0; i < clients_length; ++i) {
			Send(clients[i], (char *)&packet, sizeof(PACKET));
			} */
		}

	next:
		Sleep(8);
	}
}

void ExecuteCommand(char *command) {
	printf("executing: %s\n", command);

	if (process) {
		DWORD length = strlen(command) + 1;
		LPVOID msg = VirtualAllocEx(process, NULL, length, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
		WriteBuffer(process, msg, command, length);
		WaitForSingleObject(CallFunction("EXPORT_ExecuteCommand", msg), INFINITE);
		VirtualFreeEx(process, msg, 0, MEM_RELEASE);
	}
}

void SetIndex() {
	LPVOID base = VirtualAllocEx(process, NULL, sizeof(DWORD), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
	WriteInt(process, base, index);
	WaitForSingleObject(CallFunction("EXPORT_SetIndex", base), INFINITE);
	VirtualFreeEx(process, base, 0, MEM_RELEASE);
}

bool CopyMaps(DWORD pid) {
	HANDLE process = OpenProcess(PROCESS_ALL_ACCESS, 0, pid);
	if (!process) {
		return false;
	}

	char to[0xFF];
	char from[0xFF];

	int l = GetModuleFileNameExA(process, NULL, to, 0xFF) - 1;
	printf("game exe path: %s\n", to);

	// Remove the "Binaries\MirrorsEdge.exe"
	for (int c = 0; (to[l] != '\\' || ++c < 2) && l > -1; to[l] = 0, --l);

	strcat(to, "TdGame\\CookedPC\\Maps\\mp_actors.me1");
	GetCurrentDirectoryA(0xFF, from);
	strcat(from, "\\mp_actors.me1");

	if (PathFileExistsA(to) && GetFileSize(to) == GetFileSize(from)) {
		CloseHandle(process);
		return true;
	}

	to[l + 1] = 0;
	strcat(to, "TdGame\\CookedPC\\Maps");

	printf("game maps path: %s\n", to);
	printf("mp_actors path: %s\n", from);

	SHFILEOPSTRUCTA s = { 0 };
	s.wFunc = FO_COPY;
	s.fFlags = FOF_SILENT | FOF_NOCONFIRMMKDIR | FOF_NOCONFIRMATION | FOF_NOERRORUI | FOF_NO_UI;
	s.pTo = to;
	s.pFrom = from;
	SHFileOperationA(&s);

	GetModuleFileNameExA(process, NULL, to, 0xFF);

	HANDLE token;
	TOKEN_ELEVATION elev;
	DWORD tRet = sizeof(elev);

	OpenProcessToken(process, TOKEN_QUERY, &token);
	GetTokenInformation(token, TokenElevation, &elev, sizeof(elev), &tRet);

	TerminateProcess(process, 0);
	CloseHandle(process);

	if (elev.TokenIsElevated) {
		ShellExecuteA(0, "runas", to, 0, 0, SW_HIDE);
	} else {
		STARTUPINFOA si = { 0 };
		PROCESS_INFORMATION pi = { 0 };

		si.cb = sizeof(si);

		CreateProcessA(to, 0, 0, 0, 0, 0, 0, 0, &si, &pi);
	}

	return false;
}

void Send(char *ip, char *buffer, int size) {
	struct sockaddr_in client;
	client.sin_family = AF_INET;
	if (inet_pton(AF_INET, ip, &client.sin_addr) == 0) {
		printf("failed to get client ip: %s\n", ip);
		return;
	}
	client.sin_port = htons(CLIENT_PORT);

	if (sendto(client_socket, buffer, size, 0, (struct sockaddr *)&client, sizeof(struct sockaddr_in)) < 0) {
		printf("failed to send data\n");
	}
}

void SendServer(char *str) {
	if (str) {
		printf("sending");

		switch (*str) {
			case 'l':
				printf(" level");
				break;
			case 'k':
				printf(" kismet msg");
				break;
			case 't':
				printf(" sendto msg");
				break;
			case 'e': {
				printf(" echo");

				std::string repl(str + 1);
				repl = std::regex_replace(repl, std::regex("\\{me\\}"), settings.username);
				VirtualFree(str, 0, MEM_RELEASE);

				str = _strdup(repl.c_str());
				DWORD length = strlen(str) + 1;
				LPVOID msg = VirtualAllocEx(process, NULL, length, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
				WriteBuffer(process, msg, str, length);
				WaitForSingleObject(CallFunction("EXPORT_AddChatMessage", msg), INFINITE);
				VirtualFreeEx(process, msg, 0, MEM_RELEASE);
				free(str);

				return;
			}
			case 'm': {
				printf(" msg");
				char *msg = (char *)malloc(strlen(settings.username) + strlen(str + 1) + 5);
				int length = sprintf(msg, "m%s: %s\n", settings.username, str + 1);
				VirtualFree(str, 0, MEM_RELEASE);
				str = msg;
				break;
			}
			case 'b': {
				printf(" broadcast");
				std::string repl(str + 1);
				repl = std::regex_replace(repl, std::regex("\\{me\\}"), settings.username);
				repl.insert(0, "m");
				repl.append("\r\n");
				VirtualFree(str, 0, MEM_RELEASE);
				str = _strdup(repl.c_str());
				break;
			}
		}

		printf(": %s\n", str);
		send(server_socket, str, strlen(str), 0);

		VirtualFree(str, 0, MEM_RELEASE);
	}
}

HANDLE CallFunction(char *name, void *arg) {
	if (!process) {
		return NULL;
	}

	int base = (int)GetModuleInfoByName(GetProcessId(process), L"MDLL.dll").modBaseAddr;
	if (!base) {
		return NULL;
	}

	int offset = (int)GetProcAddress(GetModuleHandleA("MDLL.dll"), name) - (int)GetModuleHandleA("MDLL.dll");

	return CreateRemoteThread(process, NULL, 0, (LPTHREAD_START_ROUTINE)(base + offset), arg, 0, NULL);
}

DWORD GetPlayerBase() {
	if (!process) {
		return 0;
	}

	return (DWORD)GetPointer(process, 5, base_path, 0xCC, 0x4A4, 0x214, 0x00);
}

bool IsGameWindow(HWND hWnd) {
	char title[0xFF] = { 0 };
	char check[] = "Mirror's Edge";
	GetWindowTextA(hWnd, title, 0xFF);

	return memcmp(title, check, 13) == 0;
}

DWORD GetFileSize(char *path) {
	struct stat st;

	if (stat(path, &st) == 0) {
		return st.st_size;
	}

	return 0;
}

void SaveSettings(SETTINGS *s, bool startup) {
	char buffer[0xFF] = { 0 };

	if (!startup) {
		if (s->room != settings.room) {
			LeaveRoom();
			clients_length = 0;

			int length = sprintf(buffer, "r%d\n", s->room);
			send(server_socket, buffer, length, 0);

			length = sprintf(buffer, "m%s joined the room\n", s->username);
			send(server_socket, buffer, length, 0);
		} else if (strcmp(s->username, settings.username) != 0) {
			int length = sprintf(buffer, "m%s renamed to %s\n", settings.username, s->username);
			send(server_socket, buffer, length, 0);
		}
	} else {
		int length = sprintf(buffer, "r%d\n", s->room);
		send(server_socket, buffer, length, 0);

		length = sprintf(buffer, "m%s joined the room\n", s->username);
		send(server_socket, buffer, length, 0);
	}

	if (s->character != settings.character) {
		int length = sprintf(buffer, "c%d\n", s->character);
		send(server_socket, buffer, length, 0);
	}

	memcpy(&settings, s, sizeof(SETTINGS));

	sprintf(buffer, "set mpname strvalue %s\n", settings.username);
	ExecuteCommand(buffer);

	char character[0xFF] = { 0 };
	WCharToChar(character, CHARACTERS[s->character]);
	sprintf(buffer, "set mpchar strvalue %s\n", character);
	ExecuteCommand(buffer);

	char path[0xFF];
	GetTempPathA(0xFF, path);
	strcat(path, "multiplayer.settings");
	FILE *file = fopen(path, "wb");
	if (file) {
		fwrite(s, sizeof(SETTINGS), 1, file);
		fclose(file);
	}
}

void LeaveRoom() {
	char buffer[0xFF];
	int length = sprintf(buffer, "m%s left the room\n", settings.username);
	send(server_socket, buffer, length, 0);
}