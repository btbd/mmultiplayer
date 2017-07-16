#include "stdafx.h"

// #define DEBUG

static PLAYER players[64] = { 0 };
static DWORD level = 0;
static DWORD host_pid = 0;
static DWORD SendChatMessage = 0;

DWORD base_path;
bool chat_mode = false;
char *chat_input = (char *)calloc(1, 1);
DWORD chat_input_length = 0;
ARRAY chat_array_messages = ArrayNew(sizeof(CHAT_MESSAGE));
char *chat_messages = (char *)calloc(1, 1);
DWORD chat_messages_length = 0;
SETTINGS settings;

int(__thiscall *UpdateActorOriginal)(int this_, int);
int(__thiscall *UpdateBonesOriginal)(int this_, int bones);
int(__thiscall *LevelLoadOriginal)(void *this_, int, __int64);
int(__thiscall *CopyBones)(int, int);
HRESULT(__stdcall *EndSceneOriginal)(LPDIRECT3DDEVICE9 pDevice);
BOOL(WINAPI *PeekMessageWOriginal)(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg);

int __fastcall UpdateActorHook(int this_, void *idle_, int arg) {
	float *x = (float *)(this_ + 0xE8);
	float *y = (float *)(this_ + 0xEC);
	float *z = (float *)(this_ + 0xF0);
	float *vx = (float *)(this_ + 0x100);
	float *vy = (float *)(this_ + 0x104);
	float *vz = (float *)(this_ + 0x108);

	for (int i = 0; i < sizeof(players) / sizeof(players[0]); ++i) {
		if (!players[i].base && *x == -237887 - i * 10 && *y == 107302 && *z == 182292) {
			players[i].base = this_;
		}

		if (players[i].base == this_) {
			if (level != players[i].level || players[i].ping >= 100) {
				*x = -237887 - (float)i * 10;
				*y = 107302;
				*z = 182292;
			} else {
				++players[i].ping;

				DWORD base = GetPlayerBase();
				if (settings.collision && base) {
					float pz = ReadFloat(GetCurrentProcess(), (void *)(base + 0xF0));
					if (pz <= *z + (ReadFloat(GetCurrentProcess(), (void *)(base + 0x5D4)) != 0 ? 0 : PLAYER_HEIGHT) && pz >= *z - PLAYER_HEIGHT) {
						float px = ReadFloat(GetCurrentProcess(), (void *)(base + 0xE8));
						float py = ReadFloat(GetCurrentProcess(), (void *)(base + 0xEC));
						float dx = px - *x;
						float dy = py - *y;
						if (sqrt(dx * dx + dy * dy) <= PLAYER_RADIUS * 2) {
							float mx = (px + *x) / 2;
							float my = (py + *y) / 2;
							float angle = (float)atan2(dy, dx);

							WriteFloat(GetCurrentProcess(), (void *)(base + 0xE8), mx + (float)cos(angle) * (PLAYER_RADIUS + 1));
							WriteFloat(GetCurrentProcess(), (void *)(base + 0xEC), my + (float)sin(angle) * (PLAYER_RADIUS + 1));
							WriteFloat(GetCurrentProcess(), (void *)(base + 0x100), ReadFloat(GetCurrentProcess(), (void *)(base + 0x100)) * (float)0.1);
							WriteFloat(GetCurrentProcess(), (void *)(base + 0x100), ReadFloat(GetCurrentProcess(), (void *)(base + 0x100)) * (float)0.1);
						}
					}
				}
			}
		}
	}

	return UpdateActorOriginal(this_, arg);
}

int __fastcall UpdateBonesHook(int this_, void *idle_, int bones) {
	if (this_ != bones && *(DWORD *)(bones + 4) > 0) {
		CopyBones(this_, *(DWORD *)(bones + 4));
		memcpy(*(void **)this_, *(const void **)bones, 32 * *(DWORD *)(bones + 4));
		*(DWORD *)(this_ + 4) = *(DWORD *)(bones + 4);

		int bone_count = (32 * *(DWORD *)(bones + 4)) - 0x7E0;
		if (bone_count == 0x5A0 || bone_count == 0x4E0 || bone_count == 0x320 || bone_count == 0x240) {
			for (int i = 0; i < sizeof(players) / sizeof(players[0]); ++i) {
				if (players[i].base) {
					DWORD bones_base = ReadInt(GetCurrentProcess(), (void *)(players[i].base + 0x1C0));
					if (bones_base) {
						bones_base = ReadInt(GetCurrentProcess(), (void *)(bones_base + 0x24C));
						if (bones_base && (bones_base == *(DWORD *)this_ || bones_base == *(DWORD *)bones)) {
							WriteBuffer(GetCurrentProcess(), (void *)bones_base, players[i].bones, BONES_SIZE);
						}
					}
				}
			}
		}

		return this_;
	}

	return UpdateBonesOriginal(this_, bones);
}

int __fastcall LevelLoadHook(void *this_, void *idle_, int a2, __int64 a3) {
	static char buffer[0xFF];

	for (int i = 0; i < sizeof(players) / sizeof(players[0]); ++i) {
		players[i].base = 0;
	}

	// Hash the level name to a unique DWORD
	WCharToChar(buffer, *(wchar_t **)(a2 + 0x1C));
	DWORD h = (tolower(*buffer) ^ 0x4B9ACE2F) * 0x1000193;
	int length = strlen(buffer);
	for (int i = 1; i <= length; ++i) {
		h = (tolower(*buffer) ^ h) * 0x1000193;
	}
	level = h;

	printf("loading %s - 0x%x\n", buffer, level);

	return LevelLoadOriginal(this_, a2, a3);
}

HRESULT __stdcall EndSceneHook(LPDIRECT3DDEVICE9 pDevice) {
	pDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
	pDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
	pDevice->SetFVF(D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1);

	if (settings.nametags) {
		float position[3];
		float out[3];

		LPD3DXFONT lpFont;
		D3DXCreateFontA(pDevice, 20, 0, FW_BOLD, 1, 0, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, "Arial", &lpFont);

		for (int i = 0; i < sizeof(players) / sizeof(players[0]); ++i) {
			if (players[i].base && level == players[i].level && players[i].ping < 100) {
				ReadBuffer(GetCurrentProcess(), (void *)(players[i].base + 0xE8), (char *)position, 3 * sizeof(float));
				position[2] += ReadFloat(GetCurrentProcess(), (void *)(players[i].base + 0x40));

				if (WorldToScreen(pDevice, position, out)) {
					int length = strnlen(players[i].name, 32);
					RECT r = { 0, 0, 0, 0 };
					lpFont->DrawTextA(NULL, players[i].name, length, &r, DT_CALCRECT, D3DCOLOR_ARGB(0, 0, 0, 0));

					float width = (float)(r.right - r.left);
					DrawRect(pDevice, out[0] - (width / 2) - 7, out[1] - 7, width + 11, 30, D3DCOLOR_ARGB(100, 0, 0, 0), false);

					r.left = r.right = (int)out[0];
					r.top = r.bottom = (int)out[1];
					lpFont->DrawTextA(NULL, players[i].name, length, &r, DT_NOCLIP | DT_CENTER, D3DCOLOR_ARGB(255, 255, 255, 255));
				}
			}
		}

		lpFont->Release();
	}

	if (chat_mode) {
		D3DDEVICE_CREATION_PARAMETERS params;
		RECT rect;
		pDevice->GetCreationParameters(&params);
		GetClientRect(params.hFocusWindow, &rect);

		float width = (float)rect.right - rect.left;
		float height = (float)rect.bottom - rect.top;

		DrawRect(pDevice, 0, 0, width, height, D3DCOLOR_ARGB(100, 0, 0, 0), false);
		
		DrawRect(pDevice, 50, height - 100, width - 125, 70, D3DCOLOR_ARGB(100, 0, 0, 0), false);
		WriteText(pDevice, 25, FW_NORMAL, DT_LEFT, "Arial", D3DCOLOR_ARGB(255, 255, 255, 255), 75, (int)height - 75, chat_input, chat_input_length);

		for (DWORD i = 0; i < chat_array_messages.length; ++i) {
			CHAT_MESSAGE *m = (CHAT_MESSAGE *)ArrayGet(&chat_array_messages, i);
			if (m->frame < CHAT_DELAY) {
				++m->frame;
			}
		}

		int offset = 0;
		for (char *c = chat_messages; *c; ++c) {
			if (*c == '\n') offset += 25;
		}

		WriteText(pDevice, 25, FW_NORMAL, DT_LEFT, "Arial", D3DCOLOR_ARGB(255, 255, 255, 255), 75, ((int)height - 110) - offset, chat_messages, chat_messages_length);
	} else if (settings.chat) {
		D3DDEVICE_CREATION_PARAMETERS params;
		RECT rect;
		pDevice->GetCreationParameters(&params);
		GetClientRect(params.hFocusWindow, &rect);

		LPD3DXFONT lpFont;
		D3DXCreateFontA(pDevice, 25, 0, FW_NORMAL, 1, 0, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, "Arial", &lpFont);

		int y = (rect.bottom - rect.top) - 110;
		for (int i = chat_array_messages.length - 1; i > -1; --i) {
			CHAT_MESSAGE *m = (CHAT_MESSAGE *)ArrayGet(&chat_array_messages, i);
			if (m->frame < CHAT_DELAY) {
				++m->frame;
				y -= 25;
				DWORD tc, bc;
				if (m->frame > CHAT_DELAY - 50) {
					float r = (CHAT_DELAY - m->frame) / 50.0f;
					tc = D3DCOLOR_ARGB((DWORD)(255 * r), 255, 255, 255);
					bc = D3DCOLOR_ARGB((DWORD)(100 * r), 0, 0, 0);
				} else {
					tc = D3DCOLOR_ARGB(255, 255, 255, 255);
					bc = D3DCOLOR_ARGB(100, 0, 0, 0);
				}

				RECT r = { 0, 0, 0, 0 };
				lpFont->DrawTextA(NULL, m->message, m->message_length, &r, DT_CALCRECT, D3DCOLOR_ARGB(0, 0, 0, 0));

				DrawRect(pDevice, 70, (float)y, (float)r.right - r.left + 10, 25, bc, false);

				r.left = r.right = 75;
				r.top = r.bottom = y;
				lpFont->DrawTextA(NULL, m->message, m->message_length, &r, DT_NOCLIP | DT_LEFT, tc);
			} else {
				for (DWORD e = i; e < chat_array_messages.length - 1; ++e) {
					ArraySet(&chat_array_messages, e, ArrayGet(&chat_array_messages, e + 1));
				}
				--chat_array_messages.length;
			}
		}

		lpFont->Release();
	}

	return EndSceneOriginal(pDevice);
}

BOOL WINAPI PeekMessageWHook(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg) {
	BOOL ret = PeekMessageWOriginal(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);

	if (lpMsg->hwnd) {
		switch (lpMsg->message) {
			case WM_INPUT: case WM_LBUTTONDOWN: case WM_LBUTTONUP: case WM_RBUTTONDOWN: case WM_RBUTTONUP:
				if (chat_mode) lpMsg->message = WM_NULL;
				break;
			case WM_KEYDOWN:
				if (chat_mode) {
					lpMsg->message = WM_NULL;
					switch (lpMsg->wParam) {
						case VK_BACK:
							if (chat_input_length > 0) {
								chat_input[--chat_input_length] = 0;
							}
							break;
						case VK_RETURN:
							if (host_pid && SendChatMessage && chat_input_length > 0) {
								HANDLE process = OpenProcess(PROCESS_ALL_ACCESS, 0, host_pid);
								if (process) {
									LPVOID param = VirtualAllocEx(process, 0, chat_input_length + 1, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
									WriteBuffer(process, param, chat_input, chat_input_length + 1);
									WaitForSingleObject(CreateRemoteThread(process, 0, 0, (LPTHREAD_START_ROUTINE)SendChatMessage, param, 0, 0), INFINITE);
									VirtualFreeEx(process, param, 0, MEM_RELEASE);
								}
								CloseHandle(process);
							}

							chat_input_length = 0;
							chat_input = (char *)realloc(chat_input, 1);
							*chat_input = 0;
							chat_mode = false;
							break;
						default:
							char c = MapVirtualKeyA(lpMsg->wParam, MAPVK_VK_TO_CHAR);
							if (c > 31 && c < 127) {
								if (isalpha(c)) {
									if ((GetAsyncKeyState(VK_SHIFT) < 0 || GetKeyState(VK_CAPITAL) & 1)) {
										c = toupper(c);
									} else {
										c = tolower(c);
									}
								} else if (GetAsyncKeyState(VK_SHIFT) < 0) {
									BYTE keyboard[0x100] = { 0 };
									WCHAR buffer[0x100];
									char cbuffer[0x100];

									keyboard[VK_SHIFT] = 0xFF;

									ToUnicode(lpMsg->wParam, 0, keyboard, buffer, 0x100, 0);

									sprintf(cbuffer, "%ws", buffer);

									c = cbuffer[0];
									if (!(c > 31 && c < 127)) {
										break;
									}
								}

								chat_input = (char *)realloc(chat_input, chat_input_length + 2);
								chat_input[chat_input_length] = (char)c;
								chat_input[++chat_input_length] = 0;
							}
					}

				}
				break;
			case WM_KEYUP:
				if (!chat_mode) {
					if (lpMsg->wParam == 0x59) {
						chat_mode = true;
					}
				} else {
					lpMsg->message = WM_NULL;
					if (lpMsg->wParam == VK_ESCAPE) {
						chat_mode = false;
					}
				}
				break;
		}
	}

	return ret;
}

DWORD GetPlayerBase() {
	return (DWORD)GetPointer(GetCurrentProcess(), 5, base_path, 0xCC, 0x4A4, 0x214, 0x00);
}

bool IsGameWindow(HWND hWnd) {
	char title[0xFF] = { 0 };
	char check[] = "Mirror's Edge";
	GetWindowTextA(hWnd, title, 0xFF);

	return memcmp(title, check, 13) == 0;
}

void WriteText(LPDIRECT3DDEVICE9 device, int pt, UINT weight, DWORD align, char *font, DWORD color, int x, int y, char *text, int length) {
	LPD3DXFONT lpFont;
	D3DXCreateFontA(device, pt, 0, weight, 1, 0, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, font, &lpFont);

	RECT r = { x, y, x, y };
	lpFont->DrawTextA(NULL, text, length, &r, DT_NOCLIP | align, color);
	lpFont->Release();
}

void DrawRect(LPDIRECT3DDEVICE9 pDevice, float x, float y, float width, float height, D3DCOLOR color, bool init_render_state) {
	D3D_VERTEX v[4] = {
		{ (float)x , (float)(y + height), 0.0f, 1.0f, color },
		{ (float)x , (float)y , 0.0f, 1.0f, color },
		{ (float)(x + width), (float)(y + height), 0.0f, 1.0f, color },
		{ (float)(x + width), (float)y , 0.0f, 1.0f, color }
	};

	if (init_render_state) {
		pDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
		pDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
		pDevice->SetFVF(D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1);
	}
	pDevice->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP, 2, v, sizeof(D3D_VERTEX));
}

bool WorldToScreen(LPDIRECT3DDEVICE9 pDevice, float position[3], float out[3]) {
	D3DXVECTOR3 pOut;
	D3DXVECTOR3 pOutU;
	D3DXVECTOR3 pV;
	D3DVIEWPORT9 pViewport;
	D3DXMATRIX pProjection;
	D3DXMATRIX pView;
	D3DXMATRIX pWorld;
	D3DDEVICE_CREATION_PARAMETERS params;
	RECT rect;
	float camera[4];

	memset(&pOut, 0, sizeof(pOut));
	memset(&pV, 0, sizeof(pV));
	memset(&pViewport, 0, sizeof(pViewport));
	memset(&pProjection, 0, sizeof(pProjection));
	memset(&pView, 0, sizeof(pView));
	memset(&pWorld, 0, sizeof(pWorld));

	pDevice->GetViewport(&pViewport);
	pDevice->GetCreationParameters(&params);
	GetClientRect(params.hFocusWindow, &rect);
	pViewport.Width = rect.right - rect.left;
	pViewport.Height = rect.bottom - rect.top;
	pDevice->GetVertexShaderConstantF(0, (float *)pProjection.m, 4);
	pDevice->GetTransform(D3DTS_VIEW, &pView);
	pDevice->GetTransform(D3DTS_WORLD, &pWorld);

	pDevice->GetVertexShaderConstantF(4, camera, 1);

	float y = (atan2f(pProjection.m[0][2], pProjection.m[1][2]) * 180 / (float)PI) + 180;
	float y1 = atan2f(position[1] - camera[1], position[0] - camera[0]);
	y1 *= 180 / (float)PI;
	y1 = 270 - y1;
	y1 = y1 < 0 ? 360 + y1 : y1;
	
	y = fmodf(y, 360);
	y1 = fmodf(y1, 360);
	if (y != y1) {
		if (y < y1 && fabs((y + 360) - y1) < fabs(y - y1)) {
			y += 360;
		} else if (fabs((y1 + 360) - y) < fabs(y1 - y)) {
			y1 += 360;
		}
	}

	if (fabs(y - y1) <= 120) {
		pV.x = position[0];
		pV.y = position[1];
		pV.z = position[2];
		D3DXVec3Project(&pOut, &pV, &pViewport, &pProjection, &pView, &pWorld);
		if (pOut.z > 0.01f && pOut.z < 1) {
			out[0] = pOut.x;
			out[1] = pOut.y;
			out[2] = pOut.z;

			return true;
		}
	}

	return false;
}

void MainThread() {
	if (!GetModuleHandleA("MirrorsEdge.exe")) {
		return;
	}

#ifdef DEBUG
	AllocConsole();
	freopen("CONIN$", "r", stdin);
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);
#endif

	for (int i = 0; i < sizeof(players) / sizeof(players[0]); ++i) {
		players[i].base = players[i].level = players[i].ping = 0;
		players[i].bones = (char *)calloc(BONES_SIZE, 1);
		players[i].name = (char *)calloc(33, 1);
	}

	MODULEENTRY32 module = GetModuleInfoByName(GetCurrentProcessId(), L"MirrorsEdge.exe");
	base_path = (DWORD)ProcessFindPattern(GetCurrentProcess(), module.modBaseAddr, module.modBaseSize, "\x89\x0D\x00\x00\x00\x00\xB9\x00\x00\x00\x00\xFF", "xx????x????x");
	base_path = ReadInt(GetCurrentProcess(), (void *)(base_path + 2));

	DWORD addr;
	char disassembled[0xFF];

	// 0xCF6AF0
	addr = (DWORD)FindPattern(module.modBaseAddr, module.modBaseSize, "\x8B\x11\x8B\x42\x08\x6A\x08\x6A\x00\x57\xFF\xD0\x89\x06\x5F\x8B\xC6\x5E\xC2\x04\x00\xCC\x8B\x44\x24\x04\x56\x50\x8B\xF1", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	addr -= 86;
	Disassemble((unsigned char *)addr, 5, addr, disassembled);
	sscanf(disassembled, "call 0x%x", (DWORD *)&CopyBones);
	addr -= 20;
	printf("0x%x\n", addr);
	TrampolineHook(UpdateBonesHook, (void *)addr, (void **)&UpdateBonesOriginal);

	// 0xB5F1F0
	addr = (DWORD)FindPattern(module.modBaseAddr, module.modBaseSize, "\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x38\x56\x57\x8B\x81\xFC\x00\x00\x00\xF3\x0F\x10\xB9\x5C\x01\x00\x00\xF3\x0F\x10\xB1\x58\x01\x00\x00\x8B\xD0\xC1\xFA\x02\x05\x00\x40\x00\x00\x81\xE2\xFF\x3F\x00\x00", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	printf("0x%x\n", addr);
	TrampolineHook(UpdateActorHook, (void *)addr, (void **)&UpdateActorOriginal);

	// 0x11C6A70
	addr = (DWORD)FindPattern(module.modBaseAddr, module.modBaseSize, "\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x81\xEC\x00\x00\x00\x00\x53\x55\x56\x57\xA1\x00\x00\x00\x00\x33\xC4\x50\x8D\x84\x24\x00\x00\x00\x00\x64\xA3\x00\x00\x00\x00\x8B\xE9\x89\x6C\x24\x00\x00\xFF\x89", "xxx????xxxxxxxxx?xxxxxxxx????xxxxxx?xxxxxxxxxxxxxx??xx");
	printf("0x%x\n", addr);
	TrampolineHook(LevelLoadHook, (void *)addr, (void **)&LevelLoadOriginal);

	while (!GetModuleHandleA("d3d9.dll")) Sleep(1);
	TrampolineHook(EndSceneHook, (void *)GetD3D9Exports()[D3D9_EXPORT_ENDSCENE], (void **)&EndSceneOriginal);

	TrampolineHook(PeekMessageWHook, PeekMessageW, (void **)&PeekMessageWOriginal);

	for (;;) {
		char path[0xFF];
		GetTempPathA(0xFF, path);
		strcat(path, "multiplayer.settings");
		FILE *file = fopen(path, "rb");
		if (file) {
			fread(&settings, sizeof(SETTINGS), 1, file);
			fclose(file);
		}
		
		Sleep(1000);
	}
}

EXPORT void EXPORT_GetPlayersBase(DWORD *out) {
	if (out) {
		*out = (DWORD)players;
	}
}

EXPORT void EXPORT_GetLevelBase(DWORD *out) {
	if (out) {
		*out = (DWORD)&level;
	}
}

EXPORT void EXPORT_SetHostPID(DWORD *in) {
	if (in) {
		host_pid = *in;
	}
}

EXPORT void EXPORT_SetSendChatMessage(DWORD *in) {
	if (in) {
		SendChatMessage = *in;
	}
}

EXPORT void EXPORT_AddChatMessage(char *msg) {
	if (msg) {
		if (strchr(msg, '\r')) {
			*strchr(msg, '\r') = '\n';
		}

		CHAT_MESSAGE m;
		m.message = _strdup(msg);
		m.message_length = strlen(msg);
		m.frame = 0;
		
		ArrayPush(&chat_array_messages, &m);

		for (int i = strlen(chat_messages) - 1, count = 0; i > -1; --i) {
			if (chat_messages[i] == '\n') {
				++count;
				if (count > 30) {
					char *chat_messages_new = _strdup(&chat_messages[i + 1]);
					free(chat_messages);

					chat_messages = chat_messages_new;
					chat_messages_length = strlen(chat_messages_new);

					break;
				}
			}
		}

		DWORD length = strlen(msg);
		chat_messages = (char *)realloc(chat_messages, chat_messages_length + length + 1);
		strcpy(chat_messages + chat_messages_length, msg);
		chat_messages_length += length;
	}
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
	if (reason == DLL_PROCESS_ATTACH) {
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, 0, 0, 0);
	}

	return TRUE;
}

