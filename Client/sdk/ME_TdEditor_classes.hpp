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

// Class TdEditor.BakerCommandlet
// 0x0000 (0x007C - 0x007C)
class UBakerCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.BakerCommandlet");
		return ptr;
	}

};


// Class TdEditor.GenericBrowserType_TdAnimSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TdAnimSet : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.GenericBrowserType_TdAnimSet");
		return ptr;
	}

};


// Class TdEditor.GenericBrowserType_TdParticleSystem
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TdParticleSystem : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.GenericBrowserType_TdParticleSystem");
		return ptr;
	}

};


// Class TdEditor.GenericBrowserType_TdUIScene
// 0x0000 (0x005C - 0x005C)
class UGenericBrowserType_TdUIScene : public UGenericBrowserType_UIScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.GenericBrowserType_TdUIScene");
		return ptr;
	}

};


// Class TdEditor.TdAimNodeCommandlet
// 0x0000 (0x007C - 0x007C)
class UTdAimNodeCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.TdAimNodeCommandlet");
		return ptr;
	}

};


// Class TdEditor.TdAnimCleanUpCommandlet
// 0x000C (0x0088 - 0x007C)
class UTdAnimCleanUpCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x007C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.TdAnimCleanUpCommandlet");
		return ptr;
	}

};


// Class TdEditor.TdAnimInfoCommandlet
// 0x0014 (0x0090 - 0x007C)
class UTdAnimInfoCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x007C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.TdAnimInfoCommandlet");
		return ptr;
	}

};


// Class TdEditor.TdAnimNotifyCopyCommandlet
// 0x000C (0x0088 - 0x007C)
class UTdAnimNotifyCopyCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x007C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.TdAnimNotifyCopyCommandlet");
		return ptr;
	}

};


// Class TdEditor.TdAnimSanityCheckCommandlet
// 0x000C (0x0088 - 0x007C)
class UTdAnimSanityCheckCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x007C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.TdAnimSanityCheckCommandlet");
		return ptr;
	}

};


// Class TdEditor.TdAnimSetCommandlet
// 0x0000 (0x007C - 0x007C)
class UTdAnimSetCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.TdAnimSetCommandlet");
		return ptr;
	}

};


// Class TdEditor.TdAnimSetFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTdAnimSetFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.TdAnimSetFactoryNew");
		return ptr;
	}

};


// Class TdEditor.TdLevelExporterFBX
// 0x0018 (0x0088 - 0x0070)
class UTdLevelExporterFBX : public UExporter
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.TdLevelExporterFBX");
		return ptr;
	}

};


// Class TdEditor.TdParticleSystemFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTdParticleSystemFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.TdParticleSystemFactoryNew");
		return ptr;
	}

};


// Class TdEditor.TdPolysExporterFBX
// 0x0000 (0x0070 - 0x0070)
class UTdPolysExporterFBX : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.TdPolysExporterFBX");
		return ptr;
	}

};


// Class TdEditor.TdSaveTOCCommandlet
// 0x0000 (0x007C - 0x007C)
class UTdSaveTOCCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.TdSaveTOCCommandlet");
		return ptr;
	}

};


// Class TdEditor.TdSkeletalMeshCommandlet
// 0x0000 (0x007C - 0x007C)
class UTdSkeletalMeshCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.TdSkeletalMeshCommandlet");
		return ptr;
	}

};


// Class TdEditor.TdUISceneFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTdUISceneFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TdEditor.TdUISceneFactoryNew");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
