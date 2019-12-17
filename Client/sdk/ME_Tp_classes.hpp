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

// Class Tp.TpSystemHandler
// 0x0004 (0x0040 - 0x003C)
class UTpSystemHandler : public UObject
{
public:
	class UTpSystemBase*                               SystemBase;                                               // 0x003C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpSystemHandler");
		return ptr;
	}


	void Finalize();
	void Initialize(class UTpSystemBase* InSystemBase);
	void FinalizeNative();
	void InitializeNative();
};


// Class Tp.TpAccount
// 0x0000 (0x0040 - 0x0040)
class UTpAccount : public UTpSystemHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpAccount");
		return ptr;
	}

};


// Class Tp.TpAchievementManager
// 0x0018 (0x0058 - 0x0040)
class UTpAchievementManager : public UTpSystemHandler
{
public:
	TArray<struct FAchBind>                            AchievementBindings;                                      // 0x0040(0x000C) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnGrantAward__Delegate;                                 // 0x004C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpAchievementManager");
		return ptr;
	}


	bool ShowXBOXAchievementsUI(unsigned char LocalUserNum);
	void OnGrantAward();
	void GrantAward(struct FAchBind* Award);
};


// Class Tp.TpAssociationManager
// 0x0030 (0x0070 - 0x0040)
class UTpAssociationManager : public UTpSystemHandler
{
public:
	struct FScriptDelegate                             __OnRemoveMember__Delegate;                               // 0x0040(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAddMember__Delegate;                                  // 0x004C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsListLoaded__Delegate;                          // 0x0058(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsListChange__Delegate;                          // 0x0064(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpAssociationManager");
		return ptr;
	}


	bool IsFriendsListLoaded();
	void OnFriendsListChange();
	void OnFriendsListLoaded(bool bInOk);
	void OnAddMember(bool bInOk);
	void OnRemoveMember(bool bInOk);
	TArray<struct FString> ListBlockedUsers();
	bool UnBlockUserAsync(const struct FUniqueNetId& UserRef);
	bool BlockUserAsync(const struct FUniqueNetId& UserRef);
	bool IsFriend(const struct FUniqueNetId& PlayerId);
	bool GetPlayersList(int Count, int StartingAt, TArray<struct FOnlinePlayer>* Players);
	bool GetMyFriendsListEx(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends);
	TArray<struct FString> GetMyFriendsList();
	bool RemoveFriendAsync(const struct FUniqueNetId& FormerFriend);
	void AddFriendAsync(const struct FUniqueNetId& NewFriend);
};


// Class Tp.TpConnection
// 0x00C8 (0x0108 - 0x0040)
class UTpConnection : public UTpSystemHandler
{
public:
	unsigned long                                      bLanGame : 1;                                             // 0x0040(0x0004) (Transient)
	unsigned char                                      ActiveControllerId;                                       // 0x0044(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FScriptDelegate                             __OnConnectionFailed__Delegate;                           // 0x0048(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionReady__Delegate;                            // 0x0054(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginReady__Delegate;                                 // 0x0060(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionChange__Delegate;                           // 0x006C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPartiallyLoggedIn__Delegate;                          // 0x0078(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginAccountError__Delegate;                          // 0x0084(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginPersonaError__Delegate;                          // 0x0090(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateAccountReady__Delegate;                         // 0x009C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateAccountError__Delegate;                         // 0x00A8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDisplayCountrySelect__Delegate;                       // 0x00B4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGetTOS__Delegate;                                     // 0x00C0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDisplayPersonas__Delegate;                            // 0x00CC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreatePersonaError__Delegate;                         // 0x00D8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDisconnect__Delegate;                                 // 0x00E4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDisplayConfirmMessage__Delegate;                      // 0x00F0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDisplayParentalEmail__Delegate;                       // 0x00FC(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpConnection");
		return ptr;
	}


	bool IsLoggedIn();
	bool IsConnected();
	bool IsLanGame();
	bool IsAuthenticated();
	void SetActiveControllerId(unsigned char LocalUserNum);
	void RepromptDisplay();
	void OnDisplayParentalEmail();
	void ConfirmParentalEmail(const struct FString& Email);
	void OnDisplayConfirmMessage(const struct FString& Message);
	void ConfirmMessage();
	void OnDisconnect();
	void DisconnectAsync();
	void OnCreatePersonaError(int ErrorCode);
	void CreatePersonaAsync(const struct FString& Persona);
	void OnDisplayPersonas(TArray<struct FString> Personas);
	void CreateAccountAcceptTOSAsync(bool Accept);
	void OnGetTOS(const struct FString& TOSText);
	void CreateAccountGetTOSAsync(const struct FString& ISOCode);
	void OnDisplayCountrySelect(TArray<struct FTpCreateAccountCountry> Countries);
	void OnCreateAccountError(TEnumAsByte<ETpAccountError> InError);
	void CreateAccountConsoleAsync(const struct FString& Email, const struct FString& Pass, bool bAllowEaEmail, bool bAllowThirdPartyEmail);
	bool CreateAccountAsync(const struct FTpCreateAccountParams& InParams);
	void OnCreateAccountReady(const struct FString& Email, const struct FString& Pass, bool bAllowEaEmail, bool bAllowTPEmail, bool bIsConsole);
	void PrepareCreateAccountAsync();
	void OnLoginPersonaError(int ErrorCode);
	void OnLoginAccountError(TEnumAsByte<ETpAccountError> InError);
	void OnPartiallyLoggedIn(TArray<struct FString> InSubNames);
	void LoginPersonaAsync(const struct FString& InName);
	void LoginEncAccountAsync(const struct FString& EncLogin);
	void LoginAccountAsync(const struct FString& InName, const struct FString& InPasswd);
	void OnConnectionChange(bool bConnected);
	void OnLoginReady();
	void OnConnectionReady(const struct FString& EncLogin, const struct FString& Persona);
	void OnConnectionFailed(TEnumAsByte<ETpConnectionError> InError);
	void ConnectSilentAsync(const struct FString& EncLogin, const struct FString& Persona);
	void ConnectAsync();
};


// Class Tp.TpConnectParams
// 0x0000 (0x003C - 0x003C)
class UTpConnectParams : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpConnectParams");
		return ptr;
	}


	void InitializeAuthentication(TEnumAsByte<ETpLoginMode> InLoginMode);
	struct FString GetUnauthenticatedPlayerName();
	void SetUnauthenticatedPlayerName(const struct FString& InName);
	TEnumAsByte<ETpConnectMode> GetConnectMode();
	void SetConnectMode(TEnumAsByte<ETpConnectMode> InMode);
	struct FPointer GetOpaqueFeslPointer();
};


// Class Tp.TpCreateGameParams
// 0x0000 (0x003C - 0x003C)
class UTpCreateGameParams : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpCreateGameParams");
		return ptr;
	}


	void SetHostMigrationEnabled(bool bInEnabled);
	void SetInviteStatus(TEnumAsByte<ETpInviteStatus> InStatus);
	void SetJoinViaPresenceEnabled(bool bInEnabled);
	void SetJoinInProgressEnabled(bool bInEnabled);
	void SetRanked(bool bInRanked);
	void SetPasswordUsed(bool bInUsed);
	void SetPlayerTypeCapacity(TEnumAsByte<ETpPlayerType> InType, int InCapacity);
	void SetGameName(const struct FString& InName);
	struct FPointer GetOpaqueFeslPointer();
};


// Class Tp.TpFileLockerService
// 0x0030 (0x0070 - 0x0040)
class UTpFileLockerService : public UTpSystemHandler
{
public:
	struct FScriptDelegate                             __OnFetchLockerComplete__Delegate;                        // 0x0040(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadFileFromLockerComplete__Delegate;                 // 0x004C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWriteFileToLockerComplete__Delegate;                  // 0x0058(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteFileFromLockerComplete__Delegate;               // 0x0064(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpFileLockerService");
		return ptr;
	}


	TArray<struct FOnlineFileLockerFileInfo> ListFileLocker();
	void OnDeleteFileFromLockerComplete(bool bWasSuccessful);
	bool DeleteFileFromLocker(struct FOnlineFileLockerFile* FileInfo);
	void OnWriteFileToLockerComplete(bool bWasSuccessful);
	bool WriteFileToLocker(struct FOnlineFileLockerFile* File);
	void OnReadFileFromLockerComplete(bool bWasSuccessful);
	bool ReadFileFromLocker(struct FOnlineFileLockerFile* File);
	void OnFetchLockerComplete(bool bWasSuccessful);
	bool FetchLocker(const struct FString& UserName);
	void Update(float DeltaSeconds);
};


// Class Tp.TpDirtySockFileLockerService
// 0x0114 (0x0184 - 0x0070)
class UTpDirtySockFileLockerService : public UTpFileLockerService
{
public:
	unsigned char                                      UnknownData00[0x114];                                     // 0x0070(0x0114) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpDirtySockFileLockerService");
		return ptr;
	}

};


// Class Tp.TpProtoHTTP
// 0x000C (0x004C - 0x0040)
class UTpProtoHTTP : public UTpSystemHandler
{
public:
	struct FScriptDelegate                             __OnGetVersion__Delegate;                                 // 0x0040(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpProtoHTTP");
		return ptr;
	}


	void OnGetVersion(const struct FString& Version);
	void GetCurrentVersion(const struct FString& Param);
	void Update(float DeltaSeconds);
};


// Class Tp.TpDirtySockProtoHTTP
// 0x1014 (0x1060 - 0x004C)
class UTpDirtySockProtoHTTP : public UTpProtoHTTP
{
public:
	unsigned char                                      UnknownData00[0x1014];                                    // 0x004C(0x1014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpDirtySockProtoHTTP");
		return ptr;
	}

};


// Class Tp.TpFeslAccount
// 0x0000 (0x0040 - 0x0040)
class UTpFeslAccount : public UTpAccount
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpFeslAccount");
		return ptr;
	}

};


// Class Tp.TpFeslAchievementManager
// 0x0004 (0x005C - 0x0058)
class UTpFeslAchievementManager : public UTpAchievementManager
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpFeslAchievementManager");
		return ptr;
	}

};


// Class Tp.TpFeslAssociationManager
// 0x0004 (0x0074 - 0x0070)
class UTpFeslAssociationManager : public UTpAssociationManager
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0070(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpFeslAssociationManager");
		return ptr;
	}

};


// Class Tp.TpFeslConnection
// 0x0770 (0x0878 - 0x0108)
class UTpFeslConnection : public UTpConnection
{
public:
	unsigned char                                      UnknownData00[0x770];                                     // 0x0108(0x0770) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpFeslConnection");
		return ptr;
	}

};


// Class Tp.TpGameBrowser
// 0x0044 (0x0084 - 0x0040)
class UTpGameBrowser : public UTpSystemHandler
{
public:
	struct FTpPlayNowCreateGameInfo                    PlayNowCreateGameInfo;                                    // 0x0040(0x0008) (Transient)
	struct FTpPlayNowJoinGameInfo                      PlayNowJoinGameInfo;                                      // 0x0048(0x000C) (Transient)
	struct FScriptDelegate                             __OnUpdateLobbyList__Delegate;                            // 0x0054(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateGameList__Delegate;                             // 0x0060(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayNowStarted__Delegate;                             // 0x006C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayNowMatched__Delegate;                             // 0x0078(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpGameBrowser");
		return ptr;
	}


	struct FTpPlayNowJoinGameInfo GetPlayNowJoinGameInfo();
	struct FTpPlayNowCreateGameInfo GetPlayNowCreateGameInfo();
	struct FTpGameRef GetGameByIndex(const struct FTpLobbyRef& InLobby, int InIndex);
	void DropGameList(const struct FTpLobbyRef& InLobby);
	void FindGameAsync(const struct FTpPlayNowParams& Params);
	void OnPlayNowMatched(bool bIsServer, int InError);
	void OnPlayNowStarted();
	void StartQuickMatchAsync(const struct FTpPlayNowParams& Params);
	void OnUpdateGameList(bool bInOk);
	void UpdateGameListAsync(const struct FTpLobbyRef& InLobby, struct FTpGameListParams* InParams, struct FTpGameListFavourites* InFavourites);
	struct FTpLobbyRef GetLobbyByIndex(int InIndex);
	void DropLobbyList();
	void OnUpdateLobbyList(bool bInOk);
	void UpdateLobbyListAsync(struct FTpLobbyListParams* InParams, struct FTpLobbyListFavourites* InFavourites);
};


// Class Tp.TpFeslGameBrowser
// 0x002C (0x00B0 - 0x0084)
class UTpFeslGameBrowser : public UTpGameBrowser
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0084(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpFeslGameBrowser");
		return ptr;
	}

};


// Class Tp.TpGameManager
// 0x0054 (0x0094 - 0x0040)
class UTpGameManager : public UTpSystemHandler
{
public:
	TArray<class UNetDriver*>                          DriverArray;                                              // 0x0040(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateGame__Delegate;                                 // 0x004C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyGame__Delegate;                                // 0x0058(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStartGame__Delegate;                                  // 0x0064(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnEndGame__Delegate;                                    // 0x0070(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinGame__Delegate;                                   // 0x007C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLeaveGame__Delegate;                                  // 0x0088(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpGameManager");
		return ptr;
	}


	void DisarmConnectionPlayerControllers();
	struct FString GetGameHostIp();
	void OnLeaveGame();
	void LeaveGameAsync();
	void OnJoinGame(bool bInOk, const struct FString& hostIp);
	void JoinPlayNowGameAsync(const struct FTpPlayNowJoinGameInfo& Info);
	void JoinGameAsync(const struct FTpLobbyRef& InLobby, const struct FTpGameRef& InGame);
	void OnEndGame(bool bInOk);
	void EndGameAsync();
	void OnStartGame(bool bInOk);
	void StartGameAsync();
	void OnDestroyGame(bool bInOk);
	void DestroyGameAsync();
	void OnCreateGame(bool bInOk);
	void CreatePlayNowGameAsync(const struct FTpPlayNowCreateGameInfo& Info);
	void CreateGameAsync(class UTpCreateGameParams* InParams);
	class UTpCreateGameParams* NewCreateGameParams();
};


// Class Tp.TpFeslGameManager
// 0x003C (0x00D0 - 0x0094)
class UTpFeslGameManager : public UTpGameManager
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0094(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpFeslGameManager");
		return ptr;
	}

};


// Class Tp.TpMessageService
// 0x0060 (0x00A0 - 0x0040)
class UTpMessageService : public UTpSystemHandler
{
public:
	struct FScriptDelegate                             __OnCheckInbox__Delegate;                                 // 0x0040(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendRequestSent__Delegate;                          // 0x004C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnNewMessage__Delegate;                                 // 0x0058(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendRequestDelegate__Delegate;                      // 0x0064(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSendMessage__Delegate;                                // 0x0070(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRemoveMessage__Delegate;                              // 0x007C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnInviteToPlayGroupSent__Delegate;                      // 0x0088(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnInviteToPlayGroupReceived__Delegate;                  // 0x0094(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpMessageService");
		return ptr;
	}


	bool InviteToPlayGroupResponse(const struct FUniqueNetId& RequestingPlayer);
	void OnInviteToPlayGroupReceived(const struct FUniqueNetId& RequestingPlayer);
	void OnInviteToPlayGroupSent(bool bWasSuccessful);
	bool PlayGroupInviteAsync(const struct FUniqueNetId& User);
	void OnRemoveMessage(bool bInOk);
	bool RemoveMessage(int MessageIndex);
	void GetFriendMessages(TArray<struct FOnlineFriendMessage>* FriendMessages);
	void OnSendMessage(bool bInOk);
	bool SendMessageAsync(const struct FUniqueNetId& PlayerId, const struct FString& Message);
	void OnFriendRequestDelegate(const struct FUniqueNetId& Sender, const struct FString& Message);
	void OnNewMessage(const struct FUniqueNetId& Sender, const struct FString& Message);
	void OnFriendRequestSent(bool bInOk);
	bool FriendResponse(const struct FUniqueNetId& NewFriend);
	bool FriendRequestAsync(const struct FUniqueNetId& NewFriend, const struct FString& Message);
	void OnCheckInbox();
	bool CheckInboxAsync();
	void Update(float DeltaSeconds);
};


// Class Tp.TpFeslMessageService
// 0x0014 (0x00B4 - 0x00A0)
class UTpFeslMessageService : public UTpMessageService
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00A0(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpFeslMessageService");
		return ptr;
	}

};


// Class Tp.TpPlayGroupManager
// 0x0090 (0x00D0 - 0x0040)
class UTpPlayGroupManager : public UTpSystemHandler
{
public:
	struct FScriptDelegate                             __OnPlayGroupCreated__Delegate;                           // 0x0040(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupJoined__Delegate;                            // 0x004C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupMemberJoin__Delegate;                        // 0x0058(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupChatMessageReceived__Delegate;               // 0x0064(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupDestroyed__Delegate;                         // 0x0070(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupKicked__Delegate;                            // 0x007C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLeavePlayGroupComplete__Delegate;                     // 0x0088(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupMemberLeave__Delegate;                       // 0x0094(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupOwnerTransitionStart__Delegate;              // 0x00A0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupOwnerTransitionFinish__Delegate;             // 0x00AC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupGameJoined__Delegate;                        // 0x00B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupGameLeave__Delegate;                         // 0x00C4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpPlayGroupManager");
		return ptr;
	}


	void OnPlayGroupGameLeave();
	void OnPlayGroupGameJoined(const struct FTpLobbyRef& InLobby, const struct FTpGameRef& InGame);
	void OnPlayGroupOwnerTransitionFinish();
	void OnPlayGroupOwnerTransitionStart();
	void TransferOwnerShipAsync(const struct FUniqueNetId& NewOwnerId);
	void OnPlayGroupMemberLeave(const struct FUniqueNetId& UserId, TEnumAsByte<EPlayGroupLeaveReason> Reason);
	void OnLeavePlayGroupComplete();
	void LeavePlayGroupAsync();
	void OnPlayGroupKicked();
	void KickMemberAsync(const struct FUniqueNetId& UserId);
	void OnPlayGroupDestroyed();
	void DestroyPlayGroupAsync();
	void OnPlayGroupChatMessageReceived(const struct FUniqueNetId& SenderId, const struct FString& Message);
	void BroadCastChatMessageAsync(const struct FString& Message);
	void OnPlayGroupMemberJoin(const struct FUniqueNetId& UserId);
	void OnPlayGroupJoined(bool bInOk);
	void JoinPlayGroupAsync(const struct FUniqueNetId& UserId);
	void OnPlayGroupCreated(bool bInOk);
	void CreatePlayGroupAsync(const struct FPlayGroupCreateParams& Params);
	TArray<struct FPlayGroupListEntry> GetMyPlayGroupList();
	bool IsPlayGroupOwner();
	bool IsInPlayGroup();
};


// Class Tp.TpFeslPlayGroupManager
// 0x0004 (0x00D4 - 0x00D0)
class UTpFeslPlayGroupManager : public UTpPlayGroupManager
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpFeslPlayGroupManager");
		return ptr;
	}

};


// Class Tp.TpSystemBase
// 0x0038 (0x00D0 - 0x0098)
class UTpSystemBase : public UOnlineSubsystem
{
public:
	class UTpDebugger*                                 __Debugger;                                               // 0x0098(0x0004) (Transient)
	struct FTpSystemInitializer                        Initializer;                                              // 0x009C(0x0004)
	unsigned long                                      UseMultiplayer : 1;                                       // 0x00A0(0x0004) (Const, Transient)
	unsigned long                                      TdSROM6 : 1;                                              // 0x00A0(0x0004) (Transient)
	struct FTpErrorInfo                                LatestOnlineError;                                        // 0x00A4(0x0014) (NeedCtorLink)
	class UTpOnScreenErrorHandler*                     ErrorHandler;                                             // 0x00B8(0x0004)
	TArray<struct FTpNpEvent>                          EventQueue;                                               // 0x00BC(0x000C) (NeedCtorLink)
	int                                                TrophyContext;                                            // 0x00C8(0x0004) (Native, Transient)
	int                                                TrophyHandle;                                             // 0x00CC(0x0004) (Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpSystemBase");
		return ptr;
	}


	void SetOnScreenHandler(class UTpOnScreenErrorHandler* Handler);
	struct FTpErrorInfo GetLatestError();
	void RegisterLatestError(const struct FTpErrorInfo& LatestError);
	void ImpelGameJoined();
	void ImpelGameDestroyed();
	void ImpelGameCreated();
	void ImpelDisconnected();
	void ImpelConnected();
	class UTpProtoHTTP* GetProtoHTTP();
	class UTpFileLockerService* GetFileLockerService();
	class UTpAchievementManager* GetAchievementManager();
	class UTpMessageService* GetMessageService();
	class UTpGameManager* GetGameManager();
	class UTpGameBrowser* GetGameBrowser();
	class UTpConnection* GetConnection();
	class UTpUserManager* GetUserManager();
	class UTpPresenceManager* GetPresenceManager();
	class UTpRankingService* GetRankingService();
	class UTpPlayGroupManager* GetPlayGroupManager();
	class UTpAssociationManager* GetAssociationManager();
	void ProcessTick(float DeltaSeconds);
	void NpEventLoopControl(int Op);
	void End();
	void Initialize(const struct FTpInitializeParams& InParams);
	class UTpSystemBase* STATIC_Get();
};


// Class Tp.TpPresenceManager
// 0x0018 (0x0058 - 0x0040)
class UTpPresenceManager : public UTpSystemHandler
{
public:
	TArray<struct FPresBind>                           PresenceBindings;                                         // 0x0040(0x000C) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnPresenceUpdated__Delegate;                            // 0x004C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpPresenceManager");
		return ptr;
	}


	void OnPresenceUpdated();
	void SetPresence(unsigned char LocalUserNum, int StatusId, int ContextId, int ContextValue);
	struct FTpPresence GetLocalPresence();
	struct FTpPresence GetPresence(const struct FUniqueNetId& User);
};


// Class Tp.TpFeslPresenceManager
// 0x0004 (0x005C - 0x0058)
class UTpFeslPresenceManager : public UTpPresenceManager
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpFeslPresenceManager");
		return ptr;
	}

};


// Class Tp.TpRankingService
// 0x0020 (0x0060 - 0x0040)
class UTpRankingService : public UTpSystemHandler
{
public:
	int                                                Rank_Unranked;                                            // 0x0040(0x0004) (Const, Transient, Config)
	int                                                Rank_Max;                                                 // 0x0044(0x0004) (Const, Transient, Config)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;                    // 0x0048(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;                   // 0x0054(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpRankingService");
		return ptr;
	}


	void OnFlushOnlineStatsComplete(bool bWasSuccessful);
	bool FlushOnlineStats();
	bool WriteOnlineStats(const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite);
	bool WriteOnlinePlayerScores(TArray<struct FOnlinePlayerScore>* PlayerScores);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(class UOnlineStatsRead* StatsRead, int NumRows);
	bool ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	bool ReadOnlineStatsForFriends(class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players);
	void Initialize(class UTpSystemBase* InSystemBase);
};


// Class Tp.TpFeslRankingService
// 0x003C (0x009C - 0x0060)
class UTpFeslRankingService : public UTpRankingService
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0060(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpFeslRankingService");
		return ptr;
	}

};


// Class Tp.TpUserManager
// 0x001C (0x005C - 0x0040)
class UTpUserManager : public UTpSystemHandler
{
public:
	unsigned long                                      bCancelGamerCard : 1;                                     // 0x0040(0x0004) (Transient)
	struct FScriptDelegate                             __OnGetPlayerId__Delegate;                                // 0x0044(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnShowGamerCardUI__Delegate;                            // 0x0050(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpUserManager");
		return ptr;
	}


	bool ShowSendMessageUI(const struct FUniqueNetId& Recipient, bool bIsFriendRequest);
	void CancelShowGamerCardUI();
	void OnShowGamerCardUI(bool bInOk);
	bool ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerId);
	void OnGetPlayerId(const struct FUniqueNetId& PlayerId, bool bInOk);
	bool LookupPlayerId(const struct FString& UserName);
	struct FString GetUsername(const struct FUniqueNetId& PlayerId);
	struct FUniqueNetId GetPlayerId(const struct FString& UserName);
	struct FString GetLocalUsername(unsigned char LocalUserNum);
	struct FUniqueNetId GetLocalPlayerId();
};


// Class Tp.TpFeslUserManager
// 0x0008 (0x0064 - 0x005C)
class UTpFeslUserManager : public UTpUserManager
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x005C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpFeslUserManager");
		return ptr;
	}

};


// Class Tp.TpUnConnection
// 0x0004 (0x4FAC - 0x4FA8)
class UTpUnConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x4FA8(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpUnConnection");
		return ptr;
	}

};


// Class Tp.TpUnDriver
// 0x000C (0x016C - 0x0160)
class UTpUnDriver : public UNetDriver
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0160(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpUnDriver");
		return ptr;
	}

};


// Class Tp.TpDebugger
// 0x0004 (0x0040 - 0x003C)
class UTpDebugger : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpDebugger");
		return ptr;
	}


	void OnDestroyGame(bool bOk);
	void DestroyGame(class UOnlineSubsystem* InSys);
	void OnCreateGame(bool bOk);
	void CreateGame(class UOnlineSubsystem* InSys, const struct FString& InName, bool bInIsLan);
	void OnCreateAccount(bool bOk);
	void CreateAccount(class UOnlineSubsystem* InSys, const struct FString& InName, const struct FString& InPassword, const struct FString& InEmail);
	void OnLogout(bool bOk);
	void Logout(class UOnlineSubsystem* InSys);
	void OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode);
	void OnLoginChange();
	void Login(class UOnlineSubsystem* InSys, const struct FString& InName, const struct FString& InPasswd);
	void STATIC_Log(const struct FString& Str);
	void STATIC_StateFaulted(class UObject* InObject, const struct FString& InWhere);
	void STATIC_StateChanged(class UObject* InObject);
	void STATIC_Register(class UObject* InObject);
};


// Class Tp.TpUoPlayer
// 0x01B4 (0x01F4 - 0x0040)
class UTpUoPlayer : public UTpSystemHandler
{
public:
	struct FString                                     ProfileDataDirectory;                                     // 0x0040(0x000C) (NeedCtorLink)
	struct FString                                     ProfileDataExtension;                                     // 0x004C(0x000C) (NeedCtorLink)
	struct FString                                     StoredMessage;                                            // 0x0058(0x000C) (NeedCtorLink)
	struct FString                                     OSKeyboardResult;                                         // 0x0064(0x000C) (NeedCtorLink)
	unsigned char                                      OnLoginChangeControllerId;                                // 0x0070(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	TArray<struct FScriptDelegate>                     __OnLoginChange__Multicaster;                             // 0x0074(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnLoginCancelled__Multicaster;                          // 0x0080(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnMutingChange__Multicaster;                            // 0x008C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnFriendsChange__Multicaster;                           // 0x0098(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnLoginFailed__Multicaster;                             // 0x00A4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnLogoutCompleted__Multicaster;                         // 0x00B0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnReadProfileSettingsComplete__Multicaster;             // 0x00BC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnWriteProfileSettingsComplete__Multicaster;            // 0x00C8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnReadFriendsComplete__Multicaster;                     // 0x00D4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnAddFriendByNameComplete__Multicaster;                 // 0x00E0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnFriendInviteReceived__Multicaster;                    // 0x00EC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnFriendMessageReceived__Multicaster;                   // 0x00F8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnReadPlayersComplete__Multicaster;                     // 0x0104(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnKeyboardInputComplete__Multicaster;                   // 0x0110(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnSendMessageByUsername__Multicaster;                   // 0x011C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                                // 0x0128(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                             // 0x0134(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                               // 0x0140(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                              // 0x014C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                                // 0x0158(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                            // 0x0164(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;                // 0x0170(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;               // 0x017C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                        // 0x0188(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;                      // 0x0194(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;                    // 0x01A0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;                       // 0x01AC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSendMessageByUsername__Delegate;                      // 0x01B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                         // 0x01C4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;                     // 0x01D0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;                      // 0x01DC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayersComplete__Delegate;                        // 0x01E8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpUoPlayer");
		return ptr;
	}


	void SetActiveControllerIdNative(unsigned char LocalUserNum);
	bool IsSignedIn(unsigned char LocalUserNum);
	void ProcessTick(float DeltaSeconds);
	void SetActiveControllerId(unsigned char LocalUserNum);
	TEnumAsByte<EOnlineEnumerationReadState> GetPlayersList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlinePlayer>* Players);
	void ClearReadPlayersCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayersCompleteDelegate);
	void SetReadPlayersCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayersCompleteDelegate);
	void OnReadPlayersComplete_Remove(const struct FScriptDelegate& D);
	void OnReadPlayersComplete_Add(const struct FScriptDelegate& D);
	void OnReadPlayersComplete_Invoke();
	void OnReadPlayersComplete();
	bool ReadPlayersList(unsigned char LocalUserNum, int Count, int StartingAt);
	bool DeleteMessage(unsigned char LocalUserNum, int MessageIndex);
	void OnNewMessage(const struct FUniqueNetId& PlayerId, const struct FString& Message);
	void ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void OnFriendMessageReceived_Remove(const struct FScriptDelegate& D);
	void OnFriendMessageReceived_Add(const struct FScriptDelegate& D);
	void OnFriendMessageReceived_Invoke(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message);
	void OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message);
	void GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages);
	void ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(bool bWasSuccessful);
	bool JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend);
	void ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName);
	bool SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, const struct FString& Text);
	bool SendGameInviteToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Text);
	void ClearSendMessageByUsernameDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& SendMessageDelegate);
	void AddSendMessageByUsernameDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& SendMessageDelegate);
	void OnSendMessageByUsername_Remove(const struct FScriptDelegate& D);
	void OnSendMessageByUsername_Add(const struct FScriptDelegate& D);
	void OnSendMessageByUsername_Invoke(bool bSuccess);
	void OnSendMessageByUsername(bool bSuccess);
	void OnSendMessageByUsernameDone(bool bInOk);
	void SendMessageByUsernameStepTwo(const struct FUniqueNetId& PlayerId, bool bInOk);
	void SendMessageByUsername(unsigned char LocalUserNum, const struct FString& UserName, const struct FString& Message);
	bool SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message);
	void OnFriendRequestDelegate(const struct FUniqueNetId& RequestingPlayer, const struct FString& Message);
	void ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void OnFriendInviteReceived_Remove(const struct FScriptDelegate& D);
	void OnFriendInviteReceived_Add(const struct FScriptDelegate& D);
	void OnFriendInviteReceived_Invoke(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message);
	void OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message);
	bool RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend);
	bool DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	bool AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	void ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnAddFriendByNameComplete_Remove(const struct FScriptDelegate& D);
	void OnAddFriendByNameComplete_Add(const struct FScriptDelegate& D);
	void OnAddFriendByNameComplete_Invoke(bool bWasSuccessful);
	void OnAddFriendByNameComplete(bool bWasSuccessful);
	void OnAddFriend(bool bWasSuccessful);
	void OnLookupPlayerIdForAddFriend(const struct FUniqueNetId& UserId, bool bSuccess);
	bool AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message);
	bool AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message);
	void SetKeyboardInputResults(const struct FString& Value);
	struct FString GetKeyboardInputResults(unsigned char* bWasCanceled);
	void ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void OnKeyboardInputComplete_Remove(const struct FScriptDelegate& D);
	void OnKeyboardInputComplete_Add(const struct FScriptDelegate& D);
	void OnKeyboardInputComplete_Invoke(bool bWasSuccessful);
	void OnKeyboardInputComplete(bool bWasSuccessful);
	bool ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	void SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, TArray<struct FSettingsProperty>* Properties);
	TEnumAsByte<EOnlineEnumerationReadState> GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends);
	void ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void OnFriendsListLoaded(bool bInOk);
	void OnReadFriendsComplete_Remove(const struct FScriptDelegate& D);
	void OnReadFriendsComplete_Add(const struct FScriptDelegate& D);
	void OnReadFriendsComplete_Invoke(bool bWasSuccessful);
	void OnReadFriendsComplete(bool bWasSuccessful);
	bool ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt);
	void ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void SaveSystemWriteProfileComplete(TEnumAsByte<ETsResult> Result);
	bool WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void OnWriteProfileSettingsComplete_Remove(const struct FScriptDelegate& D);
	void OnWriteProfileSettingsComplete_Add(const struct FScriptDelegate& D);
	void OnWriteProfileSettingsComplete_Invoke(bool bWasSuccessful);
	void OnWriteProfileSettingsComplete(bool bWasSuccessful);
	class UOnlineProfileSettings* GetProfileSettings(unsigned char LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void SaveSystemReadProfileComplete(TEnumAsByte<ETsResult> Result);
	bool ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void OnReadProfileSettingsComplete_Remove(const struct FScriptDelegate& D);
	void OnReadProfileSettingsComplete_Add(const struct FScriptDelegate& D);
	void OnReadProfileSettingsComplete_Invoke(bool bWasSuccessful);
	void OnReadProfileSettingsComplete(bool bWasSuccessful);
	void ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void OnFriendsChangeDelegate();
	void OnPresenceChangeDelegate();
	void ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate, unsigned char LocalUserNum);
	void AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate, unsigned char LocalUserNum);
	bool ShowFriendsUI(unsigned char LocalUserNum);
	bool IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerId);
	bool AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query);
	bool IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerId);
	TEnumAsByte<EFeaturePrivilegeLevel> CanShowPresenceInformation(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanViewPlayerProfiles(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanPurchaseContent(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanDownloadUserContent(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanCommunicate(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanPlayOnline(unsigned char LocalUserNum);
	struct FString GetPlayerNickname(unsigned char LocalUserNum);
	bool GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerId);
	TEnumAsByte<ELoginStatus> GetLoginStatus(unsigned char LocalUserNum);
	void ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void OnLogoutCompleted_Remove(const struct FScriptDelegate& D);
	void OnLogoutCompleted_Add(const struct FScriptDelegate& D);
	void OnLogoutCompleted_Invoke(bool bWasSuccessful);
	void OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(unsigned char LocalUserNum);
	void ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginDelegate);
	void AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginDelegate);
	void OnLoginFailed_Remove(const struct FScriptDelegate& D);
	void OnLoginFailed_Add(const struct FScriptDelegate& D);
	void OnLoginFailed_Invoke(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode);
	void OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode);
	bool AutoLogin();
	bool Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly);
	bool ShowLoginUI(bool bShowOnlineOnly);
	void OnFriendsChange_Remove(const struct FScriptDelegate& D);
	void OnFriendsChange_Add(const struct FScriptDelegate& D);
	void OnFriendsChange_Invoke();
	void OnFriendsChange();
	void OnMutingChange_Remove(const struct FScriptDelegate& D);
	void OnMutingChange_Add(const struct FScriptDelegate& D);
	void OnMutingChange_Invoke();
	void OnMutingChange();
	void OnLoginCancelled_Remove(const struct FScriptDelegate& D);
	void OnLoginCancelled_Add(const struct FScriptDelegate& D);
	void OnLoginCancelled_Invoke();
	void OnLoginCancelled();
	void OnLoginChange_Remove(const struct FScriptDelegate& D);
	void OnLoginChange_Add(const struct FScriptDelegate& D);
	void OnLoginChange_Invoke();
	void OnLoginChange();
	void InitializeNative();
	void Initialize(class UTpSystemBase* InSystemBase);
};


// Class Tp.TpUoPlayerEx
// 0x003C (0x007C - 0x0040)
class UTpUoPlayerEx : public UTpSystemHandler
{
public:
	TArray<struct FScriptDelegate>                     __OnShowGamerCardResult__Multicaster;                     // 0x0040(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnShowGamerCardResult__Delegate;                        // 0x004C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;                    // 0x0058(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;                  // 0x0064(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                         // 0x0070(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpUoPlayerEx");
		return ptr;
	}


	bool ShowSendMessageUI(const struct FUniqueNetId& PlayerId, bool bIsFriendRequest);
	bool ShowPlayersUI(unsigned char LocalUserNum);
	bool ShowFriendsInviteUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerId);
	void ClearProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(unsigned char LocalUserNum, int PictureId);
	void OnUnlockAchievementComplete(bool bWasSuccessful);
	void ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	bool UnlockAchievement(unsigned char LocalUserNum, int AchievementId);
	bool IsDeviceValid(int DeviceID);
	void OnDeviceSelectionComplete(bool bWasSuccessful);
	int GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName);
	void ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	bool ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, bool bForceShowUI);
	bool ShowMembershipMarketplaceUI(unsigned char LocalUserNum);
	bool ShowContentMarketplaceUI(unsigned char LocalUserNum);
	bool ShowInviteUI(unsigned char LocalUserNum, const struct FString& InviteText);
	bool ShowAchievementsUI(unsigned char LocalUserNum);
	bool ShowMessagesUI(unsigned char LocalUserNum);
	void CancelShowGamerCardUI();
	void OnShowGamerCardUI(bool bWasSuccessful);
	void ClearShowGamerCardResultDelegate(const struct FScriptDelegate& GamerCardDelegate);
	void AddShowGamerCardResultDelegate(const struct FScriptDelegate& GamerCardDelegate);
	void OnShowGamerCardResult_Remove(const struct FScriptDelegate& D);
	void OnShowGamerCardResult_Add(const struct FScriptDelegate& D);
	void OnShowGamerCardResult_Invoke(bool bWasSuccessful);
	void OnShowGamerCardResult(bool bWasSuccessful);
	bool ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerId);
	bool ShowFeedbackUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerId);
	void Initialize(class UTpSystemBase* InSystemBase);
};


// Class Tp.TpUoSystem
// 0x007C (0x00BC - 0x0040)
class UTpUoSystem : public UTpSystemHandler
{
public:
	TArray<struct FScriptDelegate>                     __OnControllerChange__Multicaster;                        // 0x0040(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnStorageDeviceChange__Multicaster;                     // 0x004C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnLinkStatusChange__Multicaster;                        // 0x0058(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnConnectionStatusChange__Multicaster;                  // 0x0064(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnExternalUIChange__Multicaster;                        // 0x0070(0x000C) (NeedCtorLink)
	int                                                LastInputDeviceConnectedMask;                             // 0x007C(0x0004)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                           // 0x0080(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                           // 0x008C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                           // 0x0098(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;                     // 0x00A4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                        // 0x00B0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpUoSystem");
		return ptr;
	}


	void ProcessTick(float DeltaSeconds);
	void ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void OnStorageDeviceChange_Remove(const struct FScriptDelegate& D);
	void OnStorageDeviceChange_Add(const struct FScriptDelegate& D);
	void OnStorageDeviceChange_Invoke();
	void OnStorageDeviceChange();
	TEnumAsByte<ENATType> GetNATType();
	void ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void OnConnectionChange(bool bConnected);
	void OnConnectionStatusChange_Remove(const struct FScriptDelegate& D);
	void OnConnectionStatusChange_Add(const struct FScriptDelegate& D);
	void OnConnectionStatusChange_Invoke(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	void OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	bool IsControllerConnected(int ControllerId);
	void ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void OnControllerChange_Remove(const struct FScriptDelegate& D);
	void OnControllerChange_Add(const struct FScriptDelegate& D);
	void OnControllerChange_Invoke(int ControllerId, bool bIsConnected);
	void OnControllerChange(int ControllerId, bool bIsConnected);
	void SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos);
	TEnumAsByte<ENetworkNotificationPosition> GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void DispatchExternalUIChange(bool bIsOpening);
	void OnExternalUIChange_Remove(const struct FScriptDelegate& D);
	void OnExternalUIChange_Add(const struct FScriptDelegate& D);
	void OnExternalUIChange_Invoke(bool bIsOpening);
	void OnExternalUIChange(bool bIsOpening);
	void ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void OnLinkStatusChange_Remove(const struct FScriptDelegate& D);
	void OnLinkStatusChange_Add(const struct FScriptDelegate& D);
	void OnLinkStatusChange_Invoke(bool bIsConnected);
	void OnLinkStatusChange(bool bIsConnected);
	bool HasLinkConnection();
	void InitializeNative();
	void Initialize(class UTpSystemBase* InSystemBase);
};


// Class Tp.TpOnScreenErrorHandler
// 0x0000 (0x003C - 0x003C)
class UTpOnScreenErrorHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpOnScreenErrorHandler");
		return ptr;
	}


	void Finalize();
	void Initialize();
	void Tick(float DeltaSeconds);
};


// Class Tp.TpSystem
// 0x0050 (0x0120 - 0x00D0)
class UTpSystem : public UTpSystemBase
{
public:
	class UTpConnection*                               Connection;                                               // 0x00D0(0x0004) (Transient)
	class UTpAssociationManager*                       AssociationManager;                                       // 0x00D4(0x0004) (Transient)
	class UTpPresenceManager*                          PresenceManager;                                          // 0x00D8(0x0004) (Transient)
	class UTpUserManager*                              UserManager;                                              // 0x00DC(0x0004) (Transient)
	class UTpGameBrowser*                              GameBrowser;                                              // 0x00E0(0x0004) (Transient)
	class UTpGameManager*                              GameManager;                                              // 0x00E4(0x0004) (Transient)
	class UTpMessageService*                           MessageService;                                           // 0x00E8(0x0004) (Transient)
	class UTpPlayGroupManager*                         PlayGroupManager;                                         // 0x00EC(0x0004) (Transient)
	class UTpAchievementManager*                       AchievementManager;                                       // 0x00F0(0x0004) (Transient)
	class UTpRankingService*                           RankingService;                                           // 0x00F4(0x0004) (Transient)
	class UTpFileLockerService*                        FileLockerService;                                        // 0x00F8(0x0004) (Transient)
	class UTpProtoHTTP*                                ProtoHTTP;                                                // 0x00FC(0x0004) (Transient)
	class UTpUoSystem*                                 UoSystem;                                                 // 0x0100(0x0004) (Transient)
	class UTpUoPlayer*                                 UoPlayer;                                                 // 0x0104(0x0004) (Transient)
	class UTpUoGame*                                   UoGame;                                                   // 0x0108(0x0004) (Transient)
	class UTpUoPlayGroup*                              UoPlayGroup;                                              // 0x010C(0x0004) (Transient)
	class UTpUoPlayerEx*                               UoPlayerEx;                                               // 0x0110(0x0004) (Transient)
	class UTpUoStats*                                  UoStats;                                                  // 0x0114(0x0004) (Transient)
	class UTpUoFileLocker*                             UoFileLocker;                                             // 0x0118(0x0004) (Transient)
	class UTsSystem*                                   SaveSystem;                                               // 0x011C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpSystem");
		return ptr;
	}


	bool Init();
};


// Class Tp.TpUoFileLocker
// 0x0060 (0x00A0 - 0x0040)
class UTpUoFileLocker : public UTpSystemHandler
{
public:
	TArray<struct FScriptDelegate>                     __OnFetchLockerComplete__Multicaster;                     // 0x0040(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnReadFileFromLockerComplete__Multicaster;              // 0x004C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnWriteFileToLockerComplete__Multicaster;               // 0x0058(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnDeleteFileFromLockerComplete__Multicaster;            // 0x0064(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFetchLockerComplete__Delegate;                        // 0x0070(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadFileFromLockerComplete__Delegate;                 // 0x007C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWriteFileToLockerComplete__Delegate;                  // 0x0088(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteFileFromLockerComplete__Delegate;               // 0x0094(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpUoFileLocker");
		return ptr;
	}


	TArray<struct FOnlineFileLockerFileInfo> ListFileLocker();
	void ClearOnDeleteFileFromLockerCompleteDelegate(const struct FScriptDelegate& DeleteFileFromLockerDelegate);
	void Del_OnDeleteFileFromLockerComplete(bool bWasSuccessful);
	void AddOnDeleteFileFromLockerCompleteDelegate(const struct FScriptDelegate& DeleteFileFromLockerDelegate);
	void OnDeleteFileFromLockerComplete_Remove(const struct FScriptDelegate& D);
	void OnDeleteFileFromLockerComplete_Add(const struct FScriptDelegate& D);
	void OnDeleteFileFromLockerComplete_Invoke(bool bWasSuccessful);
	void OnDeleteFileFromLockerComplete(bool bWasSuccessful);
	bool DeleteFileFromLocker(struct FOnlineFileLockerFile* File);
	void ClearOnWriteFileToLockerCompleteDelegate(const struct FScriptDelegate& WriteFileToLockerDelegate);
	void Del_OnWriteFileToLockerComplete(bool bWasSuccessful);
	void AddOnWriteFileToLockerCompleteDelegate(const struct FScriptDelegate& WriteFileToLockerDelegate);
	void OnWriteFileToLockerComplete_Remove(const struct FScriptDelegate& D);
	void OnWriteFileToLockerComplete_Add(const struct FScriptDelegate& D);
	void OnWriteFileToLockerComplete_Invoke(bool bWasSuccessful);
	void OnWriteFileToLockerComplete(bool bWasSuccessful);
	bool WriteFileToLocker(struct FOnlineFileLockerFile* File);
	void ClearOnReadFileFromLockerCompleteDelegate(const struct FScriptDelegate& ReadFileFromLockerDelegate);
	void Del_OnReadFileFromLockerComplete(bool bWasSuccessful);
	void AddOnReadFileFromLockerCompleteDelegate(const struct FScriptDelegate& ReadFileFromLockerDelegate);
	void OnReadFileFromLockerComplete_Remove(const struct FScriptDelegate& D);
	void OnReadFileFromLockerComplete_Add(const struct FScriptDelegate& D);
	void OnReadFileFromLockerComplete_Invoke(bool bWasSuccessful);
	void OnReadFileFromLockerComplete(bool bWasSuccessful);
	bool ReadFileFromLocker(struct FOnlineFileLockerFile* File);
	void ClearOnFetchLockerCompleteDelegate(const struct FScriptDelegate& FetchLockerDelegate);
	void Del_OnFetchLockerComplete(bool bWasSuccessful);
	void AddOnFetchLockerCompleteDelegate(const struct FScriptDelegate& FetchLockerDelegate);
	void OnFetchLockerComplete_Remove(const struct FScriptDelegate& D);
	void OnFetchLockerComplete_Add(const struct FScriptDelegate& D);
	void OnFetchLockerComplete_Invoke(bool bWasSuccessful);
	void OnFetchLockerComplete(bool bWasSuccessful);
	bool FetchLocker(const struct FString& UserName);
	void Initialize(class UTpSystemBase* InSystemBase);
};


// Class Tp.TpUoStats
// 0x003C (0x007C - 0x0040)
class UTpUoStats : public UTpSystemHandler
{
public:
	TArray<struct FScriptDelegate>                     __OnReadOnlineStatsComplete__Multicaster;                 // 0x0040(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnFlushOnlineStatsComplete__Multicaster;                // 0x004C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;                    // 0x0058(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;                   // 0x0064(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;               // 0x0070(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpUoStats");
		return ptr;
	}


	bool RegisterStatGuid(const struct FUniqueNetId& PlayerId, struct FString* ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(struct FString* HostStatGuid);
	struct FString GetHostStatGuid();
	bool WriteOnlinePlayerScores(TArray<struct FOnlinePlayerScore>* PlayerScores);
	void Del_OnFlushOnlineStatsComplete(bool bWasSuccessful);
	void ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete_Remove(const struct FScriptDelegate& D);
	void OnFlushOnlineStatsComplete_Add(const struct FScriptDelegate& D);
	void OnFlushOnlineStatsComplete_Invoke(bool bWasSuccessful);
	void OnFlushOnlineStatsComplete(bool bWasSuccessful);
	bool FlushOnlineStats();
	bool WriteOnlineStats(const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void OnReadOnlineStatsComplete_Remove(const struct FScriptDelegate& D);
	void OnReadOnlineStatsComplete_Add(const struct FScriptDelegate& D);
	void OnReadOnlineStatsComplete_Invoke(bool bWasSuccessful);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	void Del_OnReadOnlineStatsComplete(bool bWasSuccessful);
	void ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	bool ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows);
	bool ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	bool ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players);
	void Initialize(class UTpSystemBase* InSystemBase);
};


// Class Tp.TpUoPlayGroup
// 0x0158 (0x0198 - 0x0040)
class UTpUoPlayGroup : public UTpSystemHandler
{
public:
	struct FTpLobbyRef                                 GroupLobby;                                               // 0x0040(0x0004)
	struct FTpGameRef                                  GroupGame;                                                // 0x0044(0x0004)
	TArray<struct FScriptDelegate>                     __OnPlayGroupCreated__Multicaster;                        // 0x0048(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnPlayGroupJoined__Multicaster;                         // 0x0054(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnInviteToPlayGroupComplete__Multicaster;               // 0x0060(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnInviteToPlayGroupReceived__Multicaster;               // 0x006C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnPlayGroupMemberJoin__Multicaster;                     // 0x0078(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnPlayGroupChatMessageReceived__Multicaster;            // 0x0084(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnPlayGroupDestroyed__Multicaster;                      // 0x0090(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnPlayGroupKicked__Multicaster;                         // 0x009C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnLeavePlayGroupComplete__Multicaster;                  // 0x00A8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnPlayGroupMemberLeave__Multicaster;                    // 0x00B4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnPlayGroupOwnerTransitionStart__Multicaster;           // 0x00C0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnPlayGroupOwnerTransitionFinish__Multicaster;          // 0x00CC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnPlayGroupGameJoined__Multicaster;                     // 0x00D8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnPlayGroupGameLeave__Multicaster;                      // 0x00E4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupCreated__Delegate;                           // 0x00F0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupJoined__Delegate;                            // 0x00FC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnInviteToPlayGroupComplete__Delegate;                  // 0x0108(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnInviteToPlayGroupReceived__Delegate;                  // 0x0114(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupMemberJoin__Delegate;                        // 0x0120(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupChatMessageReceived__Delegate;               // 0x012C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupDestroyed__Delegate;                         // 0x0138(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupKicked__Delegate;                            // 0x0144(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLeavePlayGroupComplete__Delegate;                     // 0x0150(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupMemberLeave__Delegate;                       // 0x015C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupOwnerTransitionStart__Delegate;              // 0x0168(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupOwnerTransitionFinish__Delegate;             // 0x0174(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupGameJoined__Delegate;                        // 0x0180(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayGroupGameLeave__Delegate;                         // 0x018C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpUoPlayGroup");
		return ptr;
	}


	void LeaveGroupGame();
	void Del_OnPlayGroupGameLeave();
	void ClearPlayGroupGameLeaveDelegate(const struct FScriptDelegate& OnPlayGroupGameLeaveDelegate);
	void AddPlayGroupGameLeaveDelegate(const struct FScriptDelegate& OnPlayGroupGameLeaveDelegate);
	void OnPlayGroupGameLeave_Remove(const struct FScriptDelegate& D);
	void OnPlayGroupGameLeave_Add(const struct FScriptDelegate& D);
	void OnPlayGroupGameLeave_Invoke();
	void OnPlayGroupGameLeave();
	void JoinGroupGame();
	void Del_OnPlayGroupGameJoined(const struct FTpLobbyRef& InLobby, const struct FTpGameRef& InGame);
	void ClearPlayGroupGameJoinedDelegate(const struct FScriptDelegate& OnPlayGroupGameJoinedDelegate);
	void AddPlayGroupGameJoinedDelegate(const struct FScriptDelegate& OnPlayGroupGameJoinedDelegate);
	void OnPlayGroupGameJoined_Remove(const struct FScriptDelegate& D);
	void OnPlayGroupGameJoined_Add(const struct FScriptDelegate& D);
	void OnPlayGroupGameJoined_Invoke();
	void OnPlayGroupGameJoined();
	void Del_OnPlayGroupOwnerTransitionFinish();
	void ClearPlayGroupOwnerTransitionFinishDelegate(const struct FScriptDelegate& OnPlayGroupOwnerTransitionFinishDelegate);
	void AddPlayGroupOwnerTransitionFinishDelegate(const struct FScriptDelegate& OnPlayGroupOwnerTransitionFinishDelegate);
	void OnPlayGroupOwnerTransitionFinish_Remove(const struct FScriptDelegate& D);
	void OnPlayGroupOwnerTransitionFinish_Add(const struct FScriptDelegate& D);
	void OnPlayGroupOwnerTransitionFinish_Invoke();
	void OnPlayGroupOwnerTransitionFinish();
	void Del_OnPlayGroupOwnerTransitionStart();
	void ClearPlayGroupOwnerTransitionStartDelegate(const struct FScriptDelegate& OnPlayGroupOwnerTransitionStartDelegate);
	void AddPlayGroupOwnerTransitionStartDelegate(const struct FScriptDelegate& OnPlayGroupOwnerTransitionStartDelegate);
	void OnPlayGroupOwnerTransitionStart_Remove(const struct FScriptDelegate& D);
	void OnPlayGroupOwnerTransitionStart_Add(const struct FScriptDelegate& D);
	void OnPlayGroupOwnerTransitionStart_Invoke();
	void OnPlayGroupOwnerTransitionStart();
	void TransferOwnerShipAsync(const struct FUniqueNetId& NewOwnerId);
	void Del_OnPlayGroupMemberLeave(const struct FUniqueNetId& UserId, TEnumAsByte<EPlayGroupLeaveReason> Reason);
	void ClearPlayGroupMemberLeaveDelegate(const struct FScriptDelegate& OnPlayGroupMemberLeaveDelegate);
	void AddPlayGroupMemberLeaveDelegate(const struct FScriptDelegate& OnPlayGroupMemberLeaveDelegate);
	void OnPlayGroupMemberLeave_Remove(const struct FScriptDelegate& D);
	void OnPlayGroupMemberLeave_Add(const struct FScriptDelegate& D);
	void OnPlayGroupMemberLeave_Invoke(const struct FUniqueNetId& UserId, TEnumAsByte<EPlayGroupLeaveReason> Reason);
	void OnPlayGroupMemberLeave(const struct FUniqueNetId& UserId, TEnumAsByte<EPlayGroupLeaveReason> Reason);
	void Del_OnLeavePlayGroupComplete();
	void ClearLeavePlayGroupCompleteDelegate(const struct FScriptDelegate& OnLeavePlayGroupCompleteDelegate);
	void AddLeavePlayGroupCompleteDelegate(const struct FScriptDelegate& OnLeavePlayGroupCompleteDelegate);
	void OnLeavePlayGroupComplete_Remove(const struct FScriptDelegate& D);
	void OnLeavePlayGroupComplete_Add(const struct FScriptDelegate& D);
	void OnLeavePlayGroupComplete_Invoke();
	void OnLeavePlayGroupComplete();
	void LeavePlayGroupAsync();
	void Del_OnPlayGroupKicked();
	void ClearPlayGroupKickedDelegate(const struct FScriptDelegate& OnPlayGroupKickedDelegate);
	void AddPlayGroupKickedDelegate(const struct FScriptDelegate& OnPlayGroupKickedDelegate);
	void OnPlayGroupKicked_Remove(const struct FScriptDelegate& D);
	void OnPlayGroupKicked_Add(const struct FScriptDelegate& D);
	void OnPlayGroupKicked_Invoke();
	void OnPlayGroupKicked();
	void KickMemberAsync(const struct FUniqueNetId& UserId);
	void Del_OnPlayGroupDestroyed();
	void ClearPlayGroupDestroyedDelegate(const struct FScriptDelegate& OnPlayGroupDestroyedDelegate);
	void AddPlayGroupDestroyedDelegate(const struct FScriptDelegate& OnPlayGroupDestroyedDelegate);
	void OnPlayGroupDestroyed_Remove(const struct FScriptDelegate& D);
	void OnPlayGroupDestroyed_Add(const struct FScriptDelegate& D);
	void OnPlayGroupDestroyed_Invoke();
	void OnPlayGroupDestroyed();
	void DestroyPlayGroupAsync();
	void Del_OnPlayGroupChatMessageReceived(const struct FUniqueNetId& SenderId, const struct FString& Message);
	void ClearPlayGroupChatMessageReceivedDelegate(const struct FScriptDelegate& OnPlayGroupChatMessageReceivedDelegate);
	void AddPlayGroupChatMessageReceivedDelegate(const struct FScriptDelegate& OnPlayGroupChatMessageReceivedDelegate);
	void OnPlayGroupChatMessageReceived_Remove(const struct FScriptDelegate& D);
	void OnPlayGroupChatMessageReceived_Add(const struct FScriptDelegate& D);
	void OnPlayGroupChatMessageReceived_Invoke(const struct FUniqueNetId& SenderId, const struct FString& Message);
	void OnPlayGroupChatMessageReceived(const struct FUniqueNetId& SenderId, const struct FString& Message);
	void BroadCastChatMessageAsync(const struct FString& Message);
	void Del_OnPlayGroupMemberJoin(const struct FUniqueNetId& NewMemberUserId);
	void ClearPlayGroupMemberJoinDelegate(const struct FScriptDelegate& OnPlayGroupMemberJoinDelegate);
	void AddPlayGroupMemberJoinDelegate(const struct FScriptDelegate& OnPlayGroupMemberJoinDelegate);
	void OnPlayGroupMemberJoin_Remove(const struct FScriptDelegate& D);
	void OnPlayGroupMemberJoin_Add(const struct FScriptDelegate& D);
	void OnPlayGroupMemberJoin_Invoke(const struct FUniqueNetId& NewMemberUserId);
	void OnPlayGroupMemberJoin(const struct FUniqueNetId& NewMemberUserId);
	bool AcceptInviteToPlayGroup(const struct FUniqueNetId& RequestingUserId);
	void ClearOnInviteToPlayGroupReceivedDelegate(const struct FScriptDelegate& OnInviteToPlayGroupReceived);
	void AddOnInviteToPlayGroupReceivedDelegate(const struct FScriptDelegate& OnInviteToPlayGroupReceived);
	void OnInviteToPlayGroupReceived_Remove(const struct FScriptDelegate& D);
	void OnInviteToPlayGroupReceived_Add(const struct FScriptDelegate& D);
	void OnInviteToPlayGroupReceived_Invoke(const struct FUniqueNetId& RequestingUserId);
	void OnInviteToPlayGroupReceived(const struct FUniqueNetId& RequestingUserId);
	void OnInviteToPlayGroup(const struct FUniqueNetId& RequestingPlayer);
	void ClearOnInviteToPlayGroupCompleteDelegate(const struct FScriptDelegate& OnInviteToPlayGroupComplete);
	void AddOnInviteToPlayGroupCompleteDelegate(const struct FScriptDelegate& OnInviteToPlayGroupComplete);
	void OnInviteToPlayGroupComplete_Remove(const struct FScriptDelegate& D);
	void OnInviteToPlayGroupComplete_Add(const struct FScriptDelegate& D);
	void OnInviteToPlayGroupComplete_Invoke(bool bWasSuccessful);
	void OnInviteToPlayGroupComplete(bool bWasSuccessful);
	void OnInviteSent(bool bInOk);
	bool InviteToPlayGroupAsync(const struct FUniqueNetId& UserId);
	void Del_OnPlayGroupJoined(bool bInOk);
	void ClearPlayGroupJoinedDelegate(const struct FScriptDelegate& OnPlayGroupJoinedDelegate);
	void AddPlayGroupJoinedDelegate(const struct FScriptDelegate& OnPlayGroupJoinedDelegate);
	void OnPlayGroupJoined_Remove(const struct FScriptDelegate& D);
	void OnPlayGroupJoined_Add(const struct FScriptDelegate& D);
	void OnPlayGroupJoined_Invoke(bool bInOk);
	void OnPlayGroupJoined(bool bInOk);
	void JoinPlayGroupAsync(const struct FUniqueNetId& UserId);
	void Del_OnPlayGroupCreated(bool bInOk);
	void ClearPlayGroupCreatedDelegate(const struct FScriptDelegate& OnPlayGroupCreatedDelegate);
	void AddPlayGroupCreatedDelegate(const struct FScriptDelegate& OnPlayGroupCreatedDelegate);
	void OnPlayGroupCreated_Remove(const struct FScriptDelegate& D);
	void OnPlayGroupCreated_Add(const struct FScriptDelegate& D);
	void OnPlayGroupCreated_Invoke(bool bInOk);
	void OnPlayGroupCreated(bool bInOk);
	void CreatePlayGroupAsync(const struct FPlayGroupCreateParams& Params);
	TArray<struct FPlayGroupListEntry> GetMyPlayGroupList();
	bool IsPlayGroupOwner();
	bool IsInPlayGroup();
	void Initialize(class UTpSystemBase* InSystemBase);
};


// Class Tp.TpUoGame
// 0x00F8 (0x0138 - 0x0040)
class UTpUoGame : public UTpSystemHandler
{
public:
	class UOnlineGameSearch*                           GameSearch;                                               // 0x0040(0x0004) (Transient)
	TEnumAsByte<EOnlineGameState>                      GameState;                                                // 0x0044(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	TArray<struct FScriptDelegate>                     __OnCreateOnlineGameComplete__Multicaster;                // 0x0048(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnDestroyOnlineGameComplete__Multicaster;               // 0x0054(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnFindOnlineGamesComplete__Multicaster;                 // 0x0060(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnJoinOnlineGameComplete__Multicaster;                  // 0x006C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnRegisterPlayerComplete__Multicaster;                  // 0x0078(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnUnregisterPlayerComplete__Multicaster;                // 0x0084(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnStartOnlineGameComplete__Multicaster;                 // 0x0090(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnEndOnlineGameComplete__Multicaster;                   // 0x009C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     __OnGameInviteAccepted__Multicaster;                      // 0x00A8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;                   // 0x00B4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;                  // 0x00C0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;                    // 0x00CC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;              // 0x00D8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;                     // 0x00E4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                     // 0x00F0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                   // 0x00FC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;                    // 0x0108(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;                      // 0x0114(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;            // 0x0120(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                         // 0x012C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpUoGame");
		return ptr;
	}


	bool RecalculateSkillRating(TArray<struct FUniqueNetId>* Players);
	bool AcceptGameInvite(unsigned char LocalUserNum);
	void OnGameInviteAccepted_Remove(const struct FScriptDelegate& D);
	void OnGameInviteAccepted_Add(const struct FScriptDelegate& D);
	void OnGameInviteAccepted_Invoke(class UOnlineGameSettings* GameInviteSettings);
	void OnGameInviteAccepted(class UOnlineGameSettings* GameInviteSettings);
	void ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers();
	void ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void OnArbitrationRegistrationComplete(bool bWasSuccessful);
	bool RegisterForArbitration();
	TEnumAsByte<EOnlineGameState> GetOnlineGameState();
	void ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void OnEndOnlineGameComplete_Remove(const struct FScriptDelegate& D);
	void OnEndOnlineGameComplete_Add(const struct FScriptDelegate& D);
	void OnEndOnlineGameComplete_Invoke(bool bWasSuccessful);
	void OnEndOnlineGameComplete(bool bWasSuccessful);
	void OnEndOnlineGame(bool bOk);
	bool EndOnlineGame();
	void ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void OnStartOnlineGameComplete_Remove(const struct FScriptDelegate& D);
	void OnStartOnlineGameComplete_Add(const struct FScriptDelegate& D);
	void OnStartOnlineGameComplete_Invoke(bool bWasSuccessful);
	void OnStartOnlineGameComplete(bool bWasSuccessful);
	void OnStartOnlineGame(bool bOk);
	bool StartOnlineGame();
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete_Remove(const struct FScriptDelegate& D);
	void OnUnregisterPlayerComplete_Add(const struct FScriptDelegate& D);
	void OnUnregisterPlayerComplete_Invoke(bool bWasSuccessful);
	void OnUnregisterPlayerComplete(bool bWasSuccessful);
	bool UnregisterPlayer(const struct FUniqueNetId& PlayerId);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete_Remove(const struct FScriptDelegate& D);
	void OnRegisterPlayerComplete_Add(const struct FScriptDelegate& D);
	void OnRegisterPlayerComplete_Invoke(bool bWasSuccessful);
	void OnRegisterPlayerComplete(bool bWasSuccessful);
	bool RegisterPlayer(const struct FUniqueNetId& PlayerId, bool bWasInvited);
	bool GetResolvedConnectString(struct FString* ConnectInfo);
	void ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void OnJoinOnlineGameComplete_Remove(const struct FScriptDelegate& D);
	void OnJoinOnlineGameComplete_Add(const struct FScriptDelegate& D);
	void OnJoinOnlineGameComplete_Invoke(bool bWasSuccessful);
	void OnJoinOnlineGameComplete(bool bWasSuccessful);
	bool JoinOnlineGame(unsigned char PlayerNum, struct FOnlineGameSearchResult* DesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	void ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	class UOnlineGameSearch* GetGameSearch();
	void AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void OnCancelFindOnlineGamesComplete(bool bWasSuccessful);
	bool CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	void AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	void OnFindOnlineGamesComplete_Remove(const struct FScriptDelegate& D);
	void OnFindOnlineGamesComplete_Add(const struct FScriptDelegate& D);
	void OnFindOnlineGamesComplete_Invoke(bool bWasSuccessful);
	void OnFindOnlineGamesComplete(bool bWasSuccessful);
	bool FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings);
	void ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void OnDestroyOnlineGameComplete_Remove(const struct FScriptDelegate& D);
	void OnDestroyOnlineGameComplete_Add(const struct FScriptDelegate& D);
	void OnDestroyOnlineGameComplete_Invoke(bool bWasSuccessful);
	void OnDestroyOnlineGameComplete(bool bWasSuccessful);
	bool DestroyOnlineGame();
	class UOnlineGameSettings* GetGameSettings();
	bool UpdateOnlineGame(class UOnlineGameSettings* UpdatedGameSettings);
	void ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void OnCreateOnlineGameComplete_Remove(const struct FScriptDelegate& D);
	void OnCreateOnlineGameComplete_Add(const struct FScriptDelegate& D);
	void OnCreateOnlineGameComplete_Invoke(bool bWasSuccessful);
	void OnCreateOnlineGameComplete(bool bWasSuccessful);
	bool CreateOnlineGame(unsigned char HostingPlayerNum, class UOnlineGameSettings* NewGameSettings);
	void Initialize(class UTpSystemBase* InSystemBase);
};


// Class Tp.TpTestStatsRead
// 0x0000 (0x00B4 - 0x00B4)
class UTpTestStatsRead : public UOnlineStatsRead
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpTestStatsRead");
		return ptr;
	}

};


// Class Tp.TpTestStatsWrite
// 0x0000 (0x0098 - 0x0098)
class UTpTestStatsWrite : public UOnlineStatsWrite
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Tp.TpTestStatsWrite");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
