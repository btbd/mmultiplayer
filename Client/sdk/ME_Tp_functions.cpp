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

// Function Tp.TpSystemHandler.Finalize
// (Final, Defined, Simulated, Public)

void UTpSystemHandler::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemHandler.Finalize");

	UTpSystemHandler_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemHandler.Initialize
// (Defined, Simulated, Public)
// Parameters:
// class UTpSystemBase*           InSystemBase                   (Parm)

void UTpSystemHandler::Initialize(class UTpSystemBase* InSystemBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemHandler.Initialize");

	UTpSystemHandler_Initialize_Params params;
	params.InSystemBase = InSystemBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemHandler.FinalizeNative
// (Final, Simulated, Native, Private)

void UTpSystemHandler::FinalizeNative()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemHandler.FinalizeNative");

	UTpSystemHandler_FinalizeNative_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemHandler.InitializeNative
// (Final, Simulated, Native, Private)

void UTpSystemHandler::InitializeNative()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemHandler.InitializeNative");

	UTpSystemHandler_InitializeNative_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpAchievementManager.ShowXBOXAchievementsUI
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpAchievementManager::ShowXBOXAchievementsUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAchievementManager.ShowXBOXAchievementsUI");

	UTpAchievementManager_ShowXBOXAchievementsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpAchievementManager.OnGrantAward
// (Public, Delegate)

void UTpAchievementManager::OnGrantAward()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAchievementManager.OnGrantAward");

	UTpAchievementManager_OnGrantAward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpAchievementManager.GrantAward
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// struct FAchBind                Award                          (Parm, OutParm, NeedCtorLink)

void UTpAchievementManager::GrantAward(struct FAchBind* Award)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAchievementManager.GrantAward");

	UTpAchievementManager_GrantAward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Award != nullptr)
		*Award = params.Award;
}


// Function Tp.TpAssociationManager.IsFriendsListLoaded
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpAssociationManager::IsFriendsListLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.IsFriendsListLoaded");

	UTpAssociationManager_IsFriendsListLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpAssociationManager.OnFriendsListChange
// (Public, Delegate)

void UTpAssociationManager::OnFriendsListChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.OnFriendsListChange");

	UTpAssociationManager_OnFriendsListChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpAssociationManager.OnFriendsListLoaded
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpAssociationManager::OnFriendsListLoaded(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.OnFriendsListLoaded");

	UTpAssociationManager_OnFriendsListLoaded_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpAssociationManager.OnAddMember
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpAssociationManager::OnAddMember(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.OnAddMember");

	UTpAssociationManager_OnAddMember_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpAssociationManager.OnRemoveMember
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpAssociationManager::OnRemoveMember(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.OnRemoveMember");

	UTpAssociationManager_OnRemoveMember_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpAssociationManager.ListBlockedUsers
// (Simulated, Native, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UTpAssociationManager::ListBlockedUsers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.ListBlockedUsers");

	UTpAssociationManager_ListBlockedUsers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpAssociationManager.UnBlockUserAsync
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            UserRef                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpAssociationManager::UnBlockUserAsync(const struct FUniqueNetId& UserRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.UnBlockUserAsync");

	UTpAssociationManager_UnBlockUserAsync_Params params;
	params.UserRef = UserRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpAssociationManager.BlockUserAsync
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            UserRef                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpAssociationManager::BlockUserAsync(const struct FUniqueNetId& UserRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.BlockUserAsync");

	UTpAssociationManager_BlockUserAsync_Params params;
	params.UserRef = UserRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpAssociationManager.IsFriend
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerId                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpAssociationManager::IsFriend(const struct FUniqueNetId& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.IsFriend");

	UTpAssociationManager_IsFriend_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpAssociationManager.GetPlayersList
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FOnlinePlayer>   Players                        (Parm, OutParm, NeedCtorLink)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpAssociationManager::GetPlayersList(int Count, int StartingAt, TArray<struct FOnlinePlayer>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.GetPlayersList");

	UTpAssociationManager_GetPlayersList_Params params;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function Tp.TpAssociationManager.GetMyFriendsListEx
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriend>   Friends                        (Parm, OutParm, NeedCtorLink)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpAssociationManager::GetMyFriendsListEx(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.GetMyFriendsListEx");

	UTpAssociationManager_GetMyFriendsListEx_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;

	return params.ReturnValue;
}


// Function Tp.TpAssociationManager.GetMyFriendsList
// (Simulated, Native, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UTpAssociationManager::GetMyFriendsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.GetMyFriendsList");

	UTpAssociationManager_GetMyFriendsList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpAssociationManager.RemoveFriendAsync
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            FormerFriend                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpAssociationManager::RemoveFriendAsync(const struct FUniqueNetId& FormerFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.RemoveFriendAsync");

	UTpAssociationManager_RemoveFriendAsync_Params params;
	params.FormerFriend = FormerFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpAssociationManager.AddFriendAsync
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            NewFriend                      (Parm)

void UTpAssociationManager::AddFriendAsync(const struct FUniqueNetId& NewFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpAssociationManager.AddFriendAsync");

	UTpAssociationManager_AddFriendAsync_Params params;
	params.NewFriend = NewFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.IsLoggedIn
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpConnection::IsLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.IsLoggedIn");

	UTpConnection_IsLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpConnection.IsConnected
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpConnection::IsConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.IsConnected");

	UTpConnection_IsConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpConnection.IsLanGame
// (Final, Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpConnection::IsLanGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.IsLanGame");

	UTpConnection_IsLanGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpConnection.IsAuthenticated
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpConnection::IsAuthenticated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.IsAuthenticated");

	UTpConnection_IsAuthenticated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpConnection.SetActiveControllerId
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UTpConnection::SetActiveControllerId(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.SetActiveControllerId");

	UTpConnection_SetActiveControllerId_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.RepromptDisplay
// (Simulated, Native, Public)

void UTpConnection::RepromptDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.RepromptDisplay");

	UTpConnection_RepromptDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnDisplayParentalEmail
// (Public, Delegate)

void UTpConnection::OnDisplayParentalEmail()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnDisplayParentalEmail");

	UTpConnection_OnDisplayParentalEmail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.ConfirmParentalEmail
// (Simulated, Native, Public)
// Parameters:
// struct FString                 Email                          (Parm, NeedCtorLink)

void UTpConnection::ConfirmParentalEmail(const struct FString& Email)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.ConfirmParentalEmail");

	UTpConnection_ConfirmParentalEmail_Params params;
	params.Email = Email;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnDisplayConfirmMessage
// (Public, Delegate)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpConnection::OnDisplayConfirmMessage(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnDisplayConfirmMessage");

	UTpConnection_OnDisplayConfirmMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.ConfirmMessage
// (Simulated, Native, Public)

void UTpConnection::ConfirmMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.ConfirmMessage");

	UTpConnection_ConfirmMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnDisconnect
// (Public, Delegate)

void UTpConnection::OnDisconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnDisconnect");

	UTpConnection_OnDisconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.DisconnectAsync
// (Simulated, Native, Public)

void UTpConnection::DisconnectAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.DisconnectAsync");

	UTpConnection_DisconnectAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnCreatePersonaError
// (Public, Delegate)
// Parameters:
// int                            ErrorCode                      (Parm)

void UTpConnection::OnCreatePersonaError(int ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnCreatePersonaError");

	UTpConnection_OnCreatePersonaError_Params params;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.CreatePersonaAsync
// (Simulated, Native, Public)
// Parameters:
// struct FString                 Persona                        (Parm, NeedCtorLink)

void UTpConnection::CreatePersonaAsync(const struct FString& Persona)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.CreatePersonaAsync");

	UTpConnection_CreatePersonaAsync_Params params;
	params.Persona = Persona;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnDisplayPersonas
// (Public, Delegate)
// Parameters:
// TArray<struct FString>         Personas                       (Parm, NeedCtorLink)

void UTpConnection::OnDisplayPersonas(TArray<struct FString> Personas)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnDisplayPersonas");

	UTpConnection_OnDisplayPersonas_Params params;
	params.Personas = Personas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.CreateAccountAcceptTOSAsync
// (Simulated, Native, Public)
// Parameters:
// bool                           Accept                         (Parm)

void UTpConnection::CreateAccountAcceptTOSAsync(bool Accept)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.CreateAccountAcceptTOSAsync");

	UTpConnection_CreateAccountAcceptTOSAsync_Params params;
	params.Accept = Accept;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnGetTOS
// (Public, Delegate)
// Parameters:
// struct FString                 TOSText                        (Parm, NeedCtorLink)

void UTpConnection::OnGetTOS(const struct FString& TOSText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnGetTOS");

	UTpConnection_OnGetTOS_Params params;
	params.TOSText = TOSText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.CreateAccountGetTOSAsync
// (Simulated, Native, Public)
// Parameters:
// struct FString                 ISOCode                        (Parm, NeedCtorLink)

void UTpConnection::CreateAccountGetTOSAsync(const struct FString& ISOCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.CreateAccountGetTOSAsync");

	UTpConnection_CreateAccountGetTOSAsync_Params params;
	params.ISOCode = ISOCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnDisplayCountrySelect
// (Public, Delegate)
// Parameters:
// TArray<struct FTpCreateAccountCountry> Countries                      (Parm, NeedCtorLink)

void UTpConnection::OnDisplayCountrySelect(TArray<struct FTpCreateAccountCountry> Countries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnDisplayCountrySelect");

	UTpConnection_OnDisplayCountrySelect_Params params;
	params.Countries = Countries;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnCreateAccountError
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ETpAccountError>   InError                        (Parm)

void UTpConnection::OnCreateAccountError(TEnumAsByte<ETpAccountError> InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnCreateAccountError");

	UTpConnection_OnCreateAccountError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.CreateAccountConsoleAsync
// (Simulated, Native, Public)
// Parameters:
// struct FString                 Email                          (Parm, NeedCtorLink)
// struct FString                 Pass                           (Parm, NeedCtorLink)
// bool                           bAllowEaEmail                  (Parm)
// bool                           bAllowThirdPartyEmail          (Parm)

void UTpConnection::CreateAccountConsoleAsync(const struct FString& Email, const struct FString& Pass, bool bAllowEaEmail, bool bAllowThirdPartyEmail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.CreateAccountConsoleAsync");

	UTpConnection_CreateAccountConsoleAsync_Params params;
	params.Email = Email;
	params.Pass = Pass;
	params.bAllowEaEmail = bAllowEaEmail;
	params.bAllowThirdPartyEmail = bAllowThirdPartyEmail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.CreateAccountAsync
// (Simulated, Native, Public)
// Parameters:
// struct FTpCreateAccountParams  InParams                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpConnection::CreateAccountAsync(const struct FTpCreateAccountParams& InParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.CreateAccountAsync");

	UTpConnection_CreateAccountAsync_Params params;
	params.InParams = InParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpConnection.OnCreateAccountReady
// (Public, Delegate)
// Parameters:
// struct FString                 Email                          (Parm, NeedCtorLink)
// struct FString                 Pass                           (Parm, NeedCtorLink)
// bool                           bAllowEaEmail                  (Parm)
// bool                           bAllowTPEmail                  (Parm)
// bool                           bIsConsole                     (Parm)

void UTpConnection::OnCreateAccountReady(const struct FString& Email, const struct FString& Pass, bool bAllowEaEmail, bool bAllowTPEmail, bool bIsConsole)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnCreateAccountReady");

	UTpConnection_OnCreateAccountReady_Params params;
	params.Email = Email;
	params.Pass = Pass;
	params.bAllowEaEmail = bAllowEaEmail;
	params.bAllowTPEmail = bAllowTPEmail;
	params.bIsConsole = bIsConsole;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.PrepareCreateAccountAsync
// (Simulated, Native, Public)

void UTpConnection::PrepareCreateAccountAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.PrepareCreateAccountAsync");

	UTpConnection_PrepareCreateAccountAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnLoginPersonaError
// (Public, Delegate)
// Parameters:
// int                            ErrorCode                      (Parm)

void UTpConnection::OnLoginPersonaError(int ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnLoginPersonaError");

	UTpConnection_OnLoginPersonaError_Params params;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnLoginAccountError
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ETpAccountError>   InError                        (Parm)

void UTpConnection::OnLoginAccountError(TEnumAsByte<ETpAccountError> InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnLoginAccountError");

	UTpConnection_OnLoginAccountError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnPartiallyLoggedIn
// (Public, Delegate)
// Parameters:
// TArray<struct FString>         InSubNames                     (Parm, NeedCtorLink)

void UTpConnection::OnPartiallyLoggedIn(TArray<struct FString> InSubNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnPartiallyLoggedIn");

	UTpConnection_OnPartiallyLoggedIn_Params params;
	params.InSubNames = InSubNames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.LoginPersonaAsync
// (Simulated, Native, Public)
// Parameters:
// struct FString                 InName                         (Parm, NeedCtorLink)

void UTpConnection::LoginPersonaAsync(const struct FString& InName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.LoginPersonaAsync");

	UTpConnection_LoginPersonaAsync_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.LoginEncAccountAsync
// (Simulated, Native, Public)
// Parameters:
// struct FString                 EncLogin                       (Parm, NeedCtorLink)

void UTpConnection::LoginEncAccountAsync(const struct FString& EncLogin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.LoginEncAccountAsync");

	UTpConnection_LoginEncAccountAsync_Params params;
	params.EncLogin = EncLogin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.LoginAccountAsync
// (Simulated, Native, Public)
// Parameters:
// struct FString                 InName                         (Parm, NeedCtorLink)
// struct FString                 InPasswd                       (Parm, NeedCtorLink)

void UTpConnection::LoginAccountAsync(const struct FString& InName, const struct FString& InPasswd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.LoginAccountAsync");

	UTpConnection_LoginAccountAsync_Params params;
	params.InName = InName;
	params.InPasswd = InPasswd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnConnectionChange
// (Public, Delegate)
// Parameters:
// bool                           bConnected                     (Parm)

void UTpConnection::OnConnectionChange(bool bConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnConnectionChange");

	UTpConnection_OnConnectionChange_Params params;
	params.bConnected = bConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnLoginReady
// (Public, Delegate)

void UTpConnection::OnLoginReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnLoginReady");

	UTpConnection_OnLoginReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnConnectionReady
// (Public, Delegate)
// Parameters:
// struct FString                 EncLogin                       (Parm, NeedCtorLink)
// struct FString                 Persona                        (Parm, NeedCtorLink)

void UTpConnection::OnConnectionReady(const struct FString& EncLogin, const struct FString& Persona)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnConnectionReady");

	UTpConnection_OnConnectionReady_Params params;
	params.EncLogin = EncLogin;
	params.Persona = Persona;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.OnConnectionFailed
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ETpConnectionError> InError                        (Parm)

void UTpConnection::OnConnectionFailed(TEnumAsByte<ETpConnectionError> InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.OnConnectionFailed");

	UTpConnection_OnConnectionFailed_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.ConnectSilentAsync
// (Simulated, Native, Public)
// Parameters:
// struct FString                 EncLogin                       (OptionalParm, Parm, NeedCtorLink)
// struct FString                 Persona                        (OptionalParm, Parm, NeedCtorLink)

void UTpConnection::ConnectSilentAsync(const struct FString& EncLogin, const struct FString& Persona)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.ConnectSilentAsync");

	UTpConnection_ConnectSilentAsync_Params params;
	params.EncLogin = EncLogin;
	params.Persona = Persona;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnection.ConnectAsync
// (Simulated, Native, Public)

void UTpConnection::ConnectAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnection.ConnectAsync");

	UTpConnection_ConnectAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnectParams.InitializeAuthentication
// (Simulated, Native, Public)
// Parameters:
// TEnumAsByte<ETpLoginMode>      InLoginMode                    (Parm)

void UTpConnectParams::InitializeAuthentication(TEnumAsByte<ETpLoginMode> InLoginMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnectParams.InitializeAuthentication");

	UTpConnectParams_InitializeAuthentication_Params params;
	params.InLoginMode = InLoginMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnectParams.GetUnauthenticatedPlayerName
// (Simulated, Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTpConnectParams::GetUnauthenticatedPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnectParams.GetUnauthenticatedPlayerName");

	UTpConnectParams_GetUnauthenticatedPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpConnectParams.SetUnauthenticatedPlayerName
// (Simulated, Native, Public)
// Parameters:
// struct FString                 InName                         (Parm, NeedCtorLink)

void UTpConnectParams::SetUnauthenticatedPlayerName(const struct FString& InName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnectParams.SetUnauthenticatedPlayerName");

	UTpConnectParams_SetUnauthenticatedPlayerName_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnectParams.GetConnectMode
// (Simulated, Native, Public)
// Parameters:
// TEnumAsByte<ETpConnectMode>    ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ETpConnectMode> UTpConnectParams::GetConnectMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnectParams.GetConnectMode");

	UTpConnectParams_GetConnectMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpConnectParams.SetConnectMode
// (Simulated, Native, Public)
// Parameters:
// TEnumAsByte<ETpConnectMode>    InMode                         (Parm)

void UTpConnectParams::SetConnectMode(TEnumAsByte<ETpConnectMode> InMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnectParams.SetConnectMode");

	UTpConnectParams_SetConnectMode_Params params;
	params.InMode = InMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpConnectParams.GetOpaqueFeslPointer
// (Simulated, Native, Public)
// Parameters:
// struct FPointer                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPointer UTpConnectParams::GetOpaqueFeslPointer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpConnectParams.GetOpaqueFeslPointer");

	UTpConnectParams_GetOpaqueFeslPointer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpCreateGameParams.SetHostMigrationEnabled
// (Simulated, Native, Public)
// Parameters:
// bool                           bInEnabled                     (Parm)

void UTpCreateGameParams::SetHostMigrationEnabled(bool bInEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpCreateGameParams.SetHostMigrationEnabled");

	UTpCreateGameParams_SetHostMigrationEnabled_Params params;
	params.bInEnabled = bInEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpCreateGameParams.SetInviteStatus
// (Simulated, Native, Public)
// Parameters:
// TEnumAsByte<ETpInviteStatus>   InStatus                       (Parm)

void UTpCreateGameParams::SetInviteStatus(TEnumAsByte<ETpInviteStatus> InStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpCreateGameParams.SetInviteStatus");

	UTpCreateGameParams_SetInviteStatus_Params params;
	params.InStatus = InStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpCreateGameParams.SetJoinViaPresenceEnabled
// (Simulated, Native, Public)
// Parameters:
// bool                           bInEnabled                     (Parm)

void UTpCreateGameParams::SetJoinViaPresenceEnabled(bool bInEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpCreateGameParams.SetJoinViaPresenceEnabled");

	UTpCreateGameParams_SetJoinViaPresenceEnabled_Params params;
	params.bInEnabled = bInEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpCreateGameParams.SetJoinInProgressEnabled
// (Simulated, Native, Public)
// Parameters:
// bool                           bInEnabled                     (Parm)

void UTpCreateGameParams::SetJoinInProgressEnabled(bool bInEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpCreateGameParams.SetJoinInProgressEnabled");

	UTpCreateGameParams_SetJoinInProgressEnabled_Params params;
	params.bInEnabled = bInEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpCreateGameParams.SetRanked
// (Simulated, Native, Public)
// Parameters:
// bool                           bInRanked                      (Parm)

void UTpCreateGameParams::SetRanked(bool bInRanked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpCreateGameParams.SetRanked");

	UTpCreateGameParams_SetRanked_Params params;
	params.bInRanked = bInRanked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpCreateGameParams.SetPasswordUsed
// (Simulated, Native, Public)
// Parameters:
// bool                           bInUsed                        (Parm)

void UTpCreateGameParams::SetPasswordUsed(bool bInUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpCreateGameParams.SetPasswordUsed");

	UTpCreateGameParams_SetPasswordUsed_Params params;
	params.bInUsed = bInUsed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpCreateGameParams.SetPlayerTypeCapacity
// (Simulated, Native, Public)
// Parameters:
// TEnumAsByte<ETpPlayerType>     InType                         (Parm)
// int                            InCapacity                     (Parm)

void UTpCreateGameParams::SetPlayerTypeCapacity(TEnumAsByte<ETpPlayerType> InType, int InCapacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpCreateGameParams.SetPlayerTypeCapacity");

	UTpCreateGameParams_SetPlayerTypeCapacity_Params params;
	params.InType = InType;
	params.InCapacity = InCapacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpCreateGameParams.SetGameName
// (Simulated, Native, Public)
// Parameters:
// struct FString                 InName                         (Parm, NeedCtorLink)

void UTpCreateGameParams::SetGameName(const struct FString& InName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpCreateGameParams.SetGameName");

	UTpCreateGameParams_SetGameName_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpCreateGameParams.GetOpaqueFeslPointer
// (Simulated, Native, Public)
// Parameters:
// struct FPointer                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPointer UTpCreateGameParams::GetOpaqueFeslPointer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpCreateGameParams.GetOpaqueFeslPointer");

	UTpCreateGameParams_GetOpaqueFeslPointer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpFileLockerService.ListFileLocker
// (Native, Public)
// Parameters:
// TArray<struct FOnlineFileLockerFileInfo> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FOnlineFileLockerFileInfo> UTpFileLockerService::ListFileLocker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpFileLockerService.ListFileLocker");

	UTpFileLockerService_ListFileLocker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpFileLockerService.OnDeleteFileFromLockerComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpFileLockerService::OnDeleteFileFromLockerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpFileLockerService.OnDeleteFileFromLockerComplete");

	UTpFileLockerService_OnDeleteFileFromLockerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpFileLockerService.DeleteFileFromLocker
// (Native, Public, HasOutParms)
// Parameters:
// struct FOnlineFileLockerFile   FileInfo                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpFileLockerService::DeleteFileFromLocker(struct FOnlineFileLockerFile* FileInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpFileLockerService.DeleteFileFromLocker");

	UTpFileLockerService_DeleteFileFromLocker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileInfo != nullptr)
		*FileInfo = params.FileInfo;

	return params.ReturnValue;
}


// Function Tp.TpFileLockerService.OnWriteFileToLockerComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpFileLockerService::OnWriteFileToLockerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpFileLockerService.OnWriteFileToLockerComplete");

	UTpFileLockerService_OnWriteFileToLockerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpFileLockerService.WriteFileToLocker
// (Native, Public, HasOutParms)
// Parameters:
// struct FOnlineFileLockerFile   File                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpFileLockerService::WriteFileToLocker(struct FOnlineFileLockerFile* File)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpFileLockerService.WriteFileToLocker");

	UTpFileLockerService_WriteFileToLocker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (File != nullptr)
		*File = params.File;

	return params.ReturnValue;
}


// Function Tp.TpFileLockerService.OnReadFileFromLockerComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpFileLockerService::OnReadFileFromLockerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpFileLockerService.OnReadFileFromLockerComplete");

	UTpFileLockerService_OnReadFileFromLockerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpFileLockerService.ReadFileFromLocker
// (Native, Public, HasOutParms)
// Parameters:
// struct FOnlineFileLockerFile   File                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpFileLockerService::ReadFileFromLocker(struct FOnlineFileLockerFile* File)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpFileLockerService.ReadFileFromLocker");

	UTpFileLockerService_ReadFileFromLocker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (File != nullptr)
		*File = params.File;

	return params.ReturnValue;
}


// Function Tp.TpFileLockerService.OnFetchLockerComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpFileLockerService::OnFetchLockerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpFileLockerService.OnFetchLockerComplete");

	UTpFileLockerService_OnFetchLockerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpFileLockerService.FetchLocker
// (Native, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpFileLockerService::FetchLocker(const struct FString& UserName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpFileLockerService.FetchLocker");

	UTpFileLockerService_FetchLocker_Params params;
	params.UserName = UserName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpFileLockerService.Update
// (Simulated, Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UTpFileLockerService::Update(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpFileLockerService.Update");

	UTpFileLockerService_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpProtoHTTP.OnGetVersion
// (Public, Delegate)
// Parameters:
// struct FString                 Version                        (Parm, NeedCtorLink)

void UTpProtoHTTP::OnGetVersion(const struct FString& Version)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpProtoHTTP.OnGetVersion");

	UTpProtoHTTP_OnGetVersion_Params params;
	params.Version = Version;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpProtoHTTP.GetCurrentVersion
// (Simulated, Native, Public)
// Parameters:
// struct FString                 Param                          (OptionalParm, Parm, NeedCtorLink)

void UTpProtoHTTP::GetCurrentVersion(const struct FString& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpProtoHTTP.GetCurrentVersion");

	UTpProtoHTTP_GetCurrentVersion_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpProtoHTTP.Update
// (Simulated, Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UTpProtoHTTP::Update(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpProtoHTTP.Update");

	UTpProtoHTTP_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameBrowser.GetPlayNowJoinGameInfo
// (Final, Defined, Simulated, Public)
// Parameters:
// struct FTpPlayNowJoinGameInfo  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTpPlayNowJoinGameInfo UTpGameBrowser::GetPlayNowJoinGameInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.GetPlayNowJoinGameInfo");

	UTpGameBrowser_GetPlayNowJoinGameInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpGameBrowser.GetPlayNowCreateGameInfo
// (Final, Defined, Simulated, Public)
// Parameters:
// struct FTpPlayNowCreateGameInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTpPlayNowCreateGameInfo UTpGameBrowser::GetPlayNowCreateGameInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.GetPlayNowCreateGameInfo");

	UTpGameBrowser_GetPlayNowCreateGameInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpGameBrowser.GetGameByIndex
// (Simulated, Native, Public)
// Parameters:
// struct FTpLobbyRef             InLobby                        (Parm)
// int                            InIndex                        (Parm)
// struct FTpGameRef              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTpGameRef UTpGameBrowser::GetGameByIndex(const struct FTpLobbyRef& InLobby, int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.GetGameByIndex");

	UTpGameBrowser_GetGameByIndex_Params params;
	params.InLobby = InLobby;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpGameBrowser.DropGameList
// (Simulated, Native, Public)
// Parameters:
// struct FTpLobbyRef             InLobby                        (Parm)

void UTpGameBrowser::DropGameList(const struct FTpLobbyRef& InLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.DropGameList");

	UTpGameBrowser_DropGameList_Params params;
	params.InLobby = InLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameBrowser.FindGameAsync
// (Simulated, Native, Public)
// Parameters:
// struct FTpPlayNowParams        Params                         (Parm, NeedCtorLink)

void UTpGameBrowser::FindGameAsync(const struct FTpPlayNowParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.FindGameAsync");

	UTpGameBrowser_FindGameAsync_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameBrowser.OnPlayNowMatched
// (Public, Delegate)
// Parameters:
// bool                           bIsServer                      (Parm)
// int                            InError                        (Parm)

void UTpGameBrowser::OnPlayNowMatched(bool bIsServer, int InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.OnPlayNowMatched");

	UTpGameBrowser_OnPlayNowMatched_Params params;
	params.bIsServer = bIsServer;
	params.InError = InError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameBrowser.OnPlayNowStarted
// (Public, Delegate)

void UTpGameBrowser::OnPlayNowStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.OnPlayNowStarted");

	UTpGameBrowser_OnPlayNowStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameBrowser.StartQuickMatchAsync
// (Simulated, Native, Public)
// Parameters:
// struct FTpPlayNowParams        Params                         (Parm, NeedCtorLink)

void UTpGameBrowser::StartQuickMatchAsync(const struct FTpPlayNowParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.StartQuickMatchAsync");

	UTpGameBrowser_StartQuickMatchAsync_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameBrowser.OnUpdateGameList
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpGameBrowser::OnUpdateGameList(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.OnUpdateGameList");

	UTpGameBrowser_OnUpdateGameList_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameBrowser.UpdateGameListAsync
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// struct FTpLobbyRef             InLobby                        (Parm)
// struct FTpGameListParams       InParams                       (OptionalParm, Parm, OutParm)
// struct FTpGameListFavourites   InFavourites                   (OptionalParm, Parm, OutParm, NeedCtorLink)

void UTpGameBrowser::UpdateGameListAsync(const struct FTpLobbyRef& InLobby, struct FTpGameListParams* InParams, struct FTpGameListFavourites* InFavourites)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.UpdateGameListAsync");

	UTpGameBrowser_UpdateGameListAsync_Params params;
	params.InLobby = InLobby;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InParams != nullptr)
		*InParams = params.InParams;
	if (InFavourites != nullptr)
		*InFavourites = params.InFavourites;
}


// Function Tp.TpGameBrowser.GetLobbyByIndex
// (Simulated, Native, Public)
// Parameters:
// int                            InIndex                        (Parm)
// struct FTpLobbyRef             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTpLobbyRef UTpGameBrowser::GetLobbyByIndex(int InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.GetLobbyByIndex");

	UTpGameBrowser_GetLobbyByIndex_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpGameBrowser.DropLobbyList
// (Simulated, Native, Public)

void UTpGameBrowser::DropLobbyList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.DropLobbyList");

	UTpGameBrowser_DropLobbyList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameBrowser.OnUpdateLobbyList
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpGameBrowser::OnUpdateLobbyList(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.OnUpdateLobbyList");

	UTpGameBrowser_OnUpdateLobbyList_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameBrowser.UpdateLobbyListAsync
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// struct FTpLobbyListParams      InParams                       (OptionalParm, Parm, OutParm)
// struct FTpLobbyListFavourites  InFavourites                   (OptionalParm, Parm, OutParm, NeedCtorLink)

void UTpGameBrowser::UpdateLobbyListAsync(struct FTpLobbyListParams* InParams, struct FTpLobbyListFavourites* InFavourites)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameBrowser.UpdateLobbyListAsync");

	UTpGameBrowser_UpdateLobbyListAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InParams != nullptr)
		*InParams = params.InParams;
	if (InFavourites != nullptr)
		*InFavourites = params.InFavourites;
}


// Function Tp.TpGameManager.DisarmConnectionPlayerControllers
// (Simulated, Native, Public)

void UTpGameManager::DisarmConnectionPlayerControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.DisarmConnectionPlayerControllers");

	UTpGameManager_DisarmConnectionPlayerControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.GetGameHostIp
// (Simulated, Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTpGameManager::GetGameHostIp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.GetGameHostIp");

	UTpGameManager_GetGameHostIp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpGameManager.OnLeaveGame
// (Public, Delegate)

void UTpGameManager::OnLeaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.OnLeaveGame");

	UTpGameManager_OnLeaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.LeaveGameAsync
// (Simulated, Native, Public)

void UTpGameManager::LeaveGameAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.LeaveGameAsync");

	UTpGameManager_LeaveGameAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.OnJoinGame
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)
// struct FString                 hostIp                         (Parm, NeedCtorLink)

void UTpGameManager::OnJoinGame(bool bInOk, const struct FString& hostIp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.OnJoinGame");

	UTpGameManager_OnJoinGame_Params params;
	params.bInOk = bInOk;
	params.hostIp = hostIp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.JoinPlayNowGameAsync
// (Simulated, Native, Public)
// Parameters:
// struct FTpPlayNowJoinGameInfo  Info                           (Parm)

void UTpGameManager::JoinPlayNowGameAsync(const struct FTpPlayNowJoinGameInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.JoinPlayNowGameAsync");

	UTpGameManager_JoinPlayNowGameAsync_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.JoinGameAsync
// (Simulated, Native, Public)
// Parameters:
// struct FTpLobbyRef             InLobby                        (Parm)
// struct FTpGameRef              InGame                         (Parm)

void UTpGameManager::JoinGameAsync(const struct FTpLobbyRef& InLobby, const struct FTpGameRef& InGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.JoinGameAsync");

	UTpGameManager_JoinGameAsync_Params params;
	params.InLobby = InLobby;
	params.InGame = InGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.OnEndGame
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpGameManager::OnEndGame(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.OnEndGame");

	UTpGameManager_OnEndGame_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.EndGameAsync
// (Simulated, Native, Public)

void UTpGameManager::EndGameAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.EndGameAsync");

	UTpGameManager_EndGameAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.OnStartGame
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpGameManager::OnStartGame(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.OnStartGame");

	UTpGameManager_OnStartGame_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.StartGameAsync
// (Simulated, Native, Public)

void UTpGameManager::StartGameAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.StartGameAsync");

	UTpGameManager_StartGameAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.OnDestroyGame
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpGameManager::OnDestroyGame(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.OnDestroyGame");

	UTpGameManager_OnDestroyGame_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.DestroyGameAsync
// (Simulated, Native, Public)

void UTpGameManager::DestroyGameAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.DestroyGameAsync");

	UTpGameManager_DestroyGameAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.OnCreateGame
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpGameManager::OnCreateGame(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.OnCreateGame");

	UTpGameManager_OnCreateGame_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.CreatePlayNowGameAsync
// (Simulated, Native, Public)
// Parameters:
// struct FTpPlayNowCreateGameInfo Info                           (Parm)

void UTpGameManager::CreatePlayNowGameAsync(const struct FTpPlayNowCreateGameInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.CreatePlayNowGameAsync");

	UTpGameManager_CreatePlayNowGameAsync_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.CreateGameAsync
// (Simulated, Native, Public)
// Parameters:
// class UTpCreateGameParams*     InParams                       (Parm)

void UTpGameManager::CreateGameAsync(class UTpCreateGameParams* InParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.CreateGameAsync");

	UTpGameManager_CreateGameAsync_Params params;
	params.InParams = InParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpGameManager.NewCreateGameParams
// (Simulated, Native, Public)
// Parameters:
// class UTpCreateGameParams*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpCreateGameParams* UTpGameManager::NewCreateGameParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpGameManager.NewCreateGameParams");

	UTpGameManager_NewCreateGameParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpMessageService.InviteToPlayGroupResponse
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpMessageService::InviteToPlayGroupResponse(const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.InviteToPlayGroupResponse");

	UTpMessageService_InviteToPlayGroupResponse_Params params;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpMessageService.OnInviteToPlayGroupReceived
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            RequestingPlayer               (Parm)

void UTpMessageService::OnInviteToPlayGroupReceived(const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.OnInviteToPlayGroupReceived");

	UTpMessageService_OnInviteToPlayGroupReceived_Params params;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpMessageService.OnInviteToPlayGroupSent
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpMessageService::OnInviteToPlayGroupSent(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.OnInviteToPlayGroupSent");

	UTpMessageService_OnInviteToPlayGroupSent_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpMessageService.PlayGroupInviteAsync
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            User                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpMessageService::PlayGroupInviteAsync(const struct FUniqueNetId& User)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.PlayGroupInviteAsync");

	UTpMessageService_PlayGroupInviteAsync_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpMessageService.OnRemoveMessage
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpMessageService::OnRemoveMessage(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.OnRemoveMessage");

	UTpMessageService_OnRemoveMessage_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpMessageService.RemoveMessage
// (Simulated, Native, Public)
// Parameters:
// int                            MessageIndex                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpMessageService::RemoveMessage(int MessageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.RemoveMessage");

	UTpMessageService_RemoveMessage_Params params;
	params.MessageIndex = MessageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpMessageService.GetFriendMessages
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FOnlineFriendMessage> FriendMessages                 (Parm, OutParm, NeedCtorLink)

void UTpMessageService::GetFriendMessages(TArray<struct FOnlineFriendMessage>* FriendMessages)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.GetFriendMessages");

	UTpMessageService_GetFriendMessages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendMessages != nullptr)
		*FriendMessages = params.FriendMessages;
}


// Function Tp.TpMessageService.OnSendMessage
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpMessageService::OnSendMessage(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.OnSendMessage");

	UTpMessageService_OnSendMessage_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpMessageService.SendMessageAsync
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerId                       (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpMessageService::SendMessageAsync(const struct FUniqueNetId& PlayerId, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.SendMessageAsync");

	UTpMessageService_SendMessageAsync_Params params;
	params.PlayerId = PlayerId;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpMessageService.OnFriendRequestDelegate
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            Sender                         (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpMessageService::OnFriendRequestDelegate(const struct FUniqueNetId& Sender, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.OnFriendRequestDelegate");

	UTpMessageService_OnFriendRequestDelegate_Params params;
	params.Sender = Sender;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpMessageService.OnNewMessage
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            Sender                         (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpMessageService::OnNewMessage(const struct FUniqueNetId& Sender, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.OnNewMessage");

	UTpMessageService_OnNewMessage_Params params;
	params.Sender = Sender;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpMessageService.OnFriendRequestSent
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpMessageService::OnFriendRequestSent(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.OnFriendRequestSent");

	UTpMessageService_OnFriendRequestSent_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpMessageService.FriendResponse
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            NewFriend                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpMessageService::FriendResponse(const struct FUniqueNetId& NewFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.FriendResponse");

	UTpMessageService_FriendResponse_Params params;
	params.NewFriend = NewFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpMessageService.FriendRequestAsync
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            NewFriend                      (Parm)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpMessageService::FriendRequestAsync(const struct FUniqueNetId& NewFriend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.FriendRequestAsync");

	UTpMessageService_FriendRequestAsync_Params params;
	params.NewFriend = NewFriend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpMessageService.OnCheckInbox
// (Public, Delegate)

void UTpMessageService::OnCheckInbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.OnCheckInbox");

	UTpMessageService_OnCheckInbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpMessageService.CheckInboxAsync
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpMessageService::CheckInboxAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.CheckInboxAsync");

	UTpMessageService_CheckInboxAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpMessageService.Update
// (Simulated, Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UTpMessageService::Update(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpMessageService.Update");

	UTpMessageService_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.OnPlayGroupGameLeave
// (Public, Delegate)

void UTpPlayGroupManager::OnPlayGroupGameLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.OnPlayGroupGameLeave");

	UTpPlayGroupManager_OnPlayGroupGameLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.OnPlayGroupGameJoined
// (Public, Delegate)
// Parameters:
// struct FTpLobbyRef             InLobby                        (Parm)
// struct FTpGameRef              InGame                         (Parm)

void UTpPlayGroupManager::OnPlayGroupGameJoined(const struct FTpLobbyRef& InLobby, const struct FTpGameRef& InGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.OnPlayGroupGameJoined");

	UTpPlayGroupManager_OnPlayGroupGameJoined_Params params;
	params.InLobby = InLobby;
	params.InGame = InGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.OnPlayGroupOwnerTransitionFinish
// (Public, Delegate)

void UTpPlayGroupManager::OnPlayGroupOwnerTransitionFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.OnPlayGroupOwnerTransitionFinish");

	UTpPlayGroupManager_OnPlayGroupOwnerTransitionFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.OnPlayGroupOwnerTransitionStart
// (Public, Delegate)

void UTpPlayGroupManager::OnPlayGroupOwnerTransitionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.OnPlayGroupOwnerTransitionStart");

	UTpPlayGroupManager_OnPlayGroupOwnerTransitionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.TransferOwnerShipAsync
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            NewOwnerId                     (Parm)

void UTpPlayGroupManager::TransferOwnerShipAsync(const struct FUniqueNetId& NewOwnerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.TransferOwnerShipAsync");

	UTpPlayGroupManager_TransferOwnerShipAsync_Params params;
	params.NewOwnerId = NewOwnerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.OnPlayGroupMemberLeave
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            UserId                         (Parm)
// TEnumAsByte<EPlayGroupLeaveReason> Reason                         (Parm)

void UTpPlayGroupManager::OnPlayGroupMemberLeave(const struct FUniqueNetId& UserId, TEnumAsByte<EPlayGroupLeaveReason> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.OnPlayGroupMemberLeave");

	UTpPlayGroupManager_OnPlayGroupMemberLeave_Params params;
	params.UserId = UserId;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.OnLeavePlayGroupComplete
// (Public, Delegate)

void UTpPlayGroupManager::OnLeavePlayGroupComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.OnLeavePlayGroupComplete");

	UTpPlayGroupManager_OnLeavePlayGroupComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.LeavePlayGroupAsync
// (Simulated, Native, Public)

void UTpPlayGroupManager::LeavePlayGroupAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.LeavePlayGroupAsync");

	UTpPlayGroupManager_LeavePlayGroupAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.OnPlayGroupKicked
// (Public, Delegate)

void UTpPlayGroupManager::OnPlayGroupKicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.OnPlayGroupKicked");

	UTpPlayGroupManager_OnPlayGroupKicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.KickMemberAsync
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            UserId                         (Parm)

void UTpPlayGroupManager::KickMemberAsync(const struct FUniqueNetId& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.KickMemberAsync");

	UTpPlayGroupManager_KickMemberAsync_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.OnPlayGroupDestroyed
// (Public, Delegate)

void UTpPlayGroupManager::OnPlayGroupDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.OnPlayGroupDestroyed");

	UTpPlayGroupManager_OnPlayGroupDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.DestroyPlayGroupAsync
// (Simulated, Native, Public)

void UTpPlayGroupManager::DestroyPlayGroupAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.DestroyPlayGroupAsync");

	UTpPlayGroupManager_DestroyPlayGroupAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.OnPlayGroupChatMessageReceived
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            SenderId                       (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpPlayGroupManager::OnPlayGroupChatMessageReceived(const struct FUniqueNetId& SenderId, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.OnPlayGroupChatMessageReceived");

	UTpPlayGroupManager_OnPlayGroupChatMessageReceived_Params params;
	params.SenderId = SenderId;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.BroadCastChatMessageAsync
// (Simulated, Native, Public)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpPlayGroupManager::BroadCastChatMessageAsync(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.BroadCastChatMessageAsync");

	UTpPlayGroupManager_BroadCastChatMessageAsync_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.OnPlayGroupMemberJoin
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            UserId                         (Parm)

void UTpPlayGroupManager::OnPlayGroupMemberJoin(const struct FUniqueNetId& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.OnPlayGroupMemberJoin");

	UTpPlayGroupManager_OnPlayGroupMemberJoin_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.OnPlayGroupJoined
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpPlayGroupManager::OnPlayGroupJoined(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.OnPlayGroupJoined");

	UTpPlayGroupManager_OnPlayGroupJoined_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.JoinPlayGroupAsync
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            UserId                         (Parm)

void UTpPlayGroupManager::JoinPlayGroupAsync(const struct FUniqueNetId& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.JoinPlayGroupAsync");

	UTpPlayGroupManager_JoinPlayGroupAsync_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.OnPlayGroupCreated
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpPlayGroupManager::OnPlayGroupCreated(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.OnPlayGroupCreated");

	UTpPlayGroupManager_OnPlayGroupCreated_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.CreatePlayGroupAsync
// (Simulated, Native, Public)
// Parameters:
// struct FPlayGroupCreateParams  Params                         (Parm)

void UTpPlayGroupManager::CreatePlayGroupAsync(const struct FPlayGroupCreateParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.CreatePlayGroupAsync");

	UTpPlayGroupManager_CreatePlayGroupAsync_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPlayGroupManager.GetMyPlayGroupList
// (Simulated, Native, Public)
// Parameters:
// TArray<struct FPlayGroupListEntry> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FPlayGroupListEntry> UTpPlayGroupManager::GetMyPlayGroupList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.GetMyPlayGroupList");

	UTpPlayGroupManager_GetMyPlayGroupList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpPlayGroupManager.IsPlayGroupOwner
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpPlayGroupManager::IsPlayGroupOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.IsPlayGroupOwner");

	UTpPlayGroupManager_IsPlayGroupOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpPlayGroupManager.IsInPlayGroup
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpPlayGroupManager::IsInPlayGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPlayGroupManager.IsInPlayGroup");

	UTpPlayGroupManager_IsInPlayGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.SetOnScreenHandler
// (Defined, Simulated, Public)
// Parameters:
// class UTpOnScreenErrorHandler* Handler                        (Parm)

void UTpSystemBase::SetOnScreenHandler(class UTpOnScreenErrorHandler* Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.SetOnScreenHandler");

	UTpSystemBase_SetOnScreenHandler_Params params;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemBase.GetLatestError
// (Defined, Simulated, Public)
// Parameters:
// struct FTpErrorInfo            ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FTpErrorInfo UTpSystemBase::GetLatestError()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.GetLatestError");

	UTpSystemBase_GetLatestError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.RegisterLatestError
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FTpErrorInfo            LatestError                    (Parm, NeedCtorLink)

void UTpSystemBase::RegisterLatestError(const struct FTpErrorInfo& LatestError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.RegisterLatestError");

	UTpSystemBase_RegisterLatestError_Params params;
	params.LatestError = LatestError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemBase.ImpelGameJoined
// (Simulated, Event, Protected)

void UTpSystemBase::ImpelGameJoined()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.ImpelGameJoined");

	UTpSystemBase_ImpelGameJoined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemBase.ImpelGameDestroyed
// (Simulated, Event, Protected)

void UTpSystemBase::ImpelGameDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.ImpelGameDestroyed");

	UTpSystemBase_ImpelGameDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemBase.ImpelGameCreated
// (Simulated, Event, Protected)

void UTpSystemBase::ImpelGameCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.ImpelGameCreated");

	UTpSystemBase_ImpelGameCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemBase.ImpelDisconnected
// (Simulated, Event, Protected)

void UTpSystemBase::ImpelDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.ImpelDisconnected");

	UTpSystemBase_ImpelDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemBase.ImpelConnected
// (Simulated, Event, Protected)

void UTpSystemBase::ImpelConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.ImpelConnected");

	UTpSystemBase_ImpelConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemBase.GetProtoHTTP
// (Simulated, Event, Public)
// Parameters:
// class UTpProtoHTTP*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpProtoHTTP* UTpSystemBase::GetProtoHTTP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.GetProtoHTTP");

	UTpSystemBase_GetProtoHTTP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.GetFileLockerService
// (Simulated, Event, Public)
// Parameters:
// class UTpFileLockerService*    ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpFileLockerService* UTpSystemBase::GetFileLockerService()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.GetFileLockerService");

	UTpSystemBase_GetFileLockerService_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.GetAchievementManager
// (Simulated, Event, Public)
// Parameters:
// class UTpAchievementManager*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpAchievementManager* UTpSystemBase::GetAchievementManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.GetAchievementManager");

	UTpSystemBase_GetAchievementManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.GetMessageService
// (Simulated, Event, Public)
// Parameters:
// class UTpMessageService*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpMessageService* UTpSystemBase::GetMessageService()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.GetMessageService");

	UTpSystemBase_GetMessageService_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.GetGameManager
// (Simulated, Event, Public)
// Parameters:
// class UTpGameManager*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpGameManager* UTpSystemBase::GetGameManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.GetGameManager");

	UTpSystemBase_GetGameManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.GetGameBrowser
// (Simulated, Event, Public)
// Parameters:
// class UTpGameBrowser*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpGameBrowser* UTpSystemBase::GetGameBrowser()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.GetGameBrowser");

	UTpSystemBase_GetGameBrowser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.GetConnection
// (Simulated, Event, Public)
// Parameters:
// class UTpConnection*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpConnection* UTpSystemBase::GetConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.GetConnection");

	UTpSystemBase_GetConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.GetUserManager
// (Simulated, Event, Public)
// Parameters:
// class UTpUserManager*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpUserManager* UTpSystemBase::GetUserManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.GetUserManager");

	UTpSystemBase_GetUserManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.GetPresenceManager
// (Simulated, Event, Public)
// Parameters:
// class UTpPresenceManager*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpPresenceManager* UTpSystemBase::GetPresenceManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.GetPresenceManager");

	UTpSystemBase_GetPresenceManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.GetRankingService
// (Simulated, Event, Public)
// Parameters:
// class UTpRankingService*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpRankingService* UTpSystemBase::GetRankingService()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.GetRankingService");

	UTpSystemBase_GetRankingService_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.GetPlayGroupManager
// (Simulated, Event, Public)
// Parameters:
// class UTpPlayGroupManager*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpPlayGroupManager* UTpSystemBase::GetPlayGroupManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.GetPlayGroupManager");

	UTpSystemBase_GetPlayGroupManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.GetAssociationManager
// (Simulated, Event, Public)
// Parameters:
// class UTpAssociationManager*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpAssociationManager* UTpSystemBase::GetAssociationManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.GetAssociationManager");

	UTpSystemBase_GetAssociationManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpSystemBase.ProcessTick
// (Defined, Simulated, Event, Protected)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UTpSystemBase::ProcessTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.ProcessTick");

	UTpSystemBase_ProcessTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemBase.NpEventLoopControl
// (Simulated, Native, Protected)
// Parameters:
// int                            Op                             (Parm)

void UTpSystemBase::NpEventLoopControl(int Op)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.NpEventLoopControl");

	UTpSystemBase_NpEventLoopControl_Params params;
	params.Op = Op;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemBase.End
// (Simulated, Native, Protected)

void UTpSystemBase::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.End");

	UTpSystemBase_End_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemBase.Initialize
// (Simulated, Native, Protected)
// Parameters:
// struct FTpInitializeParams     InParams                       (Parm, NeedCtorLink)

void UTpSystemBase::Initialize(const struct FTpInitializeParams& InParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.Initialize");

	UTpSystemBase_Initialize_Params params;
	params.InParams = InParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystemBase.Get
// (Simulated, Native, Static, Public)
// Parameters:
// class UTpSystemBase*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UTpSystemBase* UTpSystemBase::STATIC_Get()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystemBase.Get");

	UTpSystemBase_Get_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpPresenceManager.OnPresenceUpdated
// (Public, Delegate)

void UTpPresenceManager::OnPresenceUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPresenceManager.OnPresenceUpdated");

	UTpPresenceManager_OnPresenceUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPresenceManager.SetPresence
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            StatusId                       (Parm)
// int                            ContextId                      (Parm)
// int                            ContextValue                   (Parm)

void UTpPresenceManager::SetPresence(unsigned char LocalUserNum, int StatusId, int ContextId, int ContextValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPresenceManager.SetPresence");

	UTpPresenceManager_SetPresence_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatusId = StatusId;
	params.ContextId = ContextId;
	params.ContextValue = ContextValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpPresenceManager.GetLocalPresence
// (Simulated, Native, Public)
// Parameters:
// struct FTpPresence             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTpPresence UTpPresenceManager::GetLocalPresence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPresenceManager.GetLocalPresence");

	UTpPresenceManager_GetLocalPresence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpPresenceManager.GetPresence
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            User                           (Parm)
// struct FTpPresence             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTpPresence UTpPresenceManager::GetPresence(const struct FUniqueNetId& User)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpPresenceManager.GetPresence");

	UTpPresenceManager_GetPresence_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpRankingService.OnFlushOnlineStatsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpRankingService::OnFlushOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpRankingService.OnFlushOnlineStatsComplete");

	UTpRankingService_OnFlushOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpRankingService.FlushOnlineStats
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpRankingService::FlushOnlineStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpRankingService.FlushOnlineStats");

	UTpRankingService_FlushOnlineStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpRankingService.WriteOnlineStats
// (Native, Public)
// Parameters:
// struct FUniqueNetId            Player                         (Parm)
// class UOnlineStatsWrite*       StatsWrite                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpRankingService::WriteOnlineStats(const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpRankingService.WriteOnlineStats");

	UTpRankingService_WriteOnlineStats_Params params;
	params.Player = Player;
	params.StatsWrite = StatsWrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpRankingService.WriteOnlinePlayerScores
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FOnlinePlayerScore> PlayerScores                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpRankingService::WriteOnlinePlayerScores(TArray<struct FOnlinePlayerScore>* PlayerScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpRankingService.WriteOnlinePlayerScores");

	UTpRankingService_WriteOnlinePlayerScores_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerScores != nullptr)
		*PlayerScores = params.PlayerScores;

	return params.ReturnValue;
}


// Function Tp.TpRankingService.FreeStats
// (Native, Public)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)

void UTpRankingService::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpRankingService.FreeStats");

	UTpRankingService_FreeStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpRankingService.OnReadOnlineStatsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpRankingService::OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpRankingService.OnReadOnlineStatsComplete");

	UTpRankingService_OnReadOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpRankingService.ReadOnlineStatsByRankAroundPlayer
// (Native, Public)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            NumRows                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpRankingService::ReadOnlineStatsByRankAroundPlayer(class UOnlineStatsRead* StatsRead, int NumRows)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpRankingService.ReadOnlineStatsByRankAroundPlayer");

	UTpRankingService_ReadOnlineStatsByRankAroundPlayer_Params params;
	params.StatsRead = StatsRead;
	params.NumRows = NumRows;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpRankingService.ReadOnlineStatsByRank
// (Native, Public)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            StartIndex                     (OptionalParm, Parm)
// int                            NumToRead                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpRankingService::ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpRankingService.ReadOnlineStatsByRank");

	UTpRankingService_ReadOnlineStatsByRank_Params params;
	params.StatsRead = StatsRead;
	params.StartIndex = StartIndex;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpRankingService.ReadOnlineStatsForFriends
// (Native, Public)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpRankingService::ReadOnlineStatsForFriends(class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpRankingService.ReadOnlineStatsForFriends");

	UTpRankingService_ReadOnlineStatsForFriends_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpRankingService.ReadOnlineStats
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpRankingService::ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpRankingService.ReadOnlineStats");

	UTpRankingService_ReadOnlineStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function Tp.TpRankingService.Initialize
// (Defined, Simulated, Public)
// Parameters:
// class UTpSystemBase*           InSystemBase                   (Parm)

void UTpRankingService::Initialize(class UTpSystemBase* InSystemBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpRankingService.Initialize");

	UTpRankingService_Initialize_Params params;
	params.InSystemBase = InSystemBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUserManager.ShowSendMessageUI
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            Recipient                      (Parm)
// bool                           bIsFriendRequest               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUserManager::ShowSendMessageUI(const struct FUniqueNetId& Recipient, bool bIsFriendRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUserManager.ShowSendMessageUI");

	UTpUserManager_ShowSendMessageUI_Params params;
	params.Recipient = Recipient;
	params.bIsFriendRequest = bIsFriendRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUserManager.CancelShowGamerCardUI
// (Simulated, Native, Public)

void UTpUserManager::CancelShowGamerCardUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUserManager.CancelShowGamerCardUI");

	UTpUserManager_CancelShowGamerCardUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUserManager.OnShowGamerCardUI
// (Public, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpUserManager::OnShowGamerCardUI(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUserManager.OnShowGamerCardUI");

	UTpUserManager_OnShowGamerCardUI_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUserManager.ShowGamerCardUI
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerId                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUserManager::ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUserManager.ShowGamerCardUI");

	UTpUserManager_ShowGamerCardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUserManager.OnGetPlayerId
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            PlayerId                       (Parm)
// bool                           bInOk                          (Parm)

void UTpUserManager::OnGetPlayerId(const struct FUniqueNetId& PlayerId, bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUserManager.OnGetPlayerId");

	UTpUserManager_OnGetPlayerId_Params params;
	params.PlayerId = PlayerId;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUserManager.LookupPlayerId
// (Simulated, Native, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUserManager::LookupPlayerId(const struct FString& UserName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUserManager.LookupPlayerId");

	UTpUserManager_LookupPlayerId_Params params;
	params.UserName = UserName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUserManager.GetUsername
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerId                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTpUserManager::GetUsername(const struct FUniqueNetId& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUserManager.GetUsername");

	UTpUserManager_GetUsername_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUserManager.GetPlayerId
// (Simulated, Native, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FUniqueNetId            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUniqueNetId UTpUserManager::GetPlayerId(const struct FString& UserName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUserManager.GetPlayerId");

	UTpUserManager_GetPlayerId_Params params;
	params.UserName = UserName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUserManager.GetLocalUsername
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTpUserManager::GetLocalUsername(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUserManager.GetLocalUsername");

	UTpUserManager_GetLocalUsername_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUserManager.GetLocalPlayerId
// (Simulated, Native, Public)
// Parameters:
// struct FUniqueNetId            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUniqueNetId UTpUserManager::GetLocalPlayerId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUserManager.GetLocalPlayerId");

	UTpUserManager_GetLocalPlayerId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpDebugger.OnDestroyGame
// (Simulated, Public)
// Parameters:
// bool                           bOk                            (Parm)

void UTpDebugger::OnDestroyGame(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.OnDestroyGame");

	UTpDebugger_OnDestroyGame_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.DestroyGame
// (Simulated, Event, Public)
// Parameters:
// class UOnlineSubsystem*        InSys                          (Parm)

void UTpDebugger::DestroyGame(class UOnlineSubsystem* InSys)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.DestroyGame");

	UTpDebugger_DestroyGame_Params params;
	params.InSys = InSys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.OnCreateGame
// (Simulated, Public)
// Parameters:
// bool                           bOk                            (Parm)

void UTpDebugger::OnCreateGame(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.OnCreateGame");

	UTpDebugger_OnCreateGame_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.CreateGame
// (Simulated, Event, Public)
// Parameters:
// class UOnlineSubsystem*        InSys                          (Parm)
// struct FString                 InName                         (Parm, NeedCtorLink)
// bool                           bInIsLan                       (Parm)

void UTpDebugger::CreateGame(class UOnlineSubsystem* InSys, const struct FString& InName, bool bInIsLan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.CreateGame");

	UTpDebugger_CreateGame_Params params;
	params.InSys = InSys;
	params.InName = InName;
	params.bInIsLan = bInIsLan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.OnCreateAccount
// (Simulated, Public)
// Parameters:
// bool                           bOk                            (Parm)

void UTpDebugger::OnCreateAccount(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.OnCreateAccount");

	UTpDebugger_OnCreateAccount_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.CreateAccount
// (Simulated, Event, Public)
// Parameters:
// class UOnlineSubsystem*        InSys                          (Parm)
// struct FString                 InName                         (Parm, NeedCtorLink)
// struct FString                 InPassword                     (Parm, NeedCtorLink)
// struct FString                 InEmail                        (Parm, NeedCtorLink)

void UTpDebugger::CreateAccount(class UOnlineSubsystem* InSys, const struct FString& InName, const struct FString& InPassword, const struct FString& InEmail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.CreateAccount");

	UTpDebugger_CreateAccount_Params params;
	params.InSys = InSys;
	params.InName = InName;
	params.InPassword = InPassword;
	params.InEmail = InEmail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.OnLogout
// (Simulated, Public)
// Parameters:
// bool                           bOk                            (Parm)

void UTpDebugger::OnLogout(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.OnLogout");

	UTpDebugger_OnLogout_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.Logout
// (Simulated, Event, Public)
// Parameters:
// class UOnlineSubsystem*        InSys                          (Parm)

void UTpDebugger::Logout(class UOnlineSubsystem* InSys)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.Logout");

	UTpDebugger_Logout_Params params;
	params.InSys = InSys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.OnLoginFailed
// (Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode                      (Parm)

void UTpDebugger::OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.OnLoginFailed");

	UTpDebugger_OnLoginFailed_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.OnLoginChange
// (Simulated, Public)

void UTpDebugger::OnLoginChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.OnLoginChange");

	UTpDebugger_OnLoginChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.Login
// (Simulated, Event, Public)
// Parameters:
// class UOnlineSubsystem*        InSys                          (Parm)
// struct FString                 InName                         (Parm, NeedCtorLink)
// struct FString                 InPasswd                       (Parm, NeedCtorLink)

void UTpDebugger::Login(class UOnlineSubsystem* InSys, const struct FString& InName, const struct FString& InPasswd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.Login");

	UTpDebugger_Login_Params params;
	params.InSys = InSys;
	params.InName = InName;
	params.InPasswd = InPasswd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.Log
// (Simulated, Native, Static, Public)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)

void UTpDebugger::STATIC_Log(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.Log");

	UTpDebugger_Log_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.StateFaulted
// (Simulated, Native, Static, Public)
// Parameters:
// class UObject*                 InObject                       (Parm)
// struct FString                 InWhere                        (Parm, NeedCtorLink)

void UTpDebugger::STATIC_StateFaulted(class UObject* InObject, const struct FString& InWhere)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.StateFaulted");

	UTpDebugger_StateFaulted_Params params;
	params.InObject = InObject;
	params.InWhere = InWhere;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.StateChanged
// (Simulated, Native, Static, Public)
// Parameters:
// class UObject*                 InObject                       (Parm)

void UTpDebugger::STATIC_StateChanged(class UObject* InObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.StateChanged");

	UTpDebugger_StateChanged_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpDebugger.Register
// (Simulated, Native, Static, Public)
// Parameters:
// class UObject*                 InObject                       (Parm)

void UTpDebugger::STATIC_Register(class UObject* InObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpDebugger.Register");

	UTpDebugger_Register_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.SetActiveControllerIdNative
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UTpUoPlayer::SetActiveControllerIdNative(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.SetActiveControllerIdNative");

	UTpUoPlayer_SetActiveControllerIdNative_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.IsSignedIn
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::IsSignedIn(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.IsSignedIn");

	UTpUoPlayer_IsSignedIn_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.ProcessTick
// (Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UTpUoPlayer::ProcessTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ProcessTick");

	UTpUoPlayer_ProcessTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.SetActiveControllerId
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UTpUoPlayer::SetActiveControllerId(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.SetActiveControllerId");

	UTpUoPlayer_SetActiveControllerId_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.GetPlayersList
// (Defined, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlinePlayer>   Players                        (Parm, OutParm, NeedCtorLink)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UTpUoPlayer::GetPlayersList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlinePlayer>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.GetPlayersList");

	UTpUoPlayer_GetPlayersList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.ClearReadPlayersCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayersCompleteDelegate    (Parm, NeedCtorLink)

void UTpUoPlayer::ClearReadPlayersCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayersCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearReadPlayersCompleteDelegate");

	UTpUoPlayer_ClearReadPlayersCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayersCompleteDelegate = ReadPlayersCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.SetReadPlayersCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayersCompleteDelegate    (Parm, NeedCtorLink)

void UTpUoPlayer::SetReadPlayersCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayersCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.SetReadPlayersCompleteDelegate");

	UTpUoPlayer_SetReadPlayersCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayersCompleteDelegate = ReadPlayersCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnReadPlayersComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnReadPlayersComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnReadPlayersComplete_Remove");

	UTpUoPlayer_OnReadPlayersComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnReadPlayersComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnReadPlayersComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnReadPlayersComplete_Add");

	UTpUoPlayer_OnReadPlayersComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnReadPlayersComplete_Invoke
// (Final, Defined, Simulated, Event, Public)

void UTpUoPlayer::OnReadPlayersComplete_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnReadPlayersComplete_Invoke");

	UTpUoPlayer_OnReadPlayersComplete_Invoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnReadPlayersComplete
// (Final, Private, Delegate)

void UTpUoPlayer::OnReadPlayersComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnReadPlayersComplete");

	UTpUoPlayer_OnReadPlayersComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.ReadPlayersList
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::ReadPlayersList(unsigned char LocalUserNum, int Count, int StartingAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ReadPlayersList");

	UTpUoPlayer_ReadPlayersList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.DeleteMessage
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            MessageIndex                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::DeleteMessage(unsigned char LocalUserNum, int MessageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.DeleteMessage");

	UTpUoPlayer_DeleteMessage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageIndex = MessageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.OnNewMessage
// (Final, Defined, Simulated, Private)
// Parameters:
// struct FUniqueNetId            PlayerId                       (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpUoPlayer::OnNewMessage(const struct FUniqueNetId& PlayerId, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnNewMessage");

	UTpUoPlayer_OnNewMessage_Params params;
	params.PlayerId = PlayerId;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.ClearFriendMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UTpUoPlayer::ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearFriendMessageReceivedDelegate");

	UTpUoPlayer_ClearFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddFriendMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UTpUoPlayer::AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddFriendMessageReceivedDelegate");

	UTpUoPlayer_AddFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnFriendMessageReceived_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnFriendMessageReceived_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendMessageReceived_Remove");

	UTpUoPlayer_OnFriendMessageReceived_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnFriendMessageReceived_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnFriendMessageReceived_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendMessageReceived_Add");

	UTpUoPlayer_OnFriendMessageReceived_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnFriendMessageReceived_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            SendingPlayer                  (Parm)
// struct FString                 SendingNick                    (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpUoPlayer::OnFriendMessageReceived_Invoke(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendMessageReceived_Invoke");

	UTpUoPlayer_OnFriendMessageReceived_Invoke_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SendingPlayer = SendingPlayer;
	params.SendingNick = SendingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnFriendMessageReceived
// (Final, Private, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            SendingPlayer                  (Parm)
// struct FString                 SendingNick                    (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpUoPlayer::OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendMessageReceived");

	UTpUoPlayer_OnFriendMessageReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SendingPlayer = SendingPlayer;
	params.SendingNick = SendingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.GetFriendMessages
// (Defined, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (Parm, OutParm, NeedCtorLink)

void UTpUoPlayer::GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.GetFriendMessages");

	UTpUoPlayer_GetFriendMessages_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendMessages != nullptr)
		*FriendMessages = params.FriendMessages;
}


// Function Tp.TpUoPlayer.ClearJoinFriendGameCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)

void UTpUoPlayer::ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearJoinFriendGameCompleteDelegate");

	UTpUoPlayer_ClearJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddJoinFriendGameCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)

void UTpUoPlayer::AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddJoinFriendGameCompleteDelegate");

	UTpUoPlayer_AddJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnJoinFriendGameComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnJoinFriendGameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnJoinFriendGameComplete");

	UTpUoPlayer_OnJoinFriendGameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.JoinFriendGame
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.JoinFriendGame");

	UTpUoPlayer_JoinFriendGame_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.ClearReceivedGameInviteDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)

void UTpUoPlayer::ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearReceivedGameInviteDelegate");

	UTpUoPlayer_ClearReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddReceivedGameInviteDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)

void UTpUoPlayer::AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddReceivedGameInviteDelegate");

	UTpUoPlayer_AddReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnReceivedGameInvite
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 InviterName                    (Parm, NeedCtorLink)

void UTpUoPlayer::OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnReceivedGameInvite");

	UTpUoPlayer_OnReceivedGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviterName = InviterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.SendGameInviteToFriends
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Friends                        (Parm, NeedCtorLink)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.SendGameInviteToFriends");

	UTpUoPlayer_SendGameInviteToFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friends = Friends;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.SendGameInviteToFriend
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::SendGameInviteToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.SendGameInviteToFriend");

	UTpUoPlayer_SendGameInviteToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.ClearSendMessageByUsernameDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         SendMessageDelegate            (Parm, NeedCtorLink)

void UTpUoPlayer::ClearSendMessageByUsernameDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& SendMessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearSendMessageByUsernameDelegate");

	UTpUoPlayer_ClearSendMessageByUsernameDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SendMessageDelegate = SendMessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddSendMessageByUsernameDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         SendMessageDelegate            (Parm, NeedCtorLink)

void UTpUoPlayer::AddSendMessageByUsernameDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& SendMessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddSendMessageByUsernameDelegate");

	UTpUoPlayer_AddSendMessageByUsernameDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SendMessageDelegate = SendMessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnSendMessageByUsername_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnSendMessageByUsername_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnSendMessageByUsername_Remove");

	UTpUoPlayer_OnSendMessageByUsername_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnSendMessageByUsername_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnSendMessageByUsername_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnSendMessageByUsername_Add");

	UTpUoPlayer_OnSendMessageByUsername_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnSendMessageByUsername_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void UTpUoPlayer::OnSendMessageByUsername_Invoke(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnSendMessageByUsername_Invoke");

	UTpUoPlayer_OnSendMessageByUsername_Invoke_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnSendMessageByUsername
// (Final, Private, Delegate)
// Parameters:
// bool                           bSuccess                       (Parm)

void UTpUoPlayer::OnSendMessageByUsername(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnSendMessageByUsername");

	UTpUoPlayer_OnSendMessageByUsername_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnSendMessageByUsernameDone
// (Defined, Public)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpUoPlayer::OnSendMessageByUsernameDone(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnSendMessageByUsernameDone");

	UTpUoPlayer_OnSendMessageByUsernameDone_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.SendMessageByUsernameStepTwo
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            PlayerId                       (Parm)
// bool                           bInOk                          (Parm)

void UTpUoPlayer::SendMessageByUsernameStepTwo(const struct FUniqueNetId& PlayerId, bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.SendMessageByUsernameStepTwo");

	UTpUoPlayer_SendMessageByUsernameStepTwo_Params params;
	params.PlayerId = PlayerId;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.SendMessageByUsername
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpUoPlayer::SendMessageByUsername(unsigned char LocalUserNum, const struct FString& UserName, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.SendMessageByUsername");

	UTpUoPlayer_SendMessageByUsername_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UserName = UserName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.SendMessageToFriend
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.SendMessageToFriend");

	UTpUoPlayer_SendMessageToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.OnFriendRequestDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FUniqueNetId            RequestingPlayer               (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpUoPlayer::OnFriendRequestDelegate(const struct FUniqueNetId& RequestingPlayer, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendRequestDelegate");

	UTpUoPlayer_OnFriendRequestDelegate_Params params;
	params.RequestingPlayer = RequestingPlayer;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.ClearFriendInviteReceivedDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)

void UTpUoPlayer::ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearFriendInviteReceivedDelegate");

	UTpUoPlayer_ClearFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddFriendInviteReceivedDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)

void UTpUoPlayer::AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddFriendInviteReceivedDelegate");

	UTpUoPlayer_AddFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnFriendInviteReceived_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnFriendInviteReceived_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendInviteReceived_Remove");

	UTpUoPlayer_OnFriendInviteReceived_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnFriendInviteReceived_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnFriendInviteReceived_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendInviteReceived_Add");

	UTpUoPlayer_OnFriendInviteReceived_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnFriendInviteReceived_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// struct FString                 RequestingNick                 (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpUoPlayer::OnFriendInviteReceived_Invoke(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendInviteReceived_Invoke");

	UTpUoPlayer_OnFriendInviteReceived_Invoke_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;
	params.RequestingNick = RequestingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnFriendInviteReceived
// (Final, Private, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// struct FString                 RequestingNick                 (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpUoPlayer::OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendInviteReceived");

	UTpUoPlayer_OnFriendInviteReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;
	params.RequestingNick = RequestingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.RemoveFriend
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            FormerFriend                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.RemoveFriend");

	UTpUoPlayer_RemoveFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FormerFriend = FormerFriend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.DenyFriendInvite
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.DenyFriendInvite");

	UTpUoPlayer_DenyFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.AcceptFriendInvite
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AcceptFriendInvite");

	UTpUoPlayer_AcceptFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.ClearAddFriendByNameCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)

void UTpUoPlayer::ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearAddFriendByNameCompleteDelegate");

	UTpUoPlayer_ClearAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddAddFriendByNameCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)

void UTpUoPlayer::AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddAddFriendByNameCompleteDelegate");

	UTpUoPlayer_AddAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnAddFriendByNameComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnAddFriendByNameComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnAddFriendByNameComplete_Remove");

	UTpUoPlayer_OnAddFriendByNameComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnAddFriendByNameComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnAddFriendByNameComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnAddFriendByNameComplete_Add");

	UTpUoPlayer_OnAddFriendByNameComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnAddFriendByNameComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnAddFriendByNameComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnAddFriendByNameComplete_Invoke");

	UTpUoPlayer_OnAddFriendByNameComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnAddFriendByNameComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnAddFriendByNameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnAddFriendByNameComplete");

	UTpUoPlayer_OnAddFriendByNameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnAddFriend
// (Final, Defined, Simulated, Private)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnAddFriend(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnAddFriend");

	UTpUoPlayer_OnAddFriend_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLookupPlayerIdForAddFriend
// (Final, Defined, Simulated, Private)
// Parameters:
// struct FUniqueNetId            UserId                         (Parm)
// bool                           bSuccess                       (Parm)

void UTpUoPlayer::OnLookupPlayerIdForAddFriend(const struct FUniqueNetId& UserId, bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLookupPlayerIdForAddFriend");

	UTpUoPlayer_OnLookupPlayerIdForAddFriend_Params params;
	params.UserId = UserId;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddFriendByName
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 FriendName                     (Parm, NeedCtorLink)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddFriendByName");

	UTpUoPlayer_AddFriendByName_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendName = FriendName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.AddFriend
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            NewFriend                      (Parm)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddFriend");

	UTpUoPlayer_AddFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewFriend = NewFriend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.SetKeyboardInputResults
// (Native, Public)
// Parameters:
// struct FString                 Value                          (Parm, NeedCtorLink)

void UTpUoPlayer::SetKeyboardInputResults(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.SetKeyboardInputResults");

	UTpUoPlayer_SetKeyboardInputResults_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.GetKeyboardInputResults
// (Native, Public, HasOutParms)
// Parameters:
// unsigned char                  bWasCanceled                   (Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTpUoPlayer::GetKeyboardInputResults(unsigned char* bWasCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.GetKeyboardInputResults");

	UTpUoPlayer_GetKeyboardInputResults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasCanceled != nullptr)
		*bWasCanceled = params.bWasCanceled;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.ClearKeyboardInputDoneDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)

void UTpUoPlayer::ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearKeyboardInputDoneDelegate");

	UTpUoPlayer_ClearKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddKeyboardInputDoneDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)

void UTpUoPlayer::AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddKeyboardInputDoneDelegate");

	UTpUoPlayer_AddKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnKeyboardInputComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnKeyboardInputComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnKeyboardInputComplete_Remove");

	UTpUoPlayer_OnKeyboardInputComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnKeyboardInputComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnKeyboardInputComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnKeyboardInputComplete_Add");

	UTpUoPlayer_OnKeyboardInputComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnKeyboardInputComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnKeyboardInputComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnKeyboardInputComplete_Invoke");

	UTpUoPlayer_OnKeyboardInputComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnKeyboardInputComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnKeyboardInputComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnKeyboardInputComplete");

	UTpUoPlayer_OnKeyboardInputComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.ShowKeyboardUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 TitleText                      (Parm, NeedCtorLink)
// struct FString                 DescriptionText                (Parm, NeedCtorLink)
// bool                           bIsPassword                    (OptionalParm, Parm)
// bool                           bShouldValidate                (OptionalParm, Parm)
// struct FString                 DefaultText                    (OptionalParm, Parm, NeedCtorLink)
// int                            MaxResultLength                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ShowKeyboardUI");

	UTpUoPlayer_ShowKeyboardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleText = TitleText;
	params.DescriptionText = DescriptionText;
	params.bIsPassword = bIsPassword;
	params.bShouldValidate = bShouldValidate;
	params.DefaultText = DefaultText;
	params.MaxResultLength = MaxResultLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.SetOnlineStatus
// (Defined, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            StatusId                       (Parm)
// TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (Const, Parm, OutParm, NeedCtorLink)
// TArray<struct FSettingsProperty> Properties                     (Const, Parm, OutParm, NeedCtorLink)

void UTpUoPlayer::SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, TArray<struct FSettingsProperty>* Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.SetOnlineStatus");

	UTpUoPlayer_SetOnlineStatus_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatusId = StatusId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalizedStringSettings != nullptr)
		*LocalizedStringSettings = params.LocalizedStringSettings;
	if (Properties != nullptr)
		*Properties = params.Properties;
}


// Function Tp.TpUoPlayer.GetFriendsList
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriend>   Friends                        (Parm, OutParm, NeedCtorLink)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UTpUoPlayer::GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.GetFriendsList");

	UTpUoPlayer_GetFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.ClearReadFriendsCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)

void UTpUoPlayer::ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearReadFriendsCompleteDelegate");

	UTpUoPlayer_ClearReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddReadFriendsCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)

void UTpUoPlayer::AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddReadFriendsCompleteDelegate");

	UTpUoPlayer_AddReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnFriendsListLoaded
// (Defined, Simulated, Public)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpUoPlayer::OnFriendsListLoaded(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendsListLoaded");

	UTpUoPlayer_OnFriendsListLoaded_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnReadFriendsComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnReadFriendsComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnReadFriendsComplete_Remove");

	UTpUoPlayer_OnReadFriendsComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnReadFriendsComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnReadFriendsComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnReadFriendsComplete_Add");

	UTpUoPlayer_OnReadFriendsComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnReadFriendsComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnReadFriendsComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnReadFriendsComplete_Invoke");

	UTpUoPlayer_OnReadFriendsComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnReadFriendsComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnReadFriendsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnReadFriendsComplete");

	UTpUoPlayer_OnReadFriendsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.ReadFriendsList
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ReadFriendsList");

	UTpUoPlayer_ReadFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.ClearWriteProfileSettingsCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UTpUoPlayer::ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearWriteProfileSettingsCompleteDelegate");

	UTpUoPlayer_ClearWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddWriteProfileSettingsCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UTpUoPlayer::AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddWriteProfileSettingsCompleteDelegate");

	UTpUoPlayer_AddWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.SaveSystemWriteProfileComplete
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETsResult>         Result                         (Parm)

void UTpUoPlayer::SaveSystemWriteProfileComplete(TEnumAsByte<ETsResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.SaveSystemWriteProfileComplete");

	UTpUoPlayer_SaveSystemWriteProfileComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.WriteProfileSettings
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.WriteProfileSettings");

	UTpUoPlayer_WriteProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.OnWriteProfileSettingsComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnWriteProfileSettingsComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnWriteProfileSettingsComplete_Remove");

	UTpUoPlayer_OnWriteProfileSettingsComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnWriteProfileSettingsComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnWriteProfileSettingsComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnWriteProfileSettingsComplete_Add");

	UTpUoPlayer_OnWriteProfileSettingsComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnWriteProfileSettingsComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnWriteProfileSettingsComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnWriteProfileSettingsComplete_Invoke");

	UTpUoPlayer_OnWriteProfileSettingsComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnWriteProfileSettingsComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnWriteProfileSettingsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnWriteProfileSettingsComplete");

	UTpUoPlayer_OnWriteProfileSettingsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.GetProfileSettings
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineProfileSettings* UTpUoPlayer::GetProfileSettings(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.GetProfileSettings");

	UTpUoPlayer_GetProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.ClearReadProfileSettingsCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UTpUoPlayer::ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearReadProfileSettingsCompleteDelegate");

	UTpUoPlayer_ClearReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddReadProfileSettingsCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UTpUoPlayer::AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddReadProfileSettingsCompleteDelegate");

	UTpUoPlayer_AddReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.SaveSystemReadProfileComplete
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETsResult>         Result                         (Parm)

void UTpUoPlayer::SaveSystemReadProfileComplete(TEnumAsByte<ETsResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.SaveSystemReadProfileComplete");

	UTpUoPlayer_SaveSystemReadProfileComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.ReadProfileSettings
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ReadProfileSettings");

	UTpUoPlayer_ReadProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.OnReadProfileSettingsComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnReadProfileSettingsComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnReadProfileSettingsComplete_Remove");

	UTpUoPlayer_OnReadProfileSettingsComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnReadProfileSettingsComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnReadProfileSettingsComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnReadProfileSettingsComplete_Add");

	UTpUoPlayer_OnReadProfileSettingsComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnReadProfileSettingsComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnReadProfileSettingsComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnReadProfileSettingsComplete_Invoke");

	UTpUoPlayer_OnReadProfileSettingsComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnReadProfileSettingsComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnReadProfileSettingsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnReadProfileSettingsComplete");

	UTpUoPlayer_OnReadProfileSettingsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.ClearFriendsChangeDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)

void UTpUoPlayer::ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearFriendsChangeDelegate");

	UTpUoPlayer_ClearFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddFriendsChangeDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)

void UTpUoPlayer::AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddFriendsChangeDelegate");

	UTpUoPlayer_AddFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnFriendsChangeDelegate
// (Final, Defined, Private)

void UTpUoPlayer::OnFriendsChangeDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendsChangeDelegate");

	UTpUoPlayer_OnFriendsChangeDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnPresenceChangeDelegate
// (Final, Defined, Private)

void UTpUoPlayer::OnPresenceChangeDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnPresenceChangeDelegate");

	UTpUoPlayer_OnPresenceChangeDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.ClearMutingChangeDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)

void UTpUoPlayer::ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearMutingChangeDelegate");

	UTpUoPlayer_ClearMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddMutingChangeDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)

void UTpUoPlayer::AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddMutingChangeDelegate");

	UTpUoPlayer_AddMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.ClearLoginCancelledDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)

void UTpUoPlayer::ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearLoginCancelledDelegate");

	UTpUoPlayer_ClearLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddLoginCancelledDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)

void UTpUoPlayer::AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddLoginCancelledDelegate");

	UTpUoPlayer_AddLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.ClearLoginChangeDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (OptionalParm, Parm)

void UTpUoPlayer::ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearLoginChangeDelegate");

	UTpUoPlayer_ClearLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddLoginChangeDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (OptionalParm, Parm)

void UTpUoPlayer::AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddLoginChangeDelegate");

	UTpUoPlayer_AddLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.ShowFriendsUI
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::ShowFriendsUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ShowFriendsUI");

	UTpUoPlayer_ShowFriendsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.IsMuted
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerId                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.IsMuted");

	UTpUoPlayer_IsMuted_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.AreAnyFriends
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FFriendsQuery>   Query                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AreAnyFriends");

	UTpUoPlayer_AreAnyFriends_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Query != nullptr)
		*Query = params.Query;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.IsFriend
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerId                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.IsFriend");

	UTpUoPlayer_IsFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.CanShowPresenceInformation
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UTpUoPlayer::CanShowPresenceInformation(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.CanShowPresenceInformation");

	UTpUoPlayer_CanShowPresenceInformation_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.CanViewPlayerProfiles
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UTpUoPlayer::CanViewPlayerProfiles(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.CanViewPlayerProfiles");

	UTpUoPlayer_CanViewPlayerProfiles_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.CanPurchaseContent
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UTpUoPlayer::CanPurchaseContent(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.CanPurchaseContent");

	UTpUoPlayer_CanPurchaseContent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.CanDownloadUserContent
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UTpUoPlayer::CanDownloadUserContent(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.CanDownloadUserContent");

	UTpUoPlayer_CanDownloadUserContent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.CanCommunicate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UTpUoPlayer::CanCommunicate(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.CanCommunicate");

	UTpUoPlayer_CanCommunicate_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.CanPlayOnline
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UTpUoPlayer::CanPlayOnline(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.CanPlayOnline");

	UTpUoPlayer_CanPlayOnline_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.GetPlayerNickname
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTpUoPlayer::GetPlayerNickname(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.GetPlayerNickname");

	UTpUoPlayer_GetPlayerNickname_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.GetUniquePlayerId
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerId                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.GetUniquePlayerId");

	UTpUoPlayer_GetUniquePlayerId_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.GetLoginStatus
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<ELoginStatus>      ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoginStatus> UTpUoPlayer::GetLoginStatus(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.GetLoginStatus");

	UTpUoPlayer_GetLoginStatus_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.ClearLogoutCompletedDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LogoutDelegate                 (Parm, NeedCtorLink)

void UTpUoPlayer::ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearLogoutCompletedDelegate");

	UTpUoPlayer_ClearLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddLogoutCompletedDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LogoutDelegate                 (Parm, NeedCtorLink)

void UTpUoPlayer::AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddLogoutCompletedDelegate");

	UTpUoPlayer_AddLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLogoutCompleted_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnLogoutCompleted_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLogoutCompleted_Remove");

	UTpUoPlayer_OnLogoutCompleted_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLogoutCompleted_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnLogoutCompleted_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLogoutCompleted_Add");

	UTpUoPlayer_OnLogoutCompleted_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLogoutCompleted_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnLogoutCompleted_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLogoutCompleted_Invoke");

	UTpUoPlayer_OnLogoutCompleted_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLogoutCompleted
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayer::OnLogoutCompleted(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLogoutCompleted");

	UTpUoPlayer_OnLogoutCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.Logout
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::Logout(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.Logout");

	UTpUoPlayer_Logout_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.ClearLoginFailedDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UTpUoPlayer::ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ClearLoginFailedDelegate");

	UTpUoPlayer_ClearLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AddLoginFailedDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UTpUoPlayer::AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AddLoginFailedDelegate");

	UTpUoPlayer_AddLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLoginFailed_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnLoginFailed_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLoginFailed_Remove");

	UTpUoPlayer_OnLoginFailed_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLoginFailed_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnLoginFailed_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLoginFailed_Add");

	UTpUoPlayer_OnLoginFailed_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLoginFailed_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode                      (Parm)

void UTpUoPlayer::OnLoginFailed_Invoke(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLoginFailed_Invoke");

	UTpUoPlayer_OnLoginFailed_Invoke_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLoginFailed
// (Final, Private, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode                      (Parm)

void UTpUoPlayer::OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLoginFailed");

	UTpUoPlayer_OnLoginFailed_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.AutoLogin
// (Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::AutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.AutoLogin");

	UTpUoPlayer_AutoLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.Login
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 LoginName                      (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// bool                           bWantsLocalOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.Login");

	UTpUoPlayer_Login_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginName = LoginName;
	params.Password = Password;
	params.bWantsLocalOnly = bWantsLocalOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.ShowLoginUI
// (Simulated, Native, Public)
// Parameters:
// bool                           bShowOnlineOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayer::ShowLoginUI(bool bShowOnlineOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.ShowLoginUI");

	UTpUoPlayer_ShowLoginUI_Params params;
	params.bShowOnlineOnly = bShowOnlineOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayer.OnFriendsChange_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnFriendsChange_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendsChange_Remove");

	UTpUoPlayer_OnFriendsChange_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnFriendsChange_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnFriendsChange_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendsChange_Add");

	UTpUoPlayer_OnFriendsChange_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnFriendsChange_Invoke
// (Final, Defined, Simulated, Event, Public)

void UTpUoPlayer::OnFriendsChange_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendsChange_Invoke");

	UTpUoPlayer_OnFriendsChange_Invoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnFriendsChange
// (Final, Private, Delegate)

void UTpUoPlayer::OnFriendsChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnFriendsChange");

	UTpUoPlayer_OnFriendsChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnMutingChange_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnMutingChange_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnMutingChange_Remove");

	UTpUoPlayer_OnMutingChange_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnMutingChange_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnMutingChange_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnMutingChange_Add");

	UTpUoPlayer_OnMutingChange_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnMutingChange_Invoke
// (Final, Defined, Simulated, Event, Public)

void UTpUoPlayer::OnMutingChange_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnMutingChange_Invoke");

	UTpUoPlayer_OnMutingChange_Invoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnMutingChange
// (Final, Private, Delegate)

void UTpUoPlayer::OnMutingChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnMutingChange");

	UTpUoPlayer_OnMutingChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLoginCancelled_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnLoginCancelled_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLoginCancelled_Remove");

	UTpUoPlayer_OnLoginCancelled_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLoginCancelled_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnLoginCancelled_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLoginCancelled_Add");

	UTpUoPlayer_OnLoginCancelled_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLoginCancelled_Invoke
// (Final, Defined, Simulated, Event, Public)

void UTpUoPlayer::OnLoginCancelled_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLoginCancelled_Invoke");

	UTpUoPlayer_OnLoginCancelled_Invoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLoginCancelled
// (Final, Private, Delegate)

void UTpUoPlayer::OnLoginCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLoginCancelled");

	UTpUoPlayer_OnLoginCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLoginChange_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnLoginChange_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLoginChange_Remove");

	UTpUoPlayer_OnLoginChange_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLoginChange_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayer::OnLoginChange_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLoginChange_Add");

	UTpUoPlayer_OnLoginChange_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLoginChange_Invoke
// (Final, Defined, Simulated, Event, Public)

void UTpUoPlayer::OnLoginChange_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLoginChange_Invoke");

	UTpUoPlayer_OnLoginChange_Invoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.OnLoginChange
// (Final, Private, Delegate)

void UTpUoPlayer::OnLoginChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.OnLoginChange");

	UTpUoPlayer_OnLoginChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.InitializeNative
// (Native, Public)

void UTpUoPlayer::InitializeNative()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.InitializeNative");

	UTpUoPlayer_InitializeNative_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayer.Initialize
// (Defined, Simulated, Public)
// Parameters:
// class UTpSystemBase*           InSystemBase                   (Parm)

void UTpUoPlayer::Initialize(class UTpSystemBase* InSystemBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayer.Initialize");

	UTpUoPlayer_Initialize_Params params;
	params.InSystemBase = InSystemBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.ShowSendMessageUI
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            PlayerId                       (Parm)
// bool                           bIsFriendRequest               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::ShowSendMessageUI(const struct FUniqueNetId& PlayerId, bool bIsFriendRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ShowSendMessageUI");

	UTpUoPlayerEx_ShowSendMessageUI_Params params;
	params.PlayerId = PlayerId;
	params.bIsFriendRequest = bIsFriendRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.ShowPlayersUI
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::ShowPlayersUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ShowPlayersUI");

	UTpUoPlayerEx_ShowPlayersUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.ShowFriendsInviteUI
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerId                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::ShowFriendsInviteUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ShowFriendsInviteUI");

	UTpUoPlayerEx_ShowFriendsInviteUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.ClearProfileDataChangedDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (Parm, NeedCtorLink)

void UTpUoPlayerEx::ClearProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ClearProfileDataChangedDelegate");

	UTpUoPlayerEx_ClearProfileDataChangedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileDataChangedDelegate = ProfileDataChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.AddProfileDataChangedDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (Parm, NeedCtorLink)

void UTpUoPlayerEx::AddProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.AddProfileDataChangedDelegate");

	UTpUoPlayerEx_AddProfileDataChangedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileDataChangedDelegate = ProfileDataChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.OnProfileDataChanged
// (Public, Delegate)

void UTpUoPlayerEx::OnProfileDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.OnProfileDataChanged");

	UTpUoPlayerEx_OnProfileDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.UnlockGamerPicture
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            PictureId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::UnlockGamerPicture(unsigned char LocalUserNum, int PictureId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.UnlockGamerPicture");

	UTpUoPlayerEx_UnlockGamerPicture_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PictureId = PictureId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.OnUnlockAchievementComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayerEx::OnUnlockAchievementComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.OnUnlockAchievementComplete");

	UTpUoPlayerEx_OnUnlockAchievementComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.ClearUnlockAchievementCompleteDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (Parm, NeedCtorLink)

void UTpUoPlayerEx::ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ClearUnlockAchievementCompleteDelegate");

	UTpUoPlayerEx_ClearUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.AddUnlockAchievementCompleteDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (Parm, NeedCtorLink)

void UTpUoPlayerEx::AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.AddUnlockAchievementCompleteDelegate");

	UTpUoPlayerEx_AddUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.UnlockAchievement
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            AchievementId                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::UnlockAchievement(unsigned char LocalUserNum, int AchievementId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.UnlockAchievement");

	UTpUoPlayerEx_UnlockAchievement_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AchievementId = AchievementId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.IsDeviceValid
// (Public)
// Parameters:
// int                            DeviceID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::IsDeviceValid(int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.IsDeviceValid");

	UTpUoPlayerEx_IsDeviceValid_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.OnDeviceSelectionComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayerEx::OnDeviceSelectionComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.OnDeviceSelectionComplete");

	UTpUoPlayerEx_OnDeviceSelectionComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.GetDeviceSelectionResults
// (Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 DeviceName                     (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UTpUoPlayerEx::GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.GetDeviceSelectionResults");

	UTpUoPlayerEx_GetDeviceSelectionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceName != nullptr)
		*DeviceName = params.DeviceName;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.ClearDeviceSelectionDoneDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         DeviceDelegate                 (Parm, NeedCtorLink)

void UTpUoPlayerEx::ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ClearDeviceSelectionDoneDelegate");

	UTpUoPlayerEx_ClearDeviceSelectionDoneDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.AddDeviceSelectionDoneDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         DeviceDelegate                 (Parm, NeedCtorLink)

void UTpUoPlayerEx::AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.AddDeviceSelectionDoneDelegate");

	UTpUoPlayerEx_AddDeviceSelectionDoneDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.ShowDeviceSelectionUI
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            SizeNeeded                     (Parm)
// bool                           bForceShowUI                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, bool bForceShowUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ShowDeviceSelectionUI");

	UTpUoPlayerEx_ShowDeviceSelectionUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SizeNeeded = SizeNeeded;
	params.bForceShowUI = bForceShowUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.ShowMembershipMarketplaceUI
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::ShowMembershipMarketplaceUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ShowMembershipMarketplaceUI");

	UTpUoPlayerEx_ShowMembershipMarketplaceUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.ShowContentMarketplaceUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::ShowContentMarketplaceUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ShowContentMarketplaceUI");

	UTpUoPlayerEx_ShowContentMarketplaceUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.ShowInviteUI
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 InviteText                     (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::ShowInviteUI(unsigned char LocalUserNum, const struct FString& InviteText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ShowInviteUI");

	UTpUoPlayerEx_ShowInviteUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteText = InviteText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.ShowAchievementsUI
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::ShowAchievementsUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ShowAchievementsUI");

	UTpUoPlayerEx_ShowAchievementsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.ShowMessagesUI
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::ShowMessagesUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ShowMessagesUI");

	UTpUoPlayerEx_ShowMessagesUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.CancelShowGamerCardUI
// (Defined, Public)

void UTpUoPlayerEx::CancelShowGamerCardUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.CancelShowGamerCardUI");

	UTpUoPlayerEx_CancelShowGamerCardUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.OnShowGamerCardUI
// (Defined, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayerEx::OnShowGamerCardUI(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.OnShowGamerCardUI");

	UTpUoPlayerEx_OnShowGamerCardUI_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.ClearShowGamerCardResultDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         GamerCardDelegate              (Parm, NeedCtorLink)

void UTpUoPlayerEx::ClearShowGamerCardResultDelegate(const struct FScriptDelegate& GamerCardDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ClearShowGamerCardResultDelegate");

	UTpUoPlayerEx_ClearShowGamerCardResultDelegate_Params params;
	params.GamerCardDelegate = GamerCardDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.AddShowGamerCardResultDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         GamerCardDelegate              (Parm, NeedCtorLink)

void UTpUoPlayerEx::AddShowGamerCardResultDelegate(const struct FScriptDelegate& GamerCardDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.AddShowGamerCardResultDelegate");

	UTpUoPlayerEx_AddShowGamerCardResultDelegate_Params params;
	params.GamerCardDelegate = GamerCardDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.OnShowGamerCardResult_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayerEx::OnShowGamerCardResult_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.OnShowGamerCardResult_Remove");

	UTpUoPlayerEx_OnShowGamerCardResult_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.OnShowGamerCardResult_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayerEx::OnShowGamerCardResult_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.OnShowGamerCardResult_Add");

	UTpUoPlayerEx_OnShowGamerCardResult_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.OnShowGamerCardResult_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayerEx::OnShowGamerCardResult_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.OnShowGamerCardResult_Invoke");

	UTpUoPlayerEx_OnShowGamerCardResult_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.OnShowGamerCardResult
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayerEx::OnShowGamerCardResult(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.OnShowGamerCardResult");

	UTpUoPlayerEx_OnShowGamerCardResult_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayerEx.ShowGamerCardUI
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerId                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ShowGamerCardUI");

	UTpUoPlayerEx_ShowGamerCardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.ShowFeedbackUI
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerId                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayerEx::ShowFeedbackUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.ShowFeedbackUI");

	UTpUoPlayerEx_ShowFeedbackUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayerEx.Initialize
// (Defined, Simulated, Public)
// Parameters:
// class UTpSystemBase*           InSystemBase                   (Parm)

void UTpUoPlayerEx::Initialize(class UTpSystemBase* InSystemBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayerEx.Initialize");

	UTpUoPlayerEx_Initialize_Params params;
	params.InSystemBase = InSystemBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.ProcessTick
// (Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UTpUoSystem::ProcessTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.ProcessTick");

	UTpUoSystem_ProcessTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.ClearStorageDeviceChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)

void UTpUoSystem::ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.ClearStorageDeviceChangeDelegate");

	UTpUoSystem_ClearStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.AddStorageDeviceChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)

void UTpUoSystem::AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.AddStorageDeviceChangeDelegate");

	UTpUoSystem_AddStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnStorageDeviceChange_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoSystem::OnStorageDeviceChange_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnStorageDeviceChange_Remove");

	UTpUoSystem_OnStorageDeviceChange_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnStorageDeviceChange_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoSystem::OnStorageDeviceChange_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnStorageDeviceChange_Add");

	UTpUoSystem_OnStorageDeviceChange_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnStorageDeviceChange_Invoke
// (Final, Defined, Simulated, Event, Public)

void UTpUoSystem::OnStorageDeviceChange_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnStorageDeviceChange_Invoke");

	UTpUoSystem_OnStorageDeviceChange_Invoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnStorageDeviceChange
// (Final, Private, Delegate)

void UTpUoSystem::OnStorageDeviceChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnStorageDeviceChange");

	UTpUoSystem_OnStorageDeviceChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.GetNATType
// (Public)
// Parameters:
// TEnumAsByte<ENATType>          ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENATType> UTpUoSystem::GetNATType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.GetNATType");

	UTpUoSystem_GetNATType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoSystem.ClearConnectionStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UTpUoSystem::ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.ClearConnectionStatusChangeDelegate");

	UTpUoSystem_ClearConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.AddConnectionStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UTpUoSystem::AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.AddConnectionStatusChangeDelegate");

	UTpUoSystem_AddConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnConnectionChange
// (Defined, Public)
// Parameters:
// bool                           bConnected                     (Parm)

void UTpUoSystem::OnConnectionChange(bool bConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnConnectionChange");

	UTpUoSystem_OnConnectionChange_Params params;
	params.bConnected = bConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnConnectionStatusChange_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoSystem::OnConnectionStatusChange_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnConnectionStatusChange_Remove");

	UTpUoSystem_OnConnectionStatusChange_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnConnectionStatusChange_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoSystem::OnConnectionStatusChange_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnConnectionStatusChange_Add");

	UTpUoSystem_OnConnectionStatusChange_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnConnectionStatusChange_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus               (Parm)

void UTpUoSystem::OnConnectionStatusChange_Invoke(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnConnectionStatusChange_Invoke");

	UTpUoSystem_OnConnectionStatusChange_Invoke_Params params;
	params.ConnectionStatus = ConnectionStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnConnectionStatusChange
// (Final, Private, Delegate)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus               (Parm)

void UTpUoSystem::OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnConnectionStatusChange");

	UTpUoSystem_OnConnectionStatusChange_Params params;
	params.ConnectionStatus = ConnectionStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.IsControllerConnected
// (Defined, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoSystem::IsControllerConnected(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.IsControllerConnected");

	UTpUoSystem_IsControllerConnected_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoSystem.ClearControllerChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UTpUoSystem::ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.ClearControllerChangeDelegate");

	UTpUoSystem_ClearControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.AddControllerChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UTpUoSystem::AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.AddControllerChangeDelegate");

	UTpUoSystem_AddControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnControllerChange_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoSystem::OnControllerChange_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnControllerChange_Remove");

	UTpUoSystem_OnControllerChange_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnControllerChange_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoSystem::OnControllerChange_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnControllerChange_Add");

	UTpUoSystem_OnControllerChange_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnControllerChange_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bIsConnected                   (Parm)

void UTpUoSystem::OnControllerChange_Invoke(int ControllerId, bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnControllerChange_Invoke");

	UTpUoSystem_OnControllerChange_Invoke_Params params;
	params.ControllerId = ControllerId;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnControllerChange
// (Final, Private, Delegate)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bIsConnected                   (Parm)

void UTpUoSystem::OnControllerChange(int ControllerId, bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnControllerChange");

	UTpUoSystem_OnControllerChange_Params params;
	params.ControllerId = ControllerId;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.SetNetworkNotificationPosition
// (Public)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> NewPos                         (Parm)

void UTpUoSystem::SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.SetNetworkNotificationPosition");

	UTpUoSystem_SetNetworkNotificationPosition_Params params;
	params.NewPos = NewPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.GetNetworkNotificationPosition
// (Public)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENetworkNotificationPosition> UTpUoSystem::GetNetworkNotificationPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.GetNetworkNotificationPosition");

	UTpUoSystem_GetNetworkNotificationPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoSystem.ClearExternalUIChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ExternalUIDelegate             (Parm, NeedCtorLink)

void UTpUoSystem::ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.ClearExternalUIChangeDelegate");

	UTpUoSystem_ClearExternalUIChangeDelegate_Params params;
	params.ExternalUIDelegate = ExternalUIDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.AddExternalUIChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ExternalUIDelegate             (Parm, NeedCtorLink)

void UTpUoSystem::AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.AddExternalUIChangeDelegate");

	UTpUoSystem_AddExternalUIChangeDelegate_Params params;
	params.ExternalUIDelegate = ExternalUIDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.DispatchExternalUIChange
// (Defined, Public)
// Parameters:
// bool                           bIsOpening                     (Parm)

void UTpUoSystem::DispatchExternalUIChange(bool bIsOpening)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.DispatchExternalUIChange");

	UTpUoSystem_DispatchExternalUIChange_Params params;
	params.bIsOpening = bIsOpening;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnExternalUIChange_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoSystem::OnExternalUIChange_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnExternalUIChange_Remove");

	UTpUoSystem_OnExternalUIChange_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnExternalUIChange_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoSystem::OnExternalUIChange_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnExternalUIChange_Add");

	UTpUoSystem_OnExternalUIChange_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnExternalUIChange_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bIsOpening                     (Parm)

void UTpUoSystem::OnExternalUIChange_Invoke(bool bIsOpening)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnExternalUIChange_Invoke");

	UTpUoSystem_OnExternalUIChange_Invoke_Params params;
	params.bIsOpening = bIsOpening;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnExternalUIChange
// (Final, Private, Delegate)
// Parameters:
// bool                           bIsOpening                     (Parm)

void UTpUoSystem::OnExternalUIChange(bool bIsOpening)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnExternalUIChange");

	UTpUoSystem_OnExternalUIChange_Params params;
	params.bIsOpening = bIsOpening;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.ClearLinkStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)

void UTpUoSystem::ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.ClearLinkStatusChangeDelegate");

	UTpUoSystem_ClearLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.AddLinkStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)

void UTpUoSystem::AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.AddLinkStatusChangeDelegate");

	UTpUoSystem_AddLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnLinkStatusChange_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoSystem::OnLinkStatusChange_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnLinkStatusChange_Remove");

	UTpUoSystem_OnLinkStatusChange_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnLinkStatusChange_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoSystem::OnLinkStatusChange_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnLinkStatusChange_Add");

	UTpUoSystem_OnLinkStatusChange_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnLinkStatusChange_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bIsConnected                   (Parm)

void UTpUoSystem::OnLinkStatusChange_Invoke(bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnLinkStatusChange_Invoke");

	UTpUoSystem_OnLinkStatusChange_Invoke_Params params;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.OnLinkStatusChange
// (Final, Private, Delegate)
// Parameters:
// bool                           bIsConnected                   (Parm)

void UTpUoSystem::OnLinkStatusChange(bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.OnLinkStatusChange");

	UTpUoSystem_OnLinkStatusChange_Params params;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.HasLinkConnection
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoSystem::HasLinkConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.HasLinkConnection");

	UTpUoSystem_HasLinkConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoSystem.InitializeNative
// (Native, Public)

void UTpUoSystem::InitializeNative()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.InitializeNative");

	UTpUoSystem_InitializeNative_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoSystem.Initialize
// (Defined, Simulated, Public)
// Parameters:
// class UTpSystemBase*           InSystemBase                   (Parm)

void UTpUoSystem::Initialize(class UTpSystemBase* InSystemBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoSystem.Initialize");

	UTpUoSystem_Initialize_Params params;
	params.InSystemBase = InSystemBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpOnScreenErrorHandler.Finalize
// (Public)

void UTpOnScreenErrorHandler::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpOnScreenErrorHandler.Finalize");

	UTpOnScreenErrorHandler_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpOnScreenErrorHandler.Initialize
// (Defined, Public)

void UTpOnScreenErrorHandler::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpOnScreenErrorHandler.Initialize");

	UTpOnScreenErrorHandler_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpOnScreenErrorHandler.Tick
// (Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UTpOnScreenErrorHandler::Tick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpOnScreenErrorHandler.Tick");

	UTpOnScreenErrorHandler_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpSystem.Init
// (Defined, Simulated, Event, Public, HasDefaults)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpSystem::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpSystem.Init");

	UTpSystem_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoFileLocker.ListFileLocker
// (Defined, Public)
// Parameters:
// TArray<struct FOnlineFileLockerFileInfo> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FOnlineFileLockerFileInfo> UTpUoFileLocker::ListFileLocker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.ListFileLocker");

	UTpUoFileLocker_ListFileLocker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoFileLocker.ClearOnDeleteFileFromLockerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         DeleteFileFromLockerDelegate   (Parm, NeedCtorLink)

void UTpUoFileLocker::ClearOnDeleteFileFromLockerCompleteDelegate(const struct FScriptDelegate& DeleteFileFromLockerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.ClearOnDeleteFileFromLockerCompleteDelegate");

	UTpUoFileLocker_ClearOnDeleteFileFromLockerCompleteDelegate_Params params;
	params.DeleteFileFromLockerDelegate = DeleteFileFromLockerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.Del_OnDeleteFileFromLockerComplete
// (Final, Defined, Private)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoFileLocker::Del_OnDeleteFileFromLockerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.Del_OnDeleteFileFromLockerComplete");

	UTpUoFileLocker_Del_OnDeleteFileFromLockerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.AddOnDeleteFileFromLockerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         DeleteFileFromLockerDelegate   (Parm, NeedCtorLink)

void UTpUoFileLocker::AddOnDeleteFileFromLockerCompleteDelegate(const struct FScriptDelegate& DeleteFileFromLockerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.AddOnDeleteFileFromLockerCompleteDelegate");

	UTpUoFileLocker_AddOnDeleteFileFromLockerCompleteDelegate_Params params;
	params.DeleteFileFromLockerDelegate = DeleteFileFromLockerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnDeleteFileFromLockerComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoFileLocker::OnDeleteFileFromLockerComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnDeleteFileFromLockerComplete_Remove");

	UTpUoFileLocker_OnDeleteFileFromLockerComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnDeleteFileFromLockerComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoFileLocker::OnDeleteFileFromLockerComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnDeleteFileFromLockerComplete_Add");

	UTpUoFileLocker_OnDeleteFileFromLockerComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnDeleteFileFromLockerComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoFileLocker::OnDeleteFileFromLockerComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnDeleteFileFromLockerComplete_Invoke");

	UTpUoFileLocker_OnDeleteFileFromLockerComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnDeleteFileFromLockerComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoFileLocker::OnDeleteFileFromLockerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnDeleteFileFromLockerComplete");

	UTpUoFileLocker_OnDeleteFileFromLockerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.DeleteFileFromLocker
// (Defined, Public, HasOutParms)
// Parameters:
// struct FOnlineFileLockerFile   File                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoFileLocker::DeleteFileFromLocker(struct FOnlineFileLockerFile* File)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.DeleteFileFromLocker");

	UTpUoFileLocker_DeleteFileFromLocker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (File != nullptr)
		*File = params.File;

	return params.ReturnValue;
}


// Function Tp.TpUoFileLocker.ClearOnWriteFileToLockerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         WriteFileToLockerDelegate      (Parm, NeedCtorLink)

void UTpUoFileLocker::ClearOnWriteFileToLockerCompleteDelegate(const struct FScriptDelegate& WriteFileToLockerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.ClearOnWriteFileToLockerCompleteDelegate");

	UTpUoFileLocker_ClearOnWriteFileToLockerCompleteDelegate_Params params;
	params.WriteFileToLockerDelegate = WriteFileToLockerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.Del_OnWriteFileToLockerComplete
// (Final, Defined, Private)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoFileLocker::Del_OnWriteFileToLockerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.Del_OnWriteFileToLockerComplete");

	UTpUoFileLocker_Del_OnWriteFileToLockerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.AddOnWriteFileToLockerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         WriteFileToLockerDelegate      (Parm, NeedCtorLink)

void UTpUoFileLocker::AddOnWriteFileToLockerCompleteDelegate(const struct FScriptDelegate& WriteFileToLockerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.AddOnWriteFileToLockerCompleteDelegate");

	UTpUoFileLocker_AddOnWriteFileToLockerCompleteDelegate_Params params;
	params.WriteFileToLockerDelegate = WriteFileToLockerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnWriteFileToLockerComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoFileLocker::OnWriteFileToLockerComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnWriteFileToLockerComplete_Remove");

	UTpUoFileLocker_OnWriteFileToLockerComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnWriteFileToLockerComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoFileLocker::OnWriteFileToLockerComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnWriteFileToLockerComplete_Add");

	UTpUoFileLocker_OnWriteFileToLockerComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnWriteFileToLockerComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoFileLocker::OnWriteFileToLockerComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnWriteFileToLockerComplete_Invoke");

	UTpUoFileLocker_OnWriteFileToLockerComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnWriteFileToLockerComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoFileLocker::OnWriteFileToLockerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnWriteFileToLockerComplete");

	UTpUoFileLocker_OnWriteFileToLockerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.WriteFileToLocker
// (Defined, Public, HasOutParms)
// Parameters:
// struct FOnlineFileLockerFile   File                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoFileLocker::WriteFileToLocker(struct FOnlineFileLockerFile* File)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.WriteFileToLocker");

	UTpUoFileLocker_WriteFileToLocker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (File != nullptr)
		*File = params.File;

	return params.ReturnValue;
}


// Function Tp.TpUoFileLocker.ClearOnReadFileFromLockerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadFileFromLockerDelegate     (Parm, NeedCtorLink)

void UTpUoFileLocker::ClearOnReadFileFromLockerCompleteDelegate(const struct FScriptDelegate& ReadFileFromLockerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.ClearOnReadFileFromLockerCompleteDelegate");

	UTpUoFileLocker_ClearOnReadFileFromLockerCompleteDelegate_Params params;
	params.ReadFileFromLockerDelegate = ReadFileFromLockerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.Del_OnReadFileFromLockerComplete
// (Final, Defined, Private)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoFileLocker::Del_OnReadFileFromLockerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.Del_OnReadFileFromLockerComplete");

	UTpUoFileLocker_Del_OnReadFileFromLockerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.AddOnReadFileFromLockerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadFileFromLockerDelegate     (Parm, NeedCtorLink)

void UTpUoFileLocker::AddOnReadFileFromLockerCompleteDelegate(const struct FScriptDelegate& ReadFileFromLockerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.AddOnReadFileFromLockerCompleteDelegate");

	UTpUoFileLocker_AddOnReadFileFromLockerCompleteDelegate_Params params;
	params.ReadFileFromLockerDelegate = ReadFileFromLockerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnReadFileFromLockerComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoFileLocker::OnReadFileFromLockerComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnReadFileFromLockerComplete_Remove");

	UTpUoFileLocker_OnReadFileFromLockerComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnReadFileFromLockerComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoFileLocker::OnReadFileFromLockerComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnReadFileFromLockerComplete_Add");

	UTpUoFileLocker_OnReadFileFromLockerComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnReadFileFromLockerComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoFileLocker::OnReadFileFromLockerComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnReadFileFromLockerComplete_Invoke");

	UTpUoFileLocker_OnReadFileFromLockerComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnReadFileFromLockerComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoFileLocker::OnReadFileFromLockerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnReadFileFromLockerComplete");

	UTpUoFileLocker_OnReadFileFromLockerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.ReadFileFromLocker
// (Defined, Public, HasOutParms)
// Parameters:
// struct FOnlineFileLockerFile   File                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoFileLocker::ReadFileFromLocker(struct FOnlineFileLockerFile* File)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.ReadFileFromLocker");

	UTpUoFileLocker_ReadFileFromLocker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (File != nullptr)
		*File = params.File;

	return params.ReturnValue;
}


// Function Tp.TpUoFileLocker.ClearOnFetchLockerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         FetchLockerDelegate            (Parm, NeedCtorLink)

void UTpUoFileLocker::ClearOnFetchLockerCompleteDelegate(const struct FScriptDelegate& FetchLockerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.ClearOnFetchLockerCompleteDelegate");

	UTpUoFileLocker_ClearOnFetchLockerCompleteDelegate_Params params;
	params.FetchLockerDelegate = FetchLockerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.Del_OnFetchLockerComplete
// (Final, Defined, Private)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoFileLocker::Del_OnFetchLockerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.Del_OnFetchLockerComplete");

	UTpUoFileLocker_Del_OnFetchLockerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.AddOnFetchLockerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         FetchLockerDelegate            (Parm, NeedCtorLink)

void UTpUoFileLocker::AddOnFetchLockerCompleteDelegate(const struct FScriptDelegate& FetchLockerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.AddOnFetchLockerCompleteDelegate");

	UTpUoFileLocker_AddOnFetchLockerCompleteDelegate_Params params;
	params.FetchLockerDelegate = FetchLockerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnFetchLockerComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoFileLocker::OnFetchLockerComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnFetchLockerComplete_Remove");

	UTpUoFileLocker_OnFetchLockerComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnFetchLockerComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoFileLocker::OnFetchLockerComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnFetchLockerComplete_Add");

	UTpUoFileLocker_OnFetchLockerComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnFetchLockerComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoFileLocker::OnFetchLockerComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnFetchLockerComplete_Invoke");

	UTpUoFileLocker_OnFetchLockerComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.OnFetchLockerComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoFileLocker::OnFetchLockerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.OnFetchLockerComplete");

	UTpUoFileLocker_OnFetchLockerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoFileLocker.FetchLocker
// (Defined, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoFileLocker::FetchLocker(const struct FString& UserName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.FetchLocker");

	UTpUoFileLocker_FetchLocker_Params params;
	params.UserName = UserName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoFileLocker.Initialize
// (Defined, Simulated, Public)
// Parameters:
// class UTpSystemBase*           InSystemBase                   (Parm)

void UTpUoFileLocker::Initialize(class UTpSystemBase* InSystemBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoFileLocker.Initialize");

	UTpUoFileLocker_Initialize_Params params;
	params.InSystemBase = InSystemBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.RegisterStatGuid
// (Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerId                       (Parm)
// struct FString                 ClientStatGuid                 (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoStats::RegisterStatGuid(const struct FUniqueNetId& PlayerId, struct FString* ClientStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.RegisterStatGuid");

	UTpUoStats_RegisterStatGuid_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientStatGuid != nullptr)
		*ClientStatGuid = params.ClientStatGuid;

	return params.ReturnValue;
}


// Function Tp.TpUoStats.GetClientStatGuid
// (Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTpUoStats::GetClientStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.GetClientStatGuid");

	UTpUoStats_GetClientStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoStats.ClearRegisterHostStatGuidCompleteDelegateDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)

void UTpUoStats::ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.ClearRegisterHostStatGuidCompleteDelegateDelegate");

	UTpUoStats_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.AddRegisterHostStatGuidCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)

void UTpUoStats::AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.AddRegisterHostStatGuidCompleteDelegate");

	UTpUoStats_AddRegisterHostStatGuidCompleteDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.OnRegisterHostStatGuidComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoStats::OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.OnRegisterHostStatGuidComplete");

	UTpUoStats_OnRegisterHostStatGuidComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.RegisterHostStatGuid
// (Public, HasOutParms)
// Parameters:
// struct FString                 HostStatGuid                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoStats::RegisterHostStatGuid(struct FString* HostStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.RegisterHostStatGuid");

	UTpUoStats_RegisterHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HostStatGuid != nullptr)
		*HostStatGuid = params.HostStatGuid;

	return params.ReturnValue;
}


// Function Tp.TpUoStats.GetHostStatGuid
// (Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTpUoStats::GetHostStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.GetHostStatGuid");

	UTpUoStats_GetHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoStats.WriteOnlinePlayerScores
// (Public, HasOutParms)
// Parameters:
// TArray<struct FOnlinePlayerScore> PlayerScores                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoStats::WriteOnlinePlayerScores(TArray<struct FOnlinePlayerScore>* PlayerScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.WriteOnlinePlayerScores");

	UTpUoStats_WriteOnlinePlayerScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerScores != nullptr)
		*PlayerScores = params.PlayerScores;

	return params.ReturnValue;
}


// Function Tp.TpUoStats.Del_OnFlushOnlineStatsComplete
// (Final, Defined, Private)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoStats::Del_OnFlushOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.Del_OnFlushOnlineStatsComplete");

	UTpUoStats_Del_OnFlushOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.ClearFlushOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UTpUoStats::ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.ClearFlushOnlineStatsCompleteDelegate");

	UTpUoStats_ClearFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.AddFlushOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UTpUoStats::AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.AddFlushOnlineStatsCompleteDelegate");

	UTpUoStats_AddFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.OnFlushOnlineStatsComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoStats::OnFlushOnlineStatsComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.OnFlushOnlineStatsComplete_Remove");

	UTpUoStats_OnFlushOnlineStatsComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.OnFlushOnlineStatsComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoStats::OnFlushOnlineStatsComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.OnFlushOnlineStatsComplete_Add");

	UTpUoStats_OnFlushOnlineStatsComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.OnFlushOnlineStatsComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoStats::OnFlushOnlineStatsComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.OnFlushOnlineStatsComplete_Invoke");

	UTpUoStats_OnFlushOnlineStatsComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.OnFlushOnlineStatsComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoStats::OnFlushOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.OnFlushOnlineStatsComplete");

	UTpUoStats_OnFlushOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.FlushOnlineStats
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoStats::FlushOnlineStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.FlushOnlineStats");

	UTpUoStats_FlushOnlineStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoStats.WriteOnlineStats
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            Player                         (Parm)
// class UOnlineStatsWrite*       StatsWrite                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoStats::WriteOnlineStats(const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.WriteOnlineStats");

	UTpUoStats_WriteOnlineStats_Params params;
	params.Player = Player;
	params.StatsWrite = StatsWrite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoStats.FreeStats
// (Defined, Public)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)

void UTpUoStats::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.FreeStats");

	UTpUoStats_FreeStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.OnReadOnlineStatsComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoStats::OnReadOnlineStatsComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.OnReadOnlineStatsComplete_Remove");

	UTpUoStats_OnReadOnlineStatsComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.OnReadOnlineStatsComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoStats::OnReadOnlineStatsComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.OnReadOnlineStatsComplete_Add");

	UTpUoStats_OnReadOnlineStatsComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.OnReadOnlineStatsComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoStats::OnReadOnlineStatsComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.OnReadOnlineStatsComplete_Invoke");

	UTpUoStats_OnReadOnlineStatsComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.OnReadOnlineStatsComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoStats::OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.OnReadOnlineStatsComplete");

	UTpUoStats_OnReadOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.Del_OnReadOnlineStatsComplete
// (Final, Defined, Private)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoStats::Del_OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.Del_OnReadOnlineStatsComplete");

	UTpUoStats_Del_OnReadOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.ClearReadOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UTpUoStats::ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.ClearReadOnlineStatsCompleteDelegate");

	UTpUoStats_ClearReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.AddReadOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UTpUoStats::AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.AddReadOnlineStatsCompleteDelegate");

	UTpUoStats_AddReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoStats.ReadOnlineStatsByRankAroundPlayer
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            NumRows                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoStats::ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.ReadOnlineStatsByRankAroundPlayer");

	UTpUoStats_ReadOnlineStatsByRankAroundPlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.NumRows = NumRows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoStats.ReadOnlineStatsByRank
// (Defined, Public)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            StartIndex                     (OptionalParm, Parm)
// int                            NumToRead                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoStats::ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.ReadOnlineStatsByRank");

	UTpUoStats_ReadOnlineStatsByRank_Params params;
	params.StatsRead = StatsRead;
	params.StartIndex = StartIndex;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoStats.ReadOnlineStatsForFriends
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoStats::ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.ReadOnlineStatsForFriends");

	UTpUoStats_ReadOnlineStatsForFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoStats.ReadOnlineStats
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoStats::ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.ReadOnlineStats");

	UTpUoStats_ReadOnlineStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function Tp.TpUoStats.Initialize
// (Defined, Simulated, Public)
// Parameters:
// class UTpSystemBase*           InSystemBase                   (Parm)

void UTpUoStats::Initialize(class UTpSystemBase* InSystemBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoStats.Initialize");

	UTpUoStats_Initialize_Params params;
	params.InSystemBase = InSystemBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.LeaveGroupGame
// (Defined, Public)

void UTpUoPlayGroup::LeaveGroupGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.LeaveGroupGame");

	UTpUoPlayGroup_LeaveGroupGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.Del_OnPlayGroupGameLeave
// (Final, Defined, Simulated, Private)

void UTpUoPlayGroup::Del_OnPlayGroupGameLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.Del_OnPlayGroupGameLeave");

	UTpUoPlayGroup_Del_OnPlayGroupGameLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.ClearPlayGroupGameLeaveDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupGameLeaveDelegate   (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearPlayGroupGameLeaveDelegate(const struct FScriptDelegate& OnPlayGroupGameLeaveDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearPlayGroupGameLeaveDelegate");

	UTpUoPlayGroup_ClearPlayGroupGameLeaveDelegate_Params params;
	params.OnPlayGroupGameLeaveDelegate = OnPlayGroupGameLeaveDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddPlayGroupGameLeaveDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupGameLeaveDelegate   (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddPlayGroupGameLeaveDelegate(const struct FScriptDelegate& OnPlayGroupGameLeaveDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddPlayGroupGameLeaveDelegate");

	UTpUoPlayGroup_AddPlayGroupGameLeaveDelegate_Params params;
	params.OnPlayGroupGameLeaveDelegate = OnPlayGroupGameLeaveDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupGameLeave_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupGameLeave_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupGameLeave_Remove");

	UTpUoPlayGroup_OnPlayGroupGameLeave_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupGameLeave_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupGameLeave_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupGameLeave_Add");

	UTpUoPlayGroup_OnPlayGroupGameLeave_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupGameLeave_Invoke
// (Final, Defined, Simulated, Event, Public)

void UTpUoPlayGroup::OnPlayGroupGameLeave_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupGameLeave_Invoke");

	UTpUoPlayGroup_OnPlayGroupGameLeave_Invoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupGameLeave
// (Final, Private, Delegate)

void UTpUoPlayGroup::OnPlayGroupGameLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupGameLeave");

	UTpUoPlayGroup_OnPlayGroupGameLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.JoinGroupGame
// (Defined, Public)

void UTpUoPlayGroup::JoinGroupGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.JoinGroupGame");

	UTpUoPlayGroup_JoinGroupGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.Del_OnPlayGroupGameJoined
// (Final, Defined, Simulated, Private)
// Parameters:
// struct FTpLobbyRef             InLobby                        (Parm)
// struct FTpGameRef              InGame                         (Parm)

void UTpUoPlayGroup::Del_OnPlayGroupGameJoined(const struct FTpLobbyRef& InLobby, const struct FTpGameRef& InGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.Del_OnPlayGroupGameJoined");

	UTpUoPlayGroup_Del_OnPlayGroupGameJoined_Params params;
	params.InLobby = InLobby;
	params.InGame = InGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.ClearPlayGroupGameJoinedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupGameJoinedDelegate  (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearPlayGroupGameJoinedDelegate(const struct FScriptDelegate& OnPlayGroupGameJoinedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearPlayGroupGameJoinedDelegate");

	UTpUoPlayGroup_ClearPlayGroupGameJoinedDelegate_Params params;
	params.OnPlayGroupGameJoinedDelegate = OnPlayGroupGameJoinedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddPlayGroupGameJoinedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupGameJoinedDelegate  (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddPlayGroupGameJoinedDelegate(const struct FScriptDelegate& OnPlayGroupGameJoinedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddPlayGroupGameJoinedDelegate");

	UTpUoPlayGroup_AddPlayGroupGameJoinedDelegate_Params params;
	params.OnPlayGroupGameJoinedDelegate = OnPlayGroupGameJoinedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupGameJoined_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupGameJoined_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupGameJoined_Remove");

	UTpUoPlayGroup_OnPlayGroupGameJoined_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupGameJoined_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupGameJoined_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupGameJoined_Add");

	UTpUoPlayGroup_OnPlayGroupGameJoined_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupGameJoined_Invoke
// (Final, Defined, Simulated, Event, Public)

void UTpUoPlayGroup::OnPlayGroupGameJoined_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupGameJoined_Invoke");

	UTpUoPlayGroup_OnPlayGroupGameJoined_Invoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupGameJoined
// (Final, Private, Delegate)

void UTpUoPlayGroup::OnPlayGroupGameJoined()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupGameJoined");

	UTpUoPlayGroup_OnPlayGroupGameJoined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.Del_OnPlayGroupOwnerTransitionFinish
// (Final, Defined, Simulated, Private)

void UTpUoPlayGroup::Del_OnPlayGroupOwnerTransitionFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.Del_OnPlayGroupOwnerTransitionFinish");

	UTpUoPlayGroup_Del_OnPlayGroupOwnerTransitionFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.ClearPlayGroupOwnerTransitionFinishDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupOwnerTransitionFinishDelegate (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearPlayGroupOwnerTransitionFinishDelegate(const struct FScriptDelegate& OnPlayGroupOwnerTransitionFinishDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearPlayGroupOwnerTransitionFinishDelegate");

	UTpUoPlayGroup_ClearPlayGroupOwnerTransitionFinishDelegate_Params params;
	params.OnPlayGroupOwnerTransitionFinishDelegate = OnPlayGroupOwnerTransitionFinishDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddPlayGroupOwnerTransitionFinishDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupOwnerTransitionFinishDelegate (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddPlayGroupOwnerTransitionFinishDelegate(const struct FScriptDelegate& OnPlayGroupOwnerTransitionFinishDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddPlayGroupOwnerTransitionFinishDelegate");

	UTpUoPlayGroup_AddPlayGroupOwnerTransitionFinishDelegate_Params params;
	params.OnPlayGroupOwnerTransitionFinishDelegate = OnPlayGroupOwnerTransitionFinishDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionFinish_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupOwnerTransitionFinish_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionFinish_Remove");

	UTpUoPlayGroup_OnPlayGroupOwnerTransitionFinish_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionFinish_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupOwnerTransitionFinish_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionFinish_Add");

	UTpUoPlayGroup_OnPlayGroupOwnerTransitionFinish_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionFinish_Invoke
// (Final, Defined, Simulated, Event, Public)

void UTpUoPlayGroup::OnPlayGroupOwnerTransitionFinish_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionFinish_Invoke");

	UTpUoPlayGroup_OnPlayGroupOwnerTransitionFinish_Invoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionFinish
// (Final, Private, Delegate)

void UTpUoPlayGroup::OnPlayGroupOwnerTransitionFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionFinish");

	UTpUoPlayGroup_OnPlayGroupOwnerTransitionFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.Del_OnPlayGroupOwnerTransitionStart
// (Final, Defined, Simulated, Private)

void UTpUoPlayGroup::Del_OnPlayGroupOwnerTransitionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.Del_OnPlayGroupOwnerTransitionStart");

	UTpUoPlayGroup_Del_OnPlayGroupOwnerTransitionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.ClearPlayGroupOwnerTransitionStartDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupOwnerTransitionStartDelegate (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearPlayGroupOwnerTransitionStartDelegate(const struct FScriptDelegate& OnPlayGroupOwnerTransitionStartDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearPlayGroupOwnerTransitionStartDelegate");

	UTpUoPlayGroup_ClearPlayGroupOwnerTransitionStartDelegate_Params params;
	params.OnPlayGroupOwnerTransitionStartDelegate = OnPlayGroupOwnerTransitionStartDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddPlayGroupOwnerTransitionStartDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupOwnerTransitionStartDelegate (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddPlayGroupOwnerTransitionStartDelegate(const struct FScriptDelegate& OnPlayGroupOwnerTransitionStartDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddPlayGroupOwnerTransitionStartDelegate");

	UTpUoPlayGroup_AddPlayGroupOwnerTransitionStartDelegate_Params params;
	params.OnPlayGroupOwnerTransitionStartDelegate = OnPlayGroupOwnerTransitionStartDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionStart_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupOwnerTransitionStart_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionStart_Remove");

	UTpUoPlayGroup_OnPlayGroupOwnerTransitionStart_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionStart_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupOwnerTransitionStart_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionStart_Add");

	UTpUoPlayGroup_OnPlayGroupOwnerTransitionStart_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionStart_Invoke
// (Final, Defined, Simulated, Event, Public)

void UTpUoPlayGroup::OnPlayGroupOwnerTransitionStart_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionStart_Invoke");

	UTpUoPlayGroup_OnPlayGroupOwnerTransitionStart_Invoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionStart
// (Final, Private, Delegate)

void UTpUoPlayGroup::OnPlayGroupOwnerTransitionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupOwnerTransitionStart");

	UTpUoPlayGroup_OnPlayGroupOwnerTransitionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.TransferOwnerShipAsync
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            NewOwnerId                     (Parm)

void UTpUoPlayGroup::TransferOwnerShipAsync(const struct FUniqueNetId& NewOwnerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.TransferOwnerShipAsync");

	UTpUoPlayGroup_TransferOwnerShipAsync_Params params;
	params.NewOwnerId = NewOwnerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.Del_OnPlayGroupMemberLeave
// (Final, Defined, Simulated, Private)
// Parameters:
// struct FUniqueNetId            UserId                         (Parm)
// TEnumAsByte<EPlayGroupLeaveReason> Reason                         (Parm)

void UTpUoPlayGroup::Del_OnPlayGroupMemberLeave(const struct FUniqueNetId& UserId, TEnumAsByte<EPlayGroupLeaveReason> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.Del_OnPlayGroupMemberLeave");

	UTpUoPlayGroup_Del_OnPlayGroupMemberLeave_Params params;
	params.UserId = UserId;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.ClearPlayGroupMemberLeaveDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupMemberLeaveDelegate (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearPlayGroupMemberLeaveDelegate(const struct FScriptDelegate& OnPlayGroupMemberLeaveDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearPlayGroupMemberLeaveDelegate");

	UTpUoPlayGroup_ClearPlayGroupMemberLeaveDelegate_Params params;
	params.OnPlayGroupMemberLeaveDelegate = OnPlayGroupMemberLeaveDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddPlayGroupMemberLeaveDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupMemberLeaveDelegate (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddPlayGroupMemberLeaveDelegate(const struct FScriptDelegate& OnPlayGroupMemberLeaveDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddPlayGroupMemberLeaveDelegate");

	UTpUoPlayGroup_AddPlayGroupMemberLeaveDelegate_Params params;
	params.OnPlayGroupMemberLeaveDelegate = OnPlayGroupMemberLeaveDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupMemberLeave_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupMemberLeave_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupMemberLeave_Remove");

	UTpUoPlayGroup_OnPlayGroupMemberLeave_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupMemberLeave_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupMemberLeave_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupMemberLeave_Add");

	UTpUoPlayGroup_OnPlayGroupMemberLeave_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupMemberLeave_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FUniqueNetId            UserId                         (Parm)
// TEnumAsByte<EPlayGroupLeaveReason> Reason                         (Parm)

void UTpUoPlayGroup::OnPlayGroupMemberLeave_Invoke(const struct FUniqueNetId& UserId, TEnumAsByte<EPlayGroupLeaveReason> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupMemberLeave_Invoke");

	UTpUoPlayGroup_OnPlayGroupMemberLeave_Invoke_Params params;
	params.UserId = UserId;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupMemberLeave
// (Final, Private, Delegate)
// Parameters:
// struct FUniqueNetId            UserId                         (Parm)
// TEnumAsByte<EPlayGroupLeaveReason> Reason                         (Parm)

void UTpUoPlayGroup::OnPlayGroupMemberLeave(const struct FUniqueNetId& UserId, TEnumAsByte<EPlayGroupLeaveReason> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupMemberLeave");

	UTpUoPlayGroup_OnPlayGroupMemberLeave_Params params;
	params.UserId = UserId;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.Del_OnLeavePlayGroupComplete
// (Final, Defined, Simulated, Private)

void UTpUoPlayGroup::Del_OnLeavePlayGroupComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.Del_OnLeavePlayGroupComplete");

	UTpUoPlayGroup_Del_OnLeavePlayGroupComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.ClearLeavePlayGroupCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnLeavePlayGroupCompleteDelegate (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearLeavePlayGroupCompleteDelegate(const struct FScriptDelegate& OnLeavePlayGroupCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearLeavePlayGroupCompleteDelegate");

	UTpUoPlayGroup_ClearLeavePlayGroupCompleteDelegate_Params params;
	params.OnLeavePlayGroupCompleteDelegate = OnLeavePlayGroupCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddLeavePlayGroupCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnLeavePlayGroupCompleteDelegate (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddLeavePlayGroupCompleteDelegate(const struct FScriptDelegate& OnLeavePlayGroupCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddLeavePlayGroupCompleteDelegate");

	UTpUoPlayGroup_AddLeavePlayGroupCompleteDelegate_Params params;
	params.OnLeavePlayGroupCompleteDelegate = OnLeavePlayGroupCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnLeavePlayGroupComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnLeavePlayGroupComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnLeavePlayGroupComplete_Remove");

	UTpUoPlayGroup_OnLeavePlayGroupComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnLeavePlayGroupComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnLeavePlayGroupComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnLeavePlayGroupComplete_Add");

	UTpUoPlayGroup_OnLeavePlayGroupComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnLeavePlayGroupComplete_Invoke
// (Final, Defined, Simulated, Event, Public)

void UTpUoPlayGroup::OnLeavePlayGroupComplete_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnLeavePlayGroupComplete_Invoke");

	UTpUoPlayGroup_OnLeavePlayGroupComplete_Invoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnLeavePlayGroupComplete
// (Final, Private, Delegate)

void UTpUoPlayGroup::OnLeavePlayGroupComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnLeavePlayGroupComplete");

	UTpUoPlayGroup_OnLeavePlayGroupComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.LeavePlayGroupAsync
// (Defined, Public)

void UTpUoPlayGroup::LeavePlayGroupAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.LeavePlayGroupAsync");

	UTpUoPlayGroup_LeavePlayGroupAsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.Del_OnPlayGroupKicked
// (Final, Defined, Simulated, Private)

void UTpUoPlayGroup::Del_OnPlayGroupKicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.Del_OnPlayGroupKicked");

	UTpUoPlayGroup_Del_OnPlayGroupKicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.ClearPlayGroupKickedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupKickedDelegate      (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearPlayGroupKickedDelegate(const struct FScriptDelegate& OnPlayGroupKickedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearPlayGroupKickedDelegate");

	UTpUoPlayGroup_ClearPlayGroupKickedDelegate_Params params;
	params.OnPlayGroupKickedDelegate = OnPlayGroupKickedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddPlayGroupKickedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupKickedDelegate      (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddPlayGroupKickedDelegate(const struct FScriptDelegate& OnPlayGroupKickedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddPlayGroupKickedDelegate");

	UTpUoPlayGroup_AddPlayGroupKickedDelegate_Params params;
	params.OnPlayGroupKickedDelegate = OnPlayGroupKickedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupKicked_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupKicked_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupKicked_Remove");

	UTpUoPlayGroup_OnPlayGroupKicked_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupKicked_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupKicked_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupKicked_Add");

	UTpUoPlayGroup_OnPlayGroupKicked_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupKicked_Invoke
// (Final, Defined, Simulated, Event, Public)

void UTpUoPlayGroup::OnPlayGroupKicked_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupKicked_Invoke");

	UTpUoPlayGroup_OnPlayGroupKicked_Invoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupKicked
// (Final, Private, Delegate)

void UTpUoPlayGroup::OnPlayGroupKicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupKicked");

	UTpUoPlayGroup_OnPlayGroupKicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.KickMemberAsync
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            UserId                         (Parm)

void UTpUoPlayGroup::KickMemberAsync(const struct FUniqueNetId& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.KickMemberAsync");

	UTpUoPlayGroup_KickMemberAsync_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.Del_OnPlayGroupDestroyed
// (Final, Defined, Simulated, Private)

void UTpUoPlayGroup::Del_OnPlayGroupDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.Del_OnPlayGroupDestroyed");

	UTpUoPlayGroup_Del_OnPlayGroupDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.ClearPlayGroupDestroyedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupDestroyedDelegate   (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearPlayGroupDestroyedDelegate(const struct FScriptDelegate& OnPlayGroupDestroyedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearPlayGroupDestroyedDelegate");

	UTpUoPlayGroup_ClearPlayGroupDestroyedDelegate_Params params;
	params.OnPlayGroupDestroyedDelegate = OnPlayGroupDestroyedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddPlayGroupDestroyedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupDestroyedDelegate   (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddPlayGroupDestroyedDelegate(const struct FScriptDelegate& OnPlayGroupDestroyedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddPlayGroupDestroyedDelegate");

	UTpUoPlayGroup_AddPlayGroupDestroyedDelegate_Params params;
	params.OnPlayGroupDestroyedDelegate = OnPlayGroupDestroyedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupDestroyed_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupDestroyed_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupDestroyed_Remove");

	UTpUoPlayGroup_OnPlayGroupDestroyed_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupDestroyed_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupDestroyed_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupDestroyed_Add");

	UTpUoPlayGroup_OnPlayGroupDestroyed_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupDestroyed_Invoke
// (Final, Defined, Simulated, Event, Public)

void UTpUoPlayGroup::OnPlayGroupDestroyed_Invoke()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupDestroyed_Invoke");

	UTpUoPlayGroup_OnPlayGroupDestroyed_Invoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupDestroyed
// (Final, Private, Delegate)

void UTpUoPlayGroup::OnPlayGroupDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupDestroyed");

	UTpUoPlayGroup_OnPlayGroupDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.DestroyPlayGroupAsync
// (Defined, Public)

void UTpUoPlayGroup::DestroyPlayGroupAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.DestroyPlayGroupAsync");

	UTpUoPlayGroup_DestroyPlayGroupAsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.Del_OnPlayGroupChatMessageReceived
// (Final, Defined, Simulated, Private)
// Parameters:
// struct FUniqueNetId            SenderId                       (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpUoPlayGroup::Del_OnPlayGroupChatMessageReceived(const struct FUniqueNetId& SenderId, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.Del_OnPlayGroupChatMessageReceived");

	UTpUoPlayGroup_Del_OnPlayGroupChatMessageReceived_Params params;
	params.SenderId = SenderId;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.ClearPlayGroupChatMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupChatMessageReceivedDelegate (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearPlayGroupChatMessageReceivedDelegate(const struct FScriptDelegate& OnPlayGroupChatMessageReceivedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearPlayGroupChatMessageReceivedDelegate");

	UTpUoPlayGroup_ClearPlayGroupChatMessageReceivedDelegate_Params params;
	params.OnPlayGroupChatMessageReceivedDelegate = OnPlayGroupChatMessageReceivedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddPlayGroupChatMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupChatMessageReceivedDelegate (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddPlayGroupChatMessageReceivedDelegate(const struct FScriptDelegate& OnPlayGroupChatMessageReceivedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddPlayGroupChatMessageReceivedDelegate");

	UTpUoPlayGroup_AddPlayGroupChatMessageReceivedDelegate_Params params;
	params.OnPlayGroupChatMessageReceivedDelegate = OnPlayGroupChatMessageReceivedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupChatMessageReceived_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupChatMessageReceived_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupChatMessageReceived_Remove");

	UTpUoPlayGroup_OnPlayGroupChatMessageReceived_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupChatMessageReceived_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupChatMessageReceived_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupChatMessageReceived_Add");

	UTpUoPlayGroup_OnPlayGroupChatMessageReceived_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupChatMessageReceived_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FUniqueNetId            SenderId                       (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupChatMessageReceived_Invoke(const struct FUniqueNetId& SenderId, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupChatMessageReceived_Invoke");

	UTpUoPlayGroup_OnPlayGroupChatMessageReceived_Invoke_Params params;
	params.SenderId = SenderId;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupChatMessageReceived
// (Final, Private, Delegate)
// Parameters:
// struct FUniqueNetId            SenderId                       (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupChatMessageReceived(const struct FUniqueNetId& SenderId, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupChatMessageReceived");

	UTpUoPlayGroup_OnPlayGroupChatMessageReceived_Params params;
	params.SenderId = SenderId;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.BroadCastChatMessageAsync
// (Defined, Public)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTpUoPlayGroup::BroadCastChatMessageAsync(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.BroadCastChatMessageAsync");

	UTpUoPlayGroup_BroadCastChatMessageAsync_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.Del_OnPlayGroupMemberJoin
// (Final, Defined, Simulated, Private)
// Parameters:
// struct FUniqueNetId            NewMemberUserId                (Parm)

void UTpUoPlayGroup::Del_OnPlayGroupMemberJoin(const struct FUniqueNetId& NewMemberUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.Del_OnPlayGroupMemberJoin");

	UTpUoPlayGroup_Del_OnPlayGroupMemberJoin_Params params;
	params.NewMemberUserId = NewMemberUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.ClearPlayGroupMemberJoinDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupMemberJoinDelegate  (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearPlayGroupMemberJoinDelegate(const struct FScriptDelegate& OnPlayGroupMemberJoinDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearPlayGroupMemberJoinDelegate");

	UTpUoPlayGroup_ClearPlayGroupMemberJoinDelegate_Params params;
	params.OnPlayGroupMemberJoinDelegate = OnPlayGroupMemberJoinDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddPlayGroupMemberJoinDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupMemberJoinDelegate  (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddPlayGroupMemberJoinDelegate(const struct FScriptDelegate& OnPlayGroupMemberJoinDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddPlayGroupMemberJoinDelegate");

	UTpUoPlayGroup_AddPlayGroupMemberJoinDelegate_Params params;
	params.OnPlayGroupMemberJoinDelegate = OnPlayGroupMemberJoinDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupMemberJoin_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupMemberJoin_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupMemberJoin_Remove");

	UTpUoPlayGroup_OnPlayGroupMemberJoin_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupMemberJoin_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupMemberJoin_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupMemberJoin_Add");

	UTpUoPlayGroup_OnPlayGroupMemberJoin_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupMemberJoin_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FUniqueNetId            NewMemberUserId                (Parm)

void UTpUoPlayGroup::OnPlayGroupMemberJoin_Invoke(const struct FUniqueNetId& NewMemberUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupMemberJoin_Invoke");

	UTpUoPlayGroup_OnPlayGroupMemberJoin_Invoke_Params params;
	params.NewMemberUserId = NewMemberUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupMemberJoin
// (Final, Private, Delegate)
// Parameters:
// struct FUniqueNetId            NewMemberUserId                (Parm)

void UTpUoPlayGroup::OnPlayGroupMemberJoin(const struct FUniqueNetId& NewMemberUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupMemberJoin");

	UTpUoPlayGroup_OnPlayGroupMemberJoin_Params params;
	params.NewMemberUserId = NewMemberUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AcceptInviteToPlayGroup
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            RequestingUserId               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayGroup::AcceptInviteToPlayGroup(const struct FUniqueNetId& RequestingUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AcceptInviteToPlayGroup");

	UTpUoPlayGroup_AcceptInviteToPlayGroup_Params params;
	params.RequestingUserId = RequestingUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayGroup.ClearOnInviteToPlayGroupReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnInviteToPlayGroupReceived    (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearOnInviteToPlayGroupReceivedDelegate(const struct FScriptDelegate& OnInviteToPlayGroupReceived)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearOnInviteToPlayGroupReceivedDelegate");

	UTpUoPlayGroup_ClearOnInviteToPlayGroupReceivedDelegate_Params params;
	params.OnInviteToPlayGroupReceived = OnInviteToPlayGroupReceived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddOnInviteToPlayGroupReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnInviteToPlayGroupReceived    (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddOnInviteToPlayGroupReceivedDelegate(const struct FScriptDelegate& OnInviteToPlayGroupReceived)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddOnInviteToPlayGroupReceivedDelegate");

	UTpUoPlayGroup_AddOnInviteToPlayGroupReceivedDelegate_Params params;
	params.OnInviteToPlayGroupReceived = OnInviteToPlayGroupReceived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupReceived_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnInviteToPlayGroupReceived_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnInviteToPlayGroupReceived_Remove");

	UTpUoPlayGroup_OnInviteToPlayGroupReceived_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupReceived_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnInviteToPlayGroupReceived_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnInviteToPlayGroupReceived_Add");

	UTpUoPlayGroup_OnInviteToPlayGroupReceived_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupReceived_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FUniqueNetId            RequestingUserId               (Parm)

void UTpUoPlayGroup::OnInviteToPlayGroupReceived_Invoke(const struct FUniqueNetId& RequestingUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnInviteToPlayGroupReceived_Invoke");

	UTpUoPlayGroup_OnInviteToPlayGroupReceived_Invoke_Params params;
	params.RequestingUserId = RequestingUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupReceived
// (Final, Private, Delegate)
// Parameters:
// struct FUniqueNetId            RequestingUserId               (Parm)

void UTpUoPlayGroup::OnInviteToPlayGroupReceived(const struct FUniqueNetId& RequestingUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnInviteToPlayGroupReceived");

	UTpUoPlayGroup_OnInviteToPlayGroupReceived_Params params;
	params.RequestingUserId = RequestingUserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnInviteToPlayGroup
// (Final, Defined, Simulated, Private)
// Parameters:
// struct FUniqueNetId            RequestingPlayer               (Parm)

void UTpUoPlayGroup::OnInviteToPlayGroup(const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnInviteToPlayGroup");

	UTpUoPlayGroup_OnInviteToPlayGroup_Params params;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.ClearOnInviteToPlayGroupCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnInviteToPlayGroupComplete    (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearOnInviteToPlayGroupCompleteDelegate(const struct FScriptDelegate& OnInviteToPlayGroupComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearOnInviteToPlayGroupCompleteDelegate");

	UTpUoPlayGroup_ClearOnInviteToPlayGroupCompleteDelegate_Params params;
	params.OnInviteToPlayGroupComplete = OnInviteToPlayGroupComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddOnInviteToPlayGroupCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnInviteToPlayGroupComplete    (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddOnInviteToPlayGroupCompleteDelegate(const struct FScriptDelegate& OnInviteToPlayGroupComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddOnInviteToPlayGroupCompleteDelegate");

	UTpUoPlayGroup_AddOnInviteToPlayGroupCompleteDelegate_Params params;
	params.OnInviteToPlayGroupComplete = OnInviteToPlayGroupComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnInviteToPlayGroupComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnInviteToPlayGroupComplete_Remove");

	UTpUoPlayGroup_OnInviteToPlayGroupComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnInviteToPlayGroupComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnInviteToPlayGroupComplete_Add");

	UTpUoPlayGroup_OnInviteToPlayGroupComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayGroup::OnInviteToPlayGroupComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnInviteToPlayGroupComplete_Invoke");

	UTpUoPlayGroup_OnInviteToPlayGroupComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnInviteToPlayGroupComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoPlayGroup::OnInviteToPlayGroupComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnInviteToPlayGroupComplete");

	UTpUoPlayGroup_OnInviteToPlayGroupComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnInviteSent
// (Final, Defined, Simulated, Private)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpUoPlayGroup::OnInviteSent(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnInviteSent");

	UTpUoPlayGroup_OnInviteSent_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.InviteToPlayGroupAsync
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            UserId                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayGroup::InviteToPlayGroupAsync(const struct FUniqueNetId& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.InviteToPlayGroupAsync");

	UTpUoPlayGroup_InviteToPlayGroupAsync_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayGroup.Del_OnPlayGroupJoined
// (Final, Defined, Simulated, Private)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpUoPlayGroup::Del_OnPlayGroupJoined(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.Del_OnPlayGroupJoined");

	UTpUoPlayGroup_Del_OnPlayGroupJoined_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.ClearPlayGroupJoinedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupJoinedDelegate      (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearPlayGroupJoinedDelegate(const struct FScriptDelegate& OnPlayGroupJoinedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearPlayGroupJoinedDelegate");

	UTpUoPlayGroup_ClearPlayGroupJoinedDelegate_Params params;
	params.OnPlayGroupJoinedDelegate = OnPlayGroupJoinedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddPlayGroupJoinedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupJoinedDelegate      (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddPlayGroupJoinedDelegate(const struct FScriptDelegate& OnPlayGroupJoinedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddPlayGroupJoinedDelegate");

	UTpUoPlayGroup_AddPlayGroupJoinedDelegate_Params params;
	params.OnPlayGroupJoinedDelegate = OnPlayGroupJoinedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupJoined_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupJoined_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupJoined_Remove");

	UTpUoPlayGroup_OnPlayGroupJoined_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupJoined_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupJoined_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupJoined_Add");

	UTpUoPlayGroup_OnPlayGroupJoined_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupJoined_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpUoPlayGroup::OnPlayGroupJoined_Invoke(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupJoined_Invoke");

	UTpUoPlayGroup_OnPlayGroupJoined_Invoke_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupJoined
// (Final, Private, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpUoPlayGroup::OnPlayGroupJoined(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupJoined");

	UTpUoPlayGroup_OnPlayGroupJoined_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.JoinPlayGroupAsync
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            UserId                         (Parm)

void UTpUoPlayGroup::JoinPlayGroupAsync(const struct FUniqueNetId& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.JoinPlayGroupAsync");

	UTpUoPlayGroup_JoinPlayGroupAsync_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.Del_OnPlayGroupCreated
// (Final, Defined, Simulated, Private)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpUoPlayGroup::Del_OnPlayGroupCreated(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.Del_OnPlayGroupCreated");

	UTpUoPlayGroup_Del_OnPlayGroupCreated_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.ClearPlayGroupCreatedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupCreatedDelegate     (Parm, NeedCtorLink)

void UTpUoPlayGroup::ClearPlayGroupCreatedDelegate(const struct FScriptDelegate& OnPlayGroupCreatedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.ClearPlayGroupCreatedDelegate");

	UTpUoPlayGroup_ClearPlayGroupCreatedDelegate_Params params;
	params.OnPlayGroupCreatedDelegate = OnPlayGroupCreatedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.AddPlayGroupCreatedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         OnPlayGroupCreatedDelegate     (Parm, NeedCtorLink)

void UTpUoPlayGroup::AddPlayGroupCreatedDelegate(const struct FScriptDelegate& OnPlayGroupCreatedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.AddPlayGroupCreatedDelegate");

	UTpUoPlayGroup_AddPlayGroupCreatedDelegate_Params params;
	params.OnPlayGroupCreatedDelegate = OnPlayGroupCreatedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupCreated_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupCreated_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupCreated_Remove");

	UTpUoPlayGroup_OnPlayGroupCreated_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupCreated_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoPlayGroup::OnPlayGroupCreated_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupCreated_Add");

	UTpUoPlayGroup_OnPlayGroupCreated_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupCreated_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpUoPlayGroup::OnPlayGroupCreated_Invoke(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupCreated_Invoke");

	UTpUoPlayGroup_OnPlayGroupCreated_Invoke_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.OnPlayGroupCreated
// (Final, Private, Delegate)
// Parameters:
// bool                           bInOk                          (Parm)

void UTpUoPlayGroup::OnPlayGroupCreated(bool bInOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.OnPlayGroupCreated");

	UTpUoPlayGroup_OnPlayGroupCreated_Params params;
	params.bInOk = bInOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.CreatePlayGroupAsync
// (Defined, Public)
// Parameters:
// struct FPlayGroupCreateParams  Params                         (Parm)

void UTpUoPlayGroup::CreatePlayGroupAsync(const struct FPlayGroupCreateParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.CreatePlayGroupAsync");

	UTpUoPlayGroup_CreatePlayGroupAsync_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoPlayGroup.GetMyPlayGroupList
// (Defined, Public)
// Parameters:
// TArray<struct FPlayGroupListEntry> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FPlayGroupListEntry> UTpUoPlayGroup::GetMyPlayGroupList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.GetMyPlayGroupList");

	UTpUoPlayGroup_GetMyPlayGroupList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayGroup.IsPlayGroupOwner
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayGroup::IsPlayGroupOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.IsPlayGroupOwner");

	UTpUoPlayGroup_IsPlayGroupOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayGroup.IsInPlayGroup
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoPlayGroup::IsInPlayGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.IsInPlayGroup");

	UTpUoPlayGroup_IsInPlayGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoPlayGroup.Initialize
// (Defined, Simulated, Public)
// Parameters:
// class UTpSystemBase*           InSystemBase                   (Parm)

void UTpUoPlayGroup::Initialize(class UTpSystemBase* InSystemBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoPlayGroup.Initialize");

	UTpUoPlayGroup_Initialize_Params params;
	params.InSystemBase = InSystemBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.RecalculateSkillRating
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::RecalculateSkillRating(TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.RecalculateSkillRating");

	UTpUoGame_RecalculateSkillRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.AcceptGameInvite
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::AcceptGameInvite(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.AcceptGameInvite");

	UTpUoGame_AcceptGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.OnGameInviteAccepted_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnGameInviteAccepted_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnGameInviteAccepted_Remove");

	UTpUoGame_OnGameInviteAccepted_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnGameInviteAccepted_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnGameInviteAccepted_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnGameInviteAccepted_Add");

	UTpUoGame_OnGameInviteAccepted_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnGameInviteAccepted_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// class UOnlineGameSettings*     GameInviteSettings             (Parm)

void UTpUoGame::OnGameInviteAccepted_Invoke(class UOnlineGameSettings* GameInviteSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnGameInviteAccepted_Invoke");

	UTpUoGame_OnGameInviteAccepted_Invoke_Params params;
	params.GameInviteSettings = GameInviteSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnGameInviteAccepted
// (Final, Private, Delegate)
// Parameters:
// class UOnlineGameSettings*     GameInviteSettings             (Parm)

void UTpUoGame::OnGameInviteAccepted(class UOnlineGameSettings* GameInviteSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnGameInviteAccepted");

	UTpUoGame_OnGameInviteAccepted_Params params;
	params.GameInviteSettings = GameInviteSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.ClearGameInviteAcceptedDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (Parm, NeedCtorLink)

void UTpUoGame::ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.ClearGameInviteAcceptedDelegate");

	UTpUoGame_ClearGameInviteAcceptedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.AddGameInviteAcceptedDelegate
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (Parm, NeedCtorLink)

void UTpUoGame::AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.AddGameInviteAcceptedDelegate");

	UTpUoGame_AddGameInviteAcceptedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.GetArbitratedPlayers
// (Public)
// Parameters:
// TArray<struct FOnlineArbitrationRegistrant> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FOnlineArbitrationRegistrant> UTpUoGame::GetArbitratedPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.GetArbitratedPlayers");

	UTpUoGame_GetArbitratedPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.ClearArbitrationRegistrationCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.ClearArbitrationRegistrationCompleteDelegate");

	UTpUoGame_ClearArbitrationRegistrationCompleteDelegate_Params params;
	params.ArbitrationRegistrationCompleteDelegate = ArbitrationRegistrationCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.AddArbitrationRegistrationCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.AddArbitrationRegistrationCompleteDelegate");

	UTpUoGame_AddArbitrationRegistrationCompleteDelegate_Params params;
	params.ArbitrationRegistrationCompleteDelegate = ArbitrationRegistrationCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnArbitrationRegistrationComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnArbitrationRegistrationComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnArbitrationRegistrationComplete");

	UTpUoGame_OnArbitrationRegistrationComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.RegisterForArbitration
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::RegisterForArbitration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.RegisterForArbitration");

	UTpUoGame_RegisterForArbitration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.GetOnlineGameState
// (Defined, Simulated, Public)
// Parameters:
// TEnumAsByte<EOnlineGameState>  ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineGameState> UTpUoGame::GetOnlineGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.GetOnlineGameState");

	UTpUoGame_GetOnlineGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.ClearEndOnlineGameCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (Parm, NeedCtorLink)

void UTpUoGame::ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.ClearEndOnlineGameCompleteDelegate");

	UTpUoGame_ClearEndOnlineGameCompleteDelegate_Params params;
	params.EndOnlineGameCompleteDelegate = EndOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.AddEndOnlineGameCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (Parm, NeedCtorLink)

void UTpUoGame::AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.AddEndOnlineGameCompleteDelegate");

	UTpUoGame_AddEndOnlineGameCompleteDelegate_Params params;
	params.EndOnlineGameCompleteDelegate = EndOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnEndOnlineGameComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnEndOnlineGameComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnEndOnlineGameComplete_Remove");

	UTpUoGame_OnEndOnlineGameComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnEndOnlineGameComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnEndOnlineGameComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnEndOnlineGameComplete_Add");

	UTpUoGame_OnEndOnlineGameComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnEndOnlineGameComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnEndOnlineGameComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnEndOnlineGameComplete_Invoke");

	UTpUoGame_OnEndOnlineGameComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnEndOnlineGameComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnEndOnlineGameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnEndOnlineGameComplete");

	UTpUoGame_OnEndOnlineGameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnEndOnlineGame
// (Final, Defined, Simulated, Private)
// Parameters:
// bool                           bOk                            (Parm)

void UTpUoGame::OnEndOnlineGame(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnEndOnlineGame");

	UTpUoGame_OnEndOnlineGame_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.EndOnlineGame
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::EndOnlineGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.EndOnlineGame");

	UTpUoGame_EndOnlineGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.ClearStartOnlineGameCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.ClearStartOnlineGameCompleteDelegate");

	UTpUoGame_ClearStartOnlineGameCompleteDelegate_Params params;
	params.StartOnlineGameCompleteDelegate = StartOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.AddStartOnlineGameCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.AddStartOnlineGameCompleteDelegate");

	UTpUoGame_AddStartOnlineGameCompleteDelegate_Params params;
	params.StartOnlineGameCompleteDelegate = StartOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnStartOnlineGameComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnStartOnlineGameComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnStartOnlineGameComplete_Remove");

	UTpUoGame_OnStartOnlineGameComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnStartOnlineGameComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnStartOnlineGameComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnStartOnlineGameComplete_Add");

	UTpUoGame_OnStartOnlineGameComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnStartOnlineGameComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnStartOnlineGameComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnStartOnlineGameComplete_Invoke");

	UTpUoGame_OnStartOnlineGameComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnStartOnlineGameComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnStartOnlineGameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnStartOnlineGameComplete");

	UTpUoGame_OnStartOnlineGameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnStartOnlineGame
// (Final, Defined, Simulated, Private)
// Parameters:
// bool                           bOk                            (Parm)

void UTpUoGame::OnStartOnlineGame(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnStartOnlineGame");

	UTpUoGame_OnStartOnlineGame_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.StartOnlineGame
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::StartOnlineGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.StartOnlineGame");

	UTpUoGame_StartOnlineGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.ClearUnregisterPlayerCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.ClearUnregisterPlayerCompleteDelegate");

	UTpUoGame_ClearUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.AddUnregisterPlayerCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.AddUnregisterPlayerCompleteDelegate");

	UTpUoGame_AddUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnUnregisterPlayerComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnUnregisterPlayerComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnUnregisterPlayerComplete_Remove");

	UTpUoGame_OnUnregisterPlayerComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnUnregisterPlayerComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnUnregisterPlayerComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnUnregisterPlayerComplete_Add");

	UTpUoGame_OnUnregisterPlayerComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnUnregisterPlayerComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnUnregisterPlayerComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnUnregisterPlayerComplete_Invoke");

	UTpUoGame_OnUnregisterPlayerComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnUnregisterPlayerComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnUnregisterPlayerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnUnregisterPlayerComplete");

	UTpUoGame_OnUnregisterPlayerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.UnregisterPlayer
// (Defined, Simulated, Public)
// Parameters:
// struct FUniqueNetId            PlayerId                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::UnregisterPlayer(const struct FUniqueNetId& PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.UnregisterPlayer");

	UTpUoGame_UnregisterPlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.ClearRegisterPlayerCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.ClearRegisterPlayerCompleteDelegate");

	UTpUoGame_ClearRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.AddRegisterPlayerCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.AddRegisterPlayerCompleteDelegate");

	UTpUoGame_AddRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnRegisterPlayerComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnRegisterPlayerComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnRegisterPlayerComplete_Remove");

	UTpUoGame_OnRegisterPlayerComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnRegisterPlayerComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnRegisterPlayerComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnRegisterPlayerComplete_Add");

	UTpUoGame_OnRegisterPlayerComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnRegisterPlayerComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnRegisterPlayerComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnRegisterPlayerComplete_Invoke");

	UTpUoGame_OnRegisterPlayerComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnRegisterPlayerComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnRegisterPlayerComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnRegisterPlayerComplete");

	UTpUoGame_OnRegisterPlayerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.RegisterPlayer
// (Defined, Simulated, Public)
// Parameters:
// struct FUniqueNetId            PlayerId                       (Parm)
// bool                           bWasInvited                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::RegisterPlayer(const struct FUniqueNetId& PlayerId, bool bWasInvited)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.RegisterPlayer");

	UTpUoGame_RegisterPlayer_Params params;
	params.PlayerId = PlayerId;
	params.bWasInvited = bWasInvited;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.GetResolvedConnectString
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FString                 ConnectInfo                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::GetResolvedConnectString(struct FString* ConnectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.GetResolvedConnectString");

	UTpUoGame_GetResolvedConnectString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConnectInfo != nullptr)
		*ConnectInfo = params.ConnectInfo;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.ClearJoinOnlineGameCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.ClearJoinOnlineGameCompleteDelegate");

	UTpUoGame_ClearJoinOnlineGameCompleteDelegate_Params params;
	params.JoinOnlineGameCompleteDelegate = JoinOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.AddJoinOnlineGameCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.AddJoinOnlineGameCompleteDelegate");

	UTpUoGame_AddJoinOnlineGameCompleteDelegate_Params params;
	params.JoinOnlineGameCompleteDelegate = JoinOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnJoinOnlineGameComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnJoinOnlineGameComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnJoinOnlineGameComplete_Remove");

	UTpUoGame_OnJoinOnlineGameComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnJoinOnlineGameComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnJoinOnlineGameComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnJoinOnlineGameComplete_Add");

	UTpUoGame_OnJoinOnlineGameComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnJoinOnlineGameComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnJoinOnlineGameComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnJoinOnlineGameComplete_Invoke");

	UTpUoGame_OnJoinOnlineGameComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnJoinOnlineGameComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnJoinOnlineGameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnJoinOnlineGameComplete");

	UTpUoGame_OnJoinOnlineGameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.JoinOnlineGame
// (Simulated, Public, HasOutParms)
// Parameters:
// unsigned char                  PlayerNum                      (Parm)
// struct FOnlineGameSearchResult DesiredGame                    (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::JoinOnlineGame(unsigned char PlayerNum, struct FOnlineGameSearchResult* DesiredGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.JoinOnlineGame");

	UTpUoGame_JoinOnlineGame_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGame != nullptr)
		*DesiredGame = params.DesiredGame;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.FreeSearchResults
// (Defined, Simulated, Public)
// Parameters:
// class UOnlineGameSearch*       Search                         (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::FreeSearchResults(class UOnlineGameSearch* Search)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.FreeSearchResults");

	UTpUoGame_FreeSearchResults_Params params;
	params.Search = Search;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.ClearCancelFindOnlineGamesCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.ClearCancelFindOnlineGamesCompleteDelegate");

	UTpUoGame_ClearCancelFindOnlineGamesCompleteDelegate_Params params;
	params.CancelFindOnlineGamesCompleteDelegate = CancelFindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.GetGameSearch
// (Defined, Simulated, Public)
// Parameters:
// class UOnlineGameSearch*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameSearch* UTpUoGame::GetGameSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.GetGameSearch");

	UTpUoGame_GetGameSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.AddCancelFindOnlineGamesCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.AddCancelFindOnlineGamesCompleteDelegate");

	UTpUoGame_AddCancelFindOnlineGamesCompleteDelegate_Params params;
	params.CancelFindOnlineGamesCompleteDelegate = CancelFindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnCancelFindOnlineGamesComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnCancelFindOnlineGamesComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnCancelFindOnlineGamesComplete");

	UTpUoGame_OnCancelFindOnlineGamesComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.CancelFindOnlineGames
// (Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::CancelFindOnlineGames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.CancelFindOnlineGames");

	UTpUoGame_CancelFindOnlineGames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.ClearFindOnlineGamesCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.ClearFindOnlineGamesCompleteDelegate");

	UTpUoGame_ClearFindOnlineGamesCompleteDelegate_Params params;
	params.FindOnlineGamesCompleteDelegate = FindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.AddFindOnlineGamesCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.AddFindOnlineGamesCompleteDelegate");

	UTpUoGame_AddFindOnlineGamesCompleteDelegate_Params params;
	params.FindOnlineGamesCompleteDelegate = FindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnFindOnlineGamesComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnFindOnlineGamesComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnFindOnlineGamesComplete_Remove");

	UTpUoGame_OnFindOnlineGamesComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnFindOnlineGamesComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnFindOnlineGamesComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnFindOnlineGamesComplete_Add");

	UTpUoGame_OnFindOnlineGamesComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnFindOnlineGamesComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnFindOnlineGamesComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnFindOnlineGamesComplete_Invoke");

	UTpUoGame_OnFindOnlineGamesComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnFindOnlineGamesComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnFindOnlineGamesComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnFindOnlineGamesComplete");

	UTpUoGame_OnFindOnlineGamesComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.FindOnlineGames
// (Simulated, Public)
// Parameters:
// unsigned char                  SearchingPlayerNum             (Parm)
// class UOnlineGameSearch*       SearchSettings                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.FindOnlineGames");

	UTpUoGame_FindOnlineGames_Params params;
	params.SearchingPlayerNum = SearchingPlayerNum;
	params.SearchSettings = SearchSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.ClearDestroyOnlineGameCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.ClearDestroyOnlineGameCompleteDelegate");

	UTpUoGame_ClearDestroyOnlineGameCompleteDelegate_Params params;
	params.DestroyOnlineGameCompleteDelegate = DestroyOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.AddDestroyOnlineGameCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.AddDestroyOnlineGameCompleteDelegate");

	UTpUoGame_AddDestroyOnlineGameCompleteDelegate_Params params;
	params.DestroyOnlineGameCompleteDelegate = DestroyOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnDestroyOnlineGameComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnDestroyOnlineGameComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnDestroyOnlineGameComplete_Remove");

	UTpUoGame_OnDestroyOnlineGameComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnDestroyOnlineGameComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnDestroyOnlineGameComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnDestroyOnlineGameComplete_Add");

	UTpUoGame_OnDestroyOnlineGameComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnDestroyOnlineGameComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnDestroyOnlineGameComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnDestroyOnlineGameComplete_Invoke");

	UTpUoGame_OnDestroyOnlineGameComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnDestroyOnlineGameComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnDestroyOnlineGameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnDestroyOnlineGameComplete");

	UTpUoGame_OnDestroyOnlineGameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.DestroyOnlineGame
// (Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::DestroyOnlineGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.DestroyOnlineGame");

	UTpUoGame_DestroyOnlineGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.GetGameSettings
// (Defined, Simulated, Public)
// Parameters:
// class UOnlineGameSettings*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameSettings* UTpUoGame::GetGameSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.GetGameSettings");

	UTpUoGame_GetGameSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.UpdateOnlineGame
// (Defined, Simulated, Public)
// Parameters:
// class UOnlineGameSettings*     UpdatedGameSettings            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::UpdateOnlineGame(class UOnlineGameSettings* UpdatedGameSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.UpdateOnlineGame");

	UTpUoGame_UpdateOnlineGame_Params params;
	params.UpdatedGameSettings = UpdatedGameSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.ClearCreateOnlineGameCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.ClearCreateOnlineGameCompleteDelegate");

	UTpUoGame_ClearCreateOnlineGameCompleteDelegate_Params params;
	params.CreateOnlineGameCompleteDelegate = CreateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.AddCreateOnlineGameCompleteDelegate
// (Defined, Simulated, Public)
// Parameters:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UTpUoGame::AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.AddCreateOnlineGameCompleteDelegate");

	UTpUoGame_AddCreateOnlineGameCompleteDelegate_Params params;
	params.CreateOnlineGameCompleteDelegate = CreateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnCreateOnlineGameComplete_Remove
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnCreateOnlineGameComplete_Remove(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnCreateOnlineGameComplete_Remove");

	UTpUoGame_OnCreateOnlineGameComplete_Remove_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnCreateOnlineGameComplete_Add
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// struct FScriptDelegate         D                              (Parm, NeedCtorLink)

void UTpUoGame::OnCreateOnlineGameComplete_Add(const struct FScriptDelegate& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnCreateOnlineGameComplete_Add");

	UTpUoGame_OnCreateOnlineGameComplete_Add_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnCreateOnlineGameComplete_Invoke
// (Final, Defined, Simulated, Event, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnCreateOnlineGameComplete_Invoke(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnCreateOnlineGameComplete_Invoke");

	UTpUoGame_OnCreateOnlineGameComplete_Invoke_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.OnCreateOnlineGameComplete
// (Final, Private, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UTpUoGame::OnCreateOnlineGameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.OnCreateOnlineGameComplete");

	UTpUoGame_OnCreateOnlineGameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tp.TpUoGame.CreateOnlineGame
// (Simulated, Public)
// Parameters:
// unsigned char                  HostingPlayerNum               (Parm)
// class UOnlineGameSettings*     NewGameSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTpUoGame::CreateOnlineGame(unsigned char HostingPlayerNum, class UOnlineGameSettings* NewGameSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.CreateOnlineGame");

	UTpUoGame_CreateOnlineGame_Params params;
	params.HostingPlayerNum = HostingPlayerNum;
	params.NewGameSettings = NewGameSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tp.TpUoGame.Initialize
// (Defined, Simulated, Public)
// Parameters:
// class UTpSystemBase*           InSystemBase                   (Parm)

void UTpUoGame::Initialize(class UTpSystemBase* InSystemBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tp.TpUoGame.Initialize");

	UTpUoGame_Initialize_Params params;
	params.InSystemBase = InSystemBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
