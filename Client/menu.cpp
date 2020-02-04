#include "stdafx.h"

static auto show = false;
static std::vector<MenuTab> tabs;
static int showKeybind = 0;

static void RenderMenu(IDirect3DDevice9 *device) {
	if (show) {
		ImGui::Begin("MMultiplayer");
		ImGui::BeginTabBar("");

		for (auto tab : tabs) {
			if (ImGui::BeginTabItem(tab.Name->c_str())) {
				tab.Callback();
				ImGui::EndTabItem();
			}
		}

		ImGui::EndTabBar();
		ImGui::End();
	}
}

/*** Basic Tabs ***/
static void EngineTab() {
	if (ImGui::Hotkey("Menu Keybind##menu-show", &showKeybind)) {
		Settings::SetSetting("menu", "showKeybind", showKeybind);
	}

	auto engine = Engine::GetEngine();
	if (!engine) {
		return;
	}

	static char command[0xFFF] = { 0 };

	auto commandInputCallback = []() {
		if (command[0]) {
			Engine::ExecuteCommand(std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>().from_bytes(command).c_str());

			command[0] = 0;
		}
	};

	if (ImGui::InputText("##command", command, sizeof(command), ImGuiInputTextFlags_EnterReturnsTrue)) {
		commandInputCallback();
	}

	ImGui::SameLine();
	if (ImGui::Button("Execute Comamnd##engine-execute-command")) {
		commandInputCallback();
	}

	bool check = engine->bSmoothFrameRate;
	ImGui::Checkbox("Smooth Framerate##engine-smooth-framerate", &check);
	engine->bSmoothFrameRate = check;
	if (check) {
		ImGui::InputFloat("Min Smoothed Framerate##engine-max-smoothed", &engine->MinSmoothedFrameRate);
		ImGui::InputFloat("Max Smoothed Framerate##engine-min-smoothed", &engine->MaxSmoothedFrameRate);
	}

	auto client = engine->Client;
	if (client) {
		ImGui::InputFloat("Gamma##engine-gamma", &client->DisplayGamma);
	}
}

static void WorldTab() {
	auto world = Engine::GetWorld();
	if (!world) {
		return;
	}

	ImGui::InputFloat("Time Dilation##world-time-dilation", &world->TimeDilation);
	ImGui::InputFloat("Gravity##-world-gravity", &world->WorldGravityZ);

	auto levels = world->StreamingLevels;
	if (ImGui::TreeNode("world##world-levels", "%ws (%d)", world->GetMapName(false).c_str(), levels.Num())) {
		for (DWORD i = 0; i < levels.Num(); ++i) {
			auto level = levels.GetByIndex(i);
			if (level) {
				bool check = level->bShouldBeLoaded;
				ImGui::Checkbox(level->PackageName.GetName().c_str(), &check);

				if (check) {
					level->bShouldBeLoaded = level->bShouldBeVisible = true;
				} else {
					level->bShouldBeLoaded = false;
				}
			}
		}

		ImGui::TreePop();
	}
}

void PlayerTab() {
	auto controller = Engine::GetPlayerController();
	if (!controller) {
		return;
	}

	auto pawn = Engine::GetPlayerPawn();
	if (!pawn) {
		return;
	}
}

namespace Menu {
	void AddTab(const char *name, MenuTabCallback callback) {
		tabs.push_back({
			new std::string(name),
			callback,
		});
	}

	bool Initialize() {
		showKeybind = Settings::GetSetting("menu", "showKeybind", VK_INSERT);

		Engine::OnRenderScene(RenderMenu);

		Engine::OnInput([](int msg, int keycode) {
			if (!show && msg == WM_KEYUP && keycode == showKeybind) {
				show = true;
				Engine::BlockInput(true);
			}
		});

		Engine::OnSuperInput([](int msg, int keycode) {
			if (show && msg == WM_KEYUP && keycode == showKeybind) {
				show = false;
				Engine::BlockInput(false);
			}
		});

		AddTab("Engine", EngineTab);
		AddTab("World", WorldTab);
		AddTab("Player", PlayerTab);

		return true;
	}
}