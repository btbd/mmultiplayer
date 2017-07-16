#include "stdafx.h"

// #define DEBUG

char index = 0;
SOCKET server_socket, client_socket;
char clients[0xFF][0xFF];
int clients_length = 0;
SETTINGS settings;

HANDLE process = 0;
DWORD base_path = 0;
DWORD players = 0;
DWORD level = 0;

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

	LoadLibraryA("Multiplayer_DLL.dll");
	if (!GetModuleHandleA("Multiplayer_DLL.dll")) {
		printf("unable to load the DLL\n");
		return 1;
	}

	WSADATA wsaData;
	SOCKADDR_IN server = { 0 };
	struct sockaddr_in self;

	if (WSAStartup(MAKEWORD(2, 2), &wsaData)) {
		printf("wsastartup failed\n");
		return 1;
	}

	server.sin_family = AF_INET;
	server.sin_port = htons(SERVER_PORT);
	server.sin_addr.s_addr = inet_addr(IP);

	if ((server_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) == INVALID_SOCKET) {
		printf("unable to create a server socket\n");
		return 1;
	}

	if (connect(server_socket, (SOCKADDR *)&server, sizeof(server)) == SOCKET_ERROR) {
		MessageBoxA(0, "Unable to connect to the server", "Error", MB_ICONWARNING);
		printf("unable to connect\n");
		return 1;
	}

	printf("connected\n");

	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)WindowThread, 0, 0, 0);

	client_socket = socket(AF_INET, SOCK_DGRAM, 0);

	if (client_socket < 0) {
		printf("failed to create a client socket\n");
		return 1;
	}

	self.sin_family = AF_INET;
	self.sin_addr.s_addr = htonl(INADDR_ANY);
	self.sin_port = htons(CLIENT_PORT);
	if (bind(client_socket, (struct sockaddr *)&self, sizeof(self)) < 0) {
		printf("failed to bind\n");
		return 1;
	}

	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ProcessListener, 0, 0, 0);
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Listener, 0, 0, 0);
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Sender, 0, 0, 0);

	int size = 0;
	char buffer[0xFFF] = { 0 };
	for (;;) {
		memset(buffer, 0, sizeof(buffer));
		if ((size = recv(server_socket, buffer, sizeof(buffer), 0)) > 0) {
			if (strchr(buffer, 0x17)) {
				char *end = 0;
				char *buff = buffer;
				while ((end = strchr(buff, 0x17))) {
					*end = 0;

					ParseMessage(buff);

					buff = end + 1;
	
				}
			} else {
				ParseMessage(buffer);
			}

			/* char *end;
			char *buff = buffer;
			while ((end = strchr(buff, 0x17))) {
				*end = 0;
				printf("server: %s\n", buff);

				if (strchr(buff, '\t')) {
					*strchr(buff, '\t') = 0;
					sscanf(buff, "%hhu", &index);
					printf("index: %d\n", index);
				} else if (strchr(buff, '\n')) {
					clients_length = 0;

					if (buff[1] != '\0') {
						int c;
						char *b = buff;
						while ((c = (int)strchr(b, '\n')) != NULL) {
							*(char *)c = 0;
							clients[clients_length][0] = 0;
							strcat(clients[clients_length], b);

							b = (char *)(c + 1);
							++clients_length;
						}
					} else {
						printf("reset\n");
					}
				} else if (strchr(buff, '\r')) {
					printf("chat msg: %s\n", buff);

					DWORD length = strlen(buff) + 1;
					LPVOID msg = VirtualAllocEx(process, NULL, length, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
					WriteBuffer(process, msg, buff, length);
					WaitForSingleObject(CallFunction("EXPORT_AddChatMessage", msg), INFINITE);
					VirtualFreeEx(process, msg, 0, MEM_RELEASE);
				}

				buff = end + 1;
			} */
		}
	}

	closesocket(server_socket);
	return 0;
}

void ParseMessage(char *buff) {
	printf("server: %s\n", buff);

	if (strchr(buff, '\t')) {
		*strchr(buff, '\t') = 0;
		sscanf(buff, "%hhu", &index);
		printf("index: %d\n", index);
	} else if (strchr(buff, '\n')) {
		clients_length = 0;

		if (buff[1] != '\0') {
			int c;
			char *b = buff;
			while ((c = (int)strchr(b, '\n')) != NULL) {
				*(char *)c = 0;
				clients[clients_length][0] = 0;
				strcat(clients[clients_length], b);

				b = (char *)(c + 1);
				++clients_length;
			}
		} else {
			printf("reset\n");
		}
	} else if (strchr(buff, '\r')) {
		printf("chat msg: %s\n", buff);

		DWORD length = strlen(buff) + 1;
		LPVOID msg = VirtualAllocEx(process, NULL, length, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
		WriteBuffer(process, msg, buff, length);
		WaitForSingleObject(CallFunction("EXPORT_AddChatMessage", msg), INFINITE);
		VirtualFreeEx(process, msg, 0, MEM_RELEASE);
	}
}


void ProcessListener() {
	DWORD pid, tpid;
	for (pid = tpid = 0;;) {
		tpid = GetProcessInfoByName(L"MirrorsEdge.exe").th32ProcessID;
		if (!tpid) {
			process = 0;
		} else if (pid != tpid && GetProcessThreadCount(tpid) > 30) {
			pid = tpid;
			if (process) {
				CloseHandle(process);
			}

			process = OpenProcess(PROCESS_ALL_ACCESS, 0, pid);
			if (process) {
				CopyMaps();

				MODULEENTRY32 module = GetModuleInfoByName(pid, L"MirrorsEdge.exe");
				base_path = (DWORD)ProcessFindPattern(process, module.modBaseAddr, module.modBaseSize, "\x89\x0D\x00\x00\x00\x00\xB9\x00\x00\x00\x00\xFF", "xx????x????x");
				base_path = ReadInt(process, (void *)(base_path + 2));

				if (!GetModuleInfoByName(pid, L"Multiplayer_DLL.dll").dwSize) {
					char path[MAX_PATH];
					GetFullPathNameA("Multiplayer_DLL.dll", MAX_PATH, path, NULL);

					LPVOID loadLibAddr = (LPVOID)GetProcAddress(GetModuleHandleA("kernel32.dll"), "LoadLibraryA");
					LPVOID arg = (LPVOID)VirtualAllocEx(process, NULL, strlen(path) + 1, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
					WriteProcessMemory(process, arg, path, strlen(path) + 1, NULL);

					WaitForSingleObject(CreateRemoteThread(process, 0, 0, (LPTHREAD_START_ROUTINE)loadLibAddr, arg, 0, 0), INFINITE);

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

				WriteInt(process, base, (int)SendChatMessage);
				WaitForSingleObject(CallFunction("EXPORT_SetSendChatMessage", base), INFINITE);

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

	char bones[BONES_SIZE];

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

			WriteBuffer(process, (void *)(player.base + 0xE8), (char *)packet.position, sizeof(float) * 3);
			WriteFloat(process, (void *)(player.base + 0x40), packet.position[3]);
			WriteBuffer(process, (void *)(player.base + 0x100), (char *)packet.velocity, sizeof(float) * 3);
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

	char bones[BONES_SIZE];

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
			packet.position[3] = (ReadFloat(process, (void *)(player_base + 0x9B4)) - packet.position[2]) + 50;

			packet.rotation = ReadInt(process, (void *)(player_base + 0xF8)) % 0x10000;
			packet.level = ReadInt(process, (void *)level);
			memcpy(packet.name, settings.username, 33);
			packet.name[32] = 0;

			for (int i = 0; i < clients_length; ++i) {
				Send(clients[i], (char *)&packet, sizeof(PACKET));
			}
		}

	next:
		Sleep(8);
	}
}

void CopyMaps() {
	char to[0xFF];
	char from[0xFF];

	int l = GetModuleFileNameExA(process, NULL, to, 0xFF) - 1;
	printf("game exe path: %s\n", to);

	// Remove the "Binaries\MirrorsEdge.exe"
	for (int c = 0; (to[l] != '\\' || ++c < 2) && l > -1; to[l] = 0, --l);

	strcat(to, "TdGame\\CookedPC\\Maps");

	printf("game maps path: %s\n", to);

	GetCurrentDirectoryA(0xFF, from);
	strcat(from, "\\maps\\*");

	printf("stored maps path: %s\n", from);

	SHFILEOPSTRUCTA s = { 0 };
	s.wFunc = FO_COPY;
	s.fFlags = FOF_SILENT | FOF_NOCONFIRMMKDIR | FOF_NOCONFIRMATION | FOF_NOERRORUI | FOF_NO_UI;
	s.pTo = to;
	s.pFrom = from;
	SHFileOperationA(&s);
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

void SendChatMessage(char *str) {
	printf("sending chat msg: %s\n", str);
	char *msg = (char *)malloc(strlen(settings.username) + strlen(str) + 3);
	int length = sprintf(msg, "%s: %s", settings.username, str);
	send(server_socket, msg, length, 0);
	free(msg);
}

HANDLE CallFunction(char *name, void *arg) {
	if (!process) {
		return NULL;
	}

	int base = (int)GetModuleInfoByName(GetProcessId(process), L"Multiplayer_DLL.dll").modBaseAddr;
	if (!base) {
		return NULL;
	}

	int offset = (int)GetProcAddress(GetModuleHandleA("Multiplayer_DLL.dll"), name) - (int)GetModuleHandleA("Multiplayer_DLL.dll");

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
	char buffer[0xFF];

	if (!startup) {
		if (s->room != settings.room) {
			LeaveRoom();
			clients_length = 0;

			Sleep(100);

			int length = sprintf(buffer, "\rr%d", s->room);
			send(server_socket, buffer, length, 0);

			Sleep(100);

			length = sprintf(buffer, "%s joined the room", s->username);
			send(server_socket, buffer, length, 0);
		} else if (strcmp(s->username, settings.username) != 0) {
			int length = sprintf(buffer, "%s renamed to %s", settings.username, s->username);
			send(server_socket, buffer, length, 0);
		}
	} else {
		int length = sprintf(buffer, "\rr%d", s->room);
		send(server_socket, buffer, length, 0);

		Sleep(100);

		length = sprintf(buffer, "%s joined the room", s->username);
		send(server_socket, buffer, length, 0);
	}

	memcpy(&settings, s, sizeof(SETTINGS));

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
	int length = sprintf(buffer, "%s left the room", settings.username);
	send(server_socket, buffer, length, 0);
}