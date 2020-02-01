#include "stdafx.h"

/*** Hook originals and callbacks ***/
// D3D9 and Window
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

// Engine
static struct {
	std::vector<std::wstring> Queue;
	std::mutex Mutex;
} commands;

static struct {
	std::vector<std::pair<Engine::Character, Classes::ATdPlayerPawn *&>> Queue;
	std::mutex Mutex;
} spawns;

static struct {
	std::vector<ProcessEventCallback> Callbacks;
	int(__thiscall *Original)(Classes::UObject *, class Classes::UFunction *, void *, void *) = nullptr;
} processEvent;

static struct {
	bool Loading = false;
	std::vector<LevelLoadCallback> PreCallbacks;
	std::vector<LevelLoadCallback> PostCallbacks;
	int(__thiscall *Original)(void *, void *, unsigned long long arg);
} levelLoad;

static struct {
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

/*** Hook implementations ***/
// D3D9
HRESULT WINAPI EndSceneHook(IDirect3DDevice9 *device) {
	static bool init = true;
	if (init) {
		D3DDEVICE_CREATION_PARAMETERS params;
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

// Engine
int __fastcall ProcessEventHook(Classes::UObject *object, void *idle, class Classes::UFunction *function, void *args, void *result) {
	auto sum = 0;
	for (auto callback : processEvent.Callbacks) {
		sum += callback(object, function, args, result);
	}

	return sum == 0 ? processEvent.Original(object, function, args, result) : 0;
}

int __fastcall LevelLoadHook(void *this_, void *idle_, void **levelInfo, unsigned long long arg) {
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

void *__fastcall ActorTickHook(Classes::AActor *actor, void *idle, void *arg) {
	auto ret = actorTick.Original(actor, arg);

	for (auto callback : actorTick.Callbacks) {
		callback(actor);
	}

	return ret;
}

void *__fastcall BonesTickHook(void *this_, void *idle_, Classes::TArray<Classes::FBoneAtom> *bones, void *arg3, void *arg4, void *arg5) {
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
		mesh->SetSkeletalMesh(static_cast<Classes::USkeletalMesh *>(pawn->STATIC_DynamicLoadObject(meshes[static_cast<size_t>(character)], Classes::USkeletalMesh::StaticClass(), false)), true);

		auto mats = materials[static_cast<size_t>(character)];
		for (auto i = 0UL; i < mats.size(); ++i) {
			mesh->SetMaterial(i, static_cast<Classes::UMaterialInterface *>(pawn->STATIC_DynamicLoadObject(mats[i].c_str(), Classes::UMaterialInterface::StaticClass(), false)));
		}

		if (character == Engine::Character::Kate || character == Engine::Character::Miller || character == Engine::Character::Kreeg) {
			pawn->PrePivot.Z = 94;
		}
	}

	return pawn;
}

void __fastcall TickHook(float *scales, void *idle, int arg, float delta) {
	if (Engine::GetPlayerPawn(true)) {
		// Queues must be executed inside the context of an engine thread
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
				spawn.second = SpawnCharacter(spawn.first);
			}

			spawns.Queue.clear();
			spawns.Queue.shrink_to_fit();

			spawns.Mutex.unlock();
		}
	}

	for (auto callback : tick.Callbacks) {
		callback(delta);
	}

#if 0
	{
		static struct {
			// AActor
			Classes::FQWord ObjectFlags;

			unsigned long BitField0; // 0x3C
			unsigned long BitField1; // 0x40
			unsigned long BitField2; // 0x44

			Classes::TEnumAsByte<Classes::EPhysics> Physics;
			Classes::TEnumAsByte<Classes::ECollisionType> CollisionType;
			// Base
			Classes::FVector Location;
			Classes::FRotator Rotation;
			Classes::FVector Velocity;
			Classes::FVector Acceleration;
			Classes::FVector AngularVelocity;
			Classes::FVector RelativeLocation;
			Classes::FRotator RelativeRotation;
			Classes::FRotator DesiredRotation;

			// APawn
			unsigned long BitField3; // 0x1E0
			unsigned long BitField4; // 0x1E4
			Classes::TEnumAsByte<Classes::EPathSearchType> PathSearchType;
			unsigned char RemoteViewPitch;
			unsigned char FlashCount;
			unsigned char FiringMode;
			Classes::FVector Floor;
			float OldZ;
			Classes::FVector RMVelocity;
			int Health;

			// ATdPawn
			unsigned long BitField5; // 0x41C
			float VelocityMagnitude2D;
			float VelocityMagnitude;
			Classes::FVector VelocityDir2D;
			Classes::FVector VelocityDir;
			float FaceRotationTimeLeft;
			float AmountTilUnarmed;
			Classes::TEnumAsByte<Classes::EAgainstWallState> AgainstWallState;
			Classes::TEnumAsByte<Classes::EWeaponAnimState> WeaponAnimState;
			Classes::TEnumAsByte<Classes::EGrabTurnType> CurrentGrabTurnType;
			unsigned char LadderType;
			Classes::TEnumAsByte<Classes::EMovement> AnimationMovementState;
			Classes::TEnumAsByte<Classes::EMovement> PendingAnimationMovementState;
			Classes::TEnumAsByte<Classes::EMovement> OldMovementState;
			Classes::TEnumAsByte<Classes::EMovement> PendingMovementState;
			Classes::TEnumAsByte<Classes::EMovement> MovementState;
			Classes::TEnumAsByte<Classes::EMovement> ReplicatedMovementState;
			Classes::TEnumAsByte<Classes::EMovement> AIAimOldMovementState;
			Classes::TEnumAsByte<Classes::EWalkingState> OverrideWalkingState;
			Classes::TEnumAsByte<Classes::EWalkingState> PendingOverrideWalkingState;
			Classes::TEnumAsByte<Classes::EWalkingState> CurrentWalkingState;
			unsigned char ReplicateCustomAnimCount;
			Classes::TEnumAsByte<Classes::EMoveActionHint> MoveActionHint;
			unsigned char ReloadCount;
			unsigned char NoOfBreathingSounds;
			Classes::FVector AgainstWallLeftHand;
			Classes::FVector AgainstWallRightHand;
			Classes::FVector AgainstWallNormal;
			Classes::FRotator MinLookConstraint;
			Classes::FRotator MaxLookConstraint;
			float LegRotationSlowTimer;
			int LegRotation;
			float ASPollTimer;
			int ASSlotPointer;
			float ASDistanceAccum;
			float NewFloorSmooth;
			float SmoothOffset;
			float TargetMeshTranslationZ;
			Classes::FVector MoveLocation;
			Classes::FVector MoveNormal;
			// MovementActor
			Classes::FVector MoveLedgeLocation;
			Classes::FVector MoveLedgeNormal;
			int MoveLedgeResult;
			int RemoteViewYaw;
			float SpeedSprintEnergy;
			float RollTriggerTime;
			float FallingUncontrolledHeight;
			float EnterFallingHeight;
			float SlideEffectUpdateTimer;
			Classes::FVector LastJumpLocation;

			// ATdPlayerPawn
			unsigned long BitField6;
			float MovementStringGapTimer;
			Classes::FVector PlayerCameraLocation;
			Classes::FRotator PlayerCameraRotation;
		} data = { 0 };

		static struct {
			// AActor
			unsigned long BitField0; // 0x3C
			unsigned long BitField1; // 0x40
			unsigned long BitField2; // 0x44

			Classes::TEnumAsByte<Classes::EPhysics> Physics;
			Classes::TEnumAsByte<Classes::ECollisionType> CollisionType;
			// Base
			Classes::FVector Location;
			Classes::FRotator Rotation;
			Classes::FVector Velocity;
			Classes::FVector Acceleration;
			Classes::FVector AngularVelocity;
			Classes::FVector RelativeLocation;
			Classes::FRotator RelativeRotation;
			Classes::FRotator DesiredRotation;

			unsigned long BitField3; // 0x1D0
			float MinHitWall;
			float MoveTimer;
			Classes::FVector Destination;
			Classes::FVector FocalPoint;
			Classes::FVector AdjustLoc;
			Classes::FVector CurrentPathDir;
			float GroundPitchTime;
			Classes::FVector ViewX;
			Classes::FVector ViewY;
			Classes::FVector ViewZ;
			float FailedReachTime;
			Classes::FVector FailedReachLocation;
			float SightCounter;
			float RespawnPredictionTime;
			float InUseNodeCostMultiplier;
			int HighJumpNodeCostModifier;
			float LaneOffset;
			Classes::FRotator OldBasedRotation;
			int currentLaneSlot;
			int pathMatesCount;

			// APlayerController
			unsigned long BitField4; // 0x2EC
			float MaxResponseTime;
			float WaitDelay;
			Classes::TEnumAsByte<Classes::EDoubleClickDir> DoubleClickDir;
			unsigned char bIgnoreMoveInput;
			unsigned char bIgnoreLookInput;
			unsigned char bRun;
			unsigned char bDuck;
			unsigned long BitField5; // 0x300
			float FOVAngle;
			float DesiredFOV;
			float DefaultFOV;
			Classes::FRotator TargetViewRotation;
			float TargetEyeHeight;
			Classes::FRotator BlendedTargetViewRotation;
			Classes::FVector LastAckedAccel;
			float CurrentTimeStamp;
			float LastUpdateTime;
			int GroundPitch;
			Classes::FVector OldFloor;

			// ATdPlayerController
			unsigned long BitField6; // 0x52C
			float TargetingPawnInterp;
			float TargetingCutoffAngle;
			Classes::FVector TargetActorLocation;
			float LookAtTimeDelay;
			Classes::TEnumAsByte<Classes::EMovementAction> MeleeLastAction;
			unsigned char bIgnoreButtonInput;
			Classes::TEnumAsByte<Classes::EWalkingState> CachedWalkingState;
			float WallRunningAlignTime;
			int WallRunningAlignYaw;
			float ReactionTimeEnergy;
			float WallClimbingDodgeJumpThreshold;
			float WallRunningDodgeJumpThreshold;
			float WalkCyclePart1;
			float WalkCyclePart2;
			float AccelerationTime;
			Classes::FRotator VehicleRotation;
			Classes::FRotator DriverRotation;
			float StickySpeed;
			float FOVZoomRate;
			float FOVZoomDelay;
			float MouseX;
			float MouseY;
			float ActualAccelX;
			float ActualAccelY;
			float ActualAccelZ;
			float SixAxisDisarmZ;
			float SixAxisDisarmY;
			float SixAxisRollZ;
			float SixAxisRollY;
			float DisarmTimeMultiplier;
			float LastZAxisTilt;
			float LastYAxisTilt;
		} dataController = { 0 };

		struct {
			DWORD offset0 = 0x18C;
			char buffer0[0x224 - 0x18C];
		} dataWallrunOffsets;

		auto pawn = Engine::GetPlayerPawn();
		if (pawn) {
			auto controller = Engine::GetPlayerController();

			if (GetAsyncKeyState(0x34) < 0) {
				data.ObjectFlags = pawn->ObjectFlags;
				data.BitField0 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x3C);
				data.BitField1 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x40);
				data.BitField2 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x44);
				data.Physics = pawn->Physics;
				data.CollisionType = pawn->CollisionType;
				data.Location = pawn->Location;
				data.Rotation = pawn->Rotation;
				data.Velocity = pawn->Velocity;
				data.Acceleration = pawn->Acceleration;
				data.AngularVelocity = pawn->AngularVelocity;
				data.RelativeLocation = pawn->RelativeLocation;
				data.RelativeRotation = pawn->RelativeRotation;
				data.DesiredRotation = pawn->DesiredRotation;

				data.BitField3 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x1E0);
				data.BitField4 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x1E4);
				data.PathSearchType = pawn->PathSearchType;
				data.RemoteViewPitch = pawn->RemoteViewPitch;
				data.FlashCount = pawn->FlashCount;
				data.FiringMode = pawn->FiringMode;
				data.Floor = pawn->Floor;
				data.OldZ = pawn->OldZ;
				data.RMVelocity = pawn->RMVelocity;
				data.Health = pawn->Health;

				data.BitField5 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x41C);
				data.VelocityMagnitude2D = pawn->VelocityMagnitude2D;
				data.VelocityMagnitude = pawn->VelocityMagnitude;
				data.VelocityDir2D = pawn->VelocityDir2D;
				data.VelocityDir = pawn->VelocityDir;
				data.FaceRotationTimeLeft = pawn->FaceRotationTimeLeft;
				data.AmountTilUnarmed = pawn->AmountTilUnarmed;
				data.AgainstWallState = pawn->AgainstWallState;
				data.WeaponAnimState = pawn->WeaponAnimState;
				data.CurrentGrabTurnType = pawn->CurrentGrabTurnType;
				data.LadderType = pawn->LadderType;
				data.AnimationMovementState = pawn->AnimationMovementState;
				data.PendingAnimationMovementState = pawn->PendingAnimationMovementState;
				data.OldMovementState = pawn->OldMovementState;
				data.PendingMovementState = pawn->PendingMovementState;
				data.MovementState = pawn->MovementState;
				data.ReplicatedMovementState = pawn->ReplicatedMovementState;
				data.AIAimOldMovementState = pawn->AIAimOldMovementState;
				data.OverrideWalkingState = pawn->OverrideWalkingState;
				data.PendingOverrideWalkingState = pawn->PendingOverrideWalkingState;
				data.CurrentWalkingState = pawn->CurrentWalkingState;
				data.ReplicateCustomAnimCount = pawn->ReplicateCustomAnimCount;
				data.MoveActionHint = pawn->MoveActionHint;
				data.ReloadCount = pawn->ReloadCount;
				data.NoOfBreathingSounds = pawn->NoOfBreathingSounds;
				data.AgainstWallLeftHand = pawn->AgainstWallLeftHand;
				data.AgainstWallRightHand = pawn->AgainstWallRightHand;
				data.AgainstWallNormal = pawn->AgainstWallNormal;
				data.MinLookConstraint = pawn->MinLookConstraint;
				data.MaxLookConstraint = pawn->MaxLookConstraint;
				data.LegRotationSlowTimer = pawn->LegRotationSlowTimer;
				data.LegRotation = pawn->LegRotation;
				data.ASPollTimer = pawn->ASPollTimer;
				data.ASSlotPointer = pawn->ASSlotPointer;
				data.ASDistanceAccum = pawn->ASDistanceAccum;
				data.NewFloorSmooth = pawn->NewFloorSmooth;
				data.TargetMeshTranslationZ = pawn->TargetMeshTranslationZ;
				data.SmoothOffset = pawn->SmoothOffset;
				data.MoveLocation = pawn->MoveLocation;
				data.MoveNormal = pawn->MoveNormal;
				data.MoveLedgeLocation = pawn->MoveLedgeLocation;
				data.MoveLedgeNormal = pawn->MoveLedgeNormal;
				data.MoveLedgeResult = pawn->MoveLedgeResult;
				data.RemoteViewYaw = pawn->RemoteViewYaw;
				data.SpeedSprintEnergy = pawn->SpeedSprintEnergy;
				data.RollTriggerTime = pawn->RollTriggerTime;
				data.FallingUncontrolledHeight = pawn->FallingUncontrolledHeight;
				data.EnterFallingHeight = pawn->EnterFallingHeight;
				data.SlideEffectUpdateTimer = pawn->SlideEffectUpdateTimer;
				data.LastJumpLocation = pawn->LastJumpLocation;
				data.MovementStringGapTimer = pawn->MovementStringGapTimer;
				data.PlayerCameraLocation = pawn->PlayerCameraLocation;
				data.PlayerCameraRotation = pawn->PlayerCameraRotation;
				data.BitField6 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x904);

				dataController.BitField0 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(controller) + 0x3C);
				dataController.BitField1 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(controller) + 0x40);
				dataController.BitField2 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(controller) + 0x44);
				dataController.Physics = controller->Physics;
				dataController.CollisionType = controller->CollisionType;
				dataController.Location = controller->Location;
				dataController.Rotation = controller->Rotation;
				dataController.Velocity = controller->Velocity;
				dataController.Acceleration = controller->Acceleration;
				dataController.AngularVelocity = controller->AngularVelocity;
				dataController.RelativeLocation = controller->RelativeLocation;
				dataController.RelativeRotation = controller->RelativeRotation;
				dataController.DesiredRotation = controller->DesiredRotation;
				dataController.BitField3 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(controller) + 0x1D0);
				dataController.MinHitWall = controller->MinHitWall;
				dataController.MoveTimer = controller->MoveTimer;
				dataController.Destination = controller->Destination;
				dataController.FocalPoint = controller->FocalPoint;
				dataController.AdjustLoc = controller->AdjustLoc;
				dataController.CurrentPathDir = controller->CurrentPathDir;
				dataController.GroundPitchTime = controller->GroundPitchTime;
				dataController.ViewX = controller->ViewX;
				dataController.ViewY = controller->ViewY;
				dataController.ViewZ = controller->ViewZ;
				dataController.FailedReachTime = controller->FailedReachTime;
				dataController.FailedReachLocation = controller->FailedReachLocation;
				dataController.SightCounter = controller->SightCounter;
				dataController.RespawnPredictionTime = controller->RespawnPredictionTime;
				dataController.InUseNodeCostMultiplier = controller->InUseNodeCostMultiplier;
				dataController.HighJumpNodeCostModifier = controller->HighJumpNodeCostModifier;
				dataController.LaneOffset = controller->LaneOffset;
				dataController.OldBasedRotation = controller->OldBasedRotation;
				dataController.currentLaneSlot = controller->currentLaneSlot;
				dataController.pathMatesCount = controller->pathMatesCount;

				dataController.BitField4 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x2EC);
				dataController.MaxResponseTime = controller->MaxResponseTime;
				dataController.WaitDelay = controller->WaitDelay;
				dataController.DoubleClickDir = controller->DoubleClickDir;
				dataController.bIgnoreMoveInput = controller->bIgnoreMoveInput;
				dataController.bIgnoreLookInput = controller->bIgnoreLookInput;
				dataController.BitField5 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x300);
				dataController.bRun = controller->bRun;
				dataController.bDuck = controller->bDuck;
				dataController.FOVAngle = controller->FOVAngle;
				dataController.DesiredFOV = controller->DesiredFOV;
				dataController.DefaultFOV = controller->DefaultFOV;
				dataController.TargetViewRotation = controller->TargetViewRotation;
				dataController.TargetEyeHeight = controller->TargetEyeHeight;
				dataController.BlendedTargetViewRotation = controller->BlendedTargetViewRotation;
				dataController.LastAckedAccel = controller->LastAckedAccel;
				dataController.CurrentTimeStamp = controller->CurrentTimeStamp;
				dataController.LastUpdateTime = controller->LastUpdateTime;
				dataController.GroundPitch = controller->GroundPitch;
				dataController.OldFloor = controller->OldFloor;

				dataController.BitField6 = *reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x52C);
				dataController.TargetingPawnInterp = controller->TargetingPawnInterp;
				dataController.TargetingCutoffAngle = controller->TargetingCutoffAngle;
				dataController.TargetActorLocation = controller->TargetActorLocation;
				dataController.LookAtTimeDelay = controller->LookAtTimeDelay;
				dataController.MeleeLastAction = controller->MeleeLastAction;
				dataController.bIgnoreButtonInput = controller->bIgnoreButtonInput;
				dataController.CachedWalkingState = controller->CachedWalkingState;
				dataController.WallRunningAlignTime = controller->WallRunningAlignTime;
				dataController.WallRunningAlignYaw = controller->WallRunningAlignYaw;
				dataController.ReactionTimeEnergy = controller->ReactionTimeEnergy;
				dataController.WallClimbingDodgeJumpThreshold = controller->WallClimbingDodgeJumpThreshold;
				dataController.WallRunningDodgeJumpThreshold = controller->WallRunningDodgeJumpThreshold;
				dataController.WalkCyclePart1 = controller->WalkCyclePart1;
				dataController.WalkCyclePart2 = controller->WalkCyclePart2;
				dataController.AccelerationTime = controller->AccelerationTime;
				dataController.VehicleRotation = controller->VehicleRotation;
				dataController.DriverRotation = controller->DriverRotation;
				dataController.StickySpeed = controller->StickySpeed;
				dataController.FOVZoomRate = controller->FOVZoomRate;
				dataController.FOVZoomDelay = controller->FOVZoomDelay;
				dataController.MouseX = controller->MouseX;
				dataController.MouseY = controller->MouseY;
				dataController.ActualAccelX = controller->ActualAccelX;
				dataController.ActualAccelY = controller->ActualAccelY;
				dataController.ActualAccelZ = controller->ActualAccelZ;
				dataController.SixAxisDisarmZ = controller->SixAxisDisarmZ;
				dataController.SixAxisDisarmY = controller->SixAxisDisarmY;
				dataController.SixAxisRollZ = controller->SixAxisRollZ;
				dataController.SixAxisRollY = controller->SixAxisRollY;
				dataController.DisarmTimeMultiplier = controller->DisarmTimeMultiplier;
				dataController.LastZAxisTilt = controller->LastZAxisTilt;
				dataController.LastYAxisTilt = controller->LastYAxisTilt;

				switch (pawn->MovementState) {
					case Classes::EMovement::MOVE_WallRun:
					case Classes::EMovement::MOVE_WallRunningLeft:
					case Classes::EMovement::MOVE_WallRunningRight:
						memcpy(dataWallrun, reinterpret_cast<byte *>(pawn->Moves[static_cast<size_t>(pawn->MovementState.GetValue())]) + 0x18C, sizeof(dataWallrun));
						break;
				}
			} else if (GetAsyncKeyState(0x35) < 0) {
/*
				auto moves = pawn->Moves;
				for (auto i = 0UL; i < moves.Num(); ++i) {
					auto move = moves[i];
					if (move) {
						move->EndState(Classes::FName("None"));
						move->ResetMove();
					}
				}

				pawn->GotoState(Classes::FName("None"), Classes::FName("None"), true, false);
				controller->GotoState(Classes::FName("None"), Classes::FName("None"), true, false);

				pawn->OldMovementState = Classes::EMovement::MOVE_None;
				pawn->MovementState = Classes::EMovement::MOVE_None;
				pawn->SetMove(data.MovementState, false, false);

				pawn->Location = data.Location;
				pawn->Rotation = data.Rotation;
				pawn->Velocity = data.Velocity;
				pawn->Acceleration = data.Acceleration;
				pawn->AngularVelocity = data.AngularVelocity;
				pawn->RelativeLocation = data.RelativeLocation;
				pawn->RelativeRotation = data.RelativeRotation;
				pawn->DesiredRotation = data.DesiredRotation;
				pawn->VelocityMagnitude2D = data.VelocityMagnitude2D;
				pawn->VelocityMagnitude = data.VelocityMagnitude;
				pawn->VelocityDir2D = data.VelocityDir2D;
				pawn->VelocityDir = data.VelocityDir;
				pawn->FaceRotationTimeLeft = data.FaceRotationTimeLeft;
				pawn->AmountTilUnarmed = data.AmountTilUnarmed;
				pawn->AgainstWallState = data.AgainstWallState;
				pawn->WeaponAnimState = data.WeaponAnimState;
				pawn->CurrentGrabTurnType = data.CurrentGrabTurnType;
				pawn->LadderType = data.LadderType;
				pawn->AnimationMovementState = data.AnimationMovementState;
				pawn->PendingAnimationMovementState = data.PendingAnimationMovementState;
				pawn->OldMovementState = data.OldMovementState;
				pawn->PendingMovementState = data.PendingMovementState;
				pawn->MovementState = data.MovementState;
				pawn->ReplicatedMovementState = data.ReplicatedMovementState;
				pawn->AIAimOldMovementState = data.AIAimOldMovementState;
				pawn->OverrideWalkingState = data.OverrideWalkingState;
				pawn->PendingOverrideWalkingState = data.PendingOverrideWalkingState;
				pawn->CurrentWalkingState = data.CurrentWalkingState;
				pawn->ReplicateCustomAnimCount = data.ReplicateCustomAnimCount;
				pawn->MoveActionHint = data.MoveActionHint;
				pawn->ReloadCount = data.ReloadCount;
				pawn->NoOfBreathingSounds = data.NoOfBreathingSounds;
				pawn->AgainstWallLeftHand = data.AgainstWallLeftHand;
				pawn->AgainstWallRightHand = data.AgainstWallRightHand;
				pawn->AgainstWallNormal = data.AgainstWallNormal;
				pawn->MinLookConstraint = data.MinLookConstraint;
				pawn->MaxLookConstraint = data.MaxLookConstraint;
				pawn->LegRotationSlowTimer = data.LegRotationSlowTimer;
				pawn->LegRotation = data.LegRotation;
				pawn->ASPollTimer = data.ASPollTimer;
				pawn->ASSlotPointer = data.ASSlotPointer;
				pawn->ASDistanceAccum = data.ASDistanceAccum;
				pawn->NewFloorSmooth = data.NewFloorSmooth;
				pawn->TargetMeshTranslationZ = data.TargetMeshTranslationZ;
				pawn->SmoothOffset = data.SmoothOffset;
				pawn->MoveLocation = data.MoveLocation;
				pawn->MoveNormal = data.MoveNormal;
				pawn->MoveLedgeLocation = data.MoveLedgeLocation;
				pawn->MoveLedgeNormal = data.MoveLedgeNormal;
				pawn->MoveLedgeResult = data.MoveLedgeResult;
				pawn->RemoteViewYaw = data.RemoteViewYaw;
				pawn->SpeedSprintEnergy = data.SpeedSprintEnergy;
				pawn->RollTriggerTime = data.RollTriggerTime;
				pawn->FallingUncontrolledHeight = data.FallingUncontrolledHeight;
				pawn->EnterFallingHeight = data.EnterFallingHeight;
				pawn->SlideEffectUpdateTimer = data.SlideEffectUpdateTimer;
				pawn->LastJumpLocation = data.LastJumpLocation;
				pawn->MovementStringGapTimer = data.MovementStringGapTimer;
				pawn->PlayerCameraLocation = data.PlayerCameraLocation;
				pawn->PlayerCameraRotation = data.PlayerCameraRotation;

				controller->Location = dataController.Location;
				controller->Rotation = dataController.Rotation;
				controller->Velocity = dataController.Velocity;
*/

				/* pawn->StopAllCustomAnimations(0.0f);
				pawn->ClearAnimationMovementStateInternal();
				pawn->ClearOverrideWalkingStateInternal();
				pawn->StopIgnoreLookInput();
				pawn->StopIgnoreMoveInput();
				pawn->ClearPathStep();
				pawn->ClearConstraints();
				controller->ClientIgnoreLookInput(false);
				controller->ClientIgnoreMoveInput(false);
				controller->IgnoreButtonInput(false);
				controller->IgnoreLookInput(false);
				controller->IgnoreMoveInput(false);
				controller->ClearAckedMoves();
				controller->ResetPlayerMovementInput();

				auto timers = pawn->Timers;
				for (auto i = 0UL; i < timers.Num(); ++i) {
					pawn->ClearTimer(timers[i].FuncName, timers[i].TimerObj);
				}

				auto moves = pawn->Moves;
				for (auto i = 0UL; i < moves.Num(); ++i) {
					if (moves[i]) {
						moves[i]->bLookAtTargetAngle = false;
						moves[i]->bLookAtTargetLocation = false;
					}
				}

				pawn->GotoState(Classes::FName("None"), Classes::FName("None"), true, false);
				controller->GotoState(Classes::FName("None"), Classes::FName("None"), true, false);

				controller->IgnoreButtonInput(false);
				controller->IgnoreLookInput(false);
				controller->IgnoreMoveInput(false);
				pawn->StopAllCustomAnimations(0.0f);
				pawn->SetIgnoreLookInput(0);
				pawn->SetIgnoreMoveInput(0);
				pawn->StopIgnoreMoveInput();
				pawn->StopIgnoreLookInput();
				pawn->bCanJump = true;
				pawn->bJumpCapable = true; */

				pawn->StopAllCustomAnimations(-1.0f);
				pawn->SetMove(data.MovementState, false, false);
				
				switch (data.MovementState) {
					case Classes::EMovement::MOVE_WallRun:
					case Classes::EMovement::MOVE_WallRunningLeft:
					case Classes::EMovement::MOVE_WallRunningRight:
						printf("what\n");
						memcpy(reinterpret_cast<byte *>(pawn->Moves[static_cast<size_t>(data.MovementState.GetValue())]) + 0x18C, dataWallrun, sizeof(dataWallrun));
						break;
				}

				pawn->ObjectFlags = data.ObjectFlags;
				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x3C) = data.BitField0;
				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x40) = data.BitField1;
				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x44) = data.BitField2;
				pawn->Physics = data.Physics;
				pawn->CollisionType = data.CollisionType;
				pawn->Location = data.Location;
				pawn->Rotation = data.Rotation;
				pawn->Velocity = data.Velocity;
				pawn->Acceleration = data.Acceleration;
				pawn->AngularVelocity = data.AngularVelocity;
				pawn->RelativeLocation = data.RelativeLocation;
				pawn->RelativeRotation = data.RelativeRotation;
				pawn->DesiredRotation = data.DesiredRotation;
				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x1E0) = data.BitField3;
				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x1E4) = data.BitField4;
				pawn->PathSearchType = data.PathSearchType;
				pawn->RemoteViewPitch = data.RemoteViewPitch;
				pawn->FlashCount = data.FlashCount;
				pawn->FiringMode = data.FiringMode;
				pawn->Floor = data.Floor;
				pawn->OldZ = data.OldZ;
				pawn->RMVelocity = data.RMVelocity;
				pawn->Health = data.Health;
				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x41C) = data.BitField5;
				pawn->VelocityMagnitude2D = data.VelocityMagnitude2D;
				pawn->VelocityMagnitude = data.VelocityMagnitude;
				pawn->VelocityDir2D = data.VelocityDir2D;
				pawn->VelocityDir = data.VelocityDir;
				pawn->FaceRotationTimeLeft = data.FaceRotationTimeLeft;
				pawn->AmountTilUnarmed = data.AmountTilUnarmed;
				pawn->AgainstWallState = data.AgainstWallState;
				pawn->WeaponAnimState = data.WeaponAnimState;
				pawn->CurrentGrabTurnType = data.CurrentGrabTurnType;
				pawn->LadderType = data.LadderType;
				pawn->AnimationMovementState = data.AnimationMovementState;
				pawn->PendingAnimationMovementState = data.PendingAnimationMovementState;
				pawn->OldMovementState = data.OldMovementState;
				pawn->PendingMovementState = data.PendingMovementState;
				pawn->MovementState = data.MovementState;
				pawn->ReplicatedMovementState = data.ReplicatedMovementState;
				pawn->AIAimOldMovementState = data.AIAimOldMovementState;
				pawn->OverrideWalkingState = data.OverrideWalkingState;
				pawn->PendingOverrideWalkingState = data.PendingOverrideWalkingState;
				pawn->CurrentWalkingState = data.CurrentWalkingState;
				pawn->ReplicateCustomAnimCount = data.ReplicateCustomAnimCount;
				pawn->MoveActionHint = data.MoveActionHint;
				pawn->ReloadCount = data.ReloadCount;
				pawn->NoOfBreathingSounds = data.NoOfBreathingSounds;
				pawn->AgainstWallLeftHand = data.AgainstWallLeftHand;
				pawn->AgainstWallRightHand = data.AgainstWallRightHand;
				pawn->AgainstWallNormal = data.AgainstWallNormal;
				pawn->MinLookConstraint = data.MinLookConstraint;
				pawn->MaxLookConstraint = data.MaxLookConstraint;
				pawn->LegRotationSlowTimer = data.LegRotationSlowTimer;
				pawn->LegRotation = data.LegRotation;
				pawn->ASPollTimer = data.ASPollTimer;
				pawn->ASSlotPointer = data.ASSlotPointer;
				pawn->ASDistanceAccum = data.ASDistanceAccum;
				pawn->NewFloorSmooth = data.NewFloorSmooth;
				pawn->TargetMeshTranslationZ = data.TargetMeshTranslationZ;
				pawn->SmoothOffset = data.SmoothOffset;
				pawn->MoveLocation = data.MoveLocation;
				pawn->MoveNormal = data.MoveNormal;
				pawn->MoveLedgeLocation = data.MoveLedgeLocation;
				pawn->MoveLedgeNormal = data.MoveLedgeNormal;
				pawn->MoveLedgeResult = data.MoveLedgeResult;
				pawn->RemoteViewYaw = data.RemoteViewYaw;
				pawn->SpeedSprintEnergy = data.SpeedSprintEnergy;
				pawn->RollTriggerTime = data.RollTriggerTime;
				pawn->FallingUncontrolledHeight = data.FallingUncontrolledHeight;
				pawn->EnterFallingHeight = data.EnterFallingHeight;
				pawn->SlideEffectUpdateTimer = data.SlideEffectUpdateTimer;
				pawn->LastJumpLocation = data.LastJumpLocation;
				pawn->MovementStringGapTimer = data.MovementStringGapTimer;
				pawn->PlayerCameraLocation = data.PlayerCameraLocation;
				pawn->PlayerCameraRotation = data.PlayerCameraRotation;
				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x904) = data.BitField6;

				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(controller) + 0x3C) = dataController.BitField0;
				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(controller) + 0x40) = dataController.BitField1;
				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(controller) + 0x44) = dataController.BitField2;
				controller->Physics = dataController.Physics;
				controller->CollisionType = dataController.CollisionType;
				controller->Location = dataController.Location;
				controller->Rotation = dataController.Rotation;
				controller->Velocity = dataController.Velocity;
				controller->Acceleration = dataController.Acceleration;
				controller->AngularVelocity = dataController.AngularVelocity;
				controller->RelativeLocation = dataController.RelativeLocation;
				controller->RelativeRotation = dataController.RelativeRotation;
				controller->DesiredRotation = dataController.DesiredRotation;
				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(controller) + 0x1D0) = dataController.BitField3;
				controller->MinHitWall = dataController.MinHitWall;
				controller->MoveTimer = dataController.MoveTimer;
				controller->Destination = dataController.Destination;
				controller->FocalPoint = dataController.FocalPoint;
				controller->AdjustLoc = dataController.AdjustLoc;
				controller->CurrentPathDir = dataController.CurrentPathDir;
				controller->GroundPitchTime = dataController.GroundPitchTime;
				controller->ViewX = dataController.ViewX;
				controller->ViewY = dataController.ViewY;
				controller->ViewZ = dataController.ViewZ;
				controller->FailedReachTime = dataController.FailedReachTime;
				controller->FailedReachLocation = dataController.FailedReachLocation;
				controller->SightCounter = dataController.SightCounter;
				controller->RespawnPredictionTime = dataController.RespawnPredictionTime;
				controller->InUseNodeCostMultiplier = dataController.InUseNodeCostMultiplier;
				controller->HighJumpNodeCostModifier = dataController.HighJumpNodeCostModifier;
				controller->LaneOffset = dataController.LaneOffset;
				controller->OldBasedRotation = dataController.OldBasedRotation;
				controller->currentLaneSlot = dataController.currentLaneSlot;

				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x2EC) = dataController.BitField4;
				controller->MaxResponseTime = dataController.MaxResponseTime;
				controller->WaitDelay = dataController.WaitDelay;
				controller->DoubleClickDir = dataController.DoubleClickDir;
				controller->bIgnoreMoveInput = dataController.bIgnoreMoveInput;
				controller->bIgnoreLookInput = dataController.bIgnoreLookInput;
				controller->bRun = dataController.bRun;
				controller->bDuck = dataController.bDuck;
				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x300) = dataController.BitField5;
				controller->FOVAngle = dataController.FOVAngle;
				controller->DesiredFOV = dataController.DesiredFOV;
				controller->DefaultFOV = dataController.DefaultFOV;
				controller->TargetViewRotation = dataController.TargetViewRotation;
				controller->TargetEyeHeight = dataController.TargetEyeHeight;
				controller->BlendedTargetViewRotation = dataController.BlendedTargetViewRotation;
				controller->LastAckedAccel = dataController.LastAckedAccel;
				controller->CurrentTimeStamp = dataController.CurrentTimeStamp;
				controller->LastUpdateTime = dataController.LastUpdateTime;
				controller->GroundPitch = dataController.GroundPitch;
				controller->OldFloor = dataController.OldFloor;
				*reinterpret_cast<unsigned long *>(reinterpret_cast<byte *>(pawn) + 0x52C) = dataController.BitField6;
				controller->TargetingPawnInterp = dataController.TargetingPawnInterp;
				controller->TargetingCutoffAngle = dataController.TargetingCutoffAngle;
				controller->TargetActorLocation = dataController.TargetActorLocation;
				controller->LookAtTimeDelay = dataController.LookAtTimeDelay;
				controller->MeleeLastAction = dataController.MeleeLastAction;
				controller->bIgnoreButtonInput = dataController.bIgnoreButtonInput;
				controller->CachedWalkingState = dataController.CachedWalkingState;
				controller->WallRunningAlignTime = dataController.WallRunningAlignTime;
				controller->WallRunningAlignYaw = dataController.WallRunningAlignYaw;
				controller->ReactionTimeEnergy = dataController.ReactionTimeEnergy;
				controller->WallClimbingDodgeJumpThreshold = dataController.WallClimbingDodgeJumpThreshold;
				controller->WallRunningDodgeJumpThreshold = dataController.WallRunningDodgeJumpThreshold;
				controller->WalkCyclePart1 = dataController.WalkCyclePart1;
				controller->WalkCyclePart2 = dataController.WalkCyclePart2;
				controller->AccelerationTime = dataController.AccelerationTime;
				controller->VehicleRotation = dataController.VehicleRotation;
				controller->DriverRotation = dataController.DriverRotation;
				controller->StickySpeed = dataController.StickySpeed;
				controller->FOVZoomRate = dataController.FOVZoomRate;
				controller->FOVZoomDelay = dataController.FOVZoomDelay;
				controller->MouseX = dataController.MouseX;
				controller->MouseY = dataController.MouseY;
				controller->ActualAccelX = dataController.ActualAccelX;
				controller->ActualAccelY = dataController.ActualAccelY;
				controller->ActualAccelZ = dataController.ActualAccelZ;
				controller->SixAxisDisarmZ = dataController.SixAxisDisarmZ;
				controller->SixAxisDisarmY = dataController.SixAxisDisarmY;
				controller->SixAxisRollZ = dataController.SixAxisRollZ;
				controller->SixAxisRollY = dataController.SixAxisRollY;
				controller->DisarmTimeMultiplier = dataController.DisarmTimeMultiplier;
				controller->LastZAxisTilt = dataController.LastZAxisTilt;
				controller->LastYAxisTilt = dataController.LastYAxisTilt;
				controller->pathMatesCount = dataController.pathMatesCount;
			}
		}
	}
#endif

	tick.Original(scales, arg, delta);
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

	actor->SetHidden(true);
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

bool Engine::WorldToScreen(IDirect3DDevice9 *device, Classes::FVector &inOutLocation) {
	auto controller = Engine::GetPlayerController();
	if (!controller || !projectionTick.Matrix) {
		return false;
	}

	auto fov = tanf((controller->FOVAngle * CONST_Pi / 180.0f) / 2.0f);
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

	/*** SDK ***/
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

	/*** D3D9 Hooks ***/
	// EndScene
	if (!(ptr = Pattern::FindPattern("d3d9.dll", "\xC7\x06\x00\x00\x00\x00\x89\x86\x00\x00\x00\x00\x89\x86", "xx????xx????xx"))) {
		MessageBoxA(0, "Failed to find D3D9 exports", "Failure", MB_ICONERROR);
		return false;
	}

	ptr = *(void **)((byte *)ptr + 2);
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

	/*** Engine Hooks ***/
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
	if (!(ptr = Pattern::FindPattern("\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x81\xEC\x00\x00\x00\x00\x53\x55\x56\x57\xA1\x00\x00\x00\x00\x33\xC4\x50\x8D\x84\x24\x00\x00\x00\x00\x64\xA3\x00\x00\x00\x00\x8B\xE9\x89\x6C\x24\x00\x00\xFF\x89", "???????xxxxxxxxx?xxxxxxxx????xxxxxx?xxxxxxxxxxxxxx??xx"))) {
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
	
	if (!(ptr = Pattern::FindPattern(ptr, 0x1000, "\xC7\x05\x00\x00\x00\x00\x00\x00\x00\x00\xB8\x00\x00\x00\x00\xC3\xB8\x00\x00\x00\x00\xC3", "xx????????x????xx????x"))) {
		MessageBoxA(0, "Failed to find PreDeath (2)", "Failure", MB_ICONERROR);
		return false;
	}

	if (!Hook::TrampolineHook(PreDeathHook, ptr, reinterpret_cast<void **>(&death.PreOriginal))) {
		MessageBoxA(0, "Failed to hook PreDeath", "Failure", MB_ICONERROR);
		return false;
	}

	// PostDeath
	if (!(ptr = Pattern::FindPattern(ptr, 0x1000, "\x8B\x0D\x00\x00\x00\x00\xC7\x05\x00\x00\x00\x00\x00\x00\x00\x00\x8B\x01\x8B\x90\x00\x00\x00\x00\xFF\xD2\xB8\x00\x00\x00\x00\xC3\x8B\xC1\xC7\x00\x00\x00\x00\x00\xC3", "xx????xx????????xxxx????xxx????xxxxx????x"))) {
		MessageBoxA(0, "Failed to hook PostDeath", "Failure", MB_ICONERROR);
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