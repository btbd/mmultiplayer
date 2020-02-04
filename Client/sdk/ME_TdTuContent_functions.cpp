// Mirror's Edge (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../sdk.h"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TdTuContent.TdTutorialMessage.GetString
// (Defined, Static, Public)
// Parameters:
// int                            Switch                         (OptionalParm, Parm)
// bool                           bPRI1HUD                       (OptionalParm, Parm)
// class APlayerReplicationInfo*  Killer                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  Victim                         (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTdTutorialMessage::STATIC_GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Victim, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTuContent.TdTutorialMessage.GetString");

	UTdTutorialMessage_GetString_Params params;
	params.Switch = Switch;
	params.bPRI1HUD = bPRI1HUD;
	params.Killer = Killer;
	params.Victim = Victim;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TdTuContent.TdTutorialFeedbackMessage.GetString
// (Defined, Static, Public)
// Parameters:
// int                            InSwitch                       (OptionalParm, Parm)
// bool                           bPRI1HUD                       (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_3                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTdTutorialFeedbackMessage::STATIC_GetString(int InSwitch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTuContent.TdTutorialFeedbackMessage.GetString");

	UTdTutorialFeedbackMessage_GetString_Params params;
	params.InSwitch = InSwitch;
	params.bPRI1HUD = bPRI1HUD;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.RelatedPRI_3 = RelatedPRI_3;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TdTuContent.TdTutorialFeedbackMessage.GetAnnouncementSound
// (Defined, Simulated, Static, Public)
// Parameters:
// class APlayerController*       LocalController                (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_3                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// class USoundNodeWave*          ReturnValue                    (Parm, OutParm, ReturnParm)

class USoundNodeWave* UTdTutorialFeedbackMessage::STATIC_GetAnnouncementSound(class APlayerController* LocalController, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTuContent.TdTutorialFeedbackMessage.GetAnnouncementSound");

	UTdTutorialFeedbackMessage_GetAnnouncementSound_Params params;
	params.LocalController = LocalController;
	params.Switch = Switch;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.RelatedPRI_3 = RelatedPRI_3;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TdTuContent.TdTutorialFeedbackMessage.ClientReceive
// (Defined, Simulated, Static, Public)
// Parameters:
// class APlayerController*       P                              (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  PitcherPRI                     (OptionalParm, Parm)
// class APlayerReplicationInfo*  RecieverPRI                    (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)

void UTdTutorialFeedbackMessage::STATIC_ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* PitcherPRI, class APlayerReplicationInfo* RecieverPRI, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTuContent.TdTutorialFeedbackMessage.ClientReceive");

	UTdTutorialFeedbackMessage_ClientReceive_Params params;
	params.P = P;
	params.Switch = Switch;
	params.PitcherPRI = PitcherPRI;
	params.RecieverPRI = RecieverPRI;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
