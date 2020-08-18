#include <windows.h>
#include <psapi.h>

#include "pattern.h"

bool Pattern::CheckMask(void *base, const char *pattern, const char *mask) {
	for (auto b = reinterpret_cast<char *>(base); *mask; ++b, ++pattern, ++mask) {
		if ('x' == *mask && *b != *pattern) {
			return false;
		}
	}

	return base != nullptr;
}

void *Pattern::FindPattern(const char *pattern, const char *mask) {
	return FindPattern(0, pattern, mask);
}

void *Pattern::FindPattern(const char *module, const char *pattern, const char *mask) {
	auto mod = GetModuleHandleA(module);
	if (!mod) {
		return nullptr;
	}

	MODULEINFO info = { 0 };
	if (GetModuleInformation(GetCurrentProcess(), mod, &info, sizeof(info))) {
		return FindPattern(mod, info.SizeOfImage, pattern, mask);
	}

	return nullptr;
}

void *Pattern::FindPattern(void *base, int size, const char *pattern, const char *mask) {
	size -= strlen(mask);

	for (int i = 0; i <= size; ++i) {
		auto addr = reinterpret_cast<char *>(base) + i;
		if (CheckMask(addr, pattern, mask)) {
			return addr;
		}
	}

	return nullptr;
}
