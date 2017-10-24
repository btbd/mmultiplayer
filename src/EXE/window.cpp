#include "stdafx.h"

void WindowThread() {
	WNDCLASSEXW wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = GetModuleHandle(0);
	wcex.hIcon = 0;// LoadIcon(GetModuleHandle(0), MAKEINTRESOURCE(IDI_ICON1));
	wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
	wcex.hbrBackground = 0;
	wcex.lpszMenuName = 0;
	wcex.lpszClassName = L"win32app";
	// wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_ICON1));

	RegisterClassExW(&wcex);

	HWND hWnd = CreateWindow(L"win32app", L"", 0, 0, 0, 0, 0, nullptr, nullptr, GetModuleHandle(0), nullptr);

	ShowWindow(CreateDialog(GetModuleHandle(0), MAKEINTRESOURCE(IDD_WINDOW), hWnd, DlgProc), SW_SHOW);

	MSG msg;
	while (GetMessage(&msg, nullptr, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}

INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam) {
	static unsigned char keybind;

	switch (message) { 
		case WM_INITDIALOG: {
			char path[0xFF];
			GetTempPathA(0xFF, path);
			strcat(path, "multiplayer.settings");
			FILE *file = fopen(path, "rb");
			SETTINGS s;
			if (!file || GetFileSize(path) != sizeof(SETTINGS)) {
				file = fopen(path, "wb");
				strcpy(s.username, "anonymous");
				s.room = 0;
				s.character = 0;
				s.chat = s.collision = s.nametags = true;
				s.spectator = false;
				s.keybind = 0x59;
				fwrite(&s, sizeof(SETTINGS), 1, file);
			} else {
				fread(&s, sizeof(SETTINGS), 1, file);
			}
			fclose(file);

			SaveSettings(&s, true);
			if (s.chat) CheckDlgButton(hDlg, IDC_CHAT, BST_CHECKED);
			if (s.collision) CheckDlgButton(hDlg, IDC_COLLISION, BST_CHECKED);
			if (s.nametags) CheckDlgButton(hDlg, IDC_NAMETAGS, BST_CHECKED);
			if (s.spectator) CheckDlgButton(hDlg, IDC_SPECTATOR, BST_CHECKED);
			SetDlgItemTextA(hDlg, IDC_USERNAME, s.username);
			sprintf(path, "%d", s.room);
			SetDlgItemTextA(hDlg, IDC_ROOM, path);
			keybind = s.keybind;

			for (int i = 0; i < sizeof(KEYS) / sizeof(KEYS[0]); ++i) {
				if (KEYS[i].code == keybind) {
					SetDlgItemTextA(hDlg, IDC_KEYBIND, KEYS[i].name);
					break;
				}
			}

			HWND model = GetDlgItem(hDlg, IDC_MODEL);
			SendMessage(model, (UINT)CB_ADDSTRING, (WPARAM)0, (LPARAM)L"Faith");
			SendMessage(model, (UINT)CB_ADDSTRING, (WPARAM)0, (LPARAM)L"Kate");
			SendMessage(model, (UINT)CB_ADDSTRING, (WPARAM)0, (LPARAM)L"Celeste");
			SendMessage(model, (UINT)CB_ADDSTRING, (WPARAM)0, (LPARAM)L"Assassin");
			SendMessage(model, (UINT)CB_ADDSTRING, (WPARAM)0, (LPARAM)L"Jacknife");
			SendMessage(model, (UINT)CB_ADDSTRING, (WPARAM)0, (LPARAM)L"Miller");
			SendMessage(model, (UINT)CB_ADDSTRING, (WPARAM)0, (LPARAM)L"Kreeg");
			SendMessage(model, (UINT)CB_ADDSTRING, (WPARAM)0, (LPARAM)L"Pursuit Cop");
			SendMessage(model, (UINT)CB_ADDSTRING, (WPARAM)0, (LPARAM)L"Ghost");

			SendMessage(GetDlgItem(hDlg, IDC_MODEL), CB_SETCURSEL, (WPARAM)s.character, (LPARAM)0);

			return (INT_PTR)TRUE;
		}
		case WM_CLOSE:
			LeaveRoom();
			exit(0);
			break;
		case WM_COMMAND: {
			int id = LOWORD(wParam);
			switch (id) {
				case IDC_SAVE: {
					SETTINGS s;
					GetDlgItemTextA(hDlg, IDC_USERNAME, s.username, 32);
					s.chat = !!IsDlgButtonChecked(hDlg, IDC_CHAT);
					s.collision = !!IsDlgButtonChecked(hDlg, IDC_COLLISION);
					s.nametags = !!IsDlgButtonChecked(hDlg, IDC_NAMETAGS);
					s.spectator = !!IsDlgButtonChecked(hDlg, IDC_SPECTATOR);
					s.character = (char)SendMessage(GetDlgItem(hDlg, IDC_MODEL), CB_GETCURSEL, 0, 0);
					s.keybind = keybind;

					char buffer[0xFF];
					GetDlgItemTextA(hDlg, IDC_ROOM, buffer, 0xFF);
					sscanf(buffer, "%d", &s.room);

					SaveSettings(&s, false);

					CallFunction("EXPORT_UpdateSettings", 0);

					break;
				}
				case IDC_KEYBIND: {
					for (;;) {
						for (int i = 0; i <= 0xFF; ++i) {
							if (GetAsyncKeyState(i) < 0) {
								for (int e = 0; e < sizeof(KEYS) / sizeof(KEYS[0]); ++e) {
									if (KEYS[e].code == i) {
										keybind = i;
										SetDlgItemTextA(hDlg, IDC_KEYBIND, KEYS[e].name);
										goto leave;
									}
								}
							}
						}
						Sleep(1);
					}
				leave:
					break;
				}
				case IDC_CLEAR: {
					keybind = 0x1A;
					SetDlgItemTextA(hDlg, IDC_KEYBIND, "");
					break;
				}
			}
			break;
		}
	}

	return (INT_PTR)FALSE;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
	return DefWindowProc(hWnd, message, wParam, lParam);
}
