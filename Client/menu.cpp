#include "stdafx.h"

bool show = false;
std::vector<MenuTab> tabs;

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

	/* if (msg == WM_KEYDOWN && keycode == 0x31) {
		auto pawn = Engine::GetPlayerPawn();

		auto actor = (Classes::ATdPlayerPawn *)pawn->Spawn(Classes::ATdPlayerPawn::StaticClass(), 0, 0, pawn->Location, pawn->Rotation, 0, true);
		actor->Mesh3p->SetMaterial(0, (Classes::UMaterialInterface *)pawn->STATIC_DynamicLoadObject(L"Material TT_Ghost.Materials.M_GhostShader_01", Classes::UMaterialInterface::StaticClass(), false));
		actor->Mesh3p->SetSkeletalMesh((Classes::USkeletalMesh *)pawn->STATIC_DynamicLoadObject(L"TT_Ghost.GhostCharacter_01", Classes::USkeletalMesh::StaticClass(), false), true);

		/* auto objects = Classes::UObject::GetGlobalObjects();
		for (DWORD i = 0; i < objects.Num(); ++i) {
			auto object = objects.GetByIndex(i);
			if (object && (object->IsA(Classes::UMaterialInterface::StaticClass()) || object->IsA(Classes::UMaterial::StaticClass()))) {
				printf("%s\n", object->GetFullName().c_str());

				// mesh->bCollideWorld = mesh->bCollideWhenPlacing = false;

				// auto pawn = Engine::GetPlayerPawn();
				// printf("%x\n", (DWORD)Engine::GetWorld()->Spawn(Classes::ATdPlayerPawn::StaticClass(), 0, 0, pawn->Location, pawn->Rotation, 0, true));
			}
		} 
	} */
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
		wchar_t wcommand[0xFFF] = { 0 };

		int len = (int)strlen(command);
		MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, command, len, wcommand, len);

		Engine::ExecuteCommand(wcommand);

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