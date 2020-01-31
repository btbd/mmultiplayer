#include "stdafx.h"

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
	if (reason == DLL_PROCESS_ATTACH && GetModuleHandle(L"MirrorsEdge.exe")) {
		while (!GetModuleHandle(L"d3d9.dll")) {
			Sleep(100);
		}

		Settings::Load();

		AllocConsole();
		static_cast<VOID>(freopen("CONIN$", "r", stdin));
		static_cast<VOID>(freopen("CONOUT$", "w", stdout));
		static_cast<VOID>(freopen("CONOUT$", "w", stderr));

		Addon *addons[] = { new Client(), new Dolly() };

		if (!Engine::Initialize()) {
			MessageBoxA(0, "Failed to initialize engine", "Fatal", 0);
			return TRUE;
		}

		if (!Menu::Initialize()) {
			MessageBoxA(0, "Failed to initialize menu", "Fatal", 0);
			return TRUE;
		}

		for (auto &addon : addons) {
			if (!addon->Initialize()) {
				MessageBoxA(0, ("Failed to initialize \"" + addon->GetName() + "\"").c_str(), "Fatal", 0);
				return TRUE;
			}
		}
	}
	
	return TRUE;
}