#include "stdafx.h"

namespace Pattern {
	bool CheckMask(void *base, const char *pattern, const char *mask);
	void *FindPattern(const char *pattern, const char *mask);
	void *FindPattern(const char *module, const char *pattern, const char *mask);
	void *FindPattern(void *base, int size, const char *pattern, const char *mask);
};