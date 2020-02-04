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

// Class Editor.AnalyzeContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeContentCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.AnalyzeContentCommandlet");
		return ptr;
	}

};


// Class Editor.AnalyzeCookedContentCommandlet
// 0x0018 (0x0094 - 0x007C)
class UAnalyzeCookedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x007C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.AnalyzeCookedContentCommandlet");
		return ptr;
	}

};


// Class Editor.AnalyzeCookedPackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeCookedPackagesCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.AnalyzeCookedPackagesCommandlet");
		return ptr;
	}

};


// Class Editor.AnalyzeFallbackMaterialsCommandlet
// 0x003C (0x00B8 - 0x007C)
class UAnalyzeFallbackMaterialsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x007C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.AnalyzeFallbackMaterialsCommandlet");
		return ptr;
	}

};


// Class Editor.AnalyzeReferencedContentCommandlet
// 0x01B0 (0x022C - 0x007C)
class UAnalyzeReferencedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x007C(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.AnalyzeReferencedContentCommandlet");
		return ptr;
	}

};


// Class Editor.AnalyzeScriptCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeScriptCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.AnalyzeScriptCommandlet");
		return ptr;
	}

};


// Class Editor.AnimSetFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UAnimSetFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.AnimSetFactoryNew");
		return ptr;
	}

};


// Class Editor.AnimTreeFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UAnimTreeFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.AnimTreeFactoryNew");
		return ptr;
	}

};


// Class Editor.BatchExportCommandlet
// 0x0000 (0x007C - 0x007C)
class UBatchExportCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.BatchExportCommandlet");
		return ptr;
	}

};


// Class Editor.BrushBuilder
// 0x003C (0x0078 - 0x003C)
class UBrushBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x003C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.BrushBuilder");
		return ptr;
	}

};


// Class Editor.ClassExporterUC
// 0x0000 (0x0070 - 0x0070)
class UClassExporterUC : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ClassExporterUC");
		return ptr;
	}

};


// Class Editor.ClassFactoryUC
// 0x0000 (0x0070 - 0x0070)
class UClassFactoryUC : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ClassFactoryUC");
		return ptr;
	}

};


// Class Editor.ColladaFactory
// 0x0004 (0x0074 - 0x0070)
class UColladaFactory : public UFactory
{
public:
	unsigned long                                      bImportAsSkeletalMesh : 1;                                // 0x0070(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ColladaFactory");
		return ptr;
	}

};


// Class Editor.ConformCommandlet
// 0x0000 (0x007C - 0x007C)
class UConformCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ConformCommandlet");
		return ptr;
	}

};


// Class Editor.CookPackagesCommandlet
// 0x0AB4 (0x0B30 - 0x007C)
class UCookPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0xAB4];                                     // 0x007C(0x0AB4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.CookPackagesCommandlet");
		return ptr;
	}

};


// Class Editor.CreateDefaultStyleCommandlet
// 0x0004 (0x0080 - 0x007C)
class UCreateDefaultStyleCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.CreateDefaultStyleCommandlet");
		return ptr;
	}

};


// Class Editor.CubeBuilder
// 0x001C (0x0094 - 0x0078)
class UCubeBuilder : public UBrushBuilder
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0078(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.CubeBuilder");
		return ptr;
	}

};


// Class Editor.CurveEdPresetCurveFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UCurveEdPresetCurveFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.CurveEdPresetCurveFactoryNew");
		return ptr;
	}

};


// Class Editor.CutDownContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UCutDownContentCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.CutDownContentCommandlet");
		return ptr;
	}

};


// Class Editor.DecalMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UDecalMaterialFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.DecalMaterialFactoryNew");
		return ptr;
	}

};


// Class Editor.DiffPackagesCommandlet
// 0x0018 (0x0094 - 0x007C)
class UDiffPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x007C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.DiffPackagesCommandlet");
		return ptr;
	}

};


// Class Editor.DumpEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UDumpEmittersCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.DumpEmittersCommandlet");
		return ptr;
	}

};


// Class Editor.DumpLightmapInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class UDumpLightmapInfoCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.DumpLightmapInfoCommandlet");
		return ptr;
	}

};


// Class Editor.EditorComponent
// 0x0024 (0x01E0 - 0x01BC)
class UEditorComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x01BC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.EditorComponent");
		return ptr;
	}

};


// Class Editor.EditorEngine
// 0x01B0 (0x055C - 0x03AC)
class UEditorEngine : public UEngine
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x03AC(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.EditorEngine");
		return ptr;
	}

};


// Class Editor.EditorPlayer
// 0x0000 (0x062C - 0x062C)
class UEditorPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.EditorPlayer");
		return ptr;
	}

};


// Class Editor.EditorViewportInput
// 0x0004 (0x00E8 - 0x00E4)
class UEditorViewportInput : public UInput
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.EditorViewportInput");
		return ptr;
	}

};


// Class Editor.EdModeComponent
// 0x0000 (0x01E0 - 0x01E0)
class UEdModeComponent : public UEditorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.EdModeComponent");
		return ptr;
	}

};


// Class Editor.ExamineOutersCommandlet
// 0x0000 (0x007C - 0x007C)
class UExamineOutersCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ExamineOutersCommandlet");
		return ptr;
	}

};


// Class Editor.ExportLocCommandlet
// 0x0000 (0x007C - 0x007C)
class UExportLocCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ExportLocCommandlet");
		return ptr;
	}

};


// Class Editor.FindDuplicateKismetObjectsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindDuplicateKismetObjectsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.FindDuplicateKismetObjectsCommandlet");
		return ptr;
	}

};


// Class Editor.FindEmitterMismatchedLODsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterMismatchedLODsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.FindEmitterMismatchedLODsCommandlet");
		return ptr;
	}

};


// Class Editor.FindEmitterModifiedLODsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterModifiedLODsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.FindEmitterModifiedLODsCommandlet");
		return ptr;
	}

};


// Class Editor.FindQuestionableTexturesCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindQuestionableTexturesCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.FindQuestionableTexturesCommandlet");
		return ptr;
	}

};


// Class Editor.FindSoundCuesWithMissingGroupsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindSoundCuesWithMissingGroupsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.FindSoundCuesWithMissingGroupsCommandlet");
		return ptr;
	}

};


// Class Editor.FindTexturesWithMissingPhysicalMaterialsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindTexturesWithMissingPhysicalMaterialsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.FindTexturesWithMissingPhysicalMaterialsCommandlet");
		return ptr;
	}

};


// Class Editor.FixAmbiguousMaterialParametersCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixAmbiguousMaterialParametersCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.FixAmbiguousMaterialParametersCommandlet");
		return ptr;
	}

};


// Class Editor.FixupEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupEmittersCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.FixupEmittersCommandlet");
		return ptr;
	}

};


// Class Editor.FixupRedirectsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupRedirectsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.FixupRedirectsCommandlet");
		return ptr;
	}

};


// Class Editor.FixupSourceUVsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupSourceUVsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.FixupSourceUVsCommandlet");
		return ptr;
	}

};


// Class Editor.FonixFactory
// 0x0000 (0x0070 - 0x0070)
class UFonixFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.FonixFactory");
		return ptr;
	}

};


// Class Editor.TextureFactory
// 0x004C (0x00BC - 0x0070)
class UTextureFactory : public UFactory
{
public:
	unsigned long                                      NoCompression : 1;                                        // 0x0070(0x0004)
	unsigned long                                      UnknownData00 : 31;                                       // 0x0070(0x0001)
	unsigned long                                      CompressionNoAlpha : 1;                                   // 0x0074(0x0004) (Edit)
	unsigned long                                      UnknownData01 : 31;                                       // 0x0074(0x0001)
	unsigned long                                      DeferCompression : 1;                                     // 0x0078(0x0004) (Edit)
	TEnumAsByte<ETextureFactory_TextureCompressionSettings> CompressionSettings;                                      // 0x007C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	unsigned long                                      Create_Material_ : 1;                                     // 0x0080(0x0004) (Edit)
	unsigned long                                      UnknownData03 : 31;                                       // 0x0080(0x0001)
	unsigned long                                      RGB_To_Diffuse : 1;                                       // 0x0084(0x0004) (Edit)
	unsigned long                                      UnknownData04 : 31;                                       // 0x0084(0x0001)
	unsigned long                                      RGB_To_Emissive : 1;                                      // 0x0088(0x0004) (Edit)
	unsigned long                                      UnknownData05 : 31;                                       // 0x0088(0x0001)
	unsigned long                                      Alpha_To_Specular : 1;                                    // 0x008C(0x0004) (Edit)
	unsigned long                                      UnknownData06 : 31;                                       // 0x008C(0x0001)
	unsigned long                                      Alpha_To_Emissive : 1;                                    // 0x0090(0x0004) (Edit)
	unsigned long                                      UnknownData07 : 31;                                       // 0x0090(0x0001)
	unsigned long                                      Alpha_To_Opacity : 1;                                     // 0x0094(0x0004) (Edit)
	unsigned long                                      UnknownData08 : 31;                                       // 0x0094(0x0001)
	unsigned long                                      Alpha_To_Opacity_Mask : 1;                                // 0x0098(0x0004) (Edit)
	unsigned long                                      UnknownData09 : 31;                                       // 0x0098(0x0001)
	unsigned long                                      Two_Sided_ : 1;                                           // 0x009C(0x0004) (Edit)
	TEnumAsByte<EBlending>                             Blending;                                                 // 0x00A0(0x0001) (Edit)
	TEnumAsByte<ELightingModel>                        Lighting_Model;                                           // 0x00A1(0x0001) (Edit)
	TEnumAsByte<ELODGroup>                             LODGroup;                                                 // 0x00A2(0x0001) (Edit)
	unsigned char                                      UnknownData10[0x1];                                       // 0x00A3(0x0001) MISSED OFFSET
	unsigned long                                      FlipBook : 1;                                             // 0x00A4(0x0004) (Edit)
	unsigned long                                      UnknownData11 : 31;                                       // 0x00A4(0x0001)
	unsigned long                                      Dither_Mip_maps_alpha_ : 1;                               // 0x00A8(0x0004) (Edit)
	unsigned long                                      UnknownData12 : 31;                                       // 0x00A8(0x0001)
	unsigned long                                      Preserve_border_R : 1;                                    // 0x00AC(0x0004) (Edit)
	unsigned long                                      UnknownData13 : 31;                                       // 0x00AC(0x0001)
	unsigned long                                      Preserve_border_G : 1;                                    // 0x00B0(0x0004) (Edit)
	unsigned long                                      UnknownData14 : 31;                                       // 0x00B0(0x0001)
	unsigned long                                      Preserve_border_B : 1;                                    // 0x00B4(0x0004) (Edit)
	unsigned long                                      UnknownData15 : 31;                                       // 0x00B4(0x0001)
	unsigned long                                      Preserve_border_A : 1;                                    // 0x00B8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TextureFactory");
		return ptr;
	}

};


// Class Editor.FontFactory
// 0x0000 (0x00BC - 0x00BC)
class UFontFactory : public UTextureFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.FontFactory");
		return ptr;
	}

};


// Class Editor.GeomModifier
// 0x0010 (0x004C - 0x003C)
class UGeomModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x003C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.GeomModifier");
		return ptr;
	}

};


// Class Editor.GeomModifier_Edit
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Edit : public UGeomModifier
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.GeomModifier_Edit");
		return ptr;
	}

};


// Class Editor.GeomModifier_Clip
// 0x0004 (0x0050 - 0x004C)
class UGeomModifier_Clip : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.GeomModifier_Clip");
		return ptr;
	}

};


// Class Editor.GeomModifier_Create
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Create : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.GeomModifier_Create");
		return ptr;
	}

};


// Class Editor.GeomModifier_Delete
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Delete : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.GeomModifier_Delete");
		return ptr;
	}

};


// Class Editor.GeomModifier_Extrude
// 0x0008 (0x0054 - 0x004C)
class UGeomModifier_Extrude : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x004C(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.GeomModifier_Extrude");
		return ptr;
	}

};


// Class Editor.GeomModifier_Flip
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Flip : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.GeomModifier_Flip");
		return ptr;
	}

};


// Class Editor.GeomModifier_Lathe
// 0x000C (0x0058 - 0x004C)
class UGeomModifier_Lathe : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x004C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.GeomModifier_Lathe");
		return ptr;
	}

};


// Class Editor.GeomModifier_Split
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Split : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.GeomModifier_Split");
		return ptr;
	}

};


// Class Editor.GeomModifier_Triangulate
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Triangulate : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.GeomModifier_Triangulate");
		return ptr;
	}

};


// Class Editor.GeomModifier_Turn
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Turn : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.GeomModifier_Turn");
		return ptr;
	}

};


// Class Editor.GeomModifier_Weld
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Weld : public UGeomModifier_Edit
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.GeomModifier_Weld");
		return ptr;
	}

};


// Class Editor.LensFlareFactoryNew
// 0x0000 (0x0070 - 0x0070)
class ULensFlareFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.LensFlareFactoryNew");
		return ptr;
	}

};


// Class Editor.LevelExporterOBJ
// 0x0000 (0x0070 - 0x0070)
class ULevelExporterOBJ : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.LevelExporterOBJ");
		return ptr;
	}

};


// Class Editor.LevelExporterSTL
// 0x0000 (0x0070 - 0x0070)
class ULevelExporterSTL : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.LevelExporterSTL");
		return ptr;
	}

};


// Class Editor.LevelExporterT3D
// 0x0000 (0x0070 - 0x0070)
class ULevelExporterT3D : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.LevelExporterT3D");
		return ptr;
	}

};


// Class Editor.LevelFactory
// 0x0000 (0x0070 - 0x0070)
class ULevelFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.LevelFactory");
		return ptr;
	}

};


// Class Editor.LightingChannelsObject
// 0x0004 (0x0040 - 0x003C)
class ULightingChannelsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.LightingChannelsObject");
		return ptr;
	}

};


// Class Editor.ListCorruptedComponentsCommandlet
// 0x0000 (0x007C - 0x007C)
class UListCorruptedComponentsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ListCorruptedComponentsCommandlet");
		return ptr;
	}

};


// Class Editor.ListEmittersUsingModuleCommandlet
// 0x0000 (0x007C - 0x007C)
class UListEmittersUsingModuleCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ListEmittersUsingModuleCommandlet");
		return ptr;
	}

};


// Class Editor.ListLoopingEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UListLoopingEmittersCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ListLoopingEmittersCommandlet");
		return ptr;
	}

};


// Class Editor.ListPackagesReferencingCommandlet
// 0x0000 (0x007C - 0x007C)
class UListPackagesReferencingCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ListPackagesReferencingCommandlet");
		return ptr;
	}

};


// Class Editor.ListPSysFixedBoundSettingCommandlet
// 0x0000 (0x007C - 0x007C)
class UListPSysFixedBoundSettingCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ListPSysFixedBoundSettingCommandlet");
		return ptr;
	}

};


// Class Editor.ListScriptReferencedContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UListScriptReferencedContentCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ListScriptReferencedContentCommandlet");
		return ptr;
	}

};


// Class Editor.LoadPackageCommandlet
// 0x0000 (0x007C - 0x007C)
class ULoadPackageCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.LoadPackageCommandlet");
		return ptr;
	}

};


// Class Editor.LocSoundInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class ULocSoundInfoCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.LocSoundInfoCommandlet");
		return ptr;
	}

};


// Class Editor.MakeCommandlet
// 0x0000 (0x007C - 0x007C)
class UMakeCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.MakeCommandlet");
		return ptr;
	}

};


// Class Editor.MaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.MaterialFactoryNew");
		return ptr;
	}

};


// Class Editor.MaterialInstanceConstantFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialInstanceConstantFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.MaterialInstanceConstantFactoryNew");
		return ptr;
	}

};


// Class Editor.MaterialInstanceTimeVaryingFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialInstanceTimeVaryingFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.MaterialInstanceTimeVaryingFactoryNew");
		return ptr;
	}

};


// Class Editor.MergePackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UMergePackagesCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.MergePackagesCommandlet");
		return ptr;
	}

};


// Class Editor.ModelExporterT3D
// 0x0000 (0x0070 - 0x0070)
class UModelExporterT3D : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ModelExporterT3D");
		return ptr;
	}

};


// Class Editor.ModelFactory
// 0x0000 (0x0070 - 0x0070)
class UModelFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ModelFactory");
		return ptr;
	}

};


// Class Editor.ObjectExporterT3D
// 0x0000 (0x0070 - 0x0070)
class UObjectExporterT3D : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ObjectExporterT3D");
		return ptr;
	}

};


// Class Editor.ParticleSystemFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UParticleSystemFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ParticleSystemFactoryNew");
		return ptr;
	}

};


// Class Editor.PatchScriptCommandlet
// 0x0004 (0x0080 - 0x007C)
class UPatchScriptCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.PatchScriptCommandlet");
		return ptr;
	}

};


// Class Editor.PerformMapCheckCommandlet
// 0x0000 (0x007C - 0x007C)
class UPerformMapCheckCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.PerformMapCheckCommandlet");
		return ptr;
	}

};


// Class Editor.PerformTerrainMaterialDumpCommandlet
// 0x0000 (0x007C - 0x007C)
class UPerformTerrainMaterialDumpCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.PerformTerrainMaterialDumpCommandlet");
		return ptr;
	}

};


// Class Editor.PersistentCookerData
// 0x00D0 (0x010C - 0x003C)
class UPersistentCookerData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x003C(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.PersistentCookerData");
		return ptr;
	}

};


// Class Editor.PhysicalMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPhysicalMaterialFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.PhysicalMaterialFactoryNew");
		return ptr;
	}

};


// Class Editor.PIEToNormalCommandlet
// 0x0000 (0x007C - 0x007C)
class UPIEToNormalCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.PIEToNormalCommandlet");
		return ptr;
	}

};


// Class Editor.PkgInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class UPkgInfoCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.PkgInfoCommandlet");
		return ptr;
	}

};


// Class Editor.PolysExporterT3D
// 0x0000 (0x0070 - 0x0070)
class UPolysExporterT3D : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.PolysExporterT3D");
		return ptr;
	}

};


// Class Editor.PolysFactory
// 0x0000 (0x0070 - 0x0070)
class UPolysFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.PolysFactory");
		return ptr;
	}

};


// Class Editor.PostProcessFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPostProcessFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.PostProcessFactoryNew");
		return ptr;
	}

};


// Class Editor.PrecompileShadersCommandlet
// 0x0018 (0x0094 - 0x007C)
class UPrecompileShadersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x007C(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.PrecompileShadersCommandlet");
		return ptr;
	}

};


// Class Editor.RebuildMapCommandlet
// 0x0000 (0x007C - 0x007C)
class URebuildMapCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.RebuildMapCommandlet");
		return ptr;
	}

};


// Class Editor.RenderTargetCubeExporterTGA
// 0x0004 (0x0074 - 0x0070)
class URenderTargetCubeExporterTGA : public UExporter
{
public:
	TEnumAsByte<ECubeFace>                             CubeFace;                                                 // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.RenderTargetCubeExporterTGA");
		return ptr;
	}

};


// Class Editor.RenderTargetExporterTGA
// 0x0000 (0x0070 - 0x0070)
class URenderTargetExporterTGA : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.RenderTargetExporterTGA");
		return ptr;
	}

};


// Class Editor.ReplaceActorCommandlet
// 0x0000 (0x007C - 0x007C)
class UReplaceActorCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ReplaceActorCommandlet");
		return ptr;
	}

};


// Class Editor.ResavePackagesCommandlet
// 0x0020 (0x009C - 0x007C)
class UResavePackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x007C(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ResavePackagesCommandlet");
		return ptr;
	}

};


// Class Editor.ScaleAudioVolumeCommandlet
// 0x0000 (0x007C - 0x007C)
class UScaleAudioVolumeCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ScaleAudioVolumeCommandlet");
		return ptr;
	}

};


// Class Editor.SequenceExporterT3D
// 0x0000 (0x0070 - 0x0070)
class USequenceExporterT3D : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.SequenceExporterT3D");
		return ptr;
	}

};


// Class Editor.SequenceFactory
// 0x0000 (0x0070 - 0x0070)
class USequenceFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.SequenceFactory");
		return ptr;
	}

};


// Class Editor.SetMaterialUsageCommandlet
// 0x0000 (0x007C - 0x007C)
class USetMaterialUsageCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.SetMaterialUsageCommandlet");
		return ptr;
	}

};


// Class Editor.SetPackageFlagsCommandlet
// 0x0000 (0x007C - 0x007C)
class USetPackageFlagsCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.SetPackageFlagsCommandlet");
		return ptr;
	}

};


// Class Editor.ShowObjectCountCommandlet
// 0x0000 (0x007C - 0x007C)
class UShowObjectCountCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ShowObjectCountCommandlet");
		return ptr;
	}

};


// Class Editor.ShowStylesCommandlet
// 0x0000 (0x007C - 0x007C)
class UShowStylesCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ShowStylesCommandlet");
		return ptr;
	}

};


// Class Editor.ShowTaggedPropsCommandlet
// 0x0048 (0x00C4 - 0x007C)
class UShowTaggedPropsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x007C(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.ShowTaggedPropsCommandlet");
		return ptr;
	}

};


// Class Editor.SkeletalMeshFactory
// 0x0004 (0x0074 - 0x0070)
class USkeletalMeshFactory : public UFactory
{
public:
	unsigned long                                      bAssumeMayaCoordinates : 1;                               // 0x0070(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.SkeletalMeshFactory");
		return ptr;
	}

};


// Class Editor.SoundCueFactoryNew
// 0x0000 (0x0070 - 0x0070)
class USoundCueFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.SoundCueFactoryNew");
		return ptr;
	}

};


// Class Editor.SoundExporterWAV
// 0x0000 (0x0070 - 0x0070)
class USoundExporterWAV : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.SoundExporterWAV");
		return ptr;
	}

};


// Class Editor.SoundFactory
// 0x000C (0x007C - 0x0070)
class USoundFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                                       // 0x0070(0x0004) (Edit)
	unsigned long                                      UnknownData00 : 31;                                       // 0x0070(0x0001)
	unsigned long                                      bIncludeAttenuationNode : 1;                              // 0x0074(0x0004) (Edit)
	float                                              CueVolume;                                                // 0x0078(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.SoundFactory");
		return ptr;
	}

};


// Class Editor.SoundGroupInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class USoundGroupInfoCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.SoundGroupInfoCommandlet");
		return ptr;
	}

};


// Class Editor.SoundSurroundExporterWAV
// 0x0000 (0x0070 - 0x0070)
class USoundSurroundExporterWAV : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.SoundSurroundExporterWAV");
		return ptr;
	}

};


// Class Editor.SoundSurroundFactory
// 0x0004 (0x0074 - 0x0070)
class USoundSurroundFactory : public UFactory
{
public:
	float                                              CueVolume;                                                // 0x0070(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.SoundSurroundFactory");
		return ptr;
	}

};


// Class Editor.SoundTTSFactory
// 0x001C (0x008C - 0x0070)
class USoundTTSFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                                       // 0x0070(0x0004) (Edit)
	unsigned long                                      UnknownData00 : 31;                                       // 0x0070(0x0001)
	unsigned long                                      bIncludeAttenuationNode : 1;                              // 0x0074(0x0004) (Edit)
	unsigned long                                      UnknownData01 : 31;                                       // 0x0074(0x0001)
	unsigned long                                      bUseTTS : 1;                                              // 0x0078(0x0004) (Edit)
	struct FString                                     SpokenText;                                               // 0x007C(0x000C) (Edit, NeedCtorLink)
	float                                              CueVolume;                                                // 0x0088(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.SoundTTSFactory");
		return ptr;
	}

};


// Class Editor.SpeedTreeFactory
// 0x0004 (0x0074 - 0x0070)
class USpeedTreeFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0070(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.SpeedTreeFactory");
		return ptr;
	}

};


// Class Editor.StaticMeshExporterOBJ
// 0x0000 (0x0070 - 0x0070)
class UStaticMeshExporterOBJ : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.StaticMeshExporterOBJ");
		return ptr;
	}

};


// Class Editor.StaticMeshFactory
// 0x0010 (0x0080 - 0x0070)
class UStaticMeshFactory : public UFactory
{
public:
	int                                                Pitch;                                                    // 0x0070(0x0004)
	int                                                Roll;                                                     // 0x0074(0x0004)
	int                                                Yaw;                                                      // 0x0078(0x0004)
	unsigned long                                      bOneConvexPerUCXObject : 1;                               // 0x007C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.StaticMeshFactory");
		return ptr;
	}

};


// Class Editor.StripSourceCommandlet
// 0x0000 (0x007C - 0x007C)
class UStripSourceCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.StripSourceCommandlet");
		return ptr;
	}

};


// Class Editor.TerrainExporterT3D
// 0x0008 (0x0078 - 0x0070)
class UTerrainExporterT3D : public UExporter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TerrainExporterT3D");
		return ptr;
	}

};


// Class Editor.TerrainFactory
// 0x0004 (0x0074 - 0x0070)
class UTerrainFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0070(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TerrainFactory");
		return ptr;
	}

};


// Class Editor.TerrainHeightMapExporter
// 0x0000 (0x0070 - 0x0070)
class UTerrainHeightMapExporter : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TerrainHeightMapExporter");
		return ptr;
	}

};


// Class Editor.TerrainHeightMapExporterG16BMPT3D
// 0x0000 (0x0070 - 0x0070)
class UTerrainHeightMapExporterG16BMPT3D : public UTerrainHeightMapExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TerrainHeightMapExporterG16BMPT3D");
		return ptr;
	}

};


// Class Editor.TerrainHeightMapExporterTextT3D
// 0x0000 (0x0070 - 0x0070)
class UTerrainHeightMapExporterTextT3D : public UTerrainHeightMapExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TerrainHeightMapExporterTextT3D");
		return ptr;
	}

};


// Class Editor.TerrainHeightMapFactory
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TerrainHeightMapFactory");
		return ptr;
	}

};


// Class Editor.TerrainHeightMapFactoryG16BMP
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryG16BMP : public UTerrainHeightMapFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TerrainHeightMapFactoryG16BMP");
		return ptr;
	}

};


// Class Editor.TerrainHeightMapFactoryG16BMPT3D
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryG16BMPT3D : public UTerrainHeightMapFactoryG16BMP
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TerrainHeightMapFactoryG16BMPT3D");
		return ptr;
	}

};


// Class Editor.TerrainHeightMapFactoryTextT3D
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryTextT3D : public UTerrainHeightMapFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TerrainHeightMapFactoryTextT3D");
		return ptr;
	}

};


// Class Editor.TerrainLayerSetupFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTerrainLayerSetupFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TerrainLayerSetupFactoryNew");
		return ptr;
	}

};


// Class Editor.TerrainMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTerrainMaterialFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TerrainMaterialFactoryNew");
		return ptr;
	}

};


// Class Editor.TestCompressionCommandlet
// 0x0000 (0x007C - 0x007C)
class UTestCompressionCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TestCompressionCommandlet");
		return ptr;
	}

};


// Class Editor.TestWordWrapCommandlet
// 0x0000 (0x007C - 0x007C)
class UTestWordWrapCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TestWordWrapCommandlet");
		return ptr;
	}

};


// Class Editor.TextBufferExporterTXT
// 0x0000 (0x0070 - 0x0070)
class UTextBufferExporterTXT : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TextBufferExporterTXT");
		return ptr;
	}

};


// Class Editor.TextureCubeFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTextureCubeFactoryNew : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TextureCubeFactoryNew");
		return ptr;
	}

};


// Class Editor.TextureExporterBMP
// 0x0000 (0x0070 - 0x0070)
class UTextureExporterBMP : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TextureExporterBMP");
		return ptr;
	}

};


// Class Editor.TextureExporterPCX
// 0x0000 (0x0070 - 0x0070)
class UTextureExporterPCX : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TextureExporterPCX");
		return ptr;
	}

};


// Class Editor.TextureExporterTGA
// 0x0000 (0x0070 - 0x0070)
class UTextureExporterTGA : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TextureExporterTGA");
		return ptr;
	}

};


// Class Editor.TextureMovieFactory
// 0x0004 (0x0074 - 0x0070)
class UTextureMovieFactory : public UFactory
{
public:
	TEnumAsByte<EMovieStreamSource>                    MovieStreamSource;                                        // 0x0070(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TextureMovieFactory");
		return ptr;
	}

};


// Class Editor.TextureRenderTargetCubeFactoryNew
// 0x0008 (0x0078 - 0x0070)
class UTextureRenderTargetCubeFactoryNew : public UFactory
{
public:
	int                                                Width;                                                    // 0x0070(0x0004) (Edit)
	TEnumAsByte<ETextureRenderTargetCubeFactoryNew_Format> Format;                                                   // 0x0074(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TextureRenderTargetCubeFactoryNew");
		return ptr;
	}

};


// Class Editor.TextureRenderTargetFactoryNew
// 0x000C (0x007C - 0x0070)
class UTextureRenderTargetFactoryNew : public UFactory
{
public:
	int                                                Width;                                                    // 0x0070(0x0004) (Edit)
	int                                                Height;                                                   // 0x0074(0x0004) (Edit)
	TEnumAsByte<ETextureRenderTargetFactoryNew_Format> Format;                                                   // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TextureRenderTargetFactoryNew");
		return ptr;
	}

};


// Class Editor.Transactor
// 0x0000 (0x003C - 0x003C)
class UTransactor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.Transactor");
		return ptr;
	}

};


// Class Editor.TransBuffer
// 0x0024 (0x0060 - 0x003C)
class UTransBuffer : public UTransactor
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x003C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TransBuffer");
		return ptr;
	}

};


// Class Editor.TrueTypeFontFactory
// 0x0004 (0x00C0 - 0x00BC)
class UTrueTypeFontFactory : public UFontFactory
{
public:
	class UFontImportOptions*                          ImportOptions;                                            // 0x00BC(0x0004) (Edit, NoClear, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TrueTypeFontFactory");
		return ptr;
	}

};


// Class Editor.TrueTypeMultiFontFactory
// 0x0024 (0x00E4 - 0x00C0)
class UTrueTypeMultiFontFactory : public UTrueTypeFontFactory
{
public:
	TArray<float>                                      ResTests;                                                 // 0x00C0(0x000C) (Edit, NeedCtorLink)
	TArray<float>                                      ResHeights;                                               // 0x00CC(0x000C) (Edit, NeedCtorLink)
	TArray<class UFont*>                               ResFonts;                                                 // 0x00D8(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.TrueTypeMultiFontFactory");
		return ptr;
	}

};


// Class Editor.WrangleContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UWrangleContentCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Editor.WrangleContentCommandlet");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
