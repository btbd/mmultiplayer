#pragma once

#include <string>

typedef void(*MenuTabCallback)();

typedef struct {
	std::string Name;
	MenuTabCallback Callback;
} MenuTab;

namespace Menu {
	void AddTab(const char *name, MenuTabCallback callback);
	void Hide();
	void Show();
	bool Initialize();
}