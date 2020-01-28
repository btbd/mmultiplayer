#include "stdafx.h"

static json settings;

std::string GetSettingsPath() {
	char path[MAX_PATH];
	GetTempPathA(sizeof(path), path);

	return std::string(path) + "mmultiplayer.settings";
}

int Settings::GetKeybind(const char *name) {
	auto v = settings["keybinds"][name];
	if (v.is_null()) {
		return -1;
	}

	return v;
}

void Settings::SetKeybind(const char *name, int vk) {
	settings["keybinds"][name] = vk;
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

	Validate();
}

void Settings::Validate() {
	if (settings["keybinds"].is_null()) {
		settings["keybinds"] = json::object();
	}
}

void Settings::Reset() {

}

void Settings::Save() {

}