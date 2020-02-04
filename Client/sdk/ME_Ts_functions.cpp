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

// Function Ts.TsSystem.UnlockTrophyAsync
// (Final, Native, Public)
// Parameters:
// int                            InContext                      (Parm)
// int                            InHandle                       (Parm)
// int                            InTrophyId                     (Parm)

void UTsSystem::UnlockTrophyAsync(int InContext, int InHandle, int InTrophyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.UnlockTrophyAsync");

	UTsSystem_UnlockTrophyAsync_Params params;
	params.InContext = InContext;
	params.InHandle = InHandle;
	params.InTrophyId = InTrophyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.InitTrophyAsync
// (Final, Native, Public)
// Parameters:
// int                            InContext                      (Parm)
// int                            InHandle                       (Parm)

void UTsSystem::InitTrophyAsync(int InContext, int InHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.InitTrophyAsync");

	UTsSystem_InitTrophyAsync_Params params;
	params.InContext = InContext;
	params.InHandle = InHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.CopyProfileSettings
// (Native, Public)
// Parameters:
// class UOnlineProfileSettings*  Src                            (Parm)
// class UOnlineProfileSettings*  Dest                           (Parm)

void UTsSystem::CopyProfileSettings(class UOnlineProfileSettings* Src, class UOnlineProfileSettings* Dest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.CopyProfileSettings");

	UTsSystem_CopyProfileSettings_Params params;
	params.Src = Src;
	params.Dest = Dest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.ReadProfileSettings
// (Native, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTsSystem::ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings** ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.ReadProfileSettings");

	UTsSystem_ReadProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProfileSettings != nullptr)
		*ProfileSettings = params.ProfileSettings;

	return params.ReturnValue;
}


// Function Ts.TsSystem.WriteProfileSettings
// (Native, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTsSystem::WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings** ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.WriteProfileSettings");

	UTsSystem_WriteProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProfileSettings != nullptr)
		*ProfileSettings = params.ProfileSettings;

	return params.ReturnValue;
}


// Function Ts.TsSystem.ReadSPData
// (Native, Public)
// Parameters:
// struct FScriptDelegate         ReadComplete                   (Parm, NeedCtorLink)

void UTsSystem::ReadSPData(const struct FScriptDelegate& ReadComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.ReadSPData");

	UTsSystem_ReadSPData_Params params;
	params.ReadComplete = ReadComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.WriteSPData
// (Native, Public, HasOutParms)
// Parameters:
// struct FTsSaveData             InData                         (Parm, OutParm, NeedCtorLink)
// struct FScriptDelegate         SaveComplete                   (Parm, NeedCtorLink)

void UTsSystem::WriteSPData(const struct FScriptDelegate& SaveComplete, struct FTsSaveData* InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.WriteSPData");

	UTsSystem_WriteSPData_Params params;
	params.SaveComplete = SaveComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InData != nullptr)
		*InData = params.InData;
}


// Function Ts.TsSystem.ReadSaveData
// (Native, Public)
// Parameters:
// TEnumAsByte<ETsSaveType>       SaveType                       (Parm)
// int                            Id                             (Parm)
// struct FScriptDelegate         ReadComplete                   (Parm, NeedCtorLink)

void UTsSystem::ReadSaveData(TEnumAsByte<ETsSaveType> SaveType, int Id, const struct FScriptDelegate& ReadComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.ReadSaveData");

	UTsSystem_ReadSaveData_Params params;
	params.SaveType = SaveType;
	params.Id = Id;
	params.ReadComplete = ReadComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.WriteSaveData
// (Native, Public, HasOutParms)
// Parameters:
// struct FTsSaveData             InData                         (Parm, OutParm, NeedCtorLink)
// struct FScriptDelegate         AddComplete                    (Parm, NeedCtorLink)

void UTsSystem::WriteSaveData(const struct FScriptDelegate& AddComplete, struct FTsSaveData* InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.WriteSaveData");

	UTsSystem_WriteSaveData_Params params;
	params.AddComplete = AddComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InData != nullptr)
		*InData = params.InData;
}


// Function Ts.TsSystem.InitializeToC
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bAutoReplaceCorrupt            (Parm)
// struct FScriptDelegate         InitializeComplete             (Parm, NeedCtorLink)

void UTsSystem::InitializeToC(unsigned char LocalUserNum, bool bAutoReplaceCorrupt, const struct FScriptDelegate& InitializeComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.InitializeToC");

	UTsSystem_InitializeToC_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAutoReplaceCorrupt = bAutoReplaceCorrupt;
	params.InitializeComplete = InitializeComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.CheckStorageDevice
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTsSystem::CheckStorageDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.CheckStorageDevice");

	UTsSystem_CheckStorageDevice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ts.TsSystem.Initialize
// (Native, Public)

void UTsSystem::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.Initialize");

	UTsSystem_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.UnRegisterOnDiskAccessDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         DiskAccessDelegate             (Parm, NeedCtorLink)

void UTsSystem::UnRegisterOnDiskAccessDelegate(const struct FScriptDelegate& DiskAccessDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.UnRegisterOnDiskAccessDelegate");

	UTsSystem_UnRegisterOnDiskAccessDelegate_Params params;
	params.DiskAccessDelegate = DiskAccessDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.RegisterOnDiskAccessDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         DiskAccessDelegate             (Parm, NeedCtorLink)

void UTsSystem::RegisterOnDiskAccessDelegate(const struct FScriptDelegate& DiskAccessDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.RegisterOnDiskAccessDelegate");

	UTsSystem_RegisterOnDiskAccessDelegate_Params params;
	params.DiskAccessDelegate = DiskAccessDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.OnDiskAccess
// (Public, Delegate)
// Parameters:
// bool                           IsAccessing                    (Parm)
// TEnumAsByte<ETsDiskAccess>     AccessType                     (Parm)

void UTsSystem::OnDiskAccess(bool IsAccessing, TEnumAsByte<ETsDiskAccess> AccessType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.OnDiskAccess");

	UTsSystem_OnDiskAccess_Params params;
	params.IsAccessing = IsAccessing;
	params.AccessType = AccessType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.IsNoSaving
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTsSystem::IsNoSaving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.IsNoSaving");

	UTsSystem_IsNoSaving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ts.TsSystem.SetNoSaving
// (Native, Public)
// Parameters:
// bool                           bValue                         (Parm)

void UTsSystem::SetNoSaving(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.SetNoSaving");

	UTsSystem_SetNoSaving_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.IsCorruptProfileDetected
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTsSystem::IsCorruptProfileDetected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.IsCorruptProfileDetected");

	UTsSystem_IsCorruptProfileDetected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ts.TsSystem.ClearCachedProfile
// (Native, Public)

void UTsSystem::ClearCachedProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.ClearCachedProfile");

	UTsSystem_ClearCachedProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.UnRegisterReadProfileSettingsDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadDelegate                   (Parm, NeedCtorLink)

void UTsSystem::UnRegisterReadProfileSettingsDelegate(const struct FScriptDelegate& ReadDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.UnRegisterReadProfileSettingsDelegate");

	UTsSystem_UnRegisterReadProfileSettingsDelegate_Params params;
	params.ReadDelegate = ReadDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.RegisterReadProfileSettingsDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadDelegate                   (Parm, NeedCtorLink)

void UTsSystem::RegisterReadProfileSettingsDelegate(const struct FScriptDelegate& ReadDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.RegisterReadProfileSettingsDelegate");

	UTsSystem_RegisterReadProfileSettingsDelegate_Params params;
	params.ReadDelegate = ReadDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.UnRegisterWriteProfileSettingsDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         WriteDelegate                  (Parm, NeedCtorLink)

void UTsSystem::UnRegisterWriteProfileSettingsDelegate(const struct FScriptDelegate& WriteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.UnRegisterWriteProfileSettingsDelegate");

	UTsSystem_UnRegisterWriteProfileSettingsDelegate_Params params;
	params.WriteDelegate = WriteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.RegisterWriteProfileSettingsDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         WriteDelegate                  (Parm, NeedCtorLink)

void UTsSystem::RegisterWriteProfileSettingsDelegate(const struct FScriptDelegate& WriteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.RegisterWriteProfileSettingsDelegate");

	UTsSystem_RegisterWriteProfileSettingsDelegate_Params params;
	params.WriteDelegate = WriteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.OnReadProfileSettingsComplete
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ETsResult>         Result                         (Parm)

void UTsSystem::OnReadProfileSettingsComplete(TEnumAsByte<ETsResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.OnReadProfileSettingsComplete");

	UTsSystem_OnReadProfileSettingsComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.OnWriteProfileSettingsComplete
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ETsResult>         Result                         (Parm)

void UTsSystem::OnWriteProfileSettingsComplete(TEnumAsByte<ETsResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.OnWriteProfileSettingsComplete");

	UTsSystem_OnWriteProfileSettingsComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.OnReadDataComplete
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ETsResult>         Result                         (Parm)
// TArray<unsigned char>          ReadBuffer                     (Parm, NeedCtorLink)

void UTsSystem::OnReadDataComplete(TEnumAsByte<ETsResult> Result, TArray<unsigned char> ReadBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.OnReadDataComplete");

	UTsSystem_OnReadDataComplete_Params params;
	params.Result = Result;
	params.ReadBuffer = ReadBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.OnWriteDataComplete
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ETsResult>         Result                         (Parm)

void UTsSystem::OnWriteDataComplete(TEnumAsByte<ETsResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.OnWriteDataComplete");

	UTsSystem_OnWriteDataComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.OnInitializeComplete
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ETsResult>         Result                         (Parm)

void UTsSystem::OnInitializeComplete(TEnumAsByte<ETsResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.OnInitializeComplete");

	UTsSystem_OnInitializeComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.ProcessTick
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UTsSystem::ProcessTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.ProcessTick");

	UTsSystem_ProcessTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.DisableSystem
// (Native, Public)

void UTsSystem::DisableSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.DisableSystem");

	UTsSystem_DisableSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsSystem.GetLastError
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 ErrorString                    (Parm, OutParm, NeedCtorLink)
// TEnumAsByte<ETsError>          ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ETsError> UTsSystem::STATIC_GetLastError(struct FString* ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.GetLastError");

	UTsSystem_GetLastError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorString != nullptr)
		*ErrorString = params.ErrorString;

	return params.ReturnValue;
}


// Function Ts.TsSystem.HasPendingSaveTasks
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTsSystem::HasPendingSaveTasks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.HasPendingSaveTasks");

	UTsSystem_HasPendingSaveTasks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ts.TsSystem.GetTsSystem
// (Final, Native, Static, Public)
// Parameters:
// class UTsSystem*               ReturnValue                    (Parm, OutParm, ReturnParm)

class UTsSystem* UTsSystem::STATIC_GetTsSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.GetTsSystem");

	UTsSystem_GetTsSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ts.TsSystem.SetTsSystem
// (Final, Native, Static, Public)
// Parameters:
// class UTsSystem*               Ts                             (Parm)

void UTsSystem::STATIC_SetTsSystem(class UTsSystem* Ts)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsSystem.SetTsSystem");

	UTsSystem_SetTsSystem_Params params;
	params.Ts = Ts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsTester.MultiWrite3Done
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETsResult>         Result                         (Parm)

void UTsTester::MultiWrite3Done(TEnumAsByte<ETsResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsTester.MultiWrite3Done");

	UTsTester_MultiWrite3Done_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsTester.MultiWrite2Done
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETsResult>         Result                         (Parm)

void UTsTester::MultiWrite2Done(TEnumAsByte<ETsResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsTester.MultiWrite2Done");

	UTsTester_MultiWrite2Done_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsTester.MultiWrite1Done
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETsResult>         Result                         (Parm)

void UTsTester::MultiWrite1Done(TEnumAsByte<ETsResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsTester.MultiWrite1Done");

	UTsTester_MultiWrite1Done_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsTester.TestMultiWrite
// (Defined, Event, Public)
// Parameters:
// int                            Size                           (Parm)

void UTsTester::TestMultiWrite(int Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsTester.TestMultiWrite");

	UTsTester_TestMultiWrite_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsTester.TestReadDone
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETsResult>         Result                         (Parm)
// TArray<unsigned char>          ReadBuffer                     (Parm, NeedCtorLink)

void UTsTester::TestReadDone(TEnumAsByte<ETsResult> Result, TArray<unsigned char> ReadBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsTester.TestReadDone");

	UTsTester_TestReadDone_Params params;
	params.Result = Result;
	params.ReadBuffer = ReadBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsTester.TestRead
// (Defined, Event, Public)
// Parameters:
// int                            Id                             (Parm)

void UTsTester::TestRead(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsTester.TestRead");

	UTsTester_TestRead_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsTester.TestWriteDone
// (Defined, Public)
// Parameters:
// TEnumAsByte<ETsResult>         Result                         (Parm)

void UTsTester::TestWriteDone(TEnumAsByte<ETsResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsTester.TestWriteDone");

	UTsTester_TestWriteDone_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ts.TsTester.TestWrite
// (Defined, Event, Public)
// Parameters:
// int                            Id                             (Parm)
// int                            Size                           (Parm)

void UTsTester::TestWrite(int Id, int Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ts.TsTester.TestWrite");

	UTsTester_TestWrite_Params params;
	params.Id = Id;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
