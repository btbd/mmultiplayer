#include "stdafx.h"

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
	AllocConsole();
	freopen("CONIN$", "r", stdin);
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);

	Addon *addons[] = { new Dolly() };
	
	switch (reason) {
		case DLL_PROCESS_ATTACH:
			if (!Engine::Initialize()) {
				printf("fatal: failed to initialize engine\n");
				break;
			}

			if (!Menu::Initialize()) {
				printf("fatal: failed to initialize menu\n");
				break;
			}

			for (auto addon : addons) {
				if (!addon->Initialize()) {
					printf("fatal: %s failed to initialize\n", addon->GetName().c_str());
					break;
				}
			}

			break;
		case DLL_PROCESS_DETACH:
			break;
	}
	
	return TRUE;
}