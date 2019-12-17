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

// Enum Ts.TsSystem.ETsSaveType
enum class ETsSaveType : uint8_t
{
	TSST_Ghost                     = 0,
	TSST_Checkpoint                = 1,
	TSST_TimeTrialData             = 2,
	TSST_Test                      = 3,
	TSST_Profile                   = 4,
	TSST_MAX                       = 5
};


// Enum Ts.TsSystem.ETsResult
enum class ETsResult : uint8_t
{
	TSR_Ok                         = 0,
	TSR_Error                      = 1,
	TSR_Canceled                   = 2,
	TSR_Pending                    = 3,
	TSR_Busy                       = 4,
	TSR_DoesNotExist               = 5,
	TSR_NotSignedIn                = 6,
	TSR_Corrupt                    = 7,
	TSR_DeviceRemoved              = 8,
	TSR_BadOwner                   = 9,
	TSR_MAX                        = 10
};


// Enum Ts.TsSystem.ETsError
enum class ETsError : uint8_t
{
	TSE_Ok                         = 0,
	TSE_NoSpace                    = 1,
	TSE_FailedToOpen               = 2,
	TSE_FileDoesNotExist           = 3,
	TSE_FailedToSeek               = 4,
	TSE_AccessDenied               = 5,
	TSE_Corrupt                    = 6,
	TSE_DeviceRemoved              = 7,
	TSE_Unknown                    = 8,
	TSE_MAX                        = 9
};


// Enum Ts.TsSystem.ETsDiskAccess
enum class ETsDiskAccess : uint8_t
{
	TSD_None                       = 0,
	TSD_ShortRead                  = 1,
	TSD_LongRead                   = 2,
	TSD_ShortWrite                 = 3,
	TSD_LongWrite                  = 4,
	TSD_Download                   = 5,
	TSD_Upload                     = 6,
	TSD_CreatingSave               = 7,
	TSD_LoadingSave                = 8,
	TSD_CheckingSave               = 9,
	TSD_LoadingLevel               = 10,
	TSD_MAX                        = 11
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Ts.TsSystem.TsSaveData
// 0x0014
struct FTsSaveData
{
	TEnumAsByte<ETsSaveType>                           SaveType;                                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Id;                                                       // 0x0004(0x0004)
	TArray<unsigned char>                              Data;                                                     // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct Ts.TsSystem.TsToCEntry
// 0x0028
struct FTsToCEntry
{
	TEnumAsByte<ETsSaveType>                           SaveType;                                                 // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Id;                                                       // 0x0004(0x0004)
	int                                                MaxSize;                                                  // 0x0008(0x0004)
	unsigned long                                      IsUsed : 1;                                               // 0x000C(0x0004)
	int                                                StoredSize;                                               // 0x0010(0x0004)
	struct FPointer                                    CachedBytes;                                              // 0x0014(0x0004)
	unsigned char                                      Digest[0x10];                                             // 0x0018(0x0001)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
