#include "stdafx.h"

static auto show = false;
static std::vector<MenuTab> tabs;

void RenderMenu(IDirect3DDevice9 *device) {
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

void InputHandler(int msg, int keycode) {
	if (msg == WM_KEYDOWN && keycode == VK_INSERT) {
		show = !show;
		Engine::BlockInput(show);
	}
}

/*** Basic Tabs ***/
void EngineTab() {
	auto engine = Engine::GetEngine();
	if (!engine) {
		return;
	}

	static char command[0xFFF] = { 0 };
	ImGui::InputText("##command", command, sizeof(command));
	ImGui::SameLine();
	if (ImGui::Button("Execute Comamnd") && command[0]) {
		Engine::ExecuteCommand(std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>>().from_bytes(command).c_str());

		command[0] = 0;
	}

	bool check = engine->bSmoothFrameRate;
	ImGui::Checkbox("Smooth Framerate", &check);
	engine->bSmoothFrameRate = check;
	if (check) {
		ImGui::InputFloat("Min Smoothed Framerate", &engine->MinSmoothedFrameRate);
		ImGui::InputFloat("Max Smoothed Framerate", &engine->MaxSmoothedFrameRate);
	}

	auto client = engine->Client;
	if (client) {
		ImGui::InputFloat("Gamma", &client->DisplayGamma);
	}
}

void WorldTab() {
	auto world = Engine::GetWorld();
	if (!world) {
		return;
	}

	ImGui::InputFloat("Time Dilation", &world->TimeDilation);
	ImGui::InputFloat("Gravity", &world->WorldGravityZ);

	auto levels = world->StreamingLevels;
	if (ImGui::TreeNode("world#levels", "%ws (%d)", world->GetMapName(false).c_str(), levels.Num())) {
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
		Engine::OnRenderScene(RenderMenu);
		Engine::OnSuperInput(InputHandler);

		AddTab("Engine", EngineTab);
		AddTab("World", WorldTab);
		AddTab("Player", PlayerTab);

		return true;
	}
}