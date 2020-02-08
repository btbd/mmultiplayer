#include "stdafx.h"

// D3D9 and window hooks
static struct {
	std::vector<RenderSceneCallback> Callbacks;
	HRESULT(WINAPI *Original)(IDirect3DDevice9 *) = nullptr;
} renderScene;

static struct {
	HRESULT(WINAPI *Original)(IDirect3DDevice9 *, D3DPRESENT_PARAMETERS *) = nullptr;
} resetScene;

static struct {
	bool BlockInput = false;
	byte KeysDown[0x100] = { 0 };
	std::vector<InputCallback> InputCallbacks;
	std::vector<InputCallback> SuperInputCallbacks;

	WNDPROC WndProc = nullptr;
	BOOL(WINAPI *PeekMessage)(LPMSG, HWND, UINT, UINT, UINT) = nullptr;
} window;

static HMODULE(WINAPI *LoadLibraryAOriginal)(const char *) = nullptr;

// Engine hooks
static struct {
	std::vector<std::wstring> Queue;
	std::mutex Mutex;
} commands;

static struct {
	std::vector<std::pair<Engine::Character, Classes::ATdPlayerPawn *&>> Queue;
	std::vector<Classes::AActor *> DeQueue;
	std::mutex Mutex;
} spawns;

static struct {
	std::vector<ProcessEventCallback> Callbacks;
	int(__thiscall *Original)(Classes::UObject *, class Classes::UFunction *, void *, void *) = nullptr;
} processEvent;

static struct {
	bool Loading = false;
	void *Base = nullptr;
	std::vector<LevelLoadCallback> PreCallbacks;
	std::vector<LevelLoadCallback> PostCallbacks;
	int(__thiscall *Original)(void *, void *, unsigned long long arg);
} levelLoad;

static struct {
	void *PreBase = nullptr;
	void *PostBase = nullptr;
	std::vector<DeathCallback> PreCallbacks;
	std::vector<DeathCallback> PostCallbacks;
	int(*PreOriginal)();
	int(*PostOriginal)();
} death;

static struct {
	std::vector<ActorTickCallback> Callbacks;
	void *(__thiscall *Original)(Classes::AActor *, void *) = nullptr;
} actorTick;

static struct {
	std::vector<BonesTickCallback> Callbacks;
	void *(__thiscall *Original)(void *, void *, void *, void *, void *) = nullptr;
} bonesTick;

static struct {
	D3DXMATRIX *Matrix;
	int *(__thiscall *Original)(Classes::FMatrix *, void *) = nullptr;
} projectionTick;

static struct {
	std::vector<TickCallback> Callbacks;
	void(__thiscall *Original)(float *, int, float) = nullptr;
} tick;

// D3D9 and window hook implementations
LRESULT CALLBACK WndProcHook(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
HRESULT WINAPI EndSceneHook(IDirect3DDevice9 *device) {
	static bool init = true;
	if (init) {
		D3DDEVICE_CREATION_PARAMETERS params;
		device->GetCreationParameters(&params);

		ImGui::CreateContext();
		ImGui::GetIO().Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\verdana.ttf", 14.0f);
		ImGui_ImplWin32_Init(params.hFocusWindow);
		ImGui_ImplDX9_Init(device);

		window.WndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(params.hFocusWindow, GWLP_WNDPROC, reinterpret_cast<LONG>(WndProcHook)));

		init = false;
	}

	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	for (auto callback : renderScene.Callbacks) {
		callback(device);
	}

	ImGui::EndFrame();

	ImGui::Render();
	ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());

	return renderScene.Original(device);
}

HRESULT WINAPI ResetHook(IDirect3DDevice9 *pDevice, D3DPRESENT_PARAMETERS *params) {
	ImGui_ImplDX9_Shutdown();
	ImGui_ImplWin32_Shutdown();

	auto ret = resetScene.Original(pDevice, params);

	ImGui_ImplWin32_Init(params->hDeviceWindow);
	ImGui_ImplDX9_Init(pDevice);

	return ret;
}

void HandleMessage(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	switch (msg) {
		case WM_KEYDOWN: case WM_SYSKEYDOWN:
			if (wParam < sizeof(window.KeysDown)) {
				auto k = &window.KeysDown[wParam];
				if (!*k) {
					auto block = window.BlockInput;

					for (auto callback : window.SuperInputCallbacks) {
						callback(msg, wParam);
					}

					if (!block) {
						for (auto callback : window.InputCallbacks) {
							callback(msg, wParam);
						}
					}

					*k = 1;
				}
			}

			break;
		case WM_KEYUP: case WM_SYSKEYUP:
			if (wParam < sizeof(window.KeysDown)) {
				auto k = &window.KeysDown[wParam];
				if (*k) {
					auto block = window.BlockInput;

					for (auto callback : window.SuperInputCallbacks) {
						callback(msg, wParam);
					}

					if (!block) {
						for (auto callback : window.InputCallbacks) {
							callback(msg, wParam);
						}
					}

					*k = 0;
				}
			}

			break;
	}
}

LRESULT CALLBACK WndProcHook(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
	if (window.BlockInput && ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam)) {
		HandleMessage(hWnd, msg, wParam, lParam);
		return true;
	}

	HandleMessage(hWnd, msg, wParam, lParam);
	return CallWindowProc(window.WndProc, hWnd, msg, wParam, lParam);
}

BOOL WINAPI PeekMessageHook(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg) {
	auto ret = window.PeekMessage(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);

	if (lpMsg && (wRemoveMsg & PM_REMOVE)) {
		if (window.BlockInput) {
			ImGui_ImplWin32_WndProcHandler(lpMsg->hwnd, lpMsg->message, lpMsg->wParam, lpMsg->lParam);

			HandleMessage(lpMsg->hwnd, lpMsg->message, lpMsg->wParam, lpMsg->lParam);
			TranslateMessage(lpMsg);

			lpMsg->message = WM_NULL;
		} else {
			HandleMessage(lpMsg->hwnd, lpMsg->message, lpMsg->wParam, lpMsg->lParam);
		}
	}

	return ret;
}

// Engine hook implementations
int __fastcall ProcessEventHook(Classes::UObject *object, void *idle, class Classes::UFunction *function, void *args, void *result) {
	auto sum = 0;
	for (auto callback : processEvent.Callbacks) {
		sum += callback(object, function, args, result);
	}

	return sum == 0 ? processEvent.Original(object, function, args, result) : 0;
}

int __fastcall LevelLoadHook(void *this_, void *idle, void **levelInfo, unsigned long long arg) {
	auto levelName = reinterpret_cast<const wchar_t *>(levelInfo[7]);

	for (auto callback : levelLoad.PreCallbacks) {
		callback(levelName);
	}
	
	levelLoad.Loading = true;
	auto ret = levelLoad.Original(this_, levelInfo, arg);
	levelLoad.Loading = false;

	for (auto callback : levelLoad.PostCallbacks) {
		callback(levelName);
	}

	return ret;
}

int PreDeathHook() {
	for (auto callback : death.PreCallbacks) {
		callback();
	}

	return death.PreOriginal();
}

int PostDeathHook() {
	auto ret = death.PostOriginal();

	for (auto callback : death.PostCallbacks) {
		callback();
	}

	return ret;
}

HMODULE WINAPI LoadLibraryAHook(const char *module) {
	if (strstr(module, "menl_hooks.dll")) {
		Hook::UnTrampolineHook(levelLoad.Base, levelLoad.Original);
		Hook::UnTrampolineHook(death.PreBase, death.PreOriginal);
		Hook::UnTrampolineHook(death.PostBase, death.PostOriginal);

		std::thread([]() {
			for (;;) {
				if (*reinterpret_cast<byte *>(death.PostBase) == 0xE9) {
					Hook::TrampolineHook(LevelLoadHook, levelLoad.Base, reinterpret_cast<void **>(&levelLoad.Original));
					Hook::TrampolineHook(PreDeathHook, death.PreBase, reinterpret_cast<void **>(&death.PreOriginal));
					Hook::TrampolineHook(PostDeathHook, death.PostBase, reinterpret_cast<void **>(&death.PostOriginal));
					return;
				}

				Sleep(1);
			}
		}).detach();
	}

	return LoadLibraryAOriginal(module);
}

void *__fastcall ActorTickHook(Classes::AActor *actor, void *idle, void *arg) {
	for (auto callback : actorTick.Callbacks) {
		callback(actor);
	}

	return actorTick.Original(actor, arg);;
}

void *__fastcall BonesTickHook(void *this_, void *idle, Classes::TArray<Classes::FBoneAtom> *bones, void *arg3, void *arg4, void *arg5) {
	auto ret = bonesTick.Original(this_, bones, arg3, arg4, arg5);

	for (auto callback : bonesTick.Callbacks) {
		callback(bones);
	}

	return ret;
}

int *__fastcall ProjectionTick(Classes::FMatrix *matrix, void *idle, void *arg) {
	projectionTick.Matrix = reinterpret_cast<D3DXMATRIX *>(matrix);
	return projectionTick.Original(matrix, arg);
}

Classes::ATdPlayerPawn *SpawnCharacter(Engine::Character character) {
	static const wchar_t *meshes[] = {
		nullptr, // Faith
		L"CH_TKY_Cop_Patrol_Female.SK_TKY_Cop_Patrol_Female", // Kate
		L"CH_Celeste.SK_Celeste", // Celeste
		L"CH_TKY_Cop_Pursuit_Female.SK_TKY_Cop_Pursuit_Female", // Assault Celeste
		L"CH_TKY_Crim_Jacknife.SK_TKY_Crim_Jacknife", // Jacknife
		L"CH_Miller.SK_Miller", // Miller
		L"CH_Kreeg.SK_Kreeg", // Kreeg
		L"CH_TKY_Cop_Pursuit.SK_TKY_Cop_Pursuit", // Pursuit Cop
		L"TT_Ghost.GhostCharacter_01", // Ghost
	};

	static const std::vector<std::wstring> materials[] = {
		// Faith
		{},

		// Kate
		{
			L"MaterialInstanceConstant CH_TKY_Cop_Patrol_Female.MI_Kate_Teeth",
			L"MaterialInstanceConstant CH_TKY_Cop_Patrol_Female.MI_Kate_Eyes",
			L"Material CH_TKY_Crim_Fixer.unlitAlpha",
			L"MaterialInstanceConstant CH_TKY_Cop_Patrol_Female.MI_Kate_Skin",
			L"MaterialInstanceConstant CH_TKY_Cop_Patrol_Female.MI_Kate_Hair",
			L"MaterialInstanceConstant CH_TKY_Cop_Patrol_Female.MI_Kate_Cloth",
		},

		// Celeste
		{
			L"Material CH_Celeste.alphablend",
			L"MaterialInstanceConstant CH_Celeste.MI_HairWTF",
			L"MaterialInstanceConstant CH_Celeste.MI_Celeste_Teeth",
			L"MaterialInstanceConstant CH_Celeste.MI_Celeste_Merged_ClothB",
			L"MaterialInstanceConstant CH_Celeste.MI_Celeste_Merged_SkinB",
			L"MaterialInstanceConstant CH_Celeste.MI_Celeste_Eyes",
		},

		// Assault Celeste
		{
			L"MaterialInstanceConstant CH_TKY_Cop_Pursuit_Female.MI_CopPursuitFemale",
		},

		// Jacknife
		{
			L"MaterialInstanceConstant CH_TKY_Crim_Jacknife.MI_Jackknife_Teeth",
			L"MaterialInstanceConstant CH_TKY_Crim_Jacknife.MI_Jackknife_Cloth",
			L"MaterialInstanceConstant CH_TKY_Crim_Jacknife.MI_TKY_Crim_Prowler_Eyes",
			L"Material CH_TKY_Crim_Jacknife.M_Jackknife_Eyeshade",
			L"MaterialInstanceConstant CH_TKY_Crim_Jacknife.MI_Jackknife_jSkin",
			L"MaterialInstanceConstant CH_TKY_Crim_Jacknife.MI_JackKnife_Hair",
		},

		// Miller
		{
			L"MaterialInstanceConstant CH_Miller.MI_Miller_Eyes",
			L"MaterialInstanceConstant CH_Miller.MI_Teeth",
			L"MaterialInstanceConstant CH_Miller.MI_Miller_Merged_Cloth",
			L"MaterialInstanceConstant CH_Miller.MI_Miller_Merged_Skin",
			L"Material CH_Miller.Unlit",
			L"Material CH_Miller.M_Miller_Brow",
			L"MaterialInstanceConstant CH_Miller.MI_MillerKlurre",
		},

		// Kreeg
		{
			L"MaterialInstanceConstant CH_Kreeg.MI_Kreeg_Teeth",
			L"MaterialInstanceConstant CH_Kreeg.MI_Kreeg_Cloth",
			L"MaterialInstanceConstant CH_Kreeg.MI_Kreeg_Skin",
			L"Material CH_Kreeg.M_Kreeg_Unlit",
			L"MaterialInstanceConstant CH_Kreeg.MI_Kreeg_Eyes",
		},

		// Pursuit Cop
		{
			L"MaterialInstanceConstant CH_TKY_Cop_Pursuit.MI_TKY_Cop_Pursuit",
		},

		// Ghost
		{
			L"Material TT_Ghost.Materials.M_GhostShader_01",
		},
	};

	auto player = Engine::GetPlayerPawn();
	if (!player) {
		return nullptr;
	}

	auto pawn = static_cast<Classes::ATdPlayerPawn *>(player->Spawn(Classes::ATdPlayerPawn::StaticClass(), 0, 0, { 0 }, { 0 }, 0, true));
	pawn->SetCollisionType(Classes::ECollisionType::COLLIDE_NoCollision);

	if (character != Engine::Character::Faith) {
		auto mesh = pawn->Mesh3p;
		mesh->SetSkeletalMesh(static_cast<Classes::USkeletalMesh *>(pawn->STATIC_DynamicLoadObject(meshes[static_cast<size_t>(character)], Classes::USkeletalMesh::StaticClass(), false)), false);

		auto mats = materials[static_cast<size_t>(character)];
		for (auto i = 0UL; i < mats.size(); ++i) {
			mesh->SetMaterial(i, static_cast<Classes::UMaterialInterface *>(pawn->STATIC_DynamicLoadObject(mats[i].c_str(), Classes::UMaterialInterface::StaticClass(), false)));
		}

		if (character == Engine::Character::Kate || character == Engine::Character::Miller || character == Engine::Character::Kreeg) {
			pawn->PrePivot.Z = 94;
		}
	}

	pawn->Mesh3p->bUpdateSkelWhenNotRendered = true;
	return pawn;
}

void __fastcall TickHook(float *scales, void *idle, int arg, float delta) {
	tick.Original(scales, arg, delta);

	if (Engine::GetPlayerPawn(true)) {
		// Queues must be executed inside the context of an engine thread in sync with a tick
		if (commands.Queue.size() > 0) {
			auto console = Engine::GetConsole();

			if (console) {
				commands.Mutex.lock();

				for (auto &command : commands.Queue) {
					console->ConsoleCommand(command.c_str());
				}

				commands.Queue.clear();
				commands.Queue.shrink_to_fit();

				commands.Mutex.unlock();
			}
		}

		if (spawns.Queue.size() > 0) {
			spawns.Mutex.lock();

			for (auto &spawn : spawns.Queue) {
				if (!spawn.second) {
					spawn.second = SpawnCharacter(spawn.first);
				}
			}

			spawns.Queue.clear();
			spawns.Queue.shrink_to_fit();

			spawns.Mutex.unlock();
		}

		if (spawns.DeQueue.size() > 0) {
			spawns.Mutex.lock();

			for (auto actor : spawns.DeQueue) {
				actor->SetHidden(true);
				actor->SetTimer(0.01f, false, "DestroyPawn", actor);
			}

			spawns.DeQueue.clear();
			spawns.DeQueue.shrink_to_fit();

			spawns.Mutex.unlock();
		}
	}

	for (auto callback : tick.Callbacks) {
		callback(delta);
	}
}

Classes::UTdGameEngine *Engine::GetEngine(bool update) {
	static Classes::UTdGameEngine *cache = nullptr;

	if (!cache || update) {
		auto objects = Classes::UObject::GetGlobalObjects();
		for (auto i = 0UL; i < objects.Num(); ++i) {
			auto object = objects.GetByIndex(i);
			if (object && object->IsA(Classes::UTdGameEngine::StaticClass())) {
				if (object->Outer->GetName() == "Transient") {
					cache = static_cast<Classes::UTdGameEngine *>(object);
					break;
				}
			}
		}
	}

	return cache;
}

Classes::UTdGameViewportClient *Engine::GetViewportClient(bool update) {
	static Classes::UTdGameViewportClient *cache = nullptr;

	if (!cache || update) {
		auto engine = GetEngine(update);
		if (engine) {
			cache = static_cast<Classes::UTdGameViewportClient *>(engine->GameViewport);
		}
	}

	return cache;
}

Classes::UTdConsole *Engine::GetConsole(bool update) {
	static Classes::UTdConsole *cache = nullptr;

	if (!cache || update) {
		auto viewportClient = GetViewportClient(update);
		if (viewportClient) {
			cache = static_cast<Classes::UTdConsole *>(viewportClient->ViewportConsole);
		}
	}

	return cache;
}

void Engine::ExecuteCommand(Classes::FString command) {
	commands.Mutex.lock();
	commands.Queue.push_back(std::wstring(command.c_str()));
	commands.Mutex.unlock();
}

Classes::AWorldInfo *Engine::GetWorld(bool update) {
	static Classes::AWorldInfo *cache = nullptr;

	if (levelLoad.Loading) {
		return nullptr;
	}

	if (!cache || update) {
		auto objects = Classes::UObject::GetGlobalObjects();
		for (auto i = 0UL; i < objects.Num(); ++i) {
			auto object = objects.GetByIndex(i);
			if (object && object->IsA(Classes::AWorldInfo::StaticClass())) {
				auto world = static_cast<Classes::AWorldInfo *>(object);

				for (auto controller = world->ControllerList; controller; controller = controller->NextController) {
					if (controller->IsA(Classes::ATdPlayerController::StaticClass())) {
						cache = world;
						return cache;
					}
				}
			}
		}
	}

	return cache;
}

Classes::ATdPlayerController *Engine::GetPlayerController(bool update) {
	static Classes::ATdPlayerController *cache = nullptr;

	if (levelLoad.Loading) {
		return nullptr;
	}

	if (!cache || update) {
		auto world = GetWorld(update);
		if (world) {
			for (auto controller = world->ControllerList; controller; controller = controller->NextController) {
				if (controller->IsA(Classes::ATdPlayerController::StaticClass())) {
					if (!static_cast<Classes::ATdPlayerController *>(controller)->PlayerCamera) {
						return nullptr;
					}

					cache = static_cast<Classes::ATdPlayerController *>(controller);
					break;
				}
			}
		}
	}

	return cache;
}

Classes::ATdPlayerPawn *Engine::GetPlayerPawn(bool update) {
	static Classes::ATdPlayerPawn *cache = nullptr;

	if (levelLoad.Loading) {
		return nullptr;
	}

	if (!cache || update) {
		auto controller = GetPlayerController(update);
		if (controller) {
			cache = static_cast<Classes::ATdPlayerPawn *>(controller->AcknowledgedPawn);
		}
	}

	return cache;
}

void Engine::SpawnCharacter(Character character, Classes::ATdPlayerPawn *&spawned) {
	spawned = nullptr;
	
	spawns.Mutex.lock();
	spawns.Queue.push_back({ character, spawned });
	spawns.Mutex.unlock();
}

void Engine::Despawn(Classes::AActor *actor) {
	if (!actor) {
		return;
	}

	spawns.Mutex.lock();
	spawns.DeQueue.push_back({ actor });
	spawns.Mutex.unlock();
}

void Engine::TransformBones(Character character, Classes::TArray<Classes::FBoneAtom> *destBones, Classes::FBoneAtom *src) {
	auto dest = destBones->Buffer();
	auto destCount = destBones->Num();

	switch (character) {
		case Character::Faith: case Character::Ghost:
			memcpy(dest, src, PLAYER_PAWN_BONE_COUNT * sizeof(Classes::FBoneAtom));
			break;
		case Character::Kate:
			memcpy(dest, src, 7 * sizeof(Classes::FBoneAtom));
			memcpy(dest + 14, src + 14, 10 * sizeof(Classes::FBoneAtom));
			memcpy(dest + 33, src + 39, sizeof(Classes::FBoneAtom));
			memcpy(dest + 36, src + 42, sizeof(Classes::FBoneAtom));
			memcpy(dest + 39, src + 45, 63 * sizeof(Classes::FBoneAtom));
			break;
		case Character::Celeste:
			memcpy(dest, src, 7 * sizeof(Classes::FBoneAtom));
			memcpy(dest + destCount - 63, src + 45, 63 * sizeof(Classes::FBoneAtom));
			memcpy(dest + 18, src + 18, sizeof(Classes::FBoneAtom));
			break;
		case Character::AssaultCeleste:
			memcpy(dest, src, 7 * sizeof(Classes::FBoneAtom));
			memcpy(dest + destCount - 63, src + 45, 63 * sizeof(Classes::FBoneAtom));
			memcpy(dest + 17, src + 18, sizeof(Classes::FBoneAtom));
			break;
		case Character::Jacknife:
			memcpy(dest, src, 7 * sizeof(Classes::FBoneAtom));
			memcpy(dest + destCount - 63, src + 45, 63 * sizeof(Classes::FBoneAtom));
			memcpy(dest + 18, src + 18, sizeof(Classes::FBoneAtom));
			break;
		case Character::Miller:
			memcpy(dest, src, 7 * sizeof(Classes::FBoneAtom));
			memcpy(dest + destCount - 63, src + 45, 63 * sizeof(Classes::FBoneAtom));
			memcpy(dest + 18, src + 18, sizeof(Classes::FBoneAtom));
			break;
		case Character::Kreeg:
			memcpy(dest, src, 7 * sizeof(Classes::FBoneAtom));
			memcpy(dest + destCount - 63, src + 45, 63 * sizeof(Classes::FBoneAtom));
			memcpy(dest + 18, src + 18, sizeof(Classes::FBoneAtom));
			break;
		case Character::PursuitCop:
			memcpy(dest, src, 7 * sizeof(Classes::FBoneAtom));
			memcpy(dest + destCount - 63, src + 45, 63 * sizeof(Classes::FBoneAtom));
			memcpy(dest + 15, src + 18, sizeof(Classes::FBoneAtom));
			break;
	}
}

// Define these to remove the D3DX dependency
D3DXMATRIX *WINAPI D3DXMatrixMultiply(D3DXMATRIX *pOut, const D3DXMATRIX *pM1, const D3DXMATRIX *pM2) {
	D3DXMATRIX out;

	for (auto i = 0; i < 4; i++) {
		for (auto j = 0; j < 4; j++) {
			out.m[i][j] = pM1->m[i][0] * pM2->m[0][j] + pM1->m[i][1] * pM2->m[1][j] + pM1->m[i][2] * pM2->m[2][j] + pM1->m[i][3] * pM2->m[3][j];
		}
	}

	*pOut = out;
	return pOut;
}

D3DXVECTOR4 *WINAPI D3DXVec4Transform(D3DXVECTOR4 *pOut, const D3DXVECTOR4 *pV, const D3DXMATRIX *pM) {
	*pOut = {
		pM->m[0][0] * pV->x + pM->m[1][0] * pV->y + pM->m[2][0] * pV->z + pM->m[3][0] * pV->w,
		pM->m[0][1] * pV->x + pM->m[1][1] * pV->y + pM->m[2][1] * pV->z + pM->m[3][1] * pV->w,
		pM->m[0][2] * pV->x + pM->m[1][2] * pV->y + pM->m[2][2] * pV->z + pM->m[3][2] * pV->w,
		pM->m[0][3] * pV->x + pM->m[1][3] * pV->y + pM->m[2][3] * pV->z + pM->m[3][3] * pV->w
	};

	return pOut;
}

bool Engine::IsKeyDown(int vk) {
	return !window.BlockInput && vk >= 0 && vk < LENGTH(window.KeysDown) && window.KeysDown[vk];
}

bool Engine::WorldToScreen(IDirect3DDevice9 *device, Classes::FVector &inOutLocation) {
	auto controller = Engine::GetPlayerController();
	if (!controller || !projectionTick.Matrix) {
		return false;
	}

	auto fov = tanf((controller->PlayerCamera->GetFOVAngle() * CONST_Pi / 180.0f) / 2.0f);
	auto displaySize = ImGui::GetIO().DisplaySize;
	auto ratioFov = (displaySize.x / displaySize.y) / fov;

	D3DXMATRIX result, proj, world, view;
	proj = *projectionTick.Matrix;

	for (int i = 0; i < 4; ++i) {
		proj.m[i][0] /= fov;
		proj.m[i][1] *= ratioFov;
		proj.m[i][3] = proj.m[i][2];
		proj.m[i][2] *= 0.998f;
	}

	device->GetTransform(D3DTS_VIEW, &view);
	device->GetTransform(D3DTS_WORLD, &world);

	D3DXMatrixMultiply(&result, &proj, &view);
	D3DXMatrixMultiply(&proj, &result, &world);

	D3DXVECTOR4 in(inOutLocation.X, inOutLocation.Y, inOutLocation.Z, 1), out;
	D3DXVec4Transform(&out, &in, &proj);

	inOutLocation = {
		(((out.x / out.w) + 1.0f) / 2.0f) * displaySize.x,
		((1.0f - (out.y / out.w)) / 2.0f) * displaySize.y,
		out.w
	};

	return !(out.z < 0 || out.w < 0);
}

void Engine::OnRenderScene(RenderSceneCallback callback) {
	renderScene.Callbacks.push_back(callback);
}

void Engine::OnProcessEvent(ProcessEventCallback callback) {
	processEvent.Callbacks.push_back(callback);
}

void Engine::OnPreLevelLoad(LevelLoadCallback callback) {
	levelLoad.PreCallbacks.push_back(callback);
}

void Engine::OnPostLevelLoad(LevelLoadCallback callback) {
	levelLoad.PostCallbacks.push_back(callback);
}

void Engine::OnPreDeath(DeathCallback callback) {
	death.PreCallbacks.push_back(callback);
}

void Engine::OnPostDeath(DeathCallback callback) {
	death.PostCallbacks.push_back(callback);
}

void Engine::OnActorTick(ActorTickCallback callback) {
	actorTick.Callbacks.push_back(callback);
}

void Engine::OnBonesTick(BonesTickCallback callback) {
	bonesTick.Callbacks.push_back(callback);
}

void Engine::OnTick(TickCallback callback) {
	tick.Callbacks.push_back(callback);
}

void Engine::OnInput(InputCallback callback) {
	window.InputCallbacks.push_back(callback);
}

void Engine::OnSuperInput(InputCallback callback) {
	window.SuperInputCallbacks.push_back(callback);
}

void Engine::BlockInput(bool block) {
	ImGui::GetIO().MouseDrawCursor = window.BlockInput = block;
}

bool Engine::Initialize() {
	void *ptr = nullptr;

	// GNames
	if (!(ptr = Pattern::FindPattern("\x8B\x0D\x00\x00\x00\x00\x8B\x84\x24\x00\x00\x00\x00\x8B\x04\x81", "xx????xxx????xxx"))) {
		MessageBoxA(0, "Failed to find GNames", "Failure", MB_ICONERROR);
		return false;
	}

	Classes::FName::GNames = reinterpret_cast<decltype(Classes::FName::GNames)>(*reinterpret_cast<void **>(reinterpret_cast<byte *>(ptr) + 2));

	// GObjects
	if (!(ptr = Pattern::FindPattern("\x8B\x15\x00\x00\x00\x00\x8B\x0C\xB2\x8D\x44\x24\x30", "xx????xxxxxxx"))) {
		MessageBoxA(0, "Failed to find GObjects", "Failure", MB_ICONERROR);
		return false;
	}

	Classes::UObject::GObjects = reinterpret_cast<decltype(Classes::UObject::GObjects)>(*reinterpret_cast<void **>(reinterpret_cast<byte *>(ptr) + 2));

	// LoadLibraryA
	Hook::TrampolineHook(LoadLibraryAHook, LoadLibraryA, reinterpret_cast<void **>(&LoadLibraryAOriginal));

	// EndScene
	if (!(ptr = Pattern::FindPattern("d3d9.dll", "\xC7\x06\x00\x00\x00\x00\x89\x86\x00\x00\x00\x00\x89\x86", "xx????xx????xx"))) {
		MessageBoxA(0, "Failed to find D3D9 exports", "Failure", MB_ICONERROR);
		return false;
	}

	ptr = *reinterpret_cast<void **>(reinterpret_cast<byte *>(ptr) + 2);
	if (!Hook::TrampolineHook(EndSceneHook, ((void **)ptr)[D3D9_EXPORT_ENDSCENE], reinterpret_cast<void **>(&renderScene.Original))) {
		MessageBoxA(0, "Failed to hook D3D9 EndScene", "Failure", MB_ICONERROR);
		return false;
	}

	// Reset
	if (!Hook::TrampolineHook(ResetHook, ((void **)ptr)[D3D9_EXPORT_RESET], reinterpret_cast<void **>(&resetScene.Original))) {
		MessageBoxA(0, "Failed to hook D3D9 Reset", "Failure", MB_ICONERROR);
		return false;
	}

	// PeekMessage
	if (!Hook::TrampolineHook(PeekMessageHook, PeekMessageW, reinterpret_cast<void **>(&window.PeekMessage))) {
		MessageBoxA(0, "Failed to hook D3D9 Reset", "Failure", MB_ICONERROR);
		return false;
	}

	// ProcessEvent
	if (!(ptr = Pattern::FindPattern("\x56\x8B\xF1\x8B\x0D\x00\x00\x00\x00\x85\xC9\x74\x09", "xxxxx????xxxx"))) {
		MessageBoxA(0, "Failed to find ProcessEvent", "Failure", MB_ICONERROR);
		return false;
	}

	if (!Hook::TrampolineHook(ProcessEventHook, ptr, reinterpret_cast<void **>(&processEvent.Original))) {
		MessageBoxA(0, "Failed to hook ProcessEvent", "Failure", MB_ICONERROR);
		return false;
	}

	// LevelLoad
	if (!(ptr = levelLoad.Base = Pattern::FindPattern("\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x81\xEC\x00\x00\x00\x00\x53\x55\x56\x57\xA1\x00\x00\x00\x00\x33\xC4\x50\x8D\x84\x24\x00\x00\x00\x00\x64\xA3\x00\x00\x00\x00\x8B\xE9\x89\x6C\x24\x00\x00\xFF\x89", "???????xxxxxxxxx?xxxxxxxx????xxxxxx?xxxxxxxxxxxxxx??xx"))) {
		MessageBoxA(0, "Failed to find LevelLoad", "Failure", MB_ICONERROR);
		return false;
	}

	if (!Hook::TrampolineHook(LevelLoadHook, ptr, reinterpret_cast<void **>(&levelLoad.Original))) {
		MessageBoxA(0, "Failed to hook LevelLoad", "Failure", MB_ICONERROR);
		return false;
	}

	// PreDeath
	if (!(ptr = Pattern::FindPattern("\x8D\x4C\x24\x10\xE8\x00\x00\x00\x00\x8B\x4C\x24\x14\x85\xC9\x7C\x1E\x3B\xCF\x0F\x8D\x00\x00\x00\x00\x8B\x04\x8E\x8B\x40\x08\x25\x00\x00\x00\x00\x33\xD2\x0B\xC2\x75\xD6\xE9\x00\x00\x00\x00", "xxxxx????xxxxxxxxxxxx????xxxxxxx????xxxxxxx????"))) {
		MessageBoxA(0, "Failed to find PreDeath (1)", "Failure", MB_ICONERROR);
		return false;
	}
	
	if (!(ptr = death.PreBase = Pattern::FindPattern(ptr, 0x1000, "\xC7\x05\x00\x00\x00\x00\x00\x00\x00\x00\xB8\x00\x00\x00\x00\xC3\xB8\x00\x00\x00\x00\xC3", "xx????????x????xx????x"))) {
		MessageBoxA(0, "Failed to find PreDeath (2)", "Failure", MB_ICONERROR);
		return false;
	}

	if (!Hook::TrampolineHook(PreDeathHook, ptr, reinterpret_cast<void **>(&death.PreOriginal))) {
		MessageBoxA(0, "Failed to hook PreDeath", "Failure", MB_ICONERROR);
		return false;
	}

	// PostDeath
	if (!(ptr = death.PostBase = Pattern::FindPattern(ptr, 0x1000, "\x8B\x0D\x00\x00\x00\x00\xC7\x05\x00\x00\x00\x00\x00\x00\x00\x00\x8B\x01\x8B\x90\x00\x00\x00\x00\xFF\xD2\xB8\x00\x00\x00\x00\xC3\x8B\xC1\xC7\x00\x00\x00\x00\x00\xC3", "??????xx????????xxxx????xxx????xxxxx????x"))) {
		MessageBoxA(0, "Failed to find PostDeath", "Failure", MB_ICONERROR);
		return false;
	}

	if (!Hook::TrampolineHook(PostDeathHook, ptr, reinterpret_cast<void **>(&death.PostOriginal))) {
		MessageBoxA(0, "Failed to hook PreDeath", "Failure", MB_ICONERROR);
		return false;
	}

	// ActorTick
	if (!(ptr = Pattern::FindPattern("\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x38\x56\x57\x8B\x81", "xxxxxxxxxxxxx"))) {
		MessageBoxA(0, "Failed to find ActorTick", "Failure", MB_ICONERROR);
		return false;
	}

	if (!Hook::TrampolineHook(ActorTickHook, ptr, reinterpret_cast<void **>(&actorTick.Original))) {
		MessageBoxA(0, "Failed to hook ActorTick", "Failure", MB_ICONERROR);
		return false;
	}

	// BonesTick
	if (!(ptr = Pattern::FindPattern("\x55\x8B\xEC\x83\xE4\xF0\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x81\xEC\x00\x00\x00\x00\x53\x56\x57\xA1\x00\x00\x00\x00\x33\xC4\x50\x8D\x84\x24\x00\x00\x00\x00\x64\xA3\x00\x00\x00\x00\x8B\x45\x0C", "xxxxxxxxx????xx????xxx????xxxx????xxxxxx????xx????xxx"))) {
		MessageBoxA(0, "Failed to find BonesTick", "Failure", MB_ICONERROR);
		return false;
	}

	if (!Hook::TrampolineHook(BonesTickHook, ptr, reinterpret_cast<void **>(&bonesTick.Original))) {
		MessageBoxA(0, "Failed to hook BonesTick", "Failure", MB_ICONERROR);
		return false;
	}

	// ProjectionTick
	if (!(ptr = Pattern::FindPattern("\x83\xEC\x3C\xD9\x44\x24\x44", "xxxxxxx"))) {
		MessageBoxA(0, "Failed to find ProjectionTick", "Failure", MB_ICONERROR);
		return false;
	}

	if (!Hook::TrampolineHook(ProjectionTick, ptr, reinterpret_cast<void **>(&projectionTick.Original))) {
		MessageBoxA(0, "Failed to hook ProjectionTick", "Failure", MB_ICONERROR);
		return false;
	}

	// Tick
	if (!(ptr = Pattern::FindPattern("\x83\xEC\x48\x53\x55\x56\x57\x8B\xF9\xE8\x00\x00\x00\x00\x8B\x0D\x00\x00\x00\x00\x8B\x15\x00\x00\x00\x00\x8B\xE8", "xxxxxxxxxx????xx????xx????xx"))) {
		MessageBoxA(0, "Failed to find Tick", "Failure", MB_ICONERROR);
		return false;
	}

	if (!Hook::TrampolineHook(TickHook, ptr, reinterpret_cast<void **>(&tick.Original))) {
		MessageBoxA(0, "Failed to hook Tick", "Failure", MB_ICONERROR);
		return false;
	}

	return true;
}