#include "stdafx.h"

// #define DEBUG

static PLAYER players[CHARACTER_COUNT * ACTORS_PER_CHARACTER] = { 0 };
static DWORD level = 0;
static DWORD host_pid = 0;
static DWORD SendChatMessage = 0;

DWORD base_path = 0, LevelLoadBase = 0, projection_base = 0, engine_info = 0;
bool chat_mode = false;
char *chat_input = (char *)calloc(1, 1);
DWORD chat_input_length = 0, chat_input_alloc = 1;
ARRAY chat_array_messages = ArrayNew(sizeof(CHAT_MESSAGE));
char *chat_messages = (char *)calloc(1, 1);
DWORD chat_messages_length = 0;
ARRAY previous_messages = ArrayNew(sizeof(char **));
int previous_message_index = 0, cursor_index = 0;
DWORD cursor_frame = 0;
SETTINGS settings;

int(__thiscall *UpdateActorOriginal)(int this_, int);
int(__thiscall *UpdateBonesOriginal)(int this_, int bones);
int(__thiscall *LevelLoadOriginal)(void *this_, int, __int64);
int(__thiscall *CopyBones)(int, int);
HRESULT(__stdcall *EndSceneOriginal)(LPDIRECT3DDEVICE9 pDevice);
void(*UpdateProjectionOriginal)();
void **(__thiscall *ExecuteCommandOriginal)(int, void **, int, int);
void(*GetEngineInfoOriginal)();
BOOL(WINAPI *PeekMessageOriginal)(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg);
BOOL(WINAPI *PeekMessageWOriginal)(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg);
BOOL(WINAPI *PeekMessageAOriginal)(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg);
BOOL(WINAPI *GetMessageOriginal)(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax);
BOOL(WINAPI *GetMessageWOriginal)(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax);
BOOL(WINAPI *GetMessageAOriginal)(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax);
HMODULE(WINAPI *LoadLibraryAOriginal)(char *);

int __fastcall UpdateActorHook(int this_, void *idle_, int arg) {
	float *x = (float *)(this_ + 0xE8);
	float *y = (float *)(this_ + 0xEC);
	float *z = (float *)(this_ + 0xF0);
	float *vx = (float *)(this_ + 0x100);
	float *vy = (float *)(this_ + 0x104);
	float *vz = (float *)(this_ + 0x108);

	for (int i = 0; i < sizeof(players) / sizeof(players[0]); ++i) {
		if (!players[i].base && *x == -237887 - i * 10 && *y == 107302 && *z == 192292) {
			players[i].base = this_;
		}

		if (players[i].base == this_) {
			if (level != players[i].level || players[i].ping >= PING_TIMEOUT) {
				*x = -237887 - (float)i * 10;
				*y = 107302;
				*z = 192292;
				players[i].level = 0;
				players[i].ping = PING_TIMEOUT;
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
							WriteFloat(GetCurrentProcess(), (void *)(base + 0x104), ReadFloat(GetCurrentProcess(), (void *)(base + 0x104)) * (float)0.1);
						}
					}
				}
			}

			break;
		}
	}

	return UpdateActorOriginal(this_, arg);
}

int __fastcall UpdateBonesHook(int this_, void *idle_, int bones) {
	if (this_ != bones && *(DWORD *)(bones + 4) > 0) {
		CopyBones(this_, *(DWORD *)(bones + 4));
		memcpy(*(void **)this_, *(const void **)bones, 32 * *(DWORD *)(bones + 4));
		*(DWORD *)(this_ + 4) = *(DWORD *)(bones + 4);

		int bone_count = (32 * *(DWORD *)(bones + 4));
		if (bone_count == 0xD80 || bone_count == 0xCC0 || bone_count == 0xB00 || bone_count == 0xA20 || bone_count == 0x9E0) {
			for (int i = 0; i < sizeof(players) / sizeof(players[0]); ++i) {
				if (players[i].base && players[i].level == level && players[i].ping < PING_TIMEOUT) {
					DWORD bones_base = ReadInt(GetCurrentProcess(), (void *)(players[i].base + 0x1C0));
					if (bones_base) {
						bones_base = ReadInt(GetCurrentProcess(), (void *)(bones_base + 0x24C));
						if (bones_base && (bones_base == *(DWORD *)this_ || bones_base == *(DWORD *)bones)) {
							int character = i / ACTORS_PER_CHARACTER;
							switch (character) {
								case CHARACTER_FAITH:
									WriteBuffer(GetCurrentProcess(), (void *)bones_base, players[i].bones, bone_count);
									break;
								case CHARACTER_KATE:
									WriteBuffer(GetCurrentProcess(), (void *)bones_base, players[i].bones, 7 * 32);

									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + 14 * 32), players[i].bones + 14 * 32, 10 * 32);

									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + 33 * 32), players[i].bones + 39 * 32, 1 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + 36 * 32), players[i].bones + 42 * 32, 1 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + 39 * 32), players[i].bones + 45 * 32, 63 * 32);
									
									break;
								case CHARACTER_CELESTE:
									WriteBuffer(GetCurrentProcess(), (void *)bones_base, players[i].bones, 7 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + bone_count - 0x7E0), players[i].bones + 45 * 32, 63 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + 18 * 32), players[i].bones + 18 * 32, 32);
									break;
								case CHARACTER_ASSAULT_CELESTE:
									WriteBuffer(GetCurrentProcess(), (void *)bones_base, players[i].bones, 7 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + bone_count - 0x7E0), players[i].bones + 45 * 32, 63 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + 17 * 32), players[i].bones + 18 * 32, 32);
									break;
								case CHARACTER_JACKNIFE:
									WriteBuffer(GetCurrentProcess(), (void *)bones_base, players[i].bones, 7 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + bone_count - 0x7E0), players[i].bones + 45 * 32, 63 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + 18 * 32), players[i].bones + 18 * 32, 32);
									break;
								case CHARACTER_MILLER:
									WriteBuffer(GetCurrentProcess(), (void *)bones_base, players[i].bones, 7 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + bone_count - 0x7E0), players[i].bones + 45 * 32, 63 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + 18 * 32), players[i].bones + 18 * 32, 32);
									break;
								case CHARACTER_KREEG:
									WriteBuffer(GetCurrentProcess(), (void *)bones_base, players[i].bones, 7 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + bone_count - 0x7E0), players[i].bones + 45 * 32, 63 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + 18 * 32), players[i].bones + 18 * 32, 32);
									break;
								case CHARACTER_COP_PURSUIT:
									WriteBuffer(GetCurrentProcess(), (void *)bones_base, players[i].bones, 7 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + bone_count - 0x7E0), players[i].bones + 45 * 32, 63 * 32);
									WriteBuffer(GetCurrentProcess(), (void *)(bones_base + 15 * 32), players[i].bones + 18 * 32, 32);
									break;
								case CHARACTER_GHOST:
									WriteBuffer(GetCurrentProcess(), (void *)bones_base, players[i].bones, bone_count);
									break;
							}
							
							break;
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

	int ret = LevelLoadOriginal(this_, a2, a3);

	if (strcmp(buffer, "TdMainMenu") != 0) {
		ExecuteCommand(L"streammap mp_actors\r\n");
	}

	return ret;
}

HRESULT __stdcall EndSceneHook(LPDIRECT3DDEVICE9 pDevice) {
	HRESULT ret = EndSceneOriginal(pDevice);

	pDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
	pDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
	pDevice->SetFVF(D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_TEX1);

	if (settings.nametags) {
		float position[3];
		float out[3];

		LPD3DXFONT lpFont;
		D3DXCreateFontA(pDevice, 20, 0, FW_BOLD, 1, 0, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, "Arial", &lpFont);

		for (int i = 0; i < sizeof(players) / sizeof(players[0]); ++i) {
			if (players[i].base && level == players[i].level && players[i].ping < PING_TIMEOUT) {
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

		LPD3DXFONT lpFont;
		D3DXCreateFontA(pDevice, 25, 0, FW_NORMAL, 1, 0, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, "Arial", &lpFont);
		RECT r;
		r.left = r.right = 75;
		r.top = r.bottom = (int)height - 75;

		if ((++cursor_frame / 30) % 2 == 0) {
			RECT s = { 0 };
			HDC hDC = GetDC(NULL);
			HFONT font = CreateFontA(25, 0, 0, 0, FW_NORMAL, false, false, false, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH, "Arial");
			SelectObject(hDC, font);
			DrawTextA(hDC, chat_input, cursor_index, &s, DT_CALCRECT);
			DeleteObject(font);
			ReleaseDC(NULL, hDC);
			lpFont->DrawTextA(NULL, chat_input, chat_input_length, &r, DT_NOCLIP | DT_LEFT, D3DCOLOR_ARGB(255, 255, 255, 255));
			s.left = s.right = (s.right - s.left) + 72;
			s.top = s.bottom = r.top - 2;
			lpFont->DrawTextA(NULL, "|", 1, &s, DT_NOCLIP | DT_LEFT, D3DCOLOR_ARGB(255, 255, 255, 255));
		} else {
			lpFont->DrawTextA(NULL, chat_input, chat_input_length, &r, DT_NOCLIP | DT_LEFT, D3DCOLOR_ARGB(255, 255, 255, 255));
		}

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

		r.top = r.bottom = ((int)height - 110) - offset;
		lpFont->DrawTextA(NULL, chat_messages, chat_messages_length, &r, DT_NOCLIP | DT_LEFT, D3DCOLOR_ARGB(255, 255, 255, 255));

		lpFont->Release();
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

	return ret;
}

void HandleMessage(LPMSG lpMsg) {
	if (lpMsg->hwnd) {
		switch (lpMsg->message) {
			case WM_INPUT: case WM_LBUTTONDOWN: case WM_LBUTTONUP: case WM_RBUTTONDOWN: case WM_RBUTTONUP:
				if (chat_mode) lpMsg->message = WM_NULL;
				break;
			case WM_KEYDOWN:
				if (chat_mode) {
					lpMsg->message = WM_NULL;
					switch (lpMsg->wParam) {
						case VK_BACK: {
							if (chat_input_length > 0 && cursor_index - 1 > -1) {
								memmove(chat_input + cursor_index - 1, chat_input + cursor_index, chat_input_length - cursor_index);
								--cursor_index;
								chat_input[--chat_input_length] = 0;
								cursor_frame = 0;
							}
							break;
						}
						case VK_DELETE: {
							if (chat_input_length > 0 && cursor_index < (int)chat_input_length) {
								memmove(chat_input + cursor_index, chat_input + cursor_index + 1, chat_input_length - cursor_index);
								chat_input[--chat_input_length] = 0;
							}
							break;
						}
						case VK_UP: {
							if (previous_messages.length > 0) {
								if (previous_message_index - 1 > -1) {
									--previous_message_index;
								}

								if (previous_message_index < (int)previous_messages.length) {
									char *old = chat_input;
									chat_input = _strdup(*(char **)ArrayGet(&previous_messages, previous_message_index));
									chat_input_length = strlen(chat_input);
									chat_input_alloc = chat_input_length + 1;
									cursor_index = chat_input_length;
									cursor_frame = 0;
									free(old);
								}
							}
							break;
						}
						case VK_DOWN: {
							if (previous_messages.length > 0) {
								if (previous_message_index + 1 < (int)previous_messages.length) {
									++previous_message_index;
								}

								if (previous_message_index < (int)previous_messages.length) {
									char *old = chat_input;
									chat_input = _strdup(*(char **)ArrayGet(&previous_messages, previous_message_index));
									chat_input_length = strlen(chat_input);
									chat_input_alloc = chat_input_length + 1;
									cursor_index = chat_input_length;
									cursor_frame = 0;
									free(old);
								}
							}
							break;
						}
						case VK_LEFT: {
							cursor_frame = 0;
							if (cursor_index - 1 > -1) {
								--cursor_index;
							}
							break;
						}
						case VK_RIGHT: {
							cursor_frame = 0;
							if (cursor_index + 1 <= (int)chat_input_length) {
								++cursor_index;
							}
							break;
						}
						default: {
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

								if (chat_input_length + 2 > chat_input_alloc) {
									chat_input_alloc *= 4;
									chat_input = (char *)realloc(chat_input, chat_input_alloc);
								}
								memmove(chat_input + cursor_index + 1, chat_input + cursor_index, ++chat_input_length - cursor_index);
								chat_input[cursor_index] = (char)c;
								chat_input[chat_input_length] = 0;
								++cursor_index;
								cursor_frame = 0;
							}
						}
					}

				}
				break;
			case WM_KEYUP: {
				if (!chat_mode) {
					switch (lpMsg->wParam) {
						case VK_OEM_2:
							if (chat_input_length == 0) {
								chat_input = (char *)realloc(chat_input, 2);
								chat_input[chat_input_length] = '/';
								chat_input[++chat_input_length] = 0;
								chat_input_alloc = 2;
								++cursor_index;
							}
						case 0x59:
							chat_mode = true;
							previous_message_index = previous_messages.length;
							break;
					}
				} else {
					lpMsg->message = WM_NULL;
					if (lpMsg->wParam == VK_ESCAPE) {
						chat_mode = false;
					} else if (lpMsg->wParam == VK_RETURN) {
						if (chat_input_length > 0) {
							char *dup = _strdup(chat_input);
							ArrayPush(&previous_messages, &dup);
						}

						if (*chat_input == '/') {
							if (chat_input_length > 3 && memcmp(chat_input, "/tp ", 4) == 0) {
								char *name = chat_input + 4;

								bool found = false;
								for (int i = 0; i < sizeof(players) / sizeof(players[0]); ++i) {
									if (players[i].base && players[i].level == level && players[i].ping < PING_TIMEOUT && strcmp(players[i].name, name) == 0) {
										WriteBuffer(GetCurrentProcess(), (void *)(GetPlayerBase() + 0xEC), (char *)(players[i].base + 0xEC), sizeof(float) * 2);
										WriteFloat(GetCurrentProcess(), (void *)(GetPlayerBase() + 0xE8), ReadFloat(GetCurrentProcess(), (void *)(players[i].base + 0xE8)) + PLAYER_RADIUS);
										found = true;
										break;
									}
								}

								if (!found) {
									for (int i = 0; i < sizeof(players) / sizeof(players[0]); ++i) {
										if (players[i].base && players[i].level == level && players[i].ping < PING_TIMEOUT && StrStrIA(players[i].name, name)) {
											WriteBuffer(GetCurrentProcess(), (void *)(GetPlayerBase() + 0xEC), (char *)(players[i].base + 0xEC), sizeof(float) * 2);
											WriteFloat(GetCurrentProcess(), (void *)(GetPlayerBase() + 0xE8), ReadFloat(GetCurrentProcess(), (void *)(players[i].base + 0xE8)) + PLAYER_RADIUS);
											break;
										}
									}
								}
							} else {
								wchar_t *command = (wchar_t *)malloc((chat_input_length + 2) * sizeof(wchar_t));
								CharToWChar(command, chat_input + 1);
								command[chat_input_length - 1] = '\r';
								command[chat_input_length] = '\n';
								command[chat_input_length + 1] = 0;
								ExecuteCommand(command);
							}
						} else if (host_pid && SendChatMessage && chat_input_length > 0) {
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
						cursor_index = 0;
						chat_input_alloc = 1;
					}
				}
				break;
			}
		}
	}
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

__declspec(naked) void UpdateProjectionHook() {
	__asm {
		jp original
			push eax
			mov eax, ecx
			mov projection_base, eax
			pop eax
			original :
		jmp UpdateProjectionOriginal
	}
}

bool WorldToScreen(LPDIRECT3DDEVICE9 pDevice, float position[3], float out[3]) {
	D3DXMATRIX pOut;
	D3DXMATRIX pProjection;
	D3DXMATRIX pView;
	D3DXMATRIX pWorld;
	D3DDEVICE_CREATION_PARAMETERS params;
	RECT rect;
	D3DXVECTOR4 vIn, vOut;

	memset(&pProjection, 0, sizeof(pProjection));

	pDevice->GetCreationParameters(&params);
	GetClientRect(params.hFocusWindow, &rect);
	float width = (float)rect.right - rect.left;
	float height = (float)rect.bottom - rect.top;
	float fov = roundf(ReadFloat(GetCurrentProcess(), GetPointer(GetCurrentProcess(), 4, base_path, 0xCC, 0x1CC, 0x318)) * 90);
	fov = tanf((float)((fov < 1 || fov > 170 ? 90 : fov) * PI / 180) / 2);

	ReadBuffer(GetCurrentProcess(), (void *)projection_base, (char *)pProjection.m, sizeof(float) * 16);

	pProjection.m[0][0] /= fov;
	pProjection.m[0][1] *= 1.7777777777777777f / fov;
	pProjection.m[0][3] = pProjection.m[0][2];
	pProjection.m[0][2] *= 0.998f;

	pProjection.m[1][0] /= fov;
	pProjection.m[1][1] *= 1.7777777777777777f / fov;
	pProjection.m[1][3] = pProjection.m[1][2];
	pProjection.m[1][2] *= 0.998f;

	pProjection.m[2][0] /= fov;
	pProjection.m[2][1] *= 1.777777777777777f / fov;
	pProjection.m[2][3] = pProjection.m[2][2];
	pProjection.m[2][2] *= 0.998f;

	pProjection.m[3][0] /= fov;
	pProjection.m[3][1] *= 1.7777777777777777f / fov;
	pProjection.m[3][3] = pProjection.m[3][2];
	pProjection.m[3][2] *= 0.998f;

	pDevice->GetTransform(D3DTS_VIEW, &pView);
	pDevice->GetTransform(D3DTS_WORLD, &pWorld);

	D3DXMatrixMultiply(&pOut, &pProjection, &pView);
	D3DXMatrixMultiply(&pProjection, &pOut, &pWorld);

	vIn.x = position[0];
	vIn.y = position[1];
	vIn.z = position[2];
	vIn.w = 1;
	D3DXVec4Transform(&vOut, &vIn, &pProjection);

	out[0] = (((vOut.x / vOut.w) + 1.0f) / 2.0f) * width;
	out[1] = ((1.0f - (vOut.y / vOut.w)) / 2.0f) * height;
	out[2] = vOut.z / vOut.w;

	return !(vOut.z < 0 || vOut.w < 0);
}

void ExecuteCommand(wchar_t *command) {
	if (engine_info) {
		char *this_ = (char *)calloc(0xFFF, 1);
		*(DWORD *)(this_ + 716) = engine_info;

		char *a2 = (char *)calloc(0xFFF, 1);
		*(DWORD *)a2 = (DWORD)a2;

		char *a3 = (char *)calloc(0xFFF, 1);
		*(DWORD *)(a3 + 4) = wcslen(command);
		*(DWORD *)a3 = (DWORD)command;

		ExecuteCommandOriginal((int)this_, (void **)a2, (int)a3, 1);

		free(this_);
		free(a2);
		free(a3);
	}
}

__declspec(naked) void GetEngineInfoHook() {
	__asm {
		mov eax, [ecx]
			mov engine_info, eax
			jmp GetEngineInfoOriginal
	}
}

BOOL WINAPI PeekMessageHook(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg) {
	BOOL ret = PeekMessageOriginal(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
	HandleMessage(lpMsg);
	return ret;
}

BOOL WINAPI PeekMessageWHook(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg) {
	BOOL ret = PeekMessageWOriginal(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
	HandleMessage(lpMsg);
	return ret;
}

BOOL WINAPI PeekMessageAHook(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg) {
	BOOL ret = PeekMessageAOriginal(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
	HandleMessage(lpMsg);
	return ret;
}

BOOL WINAPI GetMessageHook(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax) {
	BOOL ret = GetMessageOriginal(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax);
	HandleMessage(lpMsg);
	return ret;
}

BOOL WINAPI GetMessageWHook(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax) {
	BOOL ret = GetMessageWOriginal(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax);
	HandleMessage(lpMsg);
	return ret;
}

BOOL WINAPI GetMessageAHook(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax) {
	BOOL ret = GetMessageAOriginal(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax);
	HandleMessage(lpMsg);
	return ret;
}

// Work around for Fatalis's autosplitter
void ReHookListener() {
	for (;;) {
		if (*(unsigned char *)LevelLoadBase == 0xE9) {
			TrampolineHook(LevelLoadHook, (void *)LevelLoadBase, (void **)&LevelLoadOriginal);
			return;
		}

		Sleep(1);
	}
}

HMODULE WINAPI LoadLibraryAHook(char *module) {
	if (strstr(module, "menl_hooks.dll")) {
		UnTrampolineHook((void *)LevelLoadBase, (void **)&LevelLoadOriginal);
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ReHookListener, 0, 0, 0);
	}

	return LoadLibraryAOriginal(module);
}

void PrintMatrix(float m[4][4]) {
	printf("%f %f %f %f\n%f %f %f %f\n%f %f %f %f\n%f %f %f %f\n", m[0][0], m[0][1], m[0][2], m[0][3], m[1][0], m[1][1], m[1][2], m[1][3], m[2][0], m[2][1], m[2][2], m[2][3], m[3][0], m[3][1], m[3][2], m[3][3]);
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
	printf("update bones: 0x%x\n", addr);
	TrampolineHook(UpdateBonesHook, (void *)addr, (void **)&UpdateBonesOriginal);

	// 0xB5F1F0
	addr = (DWORD)FindPattern(module.modBaseAddr, module.modBaseSize, "\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x38\x56\x57\x8B\x81\xFC\x00\x00\x00\xF3\x0F\x10\xB9\x5C\x01\x00\x00\xF3\x0F\x10\xB1\x58\x01\x00\x00\x8B\xD0\xC1\xFA\x02\x05\x00\x40\x00\x00\x81\xE2\xFF\x3F\x00\x00", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	printf("update actor: 0x%x\n", addr);
	TrampolineHook(UpdateActorHook, (void *)addr, (void **)&UpdateActorOriginal);

	// 0x11C6A70
	addr = LevelLoadBase = (DWORD)FindPattern(module.modBaseAddr, module.modBaseSize, "\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x81\xEC\x00\x00\x00\x00\x53\x55\x56\x57\xA1\x00\x00\x00\x00\x33\xC4\x50\x8D\x84\x24\x00\x00\x00\x00\x64\xA3\x00\x00\x00\x00\x8B\xE9\x89\x6C\x24\x00\x00\xFF\x89", "???????xxxxxxxxx?xxxxxxxx????xxxxxx?xxxxxxxxxxxxxx??xx");
	printf("level load: 0x%x\n", addr);
	TrampolineHook(LevelLoadHook, (void *)addr, (void **)&LevelLoadOriginal);

	// 0xcd9c7b
	addr = (DWORD)FindPattern(module.modBaseAddr, module.modBaseSize, "\xF3\x0F\x10\x11\xF3\x0F\x59\xCA\xF3\x0F\x58\xC1\xF3\x0F\x11\x64\x24\x1C\xF3\x0F\x11\x6C\x24\x20", "xxxxxxxxxxxxxxxxxxxxxxxx");
	printf("update projection: 0x%x\n", addr);
	TrampolineHook(UpdateProjectionHook, (void *)addr, (void **)&UpdateProjectionOriginal);

	// 0xFA99D0
	addr = (DWORD)FindPattern(module.modBaseAddr, module.modBaseSize, "\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x83\xEC\x28\x53\x55\x56\x57\xA1\x00\x00\x00\x00\x33\xC4\x50\x8D\x44\x24\x3C\x64\xA3\x00\x00\x00\x00\x89\x4C\x24\x18\x33\xDB\x89\x5C\x24\x14\x39\x99\xCC\x02\x00\x00", "xxx????xxxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	printf("execute command: 0x%x\n", addr);
	ExecuteCommandOriginal = (void **(__thiscall *)(int, void **, int, int))addr;

	addr = (DWORD)FindPattern(module.modBaseAddr, module.modBaseSize, "\x8B\x01\xF3\x0F\x10\x98\x98\x00\x00\x00", "xxxxxxxxxx");
	printf("get engine info: 0x%x\n", addr);
	TrampolineHook(GetEngineInfoHook, (void *)addr, (void **)&GetEngineInfoOriginal);

	addr = (DWORD)FindPattern(module.modBaseAddr, module.modBaseSize, "\x8B\x8E\xEC\x0B\x00\x00\x8B\x0C\x81\x3B\xCD\x74\x03\x09\x51\x60\x83\xC0\x01", "xxxxxxxxxxxxxxxxxxx");
	printf("level stream command: 0x%x\n", addr);
	WriteBuffer(GetCurrentProcess(), (void *)addr, "\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 16);

	while (!GetModuleHandleA("d3d9.dll")) Sleep(1);
	TrampolineHook(EndSceneHook, (void *)GetD3D9Exports()[D3D9_EXPORT_ENDSCENE], (void **)&EndSceneOriginal);

	TrampolineHook(PeekMessageHook, PeekMessage, (void **)&PeekMessageOriginal);
	TrampolineHook(PeekMessageWHook, PeekMessageW, (void **)&PeekMessageWOriginal);
	TrampolineHook(PeekMessageAHook, PeekMessageA, (void **)&PeekMessageAOriginal);
	TrampolineHook(GetMessageHook, GetMessage, (void **)&GetMessageOriginal);
	TrampolineHook(GetMessageWHook, GetMessageW, (void **)&GetMessageWOriginal);
	TrampolineHook(GetMessageAHook, GetMessageA, (void **)&GetMessageAOriginal);
	TrampolineHook(LoadLibraryAHook, LoadLibraryA, (void **)&LoadLibraryAOriginal);

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
	if (msg && strchr(msg, '\r')) {
		*strchr(msg, '\r') = '\n';

		CHAT_MESSAGE m;
		m.message = _strdup(msg);
		m.message_length = strlen(msg);
		m.frame = 0;

		ArrayPush(&chat_array_messages, &m);

		for (int i = strlen(chat_messages) - 1, count = 0; i > -1; --i) {
			if (chat_messages[i] == '\n') {
				++count;
				if (count > 40) {
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