#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_CatmullR3014762178.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_LinearDe2073524639.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_Path2828565993.h"
#include "DOTween_DG_Tweening_CustomPlugins_PureQuaternionPl3400666973.h"
#include "DOTween_DG_Tweening_Core_ABSSequentiable2284140720.h"
#include "DOTween_DG_Tweening_Core_Debugger1404542751.h"
#include "DOTween_DG_Tweening_Core_DOTweenComponent696744215.h"
#include "DOTween_DG_Tweening_Core_DOTweenComponent_U3CWaitFo639731943.h"
#include "DOTween_DG_Tweening_Core_DOTweenComponent_U3CWaitF2782210651.h"
#include "DOTween_DG_Tweening_Core_DOTweenComponent_U3CWaitF1007991819.h"
#include "DOTween_DG_Tweening_Core_DOTweenComponent_U3CWaitF3988581919.h"
#include "DOTween_DG_Tweening_Core_DOTweenComponent_U3CWaitF2034437344.h"
#include "DOTween_DG_Tweening_Core_DOTweenComponent_U3CWaitF2341562412.h"
#include "DOTween_DG_Tweening_Core_DOTweenSettings873123119.h"
#include "DOTween_DG_Tweening_Core_DOTweenSettings_SettingsLo514961325.h"
#include "DOTween_DG_Tweening_Core_Extensions507052800.h"
#include "DOTween_DG_Tweening_Core_SequenceCallback2782183128.h"
#include "DOTween_DG_Tweening_Core_TweenManager1979661952.h"
#include "DOTween_DG_Tweening_Core_TweenManager_CapacityIncr1969140739.h"
#include "DOTween_DG_Tweening_Core_Utils2524017187.h"
#include "DOTween_DG_Tweening_Core_Surrogates_ColorWrapper39741192.h"
#include "DOTween_DG_Tweening_Core_Surrogates_QuaternionWrap1669027135.h"
#include "DOTween_DG_Tweening_Core_Surrogates_Vector2Wrapper3491509036.h"
#include "DOTween_DG_Tweening_Core_Surrogates_Vector3Wrapper3491263821.h"
#include "DOTween_DG_Tweening_Core_Surrogates_Vector4Wrapper3491445738.h"
#include "DOTween_DG_Tweening_Core_Enums_FilterType1425068526.h"
#include "DOTween_DG_Tweening_Core_Enums_OperationType2600045009.h"
#include "DOTween_DG_Tweening_Core_Enums_SpecialStartupMode1501334721.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice2468589887.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateMode2539919096.h"
#include "DOTween_DG_Tweening_Core_Easing_Bounce3273339050.h"
#include "DOTween_DG_Tweening_Core_Easing_EaseManager1514337917.h"
#include "DOTween_DG_Tweening_Core_Easing_EaseManager_U3CU3E1609106043.h"
#include "DOTween_DG_Tweening_Core_Easing_EaseCurve1295352409.h"
#include "DOTween_DG_Tweening_Core_Easing_Flash1282698556.h"
#include "DOTween_U3CPrivateImplementationDetailsU3E1486305137.h"
#include "DOTween_U3CPrivateImplementationDetailsU3E___Static978476011.h"
#include "DOTween_U3CPrivateImplementationDetailsU3E___Stati3707359366.h"
#include "DOTween_U3CPrivateImplementationDetailsU3E___Stati1468992140.h"
#include "UnityEngine_UI_U3CModuleU3E3783534214.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventHandle942672932.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSyste3466835263.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigg1967201810.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigg3959312622.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigg3365010046.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigg2524067914.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEve1693084770.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirect1406276862.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycasterM3179336627.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResul21186376.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou3960014691.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_AxisEventD1524870173.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_AbstractEv1333959294.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2681005625.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve2981963041.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1414739712.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInput621514313.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM1295781545.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInp1441575871.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInp2688375492.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInp3572864619.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInp3709210170.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneIn70867863.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_Standalone2680906638.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_TouchInput2561058385.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycas2336171397.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_Physics2DR3236822917.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PhysicsRayc249603239.h"
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_Color3438117476.h"
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_Color1328781136.h"
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_Color3293839588.h"
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_Float2986189219.h"
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_Float2824271922.h"
#include "UnityEngine_UI_UnityEngine_UI_AnimationTriggers3244928895.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (CatmullRomDecoder_t3014762178), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (LinearDecoder_t2073524639), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (Path_t2828565993), -1, sizeof(Path_t2828565993_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1802[21] = 
{
	Path_t2828565993_StaticFields::get_offset_of__catmullRomDecoder_0(),
	Path_t2828565993_StaticFields::get_offset_of__linearDecoder_1(),
	Path_t2828565993::get_offset_of_wpLengths_2(),
	Path_t2828565993::get_offset_of_type_3(),
	Path_t2828565993::get_offset_of_subdivisionsXSegment_4(),
	Path_t2828565993::get_offset_of_subdivisions_5(),
	Path_t2828565993::get_offset_of_wps_6(),
	Path_t2828565993::get_offset_of_controlPoints_7(),
	Path_t2828565993::get_offset_of_length_8(),
	Path_t2828565993::get_offset_of_isFinalized_9(),
	Path_t2828565993::get_offset_of_timesTable_10(),
	Path_t2828565993::get_offset_of_lengthsTable_11(),
	Path_t2828565993::get_offset_of_linearWPIndex_12(),
	Path_t2828565993::get_offset_of__incrementalClone_13(),
	Path_t2828565993::get_offset_of__incrementalIndex_14(),
	Path_t2828565993::get_offset_of__decoder_15(),
	Path_t2828565993::get_offset_of__changed_16(),
	Path_t2828565993::get_offset_of_nonLinearDrawWps_17(),
	Path_t2828565993::get_offset_of_targetPosition_18(),
	Path_t2828565993::get_offset_of_lookAtPosition_19(),
	Path_t2828565993::get_offset_of_gizmoColor_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (PureQuaternionPlugin_t3400666973), -1, sizeof(PureQuaternionPlugin_t3400666973_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1803[1] = 
{
	PureQuaternionPlugin_t3400666973_StaticFields::get_offset_of__plug_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (ABSSequentiable_t2284140720), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1804[4] = 
{
	ABSSequentiable_t2284140720::get_offset_of_tweenType_0(),
	ABSSequentiable_t2284140720::get_offset_of_sequencedPosition_1(),
	ABSSequentiable_t2284140720::get_offset_of_sequencedEndPosition_2(),
	ABSSequentiable_t2284140720::get_offset_of_onStart_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (Debugger_t1404542751), -1, sizeof(Debugger_t1404542751_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1807[1] = 
{
	Debugger_t1404542751_StaticFields::get_offset_of_logPriority_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (DOTweenComponent_t696744215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1808[4] = 
{
	DOTweenComponent_t696744215::get_offset_of_inspectorUpdater_2(),
	DOTweenComponent_t696744215::get_offset_of__unscaledTime_3(),
	DOTweenComponent_t696744215::get_offset_of__unscaledDeltaTime_4(),
	DOTweenComponent_t696744215::get_offset_of__duplicateToDestroy_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (U3CWaitForCompletionU3Ed__13_t639731943), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1809[3] = 
{
	U3CWaitForCompletionU3Ed__13_t639731943::get_offset_of_U3CU3E1__state_0(),
	U3CWaitForCompletionU3Ed__13_t639731943::get_offset_of_U3CU3E2__current_1(),
	U3CWaitForCompletionU3Ed__13_t639731943::get_offset_of_t_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (U3CWaitForRewindU3Ed__14_t2782210651), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1810[3] = 
{
	U3CWaitForRewindU3Ed__14_t2782210651::get_offset_of_U3CU3E1__state_0(),
	U3CWaitForRewindU3Ed__14_t2782210651::get_offset_of_U3CU3E2__current_1(),
	U3CWaitForRewindU3Ed__14_t2782210651::get_offset_of_t_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (U3CWaitForKillU3Ed__15_t1007991819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1811[3] = 
{
	U3CWaitForKillU3Ed__15_t1007991819::get_offset_of_U3CU3E1__state_0(),
	U3CWaitForKillU3Ed__15_t1007991819::get_offset_of_U3CU3E2__current_1(),
	U3CWaitForKillU3Ed__15_t1007991819::get_offset_of_t_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (U3CWaitForElapsedLoopsU3Ed__16_t3988581919), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1812[4] = 
{
	U3CWaitForElapsedLoopsU3Ed__16_t3988581919::get_offset_of_U3CU3E1__state_0(),
	U3CWaitForElapsedLoopsU3Ed__16_t3988581919::get_offset_of_U3CU3E2__current_1(),
	U3CWaitForElapsedLoopsU3Ed__16_t3988581919::get_offset_of_t_2(),
	U3CWaitForElapsedLoopsU3Ed__16_t3988581919::get_offset_of_elapsedLoops_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (U3CWaitForPositionU3Ed__17_t2034437344), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1813[4] = 
{
	U3CWaitForPositionU3Ed__17_t2034437344::get_offset_of_U3CU3E1__state_0(),
	U3CWaitForPositionU3Ed__17_t2034437344::get_offset_of_U3CU3E2__current_1(),
	U3CWaitForPositionU3Ed__17_t2034437344::get_offset_of_t_2(),
	U3CWaitForPositionU3Ed__17_t2034437344::get_offset_of_position_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (U3CWaitForStartU3Ed__18_t2341562412), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1814[3] = 
{
	U3CWaitForStartU3Ed__18_t2341562412::get_offset_of_U3CU3E1__state_0(),
	U3CWaitForStartU3Ed__18_t2341562412::get_offset_of_U3CU3E2__current_1(),
	U3CWaitForStartU3Ed__18_t2341562412::get_offset_of_t_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (DOTweenSettings_t873123119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1815[18] = 
{
	0,
	DOTweenSettings_t873123119::get_offset_of_useSafeMode_3(),
	DOTweenSettings_t873123119::get_offset_of_timeScale_4(),
	DOTweenSettings_t873123119::get_offset_of_useSmoothDeltaTime_5(),
	DOTweenSettings_t873123119::get_offset_of_maxSmoothUnscaledTime_6(),
	DOTweenSettings_t873123119::get_offset_of_showUnityEditorReport_7(),
	DOTweenSettings_t873123119::get_offset_of_logBehaviour_8(),
	DOTweenSettings_t873123119::get_offset_of_drawGizmos_9(),
	DOTweenSettings_t873123119::get_offset_of_defaultRecyclable_10(),
	DOTweenSettings_t873123119::get_offset_of_defaultAutoPlay_11(),
	DOTweenSettings_t873123119::get_offset_of_defaultUpdateType_12(),
	DOTweenSettings_t873123119::get_offset_of_defaultTimeScaleIndependent_13(),
	DOTweenSettings_t873123119::get_offset_of_defaultEaseType_14(),
	DOTweenSettings_t873123119::get_offset_of_defaultEaseOvershootOrAmplitude_15(),
	DOTweenSettings_t873123119::get_offset_of_defaultEasePeriod_16(),
	DOTweenSettings_t873123119::get_offset_of_defaultAutoKill_17(),
	DOTweenSettings_t873123119::get_offset_of_defaultLoopType_18(),
	DOTweenSettings_t873123119::get_offset_of_storeSettingsLocation_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (SettingsLocation_t514961325)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1816[4] = 
{
	SettingsLocation_t514961325::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (Extensions_t507052800), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (SequenceCallback_t2782183128), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (TweenManager_t1979661952), -1, sizeof(TweenManager_t1979661952_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1819[31] = 
{
	0,
	0,
	0,
	TweenManager_t1979661952_StaticFields::get_offset_of_maxActive_3(),
	TweenManager_t1979661952_StaticFields::get_offset_of_maxTweeners_4(),
	TweenManager_t1979661952_StaticFields::get_offset_of_maxSequences_5(),
	TweenManager_t1979661952_StaticFields::get_offset_of_hasActiveTweens_6(),
	TweenManager_t1979661952_StaticFields::get_offset_of_hasActiveDefaultTweens_7(),
	TweenManager_t1979661952_StaticFields::get_offset_of_hasActiveLateTweens_8(),
	TweenManager_t1979661952_StaticFields::get_offset_of_hasActiveFixedTweens_9(),
	TweenManager_t1979661952_StaticFields::get_offset_of_totActiveTweens_10(),
	TweenManager_t1979661952_StaticFields::get_offset_of_totActiveDefaultTweens_11(),
	TweenManager_t1979661952_StaticFields::get_offset_of_totActiveLateTweens_12(),
	TweenManager_t1979661952_StaticFields::get_offset_of_totActiveFixedTweens_13(),
	TweenManager_t1979661952_StaticFields::get_offset_of_totActiveTweeners_14(),
	TweenManager_t1979661952_StaticFields::get_offset_of_totActiveSequences_15(),
	TweenManager_t1979661952_StaticFields::get_offset_of_totPooledTweeners_16(),
	TweenManager_t1979661952_StaticFields::get_offset_of_totPooledSequences_17(),
	TweenManager_t1979661952_StaticFields::get_offset_of_totTweeners_18(),
	TweenManager_t1979661952_StaticFields::get_offset_of_totSequences_19(),
	TweenManager_t1979661952_StaticFields::get_offset_of_isUpdateLoop_20(),
	TweenManager_t1979661952_StaticFields::get_offset_of__activeTweens_21(),
	TweenManager_t1979661952_StaticFields::get_offset_of__pooledTweeners_22(),
	TweenManager_t1979661952_StaticFields::get_offset_of__PooledSequences_23(),
	TweenManager_t1979661952_StaticFields::get_offset_of__KillList_24(),
	TweenManager_t1979661952_StaticFields::get_offset_of__maxActiveLookupId_25(),
	TweenManager_t1979661952_StaticFields::get_offset_of__requiresActiveReorganization_26(),
	TweenManager_t1979661952_StaticFields::get_offset_of__reorganizeFromId_27(),
	TweenManager_t1979661952_StaticFields::get_offset_of__minPooledTweenerId_28(),
	TweenManager_t1979661952_StaticFields::get_offset_of__maxPooledTweenerId_29(),
	TweenManager_t1979661952_StaticFields::get_offset_of__despawnAllCalledFromUpdateLoopCallback_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (CapacityIncreaseMode_t1969140739)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1820[4] = 
{
	CapacityIncreaseMode_t1969140739::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (Utils_t2524017187), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1822[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (ColorWrapper_t39741192)+ sizeof (Il2CppObject), sizeof(ColorWrapper_t39741192 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1823[1] = 
{
	ColorWrapper_t39741192::get_offset_of_value_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (QuaternionWrapper_t1669027135)+ sizeof (Il2CppObject), sizeof(QuaternionWrapper_t1669027135 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1824[1] = 
{
	QuaternionWrapper_t1669027135::get_offset_of_value_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (Vector2Wrapper_t3491509036)+ sizeof (Il2CppObject), sizeof(Vector2Wrapper_t3491509036 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1825[1] = 
{
	Vector2Wrapper_t3491509036::get_offset_of_value_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (Vector3Wrapper_t3491263821)+ sizeof (Il2CppObject), sizeof(Vector3Wrapper_t3491263821 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1826[1] = 
{
	Vector3Wrapper_t3491263821::get_offset_of_value_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (Vector4Wrapper_t3491445738)+ sizeof (Il2CppObject), sizeof(Vector4Wrapper_t3491445738 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1827[1] = 
{
	Vector4Wrapper_t3491445738::get_offset_of_value_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (FilterType_t1425068526)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1828[6] = 
{
	FilterType_t1425068526::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (OperationType_t2600045009)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1829[14] = 
{
	OperationType_t2600045009::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (SpecialStartupMode_t1501334721)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1830[6] = 
{
	SpecialStartupMode_t1501334721::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (UpdateNotice_t2468589887)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1831[3] = 
{
	UpdateNotice_t2468589887::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { sizeof (UpdateMode_t2539919096)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1832[4] = 
{
	UpdateMode_t2539919096::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { sizeof (Bounce_t3273339050), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { sizeof (EaseManager_t1514337917), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1834[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { sizeof (U3CU3Ec_t1609106043), -1, sizeof(U3CU3Ec_t1609106043_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1835[37] = 
{
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_0_1(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_1_2(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_2_3(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_3_4(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_4_5(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_5_6(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_6_7(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_7_8(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_8_9(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_9_10(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_10_11(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_11_12(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_12_13(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_13_14(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_14_15(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_15_16(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_16_17(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_17_18(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_18_19(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_19_20(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_20_21(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_21_22(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_22_23(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_23_24(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_24_25(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_25_26(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_26_27(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_27_28(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_28_29(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_29_30(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_30_31(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_31_32(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_32_33(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_33_34(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_34_35(),
	U3CU3Ec_t1609106043_StaticFields::get_offset_of_U3CU3E9__4_35_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (EaseCurve_t1295352409), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1836[1] = 
{
	EaseCurve_t1295352409::get_offset_of__animCurve_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (Flash_t1282698556), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { sizeof (U3CPrivateImplementationDetailsU3E_t1486305141), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1838[4] = 
{
	U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields::get_offset_of_U36F98278EFCD257898AD01BE39D1D0AEFB78FC551_0(),
	U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields::get_offset_of_U38C4C6C4E493EC2BEEF5F6F6A9C4472C13BED42E8_1(),
	U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields::get_offset_of_U39DC5F4D0A1418B4EC71B22D21E93D134922FA735_2(),
	U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields::get_offset_of_FD0BD55CDDDFD0B323012A45F83437763AF58952_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { sizeof (__StaticArrayInitTypeSizeU3D20_t978476011)+ sizeof (Il2CppObject), sizeof(__StaticArrayInitTypeSizeU3D20_t978476011 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (__StaticArrayInitTypeSizeU3D50_t3707359366)+ sizeof (Il2CppObject), sizeof(__StaticArrayInitTypeSizeU3D50_t3707359366 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1841 = { sizeof (__StaticArrayInitTypeSizeU3D120_t1468992140)+ sizeof (Il2CppObject), sizeof(__StaticArrayInitTypeSizeU3D120_t1468992140 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1842 = { sizeof (U3CModuleU3E_t3783534220), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1843 = { sizeof (EventHandle_t942672932)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1843[3] = 
{
	EventHandle_t942672932::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1844 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1845 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1846 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1847 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1848 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1849 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1850 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1851 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1852 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1853 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1854 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1855 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1856 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1857 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1858 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1859 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1860 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1861 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1862 = { sizeof (EventSystem_t3466835263), -1, sizeof(EventSystem_t3466835263_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1862[12] = 
{
	EventSystem_t3466835263::get_offset_of_m_SystemInputModules_2(),
	EventSystem_t3466835263::get_offset_of_m_CurrentInputModule_3(),
	EventSystem_t3466835263_StaticFields::get_offset_of_U3CcurrentU3Ek__BackingField_4(),
	EventSystem_t3466835263::get_offset_of_m_FirstSelected_5(),
	EventSystem_t3466835263::get_offset_of_m_sendNavigationEvents_6(),
	EventSystem_t3466835263::get_offset_of_m_DragThreshold_7(),
	EventSystem_t3466835263::get_offset_of_m_CurrentSelected_8(),
	EventSystem_t3466835263::get_offset_of_m_Paused_9(),
	EventSystem_t3466835263::get_offset_of_m_SelectionGuard_10(),
	EventSystem_t3466835263::get_offset_of_m_DummyData_11(),
	EventSystem_t3466835263_StaticFields::get_offset_of_s_RaycastComparer_12(),
	EventSystem_t3466835263_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1863 = { sizeof (EventTrigger_t1967201810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1863[2] = 
{
	EventTrigger_t1967201810::get_offset_of_m_Delegates_2(),
	EventTrigger_t1967201810::get_offset_of_delegates_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1864 = { sizeof (TriggerEvent_t3959312622), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1865 = { sizeof (Entry_t3365010046), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1865[2] = 
{
	Entry_t3365010046::get_offset_of_eventID_0(),
	Entry_t3365010046::get_offset_of_callback_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1866 = { sizeof (EventTriggerType_t2524067914)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1866[18] = 
{
	EventTriggerType_t2524067914::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1867 = { sizeof (ExecuteEvents_t1693084770), -1, sizeof(ExecuteEvents_t1693084770_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1867[36] = 
{
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_PointerEnterHandler_0(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_PointerExitHandler_1(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_PointerDownHandler_2(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_PointerUpHandler_3(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_PointerClickHandler_4(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_InitializePotentialDragHandler_5(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_BeginDragHandler_6(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_DragHandler_7(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_EndDragHandler_8(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_DropHandler_9(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_ScrollHandler_10(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_UpdateSelectedHandler_11(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_SelectHandler_12(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_DeselectHandler_13(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_MoveHandler_14(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_SubmitHandler_15(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_CancelHandler_16(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_HandlerListPool_17(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_s_InternalTransformList_18(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_19(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_20(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_21(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_22(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_23(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5_24(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6_25(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7_26(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cache8_27(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cache9_28(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA_29(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB_30(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheC_31(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheD_32(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheE_33(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheF_34(),
	ExecuteEvents_t1693084770_StaticFields::get_offset_of_U3CU3Ef__mgU24cache10_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1868 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1869 = { sizeof (MoveDirection_t1406276862)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1869[6] = 
{
	MoveDirection_t1406276862::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1870 = { sizeof (RaycasterManager_t3179336627), -1, sizeof(RaycasterManager_t3179336627_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1870[1] = 
{
	RaycasterManager_t3179336627_StaticFields::get_offset_of_s_Raycasters_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1871 = { sizeof (RaycastResult_t21186376)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1871[10] = 
{
	RaycastResult_t21186376::get_offset_of_m_GameObject_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RaycastResult_t21186376::get_offset_of_module_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RaycastResult_t21186376::get_offset_of_distance_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RaycastResult_t21186376::get_offset_of_index_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RaycastResult_t21186376::get_offset_of_depth_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RaycastResult_t21186376::get_offset_of_sortingLayer_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RaycastResult_t21186376::get_offset_of_sortingOrder_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RaycastResult_t21186376::get_offset_of_worldPosition_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RaycastResult_t21186376::get_offset_of_worldNormal_8() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RaycastResult_t21186376::get_offset_of_screenPosition_9() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1872 = { sizeof (UIBehaviour_t3960014691), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1873 = { sizeof (AxisEventData_t1524870173), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1873[2] = 
{
	AxisEventData_t1524870173::get_offset_of_U3CmoveVectorU3Ek__BackingField_2(),
	AxisEventData_t1524870173::get_offset_of_U3CmoveDirU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1874 = { sizeof (AbstractEventData_t1333959294), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1874[1] = 
{
	AbstractEventData_t1333959294::get_offset_of_m_Used_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1875 = { sizeof (BaseEventData_t2681005625), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1875[1] = 
{
	BaseEventData_t2681005625::get_offset_of_m_EventSystem_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1876 = { sizeof (PointerEventData_t1599784723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1876[21] = 
{
	PointerEventData_t1599784723::get_offset_of_U3CpointerEnterU3Ek__BackingField_2(),
	PointerEventData_t1599784723::get_offset_of_m_PointerPress_3(),
	PointerEventData_t1599784723::get_offset_of_U3ClastPressU3Ek__BackingField_4(),
	PointerEventData_t1599784723::get_offset_of_U3CrawPointerPressU3Ek__BackingField_5(),
	PointerEventData_t1599784723::get_offset_of_U3CpointerDragU3Ek__BackingField_6(),
	PointerEventData_t1599784723::get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7(),
	PointerEventData_t1599784723::get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8(),
	PointerEventData_t1599784723::get_offset_of_hovered_9(),
	PointerEventData_t1599784723::get_offset_of_U3CeligibleForClickU3Ek__BackingField_10(),
	PointerEventData_t1599784723::get_offset_of_U3CpointerIdU3Ek__BackingField_11(),
	PointerEventData_t1599784723::get_offset_of_U3CpositionU3Ek__BackingField_12(),
	PointerEventData_t1599784723::get_offset_of_U3CdeltaU3Ek__BackingField_13(),
	PointerEventData_t1599784723::get_offset_of_U3CpressPositionU3Ek__BackingField_14(),
	PointerEventData_t1599784723::get_offset_of_U3CworldPositionU3Ek__BackingField_15(),
	PointerEventData_t1599784723::get_offset_of_U3CworldNormalU3Ek__BackingField_16(),
	PointerEventData_t1599784723::get_offset_of_U3CclickTimeU3Ek__BackingField_17(),
	PointerEventData_t1599784723::get_offset_of_U3CclickCountU3Ek__BackingField_18(),
	PointerEventData_t1599784723::get_offset_of_U3CscrollDeltaU3Ek__BackingField_19(),
	PointerEventData_t1599784723::get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20(),
	PointerEventData_t1599784723::get_offset_of_U3CdraggingU3Ek__BackingField_21(),
	PointerEventData_t1599784723::get_offset_of_U3CbuttonU3Ek__BackingField_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1877 = { sizeof (InputButton_t2981963041)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1877[4] = 
{
	InputButton_t2981963041::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1878 = { sizeof (FramePressState_t1414739712)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1878[5] = 
{
	FramePressState_t1414739712::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1879 = { sizeof (BaseInput_t621514313), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1880 = { sizeof (BaseInputModule_t1295781545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1880[6] = 
{
	BaseInputModule_t1295781545::get_offset_of_m_RaycastResultCache_2(),
	BaseInputModule_t1295781545::get_offset_of_m_AxisEventData_3(),
	BaseInputModule_t1295781545::get_offset_of_m_EventSystem_4(),
	BaseInputModule_t1295781545::get_offset_of_m_BaseEventData_5(),
	BaseInputModule_t1295781545::get_offset_of_m_InputOverride_6(),
	BaseInputModule_t1295781545::get_offset_of_m_DefaultInput_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1881 = { sizeof (PointerInputModule_t1441575871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1881[6] = 
{
	0,
	0,
	0,
	0,
	PointerInputModule_t1441575871::get_offset_of_m_PointerData_12(),
	PointerInputModule_t1441575871::get_offset_of_m_MouseState_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1882 = { sizeof (ButtonState_t2688375492), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1882[2] = 
{
	ButtonState_t2688375492::get_offset_of_m_Button_0(),
	ButtonState_t2688375492::get_offset_of_m_EventData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1883 = { sizeof (MouseState_t3572864619), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1883[1] = 
{
	MouseState_t3572864619::get_offset_of_m_TrackedButtons_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1884 = { sizeof (MouseButtonEventData_t3709210170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1884[2] = 
{
	MouseButtonEventData_t3709210170::get_offset_of_buttonState_0(),
	MouseButtonEventData_t3709210170::get_offset_of_buttonData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1885 = { sizeof (StandaloneInputModule_t70867863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1885[13] = 
{
	StandaloneInputModule_t70867863::get_offset_of_m_PrevActionTime_14(),
	StandaloneInputModule_t70867863::get_offset_of_m_LastMoveVector_15(),
	StandaloneInputModule_t70867863::get_offset_of_m_ConsecutiveMoveCount_16(),
	StandaloneInputModule_t70867863::get_offset_of_m_LastMousePosition_17(),
	StandaloneInputModule_t70867863::get_offset_of_m_MousePosition_18(),
	StandaloneInputModule_t70867863::get_offset_of_m_CurrentFocusedGameObject_19(),
	StandaloneInputModule_t70867863::get_offset_of_m_HorizontalAxis_20(),
	StandaloneInputModule_t70867863::get_offset_of_m_VerticalAxis_21(),
	StandaloneInputModule_t70867863::get_offset_of_m_SubmitButton_22(),
	StandaloneInputModule_t70867863::get_offset_of_m_CancelButton_23(),
	StandaloneInputModule_t70867863::get_offset_of_m_InputActionsPerSecond_24(),
	StandaloneInputModule_t70867863::get_offset_of_m_RepeatDelay_25(),
	StandaloneInputModule_t70867863::get_offset_of_m_ForceModuleActive_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1886 = { sizeof (InputMode_t2680906638)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1886[3] = 
{
	InputMode_t2680906638::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1887 = { sizeof (TouchInputModule_t2561058385), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1887[3] = 
{
	TouchInputModule_t2561058385::get_offset_of_m_LastMousePosition_14(),
	TouchInputModule_t2561058385::get_offset_of_m_MousePosition_15(),
	TouchInputModule_t2561058385::get_offset_of_m_ForceModuleActive_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1888 = { sizeof (BaseRaycaster_t2336171397), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1889 = { sizeof (Physics2DRaycaster_t3236822917), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1890 = { sizeof (PhysicsRaycaster_t249603239), -1, sizeof(PhysicsRaycaster_t249603239_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1890[4] = 
{
	0,
	PhysicsRaycaster_t249603239::get_offset_of_m_EventCamera_3(),
	PhysicsRaycaster_t249603239::get_offset_of_m_EventMask_4(),
	PhysicsRaycaster_t249603239_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1891 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1892 = { sizeof (ColorTween_t3438117476)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1892[6] = 
{
	ColorTween_t3438117476::get_offset_of_m_Target_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ColorTween_t3438117476::get_offset_of_m_StartColor_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ColorTween_t3438117476::get_offset_of_m_TargetColor_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ColorTween_t3438117476::get_offset_of_m_TweenMode_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ColorTween_t3438117476::get_offset_of_m_Duration_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ColorTween_t3438117476::get_offset_of_m_IgnoreTimeScale_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1893 = { sizeof (ColorTweenMode_t1328781136)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1893[4] = 
{
	ColorTweenMode_t1328781136::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1894 = { sizeof (ColorTweenCallback_t3293839588), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1895 = { sizeof (FloatTween_t2986189219)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1895[5] = 
{
	FloatTween_t2986189219::get_offset_of_m_Target_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	FloatTween_t2986189219::get_offset_of_m_StartValue_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	FloatTween_t2986189219::get_offset_of_m_TargetValue_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	FloatTween_t2986189219::get_offset_of_m_Duration_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	FloatTween_t2986189219::get_offset_of_m_IgnoreTimeScale_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1896 = { sizeof (FloatTweenCallback_t2824271922), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1897 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1897[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1898 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1898[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1899 = { sizeof (AnimationTriggers_t3244928895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1899[8] = 
{
	0,
	0,
	0,
	0,
	AnimationTriggers_t3244928895::get_offset_of_m_NormalTrigger_4(),
	AnimationTriggers_t3244928895::get_offset_of_m_HighlightedTrigger_5(),
	AnimationTriggers_t3244928895::get_offset_of_m_PressedTrigger_6(),
	AnimationTriggers_t3244928895::get_offset_of_m_DisabledTrigger_7(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
