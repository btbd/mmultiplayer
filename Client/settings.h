#pragma once

namespace Settings {
	int GetKeybind(const char *name);
	void SetKeybind(const char *name, int vk);
	void Load();
	void Validate();
	void Reset();
	void Save();
}