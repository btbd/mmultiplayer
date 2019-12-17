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

// Function Tp.TpSystemHandler.Finalize
struct UTpSystemHandler_Finalize_Params
{
};

// Function Tp.TpSystemHandler.Initialize
struct UTpSystemHandler_Initialize_Params
{
	class UTpSystemBase*                               InSystemBase;                                             // (Parm)
};

// Function Tp.TpSystemHandler.FinalizeNative
struct UTpSystemHandler_FinalizeNative_Params
{
};

// Function Tp.TpSystemHandler.InitializeNative
struct UTpSystemHandler_InitializeNative_Params
{
};

// Function Tp.TpAchievementManager.ShowXBOXAchievementsUI
struct UTpAchievementManager_ShowXBOXAchievementsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpAchievementManager.OnGrantAward
struct UTpAchievementManager_OnGrantAward_Params
{
};

// Function Tp.TpAchievementManager.GrantAward
struct UTpAchievementManager_GrantAward_Params
{
	struct FAchBind                                    Award;                                                    // (Parm, OutParm, NeedCtorLink)
};

// Function Tp.TpAssociationManager.IsFriendsListLoaded
struct UTpAssociationManager_IsFriendsListLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpAssociationManager.OnFriendsListChange
struct UTpAssociationManager_OnFriendsListChange_Params
{
};

// Function Tp.TpAssociationManager.OnFriendsListLoaded
struct UTpAssociationManager_OnFriendsListLoaded_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpAssociationManager.OnAddMember
struct UTpAssociationManager_OnAddMember_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpAssociationManager.OnRemoveMember
struct UTpAssociationManager_OnRemoveMember_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpAssociationManager.ListBlockedUsers
struct UTpAssociationManager_ListBlockedUsers_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpAssociationManager.UnBlockUserAsync
struct UTpAssociationManager_UnBlockUserAsync_Params
{
	struct FUniqueNetId                                UserRef;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpAssociationManager.BlockUserAsync
struct UTpAssociationManager_BlockUserAsync_Params
{
	struct FUniqueNetId                                UserRef;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpAssociationManager.IsFriend
struct UTpAssociationManager_IsFriend_Params
{
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpAssociationManager.GetPlayersList
struct UTpAssociationManager_GetPlayersList_Params
{
	TArray<struct FOnlinePlayer>                       Players;                                                  // (Parm, OutParm, NeedCtorLink)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpAssociationManager.GetMyFriendsListEx
struct UTpAssociationManager_GetMyFriendsListEx_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriend>                       Friends;                                                  // (Parm, OutParm, NeedCtorLink)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpAssociationManager.GetMyFriendsList
struct UTpAssociationManager_GetMyFriendsList_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpAssociationManager.RemoveFriendAsync
struct UTpAssociationManager_RemoveFriendAsync_Params
{
	struct FUniqueNetId                                FormerFriend;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpAssociationManager.AddFriendAsync
struct UTpAssociationManager_AddFriendAsync_Params
{
	struct FUniqueNetId                                NewFriend;                                                // (Parm)
};

// Function Tp.TpConnection.IsLoggedIn
struct UTpConnection_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpConnection.IsConnected
struct UTpConnection_IsConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpConnection.IsLanGame
struct UTpConnection_IsLanGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpConnection.IsAuthenticated
struct UTpConnection_IsAuthenticated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpConnection.SetActiveControllerId
struct UTpConnection_SetActiveControllerId_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function Tp.TpConnection.RepromptDisplay
struct UTpConnection_RepromptDisplay_Params
{
};

// Function Tp.TpConnection.OnDisplayParentalEmail
struct UTpConnection_OnDisplayParentalEmail_Params
{
};

// Function Tp.TpConnection.ConfirmParentalEmail
struct UTpConnection_ConfirmParentalEmail_Params
{
	struct FString                                     Email;                                                    // (Parm, NeedCtorLink)
};

// Function Tp.TpConnection.OnDisplayConfirmMessage
struct UTpConnection_OnDisplayConfirmMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpConnection.ConfirmMessage
struct UTpConnection_ConfirmMessage_Params
{
};

// Function Tp.TpConnection.OnDisconnect
struct UTpConnection_OnDisconnect_Params
{
};

// Function Tp.TpConnection.DisconnectAsync
struct UTpConnection_DisconnectAsync_Params
{
};

// Function Tp.TpConnection.OnCreatePersonaError
struct UTpConnection_OnCreatePersonaError_Params
{
	int                                                ErrorCode;                                                // (Parm)
};

// Function Tp.TpConnection.CreatePersonaAsync
struct UTpConnection_CreatePersonaAsync_Params
{
	struct FString                                     Persona;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpConnection.OnDisplayPersonas
struct UTpConnection_OnDisplayPersonas_Params
{
	TArray<struct FString>                             Personas;                                                 // (Parm, NeedCtorLink)
};

// Function Tp.TpConnection.CreateAccountAcceptTOSAsync
struct UTpConnection_CreateAccountAcceptTOSAsync_Params
{
	bool                                               Accept;                                                   // (Parm)
};

// Function Tp.TpConnection.OnGetTOS
struct UTpConnection_OnGetTOS_Params
{
	struct FString                                     TOSText;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpConnection.CreateAccountGetTOSAsync
struct UTpConnection_CreateAccountGetTOSAsync_Params
{
	struct FString                                     ISOCode;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpConnection.OnDisplayCountrySelect
struct UTpConnection_OnDisplayCountrySelect_Params
{
	TArray<struct FTpCreateAccountCountry>             Countries;                                                // (Parm, NeedCtorLink)
};

// Function Tp.TpConnection.OnCreateAccountError
struct UTpConnection_OnCreateAccountError_Params
{
	TEnumAsByte<ETpAccountError>                       InError;                                                  // (Parm)
};

// Function Tp.TpConnection.CreateAccountConsoleAsync
struct UTpConnection_CreateAccountConsoleAsync_Params
{
	struct FString                                     Email;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Pass;                                                     // (Parm, NeedCtorLink)
	bool                                               bAllowEaEmail;                                            // (Parm)
	bool                                               bAllowThirdPartyEmail;                                    // (Parm)
};

// Function Tp.TpConnection.CreateAccountAsync
struct UTpConnection_CreateAccountAsync_Params
{
	struct FTpCreateAccountParams                      InParams;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpConnection.OnCreateAccountReady
struct UTpConnection_OnCreateAccountReady_Params
{
	struct FString                                     Email;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Pass;                                                     // (Parm, NeedCtorLink)
	bool                                               bAllowEaEmail;                                            // (Parm)
	bool                                               bAllowTPEmail;                                            // (Parm)
	bool                                               bIsConsole;                                               // (Parm)
};

// Function Tp.TpConnection.PrepareCreateAccountAsync
struct UTpConnection_PrepareCreateAccountAsync_Params
{
};

// Function Tp.TpConnection.OnLoginPersonaError
struct UTpConnection_OnLoginPersonaError_Params
{
	int                                                ErrorCode;                                                // (Parm)
};

// Function Tp.TpConnection.OnLoginAccountError
struct UTpConnection_OnLoginAccountError_Params
{
	TEnumAsByte<ETpAccountError>                       InError;                                                  // (Parm)
};

// Function Tp.TpConnection.OnPartiallyLoggedIn
struct UTpConnection_OnPartiallyLoggedIn_Params
{
	TArray<struct FString>                             InSubNames;                                               // (Parm, NeedCtorLink)
};

// Function Tp.TpConnection.LoginPersonaAsync
struct UTpConnection_LoginPersonaAsync_Params
{
	struct FString                                     InName;                                                   // (Parm, NeedCtorLink)
};

// Function Tp.TpConnection.LoginEncAccountAsync
struct UTpConnection_LoginEncAccountAsync_Params
{
	struct FString                                     EncLogin;                                                 // (Parm, NeedCtorLink)
};

// Function Tp.TpConnection.LoginAccountAsync
struct UTpConnection_LoginAccountAsync_Params
{
	struct FString                                     InName;                                                   // (Parm, NeedCtorLink)
	struct FString                                     InPasswd;                                                 // (Parm, NeedCtorLink)
};

// Function Tp.TpConnection.OnConnectionChange
struct UTpConnection_OnConnectionChange_Params
{
	bool                                               bConnected;                                               // (Parm)
};

// Function Tp.TpConnection.OnLoginReady
struct UTpConnection_OnLoginReady_Params
{
};

// Function Tp.TpConnection.OnConnectionReady
struct UTpConnection_OnConnectionReady_Params
{
	struct FString                                     EncLogin;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Persona;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpConnection.OnConnectionFailed
struct UTpConnection_OnConnectionFailed_Params
{
	TEnumAsByte<ETpConnectionError>                    InError;                                                  // (Parm)
};

// Function Tp.TpConnection.ConnectSilentAsync
struct UTpConnection_ConnectSilentAsync_Params
{
	struct FString                                     EncLogin;                                                 // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     Persona;                                                  // (OptionalParm, Parm, NeedCtorLink)
};

// Function Tp.TpConnection.ConnectAsync
struct UTpConnection_ConnectAsync_Params
{
};

// Function Tp.TpConnectParams.InitializeAuthentication
struct UTpConnectParams_InitializeAuthentication_Params
{
	TEnumAsByte<ETpLoginMode>                          InLoginMode;                                              // (Parm)
};

// Function Tp.TpConnectParams.GetUnauthenticatedPlayerName
struct UTpConnectParams_GetUnauthenticatedPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpConnectParams.SetUnauthenticatedPlayerName
struct UTpConnectParams_SetUnauthenticatedPlayerName_Params
{
	struct FString                                     InName;                                                   // (Parm, NeedCtorLink)
};

// Function Tp.TpConnectParams.GetConnectMode
struct UTpConnectParams_GetConnectMode_Params
{
	TEnumAsByte<ETpConnectMode>                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpConnectParams.SetConnectMode
struct UTpConnectParams_SetConnectMode_Params
{
	TEnumAsByte<ETpConnectMode>                        InMode;                                                   // (Parm)
};

// Function Tp.TpConnectParams.GetOpaqueFeslPointer
struct UTpConnectParams_GetOpaqueFeslPointer_Params
{
	struct FPointer                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpCreateGameParams.SetHostMigrationEnabled
struct UTpCreateGameParams_SetHostMigrationEnabled_Params
{
	bool                                               bInEnabled;                                               // (Parm)
};

// Function Tp.TpCreateGameParams.SetInviteStatus
struct UTpCreateGameParams_SetInviteStatus_Params
{
	TEnumAsByte<ETpInviteStatus>                       InStatus;                                                 // (Parm)
};

// Function Tp.TpCreateGameParams.SetJoinViaPresenceEnabled
struct UTpCreateGameParams_SetJoinViaPresenceEnabled_Params
{
	bool                                               bInEnabled;                                               // (Parm)
};

// Function Tp.TpCreateGameParams.SetJoinInProgressEnabled
struct UTpCreateGameParams_SetJoinInProgressEnabled_Params
{
	bool                                               bInEnabled;                                               // (Parm)
};

// Function Tp.TpCreateGameParams.SetRanked
struct UTpCreateGameParams_SetRanked_Params
{
	bool                                               bInRanked;                                                // (Parm)
};

// Function Tp.TpCreateGameParams.SetPasswordUsed
struct UTpCreateGameParams_SetPasswordUsed_Params
{
	bool                                               bInUsed;                                                  // (Parm)
};

// Function Tp.TpCreateGameParams.SetPlayerTypeCapacity
struct UTpCreateGameParams_SetPlayerTypeCapacity_Params
{
	TEnumAsByte<ETpPlayerType>                         InType;                                                   // (Parm)
	int                                                InCapacity;                                               // (Parm)
};

// Function Tp.TpCreateGameParams.SetGameName
struct UTpCreateGameParams_SetGameName_Params
{
	struct FString                                     InName;                                                   // (Parm, NeedCtorLink)
};

// Function Tp.TpCreateGameParams.GetOpaqueFeslPointer
struct UTpCreateGameParams_GetOpaqueFeslPointer_Params
{
	struct FPointer                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpFileLockerService.ListFileLocker
struct UTpFileLockerService_ListFileLocker_Params
{
	TArray<struct FOnlineFileLockerFileInfo>           ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpFileLockerService.OnDeleteFileFromLockerComplete
struct UTpFileLockerService_OnDeleteFileFromLockerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpFileLockerService.DeleteFileFromLocker
struct UTpFileLockerService_DeleteFileFromLocker_Params
{
	struct FOnlineFileLockerFile                       FileInfo;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpFileLockerService.OnWriteFileToLockerComplete
struct UTpFileLockerService_OnWriteFileToLockerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpFileLockerService.WriteFileToLocker
struct UTpFileLockerService_WriteFileToLocker_Params
{
	struct FOnlineFileLockerFile                       File;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpFileLockerService.OnReadFileFromLockerComplete
struct UTpFileLockerService_OnReadFileFromLockerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpFileLockerService.ReadFileFromLocker
struct UTpFileLockerService_ReadFileFromLocker_Params
{
	struct FOnlineFileLockerFile                       File;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpFileLockerService.OnFetchLockerComplete
struct UTpFileLockerService_OnFetchLockerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpFileLockerService.FetchLocker
struct UTpFileLockerService_FetchLocker_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpFileLockerService.Update
struct UTpFileLockerService_Update_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function Tp.TpProtoHTTP.OnGetVersion
struct UTpProtoHTTP_OnGetVersion_Params
{
	struct FString                                     Version;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpProtoHTTP.GetCurrentVersion
struct UTpProtoHTTP_GetCurrentVersion_Params
{
	struct FString                                     Param;                                                    // (OptionalParm, Parm, NeedCtorLink)
};

// Function Tp.TpProtoHTTP.Update
struct UTpProtoHTTP_Update_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function Tp.TpGameBrowser.GetPlayNowJoinGameInfo
struct UTpGameBrowser_GetPlayNowJoinGameInfo_Params
{
	struct FTpPlayNowJoinGameInfo                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpGameBrowser.GetPlayNowCreateGameInfo
struct UTpGameBrowser_GetPlayNowCreateGameInfo_Params
{
	struct FTpPlayNowCreateGameInfo                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpGameBrowser.GetGameByIndex
struct UTpGameBrowser_GetGameByIndex_Params
{
	struct FTpLobbyRef                                 InLobby;                                                  // (Parm)
	int                                                InIndex;                                                  // (Parm)
	struct FTpGameRef                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpGameBrowser.DropGameList
struct UTpGameBrowser_DropGameList_Params
{
	struct FTpLobbyRef                                 InLobby;                                                  // (Parm)
};

// Function Tp.TpGameBrowser.FindGameAsync
struct UTpGameBrowser_FindGameAsync_Params
{
	struct FTpPlayNowParams                            Params;                                                   // (Parm, NeedCtorLink)
};

// Function Tp.TpGameBrowser.OnPlayNowMatched
struct UTpGameBrowser_OnPlayNowMatched_Params
{
	bool                                               bIsServer;                                                // (Parm)
	int                                                InError;                                                  // (Parm)
};

// Function Tp.TpGameBrowser.OnPlayNowStarted
struct UTpGameBrowser_OnPlayNowStarted_Params
{
};

// Function Tp.TpGameBrowser.StartQuickMatchAsync
struct UTpGameBrowser_StartQuickMatchAsync_Params
{
	struct FTpPlayNowParams                            Params;                                                   // (Parm, NeedCtorLink)
};

// Function Tp.TpGameBrowser.OnUpdateGameList
struct UTpGameBrowser_OnUpdateGameList_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpGameBrowser.UpdateGameListAsync
struct UTpGameBrowser_UpdateGameListAsync_Params
{
	struct FTpLobbyRef                                 InLobby;                                                  // (Parm)
	struct FTpGameListParams                           InParams;                                                 // (OptionalParm, Parm, OutParm)
	struct FTpGameListFavourites                       InFavourites;                                             // (OptionalParm, Parm, OutParm, NeedCtorLink)
};

// Function Tp.TpGameBrowser.GetLobbyByIndex
struct UTpGameBrowser_GetLobbyByIndex_Params
{
	int                                                InIndex;                                                  // (Parm)
	struct FTpLobbyRef                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpGameBrowser.DropLobbyList
struct UTpGameBrowser_DropLobbyList_Params
{
};

// Function Tp.TpGameBrowser.OnUpdateLobbyList
struct UTpGameBrowser_OnUpdateLobbyList_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpGameBrowser.UpdateLobbyListAsync
struct UTpGameBrowser_UpdateLobbyListAsync_Params
{
	struct FTpLobbyListParams                          InParams;                                                 // (OptionalParm, Parm, OutParm)
	struct FTpLobbyListFavourites                      InFavourites;                                             // (OptionalParm, Parm, OutParm, NeedCtorLink)
};

// Function Tp.TpGameManager.DisarmConnectionPlayerControllers
struct UTpGameManager_DisarmConnectionPlayerControllers_Params
{
};

// Function Tp.TpGameManager.GetGameHostIp
struct UTpGameManager_GetGameHostIp_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpGameManager.OnLeaveGame
struct UTpGameManager_OnLeaveGame_Params
{
};

// Function Tp.TpGameManager.LeaveGameAsync
struct UTpGameManager_LeaveGameAsync_Params
{
};

// Function Tp.TpGameManager.OnJoinGame
struct UTpGameManager_OnJoinGame_Params
{
	bool                                               bInOk;                                                    // (Parm)
	struct FString                                     hostIp;                                                   // (Parm, NeedCtorLink)
};

// Function Tp.TpGameManager.JoinPlayNowGameAsync
struct UTpGameManager_JoinPlayNowGameAsync_Params
{
	struct FTpPlayNowJoinGameInfo                      Info;                                                     // (Parm)
};

// Function Tp.TpGameManager.JoinGameAsync
struct UTpGameManager_JoinGameAsync_Params
{
	struct FTpLobbyRef                                 InLobby;                                                  // (Parm)
	struct FTpGameRef                                  InGame;                                                   // (Parm)
};

// Function Tp.TpGameManager.OnEndGame
struct UTpGameManager_OnEndGame_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpGameManager.EndGameAsync
struct UTpGameManager_EndGameAsync_Params
{
};

// Function Tp.TpGameManager.OnStartGame
struct UTpGameManager_OnStartGame_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpGameManager.StartGameAsync
struct UTpGameManager_StartGameAsync_Params
{
};

// Function Tp.TpGameManager.OnDestroyGame
struct UTpGameManager_OnDestroyGame_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpGameManager.DestroyGameAsync
struct UTpGameManager_DestroyGameAsync_Params
{
};

// Function Tp.TpGameManager.OnCreateGame
struct UTpGameManager_OnCreateGame_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpGameManager.CreatePlayNowGameAsync
struct UTpGameManager_CreatePlayNowGameAsync_Params
{
	struct FTpPlayNowCreateGameInfo                    Info;                                                     // (Parm)
};

// Function Tp.TpGameManager.CreateGameAsync
struct UTpGameManager_CreateGameAsync_Params
{
	class UTpCreateGameParams*                         InParams;                                                 // (Parm)
};

// Function Tp.TpGameManager.NewCreateGameParams
struct UTpGameManager_NewCreateGameParams_Params
{
	class UTpCreateGameParams*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpMessageService.InviteToPlayGroupResponse
struct UTpMessageService_InviteToPlayGroupResponse_Params
{
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpMessageService.OnInviteToPlayGroupReceived
struct UTpMessageService_OnInviteToPlayGroupReceived_Params
{
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
};

// Function Tp.TpMessageService.OnInviteToPlayGroupSent
struct UTpMessageService_OnInviteToPlayGroupSent_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpMessageService.PlayGroupInviteAsync
struct UTpMessageService_PlayGroupInviteAsync_Params
{
	struct FUniqueNetId                                User;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpMessageService.OnRemoveMessage
struct UTpMessageService_OnRemoveMessage_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpMessageService.RemoveMessage
struct UTpMessageService_RemoveMessage_Params
{
	int                                                MessageIndex;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpMessageService.GetFriendMessages
struct UTpMessageService_GetFriendMessages_Params
{
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function Tp.TpMessageService.OnSendMessage
struct UTpMessageService_OnSendMessage_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpMessageService.SendMessageAsync
struct UTpMessageService_SendMessageAsync_Params
{
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpMessageService.OnFriendRequestDelegate
struct UTpMessageService_OnFriendRequestDelegate_Params
{
	struct FUniqueNetId                                Sender;                                                   // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpMessageService.OnNewMessage
struct UTpMessageService_OnNewMessage_Params
{
	struct FUniqueNetId                                Sender;                                                   // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpMessageService.OnFriendRequestSent
struct UTpMessageService_OnFriendRequestSent_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpMessageService.FriendResponse
struct UTpMessageService_FriendResponse_Params
{
	struct FUniqueNetId                                NewFriend;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpMessageService.FriendRequestAsync
struct UTpMessageService_FriendRequestAsync_Params
{
	struct FUniqueNetId                                NewFriend;                                                // (Parm)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpMessageService.OnCheckInbox
struct UTpMessageService_OnCheckInbox_Params
{
};

// Function Tp.TpMessageService.CheckInboxAsync
struct UTpMessageService_CheckInboxAsync_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpMessageService.Update
struct UTpMessageService_Update_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function Tp.TpPlayGroupManager.OnPlayGroupGameLeave
struct UTpPlayGroupManager_OnPlayGroupGameLeave_Params
{
};

// Function Tp.TpPlayGroupManager.OnPlayGroupGameJoined
struct UTpPlayGroupManager_OnPlayGroupGameJoined_Params
{
	struct FTpLobbyRef                                 InLobby;                                                  // (Parm)
	struct FTpGameRef                                  InGame;                                                   // (Parm)
};

// Function Tp.TpPlayGroupManager.OnPlayGroupOwnerTransitionFinish
struct UTpPlayGroupManager_OnPlayGroupOwnerTransitionFinish_Params
{
};

// Function Tp.TpPlayGroupManager.OnPlayGroupOwnerTransitionStart
struct UTpPlayGroupManager_OnPlayGroupOwnerTransitionStart_Params
{
};

// Function Tp.TpPlayGroupManager.TransferOwnerShipAsync
struct UTpPlayGroupManager_TransferOwnerShipAsync_Params
{
	struct FUniqueNetId                                NewOwnerId;                                               // (Parm)
};

// Function Tp.TpPlayGroupManager.OnPlayGroupMemberLeave
struct UTpPlayGroupManager_OnPlayGroupMemberLeave_Params
{
	struct FUniqueNetId                                UserId;                                                   // (Parm)
	TEnumAsByte<EPlayGroupLeaveReason>                 Reason;                                                   // (Parm)
};

// Function Tp.TpPlayGroupManager.OnLeavePlayGroupComplete
struct UTpPlayGroupManager_OnLeavePlayGroupComplete_Params
{
};

// Function Tp.TpPlayGroupManager.LeavePlayGroupAsync
struct UTpPlayGroupManager_LeavePlayGroupAsync_Params
{
};

// Function Tp.TpPlayGroupManager.OnPlayGroupKicked
struct UTpPlayGroupManager_OnPlayGroupKicked_Params
{
};

// Function Tp.TpPlayGroupManager.KickMemberAsync
struct UTpPlayGroupManager_KickMemberAsync_Params
{
	struct FUniqueNetId                                UserId;                                                   // (Parm)
};

// Function Tp.TpPlayGroupManager.OnPlayGroupDestroyed
struct UTpPlayGroupManager_OnPlayGroupDestroyed_Params
{
};

// Function Tp.TpPlayGroupManager.DestroyPlayGroupAsync
struct UTpPlayGroupManager_DestroyPlayGroupAsync_Params
{
};

// Function Tp.TpPlayGroupManager.OnPlayGroupChatMessageReceived
struct UTpPlayGroupManager_OnPlayGroupChatMessageReceived_Params
{
	struct FUniqueNetId                                SenderId;                                                 // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpPlayGroupManager.BroadCastChatMessageAsync
struct UTpPlayGroupManager_BroadCastChatMessageAsync_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpPlayGroupManager.OnPlayGroupMemberJoin
struct UTpPlayGroupManager_OnPlayGroupMemberJoin_Params
{
	struct FUniqueNetId                                UserId;                                                   // (Parm)
};

// Function Tp.TpPlayGroupManager.OnPlayGroupJoined
struct UTpPlayGroupManager_OnPlayGroupJoined_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpPlayGroupManager.JoinPlayGroupAsync
struct UTpPlayGroupManager_JoinPlayGroupAsync_Params
{
	struct FUniqueNetId                                UserId;                                                   // (Parm)
};

// Function Tp.TpPlayGroupManager.OnPlayGroupCreated
struct UTpPlayGroupManager_OnPlayGroupCreated_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpPlayGroupManager.CreatePlayGroupAsync
struct UTpPlayGroupManager_CreatePlayGroupAsync_Params
{
	struct FPlayGroupCreateParams                      Params;                                                   // (Parm)
};

// Function Tp.TpPlayGroupManager.GetMyPlayGroupList
struct UTpPlayGroupManager_GetMyPlayGroupList_Params
{
	TArray<struct FPlayGroupListEntry>                 ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpPlayGroupManager.IsPlayGroupOwner
struct UTpPlayGroupManager_IsPlayGroupOwner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpPlayGroupManager.IsInPlayGroup
struct UTpPlayGroupManager_IsInPlayGroup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpSystemBase.SetOnScreenHandler
struct UTpSystemBase_SetOnScreenHandler_Params
{
	class UTpOnScreenErrorHandler*                     Handler;                                                  // (Parm)
};

// Function Tp.TpSystemBase.GetLatestError
struct UTpSystemBase_GetLatestError_Params
{
	struct FTpErrorInfo                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpSystemBase.RegisterLatestError
struct UTpSystemBase_RegisterLatestError_Params
{
	struct FTpErrorInfo                                LatestError;                                              // (Parm, NeedCtorLink)
};

// Function Tp.TpSystemBase.ImpelGameJoined
struct UTpSystemBase_ImpelGameJoined_Params
{
};

// Function Tp.TpSystemBase.ImpelGameDestroyed
struct UTpSystemBase_ImpelGameDestroyed_Params
{
};

// Function Tp.TpSystemBase.ImpelGameCreated
struct UTpSystemBase_ImpelGameCreated_Params
{
};

// Function Tp.TpSystemBase.ImpelDisconnected
struct UTpSystemBase_ImpelDisconnected_Params
{
};

// Function Tp.TpSystemBase.ImpelConnected
struct UTpSystemBase_ImpelConnected_Params
{
};

// Function Tp.TpSystemBase.GetProtoHTTP
struct UTpSystemBase_GetProtoHTTP_Params
{
	class UTpProtoHTTP*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpSystemBase.GetFileLockerService
struct UTpSystemBase_GetFileLockerService_Params
{
	class UTpFileLockerService*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpSystemBase.GetAchievementManager
struct UTpSystemBase_GetAchievementManager_Params
{
	class UTpAchievementManager*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpSystemBase.GetMessageService
struct UTpSystemBase_GetMessageService_Params
{
	class UTpMessageService*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpSystemBase.GetGameManager
struct UTpSystemBase_GetGameManager_Params
{
	class UTpGameManager*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpSystemBase.GetGameBrowser
struct UTpSystemBase_GetGameBrowser_Params
{
	class UTpGameBrowser*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpSystemBase.GetConnection
struct UTpSystemBase_GetConnection_Params
{
	class UTpConnection*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpSystemBase.GetUserManager
struct UTpSystemBase_GetUserManager_Params
{
	class UTpUserManager*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpSystemBase.GetPresenceManager
struct UTpSystemBase_GetPresenceManager_Params
{
	class UTpPresenceManager*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpSystemBase.GetRankingService
struct UTpSystemBase_GetRankingService_Params
{
	class UTpRankingService*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpSystemBase.GetPlayGroupManager
struct UTpSystemBase_GetPlayGroupManager_Params
{
	class UTpPlayGroupManager*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpSystemBase.GetAssociationManager
struct UTpSystemBase_GetAssociationManager_Params
{
	class UTpAssociationManager*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpSystemBase.ProcessTick
struct UTpSystemBase_ProcessTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function Tp.TpSystemBase.NpEventLoopControl
struct UTpSystemBase_NpEventLoopControl_Params
{
	int                                                Op;                                                       // (Parm)
};

// Function Tp.TpSystemBase.End
struct UTpSystemBase_End_Params
{
};

// Function Tp.TpSystemBase.Initialize
struct UTpSystemBase_Initialize_Params
{
	struct FTpInitializeParams                         InParams;                                                 // (Parm, NeedCtorLink)
};

// Function Tp.TpSystemBase.Get
struct UTpSystemBase_Get_Params
{
	class UTpSystemBase*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpPresenceManager.OnPresenceUpdated
struct UTpPresenceManager_OnPresenceUpdated_Params
{
};

// Function Tp.TpPresenceManager.SetPresence
struct UTpPresenceManager_SetPresence_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                StatusId;                                                 // (Parm)
	int                                                ContextId;                                                // (Parm)
	int                                                ContextValue;                                             // (Parm)
};

// Function Tp.TpPresenceManager.GetLocalPresence
struct UTpPresenceManager_GetLocalPresence_Params
{
	struct FTpPresence                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpPresenceManager.GetPresence
struct UTpPresenceManager_GetPresence_Params
{
	struct FUniqueNetId                                User;                                                     // (Parm)
	struct FTpPresence                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpRankingService.OnFlushOnlineStatsComplete
struct UTpRankingService_OnFlushOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpRankingService.FlushOnlineStats
struct UTpRankingService_FlushOnlineStats_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpRankingService.WriteOnlineStats
struct UTpRankingService_WriteOnlineStats_Params
{
	struct FUniqueNetId                                Player;                                                   // (Parm)
	class UOnlineStatsWrite*                           StatsWrite;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpRankingService.WriteOnlinePlayerScores
struct UTpRankingService_WriteOnlinePlayerScores_Params
{
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpRankingService.FreeStats
struct UTpRankingService_FreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
};

// Function Tp.TpRankingService.OnReadOnlineStatsComplete
struct UTpRankingService_OnReadOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpRankingService.ReadOnlineStatsByRankAroundPlayer
struct UTpRankingService_ReadOnlineStatsByRankAroundPlayer_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                NumRows;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpRankingService.ReadOnlineStatsByRank
struct UTpRankingService_ReadOnlineStatsByRank_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                StartIndex;                                               // (OptionalParm, Parm)
	int                                                NumToRead;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpRankingService.ReadOnlineStatsForFriends
struct UTpRankingService_ReadOnlineStatsForFriends_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpRankingService.ReadOnlineStats
struct UTpRankingService_ReadOnlineStats_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpRankingService.Initialize
struct UTpRankingService_Initialize_Params
{
	class UTpSystemBase*                               InSystemBase;                                             // (Parm)
};

// Function Tp.TpUserManager.ShowSendMessageUI
struct UTpUserManager_ShowSendMessageUI_Params
{
	struct FUniqueNetId                                Recipient;                                                // (Parm)
	bool                                               bIsFriendRequest;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUserManager.CancelShowGamerCardUI
struct UTpUserManager_CancelShowGamerCardUI_Params
{
};

// Function Tp.TpUserManager.OnShowGamerCardUI
struct UTpUserManager_OnShowGamerCardUI_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpUserManager.ShowGamerCardUI
struct UTpUserManager_ShowGamerCardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUserManager.OnGetPlayerId
struct UTpUserManager_OnGetPlayerId_Params
{
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpUserManager.LookupPlayerId
struct UTpUserManager_LookupPlayerId_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUserManager.GetUsername
struct UTpUserManager_GetUsername_Params
{
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpUserManager.GetPlayerId
struct UTpUserManager_GetPlayerId_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FUniqueNetId                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUserManager.GetLocalUsername
struct UTpUserManager_GetLocalUsername_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpUserManager.GetLocalPlayerId
struct UTpUserManager_GetLocalPlayerId_Params
{
	struct FUniqueNetId                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpDebugger.OnDestroyGame
struct UTpDebugger_OnDestroyGame_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function Tp.TpDebugger.DestroyGame
struct UTpDebugger_DestroyGame_Params
{
	class UOnlineSubsystem*                            InSys;                                                    // (Parm)
};

// Function Tp.TpDebugger.OnCreateGame
struct UTpDebugger_OnCreateGame_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function Tp.TpDebugger.CreateGame
struct UTpDebugger_CreateGame_Params
{
	class UOnlineSubsystem*                            InSys;                                                    // (Parm)
	struct FString                                     InName;                                                   // (Parm, NeedCtorLink)
	bool                                               bInIsLan;                                                 // (Parm)
};

// Function Tp.TpDebugger.OnCreateAccount
struct UTpDebugger_OnCreateAccount_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function Tp.TpDebugger.CreateAccount
struct UTpDebugger_CreateAccount_Params
{
	class UOnlineSubsystem*                            InSys;                                                    // (Parm)
	struct FString                                     InName;                                                   // (Parm, NeedCtorLink)
	struct FString                                     InPassword;                                               // (Parm, NeedCtorLink)
	struct FString                                     InEmail;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpDebugger.OnLogout
struct UTpDebugger_OnLogout_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function Tp.TpDebugger.Logout
struct UTpDebugger_Logout_Params
{
	class UOnlineSubsystem*                            InSys;                                                    // (Parm)
};

// Function Tp.TpDebugger.OnLoginFailed
struct UTpDebugger_OnLoginFailed_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EOnlineServerConnectionStatus>         ErrorCode;                                                // (Parm)
};

// Function Tp.TpDebugger.OnLoginChange
struct UTpDebugger_OnLoginChange_Params
{
};

// Function Tp.TpDebugger.Login
struct UTpDebugger_Login_Params
{
	class UOnlineSubsystem*                            InSys;                                                    // (Parm)
	struct FString                                     InName;                                                   // (Parm, NeedCtorLink)
	struct FString                                     InPasswd;                                                 // (Parm, NeedCtorLink)
};

// Function Tp.TpDebugger.Log
struct UTpDebugger_Log_Params
{
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
};

// Function Tp.TpDebugger.StateFaulted
struct UTpDebugger_StateFaulted_Params
{
	class UObject*                                     InObject;                                                 // (Parm)
	struct FString                                     InWhere;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpDebugger.StateChanged
struct UTpDebugger_StateChanged_Params
{
	class UObject*                                     InObject;                                                 // (Parm)
};

// Function Tp.TpDebugger.Register
struct UTpDebugger_Register_Params
{
	class UObject*                                     InObject;                                                 // (Parm)
};

// Function Tp.TpUoPlayer.SetActiveControllerIdNative
struct UTpUoPlayer_SetActiveControllerIdNative_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function Tp.TpUoPlayer.IsSignedIn
struct UTpUoPlayer_IsSignedIn_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.ProcessTick
struct UTpUoPlayer_ProcessTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function Tp.TpUoPlayer.SetActiveControllerId
struct UTpUoPlayer_SetActiveControllerId_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function Tp.TpUoPlayer.GetPlayersList
struct UTpUoPlayer_GetPlayersList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlinePlayer>                       Players;                                                  // (Parm, OutParm, NeedCtorLink)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.ClearReadPlayersCompleteDelegate
struct UTpUoPlayer_ClearReadPlayersCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadPlayersCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.SetReadPlayersCompleteDelegate
struct UTpUoPlayer_SetReadPlayersCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadPlayersCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnReadPlayersComplete_Remove
struct UTpUoPlayer_OnReadPlayersComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnReadPlayersComplete_Add
struct UTpUoPlayer_OnReadPlayersComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnReadPlayersComplete_Invoke
struct UTpUoPlayer_OnReadPlayersComplete_Invoke_Params
{
};

// Function Tp.TpUoPlayer.OnReadPlayersComplete
struct UTpUoPlayer_OnReadPlayersComplete_Params
{
};

// Function Tp.TpUoPlayer.ReadPlayersList
struct UTpUoPlayer_ReadPlayersList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.DeleteMessage
struct UTpUoPlayer_DeleteMessage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.OnNewMessage
struct UTpUoPlayer_OnNewMessage_Params
{
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.ClearFriendMessageReceivedDelegate
struct UTpUoPlayer_ClearFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddFriendMessageReceivedDelegate
struct UTpUoPlayer_AddFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnFriendMessageReceived_Remove
struct UTpUoPlayer_OnFriendMessageReceived_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnFriendMessageReceived_Add
struct UTpUoPlayer_OnFriendMessageReceived_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnFriendMessageReceived_Invoke
struct UTpUoPlayer_OnFriendMessageReceived_Invoke_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                SendingPlayer;                                            // (Parm)
	struct FString                                     SendingNick;                                              // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnFriendMessageReceived
struct UTpUoPlayer_OnFriendMessageReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                SendingPlayer;                                            // (Parm)
	struct FString                                     SendingNick;                                              // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.GetFriendMessages
struct UTpUoPlayer_GetFriendMessages_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.ClearJoinFriendGameCompleteDelegate
struct UTpUoPlayer_ClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddJoinFriendGameCompleteDelegate
struct UTpUoPlayer_AddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnJoinFriendGameComplete
struct UTpUoPlayer_OnJoinFriendGameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.JoinFriendGame
struct UTpUoPlayer_JoinFriendGame_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.ClearReceivedGameInviteDelegate
struct UTpUoPlayer_ClearReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddReceivedGameInviteDelegate
struct UTpUoPlayer_AddReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnReceivedGameInvite
struct UTpUoPlayer_OnReceivedGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     InviterName;                                              // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.SendGameInviteToFriends
struct UTpUoPlayer_SendGameInviteToFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Friends;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.SendGameInviteToFriend
struct UTpUoPlayer_SendGameInviteToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.ClearSendMessageByUsernameDelegate
struct UTpUoPlayer_ClearSendMessageByUsernameDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             SendMessageDelegate;                                      // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddSendMessageByUsernameDelegate
struct UTpUoPlayer_AddSendMessageByUsernameDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             SendMessageDelegate;                                      // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnSendMessageByUsername_Remove
struct UTpUoPlayer_OnSendMessageByUsername_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnSendMessageByUsername_Add
struct UTpUoPlayer_OnSendMessageByUsername_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnSendMessageByUsername_Invoke
struct UTpUoPlayer_OnSendMessageByUsername_Invoke_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function Tp.TpUoPlayer.OnSendMessageByUsername
struct UTpUoPlayer_OnSendMessageByUsername_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function Tp.TpUoPlayer.OnSendMessageByUsernameDone
struct UTpUoPlayer_OnSendMessageByUsernameDone_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpUoPlayer.SendMessageByUsernameStepTwo
struct UTpUoPlayer_SendMessageByUsernameStepTwo_Params
{
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpUoPlayer.SendMessageByUsername
struct UTpUoPlayer_SendMessageByUsername_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.SendMessageToFriend
struct UTpUoPlayer_SendMessageToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.OnFriendRequestDelegate
struct UTpUoPlayer_OnFriendRequestDelegate_Params
{
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.ClearFriendInviteReceivedDelegate
struct UTpUoPlayer_ClearFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddFriendInviteReceivedDelegate
struct UTpUoPlayer_AddFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnFriendInviteReceived_Remove
struct UTpUoPlayer_OnFriendInviteReceived_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnFriendInviteReceived_Add
struct UTpUoPlayer_OnFriendInviteReceived_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnFriendInviteReceived_Invoke
struct UTpUoPlayer_OnFriendInviteReceived_Invoke_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	struct FString                                     RequestingNick;                                           // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnFriendInviteReceived
struct UTpUoPlayer_OnFriendInviteReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	struct FString                                     RequestingNick;                                           // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.RemoveFriend
struct UTpUoPlayer_RemoveFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                FormerFriend;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.DenyFriendInvite
struct UTpUoPlayer_DenyFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.AcceptFriendInvite
struct UTpUoPlayer_AcceptFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.ClearAddFriendByNameCompleteDelegate
struct UTpUoPlayer_ClearAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddAddFriendByNameCompleteDelegate
struct UTpUoPlayer_AddAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnAddFriendByNameComplete_Remove
struct UTpUoPlayer_OnAddFriendByNameComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnAddFriendByNameComplete_Add
struct UTpUoPlayer_OnAddFriendByNameComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnAddFriendByNameComplete_Invoke
struct UTpUoPlayer_OnAddFriendByNameComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.OnAddFriendByNameComplete
struct UTpUoPlayer_OnAddFriendByNameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.OnAddFriend
struct UTpUoPlayer_OnAddFriend_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.OnLookupPlayerIdForAddFriend
struct UTpUoPlayer_OnLookupPlayerIdForAddFriend_Params
{
	struct FUniqueNetId                                UserId;                                                   // (Parm)
	bool                                               bSuccess;                                                 // (Parm)
};

// Function Tp.TpUoPlayer.AddFriendByName
struct UTpUoPlayer_AddFriendByName_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     FriendName;                                               // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.AddFriend
struct UTpUoPlayer_AddFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                NewFriend;                                                // (Parm)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.SetKeyboardInputResults
struct UTpUoPlayer_SetKeyboardInputResults_Params
{
	struct FString                                     Value;                                                    // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.GetKeyboardInputResults
struct UTpUoPlayer_GetKeyboardInputResults_Params
{
	unsigned char                                      bWasCanceled;                                             // (Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.ClearKeyboardInputDoneDelegate
struct UTpUoPlayer_ClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddKeyboardInputDoneDelegate
struct UTpUoPlayer_AddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnKeyboardInputComplete_Remove
struct UTpUoPlayer_OnKeyboardInputComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnKeyboardInputComplete_Add
struct UTpUoPlayer_OnKeyboardInputComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnKeyboardInputComplete_Invoke
struct UTpUoPlayer_OnKeyboardInputComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.OnKeyboardInputComplete
struct UTpUoPlayer_OnKeyboardInputComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.ShowKeyboardUI
struct UTpUoPlayer_ShowKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     TitleText;                                                // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (Parm, NeedCtorLink)
	bool                                               bIsPassword;                                              // (OptionalParm, Parm)
	bool                                               bShouldValidate;                                          // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                              // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.SetOnlineStatus
struct UTpUoPlayer_SetOnlineStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                StatusId;                                                 // (Parm)
	TArray<struct FLocalizedStringSetting>             LocalizedStringSettings;                                  // (Const, Parm, OutParm, NeedCtorLink)
	TArray<struct FSettingsProperty>                   Properties;                                               // (Const, Parm, OutParm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.GetFriendsList
struct UTpUoPlayer_GetFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriend>                       Friends;                                                  // (Parm, OutParm, NeedCtorLink)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.ClearReadFriendsCompleteDelegate
struct UTpUoPlayer_ClearReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddReadFriendsCompleteDelegate
struct UTpUoPlayer_AddReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnFriendsListLoaded
struct UTpUoPlayer_OnFriendsListLoaded_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpUoPlayer.OnReadFriendsComplete_Remove
struct UTpUoPlayer_OnReadFriendsComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnReadFriendsComplete_Add
struct UTpUoPlayer_OnReadFriendsComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnReadFriendsComplete_Invoke
struct UTpUoPlayer_OnReadFriendsComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.OnReadFriendsComplete
struct UTpUoPlayer_OnReadFriendsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.ReadFriendsList
struct UTpUoPlayer_ReadFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.ClearWriteProfileSettingsCompleteDelegate
struct UTpUoPlayer_ClearWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddWriteProfileSettingsCompleteDelegate
struct UTpUoPlayer_AddWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.SaveSystemWriteProfileComplete
struct UTpUoPlayer_SaveSystemWriteProfileComplete_Params
{
	TEnumAsByte<ETsResult>                             Result;                                                   // (Parm)
};

// Function Tp.TpUoPlayer.WriteProfileSettings
struct UTpUoPlayer_WriteProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.OnWriteProfileSettingsComplete_Remove
struct UTpUoPlayer_OnWriteProfileSettingsComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnWriteProfileSettingsComplete_Add
struct UTpUoPlayer_OnWriteProfileSettingsComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnWriteProfileSettingsComplete_Invoke
struct UTpUoPlayer_OnWriteProfileSettingsComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.OnWriteProfileSettingsComplete
struct UTpUoPlayer_OnWriteProfileSettingsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.GetProfileSettings
struct UTpUoPlayer_GetProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.ClearReadProfileSettingsCompleteDelegate
struct UTpUoPlayer_ClearReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddReadProfileSettingsCompleteDelegate
struct UTpUoPlayer_AddReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.SaveSystemReadProfileComplete
struct UTpUoPlayer_SaveSystemReadProfileComplete_Params
{
	TEnumAsByte<ETsResult>                             Result;                                                   // (Parm)
};

// Function Tp.TpUoPlayer.ReadProfileSettings
struct UTpUoPlayer_ReadProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.OnReadProfileSettingsComplete_Remove
struct UTpUoPlayer_OnReadProfileSettingsComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnReadProfileSettingsComplete_Add
struct UTpUoPlayer_OnReadProfileSettingsComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnReadProfileSettingsComplete_Invoke
struct UTpUoPlayer_OnReadProfileSettingsComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.OnReadProfileSettingsComplete
struct UTpUoPlayer_OnReadProfileSettingsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.ClearFriendsChangeDelegate
struct UTpUoPlayer_ClearFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddFriendsChangeDelegate
struct UTpUoPlayer_AddFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnFriendsChangeDelegate
struct UTpUoPlayer_OnFriendsChangeDelegate_Params
{
};

// Function Tp.TpUoPlayer.OnPresenceChangeDelegate
struct UTpUoPlayer_OnPresenceChangeDelegate_Params
{
};

// Function Tp.TpUoPlayer.ClearMutingChangeDelegate
struct UTpUoPlayer_ClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddMutingChangeDelegate
struct UTpUoPlayer_AddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.ClearLoginCancelledDelegate
struct UTpUoPlayer_ClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddLoginCancelledDelegate
struct UTpUoPlayer_AddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.ClearLoginChangeDelegate
struct UTpUoPlayer_ClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (OptionalParm, Parm)
};

// Function Tp.TpUoPlayer.AddLoginChangeDelegate
struct UTpUoPlayer_AddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (OptionalParm, Parm)
};

// Function Tp.TpUoPlayer.ShowFriendsUI
struct UTpUoPlayer_ShowFriendsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.IsMuted
struct UTpUoPlayer_IsMuted_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.AreAnyFriends
struct UTpUoPlayer_AreAnyFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FFriendsQuery>                       Query;                                                    // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.IsFriend
struct UTpUoPlayer_IsFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.CanShowPresenceInformation
struct UTpUoPlayer_CanShowPresenceInformation_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.CanViewPlayerProfiles
struct UTpUoPlayer_CanViewPlayerProfiles_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.CanPurchaseContent
struct UTpUoPlayer_CanPurchaseContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.CanDownloadUserContent
struct UTpUoPlayer_CanDownloadUserContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.CanCommunicate
struct UTpUoPlayer_CanCommunicate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.CanPlayOnline
struct UTpUoPlayer_CanPlayOnline_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.GetPlayerNickname
struct UTpUoPlayer_GetPlayerNickname_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.GetUniquePlayerId
struct UTpUoPlayer_GetUniquePlayerId_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerId;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.GetLoginStatus
struct UTpUoPlayer_GetLoginStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<ELoginStatus>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.ClearLogoutCompletedDelegate
struct UTpUoPlayer_ClearLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddLogoutCompletedDelegate
struct UTpUoPlayer_AddLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnLogoutCompleted_Remove
struct UTpUoPlayer_OnLogoutCompleted_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnLogoutCompleted_Add
struct UTpUoPlayer_OnLogoutCompleted_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnLogoutCompleted_Invoke
struct UTpUoPlayer_OnLogoutCompleted_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.OnLogoutCompleted
struct UTpUoPlayer_OnLogoutCompleted_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayer.Logout
struct UTpUoPlayer_Logout_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.ClearLoginFailedDelegate
struct UTpUoPlayer_ClearLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.AddLoginFailedDelegate
struct UTpUoPlayer_AddLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnLoginFailed_Remove
struct UTpUoPlayer_OnLoginFailed_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnLoginFailed_Add
struct UTpUoPlayer_OnLoginFailed_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnLoginFailed_Invoke
struct UTpUoPlayer_OnLoginFailed_Invoke_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EOnlineServerConnectionStatus>         ErrorCode;                                                // (Parm)
};

// Function Tp.TpUoPlayer.OnLoginFailed
struct UTpUoPlayer_OnLoginFailed_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EOnlineServerConnectionStatus>         ErrorCode;                                                // (Parm)
};

// Function Tp.TpUoPlayer.AutoLogin
struct UTpUoPlayer_AutoLogin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.Login
struct UTpUoPlayer_Login_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     LoginName;                                                // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	bool                                               bWantsLocalOnly;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.ShowLoginUI
struct UTpUoPlayer_ShowLoginUI_Params
{
	bool                                               bShowOnlineOnly;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayer.OnFriendsChange_Remove
struct UTpUoPlayer_OnFriendsChange_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnFriendsChange_Add
struct UTpUoPlayer_OnFriendsChange_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnFriendsChange_Invoke
struct UTpUoPlayer_OnFriendsChange_Invoke_Params
{
};

// Function Tp.TpUoPlayer.OnFriendsChange
struct UTpUoPlayer_OnFriendsChange_Params
{
};

// Function Tp.TpUoPlayer.OnMutingChange_Remove
struct UTpUoPlayer_OnMutingChange_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnMutingChange_Add
struct UTpUoPlayer_OnMutingChange_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnMutingChange_Invoke
struct UTpUoPlayer_OnMutingChange_Invoke_Params
{
};

// Function Tp.TpUoPlayer.OnMutingChange
struct UTpUoPlayer_OnMutingChange_Params
{
};

// Function Tp.TpUoPlayer.OnLoginCancelled_Remove
struct UTpUoPlayer_OnLoginCancelled_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnLoginCancelled_Add
struct UTpUoPlayer_OnLoginCancelled_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnLoginCancelled_Invoke
struct UTpUoPlayer_OnLoginCancelled_Invoke_Params
{
};

// Function Tp.TpUoPlayer.OnLoginCancelled
struct UTpUoPlayer_OnLoginCancelled_Params
{
};

// Function Tp.TpUoPlayer.OnLoginChange_Remove
struct UTpUoPlayer_OnLoginChange_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnLoginChange_Add
struct UTpUoPlayer_OnLoginChange_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayer.OnLoginChange_Invoke
struct UTpUoPlayer_OnLoginChange_Invoke_Params
{
};

// Function Tp.TpUoPlayer.OnLoginChange
struct UTpUoPlayer_OnLoginChange_Params
{
};

// Function Tp.TpUoPlayer.InitializeNative
struct UTpUoPlayer_InitializeNative_Params
{
};

// Function Tp.TpUoPlayer.Initialize
struct UTpUoPlayer_Initialize_Params
{
	class UTpSystemBase*                               InSystemBase;                                             // (Parm)
};

// Function Tp.TpUoPlayerEx.ShowSendMessageUI
struct UTpUoPlayerEx_ShowSendMessageUI_Params
{
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	bool                                               bIsFriendRequest;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.ShowPlayersUI
struct UTpUoPlayerEx_ShowPlayersUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.ShowFriendsInviteUI
struct UTpUoPlayerEx_ShowFriendsInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.ClearProfileDataChangedDelegate
struct UTpUoPlayerEx_ClearProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                               // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayerEx.AddProfileDataChangedDelegate
struct UTpUoPlayerEx_AddProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                               // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayerEx.OnProfileDataChanged
struct UTpUoPlayerEx_OnProfileDataChanged_Params
{
};

// Function Tp.TpUoPlayerEx.UnlockGamerPicture
struct UTpUoPlayerEx_UnlockGamerPicture_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                PictureId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.OnUnlockAchievementComplete
struct UTpUoPlayerEx_OnUnlockAchievementComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayerEx.ClearUnlockAchievementCompleteDelegate
struct UTpUoPlayerEx_ClearUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayerEx.AddUnlockAchievementCompleteDelegate
struct UTpUoPlayerEx_AddUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayerEx.UnlockAchievement
struct UTpUoPlayerEx_UnlockAchievement_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                AchievementId;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.IsDeviceValid
struct UTpUoPlayerEx_IsDeviceValid_Params
{
	int                                                DeviceID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.OnDeviceSelectionComplete
struct UTpUoPlayerEx_OnDeviceSelectionComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayerEx.GetDeviceSelectionResults
struct UTpUoPlayerEx_GetDeviceSelectionResults_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     DeviceName;                                               // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.ClearDeviceSelectionDoneDelegate
struct UTpUoPlayerEx_ClearDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             DeviceDelegate;                                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayerEx.AddDeviceSelectionDoneDelegate
struct UTpUoPlayerEx_AddDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             DeviceDelegate;                                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayerEx.ShowDeviceSelectionUI
struct UTpUoPlayerEx_ShowDeviceSelectionUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                SizeNeeded;                                               // (Parm)
	bool                                               bForceShowUI;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.ShowMembershipMarketplaceUI
struct UTpUoPlayerEx_ShowMembershipMarketplaceUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.ShowContentMarketplaceUI
struct UTpUoPlayerEx_ShowContentMarketplaceUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.ShowInviteUI
struct UTpUoPlayerEx_ShowInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     InviteText;                                               // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.ShowAchievementsUI
struct UTpUoPlayerEx_ShowAchievementsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.ShowMessagesUI
struct UTpUoPlayerEx_ShowMessagesUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.CancelShowGamerCardUI
struct UTpUoPlayerEx_CancelShowGamerCardUI_Params
{
};

// Function Tp.TpUoPlayerEx.OnShowGamerCardUI
struct UTpUoPlayerEx_OnShowGamerCardUI_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayerEx.ClearShowGamerCardResultDelegate
struct UTpUoPlayerEx_ClearShowGamerCardResultDelegate_Params
{
	struct FScriptDelegate                             GamerCardDelegate;                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayerEx.AddShowGamerCardResultDelegate
struct UTpUoPlayerEx_AddShowGamerCardResultDelegate_Params
{
	struct FScriptDelegate                             GamerCardDelegate;                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayerEx.OnShowGamerCardResult_Remove
struct UTpUoPlayerEx_OnShowGamerCardResult_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayerEx.OnShowGamerCardResult_Add
struct UTpUoPlayerEx_OnShowGamerCardResult_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayerEx.OnShowGamerCardResult_Invoke
struct UTpUoPlayerEx_OnShowGamerCardResult_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayerEx.OnShowGamerCardResult
struct UTpUoPlayerEx_OnShowGamerCardResult_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayerEx.ShowGamerCardUI
struct UTpUoPlayerEx_ShowGamerCardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.ShowFeedbackUI
struct UTpUoPlayerEx_ShowFeedbackUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayerEx.Initialize
struct UTpUoPlayerEx_Initialize_Params
{
	class UTpSystemBase*                               InSystemBase;                                             // (Parm)
};

// Function Tp.TpUoSystem.ProcessTick
struct UTpUoSystem_ProcessTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function Tp.TpUoSystem.ClearStorageDeviceChangeDelegate
struct UTpUoSystem_ClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.AddStorageDeviceChangeDelegate
struct UTpUoSystem_AddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnStorageDeviceChange_Remove
struct UTpUoSystem_OnStorageDeviceChange_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnStorageDeviceChange_Add
struct UTpUoSystem_OnStorageDeviceChange_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnStorageDeviceChange_Invoke
struct UTpUoSystem_OnStorageDeviceChange_Invoke_Params
{
};

// Function Tp.TpUoSystem.OnStorageDeviceChange
struct UTpUoSystem_OnStorageDeviceChange_Params
{
};

// Function Tp.TpUoSystem.GetNATType
struct UTpUoSystem_GetNATType_Params
{
	TEnumAsByte<ENATType>                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoSystem.ClearConnectionStatusChangeDelegate
struct UTpUoSystem_ClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.AddConnectionStatusChangeDelegate
struct UTpUoSystem_AddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnConnectionChange
struct UTpUoSystem_OnConnectionChange_Params
{
	bool                                               bConnected;                                               // (Parm)
};

// Function Tp.TpUoSystem.OnConnectionStatusChange_Remove
struct UTpUoSystem_OnConnectionStatusChange_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnConnectionStatusChange_Add
struct UTpUoSystem_OnConnectionStatusChange_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnConnectionStatusChange_Invoke
struct UTpUoSystem_OnConnectionStatusChange_Invoke_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ConnectionStatus;                                         // (Parm)
};

// Function Tp.TpUoSystem.OnConnectionStatusChange
struct UTpUoSystem_OnConnectionStatusChange_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ConnectionStatus;                                         // (Parm)
};

// Function Tp.TpUoSystem.IsControllerConnected
struct UTpUoSystem_IsControllerConnected_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoSystem.ClearControllerChangeDelegate
struct UTpUoSystem_ClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.AddControllerChangeDelegate
struct UTpUoSystem_AddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnControllerChange_Remove
struct UTpUoSystem_OnControllerChange_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnControllerChange_Add
struct UTpUoSystem_OnControllerChange_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnControllerChange_Invoke
struct UTpUoSystem_OnControllerChange_Invoke_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               bIsConnected;                                             // (Parm)
};

// Function Tp.TpUoSystem.OnControllerChange
struct UTpUoSystem_OnControllerChange_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               bIsConnected;                                             // (Parm)
};

// Function Tp.TpUoSystem.SetNetworkNotificationPosition
struct UTpUoSystem_SetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          NewPos;                                                   // (Parm)
};

// Function Tp.TpUoSystem.GetNetworkNotificationPosition
struct UTpUoSystem_GetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoSystem.ClearExternalUIChangeDelegate
struct UTpUoSystem_ClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                       // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.AddExternalUIChangeDelegate
struct UTpUoSystem_AddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                       // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.DispatchExternalUIChange
struct UTpUoSystem_DispatchExternalUIChange_Params
{
	bool                                               bIsOpening;                                               // (Parm)
};

// Function Tp.TpUoSystem.OnExternalUIChange_Remove
struct UTpUoSystem_OnExternalUIChange_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnExternalUIChange_Add
struct UTpUoSystem_OnExternalUIChange_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnExternalUIChange_Invoke
struct UTpUoSystem_OnExternalUIChange_Invoke_Params
{
	bool                                               bIsOpening;                                               // (Parm)
};

// Function Tp.TpUoSystem.OnExternalUIChange
struct UTpUoSystem_OnExternalUIChange_Params
{
	bool                                               bIsOpening;                                               // (Parm)
};

// Function Tp.TpUoSystem.ClearLinkStatusChangeDelegate
struct UTpUoSystem_ClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.AddLinkStatusChangeDelegate
struct UTpUoSystem_AddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnLinkStatusChange_Remove
struct UTpUoSystem_OnLinkStatusChange_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnLinkStatusChange_Add
struct UTpUoSystem_OnLinkStatusChange_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoSystem.OnLinkStatusChange_Invoke
struct UTpUoSystem_OnLinkStatusChange_Invoke_Params
{
	bool                                               bIsConnected;                                             // (Parm)
};

// Function Tp.TpUoSystem.OnLinkStatusChange
struct UTpUoSystem_OnLinkStatusChange_Params
{
	bool                                               bIsConnected;                                             // (Parm)
};

// Function Tp.TpUoSystem.HasLinkConnection
struct UTpUoSystem_HasLinkConnection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoSystem.InitializeNative
struct UTpUoSystem_InitializeNative_Params
{
};

// Function Tp.TpUoSystem.Initialize
struct UTpUoSystem_Initialize_Params
{
	class UTpSystemBase*                               InSystemBase;                                             // (Parm)
};

// Function Tp.TpOnScreenErrorHandler.Finalize
struct UTpOnScreenErrorHandler_Finalize_Params
{
};

// Function Tp.TpOnScreenErrorHandler.Initialize
struct UTpOnScreenErrorHandler_Initialize_Params
{
};

// Function Tp.TpOnScreenErrorHandler.Tick
struct UTpOnScreenErrorHandler_Tick_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function Tp.TpSystem.Init
struct UTpSystem_Init_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoFileLocker.ListFileLocker
struct UTpUoFileLocker_ListFileLocker_Params
{
	TArray<struct FOnlineFileLockerFileInfo>           ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.ClearOnDeleteFileFromLockerCompleteDelegate
struct UTpUoFileLocker_ClearOnDeleteFileFromLockerCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteFileFromLockerDelegate;                             // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.Del_OnDeleteFileFromLockerComplete
struct UTpUoFileLocker_Del_OnDeleteFileFromLockerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoFileLocker.AddOnDeleteFileFromLockerCompleteDelegate
struct UTpUoFileLocker_AddOnDeleteFileFromLockerCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteFileFromLockerDelegate;                             // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.OnDeleteFileFromLockerComplete_Remove
struct UTpUoFileLocker_OnDeleteFileFromLockerComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.OnDeleteFileFromLockerComplete_Add
struct UTpUoFileLocker_OnDeleteFileFromLockerComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.OnDeleteFileFromLockerComplete_Invoke
struct UTpUoFileLocker_OnDeleteFileFromLockerComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoFileLocker.OnDeleteFileFromLockerComplete
struct UTpUoFileLocker_OnDeleteFileFromLockerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoFileLocker.DeleteFileFromLocker
struct UTpUoFileLocker_DeleteFileFromLocker_Params
{
	struct FOnlineFileLockerFile                       File;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoFileLocker.ClearOnWriteFileToLockerCompleteDelegate
struct UTpUoFileLocker_ClearOnWriteFileToLockerCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteFileToLockerDelegate;                                // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.Del_OnWriteFileToLockerComplete
struct UTpUoFileLocker_Del_OnWriteFileToLockerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoFileLocker.AddOnWriteFileToLockerCompleteDelegate
struct UTpUoFileLocker_AddOnWriteFileToLockerCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteFileToLockerDelegate;                                // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.OnWriteFileToLockerComplete_Remove
struct UTpUoFileLocker_OnWriteFileToLockerComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.OnWriteFileToLockerComplete_Add
struct UTpUoFileLocker_OnWriteFileToLockerComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.OnWriteFileToLockerComplete_Invoke
struct UTpUoFileLocker_OnWriteFileToLockerComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoFileLocker.OnWriteFileToLockerComplete
struct UTpUoFileLocker_OnWriteFileToLockerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoFileLocker.WriteFileToLocker
struct UTpUoFileLocker_WriteFileToLocker_Params
{
	struct FOnlineFileLockerFile                       File;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoFileLocker.ClearOnReadFileFromLockerCompleteDelegate
struct UTpUoFileLocker_ClearOnReadFileFromLockerCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadFileFromLockerDelegate;                               // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.Del_OnReadFileFromLockerComplete
struct UTpUoFileLocker_Del_OnReadFileFromLockerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoFileLocker.AddOnReadFileFromLockerCompleteDelegate
struct UTpUoFileLocker_AddOnReadFileFromLockerCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadFileFromLockerDelegate;                               // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.OnReadFileFromLockerComplete_Remove
struct UTpUoFileLocker_OnReadFileFromLockerComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.OnReadFileFromLockerComplete_Add
struct UTpUoFileLocker_OnReadFileFromLockerComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.OnReadFileFromLockerComplete_Invoke
struct UTpUoFileLocker_OnReadFileFromLockerComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoFileLocker.OnReadFileFromLockerComplete
struct UTpUoFileLocker_OnReadFileFromLockerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoFileLocker.ReadFileFromLocker
struct UTpUoFileLocker_ReadFileFromLocker_Params
{
	struct FOnlineFileLockerFile                       File;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoFileLocker.ClearOnFetchLockerCompleteDelegate
struct UTpUoFileLocker_ClearOnFetchLockerCompleteDelegate_Params
{
	struct FScriptDelegate                             FetchLockerDelegate;                                      // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.Del_OnFetchLockerComplete
struct UTpUoFileLocker_Del_OnFetchLockerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoFileLocker.AddOnFetchLockerCompleteDelegate
struct UTpUoFileLocker_AddOnFetchLockerCompleteDelegate_Params
{
	struct FScriptDelegate                             FetchLockerDelegate;                                      // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.OnFetchLockerComplete_Remove
struct UTpUoFileLocker_OnFetchLockerComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.OnFetchLockerComplete_Add
struct UTpUoFileLocker_OnFetchLockerComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoFileLocker.OnFetchLockerComplete_Invoke
struct UTpUoFileLocker_OnFetchLockerComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoFileLocker.OnFetchLockerComplete
struct UTpUoFileLocker_OnFetchLockerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoFileLocker.FetchLocker
struct UTpUoFileLocker_FetchLocker_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoFileLocker.Initialize
struct UTpUoFileLocker_Initialize_Params
{
	class UTpSystemBase*                               InSystemBase;                                             // (Parm)
};

// Function Tp.TpUoStats.RegisterStatGuid
struct UTpUoStats_RegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	struct FString                                     ClientStatGuid;                                           // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoStats.GetClientStatGuid
struct UTpUoStats_GetClientStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpUoStats.ClearRegisterHostStatGuidCompleteDelegateDelegate
struct UTpUoStats_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function Tp.TpUoStats.AddRegisterHostStatGuidCompleteDelegate
struct UTpUoStats_AddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function Tp.TpUoStats.OnRegisterHostStatGuidComplete
struct UTpUoStats_OnRegisterHostStatGuidComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoStats.RegisterHostStatGuid
struct UTpUoStats_RegisterHostStatGuid_Params
{
	struct FString                                     HostStatGuid;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoStats.GetHostStatGuid
struct UTpUoStats_GetHostStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpUoStats.WriteOnlinePlayerScores
struct UTpUoStats_WriteOnlinePlayerScores_Params
{
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoStats.Del_OnFlushOnlineStatsComplete
struct UTpUoStats_Del_OnFlushOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoStats.ClearFlushOnlineStatsCompleteDelegate
struct UTpUoStats_ClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function Tp.TpUoStats.AddFlushOnlineStatsCompleteDelegate
struct UTpUoStats_AddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function Tp.TpUoStats.OnFlushOnlineStatsComplete_Remove
struct UTpUoStats_OnFlushOnlineStatsComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoStats.OnFlushOnlineStatsComplete_Add
struct UTpUoStats_OnFlushOnlineStatsComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoStats.OnFlushOnlineStatsComplete_Invoke
struct UTpUoStats_OnFlushOnlineStatsComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoStats.OnFlushOnlineStatsComplete
struct UTpUoStats_OnFlushOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoStats.FlushOnlineStats
struct UTpUoStats_FlushOnlineStats_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoStats.WriteOnlineStats
struct UTpUoStats_WriteOnlineStats_Params
{
	struct FUniqueNetId                                Player;                                                   // (Parm)
	class UOnlineStatsWrite*                           StatsWrite;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoStats.FreeStats
struct UTpUoStats_FreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
};

// Function Tp.TpUoStats.OnReadOnlineStatsComplete_Remove
struct UTpUoStats_OnReadOnlineStatsComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoStats.OnReadOnlineStatsComplete_Add
struct UTpUoStats_OnReadOnlineStatsComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoStats.OnReadOnlineStatsComplete_Invoke
struct UTpUoStats_OnReadOnlineStatsComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoStats.OnReadOnlineStatsComplete
struct UTpUoStats_OnReadOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoStats.Del_OnReadOnlineStatsComplete
struct UTpUoStats_Del_OnReadOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoStats.ClearReadOnlineStatsCompleteDelegate
struct UTpUoStats_ClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function Tp.TpUoStats.AddReadOnlineStatsCompleteDelegate
struct UTpUoStats_AddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function Tp.TpUoStats.ReadOnlineStatsByRankAroundPlayer
struct UTpUoStats_ReadOnlineStatsByRankAroundPlayer_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                NumRows;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoStats.ReadOnlineStatsByRank
struct UTpUoStats_ReadOnlineStatsByRank_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                StartIndex;                                               // (OptionalParm, Parm)
	int                                                NumToRead;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoStats.ReadOnlineStatsForFriends
struct UTpUoStats_ReadOnlineStatsForFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoStats.ReadOnlineStats
struct UTpUoStats_ReadOnlineStats_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoStats.Initialize
struct UTpUoStats_Initialize_Params
{
	class UTpSystemBase*                               InSystemBase;                                             // (Parm)
};

// Function Tp.TpUoPlayGroup.LeaveGroupGame
struct UTpUoPlayGroup_LeaveGroupGame_Params
{
};

// Function Tp.TpUoPlayGroup.Del_OnPlayGroupGameLeave
struct UTpUoPlayGroup_Del_OnPlayGroupGameLeave_Params
{
};

// Function Tp.TpUoPlayGroup.ClearPlayGroupGameLeaveDelegate
struct UTpUoPlayGroup_ClearPlayGroupGameLeaveDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupGameLeaveDelegate;                             // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddPlayGroupGameLeaveDelegate
struct UTpUoPlayGroup_AddPlayGroupGameLeaveDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupGameLeaveDelegate;                             // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupGameLeave_Remove
struct UTpUoPlayGroup_OnPlayGroupGameLeave_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupGameLeave_Add
struct UTpUoPlayGroup_OnPlayGroupGameLeave_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupGameLeave_Invoke
struct UTpUoPlayGroup_OnPlayGroupGameLeave_Invoke_Params
{
};

// Function Tp.TpUoPlayGroup.OnPlayGroupGameLeave
struct UTpUoPlayGroup_OnPlayGroupGameLeave_Params
{
};

// Function Tp.TpUoPlayGroup.JoinGroupGame
struct UTpUoPlayGroup_JoinGroupGame_Params
{
};

// Function Tp.TpUoPlayGroup.Del_OnPlayGroupGameJoined
struct UTpUoPlayGroup_Del_OnPlayGroupGameJoined_Params
{
	struct FTpLobbyRef                                 InLobby;                                                  // (Parm)
	struct FTpGameRef                                  InGame;                                                   // (Parm)
};

// Function Tp.TpUoPlayGroup.ClearPlayGroupGameJoinedDelegate
struct UTpUoPlayGroup_ClearPlayGroupGameJoinedDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupGameJoinedDelegate;                            // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddPlayGroupGameJoinedDelegate
struct UTpUoPlayGroup_AddPlayGroupGameJoinedDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupGameJoinedDelegate;                            // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupGameJoined_Remove
struct UTpUoPlayGroup_OnPlayGroupGameJoined_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupGameJoined_Add
struct UTpUoPlayGroup_OnPlayGroupGameJoined_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupGameJoined_Invoke
struct UTpUoPlayGroup_OnPlayGroupGameJoined_Invoke_Params
{
};

// Function Tp.TpUoPlayGroup.OnPlayGroupGameJoined
struct UTpUoPlayGroup_OnPlayGroupGameJoined_Params
{
};

// Function Tp.TpUoPlayGroup.Del_OnPlayGroupOwnerTransitionFinish
struct UTpUoPlayGroup_Del_OnPlayGroupOwnerTransitionFinish_Params
{
};

// Function Tp.TpUoPlayGroup.ClearPlayGroupOwnerTransitionFinishDelegate
struct UTpUoPlayGroup_ClearPlayGroupOwnerTransitionFinishDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupOwnerTransitionFinishDelegate;                 // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddPlayGroupOwnerTransitionFinishDelegate
struct UTpUoPlayGroup_AddPlayGroupOwnerTransitionFinishDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupOwnerTransitionFinishDelegate;                 // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionFinish_Remove
struct UTpUoPlayGroup_OnPlayGroupOwnerTransitionFinish_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionFinish_Add
struct UTpUoPlayGroup_OnPlayGroupOwnerTransitionFinish_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionFinish_Invoke
struct UTpUoPlayGroup_OnPlayGroupOwnerTransitionFinish_Invoke_Params
{
};

// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionFinish
struct UTpUoPlayGroup_OnPlayGroupOwnerTransitionFinish_Params
{
};

// Function Tp.TpUoPlayGroup.Del_OnPlayGroupOwnerTransitionStart
struct UTpUoPlayGroup_Del_OnPlayGroupOwnerTransitionStart_Params
{
};

// Function Tp.TpUoPlayGroup.ClearPlayGroupOwnerTransitionStartDelegate
struct UTpUoPlayGroup_ClearPlayGroupOwnerTransitionStartDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupOwnerTransitionStartDelegate;                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddPlayGroupOwnerTransitionStartDelegate
struct UTpUoPlayGroup_AddPlayGroupOwnerTransitionStartDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupOwnerTransitionStartDelegate;                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionStart_Remove
struct UTpUoPlayGroup_OnPlayGroupOwnerTransitionStart_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionStart_Add
struct UTpUoPlayGroup_OnPlayGroupOwnerTransitionStart_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionStart_Invoke
struct UTpUoPlayGroup_OnPlayGroupOwnerTransitionStart_Invoke_Params
{
};

// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionStart
struct UTpUoPlayGroup_OnPlayGroupOwnerTransitionStart_Params
{
};

// Function Tp.TpUoPlayGroup.TransferOwnerShipAsync
struct UTpUoPlayGroup_TransferOwnerShipAsync_Params
{
	struct FUniqueNetId                                NewOwnerId;                                               // (Parm)
};

// Function Tp.TpUoPlayGroup.Del_OnPlayGroupMemberLeave
struct UTpUoPlayGroup_Del_OnPlayGroupMemberLeave_Params
{
	struct FUniqueNetId                                UserId;                                                   // (Parm)
	TEnumAsByte<EPlayGroupLeaveReason>                 Reason;                                                   // (Parm)
};

// Function Tp.TpUoPlayGroup.ClearPlayGroupMemberLeaveDelegate
struct UTpUoPlayGroup_ClearPlayGroupMemberLeaveDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupMemberLeaveDelegate;                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddPlayGroupMemberLeaveDelegate
struct UTpUoPlayGroup_AddPlayGroupMemberLeaveDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupMemberLeaveDelegate;                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupMemberLeave_Remove
struct UTpUoPlayGroup_OnPlayGroupMemberLeave_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupMemberLeave_Add
struct UTpUoPlayGroup_OnPlayGroupMemberLeave_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupMemberLeave_Invoke
struct UTpUoPlayGroup_OnPlayGroupMemberLeave_Invoke_Params
{
	struct FUniqueNetId                                UserId;                                                   // (Parm)
	TEnumAsByte<EPlayGroupLeaveReason>                 Reason;                                                   // (Parm)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupMemberLeave
struct UTpUoPlayGroup_OnPlayGroupMemberLeave_Params
{
	struct FUniqueNetId                                UserId;                                                   // (Parm)
	TEnumAsByte<EPlayGroupLeaveReason>                 Reason;                                                   // (Parm)
};

// Function Tp.TpUoPlayGroup.Del_OnLeavePlayGroupComplete
struct UTpUoPlayGroup_Del_OnLeavePlayGroupComplete_Params
{
};

// Function Tp.TpUoPlayGroup.ClearLeavePlayGroupCompleteDelegate
struct UTpUoPlayGroup_ClearLeavePlayGroupCompleteDelegate_Params
{
	struct FScriptDelegate                             OnLeavePlayGroupCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddLeavePlayGroupCompleteDelegate
struct UTpUoPlayGroup_AddLeavePlayGroupCompleteDelegate_Params
{
	struct FScriptDelegate                             OnLeavePlayGroupCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnLeavePlayGroupComplete_Remove
struct UTpUoPlayGroup_OnLeavePlayGroupComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnLeavePlayGroupComplete_Add
struct UTpUoPlayGroup_OnLeavePlayGroupComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnLeavePlayGroupComplete_Invoke
struct UTpUoPlayGroup_OnLeavePlayGroupComplete_Invoke_Params
{
};

// Function Tp.TpUoPlayGroup.OnLeavePlayGroupComplete
struct UTpUoPlayGroup_OnLeavePlayGroupComplete_Params
{
};

// Function Tp.TpUoPlayGroup.LeavePlayGroupAsync
struct UTpUoPlayGroup_LeavePlayGroupAsync_Params
{
};

// Function Tp.TpUoPlayGroup.Del_OnPlayGroupKicked
struct UTpUoPlayGroup_Del_OnPlayGroupKicked_Params
{
};

// Function Tp.TpUoPlayGroup.ClearPlayGroupKickedDelegate
struct UTpUoPlayGroup_ClearPlayGroupKickedDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupKickedDelegate;                                // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddPlayGroupKickedDelegate
struct UTpUoPlayGroup_AddPlayGroupKickedDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupKickedDelegate;                                // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupKicked_Remove
struct UTpUoPlayGroup_OnPlayGroupKicked_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupKicked_Add
struct UTpUoPlayGroup_OnPlayGroupKicked_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupKicked_Invoke
struct UTpUoPlayGroup_OnPlayGroupKicked_Invoke_Params
{
};

// Function Tp.TpUoPlayGroup.OnPlayGroupKicked
struct UTpUoPlayGroup_OnPlayGroupKicked_Params
{
};

// Function Tp.TpUoPlayGroup.KickMemberAsync
struct UTpUoPlayGroup_KickMemberAsync_Params
{
	struct FUniqueNetId                                UserId;                                                   // (Parm)
};

// Function Tp.TpUoPlayGroup.Del_OnPlayGroupDestroyed
struct UTpUoPlayGroup_Del_OnPlayGroupDestroyed_Params
{
};

// Function Tp.TpUoPlayGroup.ClearPlayGroupDestroyedDelegate
struct UTpUoPlayGroup_ClearPlayGroupDestroyedDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupDestroyedDelegate;                             // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddPlayGroupDestroyedDelegate
struct UTpUoPlayGroup_AddPlayGroupDestroyedDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupDestroyedDelegate;                             // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupDestroyed_Remove
struct UTpUoPlayGroup_OnPlayGroupDestroyed_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupDestroyed_Add
struct UTpUoPlayGroup_OnPlayGroupDestroyed_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupDestroyed_Invoke
struct UTpUoPlayGroup_OnPlayGroupDestroyed_Invoke_Params
{
};

// Function Tp.TpUoPlayGroup.OnPlayGroupDestroyed
struct UTpUoPlayGroup_OnPlayGroupDestroyed_Params
{
};

// Function Tp.TpUoPlayGroup.DestroyPlayGroupAsync
struct UTpUoPlayGroup_DestroyPlayGroupAsync_Params
{
};

// Function Tp.TpUoPlayGroup.Del_OnPlayGroupChatMessageReceived
struct UTpUoPlayGroup_Del_OnPlayGroupChatMessageReceived_Params
{
	struct FUniqueNetId                                SenderId;                                                 // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.ClearPlayGroupChatMessageReceivedDelegate
struct UTpUoPlayGroup_ClearPlayGroupChatMessageReceivedDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupChatMessageReceivedDelegate;                   // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddPlayGroupChatMessageReceivedDelegate
struct UTpUoPlayGroup_AddPlayGroupChatMessageReceivedDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupChatMessageReceivedDelegate;                   // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupChatMessageReceived_Remove
struct UTpUoPlayGroup_OnPlayGroupChatMessageReceived_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupChatMessageReceived_Add
struct UTpUoPlayGroup_OnPlayGroupChatMessageReceived_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupChatMessageReceived_Invoke
struct UTpUoPlayGroup_OnPlayGroupChatMessageReceived_Invoke_Params
{
	struct FUniqueNetId                                SenderId;                                                 // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupChatMessageReceived
struct UTpUoPlayGroup_OnPlayGroupChatMessageReceived_Params
{
	struct FUniqueNetId                                SenderId;                                                 // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.BroadCastChatMessageAsync
struct UTpUoPlayGroup_BroadCastChatMessageAsync_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.Del_OnPlayGroupMemberJoin
struct UTpUoPlayGroup_Del_OnPlayGroupMemberJoin_Params
{
	struct FUniqueNetId                                NewMemberUserId;                                          // (Parm)
};

// Function Tp.TpUoPlayGroup.ClearPlayGroupMemberJoinDelegate
struct UTpUoPlayGroup_ClearPlayGroupMemberJoinDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupMemberJoinDelegate;                            // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddPlayGroupMemberJoinDelegate
struct UTpUoPlayGroup_AddPlayGroupMemberJoinDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupMemberJoinDelegate;                            // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupMemberJoin_Remove
struct UTpUoPlayGroup_OnPlayGroupMemberJoin_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupMemberJoin_Add
struct UTpUoPlayGroup_OnPlayGroupMemberJoin_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupMemberJoin_Invoke
struct UTpUoPlayGroup_OnPlayGroupMemberJoin_Invoke_Params
{
	struct FUniqueNetId                                NewMemberUserId;                                          // (Parm)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupMemberJoin
struct UTpUoPlayGroup_OnPlayGroupMemberJoin_Params
{
	struct FUniqueNetId                                NewMemberUserId;                                          // (Parm)
};

// Function Tp.TpUoPlayGroup.AcceptInviteToPlayGroup
struct UTpUoPlayGroup_AcceptInviteToPlayGroup_Params
{
	struct FUniqueNetId                                RequestingUserId;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayGroup.ClearOnInviteToPlayGroupReceivedDelegate
struct UTpUoPlayGroup_ClearOnInviteToPlayGroupReceivedDelegate_Params
{
	struct FScriptDelegate                             OnInviteToPlayGroupReceived;                              // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddOnInviteToPlayGroupReceivedDelegate
struct UTpUoPlayGroup_AddOnInviteToPlayGroupReceivedDelegate_Params
{
	struct FScriptDelegate                             OnInviteToPlayGroupReceived;                              // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupReceived_Remove
struct UTpUoPlayGroup_OnInviteToPlayGroupReceived_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupReceived_Add
struct UTpUoPlayGroup_OnInviteToPlayGroupReceived_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupReceived_Invoke
struct UTpUoPlayGroup_OnInviteToPlayGroupReceived_Invoke_Params
{
	struct FUniqueNetId                                RequestingUserId;                                         // (Parm)
};

// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupReceived
struct UTpUoPlayGroup_OnInviteToPlayGroupReceived_Params
{
	struct FUniqueNetId                                RequestingUserId;                                         // (Parm)
};

// Function Tp.TpUoPlayGroup.OnInviteToPlayGroup
struct UTpUoPlayGroup_OnInviteToPlayGroup_Params
{
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
};

// Function Tp.TpUoPlayGroup.ClearOnInviteToPlayGroupCompleteDelegate
struct UTpUoPlayGroup_ClearOnInviteToPlayGroupCompleteDelegate_Params
{
	struct FScriptDelegate                             OnInviteToPlayGroupComplete;                              // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddOnInviteToPlayGroupCompleteDelegate
struct UTpUoPlayGroup_AddOnInviteToPlayGroupCompleteDelegate_Params
{
	struct FScriptDelegate                             OnInviteToPlayGroupComplete;                              // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupComplete_Remove
struct UTpUoPlayGroup_OnInviteToPlayGroupComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupComplete_Add
struct UTpUoPlayGroup_OnInviteToPlayGroupComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupComplete_Invoke
struct UTpUoPlayGroup_OnInviteToPlayGroupComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupComplete
struct UTpUoPlayGroup_OnInviteToPlayGroupComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoPlayGroup.OnInviteSent
struct UTpUoPlayGroup_OnInviteSent_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpUoPlayGroup.InviteToPlayGroupAsync
struct UTpUoPlayGroup_InviteToPlayGroupAsync_Params
{
	struct FUniqueNetId                                UserId;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayGroup.Del_OnPlayGroupJoined
struct UTpUoPlayGroup_Del_OnPlayGroupJoined_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpUoPlayGroup.ClearPlayGroupJoinedDelegate
struct UTpUoPlayGroup_ClearPlayGroupJoinedDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupJoinedDelegate;                                // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddPlayGroupJoinedDelegate
struct UTpUoPlayGroup_AddPlayGroupJoinedDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupJoinedDelegate;                                // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupJoined_Remove
struct UTpUoPlayGroup_OnPlayGroupJoined_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupJoined_Add
struct UTpUoPlayGroup_OnPlayGroupJoined_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupJoined_Invoke
struct UTpUoPlayGroup_OnPlayGroupJoined_Invoke_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupJoined
struct UTpUoPlayGroup_OnPlayGroupJoined_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpUoPlayGroup.JoinPlayGroupAsync
struct UTpUoPlayGroup_JoinPlayGroupAsync_Params
{
	struct FUniqueNetId                                UserId;                                                   // (Parm)
};

// Function Tp.TpUoPlayGroup.Del_OnPlayGroupCreated
struct UTpUoPlayGroup_Del_OnPlayGroupCreated_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpUoPlayGroup.ClearPlayGroupCreatedDelegate
struct UTpUoPlayGroup_ClearPlayGroupCreatedDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupCreatedDelegate;                               // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.AddPlayGroupCreatedDelegate
struct UTpUoPlayGroup_AddPlayGroupCreatedDelegate_Params
{
	struct FScriptDelegate                             OnPlayGroupCreatedDelegate;                               // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupCreated_Remove
struct UTpUoPlayGroup_OnPlayGroupCreated_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupCreated_Add
struct UTpUoPlayGroup_OnPlayGroupCreated_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupCreated_Invoke
struct UTpUoPlayGroup_OnPlayGroupCreated_Invoke_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpUoPlayGroup.OnPlayGroupCreated
struct UTpUoPlayGroup_OnPlayGroupCreated_Params
{
	bool                                               bInOk;                                                    // (Parm)
};

// Function Tp.TpUoPlayGroup.CreatePlayGroupAsync
struct UTpUoPlayGroup_CreatePlayGroupAsync_Params
{
	struct FPlayGroupCreateParams                      Params;                                                   // (Parm)
};

// Function Tp.TpUoPlayGroup.GetMyPlayGroupList
struct UTpUoPlayGroup_GetMyPlayGroupList_Params
{
	TArray<struct FPlayGroupListEntry>                 ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpUoPlayGroup.IsPlayGroupOwner
struct UTpUoPlayGroup_IsPlayGroupOwner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayGroup.IsInPlayGroup
struct UTpUoPlayGroup_IsInPlayGroup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoPlayGroup.Initialize
struct UTpUoPlayGroup_Initialize_Params
{
	class UTpSystemBase*                               InSystemBase;                                             // (Parm)
};

// Function Tp.TpUoGame.RecalculateSkillRating
struct UTpUoGame_RecalculateSkillRating_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.AcceptGameInvite
struct UTpUoGame_AcceptGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.OnGameInviteAccepted_Remove
struct UTpUoGame_OnGameInviteAccepted_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnGameInviteAccepted_Add
struct UTpUoGame_OnGameInviteAccepted_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnGameInviteAccepted_Invoke
struct UTpUoGame_OnGameInviteAccepted_Invoke_Params
{
	class UOnlineGameSettings*                         GameInviteSettings;                                       // (Parm)
};

// Function Tp.TpUoGame.OnGameInviteAccepted
struct UTpUoGame_OnGameInviteAccepted_Params
{
	class UOnlineGameSettings*                         GameInviteSettings;                                       // (Parm)
};

// Function Tp.TpUoGame.ClearGameInviteAcceptedDelegate
struct UTpUoGame_ClearGameInviteAcceptedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                               // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.AddGameInviteAcceptedDelegate
struct UTpUoGame_AddGameInviteAcceptedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                               // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.GetArbitratedPlayers
struct UTpUoGame_GetArbitratedPlayers_Params
{
	TArray<struct FOnlineArbitrationRegistrant>        ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Tp.TpUoGame.ClearArbitrationRegistrationCompleteDelegate
struct UTpUoGame_ClearArbitrationRegistrationCompleteDelegate_Params
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.AddArbitrationRegistrationCompleteDelegate
struct UTpUoGame_AddArbitrationRegistrationCompleteDelegate_Params
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;                  // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnArbitrationRegistrationComplete
struct UTpUoGame_OnArbitrationRegistrationComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.RegisterForArbitration
struct UTpUoGame_RegisterForArbitration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.GetOnlineGameState
struct UTpUoGame_GetOnlineGameState_Params
{
	TEnumAsByte<EOnlineGameState>                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.ClearEndOnlineGameCompleteDelegate
struct UTpUoGame_ClearEndOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.AddEndOnlineGameCompleteDelegate
struct UTpUoGame_AddEndOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnEndOnlineGameComplete_Remove
struct UTpUoGame_OnEndOnlineGameComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnEndOnlineGameComplete_Add
struct UTpUoGame_OnEndOnlineGameComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnEndOnlineGameComplete_Invoke
struct UTpUoGame_OnEndOnlineGameComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.OnEndOnlineGameComplete
struct UTpUoGame_OnEndOnlineGameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.OnEndOnlineGame
struct UTpUoGame_OnEndOnlineGame_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function Tp.TpUoGame.EndOnlineGame
struct UTpUoGame_EndOnlineGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.ClearStartOnlineGameCompleteDelegate
struct UTpUoGame_ClearStartOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.AddStartOnlineGameCompleteDelegate
struct UTpUoGame_AddStartOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnStartOnlineGameComplete_Remove
struct UTpUoGame_OnStartOnlineGameComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnStartOnlineGameComplete_Add
struct UTpUoGame_OnStartOnlineGameComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnStartOnlineGameComplete_Invoke
struct UTpUoGame_OnStartOnlineGameComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.OnStartOnlineGameComplete
struct UTpUoGame_OnStartOnlineGameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.OnStartOnlineGame
struct UTpUoGame_OnStartOnlineGame_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function Tp.TpUoGame.StartOnlineGame
struct UTpUoGame_StartOnlineGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.ClearUnregisterPlayerCompleteDelegate
struct UTpUoGame_ClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.AddUnregisterPlayerCompleteDelegate
struct UTpUoGame_AddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnUnregisterPlayerComplete_Remove
struct UTpUoGame_OnUnregisterPlayerComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnUnregisterPlayerComplete_Add
struct UTpUoGame_OnUnregisterPlayerComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnUnregisterPlayerComplete_Invoke
struct UTpUoGame_OnUnregisterPlayerComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.OnUnregisterPlayerComplete
struct UTpUoGame_OnUnregisterPlayerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.UnregisterPlayer
struct UTpUoGame_UnregisterPlayer_Params
{
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.ClearRegisterPlayerCompleteDelegate
struct UTpUoGame_ClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.AddRegisterPlayerCompleteDelegate
struct UTpUoGame_AddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnRegisterPlayerComplete_Remove
struct UTpUoGame_OnRegisterPlayerComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnRegisterPlayerComplete_Add
struct UTpUoGame_OnRegisterPlayerComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnRegisterPlayerComplete_Invoke
struct UTpUoGame_OnRegisterPlayerComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.OnRegisterPlayerComplete
struct UTpUoGame_OnRegisterPlayerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.RegisterPlayer
struct UTpUoGame_RegisterPlayer_Params
{
	struct FUniqueNetId                                PlayerId;                                                 // (Parm)
	bool                                               bWasInvited;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.GetResolvedConnectString
struct UTpUoGame_GetResolvedConnectString_Params
{
	struct FString                                     ConnectInfo;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.ClearJoinOnlineGameCompleteDelegate
struct UTpUoGame_ClearJoinOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.AddJoinOnlineGameCompleteDelegate
struct UTpUoGame_AddJoinOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnJoinOnlineGameComplete_Remove
struct UTpUoGame_OnJoinOnlineGameComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnJoinOnlineGameComplete_Add
struct UTpUoGame_OnJoinOnlineGameComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnJoinOnlineGameComplete_Invoke
struct UTpUoGame_OnJoinOnlineGameComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.OnJoinOnlineGameComplete
struct UTpUoGame_OnJoinOnlineGameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.JoinOnlineGame
struct UTpUoGame_JoinOnlineGame_Params
{
	unsigned char                                      PlayerNum;                                                // (Parm)
	struct FOnlineGameSearchResult                     DesiredGame;                                              // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.FreeSearchResults
struct UTpUoGame_FreeSearchResults_Params
{
	class UOnlineGameSearch*                           Search;                                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.ClearCancelFindOnlineGamesCompleteDelegate
struct UTpUoGame_ClearCancelFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;                    // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.GetGameSearch
struct UTpUoGame_GetGameSearch_Params
{
	class UOnlineGameSearch*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.AddCancelFindOnlineGamesCompleteDelegate
struct UTpUoGame_AddCancelFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;                    // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnCancelFindOnlineGamesComplete
struct UTpUoGame_OnCancelFindOnlineGamesComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.CancelFindOnlineGames
struct UTpUoGame_CancelFindOnlineGames_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.ClearFindOnlineGamesCompleteDelegate
struct UTpUoGame_ClearFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.AddFindOnlineGamesCompleteDelegate
struct UTpUoGame_AddFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnFindOnlineGamesComplete_Remove
struct UTpUoGame_OnFindOnlineGamesComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnFindOnlineGamesComplete_Add
struct UTpUoGame_OnFindOnlineGamesComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnFindOnlineGamesComplete_Invoke
struct UTpUoGame_OnFindOnlineGamesComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.OnFindOnlineGamesComplete
struct UTpUoGame_OnFindOnlineGamesComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.FindOnlineGames
struct UTpUoGame_FindOnlineGames_Params
{
	unsigned char                                      SearchingPlayerNum;                                       // (Parm)
	class UOnlineGameSearch*                           SearchSettings;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.ClearDestroyOnlineGameCompleteDelegate
struct UTpUoGame_ClearDestroyOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.AddDestroyOnlineGameCompleteDelegate
struct UTpUoGame_AddDestroyOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnDestroyOnlineGameComplete_Remove
struct UTpUoGame_OnDestroyOnlineGameComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnDestroyOnlineGameComplete_Add
struct UTpUoGame_OnDestroyOnlineGameComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnDestroyOnlineGameComplete_Invoke
struct UTpUoGame_OnDestroyOnlineGameComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.OnDestroyOnlineGameComplete
struct UTpUoGame_OnDestroyOnlineGameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.DestroyOnlineGame
struct UTpUoGame_DestroyOnlineGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.GetGameSettings
struct UTpUoGame_GetGameSettings_Params
{
	class UOnlineGameSettings*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.UpdateOnlineGame
struct UTpUoGame_UpdateOnlineGame_Params
{
	class UOnlineGameSettings*                         UpdatedGameSettings;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.ClearCreateOnlineGameCompleteDelegate
struct UTpUoGame_ClearCreateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.AddCreateOnlineGameCompleteDelegate
struct UTpUoGame_AddCreateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnCreateOnlineGameComplete_Remove
struct UTpUoGame_OnCreateOnlineGameComplete_Remove_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnCreateOnlineGameComplete_Add
struct UTpUoGame_OnCreateOnlineGameComplete_Add_Params
{
	struct FScriptDelegate                             D;                                                        // (Parm, NeedCtorLink)
};

// Function Tp.TpUoGame.OnCreateOnlineGameComplete_Invoke
struct UTpUoGame_OnCreateOnlineGameComplete_Invoke_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.OnCreateOnlineGameComplete
struct UTpUoGame_OnCreateOnlineGameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function Tp.TpUoGame.CreateOnlineGame
struct UTpUoGame_CreateOnlineGame_Params
{
	unsigned char                                      HostingPlayerNum;                                         // (Parm)
	class UOnlineGameSettings*                         NewGameSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Tp.TpUoGame.Initialize
struct UTpUoGame_Initialize_Params
{
	class UTpSystemBase*                               InSystemBase;                                             // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
