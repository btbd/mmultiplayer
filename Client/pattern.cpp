#include "stdafx.h"

namespace pattern {
	bool CheckMask(void *base, const char *pattern, const char *mask) {
		for (char *b = (char *)base; *mask; ++b, ++pattern, ++mask) {
			if ('x' == *mask && *b != *pattern) {
				return false;
			}
		}

		return base != 0;
	}

	void *FindPattern(const char *pattern, const char *mask) {
		return FindPattern(0, pattern, mask);
	}

	void *FindPattern(const char *module, const char *pattern, const char *mask) {
		HMODULE mod = GetModuleHandleA(module);
		if (!mod) {
			return 0;
		}

		MODULEINFO info = { 0 };
		if (GetModuleInformation(GetCurrentProcess(), mod, &info, sizeof(info))) {
			return FindPattern((void *)mod, info.SizeOfImage, pattern, mask);
		}

		return 0;
	}

	void *FindPattern(void *base, int size, const char *pattern, const char *mask) {
		size -= strlen(mask);

		for (int i = 0; i <= size; ++i) {
			void *addr = (void *)((char *)base + i);
			if (CheckMask(addr, pattern, mask)) {
				return addr;
			}
		}

		return 0;
	}
};