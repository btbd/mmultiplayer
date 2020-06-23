#include "stdafx.h"

static auto show = false, showPlayerInfo = false;
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

	if (showPlayerInfo) {
		auto pawn = Engine::GetPlayerPawn();
		auto controller = Engine::GetPlayerController();

		if (pawn && controller) {
			static const auto rightPadding = 100.0f;
			static const auto padding = 5.0f;

			auto window = ImGui::BeginRawScene("##player-debug-info");

			auto &io = ImGui::GetIO();
			auto width = io.DisplaySize.x - padding;

			auto yIncrement = ImGui::GetTextLineHeight();
			auto y = io.DisplaySize.y - (7 * yIncrement) - padding;
			auto color = ImColor(ImVec4(1.0f, 1.0f, 1.0f, 1.0f));

			window->DrawList->AddRectFilled(ImVec2(width - rightPadding - padding, y - padding), io.DisplaySize, ImColor(ImVec4(0, 0, 0, 0.4f)));

			char buffer[0x200] = { 0 };

			sprintf_s(buffer, "%.2f", pawn->Location.X / 100.0f);
			window->DrawList->AddText(ImVec2(width - ImGui::CalcTextSize(buffer, nullptr, false).x, y), color, buffer);
			window->DrawList->AddText(ImVec2(width - rightPadding, y), color, "X");

			sprintf_s(buffer, "%.2f", pawn->Location.Y / 100.0f);
			window->DrawList->AddText(ImVec2(width - ImGui::CalcTextSize(buffer, nullptr, false).x, y += yIncrement), color, buffer);
			window->DrawList->AddText(ImVec2(width - rightPadding, y), color, "Y");

			sprintf_s(buffer, "%.2f", pawn->Location.Z / 100.0f);
			window->DrawList->AddText(ImVec2(width - ImGui::CalcTextSize(buffer, nullptr, false).x, y += yIncrement), color, buffer);
			window->DrawList->AddText(ImVec2(width - rightPadding, y), color, "Z");

			sprintf_s(buffer, "%.2f", sqrtf(powf(pawn->Velocity.X, 2) + powf(pawn->Velocity.Y, 2)) * 0.036f);
			window->DrawList->AddText(ImVec2(width - ImGui::CalcTextSize(buffer, nullptr, false).x, y += yIncrement), color, buffer);
			window->DrawList->AddText(ImVec2(width - rightPadding, y), color, "V");

			sprintf_s(buffer, "%.2f", (static_cast<float>(controller->Rotation.Pitch % 0x10000) / static_cast<float>(0x10000)) * 360.0f);
			window->DrawList->AddText(ImVec2(width - ImGui::CalcTextSize(buffer, nullptr, false).x, y += yIncrement), color, buffer);
			window->DrawList->AddText(ImVec2(width - rightPadding, y), color, "RX");

			sprintf_s(buffer, "%.2f", (static_cast<float>(controller->Rotation.Yaw % 0x10000) / static_cast<float>(0x10000)) * 360.0f);
			window->DrawList->AddText(ImVec2(width - ImGui::CalcTextSize(buffer, nullptr, false).x, y += yIncrement), color, buffer);
			window->DrawList->AddText(ImVec2(width - rightPadding, y), color, "RY");

			sprintf_s(buffer, "%d", pawn->MovementState.GetValue());
			window->DrawList->AddText(ImVec2(width - ImGui::CalcTextSize(buffer, nullptr, false).x, y += yIncrement), color, buffer);
			window->DrawList->AddText(ImVec2(width - rightPadding, y), color, "S");

			ImGui::EndRawScene();
		}
	}
}

/*** Basic Tabs ***/
static void EngineTab() {
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

	if (ImGui::Hotkey("Menu Keybind##menu-show", &showKeybind)) {
		Settings::SetSetting("menu", "showKeybind", showKeybind);
	}

	ImGui::SameLine();

	if (ImGui::Button("Debug Console##client-show-console")) {
		AllocConsole();
		static_cast<VOID>(freopen("CONIN$", "r", stdin));
		static_cast<VOID>(freopen("CONOUT$", "w", stdout));
		static_cast<VOID>(freopen("CONOUT$", "w", stderr));
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
	if (ImGui::Checkbox("Show Player Info", &showPlayerInfo)) {
		Settings::SetSetting("player", "showInfo", showPlayerInfo);
	}
}

namespace Menu {
	void AddTab(const char *name, MenuTabCallback callback) {
		tabs.push_back({
			new std::string(name),
			callback,
		});
	}

	void Hide() {
		show = false;
		Engine::BlockInput(false);
	}

	void Show() {
		show = true;
		Engine::BlockInput(true);
	}

	bool Initialize() {
		showKeybind = Settings::GetSetting("menu", "showKeybind", VK_INSERT);
		showPlayerInfo = Settings::GetSetting("player", "showInfo", false);

		Engine::OnRenderScene(RenderMenu);

		Engine::OnInput([](unsigned int &msg, int keycode) {
			if (!show && msg == WM_KEYUP && keycode == showKeybind) {
				Show();
			}
		});

		Engine::OnSuperInput([](unsigned int &msg, int keycode) {
			if (show && msg == WM_KEYUP && (keycode == showKeybind || keycode == VK_ESCAPE)) {
				Hide();
			}
		});

		AddTab("Engine", EngineTab);
		AddTab("World", WorldTab);
		AddTab("Player", PlayerTab);

		return true;
	}
}