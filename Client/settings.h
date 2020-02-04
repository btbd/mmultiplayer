#pragma once

namespace Settings {
	void SetSetting(const char *sub, const char *key, json value);
	json GetSetting(const char *sub, const char *key, json defaultValue);
	void Load();
	void Reset();
	void Save();
}