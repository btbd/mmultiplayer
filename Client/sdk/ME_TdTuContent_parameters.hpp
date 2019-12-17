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

// Function TdTuContent.TdTutorialMessage.GetString
struct UTdTutorialMessage_GetString_Params
{
	int                                                Switch;                                                   // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      Killer;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      Victim;                                                   // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TdTuContent.TdTutorialFeedbackMessage.GetString
struct UTdTutorialFeedbackMessage_GetString_Params
{
	int                                                InSwitch;                                                 // (OptionalParm, Parm)
	bool                                               bPRI1HUD;                                                 // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TdTuContent.TdTutorialFeedbackMessage.GetAnnouncementSound
struct UTdTutorialFeedbackMessage_GetAnnouncementSound_Params
{
	class APlayerController*                           LocalController;                                          // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_2;                                             // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RelatedPRI_3;                                             // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
	class USoundNodeWave*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TdTuContent.TdTutorialFeedbackMessage.ClientReceive
struct UTdTutorialFeedbackMessage_ClientReceive_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	int                                                Switch;                                                   // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      PitcherPRI;                                               // (OptionalParm, Parm)
	class APlayerReplicationInfo*                      RecieverPRI;                                              // (OptionalParm, Parm)
	class UObject*                                     OptionalObject;                                           // (OptionalParm, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
