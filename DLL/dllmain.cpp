#include "stdafx.h"

DWORD actors[10] = { 0 };
DWORD player_bones = 0;
int(__thiscall *UpdateActorOriginal)(int this_, int);
int(__thiscall *UpdateBonesOriginal)(int this_, int bones);
void(*UpdatePlayerBonesOriginal)();

int __fastcall UpdateActorHook(int this_, void *idle_, int arg) {
	float *x = (float *)(this_ + 0xE8);
	float *y = (float *)(this_ + 0xEC);
	float *z = (float *)(this_ + 0xF0);
	float *r = (float *)(this_ + 0xF8);

	for (int i = 0; i < 10; ++i) {
		if (!actors[i] && *x == -237887 - i * 10 && *y == 107302 && *z == 182292) {
			actors[i] = this_;
		}

		if (actors[i] == this_) {
			*x = (float)(i * 100);
			*y = (float)(i * 100);
			*z = 46;
		}
	}

	return UpdateActorOriginal(this_, arg);
}

int __fastcall UpdateBonesHook(int this_, void *idle_, int bones) {
	if (this_ != bones && *(DWORD *)(bones + 4) > 0) {
		((int(__thiscall *)(int, int))0xCF3550)(this_, *(DWORD *)(bones + 4));
		memcpy(*(void **)this_, *(const void **)bones, 32 * *(DWORD *)(bones + 4));
		*(DWORD *)(this_ + 4) = *(DWORD *)(bones + 4);

		int bone_count = (32 * *(DWORD *)(bones + 4)) - 0x7E0;
		if (bone_count == 0x5A0 || bone_count == 0x4E0 || bone_count == 0x320 || bone_count == 0x240) {
			for (int i = 0; i < 10; ++i) {
				if (actors[i]) {
					DWORD bones_base = ReadInt(GetCurrentProcess(), (void *)(actors[i] + 0x1C0));
					if (bones_base) {
						bones_base = ReadInt(GetCurrentProcess(), (void *)(bones_base + 0x24C));
						if (bones_base && (bones_base == *(DWORD *)this_ || bones_base == *(DWORD *)bones)) {
							if (player_bones) {
								memcpy((void *)bones_base, (void *)player_bones, 0xD80);
							}
						}
					}
				}
			}
		}

		return this_;
	}

	return UpdateBonesOriginal(this_, bones);
}

_declspec(naked) void UpdatePlayerBonesHook() {
	__asm {
		mov ecx, [ebx + 0x24C]
		mov player_bones, ecx
		jmp UpdatePlayerBonesOriginal
	}
}

void MainThread() {
	AllocConsole();
	freopen("CONIN$", "r", stdin);
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);

	TrampolineHook(UpdateActorHook, (void *)0xB5F1F0, (void **)&UpdateActorOriginal);
	TrampolineHook(UpdateBonesHook, (void *)0xCF6AF0, (void **)&UpdateBonesOriginal);
	TrampolineHook(UpdatePlayerBonesHook, (void *)0xDC5105, (void **)&UpdatePlayerBonesOriginal);
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
	if (reason == DLL_PROCESS_ATTACH) {
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, 0, 0, 0);
	}

	return TRUE;
}

