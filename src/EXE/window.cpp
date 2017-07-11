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

	HWND hWnd = CreateWindow(L"win32app", L"", WS_BORDER, 50, 50, 0, 0, nullptr, nullptr, GetModuleHandle(0), nullptr);

	ShowWindow(CreateDialog(GetModuleHandle(0), MAKEINTRESOURCE(IDD_WINDOW), hWnd, DlgProc), SW_SHOW);

	MSG msg;
	while (GetMessage(&msg, nullptr, 0, 0)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}

INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam) {
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
				s.chat = s.collision = s.nametags = true;
				s.spectator = false;
				fwrite(&s, sizeof(SETTINGS), 1, file);
			} else {
				fread(&s, sizeof(SETTINGS), 1, file);
			}
			fclose(file);

			SaveSettings(&s);
			if (s.chat) CheckDlgButton(hDlg, IDC_CHAT, BST_CHECKED);
			if (s.collision) CheckDlgButton(hDlg, IDC_COLLISION, BST_CHECKED);
			if (s.nametags) CheckDlgButton(hDlg, IDC_NAMETAGS, BST_CHECKED);
			if (s.spectator) CheckDlgButton(hDlg, IDC_SPECTATOR, BST_CHECKED);
			SetDlgItemTextA(hDlg, IDC_USERNAME, s.username);
			sprintf(path, "%d", s.room);
			SetDlgItemTextA(hDlg, IDC_ROOM, path);

			return (INT_PTR)TRUE;
		}
		case WM_CLOSE:
			exit(0);
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

					char buffer[0xFF];
					GetDlgItemTextA(hDlg, IDC_ROOM, buffer, 0xFF);
					sscanf(buffer, "%d", &s.room);

					SaveSettings(&s);

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
