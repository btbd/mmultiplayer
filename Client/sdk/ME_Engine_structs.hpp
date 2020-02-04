#pragma once

// Mirror's Edge (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_ConsoleEntry_ConsolePromptText                     "(> "
#define CONST_PRIVATE_NotDockable                                0x008
#define CONST_TRACEFLAG_Bullet                                   1
#define CONST_ACTORMAXSTEPHEIGHT                                 35.0
#define CONST_TOOLTIP_DATABINDING_INDEX                          1
#define CONST_TOOLTIP_BINDING_INDEX                              100
#define CONST_PRIVATE_TreeHidden                                 0x002
#define CONST_RBSTATE_LINVELSCALE                                10.0
#define CONST_TRACEFLAG_PhysicsVolumes                           2
#define CONST_DEFAULT_SIZE_X                                     1024
#define CONST_REP_RBLOCATION_ERROR_TOLERANCE_SQ                  16.0f
#define CONST_TRACEFLAG_SkipMovers                               4
#define CONST_COVERLINK_EdgeExposureDot                          0.85f
#define CONST_RB_None                                            0x00
#define CONST_ASPECTRATIO_Widescreen                             1.777778f
#define CONST_PRIVATE_KeepFocusedState                           0x800
#define CONST_RB_NeedsUpdate                                     0x01
#define CONST_PRIVATE_NotFocusable                               0x004
#define CONST_TRACEFLAG_Blocking                                 8
#define CONST_TRACEFLAG_AIBlocking                               16
#define CONST_CAPTION_DATABINDING_INDEX                          0
#define CONST_MINFLOORZ                                          0.7
#define CONST_RBSTATE_ANGVELSCALE                                1000.0
#define CONST_RB_Sleeping                                        0x02
#define CONST_PRIVATE_ManagedStyle                               0x020
#define CONST_TEMP_SPLITSCREEN_INDEX                             0
#define CONST_LATENT_MOVETOWARD                                  503
#define CONST_BLOCKEDPATHCOST                                    10000000
#define CONST_CLIENTADJUSTUPDATECOST                             180.0
#define CONST_MAXPOSITIONERRORSQUARED                            3.0
#define CONST_COVERLINK_ExposureDot                              0.4f
#define CONST_MAXNEARZEROVELOCITYSQUARED                         9.0
#define CONST_NULLCHARACTER                                      127
#define CONST_MAXVEHICLEPOSITIONERRORSQUARED                     900.0
#define CONST_MAXCLIENTUPDATEINTERVAL                            0.25
#define CONST_MAX_ACTIVE_CAMERA_ANIMS                            8
#define CONST_INFINITE_PATH_COST                                 10000000
#define CONST_PRIVATE_NotEditorSelectable                        0x001
#define CONST_PRIVATE_NotRotatable                               0x010
#define CONST_PRIVATE_TreeHiddenRecursive                        0x042
#define CONST_PRIVATE_EditorNoDelete                             0x080
#define CONST_MAX_SUPPORTED_GAMEPADS                             4
#define CONST_PRIVATE_EditorNoRename                             0x100
#define CONST_ASPECTRATIO_Normal                                 1.333333f
#define CONST_PRIVATE_EditorNoReparent                           0x200
#define CONST_PRIVATE_PropagateState                             0x400
#define CONST_ASPECTRATIO_Monitor                                1.25f
#define CONST_PRIVATE_Protected                                  0x380
#define CONST_COVERLINK_DangerDist                               1536.f
#define CONST_CONTEXTMENU_BINDING_INDEX                          101
#define CONST_DEFAULT_SIZE_Y                                     768
#define CONST_SCENE_DATASTORE_TAG                                'SceneData'
#define CONST_MaxHistory                                         16
#define CONST_FIRST_DEFAULT_DATABINDING_INDEX                    100
#define CONST_COVERLINK_EdgeCheckDot                             0.25f
#define CONST_SDPG_NumBits                                       3
#define CONST_ScriptConsoleEntry_ConsolePromptText               "(> "
#define CONST_UIOptionListBase_UIKEY_MoveCursorLeft              'UIKEY_MoveCursorLeft'
#define CONST_TEXT_CHANGED_NOTIFY_MASK                           0x1
#define CONST_INDEX_CHANGED_NOTIFY_MASK                          0x2
#define CONST_ResizeBufferPixels                                 5
#define CONST_DESCRIPTION_DATABINDING_INDEX                      2
#define CONST_DEFAULT_UISKIN                                     "DefaultUISkin.DefaultSkin"
#define CONST_UnknownCellDataFieldName                           'NAME_None'
#define CONST_UIOptionListBase_UIKEY_MoveCursorRight             'UIKEY_MoveCursorRight'

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Engine.Actor.ECollisionType
enum class ECollisionType : uint8_t
{
	COLLIDE_CustomDefault          = 0,
	COLLIDE_NoCollision            = 1,
	COLLIDE_BlockAll               = 2,
	COLLIDE_BlockWeapons           = 3,
	COLLIDE_TouchAll               = 4,
	COLLIDE_TouchWeapons           = 5,
	COLLIDE_BlockAllButWeapons     = 6,
	COLLIDE_TouchAllButWeapons     = 7,
	COLLIDE_MAX                    = 8
};


// Enum Engine.Actor.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4
};


// Enum Engine.Actor.EPhysics
enum class EPhysics : uint8_t
{
	PHYS_None                      = 0,
	PHYS_Walking                   = 1,
	PHYS_Falling                   = 2,
	PHYS_Swimming                  = 3,
	PHYS_Flying                    = 4,
	PHYS_Rotating                  = 5,
	PHYS_Projectile                = 6,
	PHYS_Interpolating             = 7,
	PHYS_Spider                    = 8,
	PHYS_Ladder                    = 9,
	PHYS_RigidBody                 = 10,
	PHYS_SoftBody                  = 11,
	PHYS_WallRunning               = 12,
	PHYS_WallClimbing              = 13,
	PHYS_Unused                    = 14,
	PHYS_MAX                       = 15
};


// Enum Engine.Actor.EMoveDir
enum class EMoveDir : uint8_t
{
	MD_Stationary                  = 0,
	MD_Forward                     = 1,
	MD_Backward                    = 2,
	MD_Left                        = 3,
	MD_Right                       = 4,
	MD_Up                          = 5,
	MD_Down                        = 6,
	MD_MAX                         = 7
};


// Enum Engine.Actor.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3
};


// Enum Engine.Actor.EDoubleClickDir
enum class EDoubleClickDir : uint8_t
{
	DCLICK_None                    = 0,
	DCLICK_Left                    = 1,
	DCLICK_Right                   = 2,
	DCLICK_Forward                 = 3,
	DCLICK_Back                    = 4,
	DCLICK_Active                  = 5,
	DCLICK_Done                    = 6,
	DCLICK_MAX                     = 7
};


// Enum Engine.Scene.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3
};


// Enum Engine.Scene.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_UnrealEdBackground        = 0,
	SDPG_World                     = 1,
	SDPG_Intermediate              = 2,
	SDPG_Foreground                = 3,
	SDPG_UnrealEdForeground        = 4,
	SDPG_PostProcess               = 5,
	SDPG_MAX                       = 6
};


// Enum Engine.PrimitiveComponent.ERBCollisionChannel
enum class ERBCollisionChannel : uint8_t
{
	RBCC_Default                   = 0,
	RBCC_Nothing                   = 1,
	RBCC_Pawn                      = 2,
	RBCC_Vehicle                   = 3,
	RBCC_Water                     = 4,
	RBCC_GameplayPhysics           = 5,
	RBCC_EffectPhysics             = 6,
	RBCC_Untitled1                 = 7,
	RBCC_Untitled2                 = 8,
	RBCC_Untitled3                 = 9,
	RBCC_Untitled4                 = 10,
	RBCC_Cloth                     = 11,
	RBCC_FluidDrain                = 12,
	RBCC_MAX                       = 13
};


// Enum Engine.PrimitiveComponent.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2
};


// Enum Engine.Texture.TextureCompressionSettings
enum class ETexture_TextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Displacementmap             = 2,
	TC_NormalmapAlpha              = 3,
	TC_Grayscale                   = 4,
	TC_HighDynamicRange            = 5,
	TC_MAX                         = 6
};


// Enum Engine.Texture.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_A8R8G8B8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_FilteredShadowDepth         = 13,
	PF_R32F                        = 14,
	PF_G16R16                      = 15,
	PF_G16R16F                     = 16,
	PF_G16R16F_FILTER              = 17,
	PF_G32R32F                     = 18,
	PF_A2B10G10R10                 = 19,
	PF_A16B16G16R16                = 20,
	PF_D24                         = 21,
	PF_NULL                        = 22
};


// Enum Engine.Texture.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Linear                      = 1,
	TF_MAX                         = 2
};


// Enum Engine.Texture.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3
};


// Enum Engine.Texture.TextureGroup
enum class ETextureGroup : uint8_t
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


// Enum Engine.PlayerController.EInputTypes
enum class EInputTypes : uint8_t
{
	IT_XAxis                       = 0,
	IT_YAxis                       = 1,
	IT_MAX                         = 2
};


// Enum Engine.PlayerController.EInputMatchAction
enum class EInputMatchAction : uint8_t
{
	IMA_GreaterThan                = 0,
	IMA_LessThan                   = 1,
	IMA_MAX                        = 2
};


// Enum Engine.PlayerController.EProgressMessageType
enum class EProgressMessageType : uint8_t
{
	PMT_Clear                      = 0,
	PMT_Information                = 1,
	PMT_AdminMessage               = 2,
	PMT_DownloadProgress           = 3,
	PMT_RedrawDownloadProgress     = 4,
	PMT_ConnectionFailure          = 5,
	PMT_MAX                        = 6
};


// Enum Engine.Camera.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5
};


// Enum Engine.DOFEffect.EFocusType
enum class EFocusType : uint8_t
{
	FOCUS_Distance                 = 0,
	FOCUS_Position                 = 1,
	FOCUS_MAX                      = 2
};


// Enum Engine.OnlineSubsystem.ELoginStatus
enum class ELoginStatus : uint8_t
{
	LS_NotLoggedIn                 = 0,
	LS_UsingLocalProfile           = 1,
	LS_LoggedIn                    = 2,
	LS_MAX                         = 3
};


// Enum Engine.OnlineSubsystem.EFeaturePrivilegeLevel
enum class EFeaturePrivilegeLevel : uint8_t
{
	FPL_Disabled                   = 0,
	FPL_EnabledFriendsOnly         = 1,
	FPL_Enabled                    = 2,
	FPL_MAX                        = 3
};


// Enum Engine.OnlineSubsystem.ENetworkNotificationPosition
enum class ENetworkNotificationPosition : uint8_t
{
	NNP_TopLeft                    = 0,
	NNP_TopCenter                  = 1,
	NNP_TopRight                   = 2,
	NNP_CenterLeft                 = 3,
	NNP_Center                     = 4,
	NNP_CenterRight                = 5,
	NNP_BottomLeft                 = 6,
	NNP_BottomCenter               = 7,
	NNP_BottomRight                = 8,
	NNP_MAX                        = 9
};


// Enum Engine.OnlineSubsystem.EOnlineGameState
enum class EOnlineGameState : uint8_t
{
	OGS_NoSession                  = 0,
	OGS_Pending                    = 1,
	OGS_InProgress                 = 2,
	OGS_Ending                     = 3,
	OGS_Ended                      = 4,
	OGS_MAX                        = 5
};


// Enum Engine.OnlineSubsystem.EOnlineEnumerationReadState
enum class EOnlineEnumerationReadState : uint8_t
{
	OERS_NotStarted                = 0,
	OERS_InProgress                = 1,
	OERS_Done                      = 2,
	OERS_Failed                    = 3,
	OERS_MAX                       = 4
};


// Enum Engine.OnlineSubsystem.PlayGroupLeaveReason
enum class EPlayGroupLeaveReason : uint8_t
{
	kPGLR_Disconnected             = 0,
	kPGLR_Kicked                   = 1,
	kPGLR_MAX                      = 2
};


// Enum Engine.OnlineSubsystem.EOnlineServerConnectionStatus
enum class EOnlineServerConnectionStatus : uint8_t
{
	OSCS_NotConnected              = 0,
	OSCS_Connected                 = 1,
	OSCS_ConnectionDropped         = 2,
	OSCS_NoNetworkConnection       = 3,
	OSCS_ServiceUnavailable        = 4,
	OSCS_UpdateRequired            = 5,
	OSCS_ServersTooBusy            = 6,
	OSCS_DuplicateLoginDetected    = 7,
	OSCS_InvalidUser               = 8,
	OSCS_MAX                       = 9
};


// Enum Engine.OnlineSubsystem.ENATType
enum class ENATType : uint8_t
{
	NAT_Unknown                    = 0,
	NAT_Open                       = 1,
	NAT_Moderate                   = 2,
	NAT_Strict                     = 3,
	NAT_MAX                        = 4
};


// Enum Engine.OnlineSubsystem.ELanBeaconState
enum class ELanBeaconState : uint8_t
{
	LANB_NotUsingLanBeacon         = 0,
	LANB_Hosting                   = 1,
	LANB_Searching                 = 2,
	LANB_MAX                       = 3
};


// Enum Engine.AmbientOcclusionEffect.EAmbientOcclusionQuality
enum class EAmbientOcclusionQuality : uint8_t
{
	AO_High                        = 0,
	AO_Medium                      = 1,
	AO_Low                         = 2,
	AO_MAX                         = 3
};


// Enum Engine.SoundNodeAttenuation.SoundDistanceModel
enum class ESoundDistanceModel : uint8_t
{
	ATTENUATION_Linear             = 0,
	ATTENUATION_Logarithmic        = 1,
	ATTENUATION_Inverse            = 2,
	ATTENUATION_LogReverse         = 3,
	ATTENUATION_NaturalSound       = 4,
	ATTENUATION_MAX                = 5
};


// Enum Engine.AnimSequence.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_MAX                        = 6
};


// Enum Engine.AnimNode.ESliderType
enum class ESliderType : uint8_t
{
	ST_1D                          = 0,
	ST_2D                          = 1,
	ST_MAX                         = 2
};


// Enum Engine.AnimNodeAimOffset.EAnimAimDir
enum class EAnimAimDir : uint8_t
{
	ANIMAIM_LEFTUP                 = 0,
	ANIMAIM_CENTERUP               = 1,
	ANIMAIM_RIGHTUP                = 2,
	ANIMAIM_LEFTCENTER             = 3,
	ANIMAIM_CENTERCENTER           = 4,
	ANIMAIM_RIGHTCENTER            = 5,
	ANIMAIM_LEFTDOWN               = 6,
	ANIMAIM_CENTERDOWN             = 7,
	ANIMAIM_RIGHTDOWN              = 8,
	ANIMAIM_MAX                    = 9
};


// Enum Engine.AnimNodeBlendByBase.EBaseBlendType
enum class EBaseBlendType : uint8_t
{
	BBT_ByActorTag                 = 0,
	BBT_ByActorClass               = 1,
	BBT_MAX                        = 2
};


// Enum Engine.AnimNodeSequence.ERootRotationOption
enum class ERootRotationOption : uint8_t
{
	RRO_Default                    = 0,
	RRO_Discard                    = 1,
	RRO_Extract                    = 2,
	RRO_MAX                        = 3
};


// Enum Engine.AnimNodeSequence.ERootBoneAxis
enum class ERootBoneAxis : uint8_t
{
	RBA_Default                    = 0,
	RBA_Discard                    = 1,
	RBA_Translate                  = 2,
	RBA_MAX                        = 3
};


// Enum Engine.AudioDevice.ESoundMode
enum class ESoundMode : uint8_t
{
	SOUNDMODE_NORMAL               = 0,
	SOUNDMODE_INGAME_CUTSCENES     = 1,
	SOUNDMODE_INGAME_VO            = 2,
	SOUNDMODE_REACTION_TIME        = 3,
	SOUNDMODE_PAUSE                = 4,
	SOUNDMODE_ALL_OFF              = 5,
	SOUNDMODE_FALLING_TO_DEATH     = 6,
	SOUNDMODE_CUSTOM_TRACK_INGAME_CUTSCENES = 7,
	SOUNDMODE_DEATH_BY_FALLING     = 8,
	SOUNDMODE_GENERIC_DEATH        = 9,
	SOUNDMODE_END_CREDIT           = 10,
	SOUNDMODE_MAX                  = 11
};


// Enum Engine.Brush.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_MAX                        = 5
};


// Enum Engine.FontImportOptions.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3
};


// Enum Engine.UIRoot.EMaterialAdjustmentType
enum class EMaterialAdjustmentType : uint8_t
{
	ADJUST_None                    = 0,
	ADJUST_Normal                  = 1,
	ADJUST_Justified               = 2,
	ADJUST_Bound                   = 3,
	ADJUST_Stretch                 = 4,
	ADJUST_MAX                     = 5
};


// Enum Engine.UIRoot.EPositionEvalType
enum class EPositionEvalType : uint8_t
{
	EVALPOS_None                   = 0,
	EVALPOS_PixelViewport          = 1,
	EVALPOS_PixelScene             = 2,
	EVALPOS_PixelOwner             = 3,
	EVALPOS_PercentageViewport     = 4,
	EVALPOS_PercentageOwner        = 5,
	EVALPOS_PercentageScene        = 6,
	EVALPOS_MAX                    = 7
};


// Enum Engine.UIRoot.EUIExtentEvalType
enum class EUIExtentEvalType : uint8_t
{
	UIEXTENTEVAL_Pixels            = 0,
	UIEXTENTEVAL_PercentSelf       = 1,
	UIEXTENTEVAL_PercentOwner      = 2,
	UIEXTENTEVAL_PercentScene      = 3,
	UIEXTENTEVAL_PercentViewport   = 4,
	UIEXTENTEVAL_MAX               = 5
};


// Enum Engine.UIRoot.EUIDockPaddingEvalType
enum class EUIDockPaddingEvalType : uint8_t
{
	UIPADDINGEVAL_Pixels           = 0,
	UIPADDINGEVAL_PercentTarget    = 1,
	UIPADDINGEVAL_PercentOwner     = 2,
	UIPADDINGEVAL_PercentScene     = 3,
	UIPADDINGEVAL_PercentViewport  = 4,
	UIPADDINGEVAL_MAX              = 5
};


// Enum Engine.UIRoot.EUIAutoSizeConstraintType
enum class EUIAutoSizeConstraintType : uint8_t
{
	UIAUTOSIZEREGION_Minimum       = 0,
	UIAUTOSIZEREGION_Maximum       = 1,
	UIAUTOSIZEREGION_MAX           = 2
};


// Enum Engine.UIRoot.ETextClipMode
enum class ETextClipMode : uint8_t
{
	CLIP_None                      = 0,
	CLIP_Normal                    = 1,
	CLIP_Ellipsis                  = 2,
	CLIP_Wrap                      = 3,
	CLIP_MAX                       = 4
};


// Enum Engine.UIRoot.ETextAutoScaleMode
enum class ETextAutoScaleMode : uint8_t
{
	UIAUTOSCALE_None               = 0,
	UIAUTOSCALE_Normal             = 1,
	UIAUTOSCALE_Justified          = 2,
	UIAUTOSCALE_ResolutionBased    = 3,
	UIAUTOSCALE_MAX                = 4
};


// Enum Engine.UIRoot.EUIAlignment
enum class EUIAlignment : uint8_t
{
	UIALIGN_Left                   = 0,
	UIALIGN_Center                 = 1,
	UIALIGN_Right                  = 2,
	UIALIGN_Default                = 3,
	UIALIGN_MAX                    = 4
};


// Enum Engine.UIRoot.EUIListElementState
enum class EUIListElementState : uint8_t
{
	ELEMENT_Normal                 = 0,
	ELEMENT_Active                 = 1,
	ELEMENT_Selected               = 2,
	ELEMENT_UnderCursor            = 3,
	ELEMENT_MAX                    = 4
};


// Enum Engine.UIRoot.EColumnHeaderState
enum class EColumnHeaderState : uint8_t
{
	COLUMNHEADER_Normal            = 0,
	COLUMNHEADER_PrimarySort       = 1,
	COLUMNHEADER_SecondarySort     = 2,
	COLUMNHEADER_MAX               = 3
};


// Enum Engine.UIRoot.EUIOrientation
enum class EUIOrientation : uint8_t
{
	UIORIENT_Horizontal            = 0,
	UIORIENT_Vertical              = 1,
	UIORIENT_MAX                   = 2
};


// Enum Engine.UIRoot.EUIWidgetFace
enum class EUIWidgetFace : uint8_t
{
	UIFACE_Left                    = 0,
	UIFACE_Top                     = 1,
	UIFACE_Right                   = 2,
	UIFACE_Bottom                  = 3,
	UIFACE_MAX                     = 4
};


// Enum Engine.UIRoot.EUIAspectRatioConstraint
enum class EUIAspectRatioConstraint : uint8_t
{
	UIASPECTRATIO_AdjustNone       = 0,
	UIASPECTRATIO_AdjustWidth      = 1,
	UIASPECTRATIO_AdjustHeight     = 2,
	UIASPECTRATIO_MAX              = 3
};


// Enum Engine.UIRoot.EUIDefaultPenColor
enum class EUIDefaultPenColor : uint8_t
{
	UIPEN_White                    = 0,
	UIPEN_Black                    = 1,
	UIPEN_Grey                     = 2,
	UIPEN_MAX                      = 3
};


// Enum Engine.UIRoot.ENavigationLinkType
enum class ENavigationLinkType : uint8_t
{
	NAVLINK_Automatic              = 0,
	NAVLINK_Manual                 = 1,
	NAVLINK_MAX                    = 2
};


// Enum Engine.UIRoot.EScreenInputMode
enum class EScreenInputMode : uint8_t
{
	INPUTMODE_None                 = 0,
	INPUTMODE_Locked               = 1,
	INPUTMODE_MatchingOnly         = 2,
	INPUTMODE_ActiveOnly           = 3,
	INPUTMODE_Free                 = 4,
	INPUTMODE_Simultaneous         = 5,
	INPUTMODE_MAX                  = 6
};


// Enum Engine.UIRoot.ESplitscreenRenderMode
enum class ESplitscreenRenderMode : uint8_t
{
	SPLITRENDER_Fullscreen         = 0,
	SPLITRENDER_PlayerOwner        = 1,
	SPLITRENDER_MAX                = 2
};


// Enum Engine.UIRoot.EUIDataProviderFieldType
enum class EUIDataProviderFieldType : uint8_t
{
	DATATYPE_Property              = 0,
	DATATYPE_Provider              = 1,
	DATATYPE_RangeProperty         = 2,
	DATATYPE_Collection            = 3,
	DATATYPE_ProviderCollection    = 4,
	DATATYPE_MAX                   = 5
};


// Enum Engine.UIRoot.ERotationAnchor
enum class ERotationAnchor : uint8_t
{
	RA_Absolute                    = 0,
	RA_Center                      = 1,
	RA_PivotLeft                   = 2,
	RA_PivotRight                  = 3,
	RA_PivotTop                    = 4,
	RA_PivotBottom                 = 5,
	RA_UpperLeft                   = 6,
	RA_UpperRight                  = 7,
	RA_LowerLeft                   = 8,
	RA_LowerRight                  = 9,
	RA_MAX                         = 10
};


// Enum Engine.ReverbVolume.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23
};


// Enum Engine.WorldInfo.ENetMode
enum class ENetMode : uint8_t
{
	NM_Standalone                  = 0,
	NM_DedicatedServer             = 1,
	NM_ListenServer                = 2,
	NM_Client                      = 3,
	NM_MAX                         = 4
};


// Enum Engine.WorldInfo.EConsoleType
enum class EConsoleType : uint8_t
{
	CONSOLE_Any                    = 0,
	CONSOLE_Xbox360                = 1,
	CONSOLE_PS3                    = 2,
	CONSOLE_MAX                    = 3
};


// Enum Engine.UIAnimation.EUIAnimType
enum class EUIAnimType : uint8_t
{
	EAT_None                       = 0,
	EAT_Position                   = 1,
	EAT_RelPosition                = 2,
	EAT_Rotation                   = 3,
	EAT_RelRotation                = 4,
	EAT_Color                      = 5,
	EAT_Opacity                    = 6,
	EAT_Visibility                 = 7,
	EAT_Scale                      = 8,
	EAT_Left                       = 9,
	EAT_Top                        = 10,
	EAT_Right                      = 11,
	EAT_Bottom                     = 12,
	EAT_MAX                        = 13
};


// Enum Engine.UIAnimation.EUIAnimNotifyType
enum class EUIAnimNotifyType : uint8_t
{
	EANT_WidgetFunction            = 0,
	EANT_SceneFunction             = 1,
	EANT_KismetEvent               = 2,
	EANT_Sound                     = 3,
	EANT_MAX                       = 4
};


// Enum Engine.UIComp_DrawComponents.EFadeType
enum class EFadeType : uint8_t
{
	EFT_None                       = 0,
	EFT_Fading                     = 1,
	EFT_Pulsing                    = 2,
	EFT_MAX                        = 3
};


// Enum Engine.UIEditBox.EEditBoxCharacterSet
enum class EEditBoxCharacterSet : uint8_t
{
	CHARSET_All                    = 0,
	CHARSET_NoSpecial              = 1,
	CHARSET_AlphaOnly              = 2,
	CHARSET_NumericOnly            = 3,
	CHARSET_AlphaNumeric           = 4,
	CHARSET_MAX                    = 5
};


// Enum Engine.CoverGroup.ECoverGroupFillAction
enum class ECoverGroupFillAction : uint8_t
{
	CGFA_Overwrite                 = 0,
	CGFA_Add                       = 1,
	CGFA_Remove                    = 2,
	CGFA_Clear                     = 3,
	CGFA_Cylinder                  = 4,
	CGFA_MAX                       = 5
};


// Enum Engine.CoverLink.ECoverAction
enum class ECoverAction : uint8_t
{
	CA_Default                     = 0,
	CA_BlindLeft                   = 1,
	CA_BlindRight                  = 2,
	CA_LeanLeft                    = 3,
	CA_LeanRight                   = 4,
	CA_StepLeft                    = 5,
	CA_StepRight                   = 6,
	CA_PopUp                       = 7,
	CA_BlindUp                     = 8,
	CA_PeekLeft                    = 9,
	CA_PeekRight                   = 10,
	CA_PeekUp                      = 11,
	CA_MAX                         = 12
};


// Enum Engine.CoverLink.ECoverDirection
enum class ECoverDirection : uint8_t
{
	CD_Default                     = 0,
	CD_Left                        = 1,
	CD_Right                       = 2,
	CD_Up                          = 3,
	CD_MAX                         = 4
};


// Enum Engine.CoverLink.ECoverType
enum class ECoverType : uint8_t
{
	CT_None                        = 0,
	CT_Standing                    = 1,
	CT_MidLevel                    = 2,
	CT_Low                         = 3,
	CT_MAX                         = 4
};


// Enum Engine.LightComponent.EShadowProjectionTechnique
enum class EShadowProjectionTechnique : uint8_t
{
	ShadowProjTech_Default         = 0,
	ShadowProjTech_PCF             = 1,
	ShadowProjTech_VSM             = 2,
	ShadowProjTech_BPCF_Low        = 3,
	ShadowProjTech_BPCF_Medium     = 4,
	ShadowProjTech_BPCF_High       = 5,
	ShadowProjTech_MAX             = 6
};


// Enum Engine.LightComponent.ELightShadowMode
enum class ELightShadowMode : uint8_t
{
	LightShadow_Normal             = 0,
	LightShadow_Modulate           = 1,
	LightShadow_ModulateBetter     = 2,
	LightShadow_MAX                = 3
};


// Enum Engine.LightComponent.EShadowFilterQuality
enum class EShadowFilterQuality : uint8_t
{
	SFQ_Low                        = 0,
	SFQ_Medium                     = 1,
	SFQ_High                       = 2,
	SFQ_MAX                        = 3
};


// Enum Engine.LightComponent.ELightAffectsClassification
enum class ELightAffectsClassification : uint8_t
{
	LAC_USER_SELECTED              = 0,
	LAC_DYNAMIC_AFFECTING          = 1,
	LAC_STATIC_AFFECTING           = 2,
	LAC_DYNAMIC_AND_STATIC_AFFECTING = 3,
	LAC_MAX                        = 4
};


// Enum Engine.SkeletalMeshComponent.EFaceFXBlendMode
enum class EFaceFXBlendMode : uint8_t
{
	FXBM_Overwrite                 = 0,
	FXBM_Additive                  = 1,
	FXBM_MAX                       = 2
};


// Enum Engine.SkeletalMeshComponent.ERootMotionRotationMode
enum class ERootMotionRotationMode : uint8_t
{
	RMRM_Ignore                    = 0,
	RMRM_RotateActor               = 1,
	RMRM_MAX                       = 2
};


// Enum Engine.SkeletalMeshComponent.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	RMM_Translate                  = 0,
	RMM_Velocity                   = 1,
	RMM_Ignore                     = 2,
	RMM_Accel                      = 3,
	RMM_MAX                        = 4
};


// Enum Engine.SkeletalMeshComponent.EFaceFXRegOp
enum class EFaceFXRegOp : uint8_t
{
	FXRO_Add                       = 0,
	FXRO_Multiply                  = 1,
	FXRO_Replace                   = 2,
	FXRO_MAX                       = 3
};


// Enum Engine.CrowdAgent.EAgentMoveState
enum class EAgentMoveState : uint8_t
{
	EAMS_Move                      = 0,
	EAMS_Idle                      = 1,
	EAMS_MAX                       = 2
};


// Enum Engine.CrowdAttractor.ECrowdAttractorMode
enum class ECrowdAttractorMode : uint8_t
{
	ECAM_MoveTarget                = 0,
	ECAM_Repulsor                  = 1,
	ECAM_MAX                       = 2
};


// Enum Engine.UIDataProvider.EProviderAccessType
enum class EProviderAccessType : uint8_t
{
	ACCESS_ReadOnly                = 0,
	ACCESS_WriteAll                = 1,
	ACCESS_MAX                     = 2
};


// Enum Engine.DecalComponent.EFilterMode
enum class EFilterMode : uint8_t
{
	FM_None                        = 0,
	FM_Ignore                      = 1,
	FM_Affect                      = 2,
	FM_MAX                         = 3
};


// Enum Engine.MaterialInterface.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_ParticleSprites       = 1,
	MATUSAGE_BeamTrails            = 2,
	MATUSAGE_ParticleSubUV         = 3,
	MATUSAGE_Foliage               = 4,
	MATUSAGE_SpeedTree             = 5,
	MATUSAGE_StaticLighting        = 6,
	MATUSAGE_GammaCorrection       = 7,
	MATUSAGE_LensFlare             = 8,
	MATUSAGE_InstancedMeshParticles = 9,
	MATUSAGE_MAX                   = 10
};


// Enum Engine.Material.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_MAX                      = 5
};


// Enum Engine.Material.EMaterialLightingModel
enum class EMaterialLightingModel : uint8_t
{
	MLM_Phong                      = 0,
	MLM_NonDirectional             = 1,
	MLM_Unlit                      = 2,
	MLM_SHPRT                      = 3,
	MLM_Custom                     = 4,
	MLM_MAX                        = 5
};


// Enum Engine.DistributionFloatParameterBase.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3
};


// Enum Engine.DoorMarker.EDoorType
enum class EDoorType : uint8_t
{
	DOOR_Shoot                     = 0,
	DOOR_Touch                     = 1,
	DOOR_MAX                       = 2
};


// Enum Engine.ParticleSystem.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2
};


// Enum Engine.ParticleSystem.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_MAX    = 2
};


// Enum Engine.ParticleSystemComponent.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_Vector                    = 2,
	PSPT_Color                     = 3,
	PSPT_Actor                     = 4,
	PSPT_Material                  = 5,
	PSPT_MAX                       = 6
};


// Enum Engine.Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	TT_None                        = 0,
	TT_Paused                      = 1,
	TT_Loading                     = 2,
	TT_Saving                      = 3,
	TT_Connecting                  = 4,
	TT_Precaching                  = 5,
	TT_MAX                         = 6
};


// Enum Engine.FileWriter.FWFileType
enum class EFWFileType : uint8_t
{
	FWFT_Log                       = 0,
	FWFT_Stats                     = 1,
	FWFT_HTML                      = 2,
	FWFT_User                      = 3,
	FWFT_Debug                     = 4,
	FWFT_MAX                       = 5
};


// Enum Engine.ForceFeedbackWaveform.EWaveformFunction
enum class EWaveformFunction : uint8_t
{
	WF_Constant                    = 0,
	WF_LinearIncreasing            = 1,
	WF_LinearDecreasing            = 2,
	WF_Sin0to90                    = 3,
	WF_Sin90to180                  = 4,
	WF_Sin0to180                   = 5,
	WF_Noise                       = 6,
	WF_MAX                         = 7
};


// Enum Engine.GameEngine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_MAX                  = 4
};


// Enum Engine.GameViewportClient.ESplitScreenType
enum class ESplitScreenType : uint8_t
{
	eSST_NONE                      = 0,
	eSST_2P_HORIZONTAL             = 1,
	eSST_2P_VERTICAL               = 2,
	eSST_3P_FAVOR_TOP              = 3,
	eSST_3P_FAVOR_BOTTOM           = 4,
	eSST_4P                        = 5,
	eSST_COUNT                     = 6,
	eSST_NOVALUE                   = 7,
	eSST_MAX                       = 8
};


// Enum Engine.GameViewportClient.ESafeZoneType
enum class ESafeZoneType : uint8_t
{
	eSZ_TOP                        = 0,
	eSZ_BOTTOM                     = 1,
	eSZ_LEFT                       = 2,
	eSZ_RIGHT                      = 3,
	eSZ_MAX                        = 4
};


// Enum Engine.InterpTrackToggle.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_MAX                       = 3
};


// Enum Engine.InterpTrackMove.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_MAX                        = 2
};


// Enum Engine.InterpTrackMove.EInterpTrackMoveFrame
enum class EInterpTrackMoveFrame : uint8_t
{
	IMF_World                      = 0,
	IMF_RelativeToInitial          = 1,
	IMF_MAX                        = 2
};


// Enum Engine.Inventory.EInventorySlot
enum class EInventorySlot : uint8_t
{
	EISlot_None                    = 0,
	EISlot_LightWeapon             = 1,
	EISlot_HeavyWeapon             = 2,
	EISlot_MAX                     = 3
};


// Enum Engine.LevelStreamingVolume.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5
};


// Enum Engine.MaterialExpressionSceneTexture.ESceneTextureType
enum class ESceneTextureType : uint8_t
{
	SceneTex_Lighting              = 0,
	SceneTex_Downsampled8          = 1,
	SceneTex_MAX                   = 2
};


// Enum Engine.MaterialExpressionTransform.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_World                = 0,
	TRANSFORM_View                 = 1,
	TRANSFORM_Local                = 2,
	TRANSFORM_MAX                  = 3
};


// Enum Engine.MaterialExpressionTransformPosition.EMaterialPositionTransform
enum class EMaterialPositionTransform : uint8_t
{
	TRANSFORMPOS_World             = 0,
	TRANSFORMPOS_MAX               = 1
};


// Enum Engine.OnlineSubsystem.EOnlineAccountCreateStatus
enum class EOnlineAccountCreateStatus : uint8_t
{
	OACS_CreateSuccessful          = 0,
	OACS_UnknownError              = 1,
	OACS_InvalidUserName           = 2,
	OACS_InvalidPassword           = 3,
	OACS_InvalidUniqueUserName     = 4,
	OACS_UniqueUserNameInUse       = 5,
	OACS_ServiceUnavailable        = 6,
	OACS_MAX                       = 7
};


// Enum Engine.Settings.EOnlineDataAdvertisementType
enum class EOnlineDataAdvertisementType : uint8_t
{
	ODAT_DontAdvertise             = 0,
	ODAT_OnlineService             = 1,
	ODAT_QoS                       = 2,
	ODAT_MAX                       = 3
};


// Enum Engine.OnlineGameSearch.EOnlineGameSearchEntryType
enum class EOnlineGameSearchEntryType : uint8_t
{
	OGSET_Property                 = 0,
	OGSET_LocalizedSetting         = 1,
	OGSET_ObjectProperty           = 2,
	OGSET_MAX                      = 3
};


// Enum Engine.OnlineGameSearch.EOnlineGameSearchComparisonType
enum class EOnlineGameSearchComparisonType : uint8_t
{
	OGSCT_Equals                   = 0,
	OGSCT_NotEquals                = 1,
	OGSCT_GreaterThan              = 2,
	OGSCT_GreaterThanEquals        = 3,
	OGSCT_LessThan                 = 4,
	OGSCT_LessThanEquals           = 5,
	OGSCT_MAX                      = 6
};


// Enum Engine.OnlineGameSearch.EOnlineGameSearchSortType
enum class EOnlineGameSearchSortType : uint8_t
{
	OGSSO_Ascending                = 0,
	OGSSO_Descending               = 1,
	OGSSO_MAX                      = 2
};


// Enum Engine.Settings.ESettingsDataType
enum class ESettingsDataType : uint8_t
{
	SDT_Empty                      = 0,
	SDT_Int32                      = 1,
	SDT_Int64                      = 2,
	SDT_Double                     = 3,
	SDT_String                     = 4,
	SDT_Float                      = 5,
	SDT_Blob                       = 6,
	SDT_DateTime                   = 7,
	SDT_MAX                        = 8
};


// Enum Engine.Settings.EPropertyValueMappingType
enum class EPropertyValueMappingType : uint8_t
{
	PVMT_RawValue                  = 0,
	PVMT_PredefinedValues          = 1,
	PVMT_Ranged                    = 2,
	PVMT_IdMapped                  = 3,
	PVMT_MAX                       = 4
};


// Enum Engine.OnlineProfileSettings.EOnlineProfilePropertyOwner
enum class EOnlineProfilePropertyOwner : uint8_t
{
	OPPO_None                      = 0,
	OPPO_OnlineService             = 1,
	OPPO_Game                      = 2,
	OPPO_MAX                       = 3
};


// Enum Engine.OnlineProfileSettings.EProfileSettingID
enum class EProfileSettingID : uint8_t
{
	PSI_Unknown                    = 0,
	PSI_ControllerVibration        = 1,
	PSI_YInversion                 = 2,
	PSI_GamerCred                  = 3,
	PSI_GamerRep                   = 4,
	PSI_VoiceMuted                 = 5,
	PSI_VoiceThruSpeakers          = 6,
	PSI_VoiceVolume                = 7,
	PSI_GamerPictureKey            = 8,
	PSI_GamerMotto                 = 9,
	PSI_GamerTitlesPlayed          = 10,
	PSI_GamerAchievementsEarned    = 11,
	PSI_GameDifficulty             = 12,
	PSI_ControllerSensitivity      = 13,
	PSI_PreferredColor1            = 14,
	PSI_PreferredColor2            = 15,
	PSI_AutoAim                    = 16,
	PSI_AutoCenter                 = 17,
	PSI_MovementControl            = 18,
	PSI_RaceTransmission           = 19,
	PSI_RaceCameraLocation         = 20,
	PSI_RaceBrakeControl           = 21,
	PSI_RaceAcceleratorControl     = 22,
	PSI_GameCredEarned             = 23,
	PSI_GameAchievementsEarned     = 24,
	PSI_EndLiveIds                 = 25,
	PSI_ProfileVersionNum          = 26,
	PSI_ProfileSaveCount           = 27,
	PSI_MAX                        = 28
};


// Enum Engine.OnlineProfileSettings.EOnlineProfileAsyncState
enum class EOnlineProfileAsyncState : uint8_t
{
	OPAS_None                      = 0,
	OPAS_Read                      = 1,
	OPAS_Write                     = 2,
	OPAS_MAX                       = 3
};


// Enum Engine.OnlineProfileSettings.EProfileDifficultyOptions
enum class EProfileDifficultyOptions : uint8_t
{
	PDO_Normal                     = 0,
	PDO_Easy                       = 1,
	PDO_Hard                       = 2,
	PDO_MAX                        = 3
};


// Enum Engine.OnlineProfileSettings.EProfileControllerSensitivityOptions
enum class EProfileControllerSensitivityOptions : uint8_t
{
	PCSO_Medium                    = 0,
	PCSO_Low                       = 1,
	PCSO_High                      = 2,
	PCSO_MAX                       = 3
};


// Enum Engine.OnlineProfileSettings.EProfilePreferredColorOptions
enum class EProfilePreferredColorOptions : uint8_t
{
	PPCO_None                      = 0,
	PPCO_Black                     = 1,
	PPCO_White                     = 2,
	PPCO_Yellow                    = 3,
	PPCO_Orange                    = 4,
	PPCO_Pink                      = 5,
	PPCO_Red                       = 6,
	PPCO_Purple                    = 7,
	PPCO_Blue                      = 8,
	PPCO_Green                     = 9,
	PPCO_Brown                     = 10,
	PPCO_Silver                    = 11,
	PPCO_MAX                       = 12
};


// Enum Engine.OnlineProfileSettings.EProfileAutoAimOptions
enum class EProfileAutoAimOptions : uint8_t
{
	PAAO_Off                       = 0,
	PAAO_On                        = 1,
	PAAO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileAutoCenterOptions
enum class EProfileAutoCenterOptions : uint8_t
{
	PACO_Off                       = 0,
	PACO_On                        = 1,
	PACO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileMovementControlOptions
enum class EProfileMovementControlOptions : uint8_t
{
	PMCO_L_Thumbstick              = 0,
	PMCO_R_Thumbstick              = 1,
	PMCO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileRaceTransmissionOptions
enum class EProfileRaceTransmissionOptions : uint8_t
{
	PRTO_Auto                      = 0,
	PRTO_Manual                    = 1,
	PRTO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileRaceCameraLocationOptions
enum class EProfileRaceCameraLocationOptions : uint8_t
{
	PRCLO_Behind                   = 0,
	PRCLO_Front                    = 1,
	PRCLO_Inside                   = 2,
	PRCLO_MAX                      = 3
};


// Enum Engine.OnlineProfileSettings.EProfileRaceBrakeControlOptions
enum class EProfileRaceBrakeControlOptions : uint8_t
{
	PRBCO_Trigger                  = 0,
	PRBCO_Button                   = 1,
	PRBCO_MAX                      = 2
};


// Enum Engine.OnlineProfileSettings.EProfileRaceAcceleratorControlOptions
enum class EProfileRaceAcceleratorControlOptions : uint8_t
{
	PRACO_Trigger                  = 0,
	PRACO_Button                   = 1,
	PRACO_MAX                      = 2
};


// Enum Engine.OnlineProfileSettings.EProfileYInversionOptions
enum class EProfileYInversionOptions : uint8_t
{
	PYIO_Off                       = 0,
	PYIO_On                        = 1,
	PYIO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileXInversionOptions
enum class EProfileXInversionOptions : uint8_t
{
	PXIO_Off                       = 0,
	PXIO_On                        = 1,
	PXIO_MAX                       = 2
};


// Enum Engine.OnlineProfileSettings.EProfileControllerVibrationToggleOptions
enum class EProfileControllerVibrationToggleOptions : uint8_t
{
	PCVTO_Off                      = 0,
	PCVTO_IgnoreThis               = 1,
	PCVTO_IgnoreThis2              = 2,
	PCVTO_On                       = 3,
	PCVTO_MAX                      = 4
};


// Enum Engine.OnlineProfileSettings.EProfileVoiceThruSpeakersOptions
enum class EProfileVoiceThruSpeakersOptions : uint8_t
{
	PVTSO_Off                      = 0,
	PVTSO_On                       = 1,
	PVTSO_Both                     = 2,
	PVTSO_MAX                      = 3
};


// Enum Engine.ParticleEmitter.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_None                       = 3,
	ERM_MAX                        = 4
};


// Enum Engine.ParticleEmitter.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5
};


// Enum Engine.ParticleEmitter.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2
};


// Enum Engine.ParticleModule.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_MAX                       = 6
};


// Enum Engine.ParticleModule.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2
};


// Enum Engine.ParticleModuleAttractorParticle.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2
};


// Enum Engine.ParticleModuleBeamBase.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5
};


// Enum Engine.ParticleModuleBeamBase.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4
};


// Enum Engine.ParticleModuleBeamModifier.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2
};


// Enum Engine.ParticleModuleCollisionBase.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6
};


// Enum Engine.ParticleModuleLocationEmitter.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2
};


// Enum Engine.ParticleModuleLocationPrimitiveCylinder.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3
};


// Enum Engine.ParticleModuleOrbit.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3
};


// Enum Engine.ParticleModuleOrientationAxisLock.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10
};


// Enum Engine.ParticleSpriteEmitter.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_Square                     = 0,
	PSA_Rectangle                  = 1,
	PSA_Velocity                   = 2,
	PSA_TypeSpecific               = 3,
	PSA_MAX                        = 4
};


// Enum Engine.ParticleModuleTrailSource.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3
};


// Enum Engine.ParticleModuleTrailSpawn.ETrail2SpawnMethod
enum class ETrail2SpawnMethod : uint8_t
{
	PET2SM_Emitter                 = 0,
	PET2SM_Velocity                = 1,
	PET2SM_Distance                = 2,
	PET2SM_MAX                     = 3
};


// Enum Engine.ParticleModuleTrailTaper.ETrailTaperMethod
enum class ETrailTaperMethod : uint8_t
{
	PETTM_None                     = 0,
	PETTM_Full                     = 1,
	PETTM_Partial                  = 2,
	PETTM_MAX                      = 3
};


// Enum Engine.ParticleModuleTypeDataBeam.EBeamMethod
enum class EBeamMethod : uint8_t
{
	PEBM_Distance                  = 0,
	PEBM_EndPoints                 = 1,
	PEBM_EndPoints_Interpolated    = 2,
	PEBM_UserSet_EndPoints         = 3,
	PEBM_UserSet_EndPoints_Interpolated = 4,
	PEBM_MAX                       = 5
};


// Enum Engine.ParticleModuleTypeDataBeam.EBeamEndPointMethod
enum class EBeamEndPointMethod : uint8_t
{
	PEBEPM_Calculated              = 0,
	PEBEPM_Distribution            = 1,
	PEBEPM_Distribution_Constant   = 2,
	PEBEPM_MAX                     = 3
};


// Enum Engine.ParticleModuleTypeDataBeam2.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3
};


// Enum Engine.ParticleModuleTypeDataBeam2.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3
};


// Enum Engine.ParticleModuleTypeDataMesh.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3
};


// Enum Engine.ParticleModuleTypeDataMeshPhysX.EPhysXMeshRotationMethod
enum class EPhysXMeshRotationMethod : uint8_t
{
	PMRM_Disabled                  = 0,
	PMRM_Spherical                 = 1,
	PMRM_Box                       = 2,
	PMRM_LongBox                   = 3,
	PMRM_FlatBox                   = 4,
	PMRM_Velocity                  = 5,
	PMRM_MAX                       = 6
};


// Enum Engine.SceneCaptureComponent.ESceneCaptureViewMode
enum class ESceneCaptureViewMode : uint8_t
{
	SceneCapView_Lit               = 0,
	SceneCapView_Unlit             = 1,
	SceneCapView_LitNoShadows      = 2,
	SceneCapView_Wire              = 3,
	SceneCapView_MAX               = 4
};


// Enum Engine.Pawn.EPathSearchType
enum class EPathSearchType : uint8_t
{
	PST_Default                    = 0,
	PST_Breadth                    = 1,
	PST_NewBestPathTo              = 2,
	PST_Constraint                 = 3,
	PST_MAX                        = 4
};


// Enum Engine.PhysXParticleSystem.ESimulationMethod
enum class ESimulationMethod : uint8_t
{
	ESM_SPH                        = 0,
	ESM_NO_PARTICLE_INTERACTION    = 1,
	ESM_MIXED_MODE                 = 2,
	ESM_MAX                        = 3
};


// Enum Engine.PhysXParticleSystem.EPacketSizeMultiplier
enum class EPacketSizeMultiplier : uint8_t
{
	EPSM                           = 0,
	EPSM01                         = 1,
	EPSM02                         = 2,
	EPSM03                         = 3,
	EPSM04                         = 4,
	EPSM05                         = 5,
	EPSM_MAX                       = 6
};


// Enum Engine.RB_BodySetup.ESleepFamily
enum class ESleepFamily : uint8_t
{
	SF_Normal                      = 0,
	SF_Sensitive                   = 1,
	SF_MAX                         = 2
};


// Enum Engine.RB_RadialForceActor.ERadialForceType
enum class ERadialForceType : uint8_t
{
	RFT_Force                      = 0,
	RFT_Impulse                    = 1,
	RFT_MAX                        = 2
};


// Enum Engine.Route.ERouteFillAction
enum class ERouteFillAction : uint8_t
{
	RFA_Overwrite                  = 0,
	RFA_Add                        = 1,
	RFA_Remove                     = 2,
	RFA_Clear                      = 3,
	RFA_MAX                        = 4
};


// Enum Engine.Route.ERouteDirection
enum class ERouteDirection : uint8_t
{
	ERD_Forward                    = 0,
	ERD_Reverse                    = 1,
	ERD_MAX                        = 2
};


// Enum Engine.Route.ERouteType
enum class ERouteType : uint8_t
{
	ERT_Linear                     = 0,
	ERT_Loop                       = 1,
	ERT_Circle                     = 2,
	ERT_MAX                        = 3
};


// Enum Engine.SeqAct_ActorFactory.EPointSelection
enum class EPointSelection : uint8_t
{
	PS_Normal                      = 0,
	PS_Random                      = 1,
	PS_Reverse                     = 2,
	PS_MAX                         = 3
};


// Enum Engine.SkelControlBase.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ActorSpace                 = 1,
	BCS_ComponentSpace             = 2,
	BCS_ParentBoneSpace            = 3,
	BCS_BoneSpace                  = 4,
	BCS_OtherBoneSpace             = 5,
	BCS_MAX                        = 6
};


// Enum Engine.SkelControlSpline.ESplineControlRotMode
enum class ESplineControlRotMode : uint8_t
{
	SCR_NoChange                   = 0,
	SCR_AlongSpline                = 1,
	SCR_Interpolate                = 2,
	SCR_MAX                        = 3
};


// Enum Engine.SkeletalMesh.ClothBoneType
enum class EClothBoneType : uint8_t
{
	CLOTHBONE_Fixed                = 0,
	CLOTHBONE_BreakableAttachment  = 1,
	CLOTHBONE_MAX                  = 2
};


// Enum Engine.SoundNodeWave.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_MAX                      = 5
};


// Enum Engine.SoundNodeWave.ETTSSpeaker
enum class ETTSSpeaker : uint8_t
{
	TTSSPEAKER_Paul                = 0,
	TTSSPEAKER_Harry               = 1,
	TTSSPEAKER_Frank               = 2,
	TTSSPEAKER_Dennis              = 3,
	TTSSPEAKER_Kit                 = 4,
	TTSSPEAKER_Betty               = 5,
	TTSSPEAKER_Ursula              = 6,
	TTSSPEAKER_Rita                = 7,
	TTSSPEAKER_Wendy               = 8,
	TTSSPEAKER_MAX                 = 9
};


// Enum Engine.SVehicleWheel.EWheelSide
enum class EWheelSide : uint8_t
{
	SIDE_None                      = 0,
	SIDE_Left                      = 1,
	SIDE_Right                     = 2,
	SIDE_MAX                       = 3
};


// Enum Engine.TerrainMaterial.ETerrainMappingType
enum class ETerrainMappingType : uint8_t
{
	TMT_Auto                       = 0,
	TMT_XY                         = 1,
	TMT_XZ                         = 2,
	TMT_YZ                         = 3,
	TMT_MAX                        = 4
};


// Enum Engine.TextureFlipBook.TextureFlipBookMethod
enum class ETextureFlipBookMethod : uint8_t
{
	TFBM_UL_ROW                    = 0,
	TFBM_UL_COL                    = 1,
	TFBM_UR_ROW                    = 2,
	TFBM_UR_COL                    = 3,
	TFBM_LL_ROW                    = 4,
	TFBM_LL_COL                    = 5,
	TFBM_LR_ROW                    = 6,
	TFBM_LR_COL                    = 7,
	TFBM_RANDOM                    = 8,
	TFBM_MAX                       = 9
};


// Enum Engine.TextureMovie.EMovieStreamSource
enum class EMovieStreamSource : uint8_t
{
	MovieStream_File               = 0,
	MovieStream_Memory             = 1,
	MovieStream_MAX                = 2
};


// Enum Engine.UIAction_GetPrivilegeLevel.EFeaturePrivilegeMode
enum class EFeaturePrivilegeMode : uint8_t
{
	FPM_Online                     = 0,
	FPM_Chat                       = 1,
	FPM_DownloadUserContent        = 2,
	FPM_PurchaseContent            = 3,
	FPM_MAX                        = 4
};


// Enum Engine.UIList.EListWrapBehavior
enum class EListWrapBehavior : uint8_t
{
	LISTWRAP_None                  = 0,
	LISTWRAP_Smooth                = 1,
	LISTWRAP_Jump                  = 2,
	LISTWRAP_MAX                   = 3
};


// Enum Engine.UIList.ECellLinkType
enum class ECellLinkType : uint8_t
{
	LINKED_None                    = 0,
	LINKED_Rows                    = 1,
	LINKED_Columns                 = 2,
	LINKED_MAX                     = 3
};


// Enum Engine.UIList.ECellAutoSizeMode
enum class ECellAutoSizeMode : uint8_t
{
	CELLAUTOSIZE_None              = 0,
	CELLAUTOSIZE_Uniform           = 1,
	CELLAUTOSIZE_Constrain         = 2,
	CELLAUTOSIZE_AdjustList        = 3,
	CELLAUTOSIZE_MAX               = 4
};


// Enum Engine.UIContextMenu.EContextMenuItemType
enum class EContextMenuItemType : uint8_t
{
	CMIT_Normal                    = 0,
	CMIT_Submenu                   = 1,
	CMIT_Separator                 = 2,
	CMIT_Check                     = 3,
	CMIT_Radio                     = 4,
	CMIT_MAX                       = 5
};


// Enum Engine.UIDataStore_OnlineStats.EStatsFetchType
enum class EStatsFetchType : uint8_t
{
	SFT_Player                     = 0,
	SFT_CenteredOnPlayer           = 1,
	SFT_Friends                    = 2,
	SFT_TopRankings                = 3,
	SFT_MAX                        = 4
};


// Enum Engine.UIFrameBox.EFrameBoxImage
enum class EFrameBoxImage : uint8_t
{
	FBI_TopLeft                    = 0,
	FBI_Top                        = 1,
	FBI_TopRight                   = 2,
	FBI_CenterLeft                 = 3,
	FBI_Center                     = 4,
	FBI_CenterRight                = 5,
	FBI_BottomLeft                 = 6,
	FBI_Bottom                     = 7,
	FBI_BottomRight                = 8,
	FBI_MAX                        = 9
};


// Enum Engine.UIScene.ESceneTransitionAnim
enum class ESceneTransitionAnim : uint8_t
{
	ANIM_All                       = 0,
	ANIM_Self                      = 1,
	ANIM_Target                    = 2,
	ANIM_None                      = 3,
	ANIM_MAX                       = 4
};


// Enum Engine.UISafeRegionPanel.ESafeRegionType
enum class ESafeRegionType : uint8_t
{
	ESRT_FullRegion                = 0,
	ESRT_TextSafeRegion            = 1,
	ESRT_MAX                       = 2
};


// Enum Engine.UITabControl.EUITabAutosizeType
enum class EUITabAutosizeType : uint8_t
{
	TAST_Manual                    = 0,
	TAST_Fill                      = 1,
	TAST_Auto                      = 2,
	TAST_MAX                       = 3
};


// Enum Engine.Weapon.EWeaponFireType
enum class EWeaponFireType : uint8_t
{
	EWFT_InstantHit                = 0,
	EWFT_Projectile                = 1,
	EWFT_Custom                    = 2,
	EWFT_None                      = 3,
	EWFT_MAX                       = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.AnimNode.BoneAtom
// 0x0020
struct FBoneAtom
{
	struct FQuat                                       Rotation;                                                 // 0x0000(0x0010)
	struct FVector                                     Translation;                                              // 0x0010(0x000C)
	float                                              Scale;                                                    // 0x001C(0x0004)
};

// ScriptStruct Engine.Actor.RigidBodyContactInfo
// 0x003C
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                          // 0x0000(0x000C)
	struct FVector                                     ContactNormal;                                            // 0x000C(0x000C)
	float                                              ContactPenetration;                                       // 0x0018(0x0004)
	struct FVector                                     ContactVelocity[0x2];                                     // 0x001C(0x000C)
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                        // 0x0034(0x0004)
};

// ScriptStruct Engine.Actor.CollisionImpactData
// 0x0024
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                             // 0x0000(0x000C) (NeedCtorLink)
	struct FVector                                     TotalNormalForceVector;                                   // 0x000C(0x000C)
	struct FVector                                     TotalFrictionForceVector;                                 // 0x0018(0x000C)
};

// ScriptStruct Engine.Actor.AnimSlotInfo
// 0x0014
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (AlwaysInit)
	TArray<float>                                      ChannelWeights;                                           // 0x0008(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct Engine.Actor.TraceHitInfo
// 0x001C
struct FTraceHitInfo
{
	class UMaterial*                                   Material;                                                 // 0x0000(0x0004) (AlwaysInit)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0004(0x0004) (AlwaysInit)
	int                                                Item;                                                     // 0x0008(0x0004) (AlwaysInit)
	int                                                LevelIndex;                                               // 0x000C(0x0004) (AlwaysInit)
	struct FName                                       BoneName;                                                 // 0x0010(0x0008) (AlwaysInit)
	class UPrimitiveComponent*                         HitComponent;                                             // 0x0018(0x0004) (ExportObject, Component, AlwaysInit, EditInline)
};

// ScriptStruct Engine.Actor.TimerData
// 0x0018
struct FTimerData
{
	unsigned long                                      bLoop : 1;                                                // 0x0000(0x0004)
	struct FName                                       FuncName;                                                 // 0x0004(0x0008)
	float                                              Rate;                                                     // 0x000C(0x0004)
	float                                              Count;                                                    // 0x0010(0x0004)
	class UObject*                                     TimerObj;                                                 // 0x0014(0x0004)
};

// ScriptStruct Engine.NavigationPoint.NavigationOctreeObject
// 0x0031
struct FNavigationOctreeObject
{
	struct FBox                                        BoundingBox;                                              // 0x0000(0x001C)
	struct FVector                                     BoxCenter;                                                // 0x001C(0x000C)
	struct FPointer                                    OctreeNode;                                               // 0x0028(0x0004) (Const, Native, Transient)
	class UObject*                                     Owner;                                                    // 0x002C(0x0004) (Const, NoExport)
	unsigned char                                      OwnerType;                                                // 0x0030(0x0001) (Const, NoExport)
};

// ScriptStruct Engine.Actor.NavReference
// 0x0014
struct FNavReference
{
	class ANavigationPoint*                            Nav;                                                      // 0x0000(0x0004) (Edit)
	struct FGuid                                       Guid;                                                     // 0x0004(0x0010) (Edit, Const, EditConst)
};

// ScriptStruct Engine.CoverLink.CoverReference
// 0x0008 (0x001C - 0x0014)
struct FCoverReference : public FNavReference
{
	int                                                SlotIdx;                                                  // 0x0014(0x0004) (Edit)
	int                                                Direction;                                                // 0x0018(0x0004) (Edit)
};

// ScriptStruct Engine.CoverLink.FireLinkItem
// 0x0004
struct FFireLinkItem
{
	TEnumAsByte<ECoverType>                            SrcType;                                                  // 0x0000(0x0001)
	TEnumAsByte<ECoverAction>                          SrcAction;                                                // 0x0001(0x0001)
	TEnumAsByte<ECoverType>                            DestType;                                                 // 0x0002(0x0001)
	TEnumAsByte<ECoverAction>                          DestAction;                                               // 0x0003(0x0001)
};

// ScriptStruct Engine.CoverLink.FireLink
// 0x0030
struct FFireLink
{
	struct FNavReference                               TargetMarker;                                             // 0x0000(0x0014) (Edit, Const, EditConst)
	TArray<struct FFireLinkItem>                       Items;                                                    // 0x0014(0x000C) (NeedCtorLink)
	struct FVector                                     LastMarkerLocation;                                       // 0x0020(0x000C)
	unsigned long                                      bFallbackLink : 1;                                        // 0x002C(0x0004)
};

// ScriptStruct Engine.CoverLink.ExposedLink
// 0x0018
struct FExposedLink
{
	struct FNavReference                               TargetMarker;                                             // 0x0000(0x0014) (Edit, Const, EditConst)
	float                                              ExposedScale;                                             // 0x0014(0x0004) (Edit)
};

// ScriptStruct Engine.CoverLink.DangerLink
// 0x0018
struct FDangerLink
{
	struct FNavReference                               DangerNav;                                                // 0x0000(0x0014) (Edit, Const, EditConst)
	int                                                DangerCost;                                               // 0x0014(0x0004) (Edit)
};

// ScriptStruct Engine.CoverLink.CoverSlot
// 0x00D8
struct FCoverSlot
{
	class AController*                                 SlotOwner;                                                // 0x0000(0x0004)
	TEnumAsByte<ECoverType>                            ForceCoverType;                                           // 0x0004(0x0001) (Edit)
	TEnumAsByte<ECoverType>                            CoverType;                                                // 0x0005(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FVector                                     LocationOffset;                                           // 0x0008(0x000C)
	struct FVector                                     FireLeftPos;                                              // 0x0014(0x000C)
	struct FVector                                     FireRightPos;                                             // 0x0020(0x000C)
	struct FRotator                                    RotationOffset;                                           // 0x002C(0x000C)
	TArray<TEnumAsByte<ECoverAction>>                  Actions;                                                  // 0x0038(0x000C) (DuplicateTransient, NeedCtorLink)
	TArray<struct FFireLink>                           FireLinks;                                                // 0x0044(0x000C) (DuplicateTransient, NeedCtorLink)
	TArray<struct FFireLink>                           ForcedFireLinks;                                          // 0x0050(0x000C) (DuplicateTransient, NeedCtorLink)
	TArray<struct FCoverInfo>                          RejectedFireLinks;                                        // 0x005C(0x000C) (DuplicateTransient, NeedCtorLink)
	TArray<struct FExposedLink>                        ExposedFireLinks;                                         // 0x0068(0x000C) (DuplicateTransient, NeedCtorLink)
	TArray<struct FDangerLink>                         DangerLinks;                                              // 0x0074(0x000C) (DuplicateTransient, NeedCtorLink)
	struct FCoverReference                             MantleTarget;                                             // 0x0080(0x001C) (DuplicateTransient)
	TArray<struct FCoverReference>                     TurnTarget;                                               // 0x009C(0x000C) (DuplicateTransient, NeedCtorLink)
	TArray<struct FCoverReference>                     SlipTarget;                                               // 0x00A8(0x000C) (DuplicateTransient, NeedCtorLink)
	TArray<struct FCoverReference>                     OverlapClaims;                                            // 0x00B4(0x000C) (Edit, EditConst, DuplicateTransient, NeedCtorLink)
	unsigned long                                      bLeanLeft : 1;                                            // 0x00C0(0x0004) (Edit)
	unsigned long                                      bLeanRight : 1;                                           // 0x00C0(0x0004) (Edit)
	unsigned long                                      bCanPopUp : 1;                                            // 0x00C0(0x0004) (Edit)
	float                                              FireLeftOffset;                                           // 0x00C4(0x0004) (Edit)
	float                                              FireRightOffset;                                          // 0x00C8(0x0004) (Edit)
	unsigned long                                      bCanMantle : 1;                                           // 0x00CC(0x0004) (EditConst)
	unsigned long                                      bCanClimbUp : 1;                                          // 0x00CC(0x0004) (EditConst)
	unsigned long                                      bCanCoverSlip_Left : 1;                                   // 0x00CC(0x0004) (EditConst)
	unsigned long                                      bCanCoverSlip_Right : 1;                                  // 0x00CC(0x0004) (EditConst)
	unsigned long                                      bCanSwatTurn_Left : 1;                                    // 0x00CC(0x0004) (EditConst)
	unsigned long                                      bCanSwatTurn_Right : 1;                                   // 0x00CC(0x0004) (EditConst)
	unsigned long                                      bEnabled : 1;                                             // 0x00CC(0x0004) (Edit)
	unsigned long                                      bAllowPopup : 1;                                          // 0x00CC(0x0004) (Edit)
	unsigned long                                      bAllowMantle : 1;                                         // 0x00CC(0x0004)
	unsigned long                                      bAllowCoverSlip : 1;                                      // 0x00CC(0x0004)
	unsigned long                                      bAllowClimbUp : 1;                                        // 0x00CC(0x0004)
	unsigned long                                      bAllowSwatTurn : 1;                                       // 0x00CC(0x0004)
	unsigned long                                      bSelected : 1;                                            // 0x00CC(0x0004) (Transient)
	float                                              LeanTraceDist;                                            // 0x00D0(0x0004)
	class ACoverSlotMarker*                            SlotMarker;                                               // 0x00D4(0x0004) (Edit, EditConst, DuplicateTransient)
};

// ScriptStruct Engine.CoverLink.CoverRange
// 0x0008
struct FCoverRange
{
	int                                                Low;                                                      // 0x0000(0x0004)
	int                                                High;                                                     // 0x0004(0x0004)
};

// ScriptStruct Engine.CoverLink.CoverInfo
// 0x0008
struct FCoverInfo
{
	class ACoverLink*                                  Link;                                                     // 0x0000(0x0004) (Edit, EditConst)
	int                                                SlotIdx;                                                  // 0x0004(0x0004) (Edit, EditConst)
};

// ScriptStruct Engine.Engine.DropNoteInfo
// 0x0024
struct FDropNoteInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
	struct FString                                     Comment;                                                  // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.URL
// 0x0044
struct FURL
{
	struct FString                                     Protocol;                                                 // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Host;                                                     // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                Port;                                                     // 0x0018(0x0004) (AlwaysInit)
	struct FString                                     Map;                                                      // 0x001C(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             Op;                                                       // 0x0028(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Portal;                                                   // 0x0034(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                Valid;                                                    // 0x0040(0x0004) (AlwaysInit)
};

// ScriptStruct Engine.GameEngine.LevelStreamingStatus
// 0x000C
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008)
	unsigned long                                      bShouldBeLoaded : 1;                                      // 0x0008(0x0004)
	unsigned long                                      bShouldBeVisible : 1;                                     // 0x0008(0x0004)
};

// ScriptStruct Engine.GameEngine.FullyLoadedPackagesInfo
// 0x0028
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<EFullyLoadPackageType>                 FullyLoadType;                                            // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     Tag;                                                      // 0x0004(0x000C) (NeedCtorLink)
	TArray<struct FName>                               PackagesToLoad;                                           // 0x0010(0x000C) (NeedCtorLink)
	TArray<class UObject*>                             LoadedObjects;                                            // 0x001C(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.Camera.ViewTargetTransitionParams
// 0x000C
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                                // 0x0000(0x0004) (Edit)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              BlendExp;                                                 // 0x0008(0x0004) (Edit)
};

// ScriptStruct Engine.Camera.TViewTarget
// 0x002C
struct FTViewTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0004) (Edit)
	class AController*                                 Controller;                                               // 0x0004(0x0004) (Edit)
	struct FTPOV                                       POV;                                                      // 0x0008(0x001C) (Edit)
	float                                              AspectRatio;                                              // 0x0024(0x0004) (Edit)
	class APlayerReplicationInfo*                      PRI;                                                      // 0x0028(0x0004) (Edit)
};

// ScriptStruct Engine.Brush.GeomSelection
// 0x0010
struct FGeomSelection
{
	int                                                Type;                                                     // 0x0000(0x0004)
	int                                                Index;                                                    // 0x0004(0x0004)
	int                                                SelectionIndex;                                           // 0x0008(0x0004)
	float                                              SelStrength;                                              // 0x000C(0x0004)
};

// ScriptStruct Engine.PostProcessVolume.CurveInfo
// 0x01B0
struct FCurveInfo
{
	struct FVector                                     Ms[0x10];                                                 // 0x0000(0x000C) (Edit, EditInline)
	struct FVector                                     Bs[0x10];                                                 // 0x00C0(0x000C) (Edit, EditInline)
	TArray<struct FVector2D>                           ControlPointsR;                                           // 0x0180(0x000C) (NeedCtorLink)
	TArray<struct FVector2D>                           ControlPointsG;                                           // 0x018C(0x000C) (NeedCtorLink)
	TArray<struct FVector2D>                           ControlPointsB;                                           // 0x0198(0x000C) (NeedCtorLink)
	TArray<struct FVector2D>                           ControlPointsA;                                           // 0x01A4(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.PostProcessVolume.TdPostProcessModifier
// 0x025C
struct FTdPostProcessModifier
{
	float                                              Bloom_Scale;                                              // 0x0000(0x0004) (Edit)
	float                                              DOF_FalloffExponent;                                      // 0x0004(0x0004) (Edit)
	float                                              DOF_BlurKernelSize;                                       // 0x0008(0x0004) (Edit)
	float                                              DOF_MaxNearBlurAmount;                                    // 0x000C(0x0004) (Edit)
	float                                              DOF_MaxFarBlurAmount;                                     // 0x0010(0x0004) (Edit)
	float                                              DOF_FocusInnerRadius;                                     // 0x0014(0x0004) (Edit)
	float                                              DOF_FocusDistance;                                        // 0x0018(0x0004) (Edit)
	float                                              DOF_AutofocusMaxDistance;                                 // 0x001C(0x0004) (Edit)
	float                                              DOF_AutofocusSpeed;                                       // 0x0020(0x0004) (Edit)
	float                                              MotionBlur_MaxVelocity;                                   // 0x0024(0x0004) (Edit)
	float                                              MotionBlur_Amount;                                        // 0x0028(0x0004) (Edit)
	float                                              MotionBlur_CameraRotationThreshold;                       // 0x002C(0x0004) (Edit)
	float                                              MotionBlur_CameraTranslationThreshold;                    // 0x0030(0x0004) (Edit)
	float                                              Scene_Desaturation;                                       // 0x0034(0x0004) (Edit)
	struct FVector                                     Scene_HighLights;                                         // 0x0038(0x000C) (Edit)
	struct FVector                                     Scene_MidTones;                                           // 0x0044(0x000C) (Edit)
	struct FVector                                     Scene_Shadows;                                            // 0x0050(0x000C) (Edit)
	struct FVector                                     HazeColor;                                                // 0x005C(0x000C) (Edit)
	float                                              HazeAngleCurve;                                           // 0x0068(0x0004) (Edit)
	float                                              HazeAngleStart;                                           // 0x006C(0x0004) (Edit)
	float                                              HazeDistanceCurve;                                        // 0x0070(0x0004) (Edit)
	float                                              HazeDistanceDivider;                                      // 0x0074(0x0004) (Edit)
	float                                              HazeAngleClampHigh;                                       // 0x0078(0x0004) (Edit)
	float                                              HazeTotalClampCloseHigh;                                  // 0x007C(0x0004) (Edit)
	float                                              HazeTotalClampFarHigh;                                    // 0x0080(0x0004) (Edit)
	float                                              HazeTotalClampFarDistance;                                // 0x0084(0x0004) (Edit)
	float                                              HazeMultiplier;                                           // 0x0088(0x0004) (Edit)
	float                                              HazeTotalClampLow;                                        // 0x008C(0x0004) (Edit)
	float                                              Scene_ExposureManual;                                     // 0x0090(0x0004) (Edit)
	float                                              Scene_ExposureSpeedUp;                                    // 0x0094(0x0004) (Edit)
	float                                              Scene_ExposureSpeedDown;                                  // 0x0098(0x0004) (Edit)
	float                                              Scene_ExposureHigh;                                       // 0x009C(0x0004) (Edit)
	float                                              Scene_ExposureLow;                                        // 0x00A0(0x0004) (Edit)
	float                                              TdMotionBlurAmount;                                       // 0x00A4(0x0004) (Edit)
	float                                              TdMotionBlurStartPlayerSpeed;                             // 0x00A8(0x0004) (Edit)
	struct FCurveInfo                                  Curves;                                                   // 0x00AC(0x01B0) (Edit, NeedCtorLink, EditInline)
};

// ScriptStruct Engine.PostProcessVolume.PostProcessSettings
// 0x02BC
struct FPostProcessSettings
{
	unsigned long                                      bEnableBloom : 1;                                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bEnableDOF : 1;                                           // 0x0000(0x0004) (Edit)
	unsigned long                                      bEnableMotionBlur : 1;                                    // 0x0000(0x0004) (Edit)
	unsigned long                                      bEnableSceneEffect : 1;                                   // 0x0000(0x0004) (Edit)
	float                                              Bloom_Scale;                                              // 0x0004(0x0004) (Edit)
	float                                              Bloom_InterpolationDuration;                              // 0x0008(0x0004) (Edit)
	float                                              DOF_FalloffExponent;                                      // 0x000C(0x0004) (Edit)
	float                                              DOF_BlurKernelSize;                                       // 0x0010(0x0004) (Edit)
	float                                              DOF_MaxNearBlurAmount;                                    // 0x0014(0x0004) (Edit)
	float                                              DOF_MaxFarBlurAmount;                                     // 0x0018(0x0004) (Edit)
	struct FColor                                      DOF_ModulateBlurColor;                                    // 0x001C(0x0004) (Edit)
	TEnumAsByte<EFocusType>                            DOF_FocusType;                                            // 0x0020(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              DOF_FocusInnerRadius;                                     // 0x0024(0x0004) (Edit)
	float                                              DOF_FocusDistance;                                        // 0x0028(0x0004) (Edit)
	struct FVector                                     DOF_FocusPosition;                                        // 0x002C(0x000C) (Edit)
	float                                              DOF_InterpolationDuration;                                // 0x0038(0x0004) (Edit)
	unsigned long                                      DOF_Autofocus : 1;                                        // 0x003C(0x0004) (Edit)
	float                                              DOF_AutofocusMaxDistance;                                 // 0x0040(0x0004) (Edit)
	float                                              DOF_AutofocusSpeed;                                       // 0x0044(0x0004) (Edit)
	float                                              MotionBlur_MaxVelocity;                                   // 0x0048(0x0004) (Edit)
	float                                              MotionBlur_Amount;                                        // 0x004C(0x0004) (Edit)
	unsigned long                                      MotionBlur_FullMotionBlur : 1;                            // 0x0050(0x0004) (Edit)
	float                                              MotionBlur_CameraRotationThreshold;                       // 0x0054(0x0004) (Edit)
	float                                              MotionBlur_CameraTranslationThreshold;                    // 0x0058(0x0004) (Edit)
	float                                              MotionBlur_InterpolationDuration;                         // 0x005C(0x0004) (Edit)
	float                                              Scene_Desaturation;                                       // 0x0060(0x0004) (Edit)
	struct FVector                                     Scene_HighLights;                                         // 0x0064(0x000C) (Edit)
	struct FVector                                     Scene_MidTones;                                           // 0x0070(0x000C) (Edit)
	struct FVector                                     Scene_Shadows;                                            // 0x007C(0x000C) (Edit)
	float                                              Scene_InterpolationDuration;                              // 0x0088(0x0004) (Edit)
	struct FVector                                     HazeColor;                                                // 0x008C(0x000C) (Edit)
	float                                              HazeAngleCurve;                                           // 0x0098(0x0004) (Edit)
	float                                              HazeAngleStart;                                           // 0x009C(0x0004) (Edit)
	float                                              HazeDistanceCurve;                                        // 0x00A0(0x0004) (Edit)
	float                                              HazeDistanceDivider;                                      // 0x00A4(0x0004) (Edit)
	float                                              HazeAngleClampHigh;                                       // 0x00A8(0x0004) (Edit)
	float                                              HazeTotalClampCloseHigh;                                  // 0x00AC(0x0004) (Edit)
	float                                              HazeTotalClampFarHigh;                                    // 0x00B0(0x0004) (Edit)
	float                                              HazeTotalClampFarDistance;                                // 0x00B4(0x0004) (Edit)
	float                                              HazeMultiplier;                                           // 0x00B8(0x0004) (Edit)
	float                                              HazeTotalClampLow;                                        // 0x00BC(0x0004) (Edit)
	unsigned long                                      HazeEnabled : 1;                                          // 0x00C0(0x0004) (Edit)
	struct FVector                                     HazeSunLocation;                                          // 0x00C4(0x000C) (Edit)
	float                                              Scene_ExposureManual;                                     // 0x00D0(0x0004) (Edit)
	float                                              Scene_ExposureSpeedUp;                                    // 0x00D4(0x0004) (Edit)
	float                                              Scene_ExposureSpeedDown;                                  // 0x00D8(0x0004) (Edit)
	float                                              Scene_ExposureHigh;                                       // 0x00DC(0x0004) (Edit)
	float                                              Scene_ExposureLow;                                        // 0x00E0(0x0004) (Edit)
	unsigned long                                      Scene_ExposureReset : 1;                                  // 0x00E4(0x0004)
	float                                              TdMotionBlurAmount;                                       // 0x00E8(0x0004) (Edit)
	float                                              TdMotionBlurStartPlayerSpeed;                             // 0x00EC(0x0004) (Edit)
	unsigned long                                      TdMotionBlurEnabled : 1;                                  // 0x00F0(0x0004) (Edit)
	unsigned long                                      TdMotionBlurUseDistance : 1;                              // 0x00F0(0x0004) (Edit)
	unsigned long                                      TdMotionBlurUseDirection : 1;                             // 0x00F0(0x0004) (Edit)
	unsigned long                                      TdMotionBlurForce : 1;                                    // 0x00F0(0x0004) (Edit)
	struct FVector                                     TdMotionBlurForcedDirection;                              // 0x00F4(0x000C) (Edit)
	float                                              TdMotionBlurForcedAmount;                                 // 0x0100(0x0004) (Edit)
	class UTexture2D*                                  TdMotionBlurMask;                                         // 0x0104(0x0004) (Edit)
	class UTexture2D*                                  SaturationMask;                                           // 0x0108(0x0004) (Edit)
	struct FCurveInfo                                  Curves;                                                   // 0x010C(0x01B0) (Edit, NeedCtorLink, EditInline)
};

// ScriptStruct Engine.Camera.TCameraCache
// 0x0020
struct FTCameraCache
{
	float                                              TimeStamp;                                                // 0x0000(0x0004)
	struct FTPOV                                       POV;                                                      // 0x0004(0x001C)
};

// ScriptStruct Engine.LightComponent.LightingChannelContainer
// 0x0004
struct FLightingChannelContainer
{
	unsigned long                                      bInitialized : 1;                                         // 0x0000(0x0004)
	unsigned long                                      BSP : 1;                                                  // 0x0000(0x0004) (Edit)
	unsigned long                                      Static : 1;                                               // 0x0000(0x0004) (Edit)
	unsigned long                                      Dynamic : 1;                                              // 0x0000(0x0004) (Edit)
	unsigned long                                      CompositeDynamic : 1;                                     // 0x0000(0x0004) (Edit)
	unsigned long                                      Skybox : 1;                                               // 0x0000(0x0004) (Edit)
	unsigned long                                      Unnamed_2 : 1;                                            // 0x0000(0x0004) (Edit)
	unsigned long                                      Unnamed_3 : 1;                                            // 0x0000(0x0004) (Edit)
	unsigned long                                      Unnamed_4 : 1;                                            // 0x0000(0x0004) (Edit)
	unsigned long                                      Unnamed_5 : 1;                                            // 0x0000(0x0004) (Edit)
	unsigned long                                      Unnamed_6 : 1;                                            // 0x0000(0x0004) (Edit)
	unsigned long                                      Unnamed_7 : 1;                                            // 0x0000(0x0004) (Edit)
	unsigned long                                      Cinematic_2 : 1;                                          // 0x0000(0x0004) (Edit)
	unsigned long                                      Cinematic_3 : 1;                                          // 0x0000(0x0004) (Edit)
	unsigned long                                      Cinematic_4 : 1;                                          // 0x0000(0x0004) (Edit)
	unsigned long                                      Cinematic_5 : 1;                                          // 0x0000(0x0004) (Edit)
	unsigned long                                      Cinematic_6 : 1;                                          // 0x0000(0x0004) (Edit)
	unsigned long                                      Cinematic_7 : 1;                                          // 0x0000(0x0004) (Edit)
	unsigned long                                      Gameplay_2 : 1;                                           // 0x0000(0x0004) (Edit)
	unsigned long                                      Gameplay_3 : 1;                                           // 0x0000(0x0004) (Edit)
	unsigned long                                      Gameplay_4 : 1;                                           // 0x0000(0x0004) (Edit)
	unsigned long                                      Gameplay_5 : 1;                                           // 0x0000(0x0004) (Edit)
};

// ScriptStruct Engine.PrimitiveComponent.RBCollisionChannelContainer
// 0x0004
struct FRBCollisionChannelContainer
{
	unsigned long                                      Default : 1;                                              // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      Nothing : 1;                                              // 0x0000(0x0004) (Const)
	unsigned long                                      Pawn : 1;                                                 // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      Vehicle : 1;                                              // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      Water : 1;                                                // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      GameplayPhysics : 1;                                      // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      EffectPhysics : 1;                                        // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      Untitled1 : 1;                                            // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      Untitled2 : 1;                                            // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      Untitled3 : 1;                                            // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      Untitled4 : 1;                                            // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      Cloth : 1;                                                // 0x0000(0x0004) (Edit, Const)
	unsigned long                                      FluidDrain : 1;                                           // 0x0000(0x0004) (Edit, Const)
};

// ScriptStruct Engine.AudioComponent.AudioComponentParam
// 0x0010
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit)
	float                                              FloatParam;                                               // 0x0008(0x0004) (Edit)
	class USoundNodeWave*                              WaveParam;                                                // 0x000C(0x0004) (Edit)
};

// ScriptStruct Engine.KMeshProps.KSphereElem
// 0x0048
struct FKSphereElem
{
	struct FMatrix                                     TM;                                                       // 0x0000(0x0040) (Edit, EditConst)
	float                                              Radius;                                                   // 0x0040(0x0004) (Edit, EditConst)
	unsigned long                                      bNoRBCollision : 1;                                       // 0x0044(0x0004) (Edit)
	unsigned long                                      bPerPolyShape : 1;                                        // 0x0044(0x0004) (Edit)
};

// ScriptStruct Engine.KMeshProps.KBoxElem
// 0x0050
struct FKBoxElem
{
	struct FMatrix                                     TM;                                                       // 0x0000(0x0040) (Edit, EditConst)
	float                                              X;                                                        // 0x0040(0x0004) (Edit, EditConst)
	float                                              Y;                                                        // 0x0044(0x0004) (Edit, EditConst)
	float                                              Z;                                                        // 0x0048(0x0004) (Edit, EditConst)
	unsigned long                                      bNoRBCollision : 1;                                       // 0x004C(0x0004) (Edit)
	unsigned long                                      bPerPolyShape : 1;                                        // 0x004C(0x0004) (Edit)
};

// ScriptStruct Engine.KMeshProps.KSphylElem
// 0x004C
struct FKSphylElem
{
	struct FMatrix                                     TM;                                                       // 0x0000(0x0040) (Edit, EditConst)
	float                                              Radius;                                                   // 0x0040(0x0004) (Edit, EditConst)
	float                                              Length;                                                   // 0x0044(0x0004) (Edit, EditConst)
	unsigned long                                      bNoRBCollision : 1;                                       // 0x0048(0x0004) (Edit)
	unsigned long                                      bPerPolyShape : 1;                                        // 0x0048(0x0004) (Edit)
};

// ScriptStruct Engine.KMeshProps.KConvexElem
// 0x0064
struct FKConvexElem
{
	TArray<struct FVector>                             VertexData;                                               // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FPlane>                              PermutedVertexData;                                       // 0x000C(0x000C) (NeedCtorLink)
	TArray<int>                                        FaceTriData;                                              // 0x0018(0x000C) (NeedCtorLink)
	TArray<struct FVector>                             EdgeDirections;                                           // 0x0024(0x000C) (NeedCtorLink)
	TArray<struct FVector>                             FaceNormalDirections;                                     // 0x0030(0x000C) (NeedCtorLink)
	TArray<struct FPlane>                              FacePlaneData;                                            // 0x003C(0x000C) (NeedCtorLink)
	struct FBox                                        ElemBox;                                                  // 0x0048(0x001C)
};

// ScriptStruct Engine.KMeshProps.KAggregateGeom
// 0x0034
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                              // 0x0000(0x000C) (Edit, EditFixedSize, NeedCtorLink)
	TArray<struct FKBoxElem>                           BoxElems;                                                 // 0x000C(0x000C) (Edit, EditFixedSize, NeedCtorLink)
	TArray<struct FKSphylElem>                         SphylElems;                                               // 0x0018(0x000C) (Edit, EditFixedSize, NeedCtorLink)
	TArray<struct FKConvexElem>                        ConvexElems;                                              // 0x0024(0x000C) (Edit, EditFixedSize, NeedCtorLink)
	struct FPointer                                    RenderInfo;                                               // 0x0030(0x0004) (Native, NoImport)
};

// ScriptStruct Engine.BrushComponent.KCachedConvexData_Mirror
// 0x000C
struct FKCachedConvexData_Mirror
{
	TArray<int>                                        CachedConvexElements;                                     // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.Canvas.CanvasIcon
// 0x0014
struct FCanvasIcon
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0004)
	float                                              U;                                                        // 0x0004(0x0004)
	float                                              V;                                                        // 0x0008(0x0004)
	float                                              UL;                                                       // 0x000C(0x0004)
	float                                              VL;                                                       // 0x0010(0x0004)
};

// ScriptStruct Engine.Controller.VisiblePortalInfo
// 0x0008
struct FVisiblePortalInfo
{
	class AActor*                                      Source;                                                   // 0x0000(0x0004)
	class AActor*                                      Destination;                                              // 0x0004(0x0004)
};

// ScriptStruct Engine.MusicTrackDataStructures.MusicTrackParamStruct
// 0x0014
struct FMusicTrackParamStruct
{
	float                                              FadeInTime;                                               // 0x0000(0x0004) (Edit)
	float                                              FadeInVolumeLevel;                                        // 0x0004(0x0004) (Edit)
	float                                              DelayBetweenOldAndNewTrack;                               // 0x0008(0x0004) (Edit)
	float                                              FadeOutTime;                                              // 0x000C(0x0004) (Edit)
	float                                              FadeOutVolumeLevel;                                       // 0x0010(0x0004) (Edit)
};

// ScriptStruct Engine.MusicTrackDataStructures.MusicTrackStruct
// 0x0024
struct FMusicTrackStruct
{
	struct FMusicTrackParamStruct                      Params;                                                   // 0x0000(0x0014) (Edit)
	struct FName                                       TrackType;                                                // 0x0014(0x0008) (Edit)
	class USoundCue*                                   TheSoundCue;                                              // 0x001C(0x0004) (Edit)
	unsigned long                                      bAutoPlay : 1;                                            // 0x0020(0x0004) (Edit)
};

// ScriptStruct Engine.OnlineSubsystem.UniqueNetId
// 0x0008
struct FUniqueNetId
{
	unsigned char                                      Uid[0x8];                                                 // 0x0000(0x0001)
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerScore
// 0x0010
struct FOnlinePlayerScore
{
	struct FUniqueNetId                                PlayerId;                                                 // 0x0000(0x0008)
	int                                                TeamId;                                                   // 0x0008(0x0004)
	int                                                Score;                                                    // 0x000C(0x0004)
};

// ScriptStruct Engine.PlayerController.ClientAdjustment
// 0x0031
struct FClientAdjustment
{
	float                                              TimeStamp;                                                // 0x0000(0x0004)
	TEnumAsByte<EPhysics>                              newPhysics;                                               // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FVector                                     NewLoc;                                                   // 0x0008(0x000C)
	struct FVector                                     NewVel;                                                   // 0x0014(0x000C)
	class AActor*                                      NewBase;                                                  // 0x0020(0x0004)
	struct FVector                                     NewFloor;                                                 // 0x0024(0x000C)
	unsigned char                                      bAckGoodMove;                                             // 0x0030(0x0001)
};

// ScriptStruct Engine.PlayerController.InputEntry
// 0x000D
struct FInputEntry
{
	TEnumAsByte<EInputTypes>                           Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004)
	float                                              TimeDelta;                                                // 0x0008(0x0004)
	TEnumAsByte<EInputMatchAction>                     Action;                                                   // 0x000C(0x0001)
};

// ScriptStruct Engine.PlayerController.InputMatchRequest
// 0x0030
struct FInputMatchRequest
{
	TArray<struct FInputEntry>                         Inputs;                                                   // 0x0000(0x000C) (NeedCtorLink)
	class AActor*                                      MatchActor;                                               // 0x000C(0x0004)
	struct FName                                       MatchFuncName;                                            // 0x0010(0x0008)
	struct FName                                       FailedFuncName;                                           // 0x0018(0x0008)
	struct FName                                       RequestName;                                              // 0x0020(0x0008)
	int                                                MatchIdx;                                                 // 0x0028(0x0004) (Transient)
	float                                              LastMatchTime;                                            // 0x002C(0x0004) (Transient)
};

// ScriptStruct Engine.PlayerController.DebugTextInfo
// 0x0034
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                                 // 0x0000(0x0004)
	struct FVector                                     SrcActorOffset;                                           // 0x0004(0x000C)
	struct FVector                                     SrcActorDesiredOffset;                                    // 0x0010(0x000C)
	struct FString                                     DebugText;                                                // 0x001C(0x000C) (NeedCtorLink)
	float                                              TimeRemaining;                                            // 0x0028(0x0004) (Transient)
	float                                              Duration;                                                 // 0x002C(0x0004)
	struct FColor                                      TextColor;                                                // 0x0030(0x0004)
};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                                     // 0x0000(0x0004) (Edit)
	float                                              CullDistance;                                             // 0x0004(0x0004) (Edit)
};

// ScriptStruct Engine.CurveEdPresetCurve.PresetGeneratedPoint
// 0x0015
struct FPresetGeneratedPoint
{
	float                                              KeyIn;                                                    // 0x0000(0x0004)
	float                                              KeyOut;                                                   // 0x0004(0x0004)
	unsigned long                                      TangentsValid : 1;                                        // 0x0008(0x0004)
	float                                              TangentIn;                                                // 0x000C(0x0004)
	float                                              TangentOut;                                               // 0x0010(0x0004)
	TEnumAsByte<EInterpCurveMode>                      IntepMode;                                                // 0x0014(0x0001)
};

// ScriptStruct Engine.EmitterPool.EmitterBaseInfo
// 0x0020
struct FEmitterBaseInfo
{
	class UParticleSystemComponent*                    PSC;                                                      // 0x0000(0x0004) (ExportObject, Component, EditInline)
	class AActor*                                      Base;                                                     // 0x0004(0x0004)
	struct FVector                                     RelativeLocation;                                         // 0x0008(0x000C)
	struct FRotator                                    RelativeRotation;                                         // 0x0014(0x000C)
};

// ScriptStruct Engine.Font.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                                   // 0x0000(0x0004) (Edit)
	int                                                StartV;                                                   // 0x0004(0x0004) (Edit)
	int                                                USize;                                                    // 0x0008(0x0004) (Edit)
	int                                                VSize;                                                    // 0x000C(0x0004) (Edit)
	unsigned char                                      TextureIndex;                                             // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                VerticalOffset;                                           // 0x0014(0x0004) (Edit)
};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// 0x008C
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                                 // 0x0000(0x000C) (Edit, NeedCtorLink)
	float                                              Height;                                                   // 0x000C(0x0004) (Edit)
	unsigned long                                      bEnableAntialiasing : 1;                                  // 0x0010(0x0004) (Edit)
	unsigned long                                      bEnableBold : 1;                                          // 0x0010(0x0004) (Edit)
	unsigned long                                      bEnableItalic : 1;                                        // 0x0010(0x0004) (Edit)
	unsigned long                                      bEnableUnderline : 1;                                     // 0x0010(0x0004) (Edit)
	TEnumAsByte<EFontImportCharacterSet>               CharacterSet;                                             // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FString                                     Chars;                                                    // 0x0018(0x000C) (Edit, NeedCtorLink)
	struct FString                                     UnicodeRange;                                             // 0x0024(0x000C) (Edit, NeedCtorLink)
	struct FString                                     CharsFilePath;                                            // 0x0030(0x000C) (Edit, NeedCtorLink)
	struct FString                                     CharsFileWildcard;                                        // 0x003C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bCreatePrintableOnly : 1;                                 // 0x0048(0x0004) (Edit)
	struct FLinearColor                                ForegroundColor;                                          // 0x004C(0x0010) (Edit)
	unsigned long                                      bEnableDropShadow : 1;                                    // 0x005C(0x0004) (Edit)
	int                                                TexturePageWidth;                                         // 0x0060(0x0004) (Edit)
	int                                                TexturePageMaxHeight;                                     // 0x0064(0x0004) (Edit)
	int                                                XPadding;                                                 // 0x0068(0x0004) (Edit)
	int                                                YPadding;                                                 // 0x006C(0x0004) (Edit)
	int                                                ExtendBoxTop;                                             // 0x0070(0x0004) (Edit)
	int                                                ExtendBoxBottom;                                          // 0x0074(0x0004) (Edit)
	int                                                ExtendBoxRight;                                           // 0x0078(0x0004) (Edit)
	int                                                ExtendBoxLeft;                                            // 0x007C(0x0004) (Edit)
	unsigned long                                      bEnableLegacyMode : 1;                                    // 0x0080(0x0004) (Edit)
	int                                                Kerning;                                                  // 0x0084(0x0004) (Edit)
	unsigned long                                      bImportKerningPairs : 1;                                  // 0x0088(0x0004) (Edit)
};

// ScriptStruct Engine.Font.FontKerningPair
// 0x0008
struct FFontKerningPair
{
	int                                                Pair;                                                     // 0x0000(0x0004)
	float                                              Amount;                                                   // 0x0004(0x0004)
};

// ScriptStruct Engine.ForceFeedbackWaveform.WaveformSample
// 0x0008
struct FWaveformSample
{
	unsigned char                                      LeftAmplitude;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      RightAmplitude;                                           // 0x0001(0x0001) (Edit)
	TEnumAsByte<EWaveformFunction>                     LeftFunction;                                             // 0x0002(0x0001) (Edit)
	TEnumAsByte<EWaveformFunction>                     RightFunction;                                            // 0x0003(0x0001) (Edit)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit)
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODElement
// 0x000C
struct FStaticMeshLODElement
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0004) (Edit)
	unsigned long                                      bEnableShadowCasting : 1;                                 // 0x0004(0x0004) (Edit, Native)
	unsigned long                                      UnknownData00 : 31;                                       // 0x0004(0x0001)
	unsigned long                                      bEnableCollision : 1;                                     // 0x0008(0x0004) (Edit, Native)
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODInfo
// 0x000C
struct FStaticMeshLODInfo
{
	TArray<struct FStaticMeshLODElement>               Elements;                                                 // 0x0000(0x000C) (Edit, EditFixedSize, Native)
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexDataElement
// 0x000C
struct FKCachedConvexDataElement
{
	TArray<unsigned char>                              ConvexElementData;                                        // 0x0000(0x000C) (Native)
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexData
// 0x000C
struct FKCachedConvexData
{
	TArray<struct FKCachedConvexDataElement>           CachedConvexElements;                                     // 0x0000(0x000C) (Native)
};

// ScriptStruct Engine.GameViewportClient.TitleSafeZoneArea
// 0x0010
struct FTitleSafeZoneArea
{
	float                                              MaxPercentX;                                              // 0x0000(0x0004)
	float                                              MaxPercentY;                                              // 0x0004(0x0004)
	float                                              RecommendedPercentX;                                      // 0x0008(0x0004)
	float                                              RecommendedPercentY;                                      // 0x000C(0x0004)
};

// ScriptStruct Engine.GameViewportClient.PerPlayerSplitscreenData
// 0x0010
struct FPerPlayerSplitscreenData
{
	float                                              SizeX;                                                    // 0x0000(0x0004)
	float                                              SizeY;                                                    // 0x0004(0x0004)
	float                                              OriginX;                                                  // 0x0008(0x0004)
	float                                              OriginY;                                                  // 0x000C(0x0004)
};

// ScriptStruct Engine.GameViewportClient.SplitscreenData
// 0x000C
struct FSplitscreenData
{
	TArray<struct FPerPlayerSplitscreenData>           PlayerData;                                               // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.HUD.HudLocalizedMessage
// 0x0040
struct FHudLocalizedMessage
{
	class UClass*                                      Message;                                                  // 0x0000(0x0004)
	struct FString                                     StringMessage;                                            // 0x0004(0x000C) (NeedCtorLink)
	int                                                Switch;                                                   // 0x0010(0x0004)
	float                                              EndOfLife;                                                // 0x0014(0x0004)
	float                                              Lifetime;                                                 // 0x0018(0x0004)
	float                                              PosY;                                                     // 0x001C(0x0004)
	struct FColor                                      DrawColor;                                                // 0x0020(0x0004)
	int                                                FontSize;                                                 // 0x0024(0x0004)
	class UFont*                                       StringFont;                                               // 0x0028(0x0004)
	float                                              DX;                                                       // 0x002C(0x0004)
	float                                              DY;                                                       // 0x0030(0x0004)
	unsigned long                                      Drawn : 1;                                                // 0x0034(0x0004)
	int                                                Count;                                                    // 0x0038(0x0004)
	class UObject*                                     OptionalObject;                                           // 0x003C(0x0004)
};

// ScriptStruct Engine.HUD.ConsoleMessage
// 0x0018
struct FConsoleMessage
{
	struct FString                                     Text;                                                     // 0x0000(0x000C) (NeedCtorLink)
	struct FColor                                      TextColor;                                                // 0x000C(0x0004)
	float                                              MessageLife;                                              // 0x0010(0x0004)
	class APlayerReplicationInfo*                      PRI;                                                      // 0x0014(0x0004)
};

// ScriptStruct Engine.InterpActor.CheckpointRecord
// 0x001C
struct AInterpActor_FCheckpointRecord
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
	unsigned long                                      bIsShutdown : 1;                                          // 0x0018(0x0004)
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// 0x002C
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                              // 0x0000(0x0004)
	struct FColor                                      CurveColor;                                               // 0x0004(0x0004)
	struct FString                                     CurveName;                                                // 0x0008(0x000C) (NeedCtorLink)
	int                                                bHideCurve;                                               // 0x0014(0x0004)
	int                                                bColorCurve;                                              // 0x0018(0x0004)
	int                                                bFloatingPointColorCurve;                                 // 0x001C(0x0004)
	int                                                bClamp;                                                   // 0x0020(0x0004)
	float                                              ClampLow;                                                 // 0x0024(0x0004)
	float                                              ClampHigh;                                                // 0x0028(0x0004)
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// 0x0028
struct FCurveEdTab
{
	struct FString                                     TabName;                                                  // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FCurveEdEntry>                       Curves;                                                   // 0x000C(0x000C) (NeedCtorLink)
	float                                              ViewStartInput;                                           // 0x0018(0x0004)
	float                                              ViewEndInput;                                             // 0x001C(0x0004)
	float                                              ViewStartOutput;                                          // 0x0020(0x0004)
	float                                              ViewEndOutput;                                            // 0x0024(0x0004)
};

// ScriptStruct Engine.Texture2D.TextureLinkedListMirror
// 0x000C
struct FTextureLinkedListMirror
{
	struct FPointer                                    Element;                                                  // 0x0000(0x0004) (Const, Native)
	struct FPointer                                    Next;                                                     // 0x0004(0x0004) (Const, Native)
	struct FPointer                                    PrevLink;                                                 // 0x0008(0x0004) (Const, Native)
};

// ScriptStruct Engine.LocalPlayer.SynchronizedActorVisibilityHistory
// 0x0008
struct FSynchronizedActorVisibilityHistory
{
	struct FPointer                                    State;                                                    // 0x0000(0x0004)
	struct FPointer                                    CriticalSection;                                          // 0x0004(0x0004)
};

// ScriptStruct Engine.LocalPlayer.CurrentPostProcessVolumeInfo
// 0x02C8
struct FCurrentPostProcessVolumeInfo
{
	struct FPostProcessSettings                        LastSettings;                                             // 0x0000(0x02BC) (NeedCtorLink)
	class APostProcessVolume*                          LastVolumeUsed;                                           // 0x02BC(0x0004)
	float                                              BlendStartTime;                                           // 0x02C0(0x0004)
	float                                              LastBlendTime;                                            // 0x02C4(0x0004)
};

// ScriptStruct Engine.Material.MaterialInput
// 0x001C
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                               // 0x0000(0x0004)
	int                                                Mask;                                                     // 0x0004(0x0004)
	int                                                MaskR;                                                    // 0x0008(0x0004)
	int                                                MaskG;                                                    // 0x000C(0x0004)
	int                                                MaskB;                                                    // 0x0010(0x0004)
	int                                                MaskA;                                                    // 0x0014(0x0004)
	int                                                GCC64_Padding;                                            // 0x0018(0x0004)
};

// ScriptStruct Engine.Material.ColorMaterialInput
// 0x0008 (0x0024 - 0x001C)
struct FColorMaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                          // 0x001C(0x0004)
	struct FColor                                      Constant;                                                 // 0x0020(0x0004)
};

// ScriptStruct Engine.Material.ScalarMaterialInput
// 0x0008 (0x0024 - 0x001C)
struct FScalarMaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                          // 0x001C(0x0004)
	float                                              Constant;                                                 // 0x0020(0x0004)
};

// ScriptStruct Engine.Material.VectorMaterialInput
// 0x0010 (0x002C - 0x001C)
struct FVectorMaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                          // 0x001C(0x0004)
	struct FVector                                     Constant;                                                 // 0x0020(0x000C)
};

// ScriptStruct Engine.Material.Vector2MaterialInput
// 0x000C (0x0028 - 0x001C)
struct FVector2MaterialInput : public FMaterialInput
{
	unsigned long                                      UseConstant : 1;                                          // 0x001C(0x0004)
	float                                              ConstantX;                                                // 0x0020(0x0004)
	float                                              ConstantY;                                                // 0x0024(0x0004)
};

// ScriptStruct Engine.Info.KeyValuePair
// 0x0018
struct FKeyValuePair
{
	struct FString                                     Key;                                                      // 0x0000(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     Value;                                                    // 0x000C(0x000C) (Edit, AlwaysInit, NeedCtorLink)
};

// ScriptStruct Engine.Info.PlayerResponseLine
// 0x002C
struct FPlayerResponseLine
{
	int                                                PlayerNum;                                                // 0x0000(0x0004) (Edit, AlwaysInit)
	int                                                PlayerId;                                                 // 0x0004(0x0004) (Edit, AlwaysInit)
	struct FString                                     PlayerName;                                               // 0x0008(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	int                                                Ping;                                                     // 0x0014(0x0004) (Edit, AlwaysInit)
	int                                                Score;                                                    // 0x0018(0x0004) (Edit, AlwaysInit)
	int                                                StatsID;                                                  // 0x001C(0x0004) (Edit, AlwaysInit)
	TArray<struct FKeyValuePair>                       PlayerInfo;                                               // 0x0020(0x000C) (Edit, AlwaysInit, NeedCtorLink)
};

// ScriptStruct Engine.Info.ServerResponseLine
// 0x0060
struct FServerResponseLine
{
	int                                                ServerID;                                                 // 0x0000(0x0004) (Edit, AlwaysInit)
	struct FString                                     IP;                                                       // 0x0004(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	int                                                Port;                                                     // 0x0010(0x0004) (Edit, AlwaysInit)
	int                                                QueryPort;                                                // 0x0014(0x0004) (Edit, AlwaysInit)
	struct FString                                     ServerName;                                               // 0x0018(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     MapName;                                                  // 0x0024(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     GameType;                                                 // 0x0030(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	int                                                CurrentPlayers;                                           // 0x003C(0x0004) (Edit, AlwaysInit)
	int                                                MaxPlayers;                                               // 0x0040(0x0004) (Edit, AlwaysInit)
	int                                                Ping;                                                     // 0x0044(0x0004) (Edit, AlwaysInit)
	TArray<struct FKeyValuePair>                       ServerInfo;                                               // 0x0048(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	TArray<struct FPlayerResponseLine>                 PlayerInfo;                                               // 0x0054(0x000C) (Edit, AlwaysInit, NeedCtorLink)
};

// ScriptStruct Engine.Settings.LocalizedStringSetting
// 0x0009
struct FLocalizedStringSetting
{
	int                                                Id;                                                       // 0x0000(0x0004)
	int                                                ValueIndex;                                               // 0x0004(0x0004)
	TEnumAsByte<EOnlineDataAdvertisementType>          AdvertisementType;                                        // 0x0008(0x0001)
};

// ScriptStruct Engine.Settings.SettingsData
// 0x000C
struct FSettingsData
{
	TEnumAsByte<ESettingsDataType>                     Type;                                                     // 0x0000(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Value1;                                                   // 0x0004(0x0004) (Const)
	struct FPointer                                    Value2;                                                   // 0x0008(0x0004) (Const, Native, Transient)
};

// ScriptStruct Engine.Settings.SettingsProperty
// 0x0011
struct FSettingsProperty
{
	int                                                PropertyId;                                               // 0x0000(0x0004)
	struct FSettingsData                               Data;                                                     // 0x0004(0x000C)
	TEnumAsByte<EOnlineDataAdvertisementType>          AdvertisementType;                                        // 0x0010(0x0001)
};

// ScriptStruct Engine.Settings.IdToStringMapping
// 0x000C
struct FIdToStringMapping
{
	int                                                Id;                                                       // 0x0000(0x0004) (Const)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Const, Localized)
};

// ScriptStruct Engine.Settings.StringIdToStringMapping
// 0x0010
struct FStringIdToStringMapping
{
	int                                                Id;                                                       // 0x0000(0x0004) (Const)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Const, Localized)
	unsigned long                                      bIsWildcard : 1;                                          // 0x000C(0x0004) (Const)
};

// ScriptStruct Engine.Settings.LocalizedStringSettingMetaData
// 0x0024
struct FLocalizedStringSettingMetaData
{
	int                                                Id;                                                       // 0x0000(0x0004) (Const)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Const)
	struct FString                                     ColumnHeaderText;                                         // 0x000C(0x000C) (Const, Localized, NeedCtorLink)
	TArray<struct FStringIdToStringMapping>            ValueMappings;                                            // 0x0018(0x000C) (Const, NeedCtorLink)
};

// ScriptStruct Engine.Settings.SettingsPropertyPropertyMetaData
// 0x0040
struct FSettingsPropertyPropertyMetaData
{
	int                                                Id;                                                       // 0x0000(0x0004) (Const)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Const)
	struct FString                                     ColumnHeaderText;                                         // 0x000C(0x000C) (Const, Localized, NeedCtorLink)
	TEnumAsByte<EPropertyValueMappingType>             MappingType;                                              // 0x0018(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	TArray<struct FIdToStringMapping>                  ValueMappings;                                            // 0x001C(0x000C) (Const, NeedCtorLink)
	TArray<struct FSettingsData>                       PredefinedValues;                                         // 0x0028(0x000C) (Const, NeedCtorLink)
	float                                              MinVal;                                                   // 0x0034(0x0004) (Const)
	float                                              MaxVal;                                                   // 0x0038(0x0004) (Const)
	float                                              RangeIncrement;                                           // 0x003C(0x0004) (Const)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchResult
// 0x0008
struct FOnlineGameSearchResult
{
	class UOnlineGameSettings*                         GameSettings;                                             // 0x0000(0x0004) (Const)
	struct FPointer                                    PlatformData;                                             // 0x0004(0x0004) (Const, Native)
};

// ScriptStruct Engine.OnlineGameSearch.NamedObjectProperty
// 0x0014
struct FNamedObjectProperty
{
	struct FName                                       ObjectPropertyName;                                       // 0x0000(0x0008)
	struct FString                                     ObjectPropertyValue;                                      // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchParameter
// 0x000E
struct FOnlineGameSearchParameter
{
	int                                                EntryId;                                                  // 0x0000(0x0004)
	struct FName                                       ObjectPropertyName;                                       // 0x0004(0x0008)
	TEnumAsByte<EOnlineGameSearchEntryType>            EntryType;                                                // 0x000C(0x0001)
	TEnumAsByte<EOnlineGameSearchComparisonType>       ComparisonType;                                           // 0x000D(0x0001)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchORClause
// 0x000C
struct FOnlineGameSearchORClause
{
	TArray<struct FOnlineGameSearchParameter>          OrParams;                                                 // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchSortClause
// 0x000E
struct FOnlineGameSearchSortClause
{
	int                                                EntryId;                                                  // 0x0000(0x0004)
	struct FName                                       ObjectPropertyName;                                       // 0x0004(0x0008)
	TEnumAsByte<EOnlineGameSearchEntryType>            EntryType;                                                // 0x000C(0x0001)
	TEnumAsByte<EOnlineGameSearchSortType>             SortType;                                                 // 0x000D(0x0001)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchQuery
// 0x0018
struct FOnlineGameSearchQuery
{
	TArray<struct FOnlineGameSearchORClause>           OrClauses;                                                // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FOnlineGameSearchSortClause>         SortClauses;                                              // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.OnlineProfileSettings.OnlineProfileSetting
// 0x0018
struct FOnlineProfileSetting
{
	TEnumAsByte<EOnlineProfilePropertyOwner>           Owner;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FSettingsProperty                           ProfileSetting;                                           // 0x0004(0x0014)
};

// ScriptStruct Engine.OnlineStats.IdToStatKeyMapping
// 0x0010
struct FIdToStatKeyMapping
{
	int                                                StatId;                                                   // 0x0000(0x0004)
	struct FString                                     StatKey;                                                  // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsColumn
// 0x0010
struct FOnlineStatsColumn
{
	int                                                ColumnNo;                                                 // 0x0000(0x0004) (Const)
	struct FSettingsData                               StatValue;                                                // 0x0004(0x000C) (Const)
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsRow
// 0x002C
struct FOnlineStatsRow
{
	struct FUniqueNetId                                PlayerId;                                                 // 0x0000(0x0008) (Const)
	struct FSettingsData                               Rank;                                                     // 0x0008(0x000C) (Const)
	struct FString                                     NickName;                                                 // 0x0014(0x000C) (Const, NeedCtorLink)
	TArray<struct FOnlineStatsColumn>                  Columns;                                                  // 0x0020(0x000C) (Const, NeedCtorLink)
};

// ScriptStruct Engine.OnlineStatsRead.ColumnMetaData
// 0x0018
struct FColumnMetaData
{
	int                                                Id;                                                       // 0x0000(0x0004) (Const)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Const)
	struct FString                                     ColumnName;                                               // 0x000C(0x000C) (Const, Localized, NeedCtorLink)
};

// ScriptStruct Engine.OnlineStats.StatPeriodFlags
// 0x0004
struct FStatPeriodFlags
{
	unsigned long                                      bIndefinite : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bDaily : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bWeekly : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bBiweekly : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bMonthly : 1;                                             // 0x0000(0x0004)
	unsigned long                                      bQuarterly : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bYearly : 1;                                              // 0x0000(0x0004)
};

// ScriptStruct Engine.PlayerReplicationInfo.AutomatedTestingDatum
// 0x0008
struct FAutomatedTestingDatum
{
	int                                                NumberOfMatchesPlayed;                                    // 0x0000(0x0004)
	int                                                NumMapListCyclesDone;                                     // 0x0004(0x0004)
};

// ScriptStruct Engine.ReverbVolume.ReverbSettings
// 0x000C
struct FReverbSettings
{
	TEnumAsByte<EReverbPreset>                         ReverbType;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Volume;                                                   // 0x0004(0x0004) (Edit)
	float                                              FadeTime;                                                 // 0x0008(0x0004) (Edit)
};

// ScriptStruct Engine.Scout.PathSizeInfo
// 0x0015
struct FPathSizeInfo
{
	struct FName                                       Desc;                                                     // 0x0000(0x0008)
	float                                              Radius;                                                   // 0x0008(0x0004)
	float                                              Height;                                                   // 0x000C(0x0004)
	float                                              CrouchHeight;                                             // 0x0010(0x0004)
	unsigned char                                      PathColor;                                                // 0x0014(0x0001)
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// 0x0005
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (Edit)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0004(0x0001) (Edit)
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// 0x0020
struct FSkeletalMeshLODInfo
{
	float                                              DisplayFactor;                                            // 0x0000(0x0004) (Edit)
	float                                              LODHysteresis;                                            // 0x0004(0x0004) (Edit)
	TArray<int>                                        LODMaterialMap;                                           // 0x0008(0x000C) (Edit, EditFixedSize, NeedCtorLink)
	TArray<unsigned long>                              bEnableShadowCasting;                                     // 0x0014(0x000C) (Edit, EditFixedSize, NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.ClothSpecialBoneInfo
// 0x0018
struct FClothSpecialBoneInfo
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit)
	TEnumAsByte<EClothBoneType>                        BoneType;                                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TArray<int>                                        AttachedVertexIndices;                                    // 0x000C(0x000C) (Const, NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMeshComponent.ActiveMorph
// 0x0008
struct FActiveMorph
{
	class UMorphTarget*                                Target;                                                   // 0x0000(0x0004)
	float                                              Weight;                                                   // 0x0004(0x0004)
};

// ScriptStruct Engine.SkeletalMeshComponent.Attachment
// 0x0030
struct FAttachment
{
	class UActorComponent*                             Component;                                                // 0x0000(0x0004) (Edit, ExportObject, Component, EditInline)
	struct FName                                       BoneName;                                                 // 0x0004(0x0008) (Edit)
	struct FVector                                     RelativeLocation;                                         // 0x000C(0x000C) (Edit)
	struct FRotator                                    RelativeRotation;                                         // 0x0018(0x000C) (Edit)
	struct FVector                                     RelativeScale;                                            // 0x0024(0x000C) (Edit)
};

// ScriptStruct Engine.SpeechRecognition.RecognisableWord
// 0x001C
struct FRecognisableWord
{
	int                                                Id;                                                       // 0x0000(0x0004) (Edit)
	struct FString                                     ReferenceWord;                                            // 0x0004(0x000C) (Edit, NeedCtorLink)
	struct FString                                     PhoneticWord;                                             // 0x0010(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct Engine.SpeechRecognition.RecogVocabulary
// 0x0048
struct FRecogVocabulary
{
	TArray<struct FRecognisableWord>                   WhoDictionary;                                            // 0x0000(0x000C) (Edit, NeedCtorLink)
	TArray<struct FRecognisableWord>                   WhatDictionary;                                           // 0x000C(0x000C) (Edit, NeedCtorLink)
	TArray<struct FRecognisableWord>                   WhereDictionary;                                          // 0x0018(0x000C) (Edit, NeedCtorLink)
	struct FString                                     VocabName;                                                // 0x0024(0x000C) (NeedCtorLink)
	TArray<unsigned char>                              VocabData;                                                // 0x0030(0x000C) (NeedCtorLink)
	TArray<unsigned char>                              WorkingVocabData;                                         // 0x003C(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.SpeechRecognition.RecogUserData
// 0x0010
struct FRecogUserData
{
	int                                                ActiveVocabularies;                                       // 0x0000(0x0004)
	TArray<unsigned char>                              UserData;                                                 // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// 0x001C
struct FStaticMeshComponentLODInfo
{
	TArray<class UShadowMap2D*>                        ShadowMaps;                                               // 0x0000(0x000C) (Const, NeedCtorLink)
	TArray<class UObject*>                             ShadowVertexBuffers;                                      // 0x000C(0x000C) (Const, NeedCtorLink)
	struct FPointer                                    LightMap;                                                 // 0x0018(0x0004) (Const, Native)
};

// ScriptStruct Engine.Texture2DComposite.SourceTexture2DRegion
// 0x0014
struct FSourceTexture2DRegion
{
	int                                                OffsetX;                                                  // 0x0000(0x0004)
	int                                                OffsetY;                                                  // 0x0004(0x0004)
	int                                                SizeX;                                                    // 0x0008(0x0004)
	int                                                SizeY;                                                    // 0x000C(0x0004)
	class UTexture2D*                                  Texture2D;                                                // 0x0010(0x0004)
};

// ScriptStruct Engine.Trigger.CheckpointRecord
// 0x0004
struct ATrigger_FCheckpointRecord
{
	unsigned long                                      bCollideActors : 1;                                       // 0x0000(0x0004)
};

// ScriptStruct Engine.Actor.ImpactInfo
// 0x0048
struct FImpactInfo
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0004) (AlwaysInit)
	struct FVector                                     HitLocation;                                              // 0x0004(0x000C) (AlwaysInit)
	struct FVector                                     HitNormal;                                                // 0x0010(0x000C) (AlwaysInit)
	struct FVector                                     RayDir;                                                   // 0x001C(0x000C) (AlwaysInit)
	struct FTraceHitInfo                               HitInfo;                                                  // 0x0028(0x001C) (Component, AlwaysInit)
	float                                              TracedDistance;                                           // 0x0044(0x0004) (AlwaysInit)
};

// ScriptStruct Engine.WorldInfo.NetViewer
// 0x0020
struct FNetViewer
{
	class APlayerController*                           InViewer;                                                 // 0x0000(0x0004)
	class AActor*                                      Viewer;                                                   // 0x0004(0x0004)
	struct FVector                                     ViewLocation;                                             // 0x0008(0x000C)
	struct FVector                                     ViewDir;                                                  // 0x0014(0x000C)
};

// ScriptStruct Engine.WorldInfo.PhysXTiming
// 0x000C
struct FPhysXTiming
{
	unsigned long                                      bFixedTimeStep : 1;                                       // 0x0000(0x0004) (Edit)
	float                                              TimeStep;                                                 // 0x0004(0x0004) (Edit)
	int                                                MaxSubSteps;                                              // 0x0008(0x0004) (Edit)
};

// ScriptStruct Engine.WorldInfo.PhysXSceneTimings
// 0x003C
struct FPhysXSceneTimings
{
	struct FPhysXTiming                                PrimarySceneTiming;                                       // 0x0000(0x000C) (Edit, EditInline)
	struct FPhysXTiming                                CompartmentTimingRigidBody;                               // 0x000C(0x000C) (Edit, EditInline)
	struct FPhysXTiming                                CompartmentTimingFluid;                                   // 0x0018(0x000C) (Edit, EditInline)
	struct FPhysXTiming                                CompartmentTimingCloth;                                   // 0x0024(0x000C) (Edit, EditInline)
	struct FPhysXTiming                                CompartmentTimingSoftBody;                                // 0x0030(0x000C) (Edit, EditInline)
};

// ScriptStruct Engine.WorldInfo.CompartmentRunList
// 0x0004
struct FCompartmentRunList
{
	unsigned long                                      RigidBody : 1;                                            // 0x0000(0x0004) (Edit, EditConst)
	unsigned long                                      Fluid : 1;                                                // 0x0000(0x0004) (Edit, EditConst)
	unsigned long                                      Cloth : 1;                                                // 0x0000(0x0004) (Edit, EditConst)
	unsigned long                                      SoftBody : 1;                                             // 0x0000(0x0004) (Edit, EditConst)
};

// ScriptStruct Engine.WorldInfo.PhysXEmitterVerticalProperties
// 0x0018
struct FPhysXEmitterVerticalProperties
{
	unsigned long                                      bDisableLod : 1;                                          // 0x0000(0x0004) (Edit)
	int                                                ParticlesLodMin;                                          // 0x0004(0x0004) (Edit)
	int                                                ParticlesLodMax;                                          // 0x0008(0x0004) (Edit)
	int                                                PacketsPerPhysXParticleSystemMax;                         // 0x000C(0x0004) (Edit)
	unsigned long                                      bApplyCylindricalPacketCulling : 1;                       // 0x0010(0x0004) (Edit)
	float                                              SpawnLodVsFifoBias;                                       // 0x0014(0x0004) (Edit)
};

// ScriptStruct Engine.WorldInfo.PhysXVerticalProperties
// 0x0018
struct FPhysXVerticalProperties
{
	struct FPhysXEmitterVerticalProperties             Emitters;                                                 // 0x0000(0x0018) (Edit, EditInline)
};

// ScriptStruct Engine.CoverMeshComponent.CoverMeshes
// 0x0028
struct FCoverMeshes
{
	class UStaticMesh*                                 Base;                                                     // 0x0000(0x0004)
	class UStaticMesh*                                 LeanLeft;                                                 // 0x0004(0x0004)
	class UStaticMesh*                                 LeanRight;                                                // 0x0008(0x0004)
	class UStaticMesh*                                 Climb;                                                    // 0x000C(0x0004)
	class UStaticMesh*                                 Mantle;                                                   // 0x0010(0x0004)
	class UStaticMesh*                                 SlipLeft;                                                 // 0x0014(0x0004)
	class UStaticMesh*                                 SlipRight;                                                // 0x0018(0x0004)
	class UStaticMesh*                                 SwatLeft;                                                 // 0x001C(0x0004)
	class UStaticMesh*                                 SwatRight;                                                // 0x0020(0x0004)
	class UStaticMesh*                                 PopUp;                                                    // 0x0024(0x0004)
};

// ScriptStruct Engine.AnimNodeBlendBase.AnimBlendChild
// 0x0040
struct FAnimBlendChild
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit)
	class UAnimNode*                                   Anim;                                                     // 0x0008(0x0004) (ExportObject, NeedCtorLink, EditInline)
	float                                              Weight;                                                   // 0x000C(0x0004)
	float                                              TotalWeight;                                              // 0x0010(0x0004) (Const)
	int                                                bHasRootMotion;                                           // 0x0014(0x0004) (Const, Transient)
	struct FBoneAtom                                   RootMotion;                                               // 0x0018(0x0020) (Const, Transient)
	unsigned long                                      bMirrorSkeleton : 1;                                      // 0x0038(0x0004)
	int                                                DrawY;                                                    // 0x003C(0x0004)
};

// ScriptStruct Engine.AnimNodeAimOffset.AimTransform
// 0x001C
struct FAimTransform
{
	struct FQuat                                       Quaternion;                                               // 0x0000(0x0010) (Edit)
	struct FVector                                     Translation;                                              // 0x0010(0x000C) (Edit)
};

// ScriptStruct Engine.AnimNodeAimOffset.AimComponent
// 0x0104
struct FAimComponent
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit)
	struct FAimTransform                               LU;                                                       // 0x0008(0x001C) (Edit)
	struct FAimTransform                               LC;                                                       // 0x0024(0x001C) (Edit)
	struct FAimTransform                               LD;                                                       // 0x0040(0x001C) (Edit)
	struct FAimTransform                               CU;                                                       // 0x005C(0x001C) (Edit)
	struct FAimTransform                               CC;                                                       // 0x0078(0x001C) (Edit)
	struct FAimTransform                               CD;                                                       // 0x0094(0x001C) (Edit)
	struct FAimTransform                               RU;                                                       // 0x00B0(0x001C) (Edit)
	struct FAimTransform                               RC;                                                       // 0x00CC(0x001C) (Edit)
	struct FAimTransform                               RD;                                                       // 0x00E8(0x001C) (Edit)
};

// ScriptStruct Engine.AnimNodeAimOffset.AimOffsetProfile
// 0x006C
struct FAimOffsetProfile
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (Edit, Const, EditConst)
	struct FVector2D                                   HorizontalRange;                                          // 0x0008(0x0008) (Edit)
	struct FVector2D                                   VerticalRange;                                            // 0x0010(0x0008) (Edit)
	TArray<struct FAimComponent>                       AimComponents;                                            // 0x0018(0x000C) (NeedCtorLink)
	struct FName                                       AnimName_LU;                                              // 0x0024(0x0008) (Edit)
	struct FName                                       AnimName_LC;                                              // 0x002C(0x0008) (Edit)
	struct FName                                       AnimName_LD;                                              // 0x0034(0x0008) (Edit)
	struct FName                                       AnimName_CU;                                              // 0x003C(0x0008) (Edit)
	struct FName                                       AnimName_CC;                                              // 0x0044(0x0008) (Edit)
	struct FName                                       AnimName_CD;                                              // 0x004C(0x0008) (Edit)
	struct FName                                       AnimName_RU;                                              // 0x0054(0x0008) (Edit)
	struct FName                                       AnimName_RC;                                              // 0x005C(0x0008) (Edit)
	struct FName                                       AnimName_RD;                                              // 0x0064(0x0008) (Edit)
};

// ScriptStruct Engine.AnimNodeBlendMultiBone.ChildBoneBlendInfo
// 0x0030
struct FChildBoneBlendInfo
{
	TArray<float>                                      TargetPerBoneWeight;                                      // 0x0000(0x000C) (NeedCtorLink)
	struct FName                                       InitTargetStartBone;                                      // 0x000C(0x0008) (Edit)
	float                                              InitPerBoneIncrease;                                      // 0x0014(0x0004) (Edit)
	struct FName                                       OldStartBone;                                             // 0x0018(0x0008) (Const)
	float                                              OldBoneIncrease;                                          // 0x0020(0x0004) (Const)
	TArray<unsigned char>                              TargetRequiredBones;                                      // 0x0024(0x000C) (Transient, NeedCtorLink)
};

// ScriptStruct Engine.AnimNodeRandom.RandomAnimInfo
// 0x0015
struct FRandomAnimInfo
{
	float                                              Chance;                                                   // 0x0000(0x0004) (Edit)
	unsigned char                                      LoopCountMin;                                             // 0x0004(0x0001) (Edit)
	unsigned char                                      LoopCountMax;                                             // 0x0005(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              BlendInTime;                                              // 0x0008(0x0004) (Edit)
	struct FVector2D                                   PlayRateRange;                                            // 0x000C(0x0008) (Edit)
	unsigned char                                      LoopCount;                                                // 0x0014(0x0001) (Transient)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimInfo
// 0x0010
struct FAnimInfo
{
	struct FName                                       AnimSeqName;                                              // 0x0000(0x0008) (Const)
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0004) (Const, Transient)
	int                                                AnimLinkupIndex;                                          // 0x000C(0x0004) (Const, Transient)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimBlendInfo
// 0x001C
struct FAnimBlendInfo
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008) (Edit)
	struct FAnimInfo                                   AnimInfo;                                                 // 0x0008(0x0010)
	float                                              Weight;                                                   // 0x0018(0x0004)
};

// ScriptStruct Engine.AnimNodeSynch.SynchGroup
// 0x002C
struct FSynchGroup
{
	TArray<class UAnimNodeSequence*>                   SeqNodes;                                                 // 0x0000(0x000C) (NeedCtorLink)
	class UAnimNodeSequence*                           MasterNode;                                               // 0x000C(0x0004) (Transient)
	struct FName                                       GroupName;                                                // 0x0010(0x0008) (Edit)
	unsigned long                                      bFireSlaveNotifies : 1;                                   // 0x0018(0x0004) (Edit)
	float                                              RateScale;                                                // 0x001C(0x0004) (Edit)
	unsigned long                                      bUseSharedMasterControlNode : 1;                          // 0x0020(0x0004) (Edit)
	float                                              SharedMasterRelativePosition;                             // 0x0024(0x0004)
	float                                              SharedMasterMoveDelta;                                    // 0x0028(0x0004)
};

// ScriptStruct Engine.AnimSequence.AnimNotifyEvent
// 0x0010
struct FAnimNotifyEvent
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit)
	class UAnimNotify*                                 Notify;                                                   // 0x0004(0x0004) (Edit, ExportObject, NeedCtorLink, EditInline)
	struct FName                                       Comment;                                                  // 0x0008(0x0008) (Edit)
};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// 0x0024
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FQuat>                               RotKeys;                                                  // 0x000C(0x000C) (NeedCtorLink)
	TArray<float>                                      KeyTimes;                                                 // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// 0x0018
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x000C) (NeedCtorLink)
	TArray<float>                                      Times;                                                    // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.RotationTrack
// 0x0018
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0000(0x000C) (NeedCtorLink)
	TArray<float>                                      Times;                                                    // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// 0x0028
struct FAnimSetMeshLinkup
{
	struct FGuid                                       SkelMeshLinkupGUID;                                       // 0x0000(0x0010)
	TArray<int>                                        BoneToTrackTable;                                         // 0x0010(0x000C) (NeedCtorLink)
	TArray<unsigned char>                              BoneUseAnimTranslation;                                   // 0x001C(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.AnimTree.AnimGroup
// 0x0020
struct FAnimGroup
{
	TArray<class UAnimNodeSequence*>                   SeqNodes;                                                 // 0x0000(0x000C) (Const, Transient, NeedCtorLink)
	class UAnimNodeSequence*                           SynchMaster;                                              // 0x000C(0x0004) (Const, Transient)
	class UAnimNodeSequence*                           NotifyMaster;                                             // 0x0010(0x0004) (Const, Transient)
	struct FName                                       GroupName;                                                // 0x0014(0x0008) (Edit, Const)
	float                                              RateScale;                                                // 0x001C(0x0004) (Edit, Const)
};

// ScriptStruct Engine.AnimTree.SkelControlListHead
// 0x0010
struct FSkelControlListHead
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008)
	class USkelControlBase*                            ControlHead;                                              // 0x0008(0x0004) (ExportObject, NeedCtorLink, EditInline)
	int                                                DrawY;                                                    // 0x000C(0x0004)
};

// ScriptStruct Engine.MorphNodeWeightBase.MorphNodeConn
// 0x0018
struct FMorphNodeConn
{
	TArray<class UMorphNodeBase*>                      ChildNodes;                                               // 0x0000(0x000C) (NeedCtorLink)
	struct FName                                       ConnName;                                                 // 0x000C(0x0008)
	int                                                DrawY;                                                    // 0x0014(0x0004)
};

// ScriptStruct Engine.DecalComponent.DecalReceiver
// 0x0008
struct FDecalReceiver
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0004) (Const, ExportObject, Component, EditInline)
	struct FPointer                                    RenderData;                                               // 0x0004(0x0004) (Const, Native)
};

// ScriptStruct Engine.DecalManager.ActiveDecalInfo
// 0x0008
struct FActiveDecalInfo
{
	class UDecalComponent*                             Decal;                                                    // 0x0000(0x0004) (ExportObject, Component, EditInline)
	float                                              LifetimeRemaining;                                        // 0x0004(0x0004)
};

// ScriptStruct Engine.FracturedStaticMeshComponent.FracturedElementRanges
// 0x0008
struct FFracturedElementRanges
{
	int                                                BaseIndex;                                                // 0x0000(0x0004)
	int                                                NumPrimitives;                                            // 0x0004(0x0004)
};

// ScriptStruct Engine.FracturedStaticMeshComponent.FragmentGroup
// 0x0010
struct FFragmentGroup
{
	TArray<int>                                        FragmentIndices;                                          // 0x0000(0x000C) (NeedCtorLink)
	unsigned long                                      bGroupIsRooted : 1;                                       // 0x000C(0x0004)
};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// 0x001C
struct FAnimControlTrackKey
{
	float                                              StartTime;                                                // 0x0000(0x0004)
	struct FName                                       AnimSeqName;                                              // 0x0004(0x0008)
	float                                              AnimStartOffset;                                          // 0x000C(0x0004)
	float                                              AnimEndOffset;                                            // 0x0010(0x0004)
	float                                              AnimPlayRate;                                             // 0x0014(0x0004)
	unsigned long                                      bLooping : 1;                                             // 0x0018(0x0004)
	unsigned long                                      bReverse : 1;                                             // 0x0018(0x0004)
};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// 0x0010
struct FDirectorTrackCut
{
	float                                              Time;                                                     // 0x0000(0x0004)
	float                                              TransitionTime;                                           // 0x0004(0x0004)
	struct FName                                       TargetCamGroup;                                           // 0x0008(0x0008) (Edit)
};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	struct FName                                       EventName;                                                // 0x0004(0x0008) (Edit)
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXTrackKey
// 0x001C
struct FFaceFXTrackKey
{
	float                                              StartTime;                                                // 0x0000(0x0004)
	struct FString                                     FaceFXGroupName;                                          // 0x0004(0x000C) (NeedCtorLink)
	struct FString                                     FaceFXSeqName;                                            // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008)
	float                                              Time;                                                     // 0x0008(0x0004)
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// 0x000C
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                   // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackSound.SoundTrackKey
// 0x0010
struct FSoundTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	float                                              Volume;                                                   // 0x0004(0x0004)
	float                                              Pitch;                                                    // 0x0008(0x0004)
	class USoundCue*                                   Sound;                                                    // 0x000C(0x0004) (Edit)
};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// 0x0005
struct FToggleTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	TEnumAsByte<ETrackToggleAction>                    ToggleAction;                                             // 0x0004(0x0001) (Edit)
};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// 0x001C
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                               // 0x0000(0x0004)
	int                                                Mask;                                                     // 0x0004(0x0004)
	int                                                MaskR;                                                    // 0x0008(0x0004)
	int                                                MaskG;                                                    // 0x000C(0x0004)
	int                                                MaskB;                                                    // 0x0010(0x0004)
	int                                                MaskA;                                                    // 0x0014(0x0004)
	int                                                GCC64_Padding;                                            // 0x0018(0x0004)
};

// ScriptStruct Engine.MaterialInstanceConstant.FontParameterValue
// 0x0020
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit)
	class UFont*                                       FontValue;                                                // 0x0008(0x0004) (Edit)
	int                                                FontPage;                                                 // 0x000C(0x0004) (Edit)
	struct FGuid                                       ExpressionGUID;                                           // 0x0010(0x0010)
};

// ScriptStruct Engine.MaterialInstanceConstant.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit)
	float                                              ParameterValue;                                           // 0x0008(0x0004) (Edit)
	struct FGuid                                       ExpressionGUID;                                           // 0x000C(0x0010)
};

// ScriptStruct Engine.MaterialInstanceConstant.TextureParameterValue
// 0x001C
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit)
	class UTexture*                                    ParameterValue;                                           // 0x0008(0x0004) (Edit)
	struct FGuid                                       ExpressionGUID;                                           // 0x000C(0x0010)
};

// ScriptStruct Engine.MaterialInstanceConstant.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit)
	struct FLinearColor                                ParameterValue;                                           // 0x0008(0x0010) (Edit)
	struct FGuid                                       ExpressionGUID;                                           // 0x0018(0x0010)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ParameterValueOverTime
// 0x0030
struct FParameterValueOverTime
{
	struct FGuid                                       ExpressionGUID;                                           // 0x0000(0x0010)
	float                                              StartTime;                                                // 0x0010(0x0004) (Transient)
	struct FName                                       ParameterName;                                            // 0x0014(0x0008) (Edit)
	unsigned long                                      bLoop : 1;                                                // 0x001C(0x0004) (Edit)
	unsigned long                                      bAutoActivate : 1;                                        // 0x001C(0x0004) (Edit)
	float                                              CycleTime;                                                // 0x0020(0x0004) (Edit)
	unsigned long                                      bNormalizeTime : 1;                                       // 0x0024(0x0004) (Edit)
	float                                              OffsetTime;                                               // 0x0028(0x0004) (Edit)
	unsigned long                                      bOffsetFromEnd : 1;                                       // 0x002C(0x0004) (Edit)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.FontParameterValueOverTime
// 0x0008 (0x0038 - 0x0030)
struct FFontParameterValueOverTime : public FParameterValueOverTime
{
	class UFont*                                       FontValue;                                                // 0x0030(0x0004) (Edit)
	int                                                FontPage;                                                 // 0x0034(0x0004) (Edit)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ScalarParameterValueOverTime
// 0x0014 (0x0044 - 0x0030)
struct FScalarParameterValueOverTime : public FParameterValueOverTime
{
	float                                              ParameterValue;                                           // 0x0030(0x0004) (Edit)
	struct FInterpCurveFloat                           ParameterValueCurve;                                      // 0x0034(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.TextureParameterValueOverTime
// 0x0004 (0x0034 - 0x0030)
struct FTextureParameterValueOverTime : public FParameterValueOverTime
{
	class UTexture*                                    ParameterValue;                                           // 0x0030(0x0004) (Edit)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.VectorParameterValueOverTime
// 0x0020 (0x0050 - 0x0030)
struct FVectorParameterValueOverTime : public FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                           // 0x0030(0x0010) (Edit)
	struct FInterpCurveVector                          ParameterValueCurve;                                      // 0x0040(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                Count;                                                    // 0x0000(0x0004) (Edit)
	int                                                CountLow;                                                 // 0x0004(0x0004) (Edit)
	float                                              Time;                                                     // 0x0008(0x0004) (Edit)
};

// ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned long                                      bModify : 1;                                              // 0x0000(0x0004) (Edit)
	unsigned long                                      bScale : 1;                                               // 0x0000(0x0004) (Edit)
	unsigned long                                      bLock : 1;                                                // 0x0000(0x0004) (Edit)
};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned long                                      bProcessDuringSpawn : 1;                                  // 0x0000(0x0004) (Edit)
	unsigned long                                      bProcessDuringUpdate : 1;                                 // 0x0000(0x0004) (Edit)
	unsigned long                                      bUseEmitterTime : 1;                                      // 0x0000(0x0004) (Edit)
};

// ScriptStruct Engine.ParticleModuleTypeDataPhysX.PhysXEmitterVerticalLodProperties
// 0x0010
struct FPhysXEmitterVerticalLodProperties
{
	float                                              WeightForFifo;                                            // 0x0000(0x0004) (Edit)
	float                                              WeightForSpawnLod;                                        // 0x0004(0x0004) (Edit)
	float                                              SpawnLodRateVsLifeBias;                                   // 0x0008(0x0004) (Edit)
	float                                              RelativeFadeoutTime;                                      // 0x000C(0x0004) (Edit)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
// 0x0028
struct FParticleSysParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit)
	TEnumAsByte<EParticleSysParamType>                 ParamType;                                                // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Scalar;                                                   // 0x000C(0x0004) (Edit)
	struct FVector                                     Vector;                                                   // 0x0010(0x000C) (Edit)
	struct FColor                                      Color;                                                    // 0x001C(0x0004) (Edit)
	class AActor*                                      Actor;                                                    // 0x0020(0x0004) (Edit)
	class UMaterialInterface*                          Material;                                                 // 0x0024(0x0004) (Edit)
};

// ScriptStruct Engine.PrimitiveComponent.MaterialViewRelevance
// 0x0004
struct FMaterialViewRelevance
{
	unsigned long                                      bOpaque : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bTranslucent : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bDistortion : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bLit : 1;                                                 // 0x0000(0x0004)
	unsigned long                                      bUsesSceneColor : 1;                                      // 0x0000(0x0004)
};

// ScriptStruct Engine.Actor.RigidBodyState
// 0x0035
struct FRigidBodyState
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C)
	struct FQuat                                       Quaternion;                                               // 0x000C(0x0010)
	struct FVector                                     LinVel;                                                   // 0x001C(0x000C)
	struct FVector                                     AngVel;                                                   // 0x0028(0x000C)
	unsigned char                                      bNewData;                                                 // 0x0034(0x0001)
};

// ScriptStruct Engine.RB_ConstraintSetup.LinearDOFSetup
// 0x0008
struct FLinearDOFSetup
{
	unsigned char                                      bLimited;                                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LimitSize;                                                // 0x0004(0x0004) (Edit)
};

// ScriptStruct Engine.SVehicle.VehicleState
// 0x0044
struct FVehicleState
{
	struct FRigidBodyState                             RBState;                                                  // 0x0000(0x0038)
	unsigned char                                      ServerBrake;                                              // 0x0038(0x0001)
	unsigned char                                      ServerGas;                                                // 0x0039(0x0001)
	unsigned char                                      ServerSteering;                                           // 0x003A(0x0001)
	unsigned char                                      ServerRise;                                               // 0x003B(0x0001)
	unsigned long                                      bServerHandbrake : 1;                                     // 0x003C(0x0004)
	int                                                ServerView;                                               // 0x0040(0x0004)
};

// ScriptStruct Engine.SequenceOp.SeqOpInputLink
// 0x0020
struct FSeqOpInputLink
{
	struct FString                                     LinkDesc;                                                 // 0x0000(0x000C) (NeedCtorLink)
	unsigned long                                      bHasImpulse : 1;                                          // 0x000C(0x0004)
	unsigned long                                      bDisabled : 1;                                            // 0x000C(0x0004)
	unsigned long                                      bDisabledPIE : 1;                                         // 0x000C(0x0004)
	class USequenceOp*                                 LinkedOp;                                                 // 0x0010(0x0004)
	int                                                DrawY;                                                    // 0x0014(0x0004)
	unsigned long                                      bHidden : 1;                                              // 0x0018(0x0004)
	float                                              ActivateDelay;                                            // 0x001C(0x0004)
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputInputLink
// 0x0008
struct FSeqOpOutputInputLink
{
	class USequenceOp*                                 LinkedOp;                                                 // 0x0000(0x0004)
	int                                                InputLinkIdx;                                             // 0x0004(0x0004)
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputLink
// 0x002C
struct FSeqOpOutputLink
{
	TArray<struct FSeqOpOutputInputLink>               Links;                                                    // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     LinkDesc;                                                 // 0x000C(0x000C) (NeedCtorLink)
	unsigned long                                      bHasImpulse : 1;                                          // 0x0018(0x0004)
	unsigned long                                      bDisabled : 1;                                            // 0x0018(0x0004)
	unsigned long                                      bDisabledPIE : 1;                                         // 0x0018(0x0004)
	class USequenceOp*                                 LinkedOp;                                                 // 0x001C(0x0004)
	float                                              ActivateDelay;                                            // 0x0020(0x0004)
	int                                                DrawY;                                                    // 0x0024(0x0004)
	unsigned long                                      bHidden : 1;                                              // 0x0028(0x0004)
};

// ScriptStruct Engine.SequenceOp.SeqVarLink
// 0x0040
struct FSeqVarLink
{
	class UClass*                                      ExpectedType;                                             // 0x0000(0x0004)
	TArray<class USequenceVariable*>                   LinkedVariables;                                          // 0x0004(0x000C) (NeedCtorLink)
	struct FString                                     LinkDesc;                                                 // 0x0010(0x000C) (NeedCtorLink)
	struct FName                                       LinkVar;                                                  // 0x001C(0x0008)
	struct FName                                       PropertyName;                                             // 0x0024(0x0008)
	unsigned long                                      bWriteable : 1;                                           // 0x002C(0x0004)
	unsigned long                                      bHidden : 1;                                              // 0x002C(0x0004)
	int                                                MinVars;                                                  // 0x0030(0x0004)
	int                                                MaxVars;                                                  // 0x0034(0x0004)
	int                                                DrawX;                                                    // 0x0038(0x0004)
	class UProperty*                                   CachedProperty;                                           // 0x003C(0x0004) (Const, Transient)
};

// ScriptStruct Engine.SequenceOp.SeqEventLink
// 0x0024
struct FSeqEventLink
{
	class UClass*                                      ExpectedType;                                             // 0x0000(0x0004)
	TArray<class USequenceEvent*>                      LinkedEvents;                                             // 0x0004(0x000C) (NeedCtorLink)
	struct FString                                     LinkDesc;                                                 // 0x0010(0x000C) (NeedCtorLink)
	int                                                DrawX;                                                    // 0x001C(0x0004)
	unsigned long                                      bHidden : 1;                                              // 0x0020(0x0004)
};

// ScriptStruct Engine.SeqAct_CrowdSpawner.RandomCrowdAgentData
// 0x0014
struct FRandomCrowdAgentData
{
	class USkeletalMesh*                               FlockMesh;                                                // 0x0000(0x0004) (Edit)
	class UAnimTree*                                   FlockAnimTree;                                            // 0x0004(0x0004) (Edit)
	TArray<class UMaterialInterface*>                  RandomMaterials;                                          // 0x0008(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct Engine.SeqAct_CrowdSpawner.CrowdTargetActionInfo
// 0x000C
struct FCrowdTargetActionInfo
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008) (Edit)
	unsigned long                                      bFireEffects : 1;                                         // 0x0008(0x0004) (Edit)
};

// ScriptStruct Engine.SeqAct_CrowdSpawner.CrowdAttachmentInfo
// 0x0014
struct FCrowdAttachmentInfo
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0004) (Edit)
	float                                              Chance;                                                   // 0x0004(0x0004) (Edit)
	struct FVector                                     Scale3D;                                                  // 0x0008(0x000C) (Edit)
};

// ScriptStruct Engine.SeqAct_CrowdSpawner.CrowdAttachmentList
// 0x0014
struct FCrowdAttachmentList
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit)
	TArray<struct FCrowdAttachmentInfo>                List;                                                     // 0x0008(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct Engine.SeqAct_MultiLevelStreaming.LevelStreamingNameCombo
// 0x000C
struct FLevelStreamingNameCombo
{
	class ULevelStreaming*                             Level;                                                    // 0x0000(0x0004) (Const)
	struct FName                                       LevelName;                                                // 0x0004(0x0008) (Edit, Const)
};

// ScriptStruct Engine.SeqAct_RangeSwitch.SwitchRange
// 0x0008
struct FSwitchRange
{
	int                                                Min;                                                      // 0x0000(0x0004) (Edit)
	int                                                Max;                                                      // 0x0004(0x0004) (Edit)
};

// ScriptStruct Engine.SeqCond_SwitchClass.SwitchClassInfo
// 0x0009
struct FSwitchClassInfo
{
	struct FName                                       ClassName;                                                // 0x0000(0x0008) (Edit)
	unsigned char                                      bFallThru;                                                // 0x0008(0x0001) (Edit)
};

// ScriptStruct Engine.SeqCond_SwitchName.SwitchNameCase
// 0x000C
struct FSwitchNameCase
{
	struct FName                                       NameValue;                                                // 0x0000(0x0008) (Edit)
	unsigned long                                      bFallThru : 1;                                            // 0x0008(0x0004) (Edit)
};

// ScriptStruct Engine.SeqCond_SwitchObject.SwitchObjectCase
// 0x0008
struct FSwitchObjectCase
{
	class UObject*                                     ObjectValue;                                              // 0x0000(0x0004) (Edit)
	unsigned long                                      bFallThru : 1;                                            // 0x0004(0x0004) (Edit)
	unsigned long                                      bDefaultValue : 1;                                        // 0x0004(0x0004) (Edit)
};

// ScriptStruct Engine.SequenceEvent.QueuedActivationInfo
// 0x0018
struct FQueuedActivationInfo
{
	class AActor*                                      InOriginator;                                             // 0x0000(0x0004)
	class AActor*                                      InInstigator;                                             // 0x0004(0x0004)
	TArray<int>                                        ActivateIndices;                                          // 0x0008(0x000C) (NeedCtorLink)
	unsigned long                                      bPushTop : 1;                                             // 0x0014(0x0004)
};

// ScriptStruct Engine.Sequence.ActivateOp
// 0x0010
struct FActivateOp
{
	class USequenceOp*                                 ActivatorOp;                                              // 0x0000(0x0004)
	class USequenceOp*                                 Op;                                                       // 0x0004(0x0004)
	int                                                InputIdx;                                                 // 0x0008(0x0004)
	float                                              RemainingDelay;                                           // 0x000C(0x0004)
};

// ScriptStruct Engine.SoundNodeAmbientNonLoop.AmbientSoundSlot
// 0x0010
struct FAmbientSoundSlot
{
	class USoundNodeWave*                              Wave;                                                     // 0x0000(0x0004) (Edit)
	float                                              PitchScale;                                               // 0x0004(0x0004) (Edit)
	float                                              VolumeScale;                                              // 0x0008(0x0004) (Edit)
	float                                              Weight;                                                   // 0x000C(0x0004) (Edit)
};

// ScriptStruct Engine.SoundNodeDistanceCrossFade.DistanceDatum
// 0x003C
struct FDistanceDatum
{
	struct FRawDistributionFloat                       FadeInDistance;                                           // 0x0000(0x001C) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       FadeOutDistance;                                          // 0x001C(0x001C) (Edit, Component, NeedCtorLink)
	float                                              Volume;                                                   // 0x0038(0x0004) (Edit)
};

// ScriptStruct Engine.Terrain.TerrainHeight
// 0x0000
struct FTerrainHeight
{

};

// ScriptStruct Engine.Terrain.TerrainInfoData
// 0x0000
struct FTerrainInfoData
{

};

// ScriptStruct Engine.Terrain.TerrainLayer
// 0x0030
struct FTerrainLayer
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (Edit, NeedCtorLink)
	class UTerrainLayerSetup*                          Setup;                                                    // 0x000C(0x0004) (Edit)
	int                                                AlphaMapIndex;                                            // 0x0010(0x0004)
	unsigned long                                      Highlighted : 1;                                          // 0x0014(0x0004) (Edit)
	unsigned long                                      WireframeHighlighted : 1;                                 // 0x0014(0x0004) (Edit)
	unsigned long                                      Hidden : 1;                                               // 0x0014(0x0004) (Edit)
	struct FColor                                      HighlightColor;                                           // 0x0018(0x0004) (Edit)
	struct FColor                                      WireframeColor;                                           // 0x001C(0x0004) (Edit)
	int                                                MinX;                                                     // 0x0020(0x0004)
	int                                                MinY;                                                     // 0x0024(0x0004)
	int                                                MaxX;                                                     // 0x0028(0x0004)
	int                                                MaxY;                                                     // 0x002C(0x0004)
};

// ScriptStruct Engine.Terrain.TerrainDecorationInstance
// 0x0014
struct FTerrainDecorationInstance
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0004) (ExportObject, Component, EditInline)
	float                                              X;                                                        // 0x0004(0x0004)
	float                                              Y;                                                        // 0x0008(0x0004)
	float                                              Scale;                                                    // 0x000C(0x0004)
	int                                                Yaw;                                                      // 0x0010(0x0004)
};

// ScriptStruct Engine.Terrain.TerrainDecoration
// 0x0024
struct FTerrainDecoration
{
	class UPrimitiveComponentFactory*                  Factory;                                                  // 0x0000(0x0004) (Edit, EditInline)
	float                                              MinScale;                                                 // 0x0004(0x0004) (Edit)
	float                                              MaxScale;                                                 // 0x0008(0x0004) (Edit)
	float                                              Density;                                                  // 0x000C(0x0004) (Edit)
	float                                              SlopeRotationBlend;                                       // 0x0010(0x0004) (Edit)
	int                                                RandSeed;                                                 // 0x0014(0x0004) (Edit)
	TArray<struct FTerrainDecorationInstance>          Instances;                                                // 0x0018(0x000C) (Component, NeedCtorLink)
};

// ScriptStruct Engine.Terrain.TerrainDecoLayer
// 0x001C
struct FTerrainDecoLayer
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (Edit, NeedCtorLink)
	TArray<struct FTerrainDecoration>                  Decorations;                                              // 0x000C(0x000C) (Edit, Component, NeedCtorLink)
	int                                                AlphaMapIndex;                                            // 0x0018(0x0004)
};

// ScriptStruct Engine.Terrain.AlphaMap
// 0x0000
struct FAlphaMap
{

};

// ScriptStruct Engine.Terrain.TerrainWeightedMaterial
// 0x0000
struct ATerrain_FTerrainWeightedMaterial
{

};

// ScriptStruct Engine.Terrain.CachedTerrainMaterialArray
// 0x000C
struct FCachedTerrainMaterialArray
{
	TArray<struct FPointer>                            CachedMaterials;                                          // 0x0000(0x000C) (Const, Native, DuplicateTransient)
};

// ScriptStruct Engine.Terrain.SelectedTerrainVertex
// 0x000C
struct FSelectedTerrainVertex
{
	int                                                X;                                                        // 0x0000(0x0004)
	int                                                Y;                                                        // 0x0004(0x0004)
	int                                                Weight;                                                   // 0x0008(0x0004)
};

// ScriptStruct Engine.TerrainComponent.TerrainBVTree
// 0x000C
struct FTerrainBVTree
{
	TArray<int>                                        Nodes;                                                    // 0x0000(0x000C) (Const, Native)
};

// ScriptStruct Engine.TerrainLayerSetup.FilterLimit
// 0x0010
struct FFilterLimit
{
	unsigned long                                      Enabled : 1;                                              // 0x0000(0x0004) (Edit)
	float                                              Base;                                                     // 0x0004(0x0004) (Edit)
	float                                              NoiseScale;                                               // 0x0008(0x0004) (Edit)
	float                                              NoiseAmount;                                              // 0x000C(0x0004) (Edit)
};

// ScriptStruct Engine.TerrainLayerSetup.TerrainFilteredMaterial
// 0x0054
struct FTerrainFilteredMaterial
{
	unsigned long                                      UseNoise : 1;                                             // 0x0000(0x0004) (Edit)
	float                                              NoiseScale;                                               // 0x0004(0x0004) (Edit)
	float                                              NoisePercent;                                             // 0x0008(0x0004) (Edit)
	struct FFilterLimit                                MinHeight;                                                // 0x000C(0x0010) (Edit)
	struct FFilterLimit                                MaxHeight;                                                // 0x001C(0x0010) (Edit)
	struct FFilterLimit                                MinSlope;                                                 // 0x002C(0x0010) (Edit)
	struct FFilterLimit                                MaxSlope;                                                 // 0x003C(0x0010) (Edit)
	float                                              Alpha;                                                    // 0x004C(0x0004) (Edit)
	class UTerrainMaterial*                            Material;                                                 // 0x0050(0x0004) (Edit)
};

// ScriptStruct Engine.TerrainMaterial.TerrainFoliageMesh
// 0x002C
struct FTerrainFoliageMesh
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0004) (Edit)
	class UMaterialInterface*                          Material;                                                 // 0x0004(0x0004) (Edit)
	int                                                Density;                                                  // 0x0008(0x0004) (Edit)
	float                                              MaxDrawRadius;                                            // 0x000C(0x0004) (Edit)
	float                                              MinTransitionRadius;                                      // 0x0010(0x0004) (Edit)
	float                                              MinScale;                                                 // 0x0014(0x0004) (Edit)
	float                                              MaxScale;                                                 // 0x0018(0x0004) (Edit)
	int                                                Seed;                                                     // 0x001C(0x0004) (Edit)
	float                                              SwayScale;                                                // 0x0020(0x0004) (Edit)
	float                                              AlphaMapThreshold;                                        // 0x0024(0x0004) (Edit)
	float                                              SlopeRotationBlend;                                       // 0x0028(0x0004) (Edit)
};

// ScriptStruct Engine.UIRoot.UIRangeData
// 0x0014
struct FUIRangeData
{
	float                                              CurrentValue;                                             // 0x0000(0x0004) (Edit)
	float                                              MinValue;                                                 // 0x0004(0x0004) (Edit)
	float                                              MaxValue;                                                 // 0x0008(0x0004) (Edit)
	float                                              NudgeValue;                                               // 0x000C(0x0004) (Edit)
	unsigned long                                      bIntRange : 1;                                            // 0x0010(0x0004) (Edit)
};

// ScriptStruct Engine.UIRoot.UIProviderScriptFieldValue
// 0x003C
struct FUIProviderScriptFieldValue
{
	struct FName                                       PropertyTag;                                              // 0x0000(0x0008) (Const)
	TEnumAsByte<EUIDataProviderFieldType>              PropertyType;                                             // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FString                                     StringValue;                                              // 0x000C(0x000C) (NeedCtorLink)
	class USurface*                                    ImageValue;                                               // 0x0018(0x0004)
	TArray<int>                                        ArrayValue;                                               // 0x001C(0x000C) (NeedCtorLink)
	struct FUIRangeData                                RangeValue;                                               // 0x0028(0x0014)
};

// ScriptStruct Engine.UIRoot.UIProviderFieldValue
// 0x0004 (0x0040 - 0x003C)
struct FUIProviderFieldValue : public FUIProviderScriptFieldValue
{
	struct FPointer                                    CustomStringNode;                                         // 0x003C(0x0004) (Const, Native, Transient)
};

// ScriptStruct Engine.DataStoreClient.PlayerDataStoreGroup
// 0x0010
struct FPlayerDataStoreGroup
{
	class ULocalPlayer*                                PlayerOwner;                                              // 0x0000(0x0004) (Const, Transient, AlwaysInit)
	TArray<class UUIDataStore*>                        DataStores;                                               // 0x0004(0x000C) (Const, Transient, AlwaysInit, NeedCtorLink)
};

// ScriptStruct Engine.Input.KeyBind
// 0x0018
struct FKeyBind
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Config)
	struct FString                                     Command;                                                  // 0x0008(0x000C) (Config, NeedCtorLink)
	unsigned long                                      Control : 1;                                              // 0x0014(0x0004) (Config)
	unsigned long                                      Shift : 1;                                                // 0x0014(0x0004) (Config)
	unsigned long                                      Alt : 1;                                                  // 0x0014(0x0004) (Config)
};

// ScriptStruct Engine.Input.InputOverridePair
// 0x0020
struct FInputOverridePair
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Config)
	struct FKeyBind                                    Binding;                                                  // 0x0008(0x0018) (Config, NeedCtorLink)
};

// ScriptStruct Engine.UIRoot.WIDGET_ID
// 0x0000 (0x0010 - 0x0010)
struct FWIDGET_ID : public FGuid
{

};

// ScriptStruct Engine.UIRoot.InputEventParameters
// 0x0020
struct FInputEventParameters
{
	int                                                PlayerIndex;                                              // 0x0000(0x0004) (Const, Transient, AlwaysInit)
	int                                                ControllerId;                                             // 0x0004(0x0004) (Const, Transient, AlwaysInit)
	struct FName                                       InputKeyName;                                             // 0x0008(0x0008) (Const, Transient, AlwaysInit)
	TEnumAsByte<EInputEvent>                           EventType;                                                // 0x0010(0x0001) (Const, Transient, AlwaysInit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              InputDelta;                                               // 0x0014(0x0004) (Const, Transient, AlwaysInit)
	float                                              DeltaTime;                                                // 0x0018(0x0004) (Const, Transient, AlwaysInit)
	unsigned long                                      bAltPressed : 1;                                          // 0x001C(0x0004) (Const, Transient, AlwaysInit)
	unsigned long                                      bCtrlPressed : 1;                                         // 0x001C(0x0004) (Const, Transient, AlwaysInit)
	unsigned long                                      bShiftPressed : 1;                                        // 0x001C(0x0004) (Const, Transient, AlwaysInit)
};

// ScriptStruct Engine.UIRoot.SubscribedInputEventParameters
// 0x0008 (0x0028 - 0x0020)
struct FSubscribedInputEventParameters : public FInputEventParameters
{
	struct FName                                       InputAliasName;                                           // 0x0020(0x0008) (Const, Transient, AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIScreenValue_Bounds
// 0x0019
struct FUIScreenValue_Bounds
{
	float                                              Value[0x4];                                               // 0x0000(0x0004) (Edit, EditConst)
	TEnumAsByte<EPositionEvalType>                     ScaleType[0x4];                                           // 0x0010(0x0001) (Edit, EditConst)
	unsigned char                                      bInvalidated[0x4];                                        // 0x0014(0x0001) (Transient)
	TEnumAsByte<EUIAspectRatioConstraint>              AspectRatioMode;                                          // 0x0018(0x0001) (Edit)
};

// ScriptStruct Engine.UIRoot.PlayerInteractionData
// 0x0008
struct FPlayerInteractionData
{
	class UUIObject*                                   FocusedControl;                                           // 0x0000(0x0004) (Transient, AlwaysInit)
	class UUIObject*                                   LastFocusedControl;                                       // 0x0004(0x0004) (Transient, AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIFocusPropagationData
// 0x0014
struct FUIFocusPropagationData
{
	class UUIObject*                                   FirstFocusTarget;                                         // 0x0000(0x0004) (Edit, Const, Transient, EditConst)
	class UUIObject*                                   LastFocusTarget;                                          // 0x0004(0x0004) (Edit, Const, Transient, EditConst)
	class UUIObject*                                   NextFocusTarget;                                          // 0x0008(0x0004) (Edit, Const, Transient, EditConst)
	class UUIObject*                                   PrevFocusTarget;                                          // 0x000C(0x0004) (Edit, Const, Transient, EditConst)
	unsigned long                                      bPendingReceiveFocus : 1;                                 // 0x0010(0x0004) (Transient)
};

// ScriptStruct Engine.UIRoot.DefaultEventSpecification
// 0x0008
struct FDefaultEventSpecification
{
	class UUIEvent*                                    EventTemplate;                                            // 0x0000(0x0004)
	class UClass*                                      EventState;                                               // 0x0004(0x0004)
};

// ScriptStruct Engine.UIRoot.RawInputKeyEventData
// 0x0009
struct FRawInputKeyEventData
{
	struct FName                                       InputKeyName;                                             // 0x0000(0x0008)
	unsigned char                                      ModifierKeyFlags;                                         // 0x0008(0x0001)
};

// ScriptStruct Engine.UIRoot.UIInputActionAlias
// 0x0014
struct FUIInputActionAlias
{
	struct FName                                       InputAliasName;                                           // 0x0000(0x0008)
	TArray<struct FRawInputKeyEventData>               LinkedInputKeys;                                          // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.UIRoot.UIInputAliasStateMap
// 0x001C
struct FUIInputAliasStateMap
{
	struct FString                                     StateClassName;                                           // 0x0000(0x000C) (NeedCtorLink)
	class UClass*                                      State;                                                    // 0x000C(0x0004)
	TArray<struct FUIInputActionAlias>                 StateInputAliases;                                        // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.UIRoot.UIInputAliasClassMap
// 0x0094
struct FUIInputAliasClassMap
{
	struct FString                                     WidgetClassName;                                          // 0x0000(0x000C) (NeedCtorLink)
	class UClass*                                      WidgetClass;                                              // 0x000C(0x0004)
	TArray<struct FUIInputAliasStateMap>               WidgetStates;                                             // 0x0010(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x001C(0x003C) UNKNOWN PROPERTY: MapProperty Engine.UIRoot.UIInputAliasClassMap.StateLookupTable
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0058(0x003C) UNKNOWN PROPERTY: MapProperty Engine.UIRoot.UIInputAliasClassMap.StateReverseLookupTable
};

// ScriptStruct Engine.UIRoot.UIAxisEmulationDefinition
// 0x0024
struct FUIAxisEmulationDefinition
{
	struct FName                                       AxisInputKey;                                             // 0x0000(0x0008)
	struct FName                                       AdjacentAxisInputKey;                                     // 0x0008(0x0008)
	unsigned long                                      bEmulateButtonPress : 1;                                  // 0x0010(0x0004)
	struct FName                                       InputKeyToEmulate[0x2];                                   // 0x0014(0x0008)
};

// ScriptStruct Engine.UIInteraction.UIKeyRepeatData
// 0x0010
struct FUIKeyRepeatData
{
	struct FName                                       CurrentRepeatKey;                                         // 0x0000(0x0008) (AlwaysInit)
	struct FDouble                                     NextRepeatTime;                                           // 0x0008(0x0008) (AlwaysInit)
};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationData
// 0x0004 (0x0014 - 0x0010)
struct FUIAxisEmulationData : public FUIKeyRepeatData
{
	unsigned long                                      bEnabled : 1;                                             // 0x0010(0x0004) (AlwaysInit)
};

// ScriptStruct Engine.UIRoot.InputKeyAction
// 0x0018
struct FInputKeyAction
{
	struct FName                                       InputKeyName;                                             // 0x0000(0x0008) (Edit)
	TEnumAsByte<EInputEvent>                           InputKeyState;                                            // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TArray<class USequenceAction*>                     ActionsToExecute;                                         // 0x000C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct Engine.UIRoot.TextureCoordinates
// 0x0010
struct FTextureCoordinates
{
	float                                              U;                                                        // 0x0000(0x0004) (Edit)
	float                                              V;                                                        // 0x0004(0x0004) (Edit)
	float                                              UL;                                                       // 0x0008(0x0004) (Edit)
	float                                              VL;                                                       // 0x000C(0x0004) (Edit)
};

// ScriptStruct Engine.UIRoot.UITextAttributes
// 0x0004
struct FUITextAttributes
{
	unsigned long                                      Bold : 1;                                                 // 0x0000(0x0004) (Edit)
	unsigned long                                      Italic : 1;                                               // 0x0000(0x0004) (Edit)
	unsigned long                                      Underline : 1;                                            // 0x0000(0x0004) (Edit)
	unsigned long                                      Shadow : 1;                                               // 0x0000(0x0004) (Edit)
	unsigned long                                      Strikethrough : 1;                                        // 0x0000(0x0004) (Edit)
};

// ScriptStruct Engine.UIRoot.UIScreenValue_Position
// 0x000A
struct FUIScreenValue_Position
{
	float                                              Value[0x2];                                               // 0x0000(0x0004) (Edit)
	TEnumAsByte<EPositionEvalType>                     ScaleType[0x2];                                           // 0x0008(0x0001) (Edit)
};

// ScriptStruct Engine.UIRoot.ScreenPositionRange
// 0x0000 (0x000A - 0x000A)
struct FScreenPositionRange : public FUIScreenValue_Position
{

};

// ScriptStruct Engine.UIRoot.UIImageAdjustmentData
// 0x000E
struct FUIImageAdjustmentData
{
	struct FScreenPositionRange                        ProtectedRegion;                                          // 0x0000(0x000C) (Edit)
	TEnumAsByte<EMaterialAdjustmentType>               AdjustmentType;                                           // 0x000C(0x0001) (Edit)
	TEnumAsByte<EUIAlignment>                          Alignment;                                                // 0x000D(0x0001) (Edit)
};

// ScriptStruct Engine.UIRoot.TextAutoScaleValue
// 0x0005
struct FTextAutoScaleValue
{
	float                                              MinScale;                                                 // 0x0000(0x0004) (Edit)
	TEnumAsByte<ETextAutoScaleMode>                    AutoScaleMode;                                            // 0x0004(0x0001) (Edit)
};

// ScriptStruct Engine.UIRoot.UICombinedStyleData
// 0x008C
struct FUICombinedStyleData
{
	struct FLinearColor                                TextColor;                                                // 0x0000(0x0010) (AlwaysInit)
	struct FLinearColor                                ImageColor;                                               // 0x0010(0x0010) (AlwaysInit)
	float                                              TextPadding[0x2];                                         // 0x0020(0x0004) (AlwaysInit)
	float                                              ImagePadding[0x2];                                        // 0x0028(0x0004) (AlwaysInit)
	class UFont*                                       DrawFont;                                                 // 0x0030(0x0004) (AlwaysInit)
	class USurface*                                    FallbackImage;                                            // 0x0034(0x0004) (AlwaysInit)
	struct FTextureCoordinates                         AtlasCoords;                                              // 0x0038(0x0010) (AlwaysInit)
	struct FUITextAttributes                           TextAttributes;                                           // 0x0048(0x0004) (AlwaysInit)
	TEnumAsByte<EUIAlignment>                          TextAlignment[0x2];                                       // 0x004C(0x0001) (AlwaysInit)
	TEnumAsByte<ETextClipMode>                         TextClipMode;                                             // 0x004E(0x0001) (AlwaysInit)
	TEnumAsByte<EUIAlignment>                          TextClipAlignment;                                        // 0x004F(0x0001) (AlwaysInit)
	struct FUIImageAdjustmentData                      AdjustmentType[0x2];                                      // 0x0050(0x0010) (AlwaysInit)
	struct FTextAutoScaleValue                         TextAutoScaling;                                          // 0x0070(0x0008) (AlwaysInit)
	struct FVector2D                                   TextScale;                                                // 0x0078(0x0008) (AlwaysInit)
	struct FVector2D                                   TextSpacingAdjust;                                        // 0x0080(0x0008) (AlwaysInit)
	unsigned long                                      bInitialized : 1;                                         // 0x0088(0x0004) (Const, AlwaysInit)
};

// ScriptStruct Engine.UIDataProvider.UIDataProviderField
// 0x0018
struct FUIDataProviderField
{
	struct FName                                       FieldTag;                                                 // 0x0000(0x0008) (AlwaysInit)
	TEnumAsByte<EUIDataProviderFieldType>              FieldType;                                                // 0x0008(0x0001) (AlwaysInit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TArray<class UUIDataProvider*>                     FieldProviders;                                           // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct Engine.UISkin.UISoundCue
// 0x000C
struct FUISoundCue
{
	struct FName                                       SoundName;                                                // 0x0000(0x0008)
	class USoundCue*                                   SoundToPlay;                                              // 0x0008(0x0004)
};

// ScriptStruct Engine.UIRoot.STYLE_ID
// 0x0000 (0x0010 - 0x0010)
struct FSTYLE_ID : public FGuid
{

};

// ScriptStruct Engine.UIRoot.UIStyleReference
// 0x0020
struct FUIStyleReference
{
	struct FName                                       DefaultStyleTag;                                          // 0x0000(0x0008)
	class UClass*                                      RequiredStyleClass;                                       // 0x0008(0x0004) (Const)
	struct FSTYLE_ID                                   AssignedStyleID;                                          // 0x000C(0x0010) (Const)
	class UUIStyle*                                    ResolvedStyle;                                            // 0x001C(0x0004) (Const, Transient)
};

// ScriptStruct Engine.UIRoot.UINavigationData
// 0x0024
struct FUINavigationData
{
	class UUIObject*                                   NavigationTarget[0x4];                                    // 0x0000(0x0004) (Edit, Transient, EditConst)
	class UUIObject*                                   ForcedNavigationTarget[0x4];                              // 0x0010(0x0004) (Edit, EditConst)
	unsigned char                                      bNullOverride[0x4];                                       // 0x0020(0x0001) (Edit)
};

// ScriptStruct Engine.UIRoot.UIScreenValue_DockPadding
// 0x0014
struct FUIScreenValue_DockPadding
{
	float                                              PaddingValue[0x4];                                        // 0x0000(0x0004) (Edit, EditConst)
	TEnumAsByte<EUIDockPaddingEvalType>                PaddingScaleType[0x4];                                    // 0x0010(0x0001) (Edit, EditConst)
};

// ScriptStruct Engine.UIRoot.UIDockingSet
// 0x0038
struct FUIDockingSet
{
	class UUIObject*                                   OwnerWidget;                                              // 0x0000(0x0004) (Const)
	class UUIObject*                                   TargetWidget[0x4];                                        // 0x0004(0x0004) (Edit, EditConst)
	struct FUIScreenValue_DockPadding                  DockPadding;                                              // 0x0014(0x0014) (Edit, EditConst)
	unsigned long                                      bLockWidthWhenDocked : 1;                                 // 0x0028(0x0004) (Edit)
	unsigned long                                      bLockHeightWhenDocked : 1;                                // 0x0028(0x0004) (Edit)
	TEnumAsByte<EUIWidgetFace>                         TargetFace[0x4];                                          // 0x002C(0x0001) (Edit, EditConst)
	unsigned char                                      bResolved[0x4];                                           // 0x0030(0x0001) (Transient)
	unsigned char                                      bLinking[0x4];                                            // 0x0034(0x0001) (Transient)
};

// ScriptStruct Engine.UIRoot.UIAnchorPosition
// 0x0006 (0x0010 - 0x000A)
struct FUIAnchorPosition : public FUIScreenValue_Position
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              ZDepth;                                                   // 0x000C(0x0004) (Edit)
};

// ScriptStruct Engine.UIRoot.UIRotation
// 0x0061
struct FUIRotation
{
	struct FRotator                                    Rotation;                                                 // 0x0000(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FMatrix                                     TransformMatrix;                                          // 0x0010(0x0040) (Transient)
	struct FUIAnchorPosition                           AnchorPosition;                                           // 0x0050(0x0010) (Edit)
	TEnumAsByte<ERotationAnchor>                       AnchorType;                                               // 0x0060(0x0001) (Edit)
};

// ScriptStruct Engine.UIRoot.UIDataStoreBinding
// 0x0030
struct FUIDataStoreBinding
{
	TScriptInterface<class UUIDataStoreSubscriber>     Subscriber;                                               // 0x0000(0x0008) (Const, Transient)
	TEnumAsByte<EUIDataProviderFieldType>              RequiredFieldType;                                        // 0x0008(0x0001) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FString                                     MarkupString;                                             // 0x000C(0x000C) (Edit, Const, NeedCtorLink)
	int                                                BindingIndex;                                             // 0x0018(0x0004) (Const, Transient)
	struct FName                                       DataStoreName;                                            // 0x001C(0x0008) (Const, Transient)
	struct FName                                       DataStoreField;                                           // 0x0024(0x0008) (Const, Transient)
	class UUIDataStore*                                ResolvedDataStore;                                        // 0x002C(0x0004) (Const, Transient)
};

// ScriptStruct Engine.UIAnimation.UIAnimSeqRef
// 0x002C
struct FUIAnimSeqRef
{
	class UUIAnimationSeq*                             SeqRef;                                                   // 0x0000(0x0004)
	float                                              PlaybackRate;                                             // 0x0004(0x0004)
	float                                              AnimTime;                                                 // 0x0008(0x0004)
	unsigned long                                      bIsPlaying : 1;                                           // 0x000C(0x0004)
	unsigned long                                      bIsLooping : 1;                                           // 0x000C(0x0004)
	int                                                LoopCount;                                                // 0x0010(0x0004)
	struct FVector                                     InitialRenderOffset;                                      // 0x0014(0x000C)
	struct FRotator                                    InitialRotation;                                          // 0x0020(0x000C)
};

// ScriptStruct Engine.CurrentGameDataStore.GameDataProviderTypes
// 0x000C
struct FGameDataProviderTypes
{
	class UClass*                                      GameDataProviderClass;                                    // 0x0000(0x0004) (Const)
	class UClass*                                      PlayerDataProviderClass;                                  // 0x0004(0x0004) (Const)
	class UClass*                                      TeamDataProviderClass;                                    // 0x0008(0x0004) (Const)
};

// ScriptStruct Engine.PlayerOwnerDataStore.PlayerDataProviderTypes
// 0x0010
struct FPlayerDataProviderTypes
{
	class UClass*                                      PlayerOwnerDataProviderClass;                             // 0x0000(0x0004) (Const)
	class UClass*                                      CurrentWeaponDataProviderClass;                           // 0x0004(0x0004) (Const)
	class UClass*                                      WeaponDataProviderClass;                                  // 0x0008(0x0004) (Const)
	class UClass*                                      PowerupDataProviderClass;                                 // 0x000C(0x0004) (Const)
};

// ScriptStruct Engine.UIAnimation.UIAnimationNotify
// 0x000C
struct FUIAnimationNotify
{
	TEnumAsByte<EUIAnimNotifyType>                     NotifyType;                                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       NotifyName;                                               // 0x0004(0x0008)
};

// ScriptStruct Engine.UIAnimation.UIAnimationRawData
// 0x0038
struct FUIAnimationRawData
{
	float                                              DestAsFloat;                                              // 0x0000(0x0004)
	struct FLinearColor                                DestAsColor;                                              // 0x0004(0x0010)
	struct FRotator                                    DestAsRotator;                                            // 0x0014(0x000C)
	struct FVector                                     DestAsVector;                                             // 0x0020(0x000C)
	struct FUIAnimationNotify                          DestAsNotify;                                             // 0x002C(0x000C)
};

// ScriptStruct Engine.UIAnimation.UIAnimationKeyFrame
// 0x003C
struct FUIAnimationKeyFrame
{
	float                                              TimeMark;                                                 // 0x0000(0x0004)
	struct FUIAnimationRawData                         Data;                                                     // 0x0004(0x0038)
};

// ScriptStruct Engine.UIAnimation.UIAnimTrack
// 0x001C
struct FUIAnimTrack
{
	TEnumAsByte<EUIAnimType>                           TrackType;                                                // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       TrackWidgetTag;                                           // 0x0004(0x0008)
	TArray<struct FUIAnimationKeyFrame>                KeyFrames;                                                // 0x000C(0x000C) (NeedCtorLink)
	class UUIObject*                                   TargetWidget;                                             // 0x0018(0x0004) (Transient)
};

// ScriptStruct Engine.UIList.CellHitDetectionInfo
// 0x0010
struct FCellHitDetectionInfo
{
	int                                                HitColumn;                                                // 0x0000(0x0004) (AlwaysInit)
	int                                                HitRow;                                                   // 0x0004(0x0004) (AlwaysInit)
	int                                                ResizeColumn;                                             // 0x0008(0x0004) (AlwaysInit)
	int                                                ResizeRow;                                                // 0x000C(0x0004) (AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIScreenValue_Extent
// 0x0006
struct FUIScreenValue_Extent
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit)
	TEnumAsByte<EUIExtentEvalType>                     ScaleType;                                                // 0x0004(0x0001) (Edit)
	TEnumAsByte<EUIOrientation>                        Orientation;                                              // 0x0005(0x0001) (Edit)
};

// ScriptStruct Engine.UIComp_ListPresenter.UIListElementCell
// 0x008C
struct FUIListElementCell
{
	int                                                ContainerElementIndex;                                    // 0x0000(0x0004) (Const, Native, Transient)
	class UUIList*                                     OwnerList;                                                // 0x0004(0x0004) (Const, Transient)
	class UUIListString*                               ValueString;                                              // 0x0008(0x0004) (Transient)
	struct FUIStyleReference                           CellStyle[0x4];                                           // 0x000C(0x0020)
};

// ScriptStruct Engine.UIComp_ListPresenter.UIListElementCellTemplate
// 0x0020 (0x00AC - 0x008C)
struct FUIListElementCellTemplate : public FUIListElementCell
{
	struct FName                                       CellDataField;                                            // 0x008C(0x0008) (Edit, EditConst, EditInline)
	struct FString                                     ColumnHeaderText;                                         // 0x0094(0x000C) (Edit, EditConst, NeedCtorLink)
	struct FUIScreenValue_Extent                       CellSize;                                                 // 0x00A0(0x0008) (Edit)
	float                                              CellPosition;                                             // 0x00A8(0x0004)
};

// ScriptStruct Engine.UIComp_ListPresenter.UIElementCellSchema
// 0x000C
struct FUIElementCellSchema
{
	TArray<struct FUIListElementCellTemplate>          Cells;                                                    // 0x0000(0x000C) (Edit, NeedCtorLink, EditInline)
};

// ScriptStruct Engine.UIComp_ListPresenter.UIListItemDataBinding
// 0x0014
struct FUIListItemDataBinding
{
	TScriptInterface<class UUIListElementCellProvider> DataSourceProvider;                                       // 0x0000(0x0008)
	struct FName                                       DataSourceTag;                                            // 0x0008(0x0008)
	int                                                DataSourceIndex;                                          // 0x0010(0x0004)
};

// ScriptStruct Engine.UIComp_ListPresenter.UIListItem
// 0x0021
struct FUIListItem
{
	struct FUIListItemDataBinding                      DataSource;                                               // 0x0000(0x0014) (Const)
	TArray<struct FUIListElementCell>                  Cells;                                                    // 0x0014(0x000C) (Edit, EditFixedSize, EditConst, NeedCtorLink, EditInline)
	TEnumAsByte<EUIListElementState>                   ElementState;                                             // 0x0020(0x0001) (Edit, Transient, EditConst, NoImport)
};

// ScriptStruct Engine.UIContextMenu.ContextMenuItem
// 0x001C
struct FContextMenuItem
{
	class UUIContextMenu*                              OwnerMenu;                                                // 0x0000(0x0004) (Const, Transient, AlwaysInit)
	struct FPointer                                    ParentItem;                                               // 0x0004(0x0004) (Const, Native, Transient, AlwaysInit)
	TEnumAsByte<EContextMenuItemType>                  ItemType;                                                 // 0x0008(0x0001) (AlwaysInit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FString                                     ItemText;                                                 // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                ItemId;                                                   // 0x0018(0x0004) (AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIScreenValue_AutoSizeRegion
// 0x000A
struct FUIScreenValue_AutoSizeRegion
{
	float                                              Value[0x2];                                               // 0x0000(0x0004) (Edit)
	TEnumAsByte<EUIExtentEvalType>                     EvalType[0x2];                                            // 0x0008(0x0001) (Edit)
};

// ScriptStruct Engine.UIRoot.AutoSizePadding
// 0x0000 (0x000A - 0x000A)
struct FAutoSizePadding : public FUIScreenValue_AutoSizeRegion
{

};

// ScriptStruct Engine.UIRoot.AutoSizeData
// 0x001C
struct FAutoSizeData
{
	struct FUIScreenValue_AutoSizeRegion               Extent;                                                   // 0x0000(0x000C) (Edit)
	struct FAutoSizePadding                            Padding;                                                  // 0x000C(0x000C) (Edit)
	unsigned long                                      bAutoSizeEnabled : 1;                                     // 0x0018(0x0004) (Edit)
};

// ScriptStruct Engine.UIRoot.UIRenderingSubregion
// 0x0018
struct FUIRenderingSubregion
{
	struct FUIScreenValue_Extent                       ClampRegionSize;                                          // 0x0000(0x0008) (Edit)
	struct FUIScreenValue_Extent                       ClampRegionOffset;                                        // 0x0008(0x0008) (Edit)
	TEnumAsByte<EUIAlignment>                          ClampRegionAlignment;                                     // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	unsigned long                                      bSubregionEnabled : 1;                                    // 0x0014(0x0004) (Edit)
};

// ScriptStruct Engine.UIRoot.UIStyleOverride
// 0x0020
struct FUIStyleOverride
{
	struct FLinearColor                                DrawColor;                                                // 0x0000(0x0010) (Edit)
	float                                              Opacity;                                                  // 0x0010(0x0004) (Edit)
	float                                              Padding[0x2];                                             // 0x0014(0x0004) (Edit)
	unsigned long                                      bOverrideDrawColor : 1;                                   // 0x001C(0x0004)
	unsigned long                                      bOverrideOpacity : 1;                                     // 0x001C(0x0004)
	unsigned long                                      bOverridePadding : 1;                                     // 0x001C(0x0004)
};

// ScriptStruct Engine.UIRoot.UITextStyleOverride
// 0x0028 (0x0048 - 0x0020)
struct FUITextStyleOverride : public FUIStyleOverride
{
	class UFont*                                       DrawFont;                                                 // 0x0020(0x0004) (Edit)
	struct FUITextAttributes                           TextAttributes;                                           // 0x0024(0x0004) (Edit)
	TEnumAsByte<EUIAlignment>                          TextAlignment[0x2];                                       // 0x0028(0x0001) (Edit)
	TEnumAsByte<ETextClipMode>                         ClipMode;                                                 // 0x002A(0x0001) (Edit)
	TEnumAsByte<EUIAlignment>                          ClipAlignment;                                            // 0x002B(0x0001) (Edit)
	struct FTextAutoScaleValue                         AutoScaling;                                              // 0x002C(0x0008) (Edit)
	float                                              DrawScale[0x2];                                           // 0x0034(0x0004) (Edit)
	float                                              SpacingAdjust[0x2];                                       // 0x003C(0x0004) (Edit)
	unsigned long                                      bOverrideDrawFont : 1;                                    // 0x0044(0x0004)
	unsigned long                                      bOverrideAttributes : 1;                                  // 0x0044(0x0004)
	unsigned long                                      bOverrideAlignment : 1;                                   // 0x0044(0x0004)
	unsigned long                                      bOverrideClipMode : 1;                                    // 0x0044(0x0004)
	unsigned long                                      bOverrideClipAlignment : 1;                               // 0x0044(0x0004)
	unsigned long                                      bOverrideAutoScale : 1;                                   // 0x0044(0x0004)
	unsigned long                                      bOverrideScale : 1;                                       // 0x0044(0x0004)
	unsigned long                                      bOverrideSpacingAdjust : 1;                               // 0x0044(0x0004)
};

// ScriptStruct Engine.UIRoot.UIImageStyleOverride
// 0x0034 (0x0054 - 0x0020)
struct FUIImageStyleOverride : public FUIStyleOverride
{
	struct FTextureCoordinates                         Coordinates;                                              // 0x0020(0x0010) (Edit)
	struct FUIImageAdjustmentData                      Formatting[0x2];                                          // 0x0030(0x0010) (Edit)
	unsigned long                                      bOverrideCoordinates : 1;                                 // 0x0050(0x0004)
	unsigned long                                      bOverrideFormatting : 1;                                  // 0x0050(0x0004)
};

// ScriptStruct Engine.UIRoot.UIStringCaretParameters
// 0x001C
struct FUIStringCaretParameters
{
	unsigned long                                      bDisplayCaret : 1;                                        // 0x0000(0x0004) (Edit)
	TEnumAsByte<EUIDefaultPenColor>                    CaretType;                                                // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              CaretWidth;                                               // 0x0008(0x0004) (Edit)
	struct FName                                       CaretStyle;                                               // 0x000C(0x0008) (Edit)
	int                                                CaretPosition;                                            // 0x0014(0x0004) (Transient)
	class UMaterialInterface*                          CaretMaterial;                                            // 0x0018(0x0004) (Transient)
};

// ScriptStruct Engine.UIComp_DrawStringEditbox.UIStringSelectionRegion
// 0x0008
struct FUIStringSelectionRegion
{
	int                                                SelectionStartCharIndex;                                  // 0x0000(0x0004) (AlwaysInit)
	int                                                SelectionEndCharIndex;                                    // 0x0004(0x0004) (AlwaysInit)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriendMessage
// 0x0024
struct FOnlineFriendMessage
{
	struct FUniqueNetId                                SendingPlayerId;                                          // 0x0000(0x0008)
	struct FString                                     SendingPlayerNick;                                        // 0x0008(0x000C) (NeedCtorLink)
	unsigned long                                      bIsFriendInvite : 1;                                      // 0x0014(0x0004)
	unsigned long                                      bIsGameInvite : 1;                                        // 0x0014(0x0004)
	unsigned long                                      bWasAccepted : 1;                                         // 0x0014(0x0004)
	unsigned long                                      bWasDenied : 1;                                           // 0x0014(0x0004)
	struct FString                                     Message;                                                  // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriend
// 0x0024
struct FOnlineFriend
{
	struct FUniqueNetId                                UniqueId;                                                 // 0x0000(0x0008) (Const)
	struct FString                                     NickName;                                                 // 0x0008(0x000C) (Const, NeedCtorLink)
	struct FString                                     PresenceInfo;                                             // 0x0014(0x000C) (Const, NeedCtorLink)
	unsigned long                                      bIsOnline : 1;                                            // 0x0020(0x0004) (Const)
	unsigned long                                      bIsPlaying : 1;                                           // 0x0020(0x0004) (Const)
	unsigned long                                      bIsPlayingThisGame : 1;                                   // 0x0020(0x0004) (Const)
	unsigned long                                      bIsJoinable : 1;                                          // 0x0020(0x0004) (Const)
	unsigned long                                      bHasVoiceSupport : 1;                                     // 0x0020(0x0004) (Const)
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayer
// 0x0024
struct FOnlinePlayer
{
	struct FUniqueNetId                                UniqueId;                                                 // 0x0000(0x0008) (Const)
	struct FString                                     NickName;                                                 // 0x0008(0x000C) (Const, NeedCtorLink)
	struct FString                                     PresenceInfo;                                             // 0x0014(0x000C) (Const, NeedCtorLink)
	unsigned long                                      bIsOnline : 1;                                            // 0x0020(0x0004) (Const)
	unsigned long                                      bIsPlaying : 1;                                           // 0x0020(0x0004) (Const)
	unsigned long                                      bIsPlayingThisGame : 1;                                   // 0x0020(0x0004) (Const)
	unsigned long                                      bIsJoinable : 1;                                          // 0x0020(0x0004) (Const)
	unsigned long                                      bHasVoiceSupport : 1;                                     // 0x0020(0x0004) (Const)
};

// ScriptStruct Engine.UIDataProvider_OnlineProfileSettings.ProfileSettingsArrayProvider
// 0x0010
struct FProfileSettingsArrayProvider
{
	int                                                ProfileSettingsId;                                        // 0x0000(0x0004)
	struct FName                                       ProfileSettingsName;                                      // 0x0004(0x0008)
	class UUIDataProvider_OnlineProfileSettingsArray*  Provider;                                                 // 0x000C(0x0004)
};

// ScriptStruct Engine.UIDataProvider_Settings.SettingsArrayProvider
// 0x0010
struct FSettingsArrayProvider
{
	int                                                SettingsId;                                               // 0x0000(0x0004)
	struct FName                                       SettingsName;                                             // 0x0004(0x0008)
	class UUIDataProvider_SettingsArray*               Provider;                                                 // 0x000C(0x0004)
};

// ScriptStruct Engine.UIDataStore_GameResource.GameResourceDataProvider
// 0x0018
struct FGameResourceDataProvider
{
	struct FName                                       ProviderTag;                                              // 0x0000(0x0008) (Config)
	struct FString                                     ProviderClassName;                                        // 0x0008(0x000C) (Config, NeedCtorLink)
	class UClass*                                      ProviderClass;                                            // 0x0014(0x0004) (Transient)
};

// ScriptStruct Engine.UIDataStore_OnlineGameSearch.GameSearchCfg
// 0x0028
struct FGameSearchCfg
{
	class UClass*                                      GameSearchClass;                                          // 0x0000(0x0004)
	class UClass*                                      DefaultGameSettingsClass;                                 // 0x0004(0x0004)
	class UClass*                                      SearchResultsProviderClass;                               // 0x0008(0x0004)
	class UUIDataProvider_Settings*                    DesiredSettingsProvider;                                  // 0x000C(0x0004)
	TArray<class UUIDataProvider_Settings*>            SearchResults;                                            // 0x0010(0x000C) (NeedCtorLink)
	class UOnlineGameSearch*                           Search;                                                   // 0x001C(0x0004)
	struct FName                                       SearchName;                                               // 0x0020(0x0008)
};

// ScriptStruct Engine.UIDataStore_OnlineGameSettings.GameSettingsCfg
// 0x0014
struct FGameSettingsCfg
{
	class UClass*                                      GameSettingsClass;                                        // 0x0000(0x0004)
	class UUIDataProvider_Settings*                    Provider;                                                 // 0x0004(0x0004)
	class UOnlineGameSettings*                         GameSettings;                                             // 0x0008(0x0004)
	struct FName                                       SettingsName;                                             // 0x000C(0x0008)
};

// ScriptStruct Engine.UIDataStore_OnlineStats.PlayerNickMetaData
// 0x0014
struct FPlayerNickMetaData
{
	struct FName                                       PlayerNickName;                                           // 0x0000(0x0008) (Const)
	struct FString                                     PlayerNickColumnName;                                     // 0x0008(0x000C) (Const, Localized, NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_OnlineStats.RankMetaData
// 0x0014
struct FRankMetaData
{
	struct FName                                       RankName;                                                 // 0x0000(0x0008) (Const)
	struct FString                                     RankColumnName;                                           // 0x0008(0x000C) (Const, Localized, NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_StringAliasMap.UIMenuInputMap
// 0x001C
struct FUIMenuInputMap
{
	struct FName                                       FieldName;                                                // 0x0000(0x0008)
	struct FName                                       Set;                                                      // 0x0008(0x0008)
	struct FString                                     MappedText;                                               // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.UIFrameBox.CornerSizes
// 0x0030
struct FCornerSizes
{
	float                                              TopLeft[0x2];                                             // 0x0000(0x0004) (Edit)
	float                                              TopRight[0x2];                                            // 0x0008(0x0004) (Edit)
	float                                              BottomLeft[0x2];                                          // 0x0010(0x0004) (Edit)
	float                                              BottomRight[0x2];                                         // 0x0018(0x0004) (Edit)
	float                                              TopHeight;                                                // 0x0020(0x0004) (Edit)
	float                                              BottomHeight;                                             // 0x0024(0x0004) (Edit)
	float                                              CenterLeftWidth;                                          // 0x0028(0x0004) (Edit)
	float                                              CenterRightWidth;                                         // 0x002C(0x0004) (Edit)
};

// ScriptStruct Engine.UIRoot.UIDockingNode
// 0x0005
struct FUIDockingNode
{
	class UUIObject*                                   Widget;                                                   // 0x0000(0x0004) (Edit)
	TEnumAsByte<EUIWidgetFace>                         Face;                                                     // 0x0004(0x0001) (Edit)
};

// ScriptStruct Engine.UIStyle_Combo.StyleDataReference
// 0x0020
struct FStyleDataReference
{
	class UUIStyle*                                    OwnerStyle;                                               // 0x0000(0x0004)
	struct FSTYLE_ID                                   SourceStyleID;                                            // 0x0004(0x0010)
	class UUIStyle*                                    SourceStyle;                                              // 0x0014(0x0004) (Transient)
	class UUIState*                                    SourceState;                                              // 0x0018(0x0004)
	class UUIStyle_Data*                               CustomStyleData;                                          // 0x001C(0x0004)
};

// ScriptStruct Engine.SoundNodeWave.SubtitleCue
// 0x0010
struct FSubtitleCue
{
	struct FString                                     Text;                                                     // 0x0000(0x000C) (Edit, Const, Localized, NeedCtorLink)
	float                                              Time;                                                     // 0x000C(0x0004) (Edit, Const, Localized)
};

// ScriptStruct Engine.FoliageComponent.FoliageInstanceBase
// 0x0030
struct FFoliageInstanceBase
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FVector                                     XAxis;                                                    // 0x000C(0x000C)
	struct FVector                                     YAxis;                                                    // 0x0018(0x000C)
	struct FVector                                     ZAxis;                                                    // 0x0024(0x000C)
};

// ScriptStruct Engine.FoliageComponent.GatheredFoliageInstance
// 0x0010 (0x0040 - 0x0030)
struct FGatheredFoliageInstance : public FFoliageInstanceBase
{
	struct FColor                                      StaticLighting[0x4];                                      // 0x0030(0x0004)
};

// ScriptStruct Engine.FoliageFactory.FoliageMesh
// 0x003C
struct FFoliageMesh
{
	class UStaticMesh*                                 InstanceStaticMesh;                                       // 0x0000(0x0004) (Edit)
	class UMaterialInterface*                          Material;                                                 // 0x0004(0x0004) (Edit)
	float                                              MaxDrawRadius;                                            // 0x0008(0x0004) (Edit)
	float                                              MinTransitionRadius;                                      // 0x000C(0x0004) (Edit)
	struct FVector                                     MinScale;                                                 // 0x0010(0x000C) (Edit)
	struct FVector                                     MaxScale;                                                 // 0x001C(0x000C) (Edit)
	float                                              SwayScale;                                                // 0x0028(0x0004) (Edit)
	int                                                Seed;                                                     // 0x002C(0x0004) (Edit)
	float                                              SurfaceAreaPerInstance;                                   // 0x0030(0x0004) (Edit)
	unsigned long                                      bCreateInstancesOnBSP : 1;                                // 0x0034(0x0004) (Edit)
	unsigned long                                      bCreateInstancesOnStaticMeshes : 1;                       // 0x0034(0x0004) (Edit)
	unsigned long                                      bCreateInstancesOnTerrain : 1;                            // 0x0034(0x0004) (Edit)
	class UFoliageComponent*                           Component;                                                // 0x0038(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct Engine.SpeedTreeComponent.SpeedTreeStaticLight
// 0x0020
struct FSpeedTreeStaticLight
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (Const)
	class UShadowMap1D*                                BranchAndFrondShadowMap;                                  // 0x0010(0x0004) (Const)
	class UShadowMap1D*                                LeafMeshShadowMap;                                        // 0x0014(0x0004) (Const)
	class UShadowMap1D*                                LeafCardShadowMap;                                        // 0x0018(0x0004) (Const)
	class UShadowMap1D*                                BillboardShadowMap;                                       // 0x001C(0x0004) (Const)
};

// ScriptStruct Engine.SpeedTreeComponent.LightMapRef
// 0x0004
struct FLightMapRef
{
	struct FPointer                                    Reference;                                                // 0x0000(0x0004) (Const, Native)
};

// ScriptStruct Engine.LensFlare.LensFlareElement
// 0x0140
struct FLensFlareElement
{
	struct FName                                       ElementName;                                              // 0x0000(0x0008) (Edit)
	float                                              RayDistance;                                              // 0x0008(0x0004) (Edit)
	unsigned long                                      bIsEnabled : 1;                                           // 0x000C(0x0004) (Edit)
	unsigned long                                      bUseSourceDistance : 1;                                   // 0x000C(0x0004) (Edit)
	unsigned long                                      bNormalizeRadialDistance : 1;                             // 0x000C(0x0004) (Edit)
	unsigned long                                      bModulateColorBySource : 1;                               // 0x000C(0x0004) (Edit)
	struct FVector                                     Size;                                                     // 0x0010(0x000C) (Edit)
	TArray<class UMaterialInterface*>                  LFMaterials;                                              // 0x001C(0x000C) (Edit, NeedCtorLink)
	struct FRawDistributionFloat                       LFMaterialIndex;                                          // 0x0028(0x001C) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       Scaling;                                                  // 0x0044(0x001C) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      AxisScaling;                                              // 0x0060(0x001C) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       Rotation;                                                 // 0x007C(0x001C) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      Color;                                                    // 0x0098(0x001C) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       Alpha;                                                    // 0x00B4(0x001C) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      Offset;                                                   // 0x00D0(0x001C) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Scale;                                            // 0x00EC(0x001C) (Edit, Component, NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Color;                                            // 0x0108(0x001C) (Edit, Component, NeedCtorLink)
	struct FRawDistributionFloat                       DistMap_Alpha;                                            // 0x0124(0x001C) (Edit, Component, NeedCtorLink)
};

// ScriptStruct Engine.AudioDevice.Listener
// 0x0040
struct FListener
{
	class APortalVolume*                               PortalVolume;                                             // 0x0000(0x0004) (Const)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	struct FVector                                     Up;                                                       // 0x0010(0x000C)
	struct FVector                                     Right;                                                    // 0x001C(0x000C)
	struct FVector                                     Front;                                                    // 0x0028(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0034(0x000C)
};

// ScriptStruct Engine.AudioDevice.SoundGroupProperties
// 0x001C
struct FSoundGroupProperties
{
	float                                              Volume;                                                   // 0x0000(0x0004) (Edit)
	float                                              Pitch;                                                    // 0x0004(0x0004) (Edit)
	float                                              LowPass;                                                  // 0x0008(0x0004) (Edit)
	float                                              MaxUpdateDistance;                                        // 0x000C(0x0004) (Edit)
	float                                              VoiceCenterChannelVolume;                                 // 0x0010(0x0004) (Edit)
	float                                              VoiceRadioVolume;                                         // 0x0014(0x0004) (Edit)
	unsigned long                                      bApplyEffects : 1;                                        // 0x0018(0x0004) (Edit)
	unsigned long                                      bAlwaysPlay : 1;                                          // 0x0018(0x0004) (Edit)
	unsigned long                                      bUberAlwaysPlay : 1;                                      // 0x0018(0x0004) (Edit)
	unsigned long                                      bIsUISound : 1;                                           // 0x0018(0x0004) (Edit)
	unsigned long                                      bIsMusic : 1;                                             // 0x0018(0x0004) (Edit)
	unsigned long                                      bNoReverb : 1;                                            // 0x0018(0x0004) (Edit)
};

// ScriptStruct Engine.AudioDevice.SoundGroup
// 0x0030
struct FSoundGroup
{
	struct FSoundGroupProperties                       Properties;                                               // 0x0000(0x001C) (Edit)
	struct FName                                       GroupName;                                                // 0x001C(0x0008) (Edit)
	TArray<struct FName>                               ChildGroupNames;                                          // 0x0024(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct Engine.AudioDevice.SoundGroupAdjuster
// 0x0014
struct FSoundGroupAdjuster
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008)
	float                                              VolumeAdjuster;                                           // 0x0008(0x0004)
	float                                              PitchAdjuster;                                            // 0x000C(0x0004)
	float                                              LowPassAdjuster;                                          // 0x0010(0x0004)
};

// ScriptStruct Engine.AudioDevice.SoundGroupEffect
// 0x000C
struct FSoundGroupEffect
{
	TArray<struct FSoundGroupAdjuster>                 GroupEffect;                                              // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.AudioDevice.MixGroupInfo
// 0x0018
struct FMixGroupInfo
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (Edit)
	float                                              Volume;                                                   // 0x0008(0x0004) (Edit)
	float                                              Pitch;                                                    // 0x000C(0x0004) (Edit)
	float                                              LowPass;                                                  // 0x0010(0x0004) (Edit)
	unsigned long                                      SloMo : 1;                                                // 0x0014(0x0004) (Edit)
};

// ScriptStruct Engine.Actor.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (AlwaysInit)
	int                                                NumChannels;                                              // 0x0008(0x0004) (AlwaysInit)
};

// ScriptStruct Engine.Actor.AsyncLineCheckResult
// 0x000C
struct FAsyncLineCheckResult
{
	int                                                bCheckStarted;                                            // 0x0000(0x0004)
	int                                                bCheckCompleted;                                          // 0x0004(0x0004)
	int                                                bHit;                                                     // 0x0008(0x0004)
};

// ScriptStruct Engine.Actor.ReplicatedHitImpulse
// 0x0028
struct FReplicatedHitImpulse
{
	struct FVector                                     AppliedImpulse;                                           // 0x0000(0x000C)
	struct FVector                                     HitLocation;                                              // 0x000C(0x000C)
	struct FName                                       BoneName;                                                 // 0x0018(0x0008)
	unsigned char                                      ImpulseCount;                                             // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	unsigned long                                      bRadialImpulse : 1;                                       // 0x0024(0x0004)
};

// ScriptStruct Engine.Texture2D.Texture2DMipMap
// 0x003C
struct FTexture2DMipMap
{
	struct FTextureMipBulkData_Mirror                  Data;                                                     // 0x0000(0x0034) (Native)
	int                                                SizeX;                                                    // 0x0034(0x0004) (Native)
	int                                                SizeY;                                                    // 0x0038(0x0004) (Native)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFileLockerFileInfo
// 0x001C
struct FOnlineFileLockerFileInfo
{
	struct FString                                     Filename;                                                 // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Description;                                              // 0x000C(0x000C) (NeedCtorLink)
	int                                                Meta;                                                     // 0x0018(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFileLockerFile
// 0x0028
struct FOnlineFileLockerFile
{
	TArray<unsigned char>                              Bytes;                                                    // 0x0000(0x000C) (NeedCtorLink)
	struct FOnlineFileLockerFileInfo                   Info;                                                     // 0x000C(0x001C) (NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.PlayGroupCreateParams
// 0x0008
struct FPlayGroupCreateParams
{
	int                                                Size;                                                     // 0x0000(0x0004)
	unsigned long                                      bInviteOnly : 1;                                          // 0x0004(0x0004)
	unsigned long                                      bAutoJoinFriends : 1;                                     // 0x0004(0x0004)
	unsigned long                                      bAutoJoinRecentPlayers : 1;                               // 0x0004(0x0004)
	unsigned long                                      bAutoJoinMembersFriends : 1;                              // 0x0004(0x0004)
	unsigned long                                      bAutoJoinMembersRecentPlayers : 1;                        // 0x0004(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.PlayGroupListEntry
// 0x000C
struct FPlayGroupListEntry
{
	struct FUniqueNetId                                UserId;                                                   // 0x0000(0x0008)
	unsigned long                                      IsLeader : 1;                                             // 0x0008(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.SpeechRecognizedWord
// 0x0014
struct FSpeechRecognizedWord
{
	int                                                WordId;                                                   // 0x0000(0x0004)
	struct FString                                     WordText;                                                 // 0x0004(0x000C) (NeedCtorLink)
	float                                              Confidence;                                               // 0x0010(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContent
// 0x0034
struct FOnlineContent
{
	int                                                UserIndex;                                                // 0x0000(0x0004)
	struct FString                                     FriendlyName;                                             // 0x0004(0x000C) (NeedCtorLink)
	struct FString                                     ContentPath;                                              // 0x0010(0x000C) (NeedCtorLink)
	TArray<struct FString>                             ContentPackages;                                          // 0x001C(0x000C) (NeedCtorLink)
	TArray<struct FString>                             ContentFiles;                                             // 0x0028(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineArbitrationRegistrant
// 0x0014
struct FOnlineArbitrationRegistrant
{
	struct FQWord                                      MachineId;                                                // 0x0000(0x0008) (Const)
	struct FUniqueNetId                                PlayerId;                                                 // 0x0008(0x0008) (Const)
	int                                                Trustworthiness;                                          // 0x0010(0x0004) (Const)
};

// ScriptStruct Engine.OnlineSubsystem.FriendsQuery
// 0x000C
struct FFriendsQuery
{
	struct FUniqueNetId                                UniqueId;                                                 // 0x0000(0x0008)
	unsigned long                                      bIsFriend : 1;                                            // 0x0008(0x0004)
};

// ScriptStruct Engine.CoverReplicator.ManualCoverTypeInfo
// 0x0002
struct FManualCoverTypeInfo
{
	unsigned char                                      SlotIndex;                                                // 0x0000(0x0001)
	TEnumAsByte<ECoverType>                            ManualCoverType;                                          // 0x0001(0x0001)
};

// ScriptStruct Engine.CoverReplicator.CoverReplicationInfo
// 0x0034
struct FCoverReplicationInfo
{
	class ACoverLink*                                  Link;                                                     // 0x0000(0x0004)
	TArray<unsigned char>                              SlotsEnabled;                                             // 0x0004(0x000C) (NeedCtorLink)
	TArray<unsigned char>                              SlotsDisabled;                                            // 0x0010(0x000C) (NeedCtorLink)
	TArray<unsigned char>                              SlotsAdjusted;                                            // 0x001C(0x000C) (NeedCtorLink)
	TArray<struct FManualCoverTypeInfo>                SlotsCoverTypeChanged;                                    // 0x0028(0x000C) (NeedCtorLink)
};

// ScriptStruct Engine.SoundCue.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	int                                                NodePosX;                                                 // 0x0000(0x0004) (Const, Native)
	int                                                NodePosY;                                                 // 0x0004(0x0004) (Const, Native)
};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// 0x0030
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                               // 0x0000(0x000C) (NeedCtorLink)
	TArray<float>                                      Times;                                                    // 0x000C(0x000C) (NeedCtorLink)
	float                                              Mins[0x3];                                                // 0x0018(0x0004)
	float                                              Ranges[0x3];                                              // 0x0024(0x0004)
};

// ScriptStruct Engine.AudioDevice.ModeSettings
// 0x0008
struct FModeSettings
{
	TEnumAsByte<ESoundMode>                            Mode;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FadeTime;                                                 // 0x0004(0x0004)
};

// ScriptStruct Engine.UIRoot.UIScreenValue
// 0x0006
struct FUIScreenValue
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit)
	TEnumAsByte<EPositionEvalType>                     ScaleType;                                                // 0x0004(0x0001) (Edit)
	TEnumAsByte<EUIOrientation>                        Orientation;                                              // 0x0005(0x0001) (Edit)
};

// ScriptStruct Engine.UIRoot.InputEventSubscription
// 0x0014
struct FInputEventSubscription
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (AlwaysInit)
	TArray<class UUIScreenObject*>                     Subscribers;                                              // 0x0008(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct Engine.UIRoot.StateInputKeyAction
// 0x0004 (0x001C - 0x0018)
struct FStateInputKeyAction : public FInputKeyAction
{
	class UClass*                                      Scope;                                                    // 0x0018(0x0004) (Edit)
};

// ScriptStruct Engine.UIRoot.UIStyleSubscriberReference
// 0x0010
struct FUIStyleSubscriberReference
{
	struct FName                                       SubscriberId;                                             // 0x0000(0x0008) (AlwaysInit)
	TScriptInterface<class UUIStyleResolver>           Subscriber;                                               // 0x0008(0x0008) (AlwaysInit)
};

// ScriptStruct Engine.UIRoot.StyleReferenceId
// 0x000C
struct FStyleReferenceId
{
	struct FName                                       StyleReferenceTag;                                        // 0x0000(0x0008) (AlwaysInit)
	class UProperty*                                   StyleProperty;                                            // 0x0008(0x0004) (AlwaysInit)
};

// ScriptStruct Engine.UIRoot.RenderParameters
// 0x0058
struct FRenderParameters
{
	float                                              DrawX;                                                    // 0x0000(0x0004) (AlwaysInit)
	float                                              DrawY;                                                    // 0x0004(0x0004) (AlwaysInit)
	float                                              DrawXL;                                                   // 0x0008(0x0004) (AlwaysInit)
	float                                              DrawYL;                                                   // 0x000C(0x0004) (AlwaysInit)
	struct FVector2D                                   Scaling;                                                  // 0x0010(0x0008) (AlwaysInit)
	class UFont*                                       DrawFont;                                                 // 0x0018(0x0004) (AlwaysInit)
	TEnumAsByte<EUIAlignment>                          TextAlignment[0x2];                                       // 0x001C(0x0001) (AlwaysInit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	struct FVector2D                                   ImageExtent;                                              // 0x0020(0x0008) (AlwaysInit)
	struct FTextureCoordinates                         DrawCoords;                                               // 0x0028(0x0010) (AlwaysInit)
	struct FVector2D                                   SpacingAdjust;                                            // 0x0038(0x0008) (AlwaysInit)
	float                                              ViewportHeight;                                           // 0x0040(0x0004) (AlwaysInit)
	unsigned long                                      bForcePixelAlignment : 1;                                 // 0x0044(0x0004) (AlwaysInit)
	unsigned long                                      bForceRenderColor : 1;                                    // 0x0044(0x0004) (AlwaysInit)
	struct FLinearColor                                ForcedColor;                                              // 0x0048(0x0010) (AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIStringNodeModifier.ModifierData
// 0x0010
struct FModifierData
{
	class UUIStyle_Data*                               Style;                                                    // 0x0000(0x0004) (Const, Transient, AlwaysInit)
	TArray<class UFont*>                               InlineFontStack;                                          // 0x0004(0x000C) (Const, Transient, AlwaysInit, NeedCtorLink)
};

// ScriptStruct Engine.UIRoot.UIStringNodeModifier
// 0x0128
struct FUIStringNodeModifier
{
	struct FUICombinedStyleData                        CustomStyleData;                                          // 0x0000(0x008C) (Const, Transient, AlwaysInit)
	struct FUICombinedStyleData                        BaseStyleData;                                            // 0x008C(0x008C) (Const, Transient, AlwaysInit)
	TArray<struct FModifierData>                       ModifierStack;                                            // 0x0118(0x000C) (Const, Transient, AlwaysInit, NeedCtorLink)
	class UUIState*                                    CurrentMenuState;                                         // 0x0124(0x0004) (Const, Transient, AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIStringNode
// 0x002C
struct FUIStringNode
{
	struct FPointer                                    VfTable;                                                  // 0x0000(0x0004) (Const, Native, Transient, AlwaysInit, NoExport)
	class UUIDataStore*                                NodeDataStore;                                            // 0x0004(0x0004) (Const, Transient, AlwaysInit)
	struct FPointer                                    ParentNode;                                               // 0x0008(0x0004) (Const, Native, Transient, AlwaysInit)
	struct FString                                     SourceText;                                               // 0x000C(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	struct FVector2D                                   Extent;                                                   // 0x0018(0x0008) (Edit, AlwaysInit)
	struct FVector2D                                   Scaling;                                                  // 0x0020(0x0008) (Edit, AlwaysInit)
	unsigned long                                      bForceWrap : 1;                                           // 0x0028(0x0004) (AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIStringNode_Text
// 0x0098 (0x00C4 - 0x002C)
struct FUIStringNode_Text : public FUIStringNode
{
	struct FString                                     RenderedText;                                             // 0x002C(0x000C) (Edit, AlwaysInit, NeedCtorLink)
	struct FUICombinedStyleData                        NodeStyleParameters;                                      // 0x0038(0x008C) (AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIStringNode_Image
// 0x001C (0x0048 - 0x002C)
struct FUIStringNode_Image : public FUIStringNode
{
	struct FVector2D                                   ForcedExtent;                                             // 0x002C(0x0008) (Edit, AlwaysInit)
	struct FTextureCoordinates                         TexCoords;                                                // 0x0034(0x0010) (Edit, AlwaysInit)
	class UUITexture*                                  RenderedImage;                                            // 0x0044(0x0004) (Edit, AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIStringNode_NestedMarkupParent
// 0x0000 (0x002C - 0x002C)
struct FUIStringNode_NestedMarkupParent : public FUIStringNode
{

};

// ScriptStruct Engine.UIRoot.UIStringNode_FormattedNodeParent
// 0x0000 (0x00C4 - 0x00C4)
struct FUIStringNode_FormattedNodeParent : public FUIStringNode_Text
{

};

// ScriptStruct Engine.UIRoot.WrappedStringElement
// 0x0014
struct FWrappedStringElement
{
	struct FString                                     Value;                                                    // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FVector2D                                   LineExtent;                                               // 0x000C(0x0008) (AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIMouseCursor
// 0x000C
struct FUIMouseCursor
{
	struct FName                                       CursorStyle;                                              // 0x0000(0x0008) (Edit)
	class UUITexture*                                  Cursor;                                                   // 0x0008(0x0004) (Edit)
};

// ScriptStruct Engine.UIRoot.UIInputAliasValue
// 0x000C
struct FUIInputAliasValue
{
	unsigned char                                      ModifierFlagMask;                                         // 0x0000(0x0001) (AlwaysInit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       InputAliasName;                                           // 0x0004(0x0008) (AlwaysInit)
};

// ScriptStruct Engine.UIRoot.UIInputAliasMap
// 0x003C
struct FUIInputAliasMap
{
	struct FMultiMap_Mirror                            InputAliasLookupTable;                                    // 0x0000(0x003C) (Const, Native, Transient)
};

// ScriptStruct Engine.CoverLink.TargetInfo
// 0x000C
struct FTargetInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0004)
	int                                                SlotIdx;                                                  // 0x0004(0x0004)
	int                                                Direction;                                                // 0x0008(0x0004)
};

// ScriptStruct Engine.CoverLink.CovPosInfo
// 0x0034
struct FCovPosInfo
{
	class ACoverLink*                                  Link;                                                     // 0x0000(0x0004)
	int                                                LtSlotIdx;                                                // 0x0004(0x0004)
	int                                                RtSlotIdx;                                                // 0x0008(0x0004)
	float                                              LtToRtPct;                                                // 0x000C(0x0004)
	struct FVector                                     Location;                                                 // 0x0010(0x000C)
	struct FVector                                     Normal;                                                   // 0x001C(0x000C)
	struct FVector                                     Tangent;                                                  // 0x0028(0x000C)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstance
// 0x0000
struct FParticleEmitterInstance
{

};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// 0x0010
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                                    // 0x0000(0x0004)
	int                                                TrackIndex;                                               // 0x0004(0x0004)
	int                                                KeyIndex;                                                 // 0x0008(0x0004)
	float                                              UnsnappedPosition;                                        // 0x000C(0x0004)
};

// ScriptStruct Engine.LensFlare.LensFlareElementCurvePair
// 0x0010
struct FLensFlareElementCurvePair
{
	struct FString                                     CurveName;                                                // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	class UObject*                                     CurveObject;                                              // 0x000C(0x0004) (AlwaysInit)
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementInstance
// 0x0000
struct FLensFlareElementInstance
{

};

// ScriptStruct Engine.OnlineSubsystem.LocalTalker
// 0x0004
struct FLocalTalker
{
	unsigned long                                      bHasVoice : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bHasNetworkedVoice : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bIsRecognizingSpeech : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bWasTalking : 1;                                          // 0x0000(0x0004)
};

// ScriptStruct Engine.OnlineSubsystem.RemoteTalker
// 0x000C
struct FRemoteTalker
{
	struct FUniqueNetId                                TalkerId;                                                 // 0x0000(0x0008)
	unsigned long                                      bWasTalking : 1;                                          // 0x0008(0x0004)
};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// 0x0010
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                                // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	class UObject*                                     CurveObject;                                              // 0x000C(0x0004) (AlwaysInit)
};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008) (Edit)
	float                                              TargetPercentage;                                         // 0x0008(0x0004) (Edit)
};

// ScriptStruct Engine.SeqAct_Interp.SavedTransform
// 0x0018
struct FSavedTransform
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
};

// ScriptStruct Engine.Terrain.TerrainMaterialResource
// 0x0000
struct FTerrainMaterialResource
{

};

// ScriptStruct Engine.TerrainComponent.TerrainkDOPTree
// 0x0018
struct FTerrainkDOPTree
{
	TArray<int>                                        Nodes;                                                    // 0x0000(0x000C) (Const, Native)
	TArray<int>                                        Triangles;                                                // 0x000C(0x000C) (Const, Native)
};

// ScriptStruct Engine.TerrainWeightMapTexture.TerrainWeightedMaterial
// 0x0000
struct UTerrainWeightMapTexture_FTerrainWeightedMaterial
{

};

// ScriptStruct Engine.TriggerStreamingLevel.LevelStreamingData
// 0x0008
struct FLevelStreamingData
{
	unsigned long                                      bShouldBeLoaded : 1;                                      // 0x0000(0x0004) (Edit)
	unsigned long                                      bShouldBeVisible : 1;                                     // 0x0000(0x0004) (Edit)
	unsigned long                                      bShouldBlockOnLoad : 1;                                   // 0x0000(0x0004) (Edit)
	class ULevelStreaming*                             Level;                                                    // 0x0004(0x0004) (Edit)
};

// ScriptStruct Engine.UIComp_ListElementSorter.UIListSortingParameters
// 0x000C
struct FUIListSortingParameters
{
	int                                                PrimaryIndex;                                             // 0x0000(0x0004) (AlwaysInit)
	int                                                SecondaryIndex;                                           // 0x0004(0x0004) (AlwaysInit)
	unsigned long                                      bReversePrimarySorting : 1;                               // 0x0008(0x0004) (AlwaysInit)
	unsigned long                                      bReverseSecondarySorting : 1;                             // 0x0008(0x0004) (AlwaysInit)
	unsigned long                                      bCaseSensitive : 1;                                       // 0x0008(0x0004) (AlwaysInit)
	unsigned long                                      bIntSortPrimary : 1;                                      // 0x0008(0x0004) (AlwaysInit)
	unsigned long                                      bIntSortSecondary : 1;                                    // 0x0008(0x0004) (AlwaysInit)
	unsigned long                                      bFloatSortPrimary : 1;                                    // 0x0008(0x0004) (AlwaysInit)
	unsigned long                                      bFloatSortSecondary : 1;                                  // 0x0008(0x0004) (AlwaysInit)
};

// ScriptStruct Engine.UIPrefab.ArchetypeInstancePair
// 0x0028
struct FArchetypeInstancePair
{
	class UUIObject*                                   WidgetArchetype;                                          // 0x0000(0x0004) (Transient, AlwaysInit)
	class UUIObject*                                   WidgetInstance;                                           // 0x0004(0x0004) (Transient, AlwaysInit)
	float                                              ArchetypeBounds[0x4];                                     // 0x0008(0x0004) (Transient, AlwaysInit)
	float                                              InstanceBounds[0x4];                                      // 0x0018(0x0004) (Transient, AlwaysInit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
