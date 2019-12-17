#pragma once

// Mirror's Edge (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../sdk.h"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Core.Object.TransformVectorByRotation
struct UObject_TransformVectorByRotation_Params
{
	struct FRotator                                    SourceRotation;                                           // (Parm)
	struct FVector                                     SourceVector;                                             // (Parm)
	bool                                               bInverse;                                                 // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetPackageName
struct UObject_GetPackageName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IsPendingKill
struct UObject_IsPendingKill_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ByteToFloat
struct UObject_ByteToFloat_Params
{
	unsigned char                                      inputByte;                                                // (Parm)
	bool                                               bSigned;                                                  // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FloatToByte
struct UObject_FloatToByte_Params
{
	float                                              inputFloat;                                               // (Parm)
	bool                                               bSigned;                                                  // (OptionalParm, Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.UnwindHeading
struct UObject_UnwindHeading_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FindDeltaAngle
struct UObject_FindDeltaAngle_Params
{
	float                                              A1;                                                       // (Parm)
	float                                              A2;                                                       // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetHeadingAngle
struct UObject_GetHeadingAngle_Params
{
	struct FVector                                     Dir;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetAngularDegreesFromRadians
struct UObject_GetAngularDegreesFromRadians_Params
{
	struct FVector2D                                   OutFOV;                                                   // (Parm, OutParm)
};

// Function Core.Object.GetAngularFromDotDist
struct UObject_GetAngularFromDotDist_Params
{
	struct FVector2D                                   OutAngDist;                                               // (Parm, OutParm)
	struct FVector2D                                   DotDist;                                                  // (Parm)
};

// Function Core.Object.GetAngularDistance
struct UObject_GetAngularDistance_Params
{
	struct FVector2D                                   OutAngularDist;                                           // (Parm, OutParm)
	struct FVector                                     Direction;                                                // (Parm)
	struct FVector                                     AxisX;                                                    // (Parm)
	struct FVector                                     AxisY;                                                    // (Parm)
	struct FVector                                     AxisZ;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetDotDistance
struct UObject_GetDotDistance_Params
{
	struct FVector2D                                   OutDotDist;                                               // (Parm, OutParm)
	struct FVector                                     Direction;                                                // (Parm)
	struct FVector                                     AxisX;                                                    // (Parm)
	struct FVector                                     AxisY;                                                    // (Parm)
	struct FVector                                     AxisZ;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.PointInBox
struct UObject_PointInBox_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     Location;                                                 // (Parm)
	struct FVector                                     Extent;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.PointDistToPlane
struct UObject_PointDistToPlane_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FRotator                                    Orientation;                                              // (Parm)
	struct FVector                                     Origin;                                                   // (Parm)
	struct FVector                                     out_ClosestPoint;                                         // (OptionalParm, Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.PointDistToLine
struct UObject_PointDistToLine_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     Line;                                                     // (Parm)
	struct FVector                                     Origin;                                                   // (Parm)
	struct FVector                                     OutClosestPoint;                                          // (OptionalParm, Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetPerObjectConfigSections
struct UObject_GetPerObjectConfigSections_Params
{
	class UClass*                                      SearchClass;                                              // (Parm)
	TArray<struct FString>                             out_SectionNames;                                         // (Parm, OutParm, NeedCtorLink)
	class UObject*                                     ObjectOuter;                                              // (OptionalParm, Parm)
	int                                                MaxResults;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.StaticSaveConfig
struct UObject_StaticSaveConfig_Params
{
};

// Function Core.Object.SaveConfig
struct UObject_SaveConfig_Params
{
};

// Function Core.Object.FindObject
struct UObject_FindObject_Params
{
	struct FString                                     ObjectName;                                               // (Parm, NeedCtorLink)
	class UClass*                                      ObjectClass;                                              // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DynamicLoadObject
struct UObject_DynamicLoadObject_Params
{
	struct FString                                     ObjectName;                                               // (Parm, NeedCtorLink)
	class UClass*                                      ObjectClass;                                              // (Parm)
	bool                                               MayFail;                                                  // (OptionalParm, Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetEnum
struct UObject_GetEnum_Params
{
	class UObject*                                     E;                                                        // (Parm)
	int                                                I;                                                        // (Parm, CoerceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Disable
struct UObject_Disable_Params
{
	struct FName                                       ProbeFunc;                                                // (Parm)
};

// Function Core.Object.Enable
struct UObject_Enable_Params
{
	struct FName                                       ProbeFunc;                                                // (Parm)
};

// Function Core.Object.ContinuedState
struct UObject_ContinuedState_Params
{
};

// Function Core.Object.PausedState
struct UObject_PausedState_Params
{
};

// Function Core.Object.PoppedState
struct UObject_PoppedState_Params
{
};

// Function Core.Object.PushedState
struct UObject_PushedState_Params
{
};

// Function Core.Object.EndState
struct UObject_EndState_Params
{
	struct FName                                       NextStateName;                                            // (Parm)
};

// Function Core.Object.BeginState
struct UObject_BeginState_Params
{
	struct FName                                       PreviousStateName;                                        // (Parm)
};

// Function Core.Object.DumpStateStack
struct UObject_DumpStateStack_Params
{
};

// Function Core.Object.PopState
struct UObject_PopState_Params
{
	bool                                               bPopAll;                                                  // (OptionalParm, Parm)
};

// Function Core.Object.PushState
struct UObject_PushState_Params
{
	struct FName                                       NewState;                                                 // (Parm)
	struct FName                                       NewLabel;                                                 // (OptionalParm, Parm)
};

// Function Core.Object.GetStateName
struct UObject_GetStateName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IsChildState
struct UObject_IsChildState_Params
{
	struct FName                                       TestState;                                                // (Parm)
	struct FName                                       TestParentState;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetStateStackSize
struct UObject_GetStateStackSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetStateStack
struct UObject_GetStateStack_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.IsInState
struct UObject_IsInState_Params
{
	struct FName                                       TestState;                                                // (Parm)
	bool                                               bTestStateStack;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GotoState
struct UObject_GotoState_Params
{
	struct FName                                       NewState;                                                 // (OptionalParm, Parm)
	struct FName                                       Label;                                                    // (OptionalParm, Parm)
	bool                                               bForceEvents;                                             // (OptionalParm, Parm)
	bool                                               bKeepStack;                                               // (OptionalParm, Parm)
};

// Function Core.Object.IsUTracing
struct UObject_IsUTracing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SetUTracing
struct UObject_SetUTracing_Params
{
	bool                                               bShouldUTrace;                                            // (Parm)
};

// Function Core.Object.GetFuncName
struct UObject_GetFuncName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ScriptTraceString
struct UObject_ScriptTraceString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.ScriptTrace
struct UObject_ScriptTrace_Params
{
};

// Function Core.Object.Localize
struct UObject_Localize_Params
{
	struct FString                                     SectionName;                                              // (Parm, NeedCtorLink)
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     PackageName;                                              // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.WarnInternal
struct UObject_WarnInternal_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
};

// Function Core.Object.LogInternal
struct UObject_LogInternal_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FName                                       Tag;                                                      // (OptionalParm, Parm)
};

// Function Core.Object.Subtract_LinearColorLinearColor
struct UObject_Subtract_LinearColorLinearColor_Params
{
	struct FLinearColor                                A;                                                        // (Parm)
	struct FLinearColor                                B;                                                        // (Parm)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_LinearColorFloat
struct UObject_Multiply_LinearColorFloat_Params
{
	struct FLinearColor                                LC;                                                       // (Parm)
	float                                              Mult;                                                     // (Parm)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ColorToLinearColor
struct UObject_ColorToLinearColor_Params
{
	struct FColor                                      OldColor;                                                 // (Parm)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MakeLinearColor
struct UObject_MakeLinearColor_Params
{
	float                                              R;                                                        // (Parm)
	float                                              G;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              A;                                                        // (Parm)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MakeColor
struct UObject_MakeColor_Params
{
	unsigned char                                      R;                                                        // (Parm)
	unsigned char                                      G;                                                        // (Parm)
	unsigned char                                      B;                                                        // (Parm)
	unsigned char                                      A;                                                        // (OptionalParm, Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_ColorColor
struct UObject_Add_ColorColor_Params
{
	struct FColor                                      A;                                                        // (Parm)
	struct FColor                                      B;                                                        // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_ColorFloat
struct UObject_Multiply_ColorFloat_Params
{
	struct FColor                                      A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_FloatColor
struct UObject_Multiply_FloatColor_Params
{
	float                                              A;                                                        // (Parm)
	struct FColor                                      B;                                                        // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_ColorColor
struct UObject_Subtract_ColorColor_Params
{
	struct FColor                                      A;                                                        // (Parm)
	struct FColor                                      B;                                                        // (Parm)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.vect2d
struct UObject_vect2d_Params
{
	float                                              InX;                                                      // (Parm)
	float                                              InY;                                                      // (Parm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetRangePctByValue
struct UObject_GetRangePctByValue_Params
{
	struct FVector2D                                   Range;                                                    // (Parm)
	float                                              Value;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetRangeValueByPct
struct UObject_GetRangeValueByPct_Params
{
	struct FVector2D                                   Range;                                                    // (Parm)
	float                                              Pct;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_QuatQuat
struct UObject_Subtract_QuatQuat_Params
{
	struct FQuat                                       A;                                                        // (Parm)
	struct FQuat                                       B;                                                        // (Parm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_QuatQuat
struct UObject_Add_QuatQuat_Params
{
	struct FQuat                                       A;                                                        // (Parm)
	struct FQuat                                       B;                                                        // (Parm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatSlerp
struct UObject_QuatSlerp_Params
{
	struct FQuat                                       A;                                                        // (Parm)
	struct FQuat                                       B;                                                        // (Parm)
	float                                              Alpha;                                                    // (Parm)
	bool                                               bShortestPath;                                            // (OptionalParm, Parm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatToRotator
struct UObject_QuatToRotator_Params
{
	struct FQuat                                       A;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatFromRotator
struct UObject_QuatFromRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatFromAxisAndAngle
struct UObject_QuatFromAxisAndAngle_Params
{
	struct FVector                                     Axis;                                                     // (Parm)
	float                                              Angle;                                                    // (Parm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatFindBetween
struct UObject_QuatFindBetween_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatRotateVector
struct UObject_QuatRotateVector_Params
{
	struct FQuat                                       A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatInvert
struct UObject_QuatInvert_Params
{
	struct FQuat                                       A;                                                        // (Parm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatDot
struct UObject_QuatDot_Params
{
	struct FQuat                                       A;                                                        // (Parm)
	struct FQuat                                       B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.QuatProduct
struct UObject_QuatProduct_Params
{
	struct FQuat                                       A;                                                        // (Parm)
	struct FQuat                                       B;                                                        // (Parm)
	struct FQuat                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MatrixGetOrigin
struct UObject_MatrixGetOrigin_Params
{
	struct FMatrix                                     TM;                                                       // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MatrixGetRotator
struct UObject_MatrixGetRotator_Params
{
	struct FMatrix                                     TM;                                                       // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MakeRotationTranslationMatrix
struct UObject_MakeRotationTranslationMatrix_Params
{
	struct FVector                                     Translation;                                              // (Parm)
	struct FRotator                                    Rotation;                                                 // (Parm)
	struct FMatrix                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.InverseTransformNormal
struct UObject_InverseTransformNormal_Params
{
	struct FMatrix                                     TM;                                                       // (Parm)
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.TransformNormal
struct UObject_TransformNormal_Params
{
	struct FMatrix                                     TM;                                                       // (Parm)
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.InverseTransformVector
struct UObject_InverseTransformVector_Params
{
	struct FMatrix                                     TM;                                                       // (Parm)
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.TransformVector
struct UObject_TransformVector_Params
{
	struct FMatrix                                     TM;                                                       // (Parm)
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_MatrixMatrix
struct UObject_Multiply_MatrixMatrix_Params
{
	struct FMatrix                                     A;                                                        // (Parm)
	struct FMatrix                                     B;                                                        // (Parm)
	struct FMatrix                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_NameName
struct UObject_NotEqual_NameName_Params
{
	struct FName                                       A;                                                        // (Parm)
	struct FName                                       B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_NameName
struct UObject_EqualEqual_NameName_Params
{
	struct FName                                       A;                                                        // (Parm)
	struct FName                                       B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IsA
struct UObject_IsA_Params
{
	struct FName                                       ClassName;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ClassIsChildOf
struct UObject_ClassIsChildOf_Params
{
	class UClass*                                      TestClass;                                                // (Parm)
	class UClass*                                      ParentClass;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_InterfaceInterface
struct UObject_NotEqual_InterfaceInterface_Params
{
	TScriptInterface<class UInterface>                 A;                                                        // (Parm)
	TScriptInterface<class UInterface>                 B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_InterfaceInterface
struct UObject_EqualEqual_InterfaceInterface_Params
{
	TScriptInterface<class UInterface>                 A;                                                        // (Parm)
	TScriptInterface<class UInterface>                 B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_ObjectObject
struct UObject_NotEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                        // (Parm)
	class UObject*                                     B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_ObjectObject
struct UObject_EqualEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                        // (Parm)
	class UObject*                                     B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.PathName
struct UObject_PathName_Params
{
	class UObject*                                     CheckObject;                                              // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.ParseStringIntoArray
struct UObject_ParseStringIntoArray_Params
{
	struct FString                                     BaseString;                                               // (Parm, NeedCtorLink)
	TArray<struct FString>                             Pieces;                                                   // (Parm, OutParm, NeedCtorLink)
	struct FString                                     delim;                                                    // (Parm, NeedCtorLink)
	bool                                               bCullEmpty;                                               // (Parm)
};

// Function Core.Object.JoinArray
struct UObject_JoinArray_Params
{
	TArray<struct FString>                             StringArray;                                              // (Parm, NeedCtorLink)
	struct FString                                     out_Result;                                               // (Parm, OutParm, NeedCtorLink)
	struct FString                                     delim;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               bIgnoreBlanks;                                            // (OptionalParm, Parm)
};

// Function Core.Object.GetRightMost
struct UObject_GetRightMost_Params
{
	struct FString                                     Text;                                                     // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Split
struct UObject_Split_Params
{
	struct FString                                     Text;                                                     // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     SplitStr;                                                 // (Parm, CoerceParm, NeedCtorLink)
	bool                                               bOmitSplitStr;                                            // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Repl
struct UObject_Repl_Params
{
	struct FString                                     Src;                                                      // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     Match;                                                    // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     With;                                                     // (Parm, CoerceParm, NeedCtorLink)
	bool                                               bCaseSensitive;                                           // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Asc
struct UObject_Asc_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Chr
struct UObject_Chr_Params
{
	int                                                I;                                                        // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Locs
struct UObject_Locs_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Caps
struct UObject_Caps_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Right
struct UObject_Right_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	int                                                I;                                                        // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Left
struct UObject_Left_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	int                                                I;                                                        // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Mid
struct UObject_Mid_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	int                                                I;                                                        // (Parm)
	int                                                J;                                                        // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.InStr
struct UObject_InStr_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     T;                                                        // (Parm, CoerceParm, NeedCtorLink)
	bool                                               bSearchFromRight;                                         // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Len
struct UObject_Len_Params
{
	struct FString                                     S;                                                        // (Parm, CoerceParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_StrStr
struct UObject_SubtractEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, OutParm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.AtEqual_StrStr
struct UObject_AtEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, OutParm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.ConcatEqual_StrStr
struct UObject_ConcatEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, OutParm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.ComplementEqual_StrStr
struct UObject_ComplementEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_StrStr
struct UObject_NotEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_StrStr
struct UObject_EqualEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterEqual_StrStr
struct UObject_GreaterEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessEqual_StrStr
struct UObject_LessEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Greater_StrStr
struct UObject_Greater_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Less_StrStr
struct UObject_Less_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.At_StrStr
struct UObject_At_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Concat_StrStr
struct UObject_Concat_StrStr_Params
{
	struct FString                                     A;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     B;                                                        // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.SClampRotAxis
struct UObject_SClampRotAxis_Params
{
	float                                              DeltaTime;                                                // (Parm)
	int                                                ViewAxis;                                                 // (Parm)
	int                                                out_DeltaViewAxis;                                        // (Parm, OutParm)
	int                                                MaxLimit;                                                 // (Parm)
	int                                                MinLimit;                                                 // (Parm)
	float                                              InterpolationSpeed;                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ClampRotAxisFromRange
struct UObject_ClampRotAxisFromRange_Params
{
	int                                                Current;                                                  // (Parm)
	int                                                Min;                                                      // (Parm)
	int                                                Max;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ClampRotAxisFromBase
struct UObject_ClampRotAxisFromBase_Params
{
	int                                                Current;                                                  // (Parm)
	int                                                Center;                                                   // (Parm)
	int                                                MaxDelta;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ClampRotAxis
struct UObject_ClampRotAxis_Params
{
	int                                                ViewAxis;                                                 // (Parm)
	int                                                out_DeltaViewAxis;                                        // (Parm, OutParm)
	int                                                MaxLimit;                                                 // (Parm)
	int                                                MinLimit;                                                 // (Parm)
};

// Function Core.Object.RSize
struct UObject_RSize_Params
{
	struct FRotator                                    R;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RDiff
struct UObject_RDiff_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NormalizeRotAxis
struct UObject_NormalizeRotAxis_Params
{
	int                                                Angle;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RInterpTo
struct UObject_RInterpTo_Params
{
	struct FRotator                                    Current;                                                  // (Parm)
	struct FRotator                                    Target;                                                   // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	float                                              InterpSpeed;                                              // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RSmerp
struct UObject_RSmerp_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	float                                              Alpha;                                                    // (Parm)
	bool                                               bShortestPath;                                            // (OptionalParm, Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RLerp
struct UObject_RLerp_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	float                                              Alpha;                                                    // (Parm)
	bool                                               bShortestPath;                                            // (OptionalParm, Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Normalize
struct UObject_Normalize_Params
{
	struct FRotator                                    Rot;                                                      // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.OrthoRotation
struct UObject_OrthoRotation_Params
{
	struct FVector                                     X;                                                        // (Parm)
	struct FVector                                     Y;                                                        // (Parm)
	struct FVector                                     Z;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RotRand
struct UObject_RotRand_Params
{
	bool                                               bRoll;                                                    // (OptionalParm, Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetUnAxes
struct UObject_GetUnAxes_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FVector                                     X;                                                        // (Parm, OutParm)
	struct FVector                                     Y;                                                        // (Parm, OutParm)
	struct FVector                                     Z;                                                        // (Parm, OutParm)
};

// Function Core.Object.GetAxes
struct UObject_GetAxes_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FVector                                     X;                                                        // (Parm, OutParm)
	struct FVector                                     Y;                                                        // (Parm, OutParm)
	struct FVector                                     Z;                                                        // (Parm, OutParm)
};

// Function Core.Object.ClockwiseFrom_IntInt
struct UObject_ClockwiseFrom_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_RotatorRotator
struct UObject_SubtractEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm, OutParm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_RotatorRotator
struct UObject_AddEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm, OutParm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_RotatorRotator
struct UObject_Subtract_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_RotatorRotator
struct UObject_Add_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_RotatorFloat
struct UObject_DivideEqual_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_RotatorFloat
struct UObject_MultiplyEqual_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_RotatorFloat
struct UObject_Divide_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_FloatRotator
struct UObject_Multiply_FloatRotator_Params
{
	float                                              A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_RotatorFloat
struct UObject_Multiply_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_RotatorRotator
struct UObject_NotEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_RotatorRotator
struct UObject_EqualEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ClampLength
struct UObject_ClampLength_Params
{
	struct FVector                                     V;                                                        // (Parm)
	float                                              MaxLength;                                                // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VInterpTo
struct UObject_VInterpTo_Params
{
	struct FVector                                     Current;                                                  // (Parm)
	struct FVector                                     Target;                                                   // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	float                                              InterpSpeed;                                              // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.IsZero
struct UObject_IsZero_Params
{
	struct FVector                                     A;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ProjectOnTo
struct UObject_ProjectOnTo_Params
{
	struct FVector                                     X;                                                        // (Parm)
	struct FVector                                     Y;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MirrorVectorByNormal
struct UObject_MirrorVectorByNormal_Params
{
	struct FVector                                     InVect;                                                   // (Parm)
	struct FVector                                     InNormal;                                                 // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VRand
struct UObject_VRand_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VSmerp
struct UObject_VSmerp_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	float                                              Alpha;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VLerp
struct UObject_VLerp_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	float                                              Alpha;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Normal
struct UObject_Normal_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VSizeSq2D
struct UObject_VSizeSq2D_Params
{
	struct FVector                                     A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VSizeSq
struct UObject_VSizeSq_Params
{
	struct FVector                                     A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VSize2D
struct UObject_VSize2D_Params
{
	struct FVector                                     A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.VSize
struct UObject_VSize_Params
{
	struct FVector                                     A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_VectorVector
struct UObject_SubtractEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, OutParm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_VectorVector
struct UObject_AddEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, OutParm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_VectorFloat
struct UObject_DivideEqual_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_VectorVector
struct UObject_MultiplyEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm, OutParm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_VectorFloat
struct UObject_MultiplyEqual_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Cross_VectorVector
struct UObject_Cross_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Dot_VectorVector
struct UObject_Dot_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_VectorVector
struct UObject_NotEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_VectorVector
struct UObject_EqualEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterGreater_VectorRotator
struct UObject_GreaterGreater_VectorRotator_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessLess_VectorRotator
struct UObject_LessLess_VectorRotator_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FRotator                                    B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_VectorVector
struct UObject_Subtract_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_VectorVector
struct UObject_Add_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_VectorFloat
struct UObject_Divide_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_VectorVector
struct UObject_Multiply_VectorVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_FloatVector
struct UObject_Multiply_FloatVector_Params
{
	float                                              A;                                                        // (Parm)
	struct FVector                                     B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_VectorFloat
struct UObject_Multiply_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_PreVector
struct UObject_Subtract_PreVector_Params
{
	struct FVector                                     A;                                                        // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FInterpTo
struct UObject_FInterpTo_Params
{
	float                                              Current;                                                  // (Parm)
	float                                              Target;                                                   // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	float                                              InterpSpeed;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FPctByRange
struct UObject_FPctByRange_Params
{
	float                                              Value;                                                    // (Parm)
	float                                              InMin;                                                    // (Parm)
	float                                              InMax;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.RandRange
struct UObject_RandRange_Params
{
	float                                              InMin;                                                    // (Parm)
	float                                              InMax;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FInterpEaseInOut
struct UObject_FInterpEaseInOut_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              Alpha;                                                    // (Parm)
	float                                              Exp;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FInterpEaseOut
struct UObject_FInterpEaseOut_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              Alpha;                                                    // (Parm)
	float                                              Exp;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FInterpEaseIn
struct UObject_FInterpEaseIn_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              Alpha;                                                    // (Parm)
	float                                              Exp;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FCubicInterp
struct UObject_FCubicInterp_Params
{
	float                                              P0;                                                       // (Parm)
	float                                              T0;                                                       // (Parm)
	float                                              P1;                                                       // (Parm)
	float                                              T1;                                                       // (Parm)
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Round
struct UObject_Round_Params
{
	float                                              A;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Lerp
struct UObject_Lerp_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              Alpha;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FClamp
struct UObject_FClamp_Params
{
	float                                              V;                                                        // (Parm)
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FMax
struct UObject_FMax_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FMin
struct UObject_FMin_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FRand
struct UObject_FRand_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Square
struct UObject_Square_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Sqrt
struct UObject_Sqrt_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Loge
struct UObject_Loge_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Exp
struct UObject_Exp_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Atan
struct UObject_Atan_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Tan
struct UObject_Tan_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Acos
struct UObject_Acos_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Cos
struct UObject_Cos_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Asin
struct UObject_Asin_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Sin
struct UObject_Sin_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Abs
struct UObject_Abs_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Percent_IntInt
struct UObject_Percent_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_FloatFloat
struct UObject_SubtractEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_FloatFloat
struct UObject_AddEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_FloatFloat
struct UObject_DivideEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_FloatFloat
struct UObject_MultiplyEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_FloatFloat
struct UObject_NotEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ComplementEqual_FloatFloat
struct UObject_ComplementEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_FloatFloat
struct UObject_EqualEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterEqual_FloatFloat
struct UObject_GreaterEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessEqual_FloatFloat
struct UObject_LessEqual_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Greater_FloatFloat
struct UObject_Greater_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Less_FloatFloat
struct UObject_Less_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_FloatFloat
struct UObject_Subtract_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_FloatFloat
struct UObject_Add_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Percent_FloatFloat
struct UObject_Percent_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_FloatFloat
struct UObject_Divide_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_FloatFloat
struct UObject_Multiply_FloatFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              B;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyMultiply_FloatFloat
struct UObject_MultiplyMultiply_FloatFloat_Params
{
	float                                              Base;                                                     // (Parm)
	float                                              Exp;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_PreFloat
struct UObject_Subtract_PreFloat_Params
{
	float                                              A;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.ToHex
struct UObject_ToHex_Params
{
	int                                                A;                                                        // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function Core.Object.Clamp
struct UObject_Clamp_Params
{
	int                                                V;                                                        // (Parm)
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Max
struct UObject_Max_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Min
struct UObject_Min_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Rand
struct UObject_Rand_Params
{
	int                                                Max;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractSubtract_Int
struct UObject_SubtractSubtract_Int_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddAdd_Int
struct UObject_AddAdd_Int_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractSubtract_PreInt
struct UObject_SubtractSubtract_PreInt_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddAdd_PreInt
struct UObject_AddAdd_PreInt_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_IntInt
struct UObject_SubtractEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_IntInt
struct UObject_AddEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_IntFloat
struct UObject_DivideEqual_IntFloat_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_IntFloat
struct UObject_MultiplyEqual_IntFloat_Params
{
	int                                                A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Or_IntInt
struct UObject_Or_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Xor_IntInt
struct UObject_Xor_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.And_IntInt
struct UObject_And_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_IntInt
struct UObject_NotEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_IntInt
struct UObject_EqualEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterEqual_IntInt
struct UObject_GreaterEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessEqual_IntInt
struct UObject_LessEqual_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Greater_IntInt
struct UObject_Greater_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Less_IntInt
struct UObject_Less_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterGreaterGreater_IntInt
struct UObject_GreaterGreaterGreater_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GreaterGreater_IntInt
struct UObject_GreaterGreater_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.LessLess_IntInt
struct UObject_LessLess_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_IntInt
struct UObject_Subtract_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Add_IntInt
struct UObject_Add_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Divide_IntInt
struct UObject_Divide_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Multiply_IntInt
struct UObject_Multiply_IntInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Subtract_PreInt
struct UObject_Subtract_PreInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Complement_PreInt
struct UObject_Complement_PreInt_Params
{
	int                                                A;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractSubtract_Byte
struct UObject_SubtractSubtract_Byte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddAdd_Byte
struct UObject_AddAdd_Byte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractSubtract_PreByte
struct UObject_SubtractSubtract_PreByte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddAdd_PreByte
struct UObject_AddAdd_PreByte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.SubtractEqual_ByteByte
struct UObject_SubtractEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      B;                                                        // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AddEqual_ByteByte
struct UObject_AddEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      B;                                                        // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DivideEqual_ByteByte
struct UObject_DivideEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      B;                                                        // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_ByteFloat
struct UObject_MultiplyEqual_ByteFloat_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	float                                              B;                                                        // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.MultiplyEqual_ByteByte
struct UObject_MultiplyEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (Parm, OutParm)
	unsigned char                                      B;                                                        // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.OrOr_BoolBool
struct UObject_OrOr_BoolBool_Params
{
	bool                                               A;                                                        // (Parm)
	bool                                               B;                                                        // (Parm, SkipParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.XorXor_BoolBool
struct UObject_XorXor_BoolBool_Params
{
	bool                                               A;                                                        // (Parm)
	bool                                               B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.AndAnd_BoolBool
struct UObject_AndAnd_BoolBool_Params
{
	bool                                               A;                                                        // (Parm)
	bool                                               B;                                                        // (Parm, SkipParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.NotEqual_BoolBool
struct UObject_NotEqual_BoolBool_Params
{
	bool                                               A;                                                        // (Parm)
	bool                                               B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.EqualEqual_BoolBool
struct UObject_EqualEqual_BoolBool_Params
{
	bool                                               A;                                                        // (Parm)
	bool                                               B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.Not_PreBool
struct UObject_Not_PreBool_Params
{
	bool                                               A;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Commandlet.Main
struct UCommandlet_Main_Params
{
	struct FString                                     Params;                                                   // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.HelpCommandlet.Main
struct UHelpCommandlet_Main_Params
{
	struct FString                                     Params;                                                   // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
