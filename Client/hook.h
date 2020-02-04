#include "stdafx.h"

#define JMP_SIZE (5)
#define RELATIVE_ADDR(addr, size) ((void *)((byte *)addr + *(int *)((byte *)addr + (size - (int)sizeof(int))) + size))

namespace Hook {
	byte GetInstructionLength(byte table[], byte *instruction);
	bool SetJMP(void *dest, void *src, int nops);
	bool TrampolineHook(void *dest, void *src, void **original);
	bool UnTrampolineHook(void *src, void *original);
};