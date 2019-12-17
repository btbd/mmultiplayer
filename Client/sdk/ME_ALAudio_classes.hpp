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

// Class ALAudio.ALAudioDevice
// 0x0084 (0x01E4 - 0x0160)
class UALAudioDevice : public UAudioDevice
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
	struct FString                                     DeviceName;                                               // 0x0168(0x000C) (Config, NeedCtorLink)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0174(0x0068) MISSED OFFSET
	float                                              MinOggVorbisDurationEditor;                               // 0x01DC(0x0004) (Config)
	float                                              MinOggVorbisDurationGame;                                 // 0x01E0(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ALAudio.ALAudioDevice");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
