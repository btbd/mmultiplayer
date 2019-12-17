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

// Function Ts.TsSystem.UnlockTrophyAsync
struct UTsSystem_UnlockTrophyAsync_Params
{
	int                                                InContext;                                                // (Parm)
	int                                                InHandle;                                                 // (Parm)
	int                                                InTrophyId;                                               // (Parm)
};

// Function Ts.TsSystem.InitTrophyAsync
struct UTsSystem_InitTrophyAsync_Params
{
	int                                                InContext;                                                // (Parm)
	int                                                InHandle;                                                 // (Parm)
};

// Function Ts.TsSystem.CopyProfileSettings
struct UTsSystem_CopyProfileSettings_Params
{
	class UOnlineProfileSettings*                      Src;                                                      // (Parm)
	class UOnlineProfileSettings*                      Dest;                                                     // (Parm)
};

// Function Ts.TsSystem.ReadProfileSettings
struct UTsSystem_ReadProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Ts.TsSystem.WriteProfileSettings
struct UTsSystem_WriteProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Ts.TsSystem.ReadSPData
struct UTsSystem_ReadSPData_Params
{
	struct FScriptDelegate                             ReadComplete;                                             // (Parm, NeedCtorLink)
};

// Function Ts.TsSystem.WriteSPData
struct UTsSystem_WriteSPData_Params
{
	struct FTsSaveData                                 InData;                                                   // (Parm, OutParm, NeedCtorLink)
	struct FScriptDelegate                             SaveComplete;                                             // (Parm, NeedCtorLink)
};

// Function Ts.TsSystem.ReadSaveData
struct UTsSystem_ReadSaveData_Params
{
	TEnumAsByte<ETsSaveType>                           SaveType;                                                 // (Parm)
	int                                                Id;                                                       // (Parm)
	struct FScriptDelegate                             ReadComplete;                                             // (Parm, NeedCtorLink)
};

// Function Ts.TsSystem.WriteSaveData
struct UTsSystem_WriteSaveData_Params
{
	struct FTsSaveData                                 InData;                                                   // (Parm, OutParm, NeedCtorLink)
	struct FScriptDelegate                             AddComplete;                                              // (Parm, NeedCtorLink)
};

// Function Ts.TsSystem.InitializeToC
struct UTsSystem_InitializeToC_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bAutoReplaceCorrupt;                                      // (Parm)
	struct FScriptDelegate                             InitializeComplete;                                       // (Parm, NeedCtorLink)
};

// Function Ts.TsSystem.CheckStorageDevice
struct UTsSystem_CheckStorageDevice_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Ts.TsSystem.Initialize
struct UTsSystem_Initialize_Params
{
};

// Function Ts.TsSystem.UnRegisterOnDiskAccessDelegate
struct UTsSystem_UnRegisterOnDiskAccessDelegate_Params
{
	struct FScriptDelegate                             DiskAccessDelegate;                                       // (Parm, NeedCtorLink)
};

// Function Ts.TsSystem.RegisterOnDiskAccessDelegate
struct UTsSystem_RegisterOnDiskAccessDelegate_Params
{
	struct FScriptDelegate                             DiskAccessDelegate;                                       // (Parm, NeedCtorLink)
};

// Function Ts.TsSystem.OnDiskAccess
struct UTsSystem_OnDiskAccess_Params
{
	bool                                               IsAccessing;                                              // (Parm)
	TEnumAsByte<ETsDiskAccess>                         AccessType;                                               // (Parm)
};

// Function Ts.TsSystem.IsNoSaving
struct UTsSystem_IsNoSaving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Ts.TsSystem.SetNoSaving
struct UTsSystem_SetNoSaving_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function Ts.TsSystem.IsCorruptProfileDetected
struct UTsSystem_IsCorruptProfileDetected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Ts.TsSystem.ClearCachedProfile
struct UTsSystem_ClearCachedProfile_Params
{
};

// Function Ts.TsSystem.UnRegisterReadProfileSettingsDelegate
struct UTsSystem_UnRegisterReadProfileSettingsDelegate_Params
{
	struct FScriptDelegate                             ReadDelegate;                                             // (Parm, NeedCtorLink)
};

// Function Ts.TsSystem.RegisterReadProfileSettingsDelegate
struct UTsSystem_RegisterReadProfileSettingsDelegate_Params
{
	struct FScriptDelegate                             ReadDelegate;                                             // (Parm, NeedCtorLink)
};

// Function Ts.TsSystem.UnRegisterWriteProfileSettingsDelegate
struct UTsSystem_UnRegisterWriteProfileSettingsDelegate_Params
{
	struct FScriptDelegate                             WriteDelegate;                                            // (Parm, NeedCtorLink)
};

// Function Ts.TsSystem.RegisterWriteProfileSettingsDelegate
struct UTsSystem_RegisterWriteProfileSettingsDelegate_Params
{
	struct FScriptDelegate                             WriteDelegate;                                            // (Parm, NeedCtorLink)
};

// Function Ts.TsSystem.OnReadProfileSettingsComplete
struct UTsSystem_OnReadProfileSettingsComplete_Params
{
	TEnumAsByte<ETsResult>                             Result;                                                   // (Parm)
};

// Function Ts.TsSystem.OnWriteProfileSettingsComplete
struct UTsSystem_OnWriteProfileSettingsComplete_Params
{
	TEnumAsByte<ETsResult>                             Result;                                                   // (Parm)
};

// Function Ts.TsSystem.OnReadDataComplete
struct UTsSystem_OnReadDataComplete_Params
{
	TEnumAsByte<ETsResult>                             Result;                                                   // (Parm)
	TArray<unsigned char>                              ReadBuffer;                                               // (Parm, NeedCtorLink)
};

// Function Ts.TsSystem.OnWriteDataComplete
struct UTsSystem_OnWriteDataComplete_Params
{
	TEnumAsByte<ETsResult>                             Result;                                                   // (Parm)
};

// Function Ts.TsSystem.OnInitializeComplete
struct UTsSystem_OnInitializeComplete_Params
{
	TEnumAsByte<ETsResult>                             Result;                                                   // (Parm)
};

// Function Ts.TsSystem.ProcessTick
struct UTsSystem_ProcessTick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function Ts.TsSystem.DisableSystem
struct UTsSystem_DisableSystem_Params
{
};

// Function Ts.TsSystem.GetLastError
struct UTsSystem_GetLastError_Params
{
	struct FString                                     ErrorString;                                              // (Parm, OutParm, NeedCtorLink)
	TEnumAsByte<ETsError>                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Ts.TsSystem.HasPendingSaveTasks
struct UTsSystem_HasPendingSaveTasks_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Ts.TsSystem.GetTsSystem
struct UTsSystem_GetTsSystem_Params
{
	class UTsSystem*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Ts.TsSystem.SetTsSystem
struct UTsSystem_SetTsSystem_Params
{
	class UTsSystem*                                   Ts;                                                       // (Parm)
};

// Function Ts.TsTester.MultiWrite3Done
struct UTsTester_MultiWrite3Done_Params
{
	TEnumAsByte<ETsResult>                             Result;                                                   // (Parm)
};

// Function Ts.TsTester.MultiWrite2Done
struct UTsTester_MultiWrite2Done_Params
{
	TEnumAsByte<ETsResult>                             Result;                                                   // (Parm)
};

// Function Ts.TsTester.MultiWrite1Done
struct UTsTester_MultiWrite1Done_Params
{
	TEnumAsByte<ETsResult>                             Result;                                                   // (Parm)
};

// Function Ts.TsTester.TestMultiWrite
struct UTsTester_TestMultiWrite_Params
{
	int                                                Size;                                                     // (Parm)
};

// Function Ts.TsTester.TestReadDone
struct UTsTester_TestReadDone_Params
{
	TEnumAsByte<ETsResult>                             Result;                                                   // (Parm)
	TArray<unsigned char>                              ReadBuffer;                                               // (Parm, NeedCtorLink)
};

// Function Ts.TsTester.TestRead
struct UTsTester_TestRead_Params
{
	int                                                Id;                                                       // (Parm)
};

// Function Ts.TsTester.TestWriteDone
struct UTsTester_TestWriteDone_Params
{
	TEnumAsByte<ETsResult>                             Result;                                                   // (Parm)
};

// Function Ts.TsTester.TestWrite
struct UTsTester_TestWrite_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Size;                                                     // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
