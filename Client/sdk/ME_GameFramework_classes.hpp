#pragma once

// Mirror's Edge (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameFramework.GameBreakableActor
// 0x003C (0x02D4 - 0x0298)
class AGameBreakableActor : public AKActor
{
public:
	TArray<class UClass*>                              DamageTypes;                                              // 0x0298(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     ImpactDirection;                                          // 0x02A4(0x000C) (Transient)
	struct FVector                                     ImpactLocation;                                           // 0x02B0(0x000C) (Transient)
	unsigned long                                      bDestroyed : 1;                                           // 0x02BC(0x0004)
	unsigned long                                      bParticlesAcceptLights : 1;                               // 0x02BC(0x0004) (Edit)
	unsigned long                                      bParticlesAcceptDynamicLights : 1;                        // 0x02BC(0x0004) (Edit)
	TArray<struct FBreakableStep>                      BreakableSteps;                                           // 0x02C0(0x000C) (Edit, NeedCtorLink)
	int                                                CurrentBreakableStep;                                     // 0x02CC(0x0004)
	struct FLightingChannelContainer                   ParticleLightingChannels;                                 // 0x02D0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameBreakableActor");
		return ptr;
	}


	void Destroyed();
	void HideAndDestroy();
	void BreakLastApart(class AController* EventInstigator);
	void BreakStepApart(int BrokenStep);
	bool IsValidDamageType(class UClass* inDamageType);
	void TakeStepDamage(int Damage, class AController* EventInstigator, bool bIsBroken, int BrokenStep);
	void TakeLastDamage(int Damage, class AController* EventInstigator, bool bIsBroken, int BrokenStep);
	void TakeDamage(int Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void SetParticlesLighting(class AEmitter* Emit);
	struct FVector GetOffsetToWorld(const struct FVector& Offset);
};


// Class GameFramework.GameHUD
// 0x0024 (0x0468 - 0x0444)
class AGameHUD : public AHUD
{
public:
	float                                              TotalTitleDrawTime;                                       // 0x0444(0x0004)
	float                                              TotalTitleFadeTime;                                       // 0x0448(0x0004)
	float                                              TitleDrawStartTime;                                       // 0x044C(0x0004)
	struct FString                                     ChapterTitleString;                                       // 0x0450(0x000C) (NeedCtorLink)
	struct FString                                     ActTitleString;                                           // 0x045C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameHUD");
		return ptr;
	}


	void StopDrawingChapterTitle();
	void StartDrawingChapterTitle(const struct FString& ChapterName, const struct FString& ActName, float TotalDrawTime, float TotalFadeTime);
	void SetHUDDrawColor(TEnumAsByte<EGameHUDColor> eColor, unsigned char Alpha);
};


// Class GameFramework.GamePawn
// 0x0000 (0x03C4 - 0x03C4)
class AGamePawn : public APawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePawn");
		return ptr;
	}


	void GetTargetFrictionCylinder(float* CylinderRadius, float* CylinderHeight);
};


// Class GameFramework.GamePlayerController
// 0x0000 (0x0528 - 0x0528)
class AGamePlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerController");
		return ptr;
	}


	void ClientDisplayChapterTitle(int DisplayChapter, float TotalDisplayTime, float TotalFadeTime);
	void DisplayChapterTitle(int DisplayChapter, float TotalDisplayTime, float TotalFadeTime);
	void GetChapterStrings(int eChapter, struct FString* ChapterName, struct FString* ActName);
};


// Class GameFramework.GamePlayerInput
// 0x0000 (0x0170 - 0x0170)
class UGamePlayerInput : public UPlayerInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GamePlayerInput");
		return ptr;
	}

};


// Class GameFramework.GameProjectile
// 0x0000 (0x01FC - 0x01FC)
class AGameProjectile : public AProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameProjectile");
		return ptr;
	}

};


// Class GameFramework.GameTypes
// 0x0000 (0x003C - 0x003C)
class UGameTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameTypes");
		return ptr;
	}

};


// Class GameFramework.GameVehicle
// 0x0000 (0x0548 - 0x0548)
class AGameVehicle : public ASVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameVehicle");
		return ptr;
	}

};


// Class GameFramework.GameWeapon
// 0x0000 (0x02BC - 0x02BC)
class AGameWeapon : public AWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameWeapon");
		return ptr;
	}

};


// Class GameFramework.GameSkelCtrl_Recoil
// 0x007C (0x0110 - 0x0094)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	unsigned long                                      bBoneSpaceRecoil : 1;                                     // 0x0094(0x0004) (Edit)
	unsigned long                                      bPlayRecoil : 1;                                          // 0x0094(0x0004) (Edit, Transient)
	unsigned long                                      bOldPlayRecoil : 1;                                       // 0x0094(0x0004) (Transient)
	unsigned long                                      bApplyControl : 1;                                        // 0x0094(0x0004) (Transient)
	struct FRecoilDef                                  Recoil;                                                   // 0x0098(0x0070) (Edit)
	struct FVector2D                                   Aim;                                                      // 0x0108(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameSkelCtrl_Recoil");
		return ptr;
	}

};


// Class GameFramework.GameActorFactoryBreakable
// 0x0000 (0x0095 - 0x0095)
class UGameActorFactoryBreakable : public UActorFactoryRigidBody
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.GameActorFactoryBreakable");
		return ptr;
	}

};


// Class GameFramework.SeqAct_DisplayChapterTitleBase
// 0x0008 (0x00E4 - 0x00DC)
class USeqAct_DisplayChapterTitleBase : public USequenceAction
{
public:
	float                                              TotalDisplayTime;                                         // 0x00DC(0x0004) (Edit)
	float                                              TotalFadeTime;                                            // 0x00E0(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameFramework.SeqAct_DisplayChapterTitleBase");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
