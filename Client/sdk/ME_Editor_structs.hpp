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

// Enum Editor.TextureFactory.TextureCompressionSettings
enum class ETextureFactory_TextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Displacementmap             = 2,
	TC_NormalmapAlpha              = 3,
	TC_Grayscale                   = 4,
	TC_HighDynamicRange            = 5,
	TC_MAX                         = 6
};


// Enum Editor.TextureFactory.LODGroup
enum class ELODGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_Skybox            = 14,
	TEXTUREGROUP_UI                = 15,
	TEXTUREGROUP_LightAndShadowMap = 16,
	TEXTUREGROUP_RenderTarget      = 17,
	TEXTUREGROUP_MAX               = 18
};


// Enum Editor.TextureFactory.Blending
enum class EBlending : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_MAX                      = 5
};


// Enum Editor.TextureFactory.LightingModel
enum class ELightingModel : uint8_t
{
	MLM_Phong                      = 0,
	MLM_NonDirectional             = 1,
	MLM_Unlit                      = 2,
	MLM_Custom                     = 3,
	MLM_MAX                        = 4
};


// Enum Editor.RenderTargetCubeExporterTGA.CubeFace
enum class ECubeFace : uint8_t
{
	CubeFace_MAX                   = 0
};


// Enum Editor.TextureRenderTargetCubeFactoryNew.Format
enum class ETextureRenderTargetCubeFactoryNew_Format : uint8_t
{
	A8R8G8B8                       = 0,
	Format_MAX                     = 1
};


// Enum Editor.TextureRenderTargetFactoryNew.Format
enum class ETextureRenderTargetFactoryNew_Format : uint8_t
{
	A8R8G8B8                       = 0,
	Format_MAX                     = 1
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
