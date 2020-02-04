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

// Class IpDrv.HTTPDownload
// 0x00F0 (0x0B60 - 0x0A70)
class UHTTPDownload : public UDownload
{
public:
	struct FString                                     ProxyServerHost;                                          // 0x0A70(0x000C) (Config, NeedCtorLink)
	int                                                ProxyServerPort;                                          // 0x0A7C(0x0004) (Config)
	unsigned long                                      MaxRedirection : 1;                                       // 0x0A80(0x0004) (Config)
	float                                              ConnectionTimeout;                                        // 0x0A84(0x0004) (Config)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0A88(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.HTTPDownload");
		return ptr;
	}

};


// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0014 (0x00AC - 0x0098)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                              // 0x0098(0x0004) (Const, Native, Transient)
	int                                                MaxLocalTalkers;                                          // 0x009C(0x0004) (Config)
	int                                                MaxRemoteTalkers;                                         // 0x00A0(0x0004) (Config)
	unsigned long                                      bIsUsingSpeechRecognition : 1;                            // 0x00A4(0x0004) (Config)
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                                        // 0x00A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineSubsystemCommonImpl");
		return ptr;
	}


	struct FUniqueNetId GetPlayerUniqueNetIdFromIndex(int UserIndex);
	struct FString GetPlayerNicknameFromIndex(int UserIndex);
};


// Class IpDrv.OnlineGameInterfaceImpl
// 0x010C (0x0148 - 0x003C)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                          // 0x003C(0x0004)
	class UOnlineGameSettings*                         GameSettings;                                             // 0x0040(0x0004) (Const)
	class UOnlineGameSearch*                           GameSearch;                                               // 0x0044(0x0004) (Const)
	TEnumAsByte<EOnlineGameState>                      CurrentGameState;                                         // 0x0048(0x0001) (Const)
	TEnumAsByte<ELanBeaconState>                       LanBeaconState;                                           // 0x0049(0x0001) (Const)
	unsigned char                                      LanNonce[0x8];                                            // 0x004A(0x0001) (Const)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	TArray<struct FScriptDelegate>                     CreateOnlineGameCompleteDelegates;                        // 0x0054(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DestroyOnlineGameCompleteDelegates;                       // 0x0060(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinOnlineGameCompleteDelegates;                          // 0x006C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     StartOnlineGameCompleteDelegates;                         // 0x0078(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     EndOnlineGameCompleteDelegates;                           // 0x0084(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FindOnlineGamesCompleteDelegates;                         // 0x0090(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     CancelFindOnlineGamesCompleteDelegates;                   // 0x009C(0x000C) (NeedCtorLink)
	int                                                LanAnnouncePort;                                          // 0x00A8(0x0004) (Const, Config)
	int                                                LanGameUniqueId;                                          // 0x00AC(0x0004) (Const, Config)
	int                                                LanPacketPlatformMask;                                    // 0x00B0(0x0004) (Const, Config)
	float                                              LanQueryTimeLeft;                                         // 0x00B4(0x0004)
	float                                              LanQueryTimeout;                                          // 0x00B8(0x0004) (Config)
	struct FPointer                                    LanBeacon;                                                // 0x00BC(0x0004) (Const, Native, Transient)
	struct FPointer                                    SessionInfo;                                              // 0x00C0(0x0004) (Const, Native, Transient)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;                    // 0x00C4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;                   // 0x00D0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;                  // 0x00DC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;              // 0x00E8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;                     // 0x00F4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                     // 0x0100(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                   // 0x010C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;                    // 0x0118(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;                      // 0x0124(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;            // 0x0130(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                         // 0x013C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineGameInterfaceImpl");
		return ptr;
	}


	bool RecalculateSkillRating(TArray<struct FUniqueNetId>* Players);
	bool AcceptGameInvite(unsigned char LocalUserNum);
	void OnGameInviteAccepted(class UOnlineGameSettings* GameInviteSettings);
	void ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers();
	void ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void OnArbitrationRegistrationComplete(bool bWasSuccessful);
	bool RegisterForArbitration();
	void ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void OnEndOnlineGameComplete(bool bWasSuccessful);
	bool EndOnlineGame();
	void ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void OnStartOnlineGameComplete(bool bWasSuccessful);
	bool StartOnlineGame();
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(bool bWasSuccessful);
	bool UnregisterPlayer(const struct FUniqueNetId& PlayerId);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(bool bWasSuccessful);
	bool RegisterPlayer(const struct FUniqueNetId& PlayerId, bool bWasInvited);
	bool GetResolvedConnectString(struct FString* ConnectInfo);
	void ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void OnJoinOnlineGameComplete(bool bWasSuccessful);
	bool JoinOnlineGame(unsigned char PlayerNum, struct FOnlineGameSearchResult* DesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	void ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void OnCancelFindOnlineGamesComplete(bool bWasSuccessful);
	bool CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	void AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	bool FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings);
	void ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void OnDestroyOnlineGameComplete(bool bWasSuccessful);
	bool DestroyOnlineGame();
	bool UpdateOnlineGame(class UOnlineGameSettings* UpdatedGameSettings);
	void ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void OnCreateOnlineGameComplete(bool bWasSuccessful);
	bool CreateOnlineGame(unsigned char HostingPlayerNum, class UOnlineGameSettings* NewGameSettings);
	class UOnlineGameSearch* GetGameSearch();
	class UOnlineGameSettings* GetGameSettings();
	TEnumAsByte<EOnlineGameState> GetOnlineGameState();
	void OnFindOnlineGamesComplete(bool bWasSuccessful);
};


// Class IpDrv.TcpipConnection
// 0x001C (0x4FC4 - 0x4FA8)
class UTcpipConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x4FA8(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpipConnection");
		return ptr;
	}

};


// Class IpDrv.TcpNetDriver
// 0x001C (0x017C - 0x0160)
class UTcpNetDriver : public UNetDriver
{
public:
	unsigned long                                      AllowPlayerPortUnreach : 1;                               // 0x0160(0x0004) (Config)
	unsigned long                                      UnknownData00 : 31;                                       // 0x0160(0x0001)
	unsigned long                                      LogPortUnreach : 1;                                       // 0x0164(0x0004) (Config)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0168(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
