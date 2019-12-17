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

// Enum Tp.TpAccount.TpAccountError
enum class ETpAccountError : uint8_t
{
	kTpAe_Ok                       = 0,
	kTpAe_AuthFail                 = 1,
	kTpAe_AccountNotFound          = 2,
	kTpAe_AccountDisabled          = 3,
	kTpAe_AccountBanned            = 4,
	kTpAe_NoData                   = 5,
	kTpAe_AccountPending           = 6,
	kTpAe_AccountTentative         = 7,
	kTpAe_AccountNeedsParentalVerification = 8,
	kTpAe_NotEntitled              = 9,
	kTpAe_TooManyLoginAttempts     = 10,
	kTpAe_InvalidPassword          = 11,
	kTpAe_GameNotRegistered        = 12,
	kTpAe_TooManyPasswordRecoveries = 13,
	kTpAe_TooManyNameRecoveries    = 14,
	kTpAe_EmailNotFound            = 15,
	kTpAe_PasswordNotFound         = 16,
	kTpAe_NameAlreadyInUse         = 17,
	kTpAe_EmailBlocked             = 18,
	kTpAe_PasswordNotChanged       = 19,
	kTpAe_TooManyPersonas          = 20,
	kTpAe_PersonaDisabledByCsr     = 21,
	kTpAe_UserTooYoung             = 22,
	kTpAe_RegCodeAlreadyInUse      = 23,
	kTpAe_InvalidRegCode           = 24,
	kTpAe_GameAlreadyRegistered    = 25,
	kTpAe_AccountNotAuthenticated  = 26,
	kTpAe_CreditCardsNotAvailable  = 27,
	kTpAe_XblBillingIsNotAvailable = 28,
	kTpAe_Ps3npServiceFailure      = 29,
	kTpAe_InvalidEnvironment       = 30,
	kTpAe_SearchOwnerNamePrefixEmpty = 31,
	kTpAe_SearchOwnerNamePrefixTooShort = 32,
	kTpAe_SearchOwnerInvalidSearchType = 33,
	kTpAe_SearchOwnerTooManyResultsFound = 34,
	kTpAe_SearchOwnerInvalidNamespaceid = 35,
	kTpAe_AccountDeactivated       = 36,
	kTpAe_AccountMerged            = 37,
	kTpAe_TosOutOfDate             = 38,
	kTpAe_Unknown                  = 39,
	kTpAe_MAX                      = 40
};


// Enum Tp.TpConnection.TpConnectionError
enum class ETpConnectionError : uint8_t
{
	kTpCe_Ok                       = 0,
	kTpCe_ConnectionFailed         = 1,
	kTpCe_SocketCreateFailed       = 2,
	kTpCe_NameLookupFailed         = 3,
	kTpCe_ServerForcedLogoff       = 4,
	kTpCe_Disconnected             = 5,
	kTpCe_ActivityTimeout          = 6,
	kTpCe_MemoryAuthFailed         = 7,
	kTpCe_Banned                   = 8,
	kTpCe_CommunicatorInitFailed   = 9,
	kTpCe_GameBrowserInitFailed    = 10,
	kTpCe_ClubManagerInitFailed    = 11,
	kTpCe_AchievementInitFailed    = 12,
	kTpCe_AssociationInitFailed    = 13,
	kTpCe_SilentLoginFailed        = 14,
	kTpCe_OnlineRestricted         = 15,
	kTpCe_MinPingSiteCheckFailed   = 16,
	kTpCe_XblNotAvailable          = 17,
	kTpCe_XblInviteUserNotFound    = 18,
	kTpCe_XblNoValidProfile        = 19,
	kTpCe_XblServiceBusy           = 20,
	kTpCe_XblUpdateRequired        = 21,
	kTpCe_Ps3npNotAvailable        = 22,
	kTpCe_Ps3NoNetworkConnection   = 23,
	kTpCe_Ps3npStartFailed         = 24,
	kTpCe_Unknown                  = 25,
	kTpCe_MAX                      = 26
};


// Enum Tp.TpConnectParams.TpConnectMode
enum class ETpConnectMode : uint8_t
{
	kTpCm_AuthenticatedWan         = 0,
	kTpCm_AuthenticatedLan         = 1,
	kTpCm_UnauthenticatedLan       = 2,
	kTpCm_MAX                      = 3
};


// Enum Tp.TpConnectParams.TpLoginMode
enum class ETpLoginMode : uint8_t
{
	kTpLm_SilentLogin              = 0,
	kTpLm_LoginNoDisconnect        = 1,
	kTpLm_Login                    = 2,
	kTpLm_MAX                      = 3
};


// Enum Tp.TpCreateGameParams.TpInviteStatus
enum class ETpInviteStatus : uint8_t
{
	kTpIs_Enabled                  = 0,
	kTpIs_HostOnly                 = 1,
	kTpIs_Disabled                 = 2,
	kTpIs_MAX                      = 3
};


// Enum Tp.TpCreateGameParams.TpPlayerType
enum class ETpPlayerType : uint8_t
{
	kTpPt_Participant              = 0,
	kTpPt_Observer                 = 1,
	kTpPt_MAX                      = 2
};


// Enum Tp.TpGameBrowser.TpGameMode
enum class ETpGameMode : uint8_t
{
	kTpGm_Pursuit                  = 0,
	kTpGm_Possession               = 1,
	kTpGm_DeathMatch               = 2,
	kTpGm_Any                      = 3,
	kTpGm_MAX                      = 4
};


// Enum Tp.TpGameBrowser.TpPrefRegion
enum class ETpPrefRegion : uint8_t
{
	kTpPrr_EU                      = 0,
	kTpPrr_US                      = 1,
	kTpPrr_Any                     = 2,
	kTpPrr_MAX                     = 3
};


// Enum Tp.TpSystemBase.TpPresenceFlags
enum class ETpPresenceFlags : uint8_t
{
	kTpPf_None                     = 0,
	kTpPf_GameJoinable             = 1,
	kTpPf_MAX                      = 2
};


// Enum Tp.TpSystemBase.TpPresenceStatus
enum class ETpPresenceStatus : uint8_t
{
	kTpPs_Offline                  = 0,
	kTpPs_Chat                     = 1,
	kTpPs_Away                     = 2,
	kTpPs_Xa                       = 3,
	kTpPs_Dnd                      = 4,
	kTpPs_Game                     = 5,
	kTpPs_Unknown                  = 6,
	kTpPs_MAX                      = 7
};


// Enum Tp.TpSystemBase.TpEnv
enum class ETpEnv : uint8_t
{
	kTpEnv_Stest                   = 0,
	kTpEnv_Prod                    = 1,
	kTpEnv_MAX                     = 2
};


// Enum Tp.TpSystemBase.TpArea
enum class ETpArea : uint8_t
{
	kTpArea_Lan                    = 0,
	kTpArea_Wan                    = 1,
	kTpArea_MAX                    = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tp.TpAchievementManager.AchBind
// 0x0018
struct FAchBind
{
	int                                                Id;                                                       // 0x0000(0x0004) (Config)
	struct FString                                     AchCode;                                                  // 0x0004(0x000C) (Config, NeedCtorLink)
	int                                                XboxId;                                                   // 0x0010(0x0004) (Config)
	int                                                TrophyId;                                                 // 0x0014(0x0004) (Config)
};

// ScriptStruct Tp.TpConnection.TpCreateAccountCountry
// 0x0020
struct FTpCreateAccountCountry
{
	struct FString                                     Description;                                              // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     ISOCode;                                                  // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                ParentalControlAgeLimit;                                  // 0x0018(0x0004)
	int                                                RegistrationAgeLimit;                                     // 0x001C(0x0004)
};

// ScriptStruct Tp.TpConnection.TpCreateAccountParams
// 0x004C
struct FTpCreateAccountParams
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Password;                                                 // 0x000C(0x000C) (NeedCtorLink)
	int                                                BirthYear;                                                // 0x0018(0x0004)
	int                                                BirthMonth;                                               // 0x001C(0x0004)
	int                                                BirthDay;                                                 // 0x0020(0x0004)
	struct FString                                     ZipCode;                                                  // 0x0024(0x000C) (NeedCtorLink)
	struct FString                                     IsoCountry;                                               // 0x0030(0x000C) (NeedCtorLink)
	struct FString                                     ParentalEmail;                                            // 0x003C(0x000C) (NeedCtorLink)
	unsigned long                                      bAllowEaEmail : 1;                                        // 0x0048(0x0004)
	unsigned long                                      bAllowThirdPartyEmail : 1;                                // 0x0048(0x0004)
};

// ScriptStruct Tp.TpGameBrowser.TpLobbyRef
// 0x0004
struct FTpLobbyRef
{
	int                                                Value;                                                    // 0x0000(0x0004)
};

// ScriptStruct Tp.TpGameBrowser.TpGameRef
// 0x0004
struct FTpGameRef
{
	int                                                Value;                                                    // 0x0000(0x0004)
};

// ScriptStruct Tp.TpGameBrowser.TpPlayNowJoinGameInfo
// 0x000C
struct FTpPlayNowJoinGameInfo
{
	struct FTpLobbyRef                                 Lobby;                                                    // 0x0000(0x0004)
	struct FTpGameRef                                  Game;                                                     // 0x0004(0x0004)
	float                                              MatchQuality;                                             // 0x0008(0x0004)
};

// ScriptStruct Tp.TpGameBrowser.TpPlayNowCreateGameInfo
// 0x0008
struct FTpPlayNowCreateGameInfo
{
	struct FPointer                                    NewGameParams;                                            // 0x0000(0x0004)
	float                                              MatchQuality;                                             // 0x0004(0x0004)
};

// ScriptStruct Tp.TpGameBrowser.TpPoolPlayerCountThresholdEntry
// 0x0008
struct FTpPoolPlayerCountThresholdEntry
{
	int                                                Seconds;                                                  // 0x0000(0x0004)
	int                                                Players;                                                  // 0x0004(0x0004)
};

// ScriptStruct Tp.TpGameBrowser.TpPlayNowParams
// 0x001E
struct FTpPlayNowParams
{
	int                                                PoolPlayerTimeout;                                        // 0x0000(0x0004)
	int                                                PoolMaxPlayers;                                           // 0x0004(0x0004)
	TArray<struct FTpPoolPlayerCountThresholdEntry>    PoolPlayerCountThreshold;                                 // 0x0008(0x000C) (NeedCtorLink)
	int                                                HostSetupTimeout;                                         // 0x0014(0x0004)
	unsigned long                                      bRankedMatch : 1;                                         // 0x0018(0x0004)
	unsigned long                                      bHeavyWeaponsAllowed : 1;                                 // 0x0018(0x0004)
	TEnumAsByte<ETpGameMode>                           GameMode;                                                 // 0x001C(0x0001)
	TEnumAsByte<ETpPrefRegion>                         PrefRegion;                                               // 0x001D(0x0001)
};

// ScriptStruct Tp.TpGameBrowser.TpGameListParams
// 0x0010
struct FTpGameListParams
{
	int                                                MaxGames;                                                 // 0x0000(0x0004)
	int                                                StartingGameId;                                           // 0x0004(0x0004)
	unsigned char                                      MinPlayers;                                               // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	unsigned long                                      bFavouritesOnly : 1;                                      // 0x000C(0x0004)
	unsigned long                                      bNotFull : 1;                                             // 0x000C(0x0004)
	unsigned long                                      bNotPrivate : 1;                                          // 0x000C(0x0004)
	unsigned long                                      bNotClosed : 1;                                           // 0x000C(0x0004)
};

// ScriptStruct Tp.TpGameBrowser.TpGameListFavourites
// 0x0030
struct FTpGameListFavourites
{
	struct FString                                     Players;                                                  // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Games;                                                    // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FQWord>                              Uids;                                                     // 0x0018(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             PersistentIds;                                            // 0x0024(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct Tp.TpGameBrowser.TpLobbyListParams
// 0x0008
struct FTpLobbyListParams
{
	unsigned char                                      MinPlayers;                                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      bFavouritesOnly : 1;                                      // 0x0004(0x0004)
	unsigned long                                      bNotFull : 1;                                             // 0x0004(0x0004)
	unsigned long                                      bNotPrivate : 1;                                          // 0x0004(0x0004)
};

// ScriptStruct Tp.TpGameBrowser.TpLobbyListFavourites
// 0x0030
struct FTpLobbyListFavourites
{
	struct FString                                     Players;                                                  // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Games;                                                    // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FQWord>                              Uids;                                                     // 0x0018(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             PersistentIds;                                            // 0x0024(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct Tp.TpSystemBase.TpErrorInfo
// 0x0014
struct FTpErrorInfo
{
	int                                                ErrorCode;                                                // 0x0000(0x0004)
	struct FString                                     LocErrorString;                                           // 0x0004(0x000C) (NeedCtorLink)
	unsigned long                                      bRestartNeeded : 1;                                       // 0x0010(0x0004)
};

// ScriptStruct Tp.TpSystemBase.TpInitializeParams
// 0x0080
struct FTpInitializeParams
{
	TEnumAsByte<ETpEnv>                                Env;                                                      // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     Sku;                                                      // 0x0004(0x000C) (NeedCtorLink)
	struct FString                                     Version;                                                  // 0x0010(0x000C) (NeedCtorLink)
	struct FString                                     ClientString360;                                          // 0x001C(0x000C) (NeedCtorLink)
	struct FString                                     ClientStringPS3;                                          // 0x0028(0x000C) (NeedCtorLink)
	struct FString                                     ClientStringPC;                                           // 0x0034(0x000C) (NeedCtorLink)
	int                                                FeslPort360;                                              // 0x0040(0x0004)
	int                                                FeslPortPS3;                                              // 0x0044(0x0004)
	int                                                FeslPortPC;                                               // 0x0048(0x0004)
	struct FString                                     Ps3TitleId;                                               // 0x004C(0x000C) (NeedCtorLink)
	struct FString                                     Ps3CommId;                                                // 0x0058(0x000C) (NeedCtorLink)
	struct FString                                     Ps3Spid;                                                  // 0x0064(0x000C) (NeedCtorLink)
	int                                                MaxPlayers;                                               // 0x0070(0x0004)
	struct FString                                     ClientType;                                               // 0x0074(0x000C) (NeedCtorLink)
};

// ScriptStruct Tp.TpSystemBase.TpSystemInitializer
// 0x0004
struct FTpSystemInitializer
{
	unsigned long                                      bInitialized : 1;                                         // 0x0000(0x0004) (Native, Transient)
};

// ScriptStruct Tp.TpSystemBase.TpNpEvent
// 0x000C
struct FTpNpEvent
{
	int                                                Event;                                                    // 0x0000(0x0004)
	int                                                RetCode;                                                  // 0x0004(0x0004)
	int                                                ReqId;                                                    // 0x0008(0x0004)
};

// ScriptStruct Tp.TpSystemBase.TpPresence
// 0x0004
struct FTpPresence
{
	TEnumAsByte<ETpPresenceStatus>                     Status;                                                   // 0x0000(0x0001)
	TEnumAsByte<ETpPresenceFlags>                      Flags;                                                    // 0x0001(0x0001)
	TEnumAsByte<ETpPresenceFlags>                      __filler1__;                                              // 0x0002(0x0001)
	TEnumAsByte<ETpPresenceFlags>                      __filler2__;                                              // 0x0003(0x0001)
};

// ScriptStruct Tp.TpPresenceManager.PresBind
// 0x0010
struct FPresBind
{
	struct FString                                     LevelName;                                                // 0x0000(0x000C) (Config, NeedCtorLink)
	int                                                PresenceId;                                               // 0x000C(0x0004) (Config)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
