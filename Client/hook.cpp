#include "stdafx.h"

namespace hook {
	byte GetInstructionLength(byte table[], byte *instruction) {
		byte i = table[*instruction++];
		return i < 0x10 ? i : GetInstructionLength(INSTRUCTION_TABLES[i - 0x10], instruction);
	}

	bool SetJMP(void *dest, void *src, int nops) {
		byte jmp[] = { 0xE9, 0x00, 0x00, 0x00, 0x00 };
		
		DWORD protection = 0;
		if (!VirtualProtect(src, JMP_SIZE + nops, PAGE_EXECUTE_READWRITE, &protection)) {
			return false;
		}

		*(int *)&jmp[1] = (int)dest - ((int)src + JMP_SIZE);

		memcpy(src, jmp, JMP_SIZE);
		for (byte i = 0; i < nops; ++i) {
			*((byte *)src + JMP_SIZE + i) = 0x90;
		}

		VirtualProtect(src, JMP_SIZE + nops, protection, &protection);
		return true;
	}

	bool TrampolineHook(void *dest, void *src, void **original) {
		if (!src) {
			return false;
		}

		if (*(byte *)src == 0xE9) {
			void *copy = VirtualAlloc(0, JMP_SIZE, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
			if (!copy) {
				return false;
			}

			if (!SetJMP(RELATIVE_ADDR(src, JMP_SIZE), copy, 0)) {
				VirtualFree(copy, 0, MEM_RELEASE);
				return false;
			}

			*original = copy;
			if (!SetJMP(dest, src, 0)) {
				*original = 0;
				VirtualFree(copy, 0, MEM_RELEASE);
				return false;
			}
		} else {
			byte length = 0;
			for (byte *inst = (byte *)src; length < JMP_SIZE; ) {
				byte l = GetInstructionLength(INSTRUCTION_TABLE, inst);
				if (!l) {
					return false;
				}

				inst += l;
				length += l;
			}

			void *copy = VirtualAlloc(0, length + JMP_SIZE, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
			if (!copy) {
				return false;
			}

			memcpy(copy, src, length);
			if (!SetJMP((byte *)src + length, (byte *)copy + length, 0)) {
				VirtualFree(copy, 0, MEM_RELEASE);
				return false;
			}

			*original = copy;
			if (!SetJMP(dest, src, length - JMP_SIZE)) {
				*original = 0;
				VirtualFree(copy, 0, MEM_RELEASE);
				return false;
			}
		}

		return true;
	}
};