#include "stdafx.h"

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
	if (reason == DLL_PROCESS_ATTACH && GetModuleHandle(L"MirrorsEdge.exe")) {
		while (!GetModuleHandle(L"d3d9.dll")) {
			Sleep(100);
		}

		Settings::Load();

		Addon *addons[] = { new Client(), new Trainer(), new Dolly() };

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
			}
		}
	}
	
	return TRUE;
}