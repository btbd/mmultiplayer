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

// Function TdTTContent.TdTTVictoryMessage.GetString
// (Defined, Static, Public)
// Parameters:
// int                            InSwitch                       (OptionalParm, Parm)
// bool                           bPRI1HUD                       (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_3                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTdTTVictoryMessage::STATIC_GetString(int InSwitch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTTContent.TdTTVictoryMessage.GetString");

	UTdTTVictoryMessage_GetString_Params params;
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


// Function TdTTContent.TdTTVictoryMessage.ClientReceive
// (Defined, Simulated, Static, Public)
// Parameters:
// class APlayerController*       P                              (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  PitcherPRI                     (OptionalParm, Parm)
// class APlayerReplicationInfo*  RecieverPRI                    (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)

void UTdTTVictoryMessage::STATIC_ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* PitcherPRI, class APlayerReplicationInfo* RecieverPRI, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTTContent.TdTTVictoryMessage.ClientReceive");

	UTdTTVictoryMessage_ClientReceive_Params params;
	params.P = P;
	params.Switch = Switch;
	params.PitcherPRI = PitcherPRI;
	params.RecieverPRI = RecieverPRI;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TdTTContent.TdTimeTrialMessage.GetLifeTime
// (Defined, Static, Public)
// Parameters:
// int                            Switch                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UTdTimeTrialMessage::STATIC_GetLifeTime(int Switch)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTTContent.TdTimeTrialMessage.GetLifeTime");

	UTdTimeTrialMessage_GetLifeTime_Params params;
	params.Switch = Switch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TdTTContent.TdTimeTrialMessage.GetString
// (Defined, Static, Public)
// Parameters:
// int                            InSwitch                       (OptionalParm, Parm)
// bool                           bPRI1HUD                       (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_3                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTdTimeTrialMessage::STATIC_GetString(int InSwitch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTTContent.TdTimeTrialMessage.GetString");

	UTdTimeTrialMessage_GetString_Params params;
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


// Function TdTTContent.TdTimeTrialMessage.GetAnnouncementSound
// (Defined, Simulated, Static, Public)
// Parameters:
// class APlayerController*       LocalController                (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_3                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// class USoundNodeWave*          ReturnValue                    (Parm, OutParm, ReturnParm)

class USoundNodeWave* UTdTimeTrialMessage::STATIC_GetAnnouncementSound(class APlayerController* LocalController, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTTContent.TdTimeTrialMessage.GetAnnouncementSound");

	UTdTimeTrialMessage_GetAnnouncementSound_Params params;
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


// Function TdTTContent.TdTimeTrialMessage.ClientReceive
// (Defined, Simulated, Static, Public)
// Parameters:
// class APlayerController*       P                              (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  PitcherPRI                     (OptionalParm, Parm)
// class APlayerReplicationInfo*  RecieverPRI                    (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)

void UTdTimeTrialMessage::STATIC_ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* PitcherPRI, class APlayerReplicationInfo* RecieverPRI, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTTContent.TdTimeTrialMessage.ClientReceive");

	UTdTimeTrialMessage_ClientReceive_Params params;
	params.P = P;
	params.Switch = Switch;
	params.PitcherPRI = PitcherPRI;
	params.RecieverPRI = RecieverPRI;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TdTTContent.TdTimeMessage.GetColor
// (Defined, Static, Public)
// Parameters:
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_3                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// struct FColor                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FColor UTdTimeMessage::STATIC_GetColor(int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTTContent.TdTimeMessage.GetColor");

	UTdTimeMessage_GetColor_Params params;
	params.Switch = Switch;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.RelatedPRI_3 = RelatedPRI_3;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TdTTContent.TdTimeMessage.GetString
// (Defined, Static, Public)
// Parameters:
// int                            InSwitch                       (OptionalParm, Parm)
// bool                           bPRI1HUD                       (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_3                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTdTimeMessage::STATIC_GetString(int InSwitch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTTContent.TdTimeMessage.GetString");

	UTdTimeMessage_GetString_Params params;
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


// Function TdTTContent.TdTimeMessage.GetAnnouncementSound
// (Defined, Simulated, Static, Public)
// Parameters:
// class APlayerController*       LocalController                (Parm)
// int                            InSwitch                       (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_3                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// class USoundNodeWave*          ReturnValue                    (Parm, OutParm, ReturnParm)

class USoundNodeWave* UTdTimeMessage::STATIC_GetAnnouncementSound(class APlayerController* LocalController, int InSwitch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTTContent.TdTimeMessage.GetAnnouncementSound");

	UTdTimeMessage_GetAnnouncementSound_Params params;
	params.LocalController = LocalController;
	params.InSwitch = InSwitch;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.RelatedPRI_3 = RelatedPRI_3;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TdTTContent.TdTimeMessage.ClientReceive
// (Defined, Simulated, Static, Public)
// Parameters:
// class APlayerController*       P                              (Parm)
// int                            Switch                         (OptionalParm, Parm)
// class APlayerReplicationInfo*  PitcherPRI                     (OptionalParm, Parm)
// class APlayerReplicationInfo*  RecieverPRI                    (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)

void UTdTimeMessage::STATIC_ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* PitcherPRI, class APlayerReplicationInfo* RecieverPRI, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTTContent.TdTimeMessage.ClientReceive");

	UTdTimeMessage_ClientReceive_Params params;
	params.P = P;
	params.Switch = Switch;
	params.PitcherPRI = PitcherPRI;
	params.RecieverPRI = RecieverPRI;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TdTTContent.TdFinishlineTimeMessage.GetAnnouncementSound
// (Defined, Simulated, Static, Public)
// Parameters:
// class APlayerController*       LocalController                (Parm)
// int                            InSwitch                       (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_2                   (OptionalParm, Parm)
// class APlayerReplicationInfo*  RelatedPRI_3                   (OptionalParm, Parm)
// class UObject*                 OptionalObject                 (OptionalParm, Parm)
// class USoundNodeWave*          ReturnValue                    (Parm, OutParm, ReturnParm)

class USoundNodeWave* UTdFinishlineTimeMessage::STATIC_GetAnnouncementSound(class APlayerController* LocalController, int InSwitch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TdTTContent.TdFinishlineTimeMessage.GetAnnouncementSound");

	UTdFinishlineTimeMessage_GetAnnouncementSound_Params params;
	params.LocalController = LocalController;
	params.InSwitch = InSwitch;
	params.RelatedPRI_2 = RelatedPRI_2;
	params.RelatedPRI_3 = RelatedPRI_3;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
