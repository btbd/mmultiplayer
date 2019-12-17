#pragma once

// Mirror's Edge (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameFramework.GameHUD.EGameHUDColor
enum class EGameHUDColor : uint8_t
{
	GHD_WHITE                      = 0,
	GHD_BLACK                      = 1,
	GHD_MAX                        = 2
};


// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
enum class ERecoilStart : uint8_t
{
	ERS_Zero                       = 0,
	ERS_Random                     = 1,
	ERS_MAX                        = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameFramework.GameBreakableActor.BreakableStep.BreakableParticleSystem
// 0x0010
struct FBreakableParticleSystem
{
	class UParticleSystem*                             Emitter;                                                  // 0x0000(0x0004) (Edit)
	struct FVector                                     Offset;                                                   // 0x0004(0x000C) (Edit)
};

// ScriptStruct GameFramework.GameBreakableActor.BreakableStep
// 0x001C
struct FBreakableStep
{
	float                                              DamageThreshold;                                          // 0x0000(0x0004) (Edit)
	TArray<struct FBreakableParticleSystem>            ParticleEmitters;                                         // 0x0004(0x000C) (Edit, NeedCtorLink)
	class UStaticMesh*                                 BreakMesh;                                                // 0x0010(0x0004) (Edit)
	TEnumAsByte<EPhysics>                              Physics;                                                  // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class USoundCue*                                   BreakSound;                                               // 0x0018(0x0004) (Edit)
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilParams
// 0x0004
struct FRecoilParams
{
	TEnumAsByte<ERecoilStart>                          X;                                                        // 0x0000(0x0001) (Edit)
	TEnumAsByte<ERecoilStart>                          Y;                                                        // 0x0001(0x0001) (Edit)
	TEnumAsByte<ERecoilStart>                          Z;                                                        // 0x0002(0x0001) (Edit)
	unsigned char                                      Padding;                                                  // 0x0003(0x0001) (Const, Transient)
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilDef
// 0x0070
struct FRecoilDef
{
	float                                              TimeToGo;                                                 // 0x0000(0x0004) (Transient)
	float                                              TimeDuration;                                             // 0x0004(0x0004) (Edit)
	struct FVector                                     RotAmplitude;                                             // 0x0008(0x000C) (Edit)
	struct FVector                                     RotFrequency;                                             // 0x0014(0x000C) (Edit)
	struct FVector                                     RotSinOffset;                                             // 0x0020(0x000C)
	struct FRecoilParams                               RotParams;                                                // 0x002C(0x0004) (Edit)
	struct FRotator                                    RotOffset;                                                // 0x0030(0x000C) (Transient)
	struct FVector                                     LocAmplitude;                                             // 0x003C(0x000C) (Edit)
	struct FVector                                     LocFrequency;                                             // 0x0048(0x000C) (Edit)
	struct FVector                                     LocSinOffset;                                             // 0x0054(0x000C)
	struct FRecoilParams                               LocParams;                                                // 0x0060(0x0004) (Edit)
	struct FVector                                     LocOffset;                                                // 0x0064(0x000C) (Transient)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
