#pragma once

// Mirror's Edge (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../sdk.h"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TdTTContent.TdTTVictoryMessage.GetString
struct UTdTTVictoryMessage_GetString_Params
{
	int                                                InSwitch;                                                 // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TdTTContent.TdTTVictoryMessage.ClientReceive
struct UTdTTVictoryMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      PitcherPRI;                                               // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RecieverPRI;                                              // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function TdTTContent.TdTimeTrialMessage.GetLifeTime
struct UTdTimeTrialMessage_GetLifeTime_Params
{
	int                                                Switch;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TdTTContent.TdTimeTrialMessage.GetString
struct UTdTimeTrialMessage_GetString_Params
{
	int                                                InSwitch;                                                 // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TdTTContent.TdTimeTrialMessage.GetAnnouncementSound
struct UTdTimeTrialMessage_GetAnnouncementSound_Params
{
	class APlayerController*                           LocalController;                                          // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TdTTContent.TdTimeTrialMessage.ClientReceive
struct UTdTimeTrialMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      PitcherPRI;                                               // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RecieverPRI;                                              // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function TdTTContent.TdTimeMessage.GetColor
struct UTdTimeMessage_GetColor_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TdTTContent.TdTimeMessage.GetString
struct UTdTimeMessage_GetString_Params
{
	int                                                InSwitch;                                                 // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TdTTContent.TdTimeMessage.GetAnnouncementSound
struct UTdTimeMessage_GetAnnouncementSound_Params
{
	class APlayerController*                           LocalController;                                          // (Parm)
	int                                                InSwitch;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TdTTContent.TdTimeMessage.ClientReceive
struct UTdTimeMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      PitcherPRI;                                               // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RecieverPRI;                                              // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

// Function TdTTContent.TdFinishlineTimeMessage.GetAnnouncementSound
struct UTdFinishlineTimeMessage_GetAnnouncementSound_Params
{
	class APlayerController*                           LocalController;                                          // (Parm)
	int                                                InSwitch;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
