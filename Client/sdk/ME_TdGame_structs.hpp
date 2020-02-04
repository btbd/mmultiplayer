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

#define CONST_TdMPSettings_PROP_STASHESTOWIN                     201
#define CONST_CHECK_MANOUVERS_TIME                               1
#define CONST_AllDeadLink                                        2
#define CONST_SETUPTEMPLATE_AICONTROLLER_2                       1
#define CONST_SIXTH_SENSE_TIME                                   2
#define CONST_PROP_NonStandardOptions                            0x10000006
#define CONST_SETUPTEMPLATE_BOTPAWN_2                            1
#define CONST_TdMPSettings_RANKEDUNRANKED_MODE                   103
#define CONST_SETUPTEMPLATE_AITUTORIAL_1                         3
#define CONST_TDPID_StretchTime_34                               1233
#define CONST_AITEMPLATE_MAX_ANIMSETS                            2
#define CONST_CoverLink                                          3
#define CONST_SETUPTEMPLATE_BOTPAWN_1                            0
#define CONST_TDPID_KeyAction_36                                 535
#define CONST_SETUPTEMPLATE_AISNIPER_1                           3
#define CONST_ResetLink                                          4
#define CONST_TDPID_DialogueVolume                               303
#define CONST_TdGameSearch_Pursuit_PUBLICPRIVATE_MODE_PUBLIC     0
#define CONST_SETUPTEMPLATE_BOTPAWN_4                            3
#define CONST_TemplateLink                                       1
#define CONST_CANCEL_BUTTON_MARKUP_STRING                        "<Strings:TdGameUI.TdButtonCallouts.Cancel>"
#define CONST_SpawnedOneLink                                     3
#define CONST_TDPID_KeyAction_19                                 518
#define CONST_MESSAGEBOX_MAX_POSSIBLE_OPTIONS                    4
#define CONST_TdGameSearch_Pursuit_ROLERESTRICTION               104
#define CONST_TT_UNDEFINEDTIME                                   3599.99
#define CONST_SpawnpointsLink                                    0
#define CONST_TeamLink                                           2
#define CONST_TDPID_StretchTime_25                               1224
#define CONST_RecycleBotLink                                     4
#define CONST_TDPID_KeyAction_4                                  503
#define CONST_TdMPSettings_GAME_MODE_PURSUIT                     0
#define CONST_TdGameSearch_Pursuit_RANKEDUNRANKED_MODE_UNRANKED  1
#define CONST_OneSpawnedLink                                     5
#define CONST_TDPID_Game_NumAirMeleeKills                        908
#define CONST_SETUPTEMPLATE_AICONTROLLER_1                       0
#define CONST_PROP_DedicatedServer                               0x10000009
#define CONST_SETUPTEMPLATE_AICONTROLLER_3                       2
#define CONST_LATENT_MOVETO                                      501
#define CONST_LATENT_STRAFETO                                    505
#define CONST_LATENT_STRAFEFACING                                507
#define CONST_TdGameSearch_Pursuit_PUBLICPRIVATE_MODE_PRIVATE    1
#define CONST_TDPID_KeyAction_6                                  505
#define CONST_LATENT_FINISHROTATION                              509
#define CONST_LATENT_WAITFORLANDING                              528
#define CONST_TdMPSettings_FRIENDLY_FIRE_YES                     0
#define CONST_SETUPTEMPLATE_BOTPAWN_3                            2
#define CONST_TDPID_KeyAction_32                                 531
#define CONST_TdGameSearch_Pursuit_SWITCH_SIDES_YES              0
#define CONST_SETUPTEMPLATE_BOTPAWN_5                            4
#define CONST_CMinDistDiffToSwitchFormationPos                   30
#define CONST_TdGameSearch_Pursuit_PROP_MAXPLAYERS               203
#define CONST_TdGameSearch_Pursuit_ROLERESTRICTION_NO            1
#define CONST_TdGameSearch_Pursuit_FRIENDLY_FIRE                 100
#define CONST_MinDotForBurstPriority                             0.71f
#define CONST_MinDistForBurstPriority                            1000.f
#define CONST_TdGameSearch_Pursuit_PROP_ROUNDTIME                202
#define CONST_TdGameSearch_Pursuit_SWITCH_SIDES_NO               1
#define CONST_cMaxAIUsingMelee                                   1
#define CONST_TdGameSearch_Pursuit_PROP_STASHESTOWIN             201
#define CONST_DEFAULT_ROOTOFFSET_BLENDTIME                       0.3f
#define CONST_TdGameSearch_Pursuit_GAME_MODE                     0x0000800B
#define CONST_TdGameSearch_Pursuit_GAME_MODE_PURSUIT             0
#define CONST_TdGameSearch_Pursuit_GAME_MODE_TRAP                1
#define CONST_TdGameSearch_Pursuit_GAME_MODE_DOUBLESTASH         2
#define CONST_MAX_NUM_SUB_OBJECTIVES                             4
#define CONST_TDPID_KeyAction_5                                  504
#define CONST_TdGameSearch_Pursuit_GAME_MODE_BRITTISHBULLDOG     3
#define CONST_TDPID_StretchTime_05                               1205
#define CONST_TdGameSearch_Pursuit_PUBLICPRIVATE_MODE            102
#define CONST_TDBUTTONBAR_BUTTON_SPACING_CONNECTED               -20
#define CONST_TDPID_OnlineEncLogin                               700
#define CONST_TDPID_KeyAction_26                                 525
#define CONST_TdGameSearch_Pursuit_FRIENDLY_FIRE_YES             0
#define CONST_TdGameSearch_Pursuit_FRIENDLY_FIRE_NO              1
#define CONST_TdGameSearch_Pursuit_RANKEDUNRANKED_MODE_RANKED    0
#define CONST_TDPID_StretchTime_11                               1210
#define CONST_TdGameSearch_Pursuit_SWITCH_SIDES                  101
#define CONST_TdGameSearch_Pursuit_RANKEDUNRANKED_MODE           103
#define CONST_TdGameSearch_Pursuit_ROLERESTRICTION_YES           0
#define CONST_cMinDistForStandToRun                              150.f
#define CONST_TdGameSearch_Pursuit_PROP_ROUNDSTOWIN              200
#define CONST_QUERY_PURSUIT                                      0
#define CONST_cMinClearDist                                      150.f
#define CONST_cMinDistForStandToWalk                             95.f
#define CONST_TDPID_StretchTime_21                               1220
#define CONST_LSS_MapName                                        0
#define CONST_MAPNAME_Entry                                      0
#define CONST_TDPID_KeyAction_44                                 543
#define CONST_TdMPSettings_PROP_ROUNDTIME                        202
#define CONST_MAPNAME_ExampleEntry                               1
#define CONST_TdMPSettings_GAME_MODE                             0x0000800B
#define CONST_TdMPSettings_GAME_MODE_TRAP                        1
#define CONST_TDPID_LevelUnlockMask                              1001
#define CONST_TDPID_KeyAction_20                                 519
#define CONST_TdMPSettings_GAME_MODE_DOUBLESTASH                 2
#define CONST_TdMPSettings_GAME_MODE_BRITTISHBULLDOG             3
#define CONST_TdMPSettings_FRIENDLY_FIRE                         100
#define CONST_TDPID_StretchTime_02                               1202
#define CONST_TdMPSettings_FRIENDLY_FIRE_NO                      1
#define CONST_TdMPSettings_SWITCH_SIDES                          101
#define CONST_TdMPSettings_SWITCH_SIDES_YES                      0
#define CONST_TdMPSettings_SWITCH_SIDES_NO                       1
#define CONST_TdMPSettings_PUBLICPRIVATE_MODE                    102
#define CONST_TdMPSettings_PUBLICPRIVATE_MODE_PUBLIC             0
#define CONST_TdMPSettings_PUBLICPRIVATE_MODE_PRIVATE            1
#define CONST_TdMPSettings_RANKEDUNRANKED_MODE_RANKED            0
#define CONST_TdMPSettings_RANKEDUNRANKED_MODE_UNRANKED          1
#define CONST_TDPID_ProRunner                                    1003
#define CONST_TdMPSettings_ROLERESTRICTION                       104
#define CONST_TdMPSettings_ROLERESTRICTION_YES                   0
#define CONST_TDPID_Reticule                                     257
#define CONST_TdMPSettings_ROLERESTRICTION_NO                    1
#define CONST_HEAVYWEAPONSALLOWED                                105
#define CONST_HEAVYWEAPONSALLOWED_YES                            0
#define CONST_HEAVYWEAPONSALLOWED_NO                             1
#define CONST_TdMPSettings_PROP_ROUNDSTOWIN                      200
#define CONST_TdMPSettings_PROP_MAXPLAYERS                       203
#define CONST_RUNNER_TEAM_INDEX                                  0
#define CONST_POLICE_TEAM_INDEX                                  1
#define CONST_TDPID_StretchTime_30                               1229
#define CONST_MAX_NUM_KEY_BINDS                                  4
#define CONST_TDPID_ControllerVibration                          250
#define CONST_TDPID_StretchTime_29                               1228
#define CONST_TDPID_KeyAction_42                                 541
#define CONST_TDPID_YInversion                                   251
#define CONST_TDPID_GameDifficulty                               252
#define CONST_TDPID_AutoAim                                      253
#define CONST_TDPID_MeasurementUnits                             255
#define CONST_TDPID_FaithOVision                                 256
#define CONST_TDPID_StretchTime_07                               1207
#define CONST_TDPID_MasterVolume                                 300
#define CONST_TDPID_MusicVolume                                  302
#define CONST_TDPID_Brightness                                   350
#define CONST_TDPID_ScreenResX                                   351
#define CONST_TDPID_ScreenResY                                   352
#define CONST_TDPID_StretchTime_01                               1201
#define CONST_TDPID_Contrast                                     353
#define CONST_TdUIScene_AccountLoginPC_MAX_PASSWD_LENGTH         28
#define CONST_TDPID_Sensitivity                                  400
#define CONST_MAX_LEVELS                                         10
#define CONST_TDPID_ControllerConfig                             401
#define CONST_TDPID_ControllerTilt                               402
#define CONST_TDPID_KeyAction_2                                  501
#define CONST_TDPID_KeyAction_3                                  502
#define CONST_TDPID_KeyAction_7                                  506
#define CONST_TDPID_KeyAction_8                                  507
#define CONST_TDPID_KeyAction_9                                  508
#define CONST_TDPID_KeyAction_10                                 509
#define CONST_TDPID_KeyAction_11                                 510
#define CONST_CONTEXT_MAPNAME                                    8
#define CONST_TDPID_KeyAction_12                                 511
#define CONST_TDPID_KeyAction_13                                 512
#define CONST_TDPID_LastSavedMap                                 900
#define CONST_TDPID_KeyAction_14                                 513
#define CONST_TDPID_KeyAction_15                                 514
#define CONST_TDPID_KeyAction_16                                 515
#define CONST_TDPID_KeyAction_17                                 516
#define CONST_TDPID_KeyAction_18                                 517
#define CONST_TDPID_KeyAction_21                                 520
#define CONST_TDPID_KeyAction_22                                 521
#define CONST_TDPID_KeyAction_23                                 522
#define CONST_TDPID_KeyAction_24                                 523
#define CONST_TDPID_KeyAction_25                                 524
#define CONST_TDPID_KeyAction_27                                 526
#define CONST_TDPID_KeyAction_28                                 527
#define CONST_TDPID_KeyAction_29                                 528
#define CONST_TDPID_KeyAction_30                                 529
#define CONST_TDPID_KeyAction_31                                 530
#define CONST_TDPID_KeyAction_33                                 532
#define CONST_TDPID_KeyAction_34                                 533
#define CONST_TDPID_KeyAction_35                                 534
#define CONST_TDPID_KeyAction_37                                 536
#define CONST_TDPID_KeyAction_38                                 537
#define CONST_TDPID_ViewedUnlocksFlags4                          1263
#define CONST_TDPID_KeyAction_39                                 538
#define CONST_TDPID_KeyAction_40                                 539
#define CONST_TDPID_KeyAction_41                                 540
#define CONST_TDPID_StretchTime_28                               1227
#define CONST_TDPID_KeyAction_43                                 542
#define CONST_TDPID_KeyAction_45                                 544
#define CONST_TDPID_KeyAction_46                                 545
#define CONST_TDPID_KeyAction_47                                 546
#define CONST_TDPID_StretchTime_23                               1222
#define CONST_TDPID_KeyAction_48                                 547
#define CONST_TDPID_StretchTime_22                               1221
#define CONST_TDPID_KeyAction_49                                 548
#define CONST_TDPID_KeyAction_50                                 549
#define CONST_TDPID_OnlinePersona                                701
#define CONST_TDPID_LastSavedCheckpoint                          901
#define CONST_TDPID_Level_NumHeavyLangings                       902
#define CONST_TDPID_Level_NumTakeBulletDamage                    903
#define CONST_TDPID_Level_NumBulletsFired                        904
#define CONST_TDPID_Game_NumGiveBulletDamage                     905
#define CONST_TDPID_Game_NumDisarms                              906
#define CONST_TDPID_Game_NumMeleeKills                           907
#define CONST_TDPID_Subtitles                                    1000
#define CONST_TDPID_LevelUnlockMaskHard                          1002
#define CONST_TDPID_HiddenBagMask                                1020
#define CONST_MAX_BAGS                                           30
#define CONST_TDPID_TimeTrialUnlockMask                          1150
#define CONST_TDPID_TimeTrialQualifierMask                       1151
#define CONST_TDPID_TimeTrialRating                              1152
#define CONST_TDPID_StretchTime_00                               1200
#define CONST_UITdOptionButton_UIKEY_MoveCursorLeft              'UIKEY_MoveCursorLeft'
#define CONST_TDPID_StretchTime_03                               1203
#define CONST_TDPID_StretchTime_04                               1204
#define CONST_TDPID_StretchTime_06                               1206
#define CONST_TDPID_StretchTime_08                               1208
#define CONST_TDPID_StretchTime_09                               1209
#define CONST_TDPID_StretchTime_12                               1211
#define CONST_TDPID_StretchTime_13                               1212
#define CONST_TDPID_StretchTime_14                               1213
#define CONST_TDPID_StretchTime_15                               1214
#define CONST_TDPID_StretchTime_16                               1215
#define CONST_TDPID_StretchTime_17                               1216
#define CONST_TDPID_StretchTime_18                               1217
#define CONST_TDPID_StretchTime_19                               1218
#define CONST_TDPID_StretchTime_20                               1219
#define CONST_TDPID_StretchTime_24                               1223
#define CONST_TDPID_StretchTime_26                               1225
#define CONST_TDPID_StretchTime_27                               1226
#define CONST_TDPID_StretchTime_31                               1230
#define CONST_TDPID_StretchTime_32                               1231
#define CONST_TDPID_StretchTime_33                               1232
#define CONST_TDPID_ViewedUnlocksFlags1                          1260
#define CONST_TDPID_ViewedUnlocksFlags2                          1261
#define CONST_TDPID_ViewedUnlocksFlags3                          1262
#define CONST_TDPID_HintsShownFlags                              1300
#define CONST_TDBUTTONBAR_MAX_BUTTONS                            6
#define CONST_TDBUTTONBAR_BUTTON_SPACING                         -50
#define CONST_TdUIScene_CreateAccountPC_MAX_PASSWD_LENGTH        28
#define CONST_MAX_CHARS_IN_STRING_BLOB                           5000
#define CONST_NUM_BLOBS                                          10
#define CONST_MAX_TRACERS                                        3
#define CONST_UIDataStore_TdMPData_GAME_MODE                     0x0000800B
#define CONST_SABM_FIND_FIRST_BIND                               -2
#define CONST_INVALIDFIELD                                       -1
#define CONST_UITdOptionButton_UIKEY_MoveCursorRight             'UIKEY_MoveCursorRight'

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TdGame.AITeam.EForcedAggressionLevel
enum class EForcedAggressionLevel : uint8_t
{
	FAL_Aggressive                 = 0,
	FAL_Cautious                   = 1,
	FAL_None                       = 2,
	FAL_MAX                        = 3
};


// Enum TdGame.AITeam.ESide
enum class ESide : uint8_t
{
	TdSide_Cops                    = 0,
	TdSide_Criminals               = 1,
	TdSide_MAX                     = 2
};


// Enum TdGame.TdAI_HeliController.EHeliAttackSide
enum class EHeliAttackSide : uint8_t
{
	ESide_Right                    = 0,
	ESide_Left                     = 1,
	ESide_UseLeftWhenHovering      = 2,
	ESide_UseRightWhenHovering     = 3,
	ESide_Both                     = 4,
	ESide_None                     = 5,
	ESide_MAX                      = 6
};


// Enum TdGame.TdAI_HeliController.HeliSpeed
enum class EHeliSpeed : uint8_t
{
	EHSpeed_Fastest_Default        = 0,
	EHSpeed_Fast                   = 1,
	EHSpeed_Slow                   = 2,
	EHSpeed_Slower                 = 3,
	EHSpeed_Slowest                = 4,
	EHSpeed_MAX                    = 5
};


// Enum TdGame.SeqAct_TdAIPlayAnimation.EPlayAnimationEndState
enum class EPlayAnimationEndState : uint8_t
{
	PAES_None                      = 0,
	PAES_Idle                      = 1,
	PAES_Melee                     = 2,
	PAES_Crouched                  = 3,
	PAES_MAX                       = 4
};


// Enum TdGame.SeqAct_TdFadeEffect.FadeEffectType
enum class EFadeEffectType : uint8_t
{
	FadeIn                         = 0,
	FadeOut                        = 1,
	FadeEffectType_MAX             = 2
};


// Enum TdGame.SeqAct_TdFakePostProcessEffect.EFakedPPEffect
enum class EFakedPPEffect : uint8_t
{
	FPPE_MeleeHit                  = 0,
	FPPE_FallingToYourDeath        = 1,
	FPPE_MotionBlur                = 2,
	FPPE_SprintEffect              = 3,
	FPPE_MAX                       = 4
};


// Enum TdGame.SeqAct_TdForceAggressionLevel.ForceAggressionLevel_Links
enum class EForceAggressionLevel_Links : uint8_t
{
	FALL_Aggressive                = 0,
	FALL_Cautious                  = 1,
	FALL_Disable                   = 2,
	FALL_MAX                       = 3
};


// Enum TdGame.SeqAct_TdRegisterStat.EAchievementStatsID
enum class EAchievementStatsID : uint8_t
{
	EASID_ShotsFired               = 0,
	EASID_MeleeKills               = 1,
	EASID_SPMeleeAirKills          = 2,
	EASID_SPMeleeDisarmKills       = 3,
	EASID_HitByEnemyWeapon         = 4,
	EASID_HittingEnemyWithWeapon   = 5,
	EASID_StartFullMomentum        = 6,
	EASID_EndFullMomentum          = 7,
	EASID_HeavyLanding             = 8,
	EASID_LandingOnEnemyHead       = 9,
	EASID_180Taunt                 = 10,
	EASID_PackageFound_0a          = 11,
	EASID_PackageFound_0b          = 12,
	EASID_PackageFound_0c          = 13,
	EASID_PackageFound_1a          = 14,
	EASID_PackageFound_1b          = 15,
	EASID_PackageFound_1c          = 16,
	EASID_PackageFound_2a          = 17,
	EASID_PackageFound_2b          = 18,
	EASID_PackageFound_2c          = 19,
	EASID_PackageFound_3a          = 20,
	EASID_PackageFound_3b          = 21,
	EASID_PackageFound_3c          = 22,
	EASID_PackageFound_4a          = 23,
	EASID_PackageFound_4b          = 24,
	EASID_PackageFound_4c          = 25,
	EASID_PackageFound_5a          = 26,
	EASID_PackageFound_5b          = 27,
	EASID_PackageFound_5c          = 28,
	EASID_PackageFound_6a          = 29,
	EASID_PackageFound_6b          = 30,
	EASID_PackageFound_6c          = 31,
	EASID_PackageFound_7a          = 32,
	EASID_PackageFound_7b          = 33,
	EASID_PackageFound_7c          = 34,
	EASID_PackageFound_8a          = 35,
	EASID_PackageFound_8b          = 36,
	EASID_PackageFound_8c          = 37,
	EASID_PackageFound_9a          = 38,
	EASID_PackageFound_9b          = 39,
	EASID_PackageFound_9c          = 40,
	EASID_NumberOfEASIDs           = 41,
	EASID_MAX                      = 42
};


// Enum TdGame.SeqAct_TdGetStatCount.EStatCompType
enum class EStatCompType : uint8_t
{
	STT_LargerThan                 = 0,
	STT_SmallerThan                = 1,
	STT_EqualTo                    = 2,
	STT_MAX                        = 3
};


// Enum TdGame.TdSPTutorialGame.ETutorialEvents
enum class ETutorialEvents : uint8_t
{
	ETE_None                       = 0,
	ETE_SkillRoll                  = 1,
	ETE_LookAtPoint                = 2,
	ETE_MeleeAttack                = 3,
	ETE_LowMeleeAttack             = 4,
	ETE_JumpKickAttack             = 5,
	ETE_SlideKickAttack            = 6,
	ETE_SpeedVaultAttack           = 7,
	ETE_RearDisarm                 = 8,
	ETE_FrontDisarm                = 9,
	ETE_Failed                     = 10,
	ETE_BJumpTest                  = 11,
	ETE_BCrouchTest                = 12,
	ETE_BTurnTest                  = 13,
	ETE_BAttackTest                = 14,
	ETE_BReactionTime              = 15,
	ETE_AiAttackSuccessful         = 16,
	ETE_AiPreAttackEvent           = 17,
	ETE_AiPostAttackEvent          = 18,
	ETE_WeaponDropped              = 19,
	ETE_ObjectivesShown            = 20,
	ETE_SpeedVault                 = 21,
	ETE_ReactionTimeDepleted       = 22,
	ETE_DisarmInitiated            = 23,
	ETE_MeleeFromBehind            = 24,
	ETE_MAX                        = 25
};


// Enum TdGame.TdSPTutorialGame.EMovementChallenge
enum class EMovementChallenge : uint8_t
{
	EMC_None                       = 0,
	EMC_JumpTimingOne              = 1,
	EMC_SlideOne                   = 2,
	EMC_JumpTimingTwo              = 3,
	EMC_SpeedVault                 = 4,
	EMC_JumpTimingThree            = 5,
	EMC_VaultOver                  = 6,
	EMC_SlideTwo                   = 7,
	EMC_HorizontalWallrun          = 8,
	EMC_Barge                      = 9,
	EMC_BalanceWalk                = 10,
	EMC_VerticalWallrun            = 11,
	EMC_Climb                      = 12,
	EMC_TransferToPipe             = 13,
	EMC_TransferToLedge            = 14,
	EMC_Turn180                    = 15,
	EMC_VerticalWallrunToGrab      = 16,
	EMC_JumpToGrab                 = 17,
	EMC_ZipLine                    = 18,
	EMC_SoftLanding                = 19,
	EMC_WallrunLJump               = 20,
	EMC_SpringBoard                = 21,
	EMC_FreeStyle                  = 22,
	EMC_BackToStart                = 23,
	EMC_MeleeAttack                = 24,
	EMC_LowMeleeAttack             = 25,
	EMC_JumpKickAttack             = 26,
	EMC_SlideKickAttack            = 27,
	EMC_SpeedVaultAttack           = 28,
	EMC_DodgeAttack                = 29,
	EMC_RearDisarm                 = 30,
	EMC_FrontDisarm                = 31,
	EMC_DiscardWeapon              = 32,
	EMC_FrontalDisarmRT            = 33,
	EMC_LedgeWalk                  = 34,
	EMC_Swing                      = 35,
	EMC_ButtonTest                 = 36,
	EMC_CoilJump                   = 37,
	EMC_AnyMovementChallenge       = 38,
	EMC_AnyCombatChallenge         = 39,
	EMC_Max                        = 40
};


// Enum TdGame.TdProfileSettings.EControllerVibrationValues
enum class EControllerVibrationValues : uint8_t
{
	TdVibr_Off                     = 0,
	TdVibr_On                      = 1,
	TdVibr_MAX                     = 2
};


// Enum TdGame.TdProfileSettings.EYInversionValues
enum class EYInversionValues : uint8_t
{
	TdYInvert_Normal               = 0,
	TdYInvert_Inverse              = 1,
	TdYInvert_MAX                  = 2
};


// Enum TdGame.TdProfileSettings.EDifficultySettingValue
enum class EDifficultySettingValue : uint8_t
{
	TdDiff_Easy                    = 0,
	TdDiff_Normal                  = 1,
	TdDiff_Hard                    = 2,
	TdDiff_MAX                     = 3
};


// Enum TdGame.TdProfileSettings.EAutoAimValues
enum class EAutoAimValues : uint8_t
{
	TdAutoAim_Off                  = 0,
	TdAutoAim_On                   = 1,
	TdAutoAim_MAX                  = 2
};


// Enum TdGame.TdProfileSettings.EControllerConfigValues
enum class EControllerConfigValues : uint8_t
{
	TdControllerConf               = 0,
	TdControllerConf01             = 1,
	TdControllerConf02             = 2,
	TdControllerConf03             = 3,
	TdControllerConf_MAX           = 4
};


// Enum TdGame.TdProfileSettings.EProfileControllerTiltValues
enum class EProfileControllerTiltValues : uint8_t
{
	TdTILT_Off                     = 0,
	TdTILT_On                      = 1,
	TdTILT_MAX                     = 2
};


// Enum TdGame.TdProfileSettings.ESubValues
enum class ESubValues : uint8_t
{
	TdSub_Off                      = 0,
	TdSub_On                       = 1,
	TdSub_MAX                      = 2
};


// Enum TdGame.TdProfileSettings.EMeasurementUnitsValues
enum class EMeasurementUnitsValues : uint8_t
{
	TdMeasurementUnit_Metric       = 0,
	TdMeasurementUnit_Imperial     = 1,
	TdMeasurementUnit_MAX          = 2
};


// Enum TdGame.TdProfileSettings.EFaithOVisionValues
enum class EFaithOVisionValues : uint8_t
{
	TdFaithOVision_Off             = 0,
	TdFaithOVision_Environment     = 1,
	TdFaithOVision_On              = 2,
	TdFaithOVision_MAX             = 3
};


// Enum TdGame.TdProfileSettings.EReticuleValues
enum class EReticuleValues : uint8_t
{
	TdReticule_Off                 = 0,
	TdReticule_WeaponOnly          = 1,
	TdReticule_On                  = 2,
	TdReticule_MAX                 = 3
};


// Enum TdGame.TdSPHUD.EPopUpType
enum class EPopUpType : uint8_t
{
	PUT_None                       = 0,
	PUT_Sniper                     = 1,
	PUT_Objective                  = 2,
	PUT_Tutorial                   = 3,
	PUT_Bag                        = 4,
	PUT_Skip                       = 5,
	PUT_MAX                        = 6
};


// Enum TdGame.TdProfileSettings.EDigitalButtonActions
enum class EDigitalButtonActions : uint8_t
{
	DBA_None                       = 0,
	DBA_MoveForward                = 1,
	DBA_MoveBackward               = 2,
	DBA_StrafeLeft                 = 3,
	DBA_StrafeRight                = 4,
	DBA_TurnLeft                   = 5,
	DBA_TurnRight                  = 6,
	DBA_LookUp                     = 7,
	DBA_LookDown                   = 8,
	DBA_Pause                      = 9,
	DBA_Move_Gamepad               = 10,
	DBA_Strafe_Gamepad             = 11,
	DBA_Turn_Gamepad               = 12,
	DBA_Look_Gamepad               = 13,
	DBA_Fire                       = 14,
	DBA_Jump                       = 15,
	DBA_Crouch                     = 16,
	DBA_Use                        = 17,
	DBA_InGameMenu                 = 18,
	DBA_LookBehind                 = 19,
	DBA_ReactionTime               = 20,
	DBA_SwitchWeapon               = 21,
	DBA_ZoomWeapon                 = 22,
	DBA_LookAt                     = 23,
	DBA_WalkMod                    = 24,
	DBA_MAX                        = 25
};


// Enum TdGame.SeqAct_TdUnlockAchievement.ETdAchievements
enum class ETdAchievements : uint8_t
{
	ETA_Invalid_Achievement        = 0,
	ETA_Level_1_Complete           = 1,
	ETA_Level_2_Complete           = 2,
	ETA_Level_3_Complete           = 3,
	ETA_Level_4_Complete           = 4,
	ETA_Level_5_Complete           = 5,
	ETA_Level_6_Complete           = 6,
	ETA_Level_7_Complete           = 7,
	ETA_Level_8_Complete           = 8,
	ETA_Level_9_Complete           = 9,
	ETA_Complete_Time_Trial        = 10,
	ETA_Tutorial_Complete          = 11,
	ETA_Unlock_All_Time_Trial_Stretches = 12,
	ETA_SkillRating                = 13,
	ETA_SkillRating01              = 14,
	ETA_SkillRating02              = 15,
	ETA_SpeedRun_1_Complete        = 16,
	ETA_SpeedRun_2_Complete        = 17,
	ETA_SpeedRun_3_Complete        = 18,
	ETA_SpeedRun_4_Complete        = 19,
	ETA_SpeedRun_5_Complete        = 20,
	ETA_SpeedRun_6_Complete        = 21,
	ETA_SpeedRun_7_Complete        = 22,
	ETA_SpeedRun_8_Complete        = 23,
	ETA_SpeedRun_9_Complete        = 24,
	ETA_SpeedRun_10_Complete       = 25,
	ETA_SP_Complete                = 26,
	ETA_SP_On_Hard_Complete        = 27,
	ETA_Beat_Level_Without_Getting_Shot = 28,
	ETA_Beat_Level_Without_Heavy_Landing = 29,
	ETA_Complete_Level_Without_Shooting = 30,
	ETA_Complete_Game_Without_Bullet_Hurting = 31,
	ETA_Full_Momentum_For_X_Seconds = 32,
	ETA_Perform_Air_Melee_Kill     = 33,
	ETA_Perform_X_Disarms          = 34,
	ETA_Perform_X_Melee_Kills      = 35,
	ETA_180_Taunt                  = 36,
	ETA_Land_On_Enemy_Head         = 37,
	ETA_StringJumpCoilSlide        = 38,
	ETA_StringWallrunJumpSV        = 39,
	ETA_StringWallrun90JumpWC180Jump = 40,
	ETA_StringWallrunJumpCoilSkillroll = 41,
	ETA_All_PackagesFound          = 42,
	ETA_All_PackagesInLevelFound   = 43,
	ETA_X_PackagesFound            = 44,
	ETA_MAX                        = 45
};


// Enum TdGame.SeqEvt_TdTutorialMessage.ETutorialMessage
enum class ETutorialMessage : uint8_t
{
	ETutoralMsg_HitMeReminder      = 0,
	ETutoralMsg_HitMeBlockReminder = 1,
	ETutoralMsg_DisarmReminder     = 2,
	ETutoralMsg_GoodWorkOneMore    = 3,
	ETutoralMsg_HitSuccess         = 4,
	ETutoralMsg_HitFailed          = 5,
	ETutoralMsg_JumpKickSuccess    = 6,
	ETutoralMsg_JumpKickFailed     = 7,
	ETutoralMsg_SlideKickFailed    = 8,
	ETutoralMsg_PlayerLayOnGround  = 9,
	ETutoralMsg_MAX                = 10
};


// Enum TdGame.TdAIAnimationController.EBodyPart
enum class EBodyPart : uint8_t
{
	EBP_Full                       = 0,
	EBP_Upper                      = 1,
	EBP_Weapon                     = 2,
	EBP_MAX                        = 3
};


// Enum TdGame.TdAIAnimationController.ECoverAnimation
enum class ECoverAnimation : uint8_t
{
	ECoverAnimationStartAimFire    = 0,
	ECoverAnimationStopAimFire     = 1,
	ECoverAnimation_MAX            = 2
};


// Enum TdGame.TdAIAnimationController.ECoverDirectionState
enum class ECoverDirectionState : uint8_t
{
	ECDS_None                      = 0,
	ECDS_Right                     = 1,
	ECDS_Left                      = 2,
	ECDS_Up                        = 3,
	ECDS_MAX                       = 4
};


// Enum TdGame.TdAIController.AdvanceAction
enum class EAdvanceAction : uint8_t
{
	AA_MoveCloser                  = 0,
	AA_StandAndFire                = 1,
	AA_Backup                      = 2,
	AA_FindLineOfFire              = 3,
	AA_None                        = 4,
	AA_MAX                         = 5
};


// Enum TdGame.TdBotPawn.EPose
enum class EPose : uint8_t
{
	Pose_Normal                    = 0,
	Pose_Crouched                  = 1,
	Pose_Melee                     = 2,
	Pose_MAX                       = 3
};


// Enum TdGame.TdAIController.EAggressionLevel
enum class EAggressionLevel : uint8_t
{
	AL_Aggressive                  = 0,
	AL_Cautious                    = 1,
	AL_Defensive                   = 2,
	AL_MAX                         = 3
};


// Enum TdGame.TdAIController.EMeleeType
enum class EMeleeType : uint8_t
{
	MT_Standing                    = 0,
	MT_Walking                     = 1,
	MT_Running                     = 2,
	MT_MAX                         = 3
};


// Enum TdGame.TdAIController.EDisarmState
enum class EDisarmState : uint8_t
{
	DS_NotPossible                 = 0,
	DS_Miss                        = 1,
	DS_Stage1                      = 2,
	DS_Stage2                      = 3,
	DS_Stage3                      = 4,
	DS_MAX                         = 5
};


// Enum TdGame.TdBotPawn.AIFiringMood
enum class EAIFiringMood : uint8_t
{
	AFM_Aimed                      = 0,
	AFM_None                       = 1,
	AFM_MAX                        = 2
};


// Enum TdGame.TdBotPawn.AIFiringRange
enum class EAIFiringRange : uint8_t
{
	AFR_Near                       = 0,
	AFR_Combat                     = 1,
	AFR_Far                        = 2,
	AFR_None                       = 3,
	AFR_MAX                        = 4
};


// Enum TdGame.TdPawn.CustomNodeType
enum class ECustomNodeType : uint8_t
{
	CNT_Canned                     = 0,
	CNT_CannedUpperBody            = 1,
	CNT_FullBody                   = 2,
	CNT_FullBody_Dir               = 3,
	CNT_UpperBody                  = 4,
	CNT_LowerBody                  = 5,
	CNT_Camera                     = 6,
	CNT_Weapon                     = 7,
	CNT_Face                       = 8,
	CNT_MAX                        = 9
};


// Enum TdGame.TdPawn.EMovement
enum class EMovement : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_Falling                   = 2,
	MOVE_Grabbing                  = 3,
	MOVE_WallRunningRight          = 4,
	MOVE_WallRunningLeft           = 5,
	MOVE_WallClimbing              = 6,
	MOVE_SpringBoarding            = 7,
	MOVE_SpeedVaulting             = 8,
	MOVE_VaultOver                 = 9,
	MOVE_GrabPullUp                = 10,
	MOVE_Jump                      = 11,
	MOVE_WallRunJump               = 12,
	MOVE_GrabJump                  = 13,
	MOVE_IntoGrab                  = 14,
	MOVE_Crouch                    = 15,
	MOVE_Slide                     = 16,
	MOVE_Melee                     = 17,
	MOVE_Snatch                    = 18,
	MOVE_Barge                     = 19,
	MOVE_Landing                   = 20,
	MOVE_Climb                     = 21,
	MOVE_IntoClimb                 = 22,
	MOVE_WallKick                  = 23,
	MOVE_180Turn                   = 24,
	MOVE_180TurnInAir              = 25,
	MOVE_LayOnGround               = 26,
	MOVE_IntoZipLine               = 27,
	MOVE_ZipLine                   = 28,
	MOVE_Balance                   = 29,
	MOVE_LedgeWalk                 = 30,
	MOVE_GrabTransfer              = 31,
	MOVE_MeleeAir                  = 32,
	MOVE_DodgeJump                 = 33,
	MOVE_WallRunDodgeJump          = 34,
	MOVE_Stumble                   = 35,
	MOVE_Snatched                  = 36,
	MOVE_StepUp                    = 37,
	MOVE_RumpSlide                 = 38,
	MOVE_Interact                  = 39,
	MOVE_WallRun                   = 40,
	MOVE_BotStop                   = 41,
	MOVE_BotStartWalking           = 42,
	MOVE_BotStartRunning           = 43,
	MOVE_BotTurnRunning            = 44,
	MOVE_BotTurnStanding           = 45,
	MOVE_ExitCover                 = 46,
	MOVE_Vertigo                   = 47,
	MOVE_MeleeSlide                = 48,
	MOVE_WallClimbDodgeJump        = 49,
	MOVE_WallClimb180TurnJump      = 50,
	MOVE_WallClimbDodgeJumpLeft    = 51,
	MOVE_WallClimbDodgeJumpRight   = 52,
	MOVE_MeleeVault                = 53,
	MOVE_BotMeleeSecondSwing       = 54,
	MOVE_StumbleHard               = 55,
	MOVE_BotRoll                   = 56,
	MOVE_BotFlip                   = 57,
	MOVE_Backflip_OBSOLETE         = 58,
	MOVE_BackflipToRun_OBSOLETE    = 59,
	MOVE_Swing                     = 60,
	MOVE_Coil                      = 61,
	MOVE_MeleeWallrun              = 62,
	MOVE_MeleeCrouch               = 63,
	MOVE_BotJumpShort              = 64,
	MOVE_BotJumpMedium             = 65,
	MOVE_BotJumpLong               = 66,
	MOVE_JumpIntoGrab              = 67,
	MOVE_StandGrabHeaveBot         = 68,
	MOVE_BotMeleeDodge             = 69,
	MOVE_FinishAttack              = 70,
	MOVE_MeleeBarge                = 71,
	MOVE_FallingUncontrolled       = 72,
	MOVE_SwingJump                 = 73,
	MOVE_AnimationPlayback         = 74,
	MOVE_EnterCover                = 75,
	MOVE_Cover                     = 76,
	MOVE_StumbleFalling            = 77,
	MOVE_SoftLanding               = 78,
	MOVE_HeadButtedByCeleste       = 79,
	MOVE_MeleeOriginalCeleste_OBSOLETE = 80,
	MOVE_AutoStepUp                = 81,
	MOVE_MeleeAirAbove             = 82,
	MOVE_MeleeCounterAttack_OBSOLETE = 83,
	MOVE_Block                     = 84,
	MOVE_AirBarge                  = 85,
	MOVE_RB_Bullrush_OBSOLETE      = 86,
	MOVE_RB_Bullrush_End_OBSOLETE  = 87,
	MOVE_RB_HitWall_OBSOLETE       = 88,
	MOVE_RB_HitFence_OBSOLETE      = 89,
	MOVE_RB_Ledge_OBSOLETE         = 90,
	MOVE_SkillRoll                 = 91,
	MOVE_BotGetDistance            = 92,
	MOVE_Cutscene                  = 93,
	MOVE_MAX                       = 94
};


// Enum TdGame.TdPawn.EWeaponAnimState
enum class EWeaponAnimState : uint8_t
{
	WS_Unarmed                     = 0,
	WS_Relaxed                     = 1,
	WS_Ready                       = 2,
	WS_Reload                      = 3,
	WS_Throwing                    = 4,
	WS_HeavyArmed                  = 5,
	WS_Holster                     = 6,
	WS_MAX                         = 7
};


// Enum TdGame.TdBotPawn.DeathAnimType
enum class EDeathAnimType : uint8_t
{
	DAT_Ragdoll                    = 0,
	DAT_RagdollHard                = 1,
	DAT_DeathFront                 = 2,
	DAT_DeathFrontHard             = 3,
	DAT_DeathBack                  = 4,
	DAT_DeathBackHard              = 5,
	DAT_DeathRight                 = 6,
	DAT_DeathRightHard             = 7,
	DAT_DeathLeft                  = 8,
	DAT_DeathLeftHard              = 9,
	DAT_MAX                        = 10
};


// Enum TdGame.TdBotPawn.EAcceleration
enum class EAcceleration : uint8_t
{
	EANormal                       = 0,
	EAFast                         = 1,
	EAcceleration_MAX              = 2
};


// Enum TdGame.TdPawn.EMovementAction
enum class EMovementAction : uint8_t
{
	MA_None                        = 0,
	MA_Jump                        = 1,
	MA_StopJump                    = 2,
	MA_Melee                       = 3,
	MA_Snatch                      = 4,
	MA_Crouch                      = 5,
	MA_StopCrouch                  = 6,
	MA_ClimbUp                     = 7,
	MA_ClimbDown                   = 8,
	MA_ClimbUpLong                 = 9,
	MA_ClimbDownLong               = 10,
	MA_Abort                       = 11,
	MA_ShimmyLeft                  = 12,
	MA_ShimmyLeftLong              = 13,
	MA_ShimmyRight                 = 14,
	MA_ShimmyRightLong             = 15,
	MA_Turn                        = 16,
	MA_Stumble                     = 17,
	MA_StumbleHard                 = 18,
	MA_MAX                         = 19
};


// Enum TdGame.TdPawn.EMoveActionHint
enum class EMoveActionHint : uint8_t
{
	MAH_None                       = 0,
	MAH_Left                       = 1,
	MAH_Right                      = 2,
	MAH_Up                         = 3,
	MAH_Down                       = 4,
	MAH_MAX                        = 5
};


// Enum TdGame.TdPawn.WalkingState
enum class EWalkingState : uint8_t
{
	WAS_Idle                       = 0,
	WAS_Sneak                      = 1,
	WAS_Walk                       = 2,
	WAS_Jog                        = 3,
	WAS_Run                        = 4,
	WAS_Sprint                     = 5,
	WAS_None                       = 6,
	WAS_MAX                        = 7
};


// Enum TdGame.TdPawn.EMeleeServerAction
enum class EMeleeServerAction : uint8_t
{
	MSA_TriggerMove                = 0,
	MSA_TriggerHit                 = 1,
	MSA_TriggerMiss                = 2,
	MSA_MAX                        = 3
};


// Enum TdGame.TdPawn.MoveAimMode
enum class EMoveAimMode : uint8_t
{
	MAM_Left                       = 0,
	MAM_Right                      = 1,
	MAM_TwoHanded                  = 2,
	MAM_NoHands                    = 3,
	MAM_Default                    = 4,
	MAM_MAX                        = 5
};


// Enum TdGame.TdPawn.EWeaponType
enum class EWeaponType : uint8_t
{
	EWT_None                       = 0,
	EWT_Heavy                      = 1,
	EWT_Light                      = 2,
	EWT_MAX                        = 3
};


// Enum TdGame.TdPawn.EMeleeImpactType
enum class EMeleeImpactType : uint8_t
{
	MIT_Gun                        = 0,
	MIT_Fist                       = 1,
	MIT_Foot                       = 2,
	MIT_Block                      = 3,
	MIT_MAX                        = 4
};


// Enum TdGame.TdPawn.EGrabTurnType
enum class EGrabTurnType : uint8_t
{
	GTT_None                       = 0,
	GTT_Start                      = 1,
	GTT_End                        = 2,
	GTT_Idle                       = 3,
	GTT_MAX                        = 4
};


// Enum TdGame.TdPawn.EAgainstWallState
enum class EAgainstWallState : uint8_t
{
	AW_None                        = 0,
	AW_AgainstWall                 = 1,
	AW_AgainstWallLeft             = 2,
	AW_AgainstWallRight            = 3,
	AW_MAX                         = 4
};


// Enum TdGame.TdAI_HeliController.EAdjustPosition
enum class EAdjustPosition : uint8_t
{
	EAP_PositionOK                 = 0,
	EAP_BetterPosFound             = 1,
	EAP_PositionNotOk              = 2,
	EAP_MAX                        = 3
};


// Enum TdGame.TdAI_Pursuit.EPrepMoveType
enum class EPrepMoveType : uint8_t
{
	EPrepMove_Run                  = 0,
	EPrepMove_Grenade              = 1,
	EPrepMove_Roll                 = 2,
	EPrepMove_Flip                 = 3,
	EPrepMove_NrOfPossiblePrepMoves = 4,
	EPrepMove_None                 = 5,
	EPrepMove_MAX                  = 6
};


// Enum TdGame.TdAI_Pursuit.EPursuitMeleeAttackType
enum class EPursuitMeleeAttackType : uint8_t
{
	EMeleeAttack_JumpKick          = 0,
	EMeleeAttack_Sliding           = 1,
	EMeleeAttack_Standing          = 2,
	EMeleeAttack_Run               = 3,
	EMeleeAttack_Shove             = 4,
	EMeleeAttack_NrOfPossibleAttacks = 5,
	EMeleeAttack_None              = 6,
	EMeleeAttack_MAX               = 7
};


// Enum TdGame.TdAI_Pursuit.EMeleeSubState
enum class EMeleeSubState : uint8_t
{
	E_WantDistance                 = 0,
	E_WantToAttack                 = 1,
	E_PeneltyState                 = 2,
	E_MAX                          = 3
};


// Enum TdGame.TdAi_Celeste.ECelesteStage
enum class ECelesteStage : uint8_t
{
	EC_Stage1                      = 0,
	EC_Stage2                      = 1,
	EC_MAX                         = 2
};


// Enum TdGame.TdAI_Sniper.FindResult
enum class EFindResult : uint8_t
{
	NoPosFound                     = 0,
	BetterPosFound                 = 1,
	UseCurrentPos                  = 2,
	FindResult_MAX                 = 3
};


// Enum TdGame.TdAIAnimationController.ECoverState
enum class ECoverState : uint8_t
{
	ECS_None                       = 0,
	ECS_CoverIdle                  = 1,
	ECS_CoverAimFire               = 2,
	ECS_MAX                        = 3
};


// Enum TdGame.TdAIAnimationController.EAiAnimationState
enum class EAiAnimationState : uint8_t
{
	EAAS_None                      = 0,
	EAAS_Crouch                    = 1,
	EAAS_Melee                     = 2,
	EAAS_MAX                       = 3
};


// Enum TdGame.TdAIAnimationController.EAimState
enum class EAimState : uint8_t
{
	EAimState_None                 = 0,
	EAimState_Normal               = 1,
	EAimState_Cover                = 2,
	EAimState_MAX                  = 3
};


// Enum TdGame.TdAIGrenadeController.EGrenadeThrowType
enum class EGrenadeThrowType : uint8_t
{
	EGTT_DropAtFeet                = 0,
	EGTT_ThrowAtTarget             = 1,
	EGTT_ThrowAtTargetWhileRunning = 2,
	EGTT_ThrowInTargetsWay         = 3,
	EGTT_MAX                       = 4
};


// Enum TdGame.TdAimBotSniper.ESniperAimbotState
enum class ESniperAimbotState : uint8_t
{
	ESABS_AimingAtTarget           = 0,
	ESABS_AimingAtBlindPos         = 1,
	ESABS_AimingOnTheWayToTarget   = 2,
	ESABS_MAX                      = 3
};


// Enum TdGame.TdAIVoiceOverManager.EVoiceOver
enum class EVoiceOver : uint8_t
{
	VO_Advance                     = 0,
	VO_AdvanceAnswer               = 1,
	VO_AllDead                     = 2,
	VO_Contact                     = 3,
	VO_ContactAnswer               = 4,
	VO_CoveringFire                = 5,
	VO_Engage                      = 6,
	VO_Follow                      = 7,
	VO_GetInCover                  = 8,
	VO_Hold                        = 9,
	VO_HitMelee                    = 10,
	VO_HitParry                    = 11,
	VO_ImHit                       = 12,
	VO_InPosition                  = 13,
	VO_ManDown                     = 14,
	VO_MoveBack                    = 15,
	VO_MovingBack                  = 16,
	VO_OutOfRange                  = 17,
	VO_OutOfRangeAnswer            = 18,
	VO_Pistol                      = 19,
	VO_PullingOut                  = 20,
	VO_PursueSuspect               = 21,
	VO_Rifle                       = 22,
	VO_ShesClose                   = 23,
	VO_Shotgun                     = 24,
	VO_Snatch                      = 25,
	VO_Suppressed                  = 26,
	VO_TakingFire                  = 27,
	VO_ThrowingGrenade             = 28,
	VO_Chopper_Fire                = 29,
	VO_Chopper_Halt                = 30,
	VO_Chopper_Pursuit             = 31,
	VO_Count                       = 32,
	VO_None                        = 33,
	VO_MAX                         = 34
};


// Enum TdGame.TdAnimNodeBlendBoneArmed.ArmedNodeType
enum class EArmedNodeType : uint8_t
{
	ANT_Left                       = 0,
	ANT_Right                      = 1,
	ANT_MAX                        = 2
};


// Enum TdGame.TdAnimNodeSequence.EAnimType
enum class EAnimType : uint8_t
{
	EA_None                        = 0,
	EA_Fire                        = 1,
	EA_Reload                      = 2,
	EA_Unholster                   = 3,
	EA_Holster                     = 4,
	EA_ThrowAway                   = 5,
	EA_WallJump                    = 6,
	EA_Snatch                      = 7,
	EA_Walk                        = 8,
	EA_Run                         = 9,
	EA_MAX                         = 10
};


// Enum TdGame.TdAnimNodeSequence.EScalePlayRateType
enum class EScalePlayRateType : uint8_t
{
	SPRT_ActorSpeed                = 0,
	SPRT_GroundSpeed               = 1,
	SPRT_ZSpeed                    = 2,
	SPRT_AverageActorSpeed         = 3,
	SPRT_GroundSpeedSize           = 4,
	SPRT_MAX                       = 5
};


// Enum TdGame.TdAnimNotify_CharacterSound.CharacterSoundTriggerType
enum class ECharacterSoundTriggerType : uint8_t
{
	ECSBreath_Soft_Short           = 0,
	ECSBreath_Soft_Long            = 1,
	ECSBreath_Medium_Short         = 2,
	ECSBreath_Medium_Long          = 3,
	ECSBreath_Hard_Short           = 4,
	ECSBreath_Hard_Long            = 5,
	ECSBreath_Jump                 = 6,
	ECSBreath_Snatch               = 7,
	ECSOral_Impact_Soft            = 8,
	ECSOral_Impact_Medium          = 9,
	ECSOral_Impact_Hard            = 10,
	ECSOral_Strain_Soft            = 11,
	ECSOral_Strain_Medium          = 12,
	ECSOral_Strain_Hard            = 13,
	ECSOral_Jump                   = 14,
	ECSOral_Snatch                 = 15,
	ECSOral_Vault                  = 16,
	ECSOral_Die                    = 17,
	ECSClothing_Crouch             = 18,
	ECSClothing_Walk               = 19,
	ECSClothing_Run                = 20,
	ECSMisc_Vault                  = 21,
	CharacterSoundTriggerType_MAX  = 22
};


// Enum TdGame.TdCover.ECoverQuality
enum class ECoverQuality : uint8_t
{
	ECQ_Invalid                    = 0,
	ECQ_Poor                       = 1,
	ECQ_Good                       = 2,
	ECQ_Perfect                    = 3,
	ECQ_MAX                        = 4
};


// Enum TdGame.TdCoverController.ECoverControllerAction
enum class ECoverControllerAction : uint8_t
{
	ECover_None                    = 0,
	ECover_Pending                 = 1,
	ECover_Enter                   = 2,
	ECover_Exit                    = 3,
	ECover_Idle                    = 4,
	ECover_AimFireLeft             = 5,
	ECover_AimFireRight            = 6,
	ECover_AimFireUp               = 7,
	ECover_MAX                     = 8
};


// Enum TdGame.TdCoverController.ECoverControllerPosition
enum class ECoverControllerPosition : uint8_t
{
	ECoverPosition_None            = 0,
	ECoverPosition_Center          = 1,
	ECoverPosition_Left            = 2,
	ECoverPosition_Right           = 3,
	ECoverPosition_MAX             = 4
};


// Enum TdGame.TdGrenadeTargetArea.EThrowType
enum class EThrowType : uint8_t
{
	EGThrow_Normal                 = 0,
	EGThrow_Low                    = 1,
	EGThrow_MAX                    = 2
};


// Enum TdGame.TdGrenadeTargetArea.EGrenadeType
enum class EGrenadeType : uint8_t
{
	ESmokeGrenade                  = 0,
	EFlashBang                     = 1,
	ETargetExplosive               = 2,
	EGrenadeType_MAX               = 3
};


// Enum TdGame.TdUIScene.EPossibleVideoSettings
enum class EPossibleVideoSettings : uint8_t
{
	PVS_VSyncValue                 = 0,
	PVS_TextureDetail              = 1,
	PVS_WorldDetail                = 2,
	PVS_Antialiasing               = 3,
	PVS_PhysXSupport               = 4,
	PVS_MAX                        = 5
};


// Enum TdGame.TdUIScene.ESaturationOptions
enum class ESaturationOptions : uint8_t
{
	SATURATION_Inherit             = 0,
	SATURATION_On                  = 1,
	SATURATION_ForceOff            = 2,
	SATURATION_MAX                 = 3
};


// Enum TdGame.TdGhostStorageManager.EGhostStorageResult
enum class EGhostStorageResult : uint8_t
{
	EGR_Ok                         = 0,
	EGR_OkNoGhost                  = 1,
	EGR_ErrorInconsistentTime      = 2,
	EGR_Error                      = 3,
	EGR_IncompatibleVersion        = 4,
	EGR_MAX                        = 5
};


// Enum TdGame.TdHeadControl.EBlinkingState
enum class EBlinkingState : uint8_t
{
	BS_None                        = 0,
	BS_Closing                     = 1,
	BS_Closed                      = 2,
	BS_Opening                     = 3,
	BS_MAX                         = 4
};


// Enum TdGame.TdHUD.EDamageType
enum class EDamageType : uint8_t
{
	EDT_Bullet                     = 0,
	EDT_Taser                      = 1,
	EDT_ElectricShock              = 2,
	EDT_Explosion                  = 3,
	EDT_Fall                       = 4,
	EDT_Melee                      = 5,
	EDT_FlashBang                  = 6,
	EDT_HeavyFlashBang             = 7,
	EDT_MAX                        = 8
};


// Enum TdGame.TdHudEffect_Flashbang.EFlash_Type
enum class EFlash_Type : uint8_t
{
	EFlash_Normal                  = 0,
	EFlash_Heavy                   = 1,
	EFlash_MAX                     = 2
};


// Enum TdGame.TdLadderVolume.ELadderType
enum class ELadderType : uint8_t
{
	LT_Ladder                      = 0,
	LT_Pipe                        = 1,
	LT_MAX                         = 2
};


// Enum TdGame.TdLeaderboardSettings.ETdLeaderboardFilters
enum class ETdLeaderboardFilters : uint8_t
{
	LF_TimeFrame                   = 0,
	LF_PlayerFilterType            = 1,
	LF_GameModeType                = 2,
	LF_MAX                         = 3
};


// Enum TdGame.TdLeaderboardSettings.ETdTimeFilterSettings
enum class ETdTimeFilterSettings : uint8_t
{
	TFS_Weekly                     = 0,
	TFS_Monthly                    = 1,
	TFS_AllTime                    = 2,
	TFS_Max                        = 3
};


// Enum TdGame.TdLeaderboardSettings.ETdPlayerFilterSettings
enum class ETdPlayerFilterSettings : uint8_t
{
	PFS_CenteredOnPlayer           = 0,
	PFS_Friends                    = 1,
	PFS_TopRankings                = 2,
	PFS_Max                        = 3
};


// Enum TdGame.TdLeaderboardSettings.ETdGameModeSettings
enum class ETdGameModeSettings : uint8_t
{
	GMS_TimeTrial                  = 0,
	GMS_LevelRace                  = 1,
	GMS_MAX                        = 2
};


// Enum TdGame.TdLedgeWalkVolume.ELedgeWalkType
enum class ELedgeWalkType : uint8_t
{
	LWT_Ledge                      = 0,
	LWT_NarrowSpace                = 1,
	LWT_MAX                        = 2
};


// Enum TdGame.TdLocalMessage.EMessageArea
enum class EMessageArea : uint8_t
{
	EMA_Left                       = 0,
	EMA_Right                      = 1,
	EMA_Centered                   = 2,
	EMA_MAX                        = 3
};


// Enum TdGame.TdLocalMessage.EMessageType
enum class EMessageType : uint8_t
{
	MT_Taunt                       = 0,
	MT_NeedAssistance              = 1,
	MT_Praise                      = 2,
	MT_Dropped                     = 3,
	MT_PickUp                      = 4,
	MT_Intecepted                  = 5,
	MT_Passed                      = 6,
	MT_Catched                     = 7,
	MT_YouHaveTheBag               = 8,
	MT_BagIsOnGround               = 9,
	MT_RequestBag                  = 10,
	MT_NeedABagCatcher             = 11,
	MT_Kill                        = 12,
	MT_NoKiller                    = 13,
	MT_Suicide                     = 14,
	MT_TeamKill                    = 15,
	MT_MeleeKill                   = 16,
	MT_BagKill                     = 17,
	MT_BagThretener                = 18,
	MT_Helicopter_Approaching      = 19,
	MT_Helicopter_Leaving          = 20,
	MT_Police_Searching            = 21,
	MT_Searching_Intercepted       = 22,
	MT_MissionBriefing             = 23,
	MT_TTRaceStarted               = 24,
	MT_One                         = 25,
	MT_Two                         = 26,
	MT_Three                       = 27,
	MT_NewPersonalRecord           = 28,
	MT_NewWorldRecord              = 29,
	MT_NewFriendsRecord            = 30,
	MT_TryAgain                    = 31,
	MT_CheckpointCriteriaCompleted = 32,
	MT_CheckpointCriteriaFailed    = 33,
	MT_MAX                         = 34
};


// Enum TdGame.TdLoginSettings.ETdLoginSettingsFilter
enum class ETdLoginSettingsFilter : uint8_t
{
	TDLS_ALLOW_EA_MAIL             = 0,
	TDLS_ALLOW_THIRD_PARTY_EMAIL   = 1,
	TDLS_ALLOW_MAX                 = 2
};


// Enum TdGame.TdLoginSettings.ETdLoginSettingsFilter_Options
enum class ETdLoginSettingsFilter_Options : uint8_t
{
	TDLSO_YES                      = 0,
	TDLSO_NO                       = 1,
	TDLSO_MAX                      = 2
};


// Enum TdGame.TdMiniMapMeshComponent.EMeshIconType
enum class EMeshIconType : uint8_t
{
	EMIT_Stashpoint                = 0,
	EMIT_Runner                    = 1,
	EMIT_Cop                       = 2,
	EMIT_Bag                       = 3,
	EMIT_You                       = 4,
	EMIT_MAX                       = 5
};


// Enum TdGame.TdMove.EPreciseLocationMode
enum class EPreciseLocationMode : uint8_t
{
	PLM_Fly                        = 0,
	PLM_Walk                       = 1,
	PLM_Jump                       = 2,
	PLM_SimJump                    = 3,
	PLM_Fall                       = 4,
	PLM_MAX                        = 5
};


// Enum TdGame.TdMove.EMovementGroup
enum class EMovementGroup : uint8_t
{
	MG_Free                        = 0,
	MG_OneHandBusy                 = 1,
	MG_TwoHandsBusy                = 2,
	MG_NonInteractive              = 3,
	MG_MAX                         = 4
};


// Enum TdGame.TdMove_BotMelee.EMeleeStage
enum class EMeleeStage : uint8_t
{
	EStage_FirstAnimation          = 0,
	EStage_SecondAnimation         = 1,
	EStage_MAX                     = 2
};


// Enum TdGame.TdMove_BotJump.EBotJumpLength
enum class EBotJumpLength : uint8_t
{
	BJL_Short                      = 0,
	BJL_Mid                        = 1,
	BJL_Long                       = 2,
	BJL_None                       = 3,
	BJL_MAX                        = 4
};


// Enum TdGame.TdMove_BotMeleeDodge.EMeleeDodgeType
enum class EMeleeDodgeType : uint8_t
{
	EDodgeType_RollRight           = 0,
	EDodgeType_RollLeft            = 1,
	EDodgeType_MAX                 = 2
};


// Enum TdGame.TdMove_BotStart.LegOffsetType
enum class ELegOffsetType : uint8_t
{
	LOT_WalkForward                = 0,
	LOT_WalkLeft60                 = 1,
	LOT_WalkLeftBwd120             = 2,
	LOT_WalkRight60                = 3,
	LOT_WalkRightBwd120            = 4,
	LOT_WalkBack                   = 5,
	LOT_RunForward                 = 6,
	LOT_RunLeft90                  = 7,
	LOT_RunLeft180                 = 8,
	LOT_RunRight90                 = 9,
	LOT_RunRight180                = 10,
	LOT_MAX                        = 11
};


// Enum TdGame.TdMove_StumbleBase.EStumbleState
enum class EStumbleState : uint8_t
{
	ESS_HitNone                    = 0,
	ESS_HitMeleeBack               = 1,
	ESS_HitMeleeBackHead           = 2,
	ESS_HitMeleeFrontLeft          = 3,
	ESS_HitMeleeFrontRight         = 4,
	ESS_HitMeleeBargeFront         = 5,
	ESS_HitMeleeCrouchFront        = 6,
	ESS_HitMeleeSlideFront         = 7,
	ESS_HitMeleeWallrunRight       = 8,
	ESS_HitMeleeWallrunLeft        = 9,
	ESS_HitMeleeAirHeadFront       = 10,
	ESS_HitMeleeAirBodyFront       = 11,
	ESS_HitMeleeVaultKick          = 12,
	ESS_HitMeleeSoccerKick         = 13,
	ESS_HitBulletFront             = 14,
	ESS_HitBulletFrontHead         = 15,
	ESS_HitBulletBack              = 16,
	ESS_HitSpecialBulletFront      = 17,
	ESS_HitSpecialBulletHead       = 18,
	ESS_HitSpecialBulletBack       = 19,
	ESS_HitBarbedWireFront         = 20,
	ESS_MAX                        = 21
};


// Enum TdGame.TdMove_Climb.EClimbState
enum class EClimbState : uint8_t
{
	CS_Climbing                    = 0,
	CS_ExitAtTop                   = 1,
	CS_ExitAtBottom                = 2,
	CS_MAX                         = 3
};


// Enum TdGame.TdMove_Climb.EClimbAnimationType
enum class EClimbAnimationType : uint8_t
{
	CAT_ClimbUpLeftHand            = 0,
	CAT_ClimbUpRightHand           = 1,
	CAT_ClimbUpFastLeftHand        = 2,
	CAT_ClimbUpFastRightHand       = 3,
	CAT_ClimbExitAtTopRightHand    = 4,
	CAT_ClimbExitAtTopLeftHand     = 5,
	CAT_MAX                        = 6
};


// Enum TdGame.TdMove_Grab.EGrabFoldedType
enum class EGrabFoldedType : uint8_t
{
	GFT_None                       = 0,
	GFT_Start                      = 1,
	GFT_End                        = 2,
	GFT_MAX                        = 3
};


// Enum TdGame.TdMove_Grab.EShimmyType
enum class EShimmyType : uint8_t
{
	Shimmy                         = 0,
	ShimmyLong                     = 1,
	ShimmyAroundCorner             = 2,
	NoShimmy                       = 3,
	EShimmyType_MAX                = 4
};


// Enum TdGame.TdMove_Grab.EGrabType
enum class EGrabType : uint8_t
{
	GT_LegsOnWall                  = 0,
	GT_LegsFree                    = 1,
	GT_MAX                         = 2
};


// Enum TdGame.TdMove_GrabPullUp.EGrabPullUpType
enum class EGrabPullUpType : uint8_t
{
	GPUT_IntoWalking               = 0,
	GPUT_IntoCrouch                = 1,
	GPUT_MAX                       = 2
};


// Enum TdGame.TdMove_IntoClimb.EClimbEnterState
enum class EClimbEnterState : uint8_t
{
	CES_EnteringAtTop              = 0,
	CES_EnteringAtBottom           = 1,
	CES_EnteringFalling            = 2,
	CES_MAX                        = 3
};


// Enum TdGame.TdMove_MeleeBase.EMeleeState
enum class EMeleeState : uint8_t
{
	MS_MeleePending                = 0,
	MS_MeleeAttackNormal           = 1,
	MS_MeleeAttackFinishing        = 2,
	MS_MeleeHitNormal              = 3,
	MS_MeleeHitFinishing           = 4,
	MS_MeleeMissNormal             = 5,
	MS_MeleeMissFinishing          = 6,
	MS_MAX                         = 7
};


// Enum TdGame.TdMove_Melee.EMoveMeleeType
enum class EMoveMeleeType : uint8_t
{
	MT_Normal                      = 0,
	MT_AtBlockingEnemy             = 1,
	MT_AtBentOverEnemy             = 2,
	MT_AtComboFinisher             = 3,
	MT_MAX                         = 4
};


// Enum TdGame.TdMove_MeleeAir.EMeleeAirType
enum class EMeleeAirType : uint8_t
{
	MAT_FromJump                   = 0,
	MAT_FromJumpStill              = 1,
	MAT_FromJumpHigh               = 2,
	MAT_MAX                        = 3
};


// Enum TdGame.TdMove_StepUp.EStepUpType
enum class EStepUpType : uint8_t
{
	ESUT_Low                       = 0,
	ESUT_Medium                    = 1,
	ESUT_High                      = 2,
	ESUT_Long                      = 3,
	ESUT_MAX                       = 4
};


// Enum TdGame.TdMove_Stumble.EStumbleStage
enum class EStumbleStage : uint8_t
{
	StumbleStage_One               = 0,
	StumbleStage_Two               = 1,
	StumbleStage_Three             = 2,
	StumbleStage_MAX               = 3
};


// Enum TdGame.TdMove_Stumble_Boss.EStumbleStageBoss
enum class EStumbleStageBoss : uint8_t
{
	SSBoss_Normal                  = 0,
	SSBoss_One                     = 1,
	SSBoss_Two                     = 2,
	SSBoss_Recover                 = 3,
	SSBoss_MAX                     = 4
};


// Enum TdGame.TdMove_ZipLine.EZipLineStatus
enum class EZipLineStatus : uint8_t
{
	ZLS_Moving                     = 0,
	ZLS_CloseToEnd                 = 1,
	ZLS_Impact                     = 2,
	ZLS_MAX                        = 3
};


// Enum TdGame.UIDataStore_TdGameData.RebootReasonType
enum class ERebootReasonType : uint8_t
{
	RR_NoReason                    = 0,
	RR_Signout                     = 1,
	RR_Signin                      = 2,
	RR_ConnectionLost              = 3,
	RR_MAX                         = 4
};


// Enum TdGame.TdParticleModuleCollision.ECollisionParticleType
enum class ECollisionParticleType : uint8_t
{
	ECPT_BulletShellLight          = 0,
	ECPT_BulletShellHeavy          = 1,
	ECPT_BulletShellShotgun        = 2,
	ECPT_GlasShatterSmall          = 3,
	ECPT_GlasShatterMedium         = 4,
	ECPT_GlasShatterLarge          = 5,
	ECPT_MAX                       = 6
};


// Enum TdGame.TdPlayerPawn.MorphNodeWeightTypes1p
enum class EMorphNodeWeightTypes1p : uint8_t
{
	MN_RightForeArmRoll            = 0,
	MN_RightForeArmRollNegative    = 1,
	MN_LeftForeArmRoll             = 2,
	MN_LeftForeArmRollNegative     = 3,
	MN_NumMorphNodes               = 4,
	MN_MAX                         = 5
};


// Enum TdGame.TdPlayerPawn.BoneNamesTypes1p
enum class EBoneNamesTypes1p : uint8_t
{
	RightForeArm                   = 0,
	RightForeArmRoll               = 1,
	RightIndex0                    = 2,
	RightIndex1                    = 3,
	RightMiddle0                   = 4,
	RightMiddle1                   = 5,
	LeftForeArm                    = 6,
	LeftForeArmRoll                = 7,
	LeftIndex0                     = 8,
	LeftIndex1                     = 9,
	LeftMiddle0                    = 10,
	LeftMiddle1                    = 11,
	BoneNamesTypes1p_MAX           = 12
};


// Enum TdGame.TdPlayerPawn.HandNormalMapMasks
enum class EHandNormalMapMasks : uint8_t
{
	RightThumb                     = 0,
	RightIndex                     = 1,
	RightMiddle                    = 2,
	RightRing                      = 3,
	RightPinky                     = 4,
	LeftThumb                      = 5,
	LeftIndex                      = 6,
	LeftMiddle                     = 7,
	LeftRing                       = 8,
	LeftPinky                      = 9,
	HandNormalMapMasks_MAX         = 10
};


// Enum TdGame.TdProfileSettings.ETDBindableKeys
enum class ETDBindableKeys : uint8_t
{
	TDBND_Unbound                  = 0,
	TDBND_MouseX                   = 1,
	TDBND_MouseY                   = 2,
	TDBND_MouseScrollUp            = 3,
	TDBND_MouseScrollDown          = 4,
	TDBND_LeftMouseButton          = 5,
	TDBND_RightMouseButton         = 6,
	TDBND_MiddleMouseButton        = 7,
	TDBND_ThumbMouseButton         = 8,
	TDBND_BackSpace                = 9,
	TDBND_Tab                      = 10,
	TDBND_Enter                    = 11,
	TDBND_Pause                    = 12,
	TDBND_CapsLock                 = 13,
	TDBND_Escape                   = 14,
	TDBND_SpaceBar                 = 15,
	TDBND_PageUp                   = 16,
	TDBND_PageDown                 = 17,
	TDBND_End                      = 18,
	TDBND_Home                     = 19,
	TDBND_Left                     = 20,
	TDBND_Up                       = 21,
	TDBND_Right                    = 22,
	TDBND_Down                     = 23,
	TDBND_Insert                   = 24,
	TDBND_Delete                   = 25,
	TDBND_Zero                     = 26,
	TDBND_One                      = 27,
	TDBND_Two                      = 28,
	TDBND_Three                    = 29,
	TDBND_Four                     = 30,
	TDBND_Five                     = 31,
	TDBND_Six                      = 32,
	TDBND_Seven                    = 33,
	TDBND_Eight                    = 34,
	TDBND_Nine                     = 35,
	TDBND_A                        = 36,
	TDBND_B                        = 37,
	TDBND_C                        = 38,
	TDBND_D                        = 39,
	TDBND_E                        = 40,
	TDBND_F                        = 41,
	TDBND_G                        = 42,
	TDBND_H                        = 43,
	TDBND_I                        = 44,
	TDBND_J                        = 45,
	TDBND_K                        = 46,
	TDBND_L                        = 47,
	TDBND_M                        = 48,
	TDBND_N                        = 49,
	TDBND_O                        = 50,
	TDBND_P                        = 51,
	TDBND_Q                        = 52,
	TDBND_R                        = 53,
	TDBND_S                        = 54,
	TDBND_T                        = 55,
	TDBND_U                        = 56,
	TDBND_V                        = 57,
	TDBND_W                        = 58,
	TDBND_X                        = 59,
	TDBND_Y                        = 60,
	TDBND_Z                        = 61,
	TDBND_NumPadZero               = 62,
	TDBND_NumPadOne                = 63,
	TDBND_NumPadTwo                = 64,
	TDBND_NumPadThree              = 65,
	TDBND_NumPadFour               = 66,
	TDBND_NumPadFive               = 67,
	TDBND_NumPadSix                = 68,
	TDBND_NumPadSeven              = 69,
	TDBND_NumPadEight              = 70,
	TDBND_NumPadNine               = 71,
	TDBND_Multiply                 = 72,
	TDBND_Add                      = 73,
	TDBND_Subtract                 = 74,
	TDBND_Decimal                  = 75,
	TDBND_Divide                   = 76,
	TDBND_F1                       = 77,
	TDBND_F2                       = 78,
	TDBND_F3                       = 79,
	TDBND_F4                       = 80,
	TDBND_F5                       = 81,
	TDBND_F6                       = 82,
	TDBND_F7                       = 83,
	TDBND_F8                       = 84,
	TDBND_F9                       = 85,
	TDBND_F10                      = 86,
	TDBND_F11                      = 87,
	TDBND_F12                      = 88,
	TDBND_NumLock                  = 89,
	TDBND_ScrollLock               = 90,
	TDBND_LeftShift                = 91,
	TDBND_RightShift               = 92,
	TDBND_LeftControl              = 93,
	TDBND_RightControl             = 94,
	TDBND_LeftAlt                  = 95,
	TDBND_RightAlt                 = 96,
	TDBND_Semicolon                = 97,
	TDBND_Equals                   = 98,
	TDBND_Comma                    = 99,
	TDBND_Underscore               = 100,
	TDBND_Period                   = 101,
	TDBND_Slash                    = 102,
	TDBND_Tilde                    = 103,
	TDBND_LeftBracket              = 104,
	TDBND_Backslash                = 105,
	TDBND_RightBracket             = 106,
	TDBND_Quote                    = 107,
	TDBND_MAX                      = 108
};


// Enum TdGame.TdProfileSettings.ETDGamepadKeys
enum class ETDGamepadKeys : uint8_t
{
	TDPAD_LeftX                    = 0,
	TDPAD_LeftY                    = 1,
	TDPAD_RightX                   = 2,
	TDPAD_RightY                   = 3,
	TDPAD_ButtonA                  = 4,
	TDPAD_ButtonB                  = 5,
	TDPAD_ButtonX                  = 6,
	TDPAD_ButtonY                  = 7,
	TDPAD_Start                    = 8,
	TDPAD_Back                     = 9,
	TDPAD_RightShoulder            = 10,
	TDPAD_LeftShoulder             = 11,
	TDPAD_RightTrigger             = 12,
	TDPAD_LeftTrigger              = 13,
	TDPAD_RightThumbstickPressed   = 14,
	TDPAD_LeftThumbstickPressed    = 15,
	TDPAD_DPadUp                   = 16,
	TDPAD_DPadDown                 = 17,
	TDPAD_DPadLeft                 = 18,
	TDPAD_DPadRight                = 19,
	TDPAD_AccelX                   = 20,
	TDPAD_AccelY                   = 21,
	TDPAD_AccelZ                   = 22,
	TDPAD_Gyro                     = 23,
	TDPAD_MAX                      = 24
};


// Enum TdGame.TdProfileSettings.ETTDifficulty
enum class ETTDifficulty : uint8_t
{
	ETTD_Easy                      = 0,
	ETTD_Medium                    = 1,
	ETTD_Hard                      = 2,
	ETTD_Expert                    = 3,
	ETTD_All                       = 4,
	ETTD_MAX                       = 5
};


// Enum TdGame.TdSPTimeTrialGame.ETTStretch
enum class ETTStretch : uint8_t
{
	ETTS_None                      = 0,
	ETTS_CranesA01                 = 1,
	ETTS_CranesB01                 = 2,
	ETTS_CranesB02                 = 3,
	ETTS_EdgeA01                   = 4,
	ETTS_StormdrainA01             = 5,
	ETTS_StormdrainA02             = 6,
	ETTS_StormdrainB01             = 7,
	ETTS_StormdrainB02             = 8,
	ETTS_StormdrainB03             = 9,
	ETTS_ConvoyA01                 = 10,
	ETTS_ConvoyA02                 = 11,
	ETTS_ConvoyB01                 = 12,
	ETTS_ConvoyB02                 = 13,
	ETTS_MallA01                   = 14,
	ETTS_TutorialA01               = 15,
	ETTS_TutorialA02               = 16,
	ETTS_FactoryA01                = 17,
	ETTS_SkyscraperA01             = 18,
	ETTS_SkyscraperB01             = 19,
	ETTS_CranesC01                 = 20,
	ETTS_TutorialA03               = 21,
	ETTS_EscapeA01                 = 22,
	ETTS_EscapeB01                 = 23,
	ETTS_CranesD01                 = 24,
	ETTS_Max                       = 25
};


// Enum TdGame.TdReverbVolume.VolumeType
enum class EVolumeType : uint8_t
{
	EVT_Small__                    = 0,
	EVT_Medium_                    = 1,
	EVT_Large__                    = 2,
	EVT_Mute___                    = 3,
	EVT_MAX                        = 4
};


// Enum TdGame.TdSkelControlAim1p.EAimingType
enum class EAimingType : uint8_t
{
	TDEAT_NoAim                    = 0,
	TDEAT_UpperBody                = 1,
	TDEAT_Right                    = 2,
	TDEAT_Left                     = 3,
	TDEAT_MAX                      = 4
};


// Enum TdGame.TdSkelControlLazySpring.SpringAxis
enum class ESpringAxis : uint8_t
{
	SAYaw                          = 0,
	SAPitch                        = 1,
	SARoll                         = 2,
	SpringAxis_MAX                 = 3
};


// Enum TdGame.TdSkelControlRandom.RandomAxis
enum class ERandomAxis : uint8_t
{
	RAYaw                          = 0,
	RAPitch                        = 1,
	RARoll                         = 2,
	RandomAxis_MAX                 = 3
};


// Enum TdGame.TdSoundNodeADSR.SoundInterpolationMethod
enum class ESoundInterpolationMethod : uint8_t
{
	INTERPOLATION_Linear           = 0,
	INTERPOLATION_Smooth           = 1,
	INTERPOLATION_Square           = 2,
	INTERPOLATION_Fast             = 3,
	INTERPOLATION_MAX              = 4
};


// Enum TdGame.TdSoundNodeVelocity.SpeedType
enum class ESpeedType : uint8_t
{
	SPEEDTYPE_Source               = 0,
	SPEEDTYPE_Listener             = 1,
	SPEEDTYPE_Relative             = 2,
	SPEEDTYPE_Custom               = 3,
	SPEEDTYPE_MAX                  = 4
};


// Enum TdGame.TdSPTimeTrialGame.ERaceType
enum class ERaceType : uint8_t
{
	ERT_PersonalBest               = 0,
	ERT_LeaderboardEntry           = 1,
	ERT_MAX                        = 2
};


// Enum TdGame.TdSwanNeck.ESwanNeckType
enum class ESwanNeckType : uint8_t
{
	ESNT_Linear                    = 0,
	ESNT_Quadratic                 = 1,
	ESNT_MAX                       = 2
};


// Enum TdGame.TdTrigger.ETriggerInteractType
enum class ETriggerInteractType : uint8_t
{
	TIT_Button                     = 0,
	TIT_Valve                      = 1,
	TIT_ButtonHigh                 = 2,
	TIT_MAX                        = 3
};


// Enum TdGame.TdUIRaceProgressBar.EPB_Type
enum class EPB_Type : uint8_t
{
	EPB_TimeDiff                   = 0,
	EPB_Length                     = 1,
	EPB_MAX                        = 2
};


// Enum TdGame.TdUIScene_MainMenu.ETdMainMenuPanel
enum class ETdMainMenuPanel : uint8_t
{
	TDMMP_STORY                    = 0,
	TDMMP_TIMETRIAL                = 1,
	TDMMP_OPTIONS                  = 2,
	TDMMP_EXTRAS                   = 3,
	TDMMP_MAX                      = 4
};


// Enum TdGame.TdUITextSlider.ESliderButtonArrow
enum class ESliderButtonArrow : uint8_t
{
	SLIDERARROW_Left               = 0,
	SLIDERARROW_Right              = 1,
	SLIDERARROW_MAX                = 2
};


// Enum TdGame.TdWeapon.EWeaponFallOffType
enum class EWeaponFallOffType : uint8_t
{
	EWFOT_Linear                   = 0,
	EWFOT_Logarithmic              = 1,
	EWFOT_Inverse                  = 2,
	EWFOT_LogReverse               = 3,
	EWFOT_MAX                      = 4
};


// Enum TdGame.TdWeapon.EWeaponDecalType
enum class EWeaponDecalType : uint8_t
{
	EWDT_Light                     = 0,
	EWDT_Heavy                     = 1,
	EWDT_ShotGun                   = 2,
	EWDT_None                      = 3,
	EWDT_MAX                       = 4
};


// Enum TdGame.TdWeapon.EWeaponReloadAnimationType
enum class EWeaponReloadAnimationType : uint8_t
{
	WRAT_Start                     = 0,
	WRAT_Reload                    = 1,
	WRAT_End                       = 2,
	WRAT_MAX                       = 3
};


// Enum TdGame.TdWeapon_Grenade.EGrenadeState
enum class EGrenadeState : uint8_t
{
	EGS_cold                       = 0,
	EGS_cocked                     = 1,
	EGS_thrown                     = 2,
	EGS_exploding                  = 3,
	EGS_MAX                        = 4
};


// Enum TdGame.UIAction_TdResetToDefault.ETdOptionGroup
enum class ETdOptionGroup : uint8_t
{
	TDOG_AudioVideo                = 0,
	TDOG_Controls                  = 1,
	TDOG_MAX                       = 2
};


// Enum TdGame.UIDataStore_TdOnlineStats.ETdOnlineStatsReadState
enum class ETdOnlineStatsReadState : uint8_t
{
	TDSR_NONE                      = 0,
	TDSR_INIT                      = 1,
	TDSR_PLAYER                    = 2,
	TDSR_LEADERBOARD               = 3,
	TDSR_MAX                       = 4
};


// Enum TdGame.UITdOptionButton.EOptionButtonArrow
enum class EOptionButtonArrow : uint8_t
{
	OPTBUT_ArrowLeft               = 0,
	OPTBUT_ArrowRight              = 1,
	OPTBUT_MAX                     = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TdGame.TdCover.IgnoreStruct
// 0x0010
struct FIgnoreStruct
{
	class ACoverLink*                                  Link;                                                     // 0x0000(0x0004)
	int                                                Slot;                                                     // 0x0004(0x0004)
	float                                              IgnoreTime;                                               // 0x0008(0x0004)
	float                                              StartTimeStamp;                                           // 0x000C(0x0004)
};

// ScriptStruct TdGame.TdGameInfo.DefaultInvItem
// 0x001D
struct FDefaultInvItem
{
	struct FName                                       PawnClassName;                                            // 0x0000(0x0008)
	struct FString                                     InventoryClassName;                                       // 0x0008(0x000C) (NeedCtorLink)
	int                                                Ammo;                                                     // 0x0014(0x0004)
	int                                                Clips;                                                    // 0x0018(0x0004)
	TEnumAsByte<EInventorySlot>                        Slot;                                                     // 0x001C(0x0001)
};

// ScriptStruct TdGame.TdPawn.PhysicalHitInfo
// 0x002C
struct FPhysicalHitInfo
{
	struct FVector                                     HitLocation;                                              // 0x0000(0x000C)
	struct FVector                                     Momentum;                                                 // 0x000C(0x000C)
	float                                              AngularVelocity;                                          // 0x0018(0x0004)
	class UClass*                                      DamageType;                                               // 0x001C(0x0004)
	struct FName                                       HitBone;                                                  // 0x0020(0x0008)
	float                                              HitReactionDuration;                                      // 0x0028(0x0004)
};

// ScriptStruct TdGame.TdPawn.PawnFootPlacementTrace
// 0x001C
struct FPawnFootPlacementTrace
{
	unsigned long                                      bHitLeftFoot : 1;                                         // 0x0000(0x0004) (Transient)
	unsigned long                                      bHitRightFoot : 1;                                        // 0x0000(0x0004) (Transient)
	struct FVector                                     LeftFootLocation;                                         // 0x0004(0x000C) (Transient)
	struct FVector                                     RightFootLocation;                                        // 0x0010(0x000C) (Transient)
};

// ScriptStruct TdGame.TdPawn.ReplicatedCustomAnimation
// 0x0018
struct FReplicatedCustomAnimation
{
	struct FString                                     AnimName;                                                 // 0x0000(0x000C) (NeedCtorLink)
	TEnumAsByte<ECustomNodeType>                       NodeType;                                                 // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              BlendInTime;                                              // 0x0010(0x0004)
	float                                              BlendOutTime;                                             // 0x0014(0x0004)
};

// ScriptStruct TdGame.TdPawn.ArmorSettings
// 0x000C
struct FArmorSettings
{
	float                                              Easy;                                                     // 0x0000(0x0004)
	float                                              Medium;                                                   // 0x0004(0x0004)
	float                                              Hard;                                                     // 0x0008(0x0004)
};

// ScriptStruct TdGame.TdPawn.FootstepLogInfo
// 0x000B
struct FFootstepLogInfo
{
	float                                              Time;                                                     // 0x0000(0x0004)
	int                                                FootDown;                                                 // 0x0004(0x0004)
	unsigned char                                      R;                                                        // 0x0008(0x0001)
	unsigned char                                      G;                                                        // 0x0009(0x0001)
	unsigned char                                      B;                                                        // 0x000A(0x0001)
};

// ScriptStruct TdGame.TdPlayerController.ReactionTimeSettings
// 0x000C
struct FReactionTimeSettings
{
	float                                              Easy;                                                     // 0x0000(0x0004)
	float                                              Medium;                                                   // 0x0004(0x0004)
	float                                              Hard;                                                     // 0x0008(0x0004)
};

// ScriptStruct TdGame.TdPlayerController.LocalEnemy
// 0x000C
struct FLocalEnemy
{
	class ATdPawn*                                     Enemy;                                                    // 0x0000(0x0004)
	unsigned long                                      bVisible : 1;                                             // 0x0004(0x0004)
	float                                              LastNetSendTime;                                          // 0x0008(0x0004)
};

// ScriptStruct TdGame.TdProfileSettings.TTUnLockCriteria
// 0x0008
struct FTTUnLockCriteria
{
	TEnumAsByte<ETTStretch>                            CompletedTT;                                              // 0x0000(0x0001)
	TEnumAsByte<ETTStretch>                            UnlocksTT;                                                // 0x0001(0x0001)
	TEnumAsByte<ETTDifficulty>                         Difficulty;                                               // 0x0002(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              QualifierTime;                                            // 0x0004(0x0004)
};

// ScriptStruct TdGame.TdTeamInfo.VisibleEnemy
// 0x0008
struct FVisibleEnemy
{
	class APawn*                                       Enemy;                                                    // 0x0000(0x0004)
	float                                              LastNetReceiveTime;                                       // 0x0004(0x0004)
};

// ScriptStruct TdGame.TdVehicle.TimePosition
// 0x0010
struct FTimePosition
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C)
	float                                              Time;                                                     // 0x000C(0x0004)
};

// ScriptStruct TdGame.TdVehicle.VehicleSeat
// 0x0034
struct FVehicleSeat
{
	class APawn*                                       StoragePawn;                                              // 0x0000(0x0004) (Edit, EditInline)
	class AVehicle*                                    SeatPawn;                                                 // 0x0004(0x0004) (Edit, EditInline)
	class UClass*                                      SeatPawnClass;                                            // 0x0008(0x0004) (Edit)
	struct FName                                       CharacterSeatSocket;                                      // 0x000C(0x0008) (Edit)
	struct FName                                       CharacterSeatBone;                                        // 0x0014(0x0008) (Edit)
	struct FName                                       CameraSeatSocket;                                         // 0x001C(0x0008) (Edit)
	float                                              CameraOffset;                                             // 0x0024(0x0004) (Edit)
	float                                              CameraEyeHeight;                                          // 0x0028(0x0004) (Edit)
	float                                              ViewPitchMin;                                             // 0x002C(0x0004) (Edit)
	float                                              ViewPitchMax;                                             // 0x0030(0x0004) (Edit)
};

// ScriptStruct TdGame.TdVehicle_Helicopter.GunnerSeat
// 0x0024
struct FGunnerSeat
{
	class APawn*                                       StoragePawn;                                              // 0x0000(0x0004) (Edit, EditInline)
	struct FName                                       CharacterSeatSocket;                                      // 0x0004(0x0008) (Edit)
	struct FName                                       CharacterSeatBone;                                        // 0x000C(0x0008) (Edit)
	struct FVector                                     LocOffset;                                                // 0x0014(0x000C) (Edit)
	float                                              YawOffset;                                                // 0x0020(0x0004) (Edit)
};

// ScriptStruct TdGame.TdPawn.LedgeHitInfo
// 0x002C
struct FLedgeHitInfo
{
	struct FVector                                     LedgeLocation;                                            // 0x0000(0x000C)
	struct FVector                                     LedgeNormal;                                              // 0x000C(0x000C)
	struct FVector                                     MoveNormal;                                               // 0x0018(0x000C)
	class AActor*                                      MoveActor;                                                // 0x0024(0x0004)
	unsigned long                                      FeetExcluded : 1;                                         // 0x0028(0x0004)
	unsigned long                                      HandsExcluded : 1;                                        // 0x0028(0x0004)
};

// ScriptStruct TdGame.TdMove.AIAimingModifierSettings
// 0x000C
struct FAIAimingModifierSettings
{
	float                                              Easy;                                                     // 0x0000(0x0004)
	float                                              Medium;                                                   // 0x0004(0x0004)
	float                                              Hard;                                                     // 0x0008(0x0004)
};

// ScriptStruct TdGame.TdMove_Barge.BargeHitInfo
// 0x0020
struct FBargeHitInfo
{
	class AActor*                                      BargeActor;                                               // 0x0000(0x0004)
	struct FVector                                     HitNormal;                                                // 0x0004(0x000C)
	struct FVector                                     HitLocation;                                              // 0x0010(0x000C)
	class UPhysicalMaterial*                           HitPhysMaterial;                                          // 0x001C(0x0004)
};

// ScriptStruct TdGame.TdMove_Barge.BargeDebugInfo
// 0x0034
struct FBargeDebugInfo
{
	struct FVector                                     BargeNormal;                                              // 0x0000(0x000C)
	struct FVector                                     BargeLocation;                                            // 0x000C(0x000C) (Transient)
	float                                              TimeToTarget;                                             // 0x0018(0x0004)
	struct FVector                                     BargeStartLocation;                                       // 0x001C(0x000C)
	struct FVector                                     BargeEndLocation;                                         // 0x0028(0x000C)
};

// ScriptStruct TdGame.TdMove_BotMelee.MeleeAttackProperties
// 0x003C
struct FMeleeAttackProperties
{
	float                                              HitAngle;                                                 // 0x0000(0x0004) (Edit)
	float                                              HitRange;                                                 // 0x0004(0x0004) (Edit)
	float                                              AttackHeightAdjustment;                                   // 0x0008(0x0004) (Edit)
	float                                              MissedAttackPenelty;                                      // 0x000C(0x0004) (Edit)
	float                                              Damage;                                                   // 0x0010(0x0004) (Edit)
	float                                              AttackSpeed;                                              // 0x0014(0x0004) (Edit)
	float                                              RotationSpeed;                                            // 0x0018(0x0004) (Edit)
	float                                              RotationLimitAngle;                                       // 0x001C(0x0004) (Edit)
	float                                              HitDetectionStartTime;                                    // 0x0020(0x0004) (Edit)
	float                                              PredictionTime;                                           // 0x0024(0x0004) (Edit)
	float                                              PredictionWeight;                                         // 0x0028(0x0004) (Edit)
	TArray<struct FName>                               InvulnerableDamageTypes;                                  // 0x002C(0x000C) (Edit, Config, NeedCtorLink)
	unsigned long                                      bIsInterruptableByDodge : 1;                              // 0x0038(0x0004) (Edit)
};

// ScriptStruct TdGame.TdWeapon.PendingImpact
// 0x004C
struct FPendingImpact
{
	float                                              TimeToImpact;                                             // 0x0000(0x0004)
	struct FImpactInfo                                 Impact;                                                   // 0x0004(0x0048) (Component)
};

// ScriptStruct TdGame.TdWeapon.FloatDifficultySettings
// 0x000C
struct FFloatDifficultySettings
{
	float                                              Easy;                                                     // 0x0000(0x0004)
	float                                              Medium;                                                   // 0x0004(0x0004)
	float                                              Hard;                                                     // 0x0008(0x0004)
};

// ScriptStruct TdGame.TdWeapon.AIBurstInfo
// 0x0010
struct FAIBurstInfo
{
	int                                                Length_Min;                                               // 0x0000(0x0004) (Edit)
	int                                                Length_Max;                                               // 0x0004(0x0004) (Edit)
	float                                              Pause_Min;                                                // 0x0008(0x0004) (Edit)
	float                                              Pause_Max;                                                // 0x000C(0x0004) (Edit)
};

// ScriptStruct TdGame.TdWeapon.AIReloadInfo
// 0x0008
struct FAIReloadInfo
{
	float                                              Time_Min;                                                 // 0x0000(0x0004) (Edit)
	float                                              Time_Max;                                                 // 0x0004(0x0004) (Edit)
};

// ScriptStruct TdGame.TdAnimNodePoseOffset.PoseProfile
// 0x0024
struct FPoseProfile
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	unsigned long                                      bIsValid : 1;                                             // 0x0008(0x0004)
	TArray<int>                                        BoneIndices;                                              // 0x000C(0x000C) (NeedCtorLink)
	TArray<struct FMatrix>                             MatrixTransforms;                                         // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct TdGame.TdAnimNodeAnimationPoseOffset.AnimationPoseProfile
// 0x003C
struct FAnimationPoseProfile
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit)
	unsigned long                                      Recursive : 1;                                            // 0x0008(0x0004) (Edit)
	TArray<struct FName>                               BoneNames;                                                // 0x000C(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               AdditionalBoneNames;                                      // 0x0018(0x000C) (Edit, NeedCtorLink)
	class UAnimSet*                                    AnimationSet;                                             // 0x0024(0x0004) (Edit)
	struct FName                                       AnimationPoseName;                                        // 0x0028(0x0008) (Edit)
	struct FName                                       OffsetAnimationPoseName;                                  // 0x0030(0x0008) (Edit)
	class USkeletalMesh*                               SkeletalMeshReference;                                    // 0x0038(0x0004) (Edit)
};

// ScriptStruct TdGame.TdAnimNodeRandom.TdRandomAnimInfo
// 0x0007
struct FTdRandomAnimInfo
{
	float                                              Chance;                                                   // 0x0000(0x0004) (Edit)
	unsigned char                                      LoopCountMin;                                             // 0x0004(0x0001) (Edit)
	unsigned char                                      LoopCountMax;                                             // 0x0005(0x0001) (Edit)
	unsigned char                                      LoopCount;                                                // 0x0006(0x0001)
};

// ScriptStruct TdGame.TdAnimNodeWeaponPoseOffset.WeaponPoseProfile
// 0x0038
struct FWeaponPoseProfile
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit)
	unsigned long                                      Recursive : 1;                                            // 0x0008(0x0004) (Edit)
	TArray<struct FName>                               BoneNames;                                                // 0x000C(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               AdditionalBoneNames;                                      // 0x0018(0x000C) (Edit, NeedCtorLink)
	struct FName                                       AnimationPoseName;                                        // 0x0024(0x0008) (Edit)
	class UAnimSet*                                    AnimationSet;                                             // 0x002C(0x0004) (Edit)
	class UAnimSet*                                    WeaponAnimationSet;                                       // 0x0030(0x0004) (Edit)
	class USkeletalMesh*                               SkeletalMeshReference;                                    // 0x0034(0x0004) (Edit)
};

// ScriptStruct TdGame.TdReverbVolume.StereoAmbientStruct
// 0x0010
struct FStereoAmbientStruct
{
	class USoundCue*                                   AmbientSound;                                             // 0x0000(0x0004) (Edit)
	float                                              Volume;                                                   // 0x0004(0x0004) (Edit)
	float                                              FadeInTime;                                               // 0x0008(0x0004) (Edit)
	float                                              FadeOutTime;                                              // 0x000C(0x0004) (Edit)
};

// ScriptStruct TdGame.AITemplate.DistanceBasedValue
// 0x000C
struct FDistanceBasedValue
{
	float                                              Near;                                                     // 0x0000(0x0004)
	float                                              Medium;                                                   // 0x0004(0x0004)
	float                                              Far;                                                      // 0x0008(0x0004)
};

// ScriptStruct TdGame.AITemplate.ImprovementRateSettings
// 0x000C
struct FImprovementRateSettings
{
	float                                              Easy;                                                     // 0x0000(0x0004)
	float                                              Medium;                                                   // 0x0004(0x0004)
	float                                              Hard;                                                     // 0x0008(0x0004)
};

// ScriptStruct TdGame.AITemplate.AmmoDropSettings
// 0x000C
struct FAmmoDropSettings
{
	int                                                Easy;                                                     // 0x0000(0x0004)
	int                                                Medium;                                                   // 0x0004(0x0004)
	int                                                Hard;                                                     // 0x0008(0x0004)
};

// ScriptStruct TdGame.TdAIController.TdLine
// 0x001B
struct FTdLine
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C)
	struct FVector                                     End;                                                      // 0x000C(0x000C)
	unsigned char                                      R;                                                        // 0x0018(0x0001)
	unsigned char                                      G;                                                        // 0x0019(0x0001)
	unsigned char                                      B;                                                        // 0x001A(0x0001)
};

// ScriptStruct TdGame.TdAIController.StoredMovementVarsStruct
// 0x0058
struct FStoredMovementVarsStruct
{
	TArray<class UReachSpec*>                          OldPath;                                                  // 0x0000(0x000C) (NeedCtorLink)
	TArray<class ANavigationPoint*>                    RouteCache;                                               // 0x000C(0x000C) (NeedCtorLink)
	unsigned long                                      MoveGoalIsEnemy : 1;                                      // 0x0018(0x0004)
	class ANavigationPoint*                            OldAnchor;                                                // 0x001C(0x0004)
	class ANavigationPoint*                            Anchor;                                                   // 0x0020(0x0004)
	class AActor*                                      MoveGoal;                                                 // 0x0024(0x0004)
	struct FVector                                     MovePoint;                                                // 0x0028(0x000C)
	unsigned long                                      HaltAfterMoveToGoal : 1;                                  // 0x0034(0x0004)
	float                                              fCurrentRouteDistance;                                    // 0x0038(0x0004)
	unsigned long                                      bCurrentRouteContainsMoves : 1;                           // 0x003C(0x0004)
	unsigned long                                      bFirstDestination : 1;                                    // 0x003C(0x0004)
	struct FVector                                     PathfindingGoalPos;                                       // 0x0040(0x000C)
	class AActor*                                      OldMoveTarget;                                            // 0x004C(0x0004)
	class AActor*                                      MoveTarget;                                               // 0x0050(0x0004)
	unsigned long                                      bSkipPathFind : 1;                                        // 0x0054(0x0004)
};

// ScriptStruct TdGame.TdAI_Pursuit.AttackDistance
// 0x0010
struct FAttackDistance
{
	float                                              MaxMeleeAttackRange;                                      // 0x0000(0x0004) (Edit)
	float                                              MinMeleeAttackRange;                                      // 0x0004(0x0004) (Edit)
	float                                              MeleeAttackMoveDist;                                      // 0x0008(0x0004) (Edit)
	float                                              MinVelocity;                                              // 0x000C(0x0004) (Edit)
};

// ScriptStruct TdGame.TdAI_Pursuit.SAttackDelays
// 0x000C
struct FSAttackDelays
{
	float                                              Easy;                                                     // 0x0000(0x0004) (Edit)
	float                                              Medium;                                                   // 0x0004(0x0004) (Edit)
	float                                              Hard;                                                     // 0x0008(0x0004) (Edit)
};

// ScriptStruct TdGame.TdAI_HeliController.VisitedNode
// 0x0008
struct FVisitedNode
{
	class ATdAttackPathNode*                           Node;                                                     // 0x0000(0x0004)
	float                                              TimeVisited;                                              // 0x0004(0x0004)
};

// ScriptStruct TdGame.TdAIManager.PathfindingStruct
// 0x0008
struct FPathfindingStruct
{
	class ATdAIController*                             C;                                                        // 0x0000(0x0004)
	float                                              LastPathfindTimeStamp;                                    // 0x0004(0x0004)
};

// ScriptStruct TdGame.TdAIManager.Burst
// 0x0010
struct FBurst
{
	class ATdBotPawn*                                  Pawn;                                                     // 0x0000(0x0004)
	float                                              StartTime;                                                // 0x0004(0x0004)
	float                                              Duration;                                                 // 0x0008(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x000C(0x0004)
	unsigned long                                      bPriorityBurst : 1;                                       // 0x000C(0x0004)
};

// ScriptStruct TdGame.TdAIVoiceOverManager.AIVoiceItem
// 0x0015
struct FAIVoiceItem
{
	TEnumAsByte<EVoiceOver>                            VO;                                                       // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class APawn*                                       Speaker;                                                  // 0x0004(0x0004)
	class ATdBotPawn*                                  BotSpeaker;                                               // 0x0008(0x0004)
	float                                              TimeTriggered;                                            // 0x000C(0x0004)
	int                                                voice;                                                    // 0x0010(0x0004)
	TEnumAsByte<EVoiceOver>                            answer;                                                   // 0x0014(0x0001)
};

// ScriptStruct TdGame.TdAIVoiceOverManager.SoundHistoryItem
// 0x0014
struct FSoundHistoryItem
{
	TEnumAsByte<EVoiceOver>                            VO;                                                       // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              timePlayed;                                               // 0x0004(0x0004)
	int                                                variation;                                                // 0x0008(0x0004)
	int                                                subvariant;                                               // 0x000C(0x0004)
	int                                                voice;                                                    // 0x0010(0x0004)
};

// ScriptStruct TdGame.TdAIVoiceOverManager.CueInfo
// 0x0010
struct FCueInfo
{
	TArray<class USoundCue*>                           Cues;                                                     // 0x0000(0x000C) (NeedCtorLink)
	int                                                NextSubVariant;                                           // 0x000C(0x0004)
};

// ScriptStruct TdGame.TdAIVoiceOverManager.AIVoiceOver
// 0x004C
struct FAIVoiceOver
{
	struct FString                                     outText;                                                  // 0x0000(0x000C) (NeedCtorLink)
	float                                              spamTime;                                                 // 0x000C(0x0004)
	float                                              Prio;                                                     // 0x0010(0x0004)
	float                                              triggeredTime;                                            // 0x0014(0x0004)
	float                                              currentPrio;                                              // 0x0018(0x0004)
	int                                                minFriends;                                               // 0x001C(0x0004)
	float                                              minDelayTime;                                             // 0x0020(0x0004)
	float                                              maxDelayTime;                                             // 0x0024(0x0004)
	unsigned long                                      bCanRepeat : 1;                                           // 0x0028(0x0004)
	int                                                voices;                                                   // 0x002C(0x0004)
	TArray<struct FCueInfo>                            SCue;                                                     // 0x0030(0x000C) (NeedCtorLink)
	int                                                NextVariation;                                            // 0x003C(0x0004)
	struct FName                                       AnimName;                                                 // 0x0040(0x0008)
	unsigned long                                      bLoopVoiceAnim : 1;                                       // 0x0048(0x0004)
	unsigned long                                      bRadio : 1;                                               // 0x0048(0x0004)
};

// ScriptStruct TdGame.TdAIVoiceOverManager.PostponedSoundCue
// 0x0010
struct FPostponedSoundCue
{
	class USoundCue*                                   Cue;                                                      // 0x0000(0x0004)
	float                                              PostponedUntil;                                           // 0x0004(0x0004)
	class APawn*                                       Source;                                                   // 0x0008(0x0004)
	class ATdBotPawn*                                  BotSource;                                                // 0x000C(0x0004)
};

// ScriptStruct TdGame.TdBotPawn.DeathAnimData
// 0x0040
struct FDeathAnimData
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008) (Edit)
	float                                              PlaybackSpeed;                                            // 0x0008(0x0004) (Edit)
	unsigned long                                      bUseRootMotion : 1;                                       // 0x000C(0x0004) (Edit)
	float                                              PawnImpulse;                                              // 0x0010(0x0004) (Edit)
	float                                              PawnZImpulse;                                             // 0x0014(0x0004) (Edit)
	float                                              BoneImpulse;                                              // 0x0018(0x0004) (Edit)
	float                                              GravityModifier;                                          // 0x001C(0x0004) (Edit)
	float                                              CollisionScale;                                           // 0x0020(0x0004) (Edit)
	unsigned long                                      bUseMotors : 1;                                           // 0x0024(0x0004) (Edit)
	float                                              MotorStrength;                                            // 0x0028(0x0004) (Edit)
	float                                              TimeToEnableRagdoll;                                      // 0x002C(0x0004) (Edit)
	float                                              TimeToBlendOutMotors;                                     // 0x0030(0x0004) (Edit)
	float                                              TimeToDisableMotors;                                      // 0x0034(0x0004) (Edit)
	float                                              TimeToBoneImpulse;                                        // 0x0038(0x0004) (Edit)
	float                                              TimeToFullRagdoll;                                        // 0x003C(0x0004) (Edit)
};

// ScriptStruct TdGame.TdBotPawn.InvulnerableDamageTypeStruct
// 0x000C
struct FInvulnerableDamageTypeStruct
{
	class UClass*                                      DamageType;                                               // 0x0000(0x0004)
	struct FName                                       Identifier;                                               // 0x0004(0x0008)
};

// ScriptStruct TdGame.TdBotPawn.EaseStructure
// 0x0014
struct FEaseStructure
{
	float                                              Value;                                                    // 0x0000(0x0004)
	float                                              StartTime;                                                // 0x0004(0x0004)
	float                                              EndTime;                                                  // 0x0008(0x0004)
	float                                              StartValue;                                               // 0x000C(0x0004)
	float                                              EndValue;                                                 // 0x0010(0x0004)
};

// ScriptStruct TdGame.TdCoverController.CoverInformation
// 0x004C
struct FCoverInformation
{
	TEnumAsByte<ECoverType>                            CoverType;                                                // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	struct FVector                                     Direction;                                                // 0x0010(0x000C)
	struct FVector                                     CoverLeftLocation;                                        // 0x001C(0x000C)
	struct FVector                                     CoverRightLocation;                                       // 0x0028(0x000C)
	struct FRotator                                    CoverLeftDirection;                                       // 0x0034(0x000C)
	struct FRotator                                    CoverRightDirection;                                      // 0x0040(0x000C)
};

// ScriptStruct TdGame.SeqAct_TdSetMinimap.MinimapMap
// 0x0008
struct FMinimapMap
{
	class USurface*                                    Image;                                                    // 0x0000(0x0004) (Edit)
	float                                              imageHeight;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct TdGame.TdHudEffect.BlurSettings
// 0x0014
struct FBlurSettings
{
	float                                              FadeInDuration;                                           // 0x0000(0x0004)
	float                                              Duration;                                                 // 0x0004(0x0004)
	float                                              FadeOutDuration;                                          // 0x0008(0x0004)
	float                                              FocusDistance;                                            // 0x000C(0x0004)
	float                                              MaxFarBlurAmount;                                         // 0x0010(0x0004)
};

// ScriptStruct TdGame.TdHudEffect.PPSettings
// 0x0014
struct FPPSettings
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008)
	float                                              FadeInDuration;                                           // 0x0008(0x0004)
	float                                              Duration;                                                 // 0x000C(0x0004)
	float                                              FadeOutDuration;                                          // 0x0010(0x0004)
};

// ScriptStruct TdGame.TdHudEffectManager.DirectionalParticleSystemSlot
// 0x0014
struct FDirectionalParticleSystemSlot
{
	float                                              Direction;                                                // 0x0000(0x0004)
	class ATdEmitter*                                  EffectEmitter;                                            // 0x0004(0x0004)
	struct FVector                                     EmitterOrigin;                                            // 0x0008(0x000C)
};

// ScriptStruct TdGame.TdHudHitIndicator.DamageDataInfo
// 0x000C
struct FDamageDataInfo
{
	float                                              FadeTime;                                                 // 0x0000(0x0004)
	float                                              FadeValue;                                                // 0x0004(0x0004)
	class UMaterialInstanceConstant*                   MatConstant;                                              // 0x0008(0x0004)
};

// ScriptStruct TdGame.TdKeyBindingHandler.KeyBindWidgetButtonData
// 0x0008
struct FKeyBindWidgetButtonData
{
	class UUILabelButton*                              KeyBindButton;                                            // 0x0000(0x0004) (AlwaysInit)
	class UUIDataProvider*                             KeyProvider;                                              // 0x0004(0x0004) (AlwaysInit)
};

// ScriptStruct TdGame.TdKeyBindingHandler.KeyBindWidgetData
// 0x0010
struct FKeyBindWidgetData
{
	class UUILabel*                                    ActionNameLabel;                                          // 0x0000(0x0004) (AlwaysInit)
	TArray<struct FKeyBindWidgetButtonData>            KeyBindButtons;                                           // 0x0004(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TdGame.TdKeyBindingHandler.KeyBindData
// 0x0020
struct FKeyBindData
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008)
	struct FString                                     Command;                                                  // 0x0008(0x000C) (NeedCtorLink)
	struct FName                                       PreviousBinding;                                          // 0x0014(0x0008)
	unsigned long                                      bBindIsPrimary : 1;                                       // 0x001C(0x0004)
};

// ScriptStruct TdGame.TdKeyBindingHandler.CurrentBindKeyStruct
// 0x000C
struct FCurrentBindKeyStruct
{
	TArray<struct FString>                             BoundButtonKeys;                                          // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct TdGame.TdLobbyGameInfo.LobbyPlayerStruct
// 0x0028
struct FLobbyPlayerStruct
{
	int                                                PlayerId;                                                 // 0x0000(0x0004)
	struct FString                                     PlayerName;                                               // 0x0004(0x000C) (NeedCtorLink)
	int                                                PlayerRoleIndex;                                          // 0x0010(0x0004)
	unsigned long                                      bPlayerIsReady : 1;                                       // 0x0014(0x0004)
	int                                                TeamIndex;                                                // 0x0018(0x0004)
	int                                                PlayerIndex;                                              // 0x001C(0x0004)
	struct FUniqueNetId                                UniqueId;                                                 // 0x0020(0x0008)
};

// ScriptStruct TdGame.TdLobbyGameInfo.LobbyPlayerRoleStruct
// 0x0004
struct FLobbyPlayerRoleStruct
{
	class UClass*                                      PlayerRoleClass;                                          // 0x0000(0x0004)
};

// ScriptStruct TdGame.TdLobbyGameInfo.LobbyTeamDataStruct
// 0x002C
struct FLobbyTeamDataStruct
{
	int                                                TeamId;                                                   // 0x0000(0x0004)
	struct FString                                     TeamName;                                                 // 0x0004(0x000C) (NeedCtorLink)
	TArray<struct FLobbyPlayerStruct>                  Players;                                                  // 0x0010(0x000C) (NeedCtorLink)
	int                                                MaxPlayers;                                               // 0x001C(0x0004)
	TArray<struct FLobbyPlayerRoleStruct>              PlayerRoles;                                              // 0x0020(0x000C) (NeedCtorLink)
};

// ScriptStruct TdGame.TdMiniMapMeshComponent.MiniMapObject
// 0x0024
struct FMiniMapObject
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
	float                                              Scale;                                                    // 0x0018(0x0004)
	unsigned char                                      MeshIcon;                                                 // 0x001C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	class UMaterial*                                   Material;                                                 // 0x0020(0x0004)
};

// ScriptStruct TdGame.TdTTInput.TTData
// 0x0038
struct FTTData
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (NeedCtorLink)
	struct FUniqueNetId                                PlayerId;                                                 // 0x000C(0x0008)
	float                                              TotalTime;                                                // 0x0014(0x0004)
	unsigned long                                      HasGhost : 1;                                             // 0x0018(0x0004)
	int                                                GhostTag;                                                 // 0x001C(0x0004)
	TArray<float>                                      IntermediateTimes;                                        // 0x0020(0x000C) (NeedCtorLink)
	int                                                TotalRating;                                              // 0x002C(0x0004)
	float                                              AverageSpeed;                                             // 0x0030(0x0004)
	float                                              DistanceRun;                                              // 0x0034(0x0004)
};

// ScriptStruct TdGame.TdUIDrawPlayersPanel.TdPlayerSlot
// 0x0004
struct FTdPlayerSlot
{
	class ATdPlayerReplicationInfo*                    TdPRI;                                                    // 0x0000(0x0004)
};

// ScriptStruct TdGame.TdUIDrawPlayersPanel.TdTeamPlayerSlots
// 0x000C
struct FTdTeamPlayerSlots
{
	TArray<struct FTdPlayerSlot>                       Slots;                                                    // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct TdGame.TdUIWidgetList.GeneratedObjectInfo
// 0x0024
struct FGeneratedObjectInfo
{
	struct FName                                       OptionProviderName;                                       // 0x0000(0x0008)
	class UUIObject*                                   LabelObj;                                                 // 0x0008(0x0004)
	class UUIObject*                                   OptionObj;                                                // 0x000C(0x0004)
	class UUIDataProvider*                             OptionProvider;                                           // 0x0010(0x0004)
	float                                              OptionY;                                                  // 0x0014(0x0004)
	float                                              OptionHeight;                                             // 0x0018(0x0004)
	float                                              OptionX;                                                  // 0x001C(0x0004)
	float                                              OptionWidth;                                              // 0x0020(0x0004)
};

// ScriptStruct TdGame.TdUIKeyBindingList.BindKeyData
// 0x0024
struct FBindKeyData
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008)
	struct FString                                     Command;                                                  // 0x0008(0x000C) (NeedCtorLink)
	class UPlayerInput*                                PInput;                                                   // 0x0014(0x0004)
	struct FName                                       PreviousBinding;                                          // 0x0018(0x0008)
	unsigned long                                      bBindIsPrimary : 1;                                       // 0x0020(0x0004)
};

// ScriptStruct TdGame.TdUIScene_MainMenu.TdMainMenuPanelStruct
// 0x0024
struct FTdMainMenuPanelStruct
{
	class UUIPanel*                                    Panel;                                                    // 0x0000(0x0004)
	class UUIImage*                                    BgImage;                                                  // 0x0004(0x0004)
	class UUIButton*                                   PanelCaptionButton;                                       // 0x0008(0x0004)
	class UUIButton*                                   BigPanelCaptionButton;                                    // 0x000C(0x0004)
	unsigned long                                      bIsFocusedPanel : 1;                                      // 0x0010(0x0004)
	float                                              AnimTime;                                                 // 0x0014(0x0004)
	float                                              DefaultCaptionYPos;                                       // 0x0018(0x0004)
	float                                              DefaultCaptionWidth;                                      // 0x001C(0x0004)
	float                                              StickPosX;                                                // 0x0020(0x0004)
};

// ScriptStruct TdGame.TdUIScene_MessageBox.PotentialOptionKeys
// 0x000C
struct FPotentialOptionKeys
{
	TArray<struct FName>                               Keys;                                                     // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct TdGame.TdUIScene_TdCredits.TdCreditsSubBlock
// 0x0018
struct FTdCreditsSubBlock
{
	struct FString                                     SubHeader;                                                // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FString>                             Names;                                                    // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct TdGame.TdUIScene_TdCredits.TdCreditsBlock
// 0x0018
struct FTdCreditsBlock
{
	struct FString                                     BlockHeader;                                              // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FTdCreditsSubBlock>                  SubBlocks;                                                // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct TdGame.TdUIScene_VideoSettingsPC.ScreenResSetting
// 0x000C
struct FScreenResSetting
{
	int                                                ResX;                                                     // 0x0000(0x0004)
	int                                                ResY;                                                     // 0x0004(0x0004)
	unsigned long                                      bFullscreen : 1;                                          // 0x0008(0x0004)
};

// ScriptStruct TdGame.UIDataProvider_TdAccountProvider.ECountryPair
// 0x0020
struct FECountryPair
{
	struct FString                                     CountryName;                                              // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Tag;                                                      // 0x000C(0x000C) (NeedCtorLink)
	int                                                RegisterMinAge;                                           // 0x0018(0x0004)
	int                                                ParentalControlMinAge;                                    // 0x001C(0x0004)
};

// ScriptStruct TdGame.UIDataProvider_TdGameObjectiveProvider.SubObjectiveStruct
// 0x0018
struct FSubObjectiveStruct
{
	struct FName                                       SubObjectiveName;                                         // 0x0000(0x0008) (Config)
	unsigned long                                      bIsFinished : 1;                                          // 0x0008(0x0004)
	struct FString                                     FriendlyName;                                             // 0x000C(0x000C) (Const, Config, Localized, NeedCtorLink)
};

// ScriptStruct TdGame.UIDataProvider_TdGameModes.TdGameModes_RoleIdStruct
// 0x0008
struct FTdGameModes_RoleIdStruct
{
	int                                                RoleId;                                                   // 0x0000(0x0004)
	int                                                Team;                                                     // 0x0004(0x0004)
};

// ScriptStruct TdGame.UIDataProvider_TdMaps.TdMapCheckpoint
// 0x0030
struct FTdMapCheckpoint
{
	struct FString                                     CheckpointFriendlyName;                                   // 0x0000(0x000C) (Const, Config, Localized, NeedCtorLink)
	struct FString                                     CheckpointDescription;                                    // 0x000C(0x000C) (Const, Config, Localized, NeedCtorLink)
	struct FString                                     CheckpointName;                                           // 0x0018(0x000C) (Config, NeedCtorLink)
	struct FString                                     CheckpointImageMarkup;                                    // 0x0024(0x000C) (Config, NeedCtorLink)
};

// ScriptStruct TdGame.TdGhost.TdGhostInfo
// 0x0018
struct FTdGhostInfo
{
	int                                                StretchId;                                                // 0x0000(0x0004)
	struct FString                                     PlayerName;                                               // 0x0004(0x000C) (NeedCtorLink)
	float                                              TotalTime;                                                // 0x0010(0x0004)
	int                                                GhostTag;                                                 // 0x0014(0x0004)
};

// ScriptStruct TdGame.UIDataStore_TdTimeTrialData.TTDataLight
// 0x0018
struct FTTDataLight
{
	unsigned long                                      bFilledIn : 1;                                            // 0x0000(0x0004)
	struct FString                                     PlayerName;                                               // 0x0004(0x000C) (NeedCtorLink)
	float                                              TotalTime;                                                // 0x0010(0x0004)
	int                                                TotalRating;                                              // 0x0014(0x0004)
};

// ScriptStruct TdGame.UIDataStore_TdTimeTrialData.TTUIInfo
// 0x0030
struct FTTUIInfo
{
	TArray<struct FTTDataLight>                        PlayerBest;                                               // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FTTDataLight>                        WorldsBest;                                               // 0x000C(0x000C) (NeedCtorLink)
	TArray<struct FTTDataLight>                        FriendsBest;                                              // 0x0018(0x000C) (NeedCtorLink)
	TArray<float>                                      AllPersonalBestTimes;                                     // 0x0024(0x000C) (NeedCtorLink)
};

// ScriptStruct TdGame.UIDataStore_TdGameObjectivesData.ObjectiveMappingStruct
// 0x0010
struct FObjectiveMappingStruct
{
	struct FName                                       MappingName;                                              // 0x0000(0x0008) (Config)
	struct FName                                       SubObjectiveName;                                         // 0x0008(0x0008) (Config)
};

// ScriptStruct TdGame.UIDataStore_TdStringAliasBindingsMap.ControllerMap
// 0x0020
struct FControllerMap
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008)
	struct FString                                     XBoxMapping;                                              // 0x0008(0x000C) (NeedCtorLink)
	struct FString                                     PS3Mapping;                                               // 0x0014(0x000C) (NeedCtorLink)
};

// ScriptStruct TdGame.UIDataStore_TdStringList.EStringListData
// 0x0034
struct FEStringListData
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008)
	struct FString                                     ColumnHeaderText;                                         // 0x0008(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     CurrentValue;                                             // 0x0014(0x000C) (NeedCtorLink)
	int                                                DefaultValueIndex;                                        // 0x0020(0x0004)
	TArray<struct FString>                             Strings;                                                  // 0x0024(0x000C) (Const, Localized, NeedCtorLink)
	class UUIDataProvider_TdStringArray*               DataProvider;                                             // 0x0030(0x0004) (Transient)
};

// ScriptStruct TdGame.TdCheckpointManager.CheckpointInformation
// 0x0018
struct FCheckpointInformation
{
	struct FString                                     MapName;                                                  // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FString>                             Checkpoints;                                              // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct TdGame.TdSPGame.OnLevelCompletedAsyncHelper
// 0x0020
struct FOnLevelCompletedAsyncHelper
{
	struct FString                                     NextLevelName;                                            // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     NextCheckpointName;                                       // 0x000C(0x000C) (NeedCtorLink)
	int                                                ControllerId;                                             // 0x0018(0x0004)
	class ATdPlayerController*                         PC;                                                       // 0x001C(0x0004)
};

// ScriptStruct TdGame.AITemplate_Celeste.HitsToTakeStruct
// 0x000C
struct FHitsToTakeStruct
{
	int                                                Easy;                                                     // 0x0000(0x0004)
	int                                                Medium;                                                   // 0x0004(0x0004)
	int                                                Hard;                                                     // 0x0008(0x0004)
};

// ScriptStruct TdGame.TdSPTutorialGame.InitialTutorialState
// 0x000C
struct FInitialTutorialState
{
	TEnumAsByte<EMovementChallenge>                    Challenge;                                                // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       StateName;                                                // 0x0004(0x0008)
};

// ScriptStruct TdGame.TdSPTimeTrialGame.TimeData
// 0x001C
struct FTimeData
{
	float                                              TotalTime;                                                // 0x0000(0x0004)
	TArray<float>                                      IntermediateTimes;                                        // 0x0004(0x000C) (NeedCtorLink)
	TArray<float>                                      AccumulatedIntermediateTimes;                             // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct TdGame.TdPlaceableCheckpointManager.CheckpointTrack
// 0x0010
struct FCheckpointTrack
{
	int                                                TrackIndex;                                               // 0x0000(0x0004)
	TArray<class ATdPlaceableCheckpoint*>              Checkpoints;                                              // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct TdGame.TdPlaceableCheckpointManager.TrackData
// 0x0010
struct FTrackData
{
	float                                              TotalDistance;                                            // 0x0000(0x0004)
	TArray<float>                                      IntermediateDistance;                                     // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct TdGame.TdBubbleStack.BoolItem
// 0x000C
struct FBoolItem
{
	unsigned long                                      flag : 1;                                                 // 0x0000(0x0004)
	struct FName                                       Identifier;                                               // 0x0004(0x0008)
};

// ScriptStruct TdGame.TdMove_Walking.IdleAnimStruct
// 0x0010
struct FIdleAnimStruct
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008)
	TEnumAsByte<ECustomNodeType>                       NodeType;                                                 // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	unsigned long                                      bResetCameraLook : 1;                                     // 0x000C(0x0004)
};

// ScriptStruct TdGame.TdMove_SpeedVault.VaultType
// 0x0074
struct FVaultType
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008)
	struct FName                                       AnimNameVariation;                                        // 0x0008(0x0008)
	unsigned long                                      bVaultOnto : 1;                                           // 0x0010(0x0004)
	float                                              MinHeight;                                                // 0x0014(0x0004)
	float                                              MaxHeight;                                                // 0x0018(0x0004)
	float                                              MinSpeedZ;                                                // 0x001C(0x0004)
	float                                              MaxSpeedZ;                                                // 0x0020(0x0004)
	float                                              MinMomentum;                                              // 0x0024(0x0004)
	float                                              MaxMomentum;                                              // 0x0028(0x0004)
	float                                              MaxDistanceTime;                                          // 0x002C(0x0004)
	float                                              ClampSpeedMin;                                            // 0x0030(0x0004)
	float                                              ClampSpeedMax;                                            // 0x0034(0x0004)
	float                                              SpeedAddition;                                            // 0x0038(0x0004)
	float                                              VaultTimeUp;                                              // 0x003C(0x0004)
	float                                              VaultTimeOver;                                            // 0x0040(0x0004)
	float                                              VaultTimeDown;                                            // 0x0044(0x0004)
	float                                              OverObstacleTime;                                         // 0x0048(0x0004)
	struct FVector                                     HandplantOffset;                                          // 0x004C(0x000C)
	struct FVector                                     HandIKOffset;                                             // 0x0058(0x000C)
	struct FVector                                     LedgeOffset;                                              // 0x0064(0x000C)
	unsigned long                                      bLeftHandIK : 1;                                          // 0x0070(0x0004)
	unsigned long                                      bRightHandIK : 1;                                         // 0x0070(0x0004)
	unsigned long                                      bMeleePossible : 1;                                       // 0x0070(0x0004)
	unsigned long                                      bResetCamera : 1;                                         // 0x0070(0x0004)
	unsigned long                                      bIsStringable : 1;                                        // 0x0070(0x0004)
};

// ScriptStruct TdGame.TdCarriable.TdCarriableAttachInfo
// 0x0020
struct FTdCarriableAttachInfo
{
	struct FName                                       Bone;                                                     // 0x0000(0x0008)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C)
};

// ScriptStruct TdGame.TdMenuPostProcesWrapper.TdEffectPanelStruct
// 0x0014
struct FTdEffectPanelStruct
{
	class UMaterialInstanceConstant*                   MaterialIC;                                               // 0x0000(0x0004)
	class UUIImage*                                    PanelImage;                                               // 0x0004(0x0004)
	float                                              AnimPosition;                                             // 0x0008(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x000C(0x0004)
	float                                              MinWidth;                                                 // 0x0010(0x0004)
};

// ScriptStruct TdGame.TdKillZoneVolume.LaserInfo
// 0x0034
struct FLaserInfo
{
	class ATdEmitter*                                  Source;                                                   // 0x0000(0x0004)
	class ATdEmitter*                                  Beam;                                                     // 0x0004(0x0004)
	class ATdEmitter*                                  Hit;                                                      // 0x0008(0x0004)
	struct FVector                                     Location;                                                 // 0x000C(0x000C)
	struct FRotator                                    CurrentAim;                                               // 0x0018(0x000C)
	struct FVector                                     HitLocation;                                              // 0x0024(0x000C)
	float                                              AimingTime;                                               // 0x0030(0x0004)
};

// ScriptStruct TdGame.TdMPGame.DeadPlayerController
// 0x0008
struct FDeadPlayerController
{
	class ATdPlayerController*                         C;                                                        // 0x0000(0x0004)
	float                                              TimeToRespawn;                                            // 0x0004(0x0004)
};

// ScriptStruct TdGame.TdMPTeamGame.TdTeamData
// 0x0008
struct FTdTeamData
{
	class UClass*                                      TeamClass;                                                // 0x0000(0x0004)
	int                                                MaxMembers;                                               // 0x0004(0x0004)
};

// ScriptStruct TdGame.TdTimerCheckpoint.CheckPointTrackIndex
// 0x000C
struct ATdTimerCheckpoint_FCheckPointTrackIndex
{
	TEnumAsByte<ETTStretch>                            TrackIndex;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                OrderIndex;                                               // 0x0004(0x0004) (Edit)
	unsigned long                                      bNoIntermediateTime : 1;                                  // 0x0008(0x0004) (Edit)
	unsigned long                                      bLastCheckpoint : 1;                                      // 0x0008(0x0004)
};

// ScriptStruct TdGame.TdTutorialCheckpoint.TutorialCriteria
// 0x0002
struct FTutorialCriteria
{
	TEnumAsByte<EMovement>                             MovementCriteria;                                         // 0x0000(0x0001) (Edit)
	TEnumAsByte<ETutorialEvents>                       TutorialCriteria;                                         // 0x0001(0x0001) (Edit)
};

// ScriptStruct TdGame.TdTutorialCheckpoint.CheckPointTrackIndex
// 0x0024
struct ATdTutorialCheckpoint_FCheckPointTrackIndex
{
	TArray<struct FTutorialCriteria>                   CompletionCriteria;                                       // 0x0000(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EMovementChallenge>                    TrackIndex;                                               // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                OrderIndex;                                               // 0x0010(0x0004) (Edit)
	unsigned long                                      bIsOptional : 1;                                          // 0x0014(0x0004) (Edit)
	unsigned long                                      bResetPlayerIfFailed : 1;                                 // 0x0014(0x0004) (Edit)
	TArray<struct FTutorialCriteria>                   ResetCriteria;                                            // 0x0018(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct TdGame.TdUIScene_Lobby.LobbyTeamWidgets
// 0x0020
struct FLobbyTeamWidgets
{
	class UTdUILobbyPlayerWidget*                      PlayerWidgets[0x8];                                       // 0x0000(0x0004)
};

// ScriptStruct TdGame.TdUITabPage_CurrentObjective.SubObjectivesWidgetCol
// 0x0008
struct FSubObjectivesWidgetCol
{
	class UUILabel*                                    Label;                                                    // 0x0000(0x0004) (Transient)
	class UUIImage*                                    Image;                                                    // 0x0004(0x0004) (Transient)
};

// ScriptStruct TdGame.UIDataStore_TdStringAliasBindingsMap.BindCacheElement
// 0x0018
struct FBindCacheElement
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008)
	struct FString                                     MappingString;                                            // 0x0008(0x000C) (NeedCtorLink)
	int                                                FieldIndex;                                               // 0x0014(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
