#include "stdafx.h"

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
	if (reason == DLL_PROCESS_ATTACH) {
		Settings::Load();

		AllocConsole();
		static_cast<VOID>(freopen("CONIN$", "r", stdin));
		static_cast<VOID>(freopen("CONOUT$", "w", stdout));
		static_cast<VOID>(freopen("CONOUT$", "w", stderr));

		Addon *addons[] = { new Dolly() };

		if (!Engine::Initialize()) {
			printf("fatal: failed to initialize engine\n");
			return TRUE;
		}

		if (!Menu::Initialize()) {
			printf("fatal: failed to initialize menu\n");
			return TRUE;
		}

		for (auto &addon : addons) {
			if (!addon->Initialize()) {
				printf("fatal: %s failed to initialize\n", addon->GetName().c_str());
				return TRUE;
			}
		}
	}
	
	return TRUE;
}