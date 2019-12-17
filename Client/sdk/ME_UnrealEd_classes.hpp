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

// Class UnrealEd.AnimNodeEditInfo
// 0x0004 (0x0040 - 0x003C)
class UAnimNodeEditInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnimNodeEditInfo");
		return ptr;
	}

};


// Class UnrealEd.AnimNodeEditInfo_AimOffset
// 0x0008 (0x0048 - 0x0040)
class UAnimNodeEditInfo_AimOffset : public UAnimNodeEditInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnimNodeEditInfo_AimOffset");
		return ptr;
	}

};


// Class UnrealEd.ThumbnailLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UThumbnailLabelRenderer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ThumbnailLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.AnimSetLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UAnimSetLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnimSetLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.AnimTreeEdSkelComponent
// 0x0010 (0x0460 - 0x0450)
class UAnimTreeEdSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnimTreeEdSkelComponent");
		return ptr;
	}

};


// Class UnrealEd.AnimTreeLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UAnimTreeLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.AnimTreeLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.ThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UThumbnailRenderer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.IconThumbnailRenderer
// 0x0010 (0x004C - 0x003C)
class UIconThumbnailRenderer : public UThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x003C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.IconThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.ArchetypeThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UArchetypeThumbnailRenderer : public UIconThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ArchetypeThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.ASVSkelComponent
// 0x0010 (0x0460 - 0x0450)
class UASVSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ASVSkelComponent");
		return ptr;
	}

};


// Class UnrealEd.BrowserManager
// 0x0024 (0x0060 - 0x003C)
class UBrowserManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x003C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.BrowserManager");
		return ptr;
	}

};


// Class UnrealEd.CascadeOptions
// 0x009C (0x00D8 - 0x003C)
class UCascadeOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x9C];                                      // 0x003C(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CascadeOptions");
		return ptr;
	}

};


// Class UnrealEd.CascadePreviewComponent
// 0x0004 (0x01C0 - 0x01BC)
class UCascadePreviewComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CascadePreviewComponent");
		return ptr;
	}

};


// Class UnrealEd.CurveEdOptions
// 0x0078 (0x00B4 - 0x003C)
class UCurveEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x003C(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdOptions");
		return ptr;
	}

};


// Class UnrealEd.CurveEdPresetBase
// 0x0000 (0x003C - 0x003C)
class UCurveEdPresetBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdPresetBase");
		return ptr;
	}

};


// Class UnrealEd.CurveEdPreset_CosWave
// 0x000C (0x0048 - 0x003C)
class UCurveEdPreset_CosWave : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdPreset_CosWave");
		return ptr;
	}

};


// Class UnrealEd.CurveEdPreset_LinearDecay
// 0x0010 (0x004C - 0x003C)
class UCurveEdPreset_LinearDecay : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x003C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdPreset_LinearDecay");
		return ptr;
	}

};


// Class UnrealEd.CurveEdPreset_Nothing
// 0x0000 (0x003C - 0x003C)
class UCurveEdPreset_Nothing : public UCurveEdPresetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdPreset_Nothing");
		return ptr;
	}

};


// Class UnrealEd.CurveEdPreset_SineWave
// 0x000C (0x0048 - 0x003C)
class UCurveEdPreset_SineWave : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdPreset_SineWave");
		return ptr;
	}

};


// Class UnrealEd.CurveEdPreset_UserSet
// 0x0004 (0x0040 - 0x003C)
class UCurveEdPreset_UserSet : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CurveEdPreset_UserSet");
		return ptr;
	}

};


// Class UnrealEd.PropertyInputProxy
// 0x0010 (0x004C - 0x003C)
class UPropertyInputProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x003C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyInputProxy");
		return ptr;
	}

};


// Class UnrealEd.CustomInputProxy_Base
// 0x0004 (0x0050 - 0x004C)
class UCustomInputProxy_Base : public UPropertyInputProxy
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CustomInputProxy_Base");
		return ptr;
	}

};


// Class UnrealEd.DefaultSizedThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class UDefaultSizedThumbnailRenderer : public UThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x003C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.DefaultSizedThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.EditorUISceneClient
// 0x0018 (0x0110 - 0x00F8)
class UEditorUISceneClient : public UUISceneClient
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.EditorUISceneClient");
		return ptr;
	}

};


// Class UnrealEd.FaceFXStudioSkelComponent
// 0x0010 (0x0460 - 0x0450)
class UFaceFXStudioSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FaceFXStudioSkelComponent");
		return ptr;
	}

};


// Class UnrealEd.TextureThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UTextureThumbnailRenderer : public UThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextureThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.FontThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UFontThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FontThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.StaticMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UStaticMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.StaticMeshLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.FracturedStaticMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UFracturedStaticMeshLabelRenderer : public UStaticMeshLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.FracturedStaticMeshLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType
// 0x001C (0x0058 - 0x003C)
class UGenericBrowserType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x003C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Custom
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Custom : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Custom");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_All
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_All : public UGenericBrowserType_Custom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_All");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Animation
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Animation : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Animation");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_AnimTree
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_AnimTree : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_AnimTree");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Archetype
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Archetype : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Archetype");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_CameraAnim
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_CameraAnim : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_CameraAnim");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_CurveEdPresetCurve
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_CurveEdPresetCurve : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_CurveEdPresetCurve");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_DecalMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_DecalMaterial : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_DecalMaterial");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_FaceFXAnimSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FaceFXAnimSet : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_FaceFXAnimSet");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_FaceFXAsset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FaceFXAsset : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_FaceFXAsset");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Font
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Font : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Font");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_StaticMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_StaticMesh : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_StaticMesh");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_FracturedStaticMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FracturedStaticMesh : public UGenericBrowserType_StaticMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_FracturedStaticMesh");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_LensFlare
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_LensFlare : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_LensFlare");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Material
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Material : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Material");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_MaterialInstanceConstant
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MaterialInstanceConstant : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_MaterialInstanceConstant");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_MaterialInstanceTimeVarying
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MaterialInstanceTimeVarying : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_MaterialInstanceTimeVarying");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_MaterialLackingPhysMat
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MaterialLackingPhysMat : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_MaterialLackingPhysMat");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_MorphTargetSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MorphTargetSet : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_MorphTargetSet");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_MorphWeightSequence
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MorphWeightSequence : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_MorphWeightSequence");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_ParticleSystem
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ParticleSystem : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_ParticleSystem");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_PhysicalMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysicalMaterial : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_PhysicalMaterial");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_PhysicsAsset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysicsAsset : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_PhysicsAsset");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_PhysXParticleSystem
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysXParticleSystem : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_PhysXParticleSystem");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_PostProcess
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PostProcess : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_PostProcess");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Prefab
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Prefab : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Prefab");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Texture
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Texture : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Texture");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_RenderTexture
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_RenderTexture : public UGenericBrowserType_Texture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_RenderTexture");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Sequence
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Sequence : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Sequence");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_SkeletalMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SkeletalMesh : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_SkeletalMesh");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_Sounds
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Sounds : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_Sounds");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_SoundCue
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundCue : public UGenericBrowserType_Sounds
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_SoundCue");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_SoundWave
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundWave : public UGenericBrowserType_Sounds
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_SoundWave");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_SpeechRecognition
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SpeechRecognition : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_SpeechRecognition");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_SpeedTree
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SpeedTree : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_SpeedTree");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_TerrainLayer
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TerrainLayer : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_TerrainLayer");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_TerrainMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TerrainMaterial : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_TerrainMaterial");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_TextureWithAlpha
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TextureWithAlpha : public UGenericBrowserType_Texture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_TextureWithAlpha");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_UIArchetype
// 0x0004 (0x005C - 0x0058)
class UGenericBrowserType_UIArchetype : public UGenericBrowserType_Archetype
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_UIArchetype");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_UIScene
// 0x0004 (0x005C - 0x0058)
class UGenericBrowserType_UIScene : public UGenericBrowserType
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0058(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_UIScene");
		return ptr;
	}

};


// Class UnrealEd.GenericBrowserType_UISkin
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_UISkin : public UGenericBrowserType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericBrowserType_UISkin");
		return ptr;
	}

};


// Class UnrealEd.GenericThumbnailLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UGenericThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.GenericThumbnailLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.InterpEdOptions
// 0x000C (0x0048 - 0x003C)
class UInterpEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpEdOptions");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackAnimControlHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackAnimControlHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackAnimControlHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackVectorPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackVectorPropHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackVectorPropHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackColorPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackColorPropHelper : public UInterpTrackVectorPropHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackColorPropHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackDirectorHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackDirectorHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackDirectorHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackEventHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackEventHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackEventHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackFaceFXHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackFaceFXHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackFaceFXHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackFloatPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackFloatPropHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackFloatPropHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackSoundHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackSoundHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackSoundHelper");
		return ptr;
	}

};


// Class UnrealEd.InterpTrackToggleHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackToggleHelper : public UInterpTrackHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.InterpTrackToggleHelper");
		return ptr;
	}

};


// Class UnrealEd.KismetBindings
// 0x0018 (0x0054 - 0x003C)
class UKismetBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x003C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.KismetBindings");
		return ptr;
	}

};


// Class UnrealEd.LensFlareEditorOptions
// 0x00A0 (0x00DC - 0x003C)
class ULensFlareEditorOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x003C(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LensFlareEditorOptions");
		return ptr;
	}

};


// Class UnrealEd.LensFlarePreviewComponent
// 0x0004 (0x01C0 - 0x01BC)
class ULensFlarePreviewComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LensFlarePreviewComponent");
		return ptr;
	}

};


// Class UnrealEd.LensFlareThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class ULensFlareThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x003C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.LensFlareThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.MaterialEditorInstanceConstant
// 0x0078 (0x00B4 - 0x003C)
class UMaterialEditorInstanceConstant : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x003C(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialEditorInstanceConstant");
		return ptr;
	}

};


// Class UnrealEd.MaterialEditorInstanceTimeVarying
// 0x0078 (0x00B4 - 0x003C)
class UMaterialEditorInstanceTimeVarying : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x003C(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialEditorInstanceTimeVarying");
		return ptr;
	}

};


// Class UnrealEd.MaterialEditorMeshComponent
// 0x0008 (0x0210 - 0x0208)
class UMaterialEditorMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialEditorMeshComponent");
		return ptr;
	}

};


// Class UnrealEd.MaterialEditorOptions
// 0x0004 (0x0040 - 0x003C)
class UMaterialEditorOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialEditorOptions");
		return ptr;
	}

};


// Class UnrealEd.MaterialEditorSkeletalMeshComponent
// 0x0010 (0x0460 - 0x0450)
class UMaterialEditorSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialEditorSkeletalMeshComponent");
		return ptr;
	}

};


// Class UnrealEd.MaterialInstanceLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UMaterialInstanceLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialInstanceLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.MaterialInstanceThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class UMaterialInstanceThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MaterialInstanceThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.MemCountThumbnailLabelRenderer
// 0x0004 (0x0040 - 0x003C)
class UMemCountThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.MemCountThumbnailLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.ParticleSystemThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class UParticleSystemThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x003C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ParticleSystemThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.PhATSimOptions
// 0x004C (0x0088 - 0x003C)
class UPhATSimOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x003C(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PhATSimOptions");
		return ptr;
	}

};


// Class UnrealEd.PhATSkeletalMeshComponent
// 0x0010 (0x0460 - 0x0450)
class UPhATSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PhATSkeletalMeshComponent");
		return ptr;
	}

};


// Class UnrealEd.PhysicsAssetLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPhysicsAssetLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PhysicsAssetLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.PropertyDrawProxy
// 0x0000 (0x003C - 0x003C)
class UPropertyDrawProxy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyDrawProxy");
		return ptr;
	}

};


// Class UnrealEd.PlayerInputMask_CustomDrawProxy
// 0x0000 (0x003C - 0x003C)
class UPlayerInputMask_CustomDrawProxy : public UPropertyDrawProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PlayerInputMask_CustomDrawProxy");
		return ptr;
	}

};


// Class UnrealEd.PropertyInputArrayItemBase
// 0x0000 (0x004C - 0x004C)
class UPropertyInputArrayItemBase : public UPropertyInputProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyInputArrayItemBase");
		return ptr;
	}

};


// Class UnrealEd.PropertyInputBool
// 0x0000 (0x004C - 0x004C)
class UPropertyInputBool : public UPropertyInputArrayItemBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyInputBool");
		return ptr;
	}

};


// Class UnrealEd.PlayerInputMask_CustomInputProxy
// 0x0000 (0x004C - 0x004C)
class UPlayerInputMask_CustomInputProxy : public UPropertyInputBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PlayerInputMask_CustomInputProxy");
		return ptr;
	}

};


// Class UnrealEd.PostProcessLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPostProcessLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PostProcessLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.PrefabThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UPrefabThumbnailRenderer : public UIconThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PrefabThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.PropertyInputCombo
// 0x0004 (0x0050 - 0x004C)
class UPropertyInputCombo : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyInputCombo");
		return ptr;
	}

};


// Class UnrealEd.PropertyInputEditInline
// 0x0000 (0x004C - 0x004C)
class UPropertyInputEditInline : public UPropertyInputArrayItemBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyInputEditInline");
		return ptr;
	}

};


// Class UnrealEd.PropertyInputText
// 0x000C (0x0058 - 0x004C)
class UPropertyInputText : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x004C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.PropertyInputText");
		return ptr;
	}

};


// Class UnrealEd.SequenceObjectHelper
// 0x0000 (0x003C - 0x003C)
class USequenceObjectHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SequenceObjectHelper");
		return ptr;
	}

};


// Class UnrealEd.SkeletalMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class USkeletalMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SkeletalMeshLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.SkeletalMeshThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class USkeletalMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SkeletalMeshThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.SoundLabelRenderer
// 0x0000 (0x003C - 0x003C)
class USoundLabelRenderer : public UThumbnailLabelRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundLabelRenderer");
		return ptr;
	}

};


// Class UnrealEd.SoundNodeHelper
// 0x0000 (0x003C - 0x003C)
class USoundNodeHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.SoundNodeHelper");
		return ptr;
	}

};


// Class UnrealEd.StaticMeshEditorComponent
// 0x0008 (0x0210 - 0x0208)
class UStaticMeshEditorComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.StaticMeshEditorComponent");
		return ptr;
	}

};


// Class UnrealEd.StaticMeshThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class UStaticMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.StaticMeshThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.TerrainEditOptions
// 0x00C8 (0x0104 - 0x003C)
class UTerrainEditOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x003C(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TerrainEditOptions");
		return ptr;
	}

};


// Class UnrealEd.TextureCubeThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UTextureCubeThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.TextureCubeThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.ThumbnailManager
// 0x008C (0x00C8 - 0x003C)
class UThumbnailManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8C];                                      // 0x003C(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ThumbnailManager");
		return ptr;
	}

};


// Class UnrealEd.UIEvent_MetaObjectHelper
// 0x0000 (0x003C - 0x003C)
class UUIEvent_MetaObjectHelper : public USequenceObjectHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UIEvent_MetaObjectHelper");
		return ptr;
	}

};


// Class UnrealEd.UISceneExporter
// 0x0000 (0x0070 - 0x0070)
class UUISceneExporter : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UISceneExporter");
		return ptr;
	}

};


// Class UnrealEd.UISceneFactory
// 0x0008 (0x0078 - 0x0070)
class UUISceneFactory : public UFactory
{
public:
	class UClass*                                      UISceneClass;                                             // 0x0070(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UISceneFactory");
		return ptr;
	}

};


// Class UnrealEd.UISceneFactoryNew
// 0x0000 (0x0078 - 0x0078)
class UUISceneFactoryNew : public UUISceneFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UISceneFactoryNew");
		return ptr;
	}

};


// Class UnrealEd.UISceneFactoryText
// 0x0000 (0x0078 - 0x0078)
class UUISceneFactoryText : public UUISceneFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UISceneFactoryText");
		return ptr;
	}

};


// Class UnrealEd.UISceneManager
// 0x0098 (0x00D4 - 0x003C)
class UUISceneManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x003C(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UISceneManager");
		return ptr;
	}

};


// Class UnrealEd.UISceneThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UUISceneThumbnailRenderer : public UIconThumbnailRenderer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UISceneThumbnailRenderer");
		return ptr;
	}

};


// Class UnrealEd.UISequenceHelper
// 0x0000 (0x003C - 0x003C)
class UUISequenceHelper : public USequenceObjectHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UISequenceHelper");
		return ptr;
	}

};


// Class UnrealEd.UISequenceObjectHelper
// 0x0000 (0x003C - 0x003C)
class UUISequenceObjectHelper : public USequenceObjectHelper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UISequenceObjectHelper");
		return ptr;
	}

};


// Class UnrealEd.UIState_CustomInputProxy
// 0x0000 (0x004C - 0x004C)
class UUIState_CustomInputProxy : public UPropertyInputEditInline
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UIState_CustomInputProxy");
		return ptr;
	}

};


// Class UnrealEd.UIStateClass_CustomInputProxy
// 0x0000 (0x0050 - 0x0050)
class UUIStateClass_CustomInputProxy : public UPropertyInputCombo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UIStateClass_CustomInputProxy");
		return ptr;
	}

};


// Class UnrealEd.UITexture_CustomDrawProxy
// 0x0000 (0x003C - 0x003C)
class UUITexture_CustomDrawProxy : public UPropertyDrawProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UITexture_CustomDrawProxy");
		return ptr;
	}

};


// Class UnrealEd.UITexture_CustomInputProxy
// 0x0000 (0x0058 - 0x0058)
class UUITexture_CustomInputProxy : public UPropertyInputText
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UITexture_CustomInputProxy");
		return ptr;
	}

};


// Class UnrealEd.UnrealEdEngine
// 0x0070 (0x05CC - 0x055C)
class UUnrealEdEngine : public UEditorEngine
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x055C(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UnrealEdEngine");
		return ptr;
	}

};


// Class UnrealEd.UnrealEdKeyBindings
// 0x000C (0x0048 - 0x003C)
class UUnrealEdKeyBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UnrealEdKeyBindings");
		return ptr;
	}

};


// Class UnrealEd.UnrealEdOptions
// 0x0058 (0x0094 - 0x003C)
class UUnrealEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x003C(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UnrealEdOptions");
		return ptr;
	}

};


// Class UnrealEd.CascadeParticleSystemComponent
// 0x0004 (0x0240 - 0x023C)
class UCascadeParticleSystemComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x023C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CascadeParticleSystemComponent");
		return ptr;
	}

};


// Class UnrealEd.CustomPropertyItemBindings
// 0x0048 (0x0084 - 0x003C)
class UCustomPropertyItemBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x003C(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.CustomPropertyItemBindings");
		return ptr;
	}

};


// Class UnrealEd.ObjectEditorViewportInput
// 0x0000 (0x00E8 - 0x00E8)
class UObjectEditorViewportInput : public UEditorViewportInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.ObjectEditorViewportInput");
		return ptr;
	}

};


// Class UnrealEd.UIEditorOptions
// 0x002C (0x0068 - 0x003C)
class UUIEditorOptions : public UUIRoot
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x003C(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UIEditorOptions");
		return ptr;
	}

};


// Class UnrealEd.UILayer
// 0x0018 (0x0054 - 0x003C)
class UUILayer : public UUILayerBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x003C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UILayer");
		return ptr;
	}

};


// Class UnrealEd.UILayerRoot
// 0x0004 (0x0058 - 0x0054)
class UUILayerRoot : public UUILayer
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UILayerRoot");
		return ptr;
	}

};


// Class UnrealEd.UIPreviewString
// 0x000C (0x00E8 - 0x00DC)
class UUIPreviewString : public UUIString
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00DC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UnrealEd.UIPreviewString");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
