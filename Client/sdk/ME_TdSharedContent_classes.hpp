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

// Class TdSharedContent.TdWeapon_Pistol_Colt1911
// 0x0000 (0x05B8 - 0x05B8)
class ATdWeapon_Pistol_Colt1911 : public ATdWeapon_Light
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdSharedContent.TdWeapon_Pistol_Colt1911");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
