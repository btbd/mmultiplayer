#include "stdafx.h"

typedef void(*MenuTabCallback)();

typedef struct {
	string *Name;
	MenuTabCallback Callback;
} MenuTab;

namespace Menu {
	void AddTab(const char *name, MenuTabCallback callback);
	bool Initialize();
}