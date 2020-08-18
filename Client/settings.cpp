#include <fstream>
#include <Windows.h>

#include "settings.h"

static json settings;

static std::string GetSettingsPath() {
	char path[MAX_PATH];
	GetTempPathA(sizeof(path), path);

	return std::string(path) + "mmultiplayer.settings";
}

void Settings::SetSetting(const char *menu, const char *key, json value) {
	if (settings[menu].is_null()) {
		settings[menu] = json::object();
	}

	settings[menu][key] = value;
	Settings::Save();
}

json Settings::GetSetting(const char *menu, const char *key, json defaultValue) {
	if (settings[menu].is_null()) {
		settings[menu] = json::object();
	}

	auto &v = settings[menu][key];
	if (v.is_null() || (v.type() != defaultValue.type() && v.is_number() != defaultValue.is_number())) {
		v = defaultValue;
		Settings::Save();
	}

	return v;
}

void Settings::Load() {
	auto reset = true;

	auto f = new std::ifstream(GetSettingsPath());
	if (f) {
		try {
			settings = json::parse(*f);
			reset = false;
		} catch (json::parse_error e) {}

		f->close();
	}

	if (reset) {
		Reset();
	}
}

void Settings::Reset() {
	settings = json::object();
	Settings::Save();
}

void Settings::Save() {
	std::ofstream file(GetSettingsPath(), std::ios::out);
	if (!file) {
		printf("settings: failed to save %s\n", GetSettingsPath().c_str());
		return;
	}

	auto dump = settings.dump();
	file.write(dump.c_str(), dump.size());
	file.close();
}