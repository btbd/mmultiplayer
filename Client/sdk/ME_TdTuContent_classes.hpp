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

// Class TdTuContent.TdTutorialMessage
// 0x000F (0x0064 - 0x0055)
class UTdTutorialMessage : public UTdLocalMessage
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	TArray<struct FString>                             MCDesc;                                                   // 0x0058(0x000C) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdTuContent.TdTutorialMessage");
		return ptr;
	}


	struct FString STATIC_GetString(int Switch, bool bPRI1HUD, class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Victim, class UObject* OptionalObject);
};


// Class TdTuContent.TdTutorialFeedbackMessage
// 0x0023 (0x0078 - 0x0055)
class UTdTutorialFeedbackMessage : public UTdLocalMessage
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FString                                     GoodWork;                                                 // 0x0058(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     TryAgain;                                                 // 0x0064(0x000C) (Const, Localized, NeedCtorLink)
	class USoundNodeWave*                              VOGoodWork;                                               // 0x0070(0x0004)
	class USoundNodeWave*                              VOTryAgain;                                               // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdTuContent.TdTutorialFeedbackMessage");
		return ptr;
	}


	struct FString STATIC_GetString(int InSwitch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	class USoundNodeWave* STATIC_GetAnnouncementSound(class APlayerController* LocalController, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	void STATIC_ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* PitcherPRI, class APlayerReplicationInfo* RecieverPRI, class UObject* OptionalObject);
};


// Class TdTuContent.TdHUDContentTutorial
// 0x0000 (0x006C - 0x006C)
class UTdHUDContentTutorial : public UTdHUDContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdTuContent.TdHUDContentTutorial");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
