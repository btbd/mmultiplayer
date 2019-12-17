#include "stdafx.h"

/*** Hook originals and callbacks ***/
// D3D9 and Window
struct {
	vector<RenderSceneCallback> Callbacks;
	HRESULT(WINAPI *Original)(IDirect3DDevice9 *) = 0;
} renderScene;

struct {
	HRESULT(WINAPI *Original)(IDirect3DDevice9 *, D3DPRESENT_PARAMETERS *) = 0;
} resetScene;

struct {
	bool BlockInput = false;
	byte KeysDown[0x100] = { 0 };
	vector<InputCallback> InputCallbacks;
	vector<InputCallback> SuperInputCallbacks;

	WNDPROC WndProc;
	BOOL(WINAPI *PeekMessage)(LPMSG, HWND, UINT, UINT, UINT);
} window;

// Engine
struct {
	vector<wstring *> queue;
	mutex mutex;
} commands;

struct {
	vector<ProcessEventCallback> Callbacks;
	int(__thiscall *Original)(Classes::UObject *, class Classes::UFunction *, void *, void *) = 0;
} processEvent;

struct {
	vector<ActorTickCallback> Callbacks;
	void *(__thiscall *Original)(Classes::AActor *, void *) = 0;
} actorTick;

struct {
	vector<BonesTickCallback> Callbacks;
	void *(__thiscall *Original)(Classes::TArray<class Classes::USkeletalMeshSocket *> *, void *) = 0;
} bonesTick;

struct {
	D3DXMATRIX *Matrix;
	int *(__thiscall *Original)(Classes::FMatrix *, void *) = 0;
} projectionTick;

/*** Hook implementations ***/
// D3D9
HRESULT WINAPI EndSceneHook(IDirect3DDevice9 *device) {
	static bool init = true;
	if (init) {
		D3DDEVICE_CREATION_PARAMETERS params = { 0 };
		device->GetCreationParameters(&params);

		ImGui::CreateContext();
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
					for (auto callback : window.SuperInputCallbacks) {
						callback(msg, wParam);
					}

					if (!window.BlockInput) {
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
					for (auto callback : window.SuperInputCallbacks) {
						callback(msg, wParam);
					}

					if (!window.BlockInput) {
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
	HandleMessage(hWnd, msg, wParam, lParam);

	if (window.BlockInput && ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam)) {
		return true;
	}

	return CallWindowProc(window.WndProc, hWnd, msg, wParam, lParam);
}

BOOL WINAPI PeekMessageHook(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg) {
	auto ret = window.PeekMessage(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);

	if (lpMsg && (wRemoveMsg & PM_REMOVE)) {
		HandleMessage(lpMsg->hwnd, lpMsg->message, lpMsg->wParam, lpMsg->lParam);

		if (window.BlockInput) {
			ImGui_ImplWin32_WndProcHandler(lpMsg->hwnd, lpMsg->message, lpMsg->wParam, lpMsg->lParam);

			TranslateMessage(lpMsg);

			lpMsg->message = WM_NULL;
		}
	}

	return ret;
}

// Engine
int __fastcall ProcessEventHook(Classes::UObject *object, void *idle, class Classes::UFunction *function, void *args, void *result) {
	int sum = 0;
	for (auto callback : processEvent.Callbacks) {
		sum += callback(object, function, args, result);
	}

	return sum == 0 ? processEvent.Original(object, function, args, result) : 0;
}

void *__fastcall ActorTickHook(Classes::AActor *actor, void *idle, void *arg) {
	// Commands must be executed inside the context of an engine thread
	if (commands.queue.size() > 0) {
		auto console = Engine::GetConsole();

		if (console) {
			commands.mutex.lock();

			for (auto command : commands.queue) {
				console->ConsoleCommand(command->c_str());
				delete command;
			}

			commands.queue.clear();
			commands.queue.shrink_to_fit();

			commands.mutex.unlock();
		}
	}

	auto ret = actorTick.Original(actor, arg);

	for (auto callback : actorTick.Callbacks) {
		callback(actor);
	}

	return ret;
}

void *__fastcall BonesTickHook(Classes::TArray<class Classes::USkeletalMeshSocket *> *bones, void *idle, void *arg) {
	auto ret = bonesTick.Original(bones, arg);

	for (auto callback : bonesTick.Callbacks) {
		callback(bones);
	}

	return ret;
}

int *__fastcall ProjectionTick(Classes::FMatrix *matrix, void *idle, void *arg) {
	projectionTick.Matrix = reinterpret_cast<D3DXMATRIX *>(matrix);
	return projectionTick.Original(matrix, arg);
}

namespace Engine {
	Classes::UTdGameEngine *GetEngine() {
		auto objects = Classes::UObject::GetGlobalObjects();
		for (DWORD i = 0; i < objects.Num(); ++i) {
			auto object = objects.GetByIndex(i);
			if (object && object->IsA(Classes::UTdGameEngine::StaticClass())) {
				if (object->Outer->GetName() == "Transient") {
					return reinterpret_cast<Classes::UTdGameEngine *>(object);
				}
			}
		}

		return 0;
	}

	Classes::UTdGameViewportClient *GetViewportClient() {
		auto engine = GetEngine();
		if (engine) {
			return reinterpret_cast<Classes::UTdGameViewportClient *>(engine->GameViewport);
		}

		return 0;
	}

	Classes::UTdConsole *GetConsole() {
		auto viewportClient = GetViewportClient();
		if (viewportClient) {
			return reinterpret_cast<Classes::UTdConsole *>(viewportClient->ViewportConsole);
		}

		return 0;
	}

	void ExecuteCommand(Classes::FString command) {
		commands.mutex.lock();
		commands.queue.push_back(new wstring(command.c_str()));
		commands.mutex.unlock();
	}

	Classes::AWorldInfo *GetWorld() {
		auto objects = Classes::UObject::GetGlobalObjects();
		for (DWORD i = 0; i < objects.Num(); ++i) {
			auto object = objects.GetByIndex(i);
			if (object && object->IsA(Classes::AWorldInfo::StaticClass())) {
				auto world = reinterpret_cast<Classes::AWorldInfo *>(object);

				for (auto controller = world->ControllerList; controller; controller = controller->NextController) {
					if (controller->IsA(Classes::ATdPlayerController::StaticClass())) {
						return world;
					}
				}
			}
		}

		return 0;
	}

	Classes::ATdPlayerController *GetPlayerController() {
		auto world = GetWorld();
		if (world) {
			for (auto controller = world->ControllerList; controller; controller = controller->NextController) {
				if (controller->IsA(Classes::ATdPlayerController::StaticClass())) {
					return reinterpret_cast<Classes::ATdPlayerController *>(controller);
				}
			}
		}

		return 0;
	}

	Classes::ATdPlayerPawn *GetPlayerPawn() {
		auto controller = GetPlayerController();
		if (controller) {
			return reinterpret_cast<Classes::ATdPlayerPawn *>(controller->AcknowledgedPawn);
		}

		return 0;
	}

	bool WorldToScreen(IDirect3DDevice9 *device, Classes::FVector *inOutLocation) {
		auto controller = Engine::GetPlayerController();
		if (!controller || !projectionTick.Matrix) {
			return false;
		}

		auto fov = tanf((controller->FOVAngle * CONST_Pi / 180.0f) / 2.0f);
		auto displaySize = ImGui::GetIO().DisplaySize;
		auto ratioFov = (displaySize.x / displaySize.y) / fov;

		D3DXMATRIX result, proj, world, view;
		memcpy(&proj, projectionTick.Matrix, sizeof(proj));

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

		D3DXVECTOR4 in(inOutLocation->X, inOutLocation->Y, inOutLocation->Z, 1), out;
		D3DXVec4Transform(&out, &in, &proj);
		
		*inOutLocation = Classes::FVector{ 
			(((out.x / out.w) + 1.0f) / 2.0f) * displaySize.x,
			((1.0f - (out.y / out.w)) / 2.0f) * displaySize.y,
			out.w,
		};
		
		return !(out.z < 0 || out.w < 0);
	}

	void OnRenderScene(RenderSceneCallback callback) {
		renderScene.Callbacks.push_back(callback);
	}

	void OnProcessEvent(ProcessEventCallback callback) {
		processEvent.Callbacks.push_back(callback);
	}

	void OnActorTick(ActorTickCallback callback) {
		actorTick.Callbacks.push_back(callback);
	}

	void OnBonesTick(BonesTickCallback callback) {
		bonesTick.Callbacks.push_back(callback);
	}

	void OnInput(InputCallback callback) {
		window.InputCallbacks.push_back(callback);
	}

	void OnSuperInput(InputCallback callback) {
		window.SuperInputCallbacks.push_back(callback);
	}

	void BlockInput(bool block) {
		ImGui::GetIO().MouseDrawCursor = window.BlockInput = block;
	}

	bool Initialize() {
		void *ptr = 0;

		/*** SDK ***/
		// GNames
		if (!(ptr = pattern::FindPattern("\x8B\x0D\x00\x00\x00\x00\x8B\x84\x24\x00\x00\x00\x00\x8B\x04\x81", "xx????xxx????xxx"))) {
			MessageBoxA(0, "Failed to find GNames", "Failure", MB_ICONERROR);
			return false;
		}

		Classes::FName::GNames = (Classes::TArray<Classes::FNameEntry *> *)*(void **)((byte *)ptr + 2);

		// GObjects
		if (!(ptr = pattern::FindPattern("\x8B\x15\x00\x00\x00\x00\x8B\x0C\xB2\x8D\x44\x24\x30", "xx????xxxxxxx"))) {
			MessageBoxA(0, "Failed to find GObjects", "Failure", MB_ICONERROR);
			return false;
		}

		Classes::UObject::GObjects = (Classes::TArray<Classes::UObject *> *)*(void **)((byte *)ptr + 2);

		/*** D3D9 Hooks ***/
		// EndScene
		if (!(ptr = pattern::FindPattern("d3d9.dll", "\xC7\x06\x00\x00\x00\x00\x89\x86\x00\x00\x00\x00\x89\x86", "xx????xx????xx"))) {
			MessageBoxA(0, "Failed to find D3D9 exports", "Failure", MB_ICONERROR);
			return false;
		}

		ptr = *(void **)((byte *)ptr + 2);	
		if (!hook::TrampolineHook((void *)EndSceneHook, ((void **)ptr)[D3D9_EXPORT_ENDSCENE], (void **)&renderScene.Original)) {
			MessageBoxA(0, "Failed to hook D3D9 EndScene", "Failure", MB_ICONERROR);
			return false;
		}

		// Reset
		if (!hook::TrampolineHook((void *)ResetHook, ((void **)ptr)[D3D9_EXPORT_RESET], (void **)&resetScene.Original)) {
			MessageBoxA(0, "Failed to hook D3D9 Reset", "Failure", MB_ICONERROR);
			return false;
		}

		// PeekMessage
		if (!hook::TrampolineHook((void *)PeekMessageHook, PeekMessageW, (void **)&window.PeekMessage)) {
			MessageBoxA(0, "Failed to hook D3D9 Reset", "Failure", MB_ICONERROR);
			return false;
		}

		/*** Engine Hooks ***/
		// ProcessEvent
		if (!(ptr = pattern::FindPattern("\x56\x8B\xF1\x8B\x0D\x00\x00\x00\x00\x85\xC9\x74\x09", "xxxxx????xxxx"))) {
			MessageBoxA(0, "Failed to find ProcessEvent", "Failure", MB_ICONERROR);
			return false;
		}

		if (!hook::TrampolineHook((void *)ProcessEventHook, ptr, (void **)&processEvent.Original)) {
			MessageBoxA(0, "Failed to hook ProcessEvent", "Failure", MB_ICONERROR);
			return false;
		}

		// ActorTick
		if (!(ptr = pattern::FindPattern("\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x38\x56\x57\x8B\x81", "xxxxxxxxxxxxx"))) {
			MessageBoxA(0, "Failed to find ActorTick", "Failure", MB_ICONERROR);
			return false;
		}

		if (!hook::TrampolineHook((void *)ActorTickHook, ptr, (void **)&actorTick.Original)) {
			MessageBoxA(0, "Failed to hook ActorTick", "Failure", MB_ICONERROR);
			return false;
		}

		// BonesTick
		if (!(ptr = pattern::FindPattern("\xE8\x00\x00\x00\x00\x8B\x74\x24\x14\x8D\x7B\x68", "x????xxxxxxx"))) {
			MessageBoxA(0, "Failed to find BonesTick", "Failure", MB_ICONERROR);
			return false;
		}

		if (!hook::TrampolineHook((void *)BonesTickHook, RELATIVE_ADDR(ptr, JMP_SIZE), (void **)&bonesTick.Original)) {
			MessageBoxA(0, "Failed to hook BonesTick", "Failure", MB_ICONERROR);
			return false;
		}

		// ProjectionTick
		if (!(ptr = pattern::FindPattern("\x83\xEC\x3C\xD9\x44\x24\x44", "xxxxxxx"))) {
			MessageBoxA(0, "Failed to find ProjectionTick", "Failure", MB_ICONERROR);
			return false;
		}

		if (!hook::TrampolineHook((void *)ProjectionTick, ptr, (void **)&projectionTick.Original)) {
			MessageBoxA(0, "Failed to hook ProjectionTick", "Failure", MB_ICONERROR);
			return false;
		}

		return true;
	}
}