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

// Class Ts.TsSystem
// 0x009C (0x00D8 - 0x003C)
class UTsSystem : public UObject
{
public:
	unsigned long                                      UseCache : 1;                                             // 0x003C(0x0004) (Transient)
	unsigned long                                      SystemReady : 1;                                          // 0x003C(0x0004) (Transient)
	unsigned long                                      bCorruptProfileDetected : 1;                              // 0x003C(0x0004) (Transient)
	unsigned long                                      bNoSaving : 1;                                            // 0x003C(0x0004) (Transient)
	unsigned long                                      SystemsDisabled : 1;                                      // 0x003C(0x0004) (Transient)
	TArray<unsigned char>                              WriteBuffer;                                              // 0x0040(0x000C) (Transient, NeedCtorLink)
	TArray<unsigned char>                              ToCWriteBuffer;                                           // 0x004C(0x000C) (Transient, NeedCtorLink)
	TArray<unsigned char>                              SPDataCached;                                             // 0x0058(0x000C) (Transient, NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                            // 0x0064(0x0004) (Transient)
	unsigned char                                      CachedProfileUserNum;                                     // 0x0068(0x0001) (Transient)
	TEnumAsByte<ETsError>                              LastErrorCode;                                            // 0x0069(0x0001) (Transient)
	unsigned char                                      ActiveControllerId;                                       // 0x006A(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x1];                                       // 0x006B(0x0001) MISSED OFFSET
	int                                                CurrentIdx;                                               // 0x006C(0x0004) (Transient)
	struct FString                                     LastErrorMessage;                                         // 0x0070(0x000C) (Transient, NeedCtorLink)
	TArray<struct FTsToCEntry>                         ToC;                                                      // 0x007C(0x000C) (Const, Transient, NeedCtorLink)
	int                                                SavefileVersion;                                          // 0x0088(0x0004) (Const, Transient)
	int                                                HeaderSize;                                               // 0x008C(0x0004) (Const, Transient)
	struct FScriptDelegate                             __OnInitializeComplete__Delegate;                         // 0x0090(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWriteDataComplete__Delegate;                          // 0x009C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadDataComplete__Delegate;                           // 0x00A8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;               // 0x00B4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;                // 0x00C0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDiskAccess__Delegate;                                 // 0x00CC(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Ts.TsSystem");
		return ptr;
	}


	void UnlockTrophyAsync(int InContext, int InHandle, int InTrophyId);
	void InitTrophyAsync(int InContext, int InHandle);
	void CopyProfileSettings(class UOnlineProfileSettings* Src, class UOnlineProfileSettings* Dest);
	bool ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings** ProfileSettings);
	bool WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings** ProfileSettings);
	void ReadSPData(const struct FScriptDelegate& ReadComplete);
	void WriteSPData(const struct FScriptDelegate& SaveComplete, struct FTsSaveData* InData);
	void ReadSaveData(TEnumAsByte<ETsSaveType> SaveType, int Id, const struct FScriptDelegate& ReadComplete);
	void WriteSaveData(const struct FScriptDelegate& AddComplete, struct FTsSaveData* InData);
	void InitializeToC(unsigned char LocalUserNum, bool bAutoReplaceCorrupt, const struct FScriptDelegate& InitializeComplete);
	bool CheckStorageDevice();
	void Initialize();
	void UnRegisterOnDiskAccessDelegate(const struct FScriptDelegate& DiskAccessDelegate);
	void RegisterOnDiskAccessDelegate(const struct FScriptDelegate& DiskAccessDelegate);
	void OnDiskAccess(bool IsAccessing, TEnumAsByte<ETsDiskAccess> AccessType);
	bool IsNoSaving();
	void SetNoSaving(bool bValue);
	bool IsCorruptProfileDetected();
	void ClearCachedProfile();
	void UnRegisterReadProfileSettingsDelegate(const struct FScriptDelegate& ReadDelegate);
	void RegisterReadProfileSettingsDelegate(const struct FScriptDelegate& ReadDelegate);
	void UnRegisterWriteProfileSettingsDelegate(const struct FScriptDelegate& WriteDelegate);
	void RegisterWriteProfileSettingsDelegate(const struct FScriptDelegate& WriteDelegate);
	void OnReadProfileSettingsComplete(TEnumAsByte<ETsResult> Result);
	void OnWriteProfileSettingsComplete(TEnumAsByte<ETsResult> Result);
	void OnReadDataComplete(TEnumAsByte<ETsResult> Result, TArray<unsigned char> ReadBuffer);
	void OnWriteDataComplete(TEnumAsByte<ETsResult> Result);
	void OnInitializeComplete(TEnumAsByte<ETsResult> Result);
	void ProcessTick(float DeltaTime);
	void DisableSystem();
	TEnumAsByte<ETsError> STATIC_GetLastError(struct FString* ErrorString);
	bool HasPendingSaveTasks();
	class UTsSystem* STATIC_GetTsSystem();
	void STATIC_SetTsSystem(class UTsSystem* Ts);
};


// Class Ts.TsTester
// 0x0050 (0x008C - 0x003C)
class UTsTester : public UObject
{
public:
	struct FTsSaveData                                 WriteData;                                                // 0x003C(0x0014) (NeedCtorLink)
	struct FTsSaveData                                 MultiWriteData[0x3];                                      // 0x0050(0x0014) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Ts.TsTester");
		return ptr;
	}


	void MultiWrite3Done(TEnumAsByte<ETsResult> Result);
	void MultiWrite2Done(TEnumAsByte<ETsResult> Result);
	void MultiWrite1Done(TEnumAsByte<ETsResult> Result);
	void TestMultiWrite(int Size);
	void TestReadDone(TEnumAsByte<ETsResult> Result, TArray<unsigned char> ReadBuffer);
	void TestRead(int Id);
	void TestWriteDone(TEnumAsByte<ETsResult> Result);
	void TestWrite(int Id, int Size);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
