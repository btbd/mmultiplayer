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

// Class TdTTContent.TdTTVictoryMessage
// 0x004B (0x00A0 - 0x0055)
class UTdTTVictoryMessage : public UTdVictoryMessage
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FString                                     NewRecord[0x3];                                           // 0x0058(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     TryAgain[0x3];                                            // 0x007C(0x000C) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdTTContent.TdTTVictoryMessage");
		return ptr;
	}


	struct FString STATIC_GetString(int InSwitch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	void STATIC_ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* PitcherPRI, class APlayerReplicationInfo* RecieverPRI, class UObject* OptionalObject);
};


// Class TdTTContent.TdTTAnnouncer
// 0x0000 (0x01D0 - 0x01D0)
class ATdTTAnnouncer : public ATdAnnouncerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdTTContent.TdTTAnnouncer");
		return ptr;
	}

};


// Class TdTTContent.TdTimeTrialMessage
// 0x003B (0x0090 - 0x0055)
class UTdTimeTrialMessage : public UTdLocalMessage
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FString                                     RaceStarted;                                              // 0x0058(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     TWO;                                                      // 0x0064(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     ONE;                                                      // 0x0070(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     THREE;                                                    // 0x007C(0x000C) (Const, Localized, NeedCtorLink)
	class USoundNodeWave*                              VORaceStarted[0x2];                                       // 0x0088(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdTTContent.TdTimeTrialMessage");
		return ptr;
	}


	float STATIC_GetLifeTime(int Switch);
	struct FString STATIC_GetString(int InSwitch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	class USoundNodeWave* STATIC_GetAnnouncementSound(class APlayerController* LocalController, int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	void STATIC_ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* PitcherPRI, class APlayerReplicationInfo* RecieverPRI, class UObject* OptionalObject);
};


// Class TdTTContent.TdHUDContentTimeTrial
// 0x0000 (0x006C - 0x006C)
class UTdHUDContentTimeTrial : public UTdHUDContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdTTContent.TdHUDContentTimeTrial");
		return ptr;
	}

};


// Class TdTTContent.TdGhostPawn
// 0x0000 (0x0974 - 0x0974)
class ATdGhostPawn : public ATdGhostPawnBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdTTContent.TdGhostPawn");
		return ptr;
	}

};


// Class TdTTContent.TdTimeMessage
// 0x0017 (0x006C - 0x0055)
class UTdTimeMessage : public UTdLocalMessage
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FColor                                      RedColor;                                                 // 0x0058(0x0004)
	struct FColor                                      GreenColor;                                               // 0x005C(0x0004)
	class USoundNodeWave*                              TimeSound[0x3];                                           // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdTTContent.TdTimeMessage");
		return ptr;
	}


	struct FColor STATIC_GetColor(int Switch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	struct FString STATIC_GetString(int InSwitch, bool bPRI1HUD, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	class USoundNodeWave* STATIC_GetAnnouncementSound(class APlayerController* LocalController, int InSwitch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
	void STATIC_ClientReceive(class APlayerController* P, int Switch, class APlayerReplicationInfo* PitcherPRI, class APlayerReplicationInfo* RecieverPRI, class UObject* OptionalObject);
};


// Class TdTTContent.TdFinishlineTimeMessage
// 0x0000 (0x006C - 0x006C)
class UTdFinishlineTimeMessage : public UTdTimeMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdTTContent.TdFinishlineTimeMessage");
		return ptr;
	}


	class USoundNodeWave* STATIC_GetAnnouncementSound(class APlayerController* LocalController, int InSwitch, class APlayerReplicationInfo* RelatedPRI_2, class APlayerReplicationInfo* RelatedPRI_3, class UObject* OptionalObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
