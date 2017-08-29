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
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t3730071912;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t2859985451;
// System.String
struct String_t;
// TMPro.Examples.ShaderPropAnimator
struct ShaderPropAnimator_t3327056230;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1315497690;
// TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0
struct U3CAnimateVertexColorsU3Ec__Iterator0_t840739842;
// TMPro.Examples.TeleType
struct TeleType_t2190958428;
// TMPro.TMP_Text
struct TMP_Text_t717617228;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t842977478;
// TMPro.Examples.TextConsoleSimulator
struct TextConsoleSimulator_t2416547963;
// System.Void
struct Void_t442090261;
// System.Char[]
struct CharU5BU5D_t3090594554;
// System.Object[]
struct ObjectU5BU5D_t136843628;
// UnityEngine.AnimationCurve
struct AnimationCurve_t1171892010;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t2511409059;
// TMPro.Examples.WarpTextExample
struct WarpTextExample_t826099379;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t130199721;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t446198254;
// TMPro.Examples.VertexZoom
struct VertexZoom_t1781881840;
// TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0/<AnimateVertexColors>c__AnonStorey1
struct U3CAnimateVertexColorsU3Ec__AnonStorey1_t115028000;
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_t864781938;
// TMPro.Examples.VertexShakeB
struct VertexShakeB_t1391118062;
// TMPro.Examples.VertexShakeA
struct VertexShakeA_t1278660418;
// TMPro.Examples.VertexJitter/VertexAnim[]
struct VertexAnimU5BU5D_t1995670284;
// TMPro.Examples.VertexJitter
struct VertexJitter_t1068353994;
// UnityEngine.Color32[]
struct Color32U5BU5D_t233041318;
// TMPro.Examples.VertexColorCycler
struct VertexColorCycler_t1654838429;
// TMPro.Examples.TextMeshProFloatingText
struct TextMeshProFloatingText_t2820266173;
// TMPro.Examples.SkewTextExample
struct SkewTextExample_t1573568503;
// UnityEngine.Font
struct Font_t2702488509;
// UnityEngine.GameObject
struct GameObject_t3418992616;
// TMPro.TextMeshPro
struct TextMeshPro_t2730025418;
// UnityEngine.TextMesh
struct TextMesh_t2724438670;
// UnityEngine.Transform
struct Transform_t1635685313;
// UnityEngine.Renderer
struct Renderer_t4098088352;
// UnityEngine.Material
struct Material_t2831551705;
// UnityEngine.Camera
struct Camera_t614277760;
// TMPro.TMP_TextEventHandler
struct TMP_TextEventHandler_t3534282063;
// TMPro.TMP_TextEventHandler/CharacterSelectionEvent
struct CharacterSelectionEvent_t3393545884;
// TMPro.TMP_TextEventHandler/WordSelectionEvent
struct WordSelectionEvent_t1451953395;
// TMPro.TMP_TextEventHandler/LineSelectionEvent
struct LineSelectionEvent_t2932876682;
// TMPro.TMP_TextEventHandler/LinkSelectionEvent
struct LinkSelectionEvent_t526171622;
// UnityEngine.Canvas
struct Canvas_t26857931;
// TMPro.TextContainer
struct TextContainer_t398000997;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t3883666365;
// UnityEngine.RectTransform
struct RectTransform_t1293310661;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef UNITYEVENTBASE_T3155819061_H
#define UNITYEVENTBASE_T3155819061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3155819061  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t3730071912 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t2859985451 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3155819061, ___m_Calls_0)); }
	inline InvokableCallList_t3730071912 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t3730071912 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t3730071912 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3155819061, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t2859985451 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t2859985451 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t2859985451 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3155819061, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3155819061, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3155819061_H
#ifndef U3CANIMATEPROPERTIESU3EC__ITERATOR0_T334717826_H
#define U3CANIMATEPROPERTIESU3EC__ITERATOR0_T334717826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.ShaderPropAnimator/<AnimateProperties>c__Iterator0
struct  U3CAnimatePropertiesU3Ec__Iterator0_t334717826  : public RuntimeObject
{
public:
	// System.Single TMPro.Examples.ShaderPropAnimator/<AnimateProperties>c__Iterator0::<glowPower>__1
	float ___U3CglowPowerU3E__1_0;
	// TMPro.Examples.ShaderPropAnimator TMPro.Examples.ShaderPropAnimator/<AnimateProperties>c__Iterator0::$this
	ShaderPropAnimator_t3327056230 * ___U24this_1;
	// System.Object TMPro.Examples.ShaderPropAnimator/<AnimateProperties>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean TMPro.Examples.ShaderPropAnimator/<AnimateProperties>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 TMPro.Examples.ShaderPropAnimator/<AnimateProperties>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CglowPowerU3E__1_0() { return static_cast<int32_t>(offsetof(U3CAnimatePropertiesU3Ec__Iterator0_t334717826, ___U3CglowPowerU3E__1_0)); }
	inline float get_U3CglowPowerU3E__1_0() const { return ___U3CglowPowerU3E__1_0; }
	inline float* get_address_of_U3CglowPowerU3E__1_0() { return &___U3CglowPowerU3E__1_0; }
	inline void set_U3CglowPowerU3E__1_0(float value)
	{
		___U3CglowPowerU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CAnimatePropertiesU3Ec__Iterator0_t334717826, ___U24this_1)); }
	inline ShaderPropAnimator_t3327056230 * get_U24this_1() const { return ___U24this_1; }
	inline ShaderPropAnimator_t3327056230 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(ShaderPropAnimator_t3327056230 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CAnimatePropertiesU3Ec__Iterator0_t334717826, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CAnimatePropertiesU3Ec__Iterator0_t334717826, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CAnimatePropertiesU3Ec__Iterator0_t334717826, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CANIMATEPROPERTIESU3EC__ITERATOR0_T334717826_H
#ifndef VALUETYPE_T4252207256_H
#define VALUETYPE_T4252207256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4252207256  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4252207256_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4252207256_marshaled_com
{
};
#endif // VALUETYPE_T4252207256_H
#ifndef U3CANIMATEVERTEXCOLORSU3EC__ANONSTOREY1_T115028000_H
#define U3CANIMATEVERTEXCOLORSU3EC__ANONSTOREY1_T115028000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0/<AnimateVertexColors>c__AnonStorey1
struct  U3CAnimateVertexColorsU3Ec__AnonStorey1_t115028000  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Single> TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0/<AnimateVertexColors>c__AnonStorey1::modifiedCharScale
	List_1_t1315497690 * ___modifiedCharScale_0;
	// TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0 TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0/<AnimateVertexColors>c__AnonStorey1::<>f__ref$0
	U3CAnimateVertexColorsU3Ec__Iterator0_t840739842 * ___U3CU3Ef__refU240_1;

public:
	inline static int32_t get_offset_of_modifiedCharScale_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__AnonStorey1_t115028000, ___modifiedCharScale_0)); }
	inline List_1_t1315497690 * get_modifiedCharScale_0() const { return ___modifiedCharScale_0; }
	inline List_1_t1315497690 ** get_address_of_modifiedCharScale_0() { return &___modifiedCharScale_0; }
	inline void set_modifiedCharScale_0(List_1_t1315497690 * value)
	{
		___modifiedCharScale_0 = value;
		Il2CppCodeGenWriteBarrier((&___modifiedCharScale_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU240_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__AnonStorey1_t115028000, ___U3CU3Ef__refU240_1)); }
	inline U3CAnimateVertexColorsU3Ec__Iterator0_t840739842 * get_U3CU3Ef__refU240_1() const { return ___U3CU3Ef__refU240_1; }
	inline U3CAnimateVertexColorsU3Ec__Iterator0_t840739842 ** get_address_of_U3CU3Ef__refU240_1() { return &___U3CU3Ef__refU240_1; }
	inline void set_U3CU3Ef__refU240_1(U3CAnimateVertexColorsU3Ec__Iterator0_t840739842 * value)
	{
		___U3CU3Ef__refU240_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU240_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CANIMATEVERTEXCOLORSU3EC__ANONSTOREY1_T115028000_H
#ifndef U3CSTARTU3EC__ITERATOR0_T972236035_H
#define U3CSTARTU3EC__ITERATOR0_T972236035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TeleType/<Start>c__Iterator0
struct  U3CStartU3Ec__Iterator0_t972236035  : public RuntimeObject
{
public:
	// System.Int32 TMPro.Examples.TeleType/<Start>c__Iterator0::<totalVisibleCharacters>__0
	int32_t ___U3CtotalVisibleCharactersU3E__0_0;
	// System.Int32 TMPro.Examples.TeleType/<Start>c__Iterator0::<counter>__0
	int32_t ___U3CcounterU3E__0_1;
	// System.Int32 TMPro.Examples.TeleType/<Start>c__Iterator0::<visibleCount>__0
	int32_t ___U3CvisibleCountU3E__0_2;
	// TMPro.Examples.TeleType TMPro.Examples.TeleType/<Start>c__Iterator0::$this
	TeleType_t2190958428 * ___U24this_3;
	// System.Object TMPro.Examples.TeleType/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean TMPro.Examples.TeleType/<Start>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 TMPro.Examples.TeleType/<Start>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CtotalVisibleCharactersU3E__0_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t972236035, ___U3CtotalVisibleCharactersU3E__0_0)); }
	inline int32_t get_U3CtotalVisibleCharactersU3E__0_0() const { return ___U3CtotalVisibleCharactersU3E__0_0; }
	inline int32_t* get_address_of_U3CtotalVisibleCharactersU3E__0_0() { return &___U3CtotalVisibleCharactersU3E__0_0; }
	inline void set_U3CtotalVisibleCharactersU3E__0_0(int32_t value)
	{
		___U3CtotalVisibleCharactersU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CcounterU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t972236035, ___U3CcounterU3E__0_1)); }
	inline int32_t get_U3CcounterU3E__0_1() const { return ___U3CcounterU3E__0_1; }
	inline int32_t* get_address_of_U3CcounterU3E__0_1() { return &___U3CcounterU3E__0_1; }
	inline void set_U3CcounterU3E__0_1(int32_t value)
	{
		___U3CcounterU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CvisibleCountU3E__0_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t972236035, ___U3CvisibleCountU3E__0_2)); }
	inline int32_t get_U3CvisibleCountU3E__0_2() const { return ___U3CvisibleCountU3E__0_2; }
	inline int32_t* get_address_of_U3CvisibleCountU3E__0_2() { return &___U3CvisibleCountU3E__0_2; }
	inline void set_U3CvisibleCountU3E__0_2(int32_t value)
	{
		___U3CvisibleCountU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t972236035, ___U24this_3)); }
	inline TeleType_t2190958428 * get_U24this_3() const { return ___U24this_3; }
	inline TeleType_t2190958428 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(TeleType_t2190958428 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t972236035, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t972236035, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t972236035, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T972236035_H
#ifndef U3CREVEALCHARACTERSU3EC__ITERATOR0_T3808268575_H
#define U3CREVEALCHARACTERSU3EC__ITERATOR0_T3808268575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TextConsoleSimulator/<RevealCharacters>c__Iterator0
struct  U3CRevealCharactersU3Ec__Iterator0_t3808268575  : public RuntimeObject
{
public:
	// TMPro.TMP_Text TMPro.Examples.TextConsoleSimulator/<RevealCharacters>c__Iterator0::textComponent
	TMP_Text_t717617228 * ___textComponent_0;
	// TMPro.TMP_TextInfo TMPro.Examples.TextConsoleSimulator/<RevealCharacters>c__Iterator0::<textInfo>__0
	TMP_TextInfo_t842977478 * ___U3CtextInfoU3E__0_1;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealCharacters>c__Iterator0::<totalVisibleCharacters>__0
	int32_t ___U3CtotalVisibleCharactersU3E__0_2;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealCharacters>c__Iterator0::<visibleCount>__0
	int32_t ___U3CvisibleCountU3E__0_3;
	// TMPro.Examples.TextConsoleSimulator TMPro.Examples.TextConsoleSimulator/<RevealCharacters>c__Iterator0::$this
	TextConsoleSimulator_t2416547963 * ___U24this_4;
	// System.Object TMPro.Examples.TextConsoleSimulator/<RevealCharacters>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean TMPro.Examples.TextConsoleSimulator/<RevealCharacters>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealCharacters>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_textComponent_0() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ec__Iterator0_t3808268575, ___textComponent_0)); }
	inline TMP_Text_t717617228 * get_textComponent_0() const { return ___textComponent_0; }
	inline TMP_Text_t717617228 ** get_address_of_textComponent_0() { return &___textComponent_0; }
	inline void set_textComponent_0(TMP_Text_t717617228 * value)
	{
		___textComponent_0 = value;
		Il2CppCodeGenWriteBarrier((&___textComponent_0), value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E__0_1() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ec__Iterator0_t3808268575, ___U3CtextInfoU3E__0_1)); }
	inline TMP_TextInfo_t842977478 * get_U3CtextInfoU3E__0_1() const { return ___U3CtextInfoU3E__0_1; }
	inline TMP_TextInfo_t842977478 ** get_address_of_U3CtextInfoU3E__0_1() { return &___U3CtextInfoU3E__0_1; }
	inline void set_U3CtextInfoU3E__0_1(TMP_TextInfo_t842977478 * value)
	{
		___U3CtextInfoU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtextInfoU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CtotalVisibleCharactersU3E__0_2() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ec__Iterator0_t3808268575, ___U3CtotalVisibleCharactersU3E__0_2)); }
	inline int32_t get_U3CtotalVisibleCharactersU3E__0_2() const { return ___U3CtotalVisibleCharactersU3E__0_2; }
	inline int32_t* get_address_of_U3CtotalVisibleCharactersU3E__0_2() { return &___U3CtotalVisibleCharactersU3E__0_2; }
	inline void set_U3CtotalVisibleCharactersU3E__0_2(int32_t value)
	{
		___U3CtotalVisibleCharactersU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CvisibleCountU3E__0_3() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ec__Iterator0_t3808268575, ___U3CvisibleCountU3E__0_3)); }
	inline int32_t get_U3CvisibleCountU3E__0_3() const { return ___U3CvisibleCountU3E__0_3; }
	inline int32_t* get_address_of_U3CvisibleCountU3E__0_3() { return &___U3CvisibleCountU3E__0_3; }
	inline void set_U3CvisibleCountU3E__0_3(int32_t value)
	{
		___U3CvisibleCountU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ec__Iterator0_t3808268575, ___U24this_4)); }
	inline TextConsoleSimulator_t2416547963 * get_U24this_4() const { return ___U24this_4; }
	inline TextConsoleSimulator_t2416547963 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(TextConsoleSimulator_t2416547963 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ec__Iterator0_t3808268575, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ec__Iterator0_t3808268575, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CRevealCharactersU3Ec__Iterator0_t3808268575, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREVEALCHARACTERSU3EC__ITERATOR0_T3808268575_H
#ifndef U3CREVEALWORDSU3EC__ITERATOR1_T856750721_H
#define U3CREVEALWORDSU3EC__ITERATOR1_T856750721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TextConsoleSimulator/<RevealWords>c__Iterator1
struct  U3CRevealWordsU3Ec__Iterator1_t856750721  : public RuntimeObject
{
public:
	// TMPro.TMP_Text TMPro.Examples.TextConsoleSimulator/<RevealWords>c__Iterator1::textComponent
	TMP_Text_t717617228 * ___textComponent_0;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealWords>c__Iterator1::<totalWordCount>__0
	int32_t ___U3CtotalWordCountU3E__0_1;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealWords>c__Iterator1::<totalVisibleCharacters>__0
	int32_t ___U3CtotalVisibleCharactersU3E__0_2;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealWords>c__Iterator1::<counter>__0
	int32_t ___U3CcounterU3E__0_3;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealWords>c__Iterator1::<currentWord>__0
	int32_t ___U3CcurrentWordU3E__0_4;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealWords>c__Iterator1::<visibleCount>__0
	int32_t ___U3CvisibleCountU3E__0_5;
	// System.Object TMPro.Examples.TextConsoleSimulator/<RevealWords>c__Iterator1::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean TMPro.Examples.TextConsoleSimulator/<RevealWords>c__Iterator1::$disposing
	bool ___U24disposing_7;
	// System.Int32 TMPro.Examples.TextConsoleSimulator/<RevealWords>c__Iterator1::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_textComponent_0() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ec__Iterator1_t856750721, ___textComponent_0)); }
	inline TMP_Text_t717617228 * get_textComponent_0() const { return ___textComponent_0; }
	inline TMP_Text_t717617228 ** get_address_of_textComponent_0() { return &___textComponent_0; }
	inline void set_textComponent_0(TMP_Text_t717617228 * value)
	{
		___textComponent_0 = value;
		Il2CppCodeGenWriteBarrier((&___textComponent_0), value);
	}

	inline static int32_t get_offset_of_U3CtotalWordCountU3E__0_1() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ec__Iterator1_t856750721, ___U3CtotalWordCountU3E__0_1)); }
	inline int32_t get_U3CtotalWordCountU3E__0_1() const { return ___U3CtotalWordCountU3E__0_1; }
	inline int32_t* get_address_of_U3CtotalWordCountU3E__0_1() { return &___U3CtotalWordCountU3E__0_1; }
	inline void set_U3CtotalWordCountU3E__0_1(int32_t value)
	{
		___U3CtotalWordCountU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CtotalVisibleCharactersU3E__0_2() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ec__Iterator1_t856750721, ___U3CtotalVisibleCharactersU3E__0_2)); }
	inline int32_t get_U3CtotalVisibleCharactersU3E__0_2() const { return ___U3CtotalVisibleCharactersU3E__0_2; }
	inline int32_t* get_address_of_U3CtotalVisibleCharactersU3E__0_2() { return &___U3CtotalVisibleCharactersU3E__0_2; }
	inline void set_U3CtotalVisibleCharactersU3E__0_2(int32_t value)
	{
		___U3CtotalVisibleCharactersU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CcounterU3E__0_3() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ec__Iterator1_t856750721, ___U3CcounterU3E__0_3)); }
	inline int32_t get_U3CcounterU3E__0_3() const { return ___U3CcounterU3E__0_3; }
	inline int32_t* get_address_of_U3CcounterU3E__0_3() { return &___U3CcounterU3E__0_3; }
	inline void set_U3CcounterU3E__0_3(int32_t value)
	{
		___U3CcounterU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentWordU3E__0_4() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ec__Iterator1_t856750721, ___U3CcurrentWordU3E__0_4)); }
	inline int32_t get_U3CcurrentWordU3E__0_4() const { return ___U3CcurrentWordU3E__0_4; }
	inline int32_t* get_address_of_U3CcurrentWordU3E__0_4() { return &___U3CcurrentWordU3E__0_4; }
	inline void set_U3CcurrentWordU3E__0_4(int32_t value)
	{
		___U3CcurrentWordU3E__0_4 = value;
	}

	inline static int32_t get_offset_of_U3CvisibleCountU3E__0_5() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ec__Iterator1_t856750721, ___U3CvisibleCountU3E__0_5)); }
	inline int32_t get_U3CvisibleCountU3E__0_5() const { return ___U3CvisibleCountU3E__0_5; }
	inline int32_t* get_address_of_U3CvisibleCountU3E__0_5() { return &___U3CvisibleCountU3E__0_5; }
	inline void set_U3CvisibleCountU3E__0_5(int32_t value)
	{
		___U3CvisibleCountU3E__0_5 = value;
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ec__Iterator1_t856750721, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ec__Iterator1_t856750721, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CRevealWordsU3Ec__Iterator1_t856750721, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREVEALWORDSU3EC__ITERATOR1_T856750721_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VERTEXANIM_T1779064721_H
#define VERTEXANIM_T1779064721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.VertexJitter/VertexAnim
struct  VertexAnim_t1779064721 
{
public:
	// System.Single TMPro.Examples.VertexJitter/VertexAnim::angleRange
	float ___angleRange_0;
	// System.Single TMPro.Examples.VertexJitter/VertexAnim::angle
	float ___angle_1;
	// System.Single TMPro.Examples.VertexJitter/VertexAnim::speed
	float ___speed_2;

public:
	inline static int32_t get_offset_of_angleRange_0() { return static_cast<int32_t>(offsetof(VertexAnim_t1779064721, ___angleRange_0)); }
	inline float get_angleRange_0() const { return ___angleRange_0; }
	inline float* get_address_of_angleRange_0() { return &___angleRange_0; }
	inline void set_angleRange_0(float value)
	{
		___angleRange_0 = value;
	}

	inline static int32_t get_offset_of_angle_1() { return static_cast<int32_t>(offsetof(VertexAnim_t1779064721, ___angle_1)); }
	inline float get_angle_1() const { return ___angle_1; }
	inline float* get_address_of_angle_1() { return &___angle_1; }
	inline void set_angle_1(float value)
	{
		___angle_1 = value;
	}

	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(VertexAnim_t1779064721, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXANIM_T1779064721_H
#ifndef ENUM_T232662193_H
#define ENUM_T232662193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t232662193  : public ValueType_t4252207256
{
public:

public:
};

struct Enum_t232662193_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3090594554* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t232662193_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3090594554* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3090594554** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3090594554* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t232662193_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t232662193_marshaled_com
{
};
#endif // ENUM_T232662193_H
#ifndef MATRIX4X4_T887572436_H
#define MATRIX4X4_T887572436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t887572436 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t887572436_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t887572436  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t887572436  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t887572436  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t887572436 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t887572436  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t887572436_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t887572436  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t887572436 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t887572436  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T887572436_H
#ifndef VECTOR3_T810140550_H
#define VECTOR3_T810140550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t810140550 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t810140550, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t810140550, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t810140550, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t810140550_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t810140550  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t810140550  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t810140550  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t810140550  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t810140550  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t810140550  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t810140550  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t810140550  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t810140550  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t810140550  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t810140550_StaticFields, ___zeroVector_4)); }
	inline Vector3_t810140550  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t810140550 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t810140550  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t810140550_StaticFields, ___oneVector_5)); }
	inline Vector3_t810140550  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t810140550 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t810140550  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t810140550_StaticFields, ___upVector_6)); }
	inline Vector3_t810140550  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t810140550 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t810140550  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t810140550_StaticFields, ___downVector_7)); }
	inline Vector3_t810140550  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t810140550 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t810140550  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t810140550_StaticFields, ___leftVector_8)); }
	inline Vector3_t810140550  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t810140550 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t810140550  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t810140550_StaticFields, ___rightVector_9)); }
	inline Vector3_t810140550  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t810140550 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t810140550  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t810140550_StaticFields, ___forwardVector_10)); }
	inline Vector3_t810140550  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t810140550 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t810140550  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t810140550_StaticFields, ___backVector_11)); }
	inline Vector3_t810140550  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t810140550 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t810140550  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t810140550_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t810140550  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t810140550 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t810140550  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t810140550_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t810140550  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t810140550 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t810140550  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T810140550_H
#ifndef QUATERNION_T18359934_H
#define QUATERNION_T18359934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t18359934 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t18359934, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t18359934, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t18359934, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t18359934, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t18359934_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t18359934  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t18359934_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t18359934  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t18359934 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t18359934  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T18359934_H
#ifndef COLOR32_T4068301183_H
#define COLOR32_T4068301183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t4068301183 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t4068301183, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t4068301183, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t4068301183, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t4068301183, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T4068301183_H
#ifndef UNITYEVENT_2_T928746861_H
#define UNITYEVENT_2_T928746861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>
struct  UnityEvent_2_t928746861  : public UnityEventBase_t3155819061
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t136843628* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t928746861, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t136843628* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t136843628** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t136843628* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T928746861_H
#ifndef UNITYEVENT_3_T2502555392_H
#define UNITYEVENT_3_T2502555392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct  UnityEvent_3_t2502555392  : public UnityEventBase_t3155819061
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t136843628* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t2502555392, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t136843628* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t136843628** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t136843628* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_3_T2502555392_H
#ifndef UNITYEVENT_3_T2250828913_H
#define UNITYEVENT_3_T2250828913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>
struct  UnityEvent_3_t2250828913  : public UnityEventBase_t3155819061
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t136843628* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t2250828913, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t136843628* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t136843628** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t136843628* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_3_T2250828913_H
#ifndef U3CWARPTEXTU3EC__ITERATOR0_T2858176180_H
#define U3CWARPTEXTU3EC__ITERATOR0_T2858176180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.WarpTextExample/<WarpText>c__Iterator0
struct  U3CWarpTextU3Ec__Iterator0_t2858176180  : public RuntimeObject
{
public:
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>c__Iterator0::<old_CurveScale>__0
	float ___U3Cold_CurveScaleU3E__0_0;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample/<WarpText>c__Iterator0::<old_curve>__0
	AnimationCurve_t1171892010 * ___U3Cold_curveU3E__0_1;
	// TMPro.TMP_TextInfo TMPro.Examples.WarpTextExample/<WarpText>c__Iterator0::<textInfo>__1
	TMP_TextInfo_t842977478 * ___U3CtextInfoU3E__1_2;
	// System.Int32 TMPro.Examples.WarpTextExample/<WarpText>c__Iterator0::<characterCount>__1
	int32_t ___U3CcharacterCountU3E__1_3;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>c__Iterator0::<boundsMinX>__1
	float ___U3CboundsMinXU3E__1_4;
	// System.Single TMPro.Examples.WarpTextExample/<WarpText>c__Iterator0::<boundsMaxX>__1
	float ___U3CboundsMaxXU3E__1_5;
	// UnityEngine.Vector3[] TMPro.Examples.WarpTextExample/<WarpText>c__Iterator0::<vertices>__2
	Vector3U5BU5D_t2511409059* ___U3CverticesU3E__2_6;
	// UnityEngine.Matrix4x4 TMPro.Examples.WarpTextExample/<WarpText>c__Iterator0::<matrix>__2
	Matrix4x4_t887572436  ___U3CmatrixU3E__2_7;
	// TMPro.Examples.WarpTextExample TMPro.Examples.WarpTextExample/<WarpText>c__Iterator0::$this
	WarpTextExample_t826099379 * ___U24this_8;
	// System.Object TMPro.Examples.WarpTextExample/<WarpText>c__Iterator0::$current
	RuntimeObject * ___U24current_9;
	// System.Boolean TMPro.Examples.WarpTextExample/<WarpText>c__Iterator0::$disposing
	bool ___U24disposing_10;
	// System.Int32 TMPro.Examples.WarpTextExample/<WarpText>c__Iterator0::$PC
	int32_t ___U24PC_11;

public:
	inline static int32_t get_offset_of_U3Cold_CurveScaleU3E__0_0() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t2858176180, ___U3Cold_CurveScaleU3E__0_0)); }
	inline float get_U3Cold_CurveScaleU3E__0_0() const { return ___U3Cold_CurveScaleU3E__0_0; }
	inline float* get_address_of_U3Cold_CurveScaleU3E__0_0() { return &___U3Cold_CurveScaleU3E__0_0; }
	inline void set_U3Cold_CurveScaleU3E__0_0(float value)
	{
		___U3Cold_CurveScaleU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3Cold_curveU3E__0_1() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t2858176180, ___U3Cold_curveU3E__0_1)); }
	inline AnimationCurve_t1171892010 * get_U3Cold_curveU3E__0_1() const { return ___U3Cold_curveU3E__0_1; }
	inline AnimationCurve_t1171892010 ** get_address_of_U3Cold_curveU3E__0_1() { return &___U3Cold_curveU3E__0_1; }
	inline void set_U3Cold_curveU3E__0_1(AnimationCurve_t1171892010 * value)
	{
		___U3Cold_curveU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3Cold_curveU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E__1_2() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t2858176180, ___U3CtextInfoU3E__1_2)); }
	inline TMP_TextInfo_t842977478 * get_U3CtextInfoU3E__1_2() const { return ___U3CtextInfoU3E__1_2; }
	inline TMP_TextInfo_t842977478 ** get_address_of_U3CtextInfoU3E__1_2() { return &___U3CtextInfoU3E__1_2; }
	inline void set_U3CtextInfoU3E__1_2(TMP_TextInfo_t842977478 * value)
	{
		___U3CtextInfoU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtextInfoU3E__1_2), value);
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E__1_3() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t2858176180, ___U3CcharacterCountU3E__1_3)); }
	inline int32_t get_U3CcharacterCountU3E__1_3() const { return ___U3CcharacterCountU3E__1_3; }
	inline int32_t* get_address_of_U3CcharacterCountU3E__1_3() { return &___U3CcharacterCountU3E__1_3; }
	inline void set_U3CcharacterCountU3E__1_3(int32_t value)
	{
		___U3CcharacterCountU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CboundsMinXU3E__1_4() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t2858176180, ___U3CboundsMinXU3E__1_4)); }
	inline float get_U3CboundsMinXU3E__1_4() const { return ___U3CboundsMinXU3E__1_4; }
	inline float* get_address_of_U3CboundsMinXU3E__1_4() { return &___U3CboundsMinXU3E__1_4; }
	inline void set_U3CboundsMinXU3E__1_4(float value)
	{
		___U3CboundsMinXU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CboundsMaxXU3E__1_5() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t2858176180, ___U3CboundsMaxXU3E__1_5)); }
	inline float get_U3CboundsMaxXU3E__1_5() const { return ___U3CboundsMaxXU3E__1_5; }
	inline float* get_address_of_U3CboundsMaxXU3E__1_5() { return &___U3CboundsMaxXU3E__1_5; }
	inline void set_U3CboundsMaxXU3E__1_5(float value)
	{
		___U3CboundsMaxXU3E__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CverticesU3E__2_6() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t2858176180, ___U3CverticesU3E__2_6)); }
	inline Vector3U5BU5D_t2511409059* get_U3CverticesU3E__2_6() const { return ___U3CverticesU3E__2_6; }
	inline Vector3U5BU5D_t2511409059** get_address_of_U3CverticesU3E__2_6() { return &___U3CverticesU3E__2_6; }
	inline void set_U3CverticesU3E__2_6(Vector3U5BU5D_t2511409059* value)
	{
		___U3CverticesU3E__2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CverticesU3E__2_6), value);
	}

	inline static int32_t get_offset_of_U3CmatrixU3E__2_7() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t2858176180, ___U3CmatrixU3E__2_7)); }
	inline Matrix4x4_t887572436  get_U3CmatrixU3E__2_7() const { return ___U3CmatrixU3E__2_7; }
	inline Matrix4x4_t887572436 * get_address_of_U3CmatrixU3E__2_7() { return &___U3CmatrixU3E__2_7; }
	inline void set_U3CmatrixU3E__2_7(Matrix4x4_t887572436  value)
	{
		___U3CmatrixU3E__2_7 = value;
	}

	inline static int32_t get_offset_of_U24this_8() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t2858176180, ___U24this_8)); }
	inline WarpTextExample_t826099379 * get_U24this_8() const { return ___U24this_8; }
	inline WarpTextExample_t826099379 ** get_address_of_U24this_8() { return &___U24this_8; }
	inline void set_U24this_8(WarpTextExample_t826099379 * value)
	{
		___U24this_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_8), value);
	}

	inline static int32_t get_offset_of_U24current_9() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t2858176180, ___U24current_9)); }
	inline RuntimeObject * get_U24current_9() const { return ___U24current_9; }
	inline RuntimeObject ** get_address_of_U24current_9() { return &___U24current_9; }
	inline void set_U24current_9(RuntimeObject * value)
	{
		___U24current_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_9), value);
	}

	inline static int32_t get_offset_of_U24disposing_10() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t2858176180, ___U24disposing_10)); }
	inline bool get_U24disposing_10() const { return ___U24disposing_10; }
	inline bool* get_address_of_U24disposing_10() { return &___U24disposing_10; }
	inline void set_U24disposing_10(bool value)
	{
		___U24disposing_10 = value;
	}

	inline static int32_t get_offset_of_U24PC_11() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t2858176180, ___U24PC_11)); }
	inline int32_t get_U24PC_11() const { return ___U24PC_11; }
	inline int32_t* get_address_of_U24PC_11() { return &___U24PC_11; }
	inline void set_U24PC_11(int32_t value)
	{
		___U24PC_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWARPTEXTU3EC__ITERATOR0_T2858176180_H
#ifndef U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T840739842_H
#define U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T840739842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0
struct  U3CAnimateVertexColorsU3Ec__Iterator0_t840739842  : public RuntimeObject
{
public:
	// TMPro.TMP_TextInfo TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0::<textInfo>__0
	TMP_TextInfo_t842977478 * ___U3CtextInfoU3E__0_0;
	// TMPro.TMP_MeshInfo[] TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0::<cachedMeshInfoVertexData>__0
	TMP_MeshInfoU5BU5D_t130199721* ___U3CcachedMeshInfoVertexDataU3E__0_1;
	// System.Collections.Generic.List`1<System.Int32> TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0::<scaleSortingOrder>__0
	List_1_t446198254 * ___U3CscaleSortingOrderU3E__0_2;
	// System.Int32 TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0::<characterCount>__1
	int32_t ___U3CcharacterCountU3E__1_3;
	// UnityEngine.Matrix4x4 TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0::<matrix>__2
	Matrix4x4_t887572436  ___U3CmatrixU3E__2_4;
	// TMPro.Examples.VertexZoom TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0::$this
	VertexZoom_t1781881840 * ___U24this_5;
	// System.Object TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0::$disposing
	bool ___U24disposing_7;
	// System.Int32 TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0::$PC
	int32_t ___U24PC_8;
	// TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0/<AnimateVertexColors>c__AnonStorey1 TMPro.Examples.VertexZoom/<AnimateVertexColors>c__Iterator0::$locvar0
	U3CAnimateVertexColorsU3Ec__AnonStorey1_t115028000 * ___U24locvar0_9;

public:
	inline static int32_t get_offset_of_U3CtextInfoU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t840739842, ___U3CtextInfoU3E__0_0)); }
	inline TMP_TextInfo_t842977478 * get_U3CtextInfoU3E__0_0() const { return ___U3CtextInfoU3E__0_0; }
	inline TMP_TextInfo_t842977478 ** get_address_of_U3CtextInfoU3E__0_0() { return &___U3CtextInfoU3E__0_0; }
	inline void set_U3CtextInfoU3E__0_0(TMP_TextInfo_t842977478 * value)
	{
		___U3CtextInfoU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtextInfoU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CcachedMeshInfoVertexDataU3E__0_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t840739842, ___U3CcachedMeshInfoVertexDataU3E__0_1)); }
	inline TMP_MeshInfoU5BU5D_t130199721* get_U3CcachedMeshInfoVertexDataU3E__0_1() const { return ___U3CcachedMeshInfoVertexDataU3E__0_1; }
	inline TMP_MeshInfoU5BU5D_t130199721** get_address_of_U3CcachedMeshInfoVertexDataU3E__0_1() { return &___U3CcachedMeshInfoVertexDataU3E__0_1; }
	inline void set_U3CcachedMeshInfoVertexDataU3E__0_1(TMP_MeshInfoU5BU5D_t130199721* value)
	{
		___U3CcachedMeshInfoVertexDataU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcachedMeshInfoVertexDataU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CscaleSortingOrderU3E__0_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t840739842, ___U3CscaleSortingOrderU3E__0_2)); }
	inline List_1_t446198254 * get_U3CscaleSortingOrderU3E__0_2() const { return ___U3CscaleSortingOrderU3E__0_2; }
	inline List_1_t446198254 ** get_address_of_U3CscaleSortingOrderU3E__0_2() { return &___U3CscaleSortingOrderU3E__0_2; }
	inline void set_U3CscaleSortingOrderU3E__0_2(List_1_t446198254 * value)
	{
		___U3CscaleSortingOrderU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CscaleSortingOrderU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E__1_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t840739842, ___U3CcharacterCountU3E__1_3)); }
	inline int32_t get_U3CcharacterCountU3E__1_3() const { return ___U3CcharacterCountU3E__1_3; }
	inline int32_t* get_address_of_U3CcharacterCountU3E__1_3() { return &___U3CcharacterCountU3E__1_3; }
	inline void set_U3CcharacterCountU3E__1_3(int32_t value)
	{
		___U3CcharacterCountU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CmatrixU3E__2_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t840739842, ___U3CmatrixU3E__2_4)); }
	inline Matrix4x4_t887572436  get_U3CmatrixU3E__2_4() const { return ___U3CmatrixU3E__2_4; }
	inline Matrix4x4_t887572436 * get_address_of_U3CmatrixU3E__2_4() { return &___U3CmatrixU3E__2_4; }
	inline void set_U3CmatrixU3E__2_4(Matrix4x4_t887572436  value)
	{
		___U3CmatrixU3E__2_4 = value;
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t840739842, ___U24this_5)); }
	inline VertexZoom_t1781881840 * get_U24this_5() const { return ___U24this_5; }
	inline VertexZoom_t1781881840 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(VertexZoom_t1781881840 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t840739842, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t840739842, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t840739842, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}

	inline static int32_t get_offset_of_U24locvar0_9() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t840739842, ___U24locvar0_9)); }
	inline U3CAnimateVertexColorsU3Ec__AnonStorey1_t115028000 * get_U24locvar0_9() const { return ___U24locvar0_9; }
	inline U3CAnimateVertexColorsU3Ec__AnonStorey1_t115028000 ** get_address_of_U24locvar0_9() { return &___U24locvar0_9; }
	inline void set_U24locvar0_9(U3CAnimateVertexColorsU3Ec__AnonStorey1_t115028000 * value)
	{
		___U24locvar0_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T840739842_H
#ifndef U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T37519185_H
#define U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T37519185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.VertexShakeB/<AnimateVertexColors>c__Iterator0
struct  U3CAnimateVertexColorsU3Ec__Iterator0_t37519185  : public RuntimeObject
{
public:
	// TMPro.TMP_TextInfo TMPro.Examples.VertexShakeB/<AnimateVertexColors>c__Iterator0::<textInfo>__0
	TMP_TextInfo_t842977478 * ___U3CtextInfoU3E__0_0;
	// UnityEngine.Vector3[][] TMPro.Examples.VertexShakeB/<AnimateVertexColors>c__Iterator0::<copyOfVertices>__0
	Vector3U5BU5DU5BU5D_t864781938* ___U3CcopyOfVerticesU3E__0_1;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>c__Iterator0::<characterCount>__1
	int32_t ___U3CcharacterCountU3E__1_2;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>c__Iterator0::<lineCount>__1
	int32_t ___U3ClineCountU3E__1_3;
	// UnityEngine.Matrix4x4 TMPro.Examples.VertexShakeB/<AnimateVertexColors>c__Iterator0::<matrix>__2
	Matrix4x4_t887572436  ___U3CmatrixU3E__2_4;
	// TMPro.Examples.VertexShakeB TMPro.Examples.VertexShakeB/<AnimateVertexColors>c__Iterator0::$this
	VertexShakeB_t1391118062 * ___U24this_5;
	// System.Object TMPro.Examples.VertexShakeB/<AnimateVertexColors>c__Iterator0::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean TMPro.Examples.VertexShakeB/<AnimateVertexColors>c__Iterator0::$disposing
	bool ___U24disposing_7;
	// System.Int32 TMPro.Examples.VertexShakeB/<AnimateVertexColors>c__Iterator0::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3CtextInfoU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t37519185, ___U3CtextInfoU3E__0_0)); }
	inline TMP_TextInfo_t842977478 * get_U3CtextInfoU3E__0_0() const { return ___U3CtextInfoU3E__0_0; }
	inline TMP_TextInfo_t842977478 ** get_address_of_U3CtextInfoU3E__0_0() { return &___U3CtextInfoU3E__0_0; }
	inline void set_U3CtextInfoU3E__0_0(TMP_TextInfo_t842977478 * value)
	{
		___U3CtextInfoU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtextInfoU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CcopyOfVerticesU3E__0_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t37519185, ___U3CcopyOfVerticesU3E__0_1)); }
	inline Vector3U5BU5DU5BU5D_t864781938* get_U3CcopyOfVerticesU3E__0_1() const { return ___U3CcopyOfVerticesU3E__0_1; }
	inline Vector3U5BU5DU5BU5D_t864781938** get_address_of_U3CcopyOfVerticesU3E__0_1() { return &___U3CcopyOfVerticesU3E__0_1; }
	inline void set_U3CcopyOfVerticesU3E__0_1(Vector3U5BU5DU5BU5D_t864781938* value)
	{
		___U3CcopyOfVerticesU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcopyOfVerticesU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E__1_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t37519185, ___U3CcharacterCountU3E__1_2)); }
	inline int32_t get_U3CcharacterCountU3E__1_2() const { return ___U3CcharacterCountU3E__1_2; }
	inline int32_t* get_address_of_U3CcharacterCountU3E__1_2() { return &___U3CcharacterCountU3E__1_2; }
	inline void set_U3CcharacterCountU3E__1_2(int32_t value)
	{
		___U3CcharacterCountU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U3ClineCountU3E__1_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t37519185, ___U3ClineCountU3E__1_3)); }
	inline int32_t get_U3ClineCountU3E__1_3() const { return ___U3ClineCountU3E__1_3; }
	inline int32_t* get_address_of_U3ClineCountU3E__1_3() { return &___U3ClineCountU3E__1_3; }
	inline void set_U3ClineCountU3E__1_3(int32_t value)
	{
		___U3ClineCountU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CmatrixU3E__2_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t37519185, ___U3CmatrixU3E__2_4)); }
	inline Matrix4x4_t887572436  get_U3CmatrixU3E__2_4() const { return ___U3CmatrixU3E__2_4; }
	inline Matrix4x4_t887572436 * get_address_of_U3CmatrixU3E__2_4() { return &___U3CmatrixU3E__2_4; }
	inline void set_U3CmatrixU3E__2_4(Matrix4x4_t887572436  value)
	{
		___U3CmatrixU3E__2_4 = value;
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t37519185, ___U24this_5)); }
	inline VertexShakeB_t1391118062 * get_U24this_5() const { return ___U24this_5; }
	inline VertexShakeB_t1391118062 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(VertexShakeB_t1391118062 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t37519185, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t37519185, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t37519185, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T37519185_H
#ifndef U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T2701499058_H
#define U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T2701499058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.VertexShakeA/<AnimateVertexColors>c__Iterator0
struct  U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058  : public RuntimeObject
{
public:
	// TMPro.TMP_TextInfo TMPro.Examples.VertexShakeA/<AnimateVertexColors>c__Iterator0::<textInfo>__0
	TMP_TextInfo_t842977478 * ___U3CtextInfoU3E__0_0;
	// UnityEngine.Vector3[][] TMPro.Examples.VertexShakeA/<AnimateVertexColors>c__Iterator0::<copyOfVertices>__0
	Vector3U5BU5DU5BU5D_t864781938* ___U3CcopyOfVerticesU3E__0_1;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>c__Iterator0::<characterCount>__1
	int32_t ___U3CcharacterCountU3E__1_2;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>c__Iterator0::<lineCount>__1
	int32_t ___U3ClineCountU3E__1_3;
	// UnityEngine.Matrix4x4 TMPro.Examples.VertexShakeA/<AnimateVertexColors>c__Iterator0::<matrix>__2
	Matrix4x4_t887572436  ___U3CmatrixU3E__2_4;
	// TMPro.Examples.VertexShakeA TMPro.Examples.VertexShakeA/<AnimateVertexColors>c__Iterator0::$this
	VertexShakeA_t1278660418 * ___U24this_5;
	// System.Object TMPro.Examples.VertexShakeA/<AnimateVertexColors>c__Iterator0::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean TMPro.Examples.VertexShakeA/<AnimateVertexColors>c__Iterator0::$disposing
	bool ___U24disposing_7;
	// System.Int32 TMPro.Examples.VertexShakeA/<AnimateVertexColors>c__Iterator0::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3CtextInfoU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058, ___U3CtextInfoU3E__0_0)); }
	inline TMP_TextInfo_t842977478 * get_U3CtextInfoU3E__0_0() const { return ___U3CtextInfoU3E__0_0; }
	inline TMP_TextInfo_t842977478 ** get_address_of_U3CtextInfoU3E__0_0() { return &___U3CtextInfoU3E__0_0; }
	inline void set_U3CtextInfoU3E__0_0(TMP_TextInfo_t842977478 * value)
	{
		___U3CtextInfoU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtextInfoU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CcopyOfVerticesU3E__0_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058, ___U3CcopyOfVerticesU3E__0_1)); }
	inline Vector3U5BU5DU5BU5D_t864781938* get_U3CcopyOfVerticesU3E__0_1() const { return ___U3CcopyOfVerticesU3E__0_1; }
	inline Vector3U5BU5DU5BU5D_t864781938** get_address_of_U3CcopyOfVerticesU3E__0_1() { return &___U3CcopyOfVerticesU3E__0_1; }
	inline void set_U3CcopyOfVerticesU3E__0_1(Vector3U5BU5DU5BU5D_t864781938* value)
	{
		___U3CcopyOfVerticesU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcopyOfVerticesU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E__1_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058, ___U3CcharacterCountU3E__1_2)); }
	inline int32_t get_U3CcharacterCountU3E__1_2() const { return ___U3CcharacterCountU3E__1_2; }
	inline int32_t* get_address_of_U3CcharacterCountU3E__1_2() { return &___U3CcharacterCountU3E__1_2; }
	inline void set_U3CcharacterCountU3E__1_2(int32_t value)
	{
		___U3CcharacterCountU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U3ClineCountU3E__1_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058, ___U3ClineCountU3E__1_3)); }
	inline int32_t get_U3ClineCountU3E__1_3() const { return ___U3ClineCountU3E__1_3; }
	inline int32_t* get_address_of_U3ClineCountU3E__1_3() { return &___U3ClineCountU3E__1_3; }
	inline void set_U3ClineCountU3E__1_3(int32_t value)
	{
		___U3ClineCountU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CmatrixU3E__2_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058, ___U3CmatrixU3E__2_4)); }
	inline Matrix4x4_t887572436  get_U3CmatrixU3E__2_4() const { return ___U3CmatrixU3E__2_4; }
	inline Matrix4x4_t887572436 * get_address_of_U3CmatrixU3E__2_4() { return &___U3CmatrixU3E__2_4; }
	inline void set_U3CmatrixU3E__2_4(Matrix4x4_t887572436  value)
	{
		___U3CmatrixU3E__2_4 = value;
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058, ___U24this_5)); }
	inline VertexShakeA_t1278660418 * get_U24this_5() const { return ___U24this_5; }
	inline VertexShakeA_t1278660418 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(VertexShakeA_t1278660418 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T2701499058_H
#ifndef U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T1239328266_H
#define U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T1239328266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.VertexJitter/<AnimateVertexColors>c__Iterator0
struct  U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266  : public RuntimeObject
{
public:
	// TMPro.TMP_TextInfo TMPro.Examples.VertexJitter/<AnimateVertexColors>c__Iterator0::<textInfo>__0
	TMP_TextInfo_t842977478 * ___U3CtextInfoU3E__0_0;
	// System.Int32 TMPro.Examples.VertexJitter/<AnimateVertexColors>c__Iterator0::<loopCount>__0
	int32_t ___U3CloopCountU3E__0_1;
	// TMPro.Examples.VertexJitter/VertexAnim[] TMPro.Examples.VertexJitter/<AnimateVertexColors>c__Iterator0::<vertexAnim>__0
	VertexAnimU5BU5D_t1995670284* ___U3CvertexAnimU3E__0_2;
	// TMPro.TMP_MeshInfo[] TMPro.Examples.VertexJitter/<AnimateVertexColors>c__Iterator0::<cachedMeshInfo>__0
	TMP_MeshInfoU5BU5D_t130199721* ___U3CcachedMeshInfoU3E__0_3;
	// System.Int32 TMPro.Examples.VertexJitter/<AnimateVertexColors>c__Iterator0::<characterCount>__1
	int32_t ___U3CcharacterCountU3E__1_4;
	// UnityEngine.Matrix4x4 TMPro.Examples.VertexJitter/<AnimateVertexColors>c__Iterator0::<matrix>__2
	Matrix4x4_t887572436  ___U3CmatrixU3E__2_5;
	// TMPro.Examples.VertexJitter TMPro.Examples.VertexJitter/<AnimateVertexColors>c__Iterator0::$this
	VertexJitter_t1068353994 * ___U24this_6;
	// System.Object TMPro.Examples.VertexJitter/<AnimateVertexColors>c__Iterator0::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean TMPro.Examples.VertexJitter/<AnimateVertexColors>c__Iterator0::$disposing
	bool ___U24disposing_8;
	// System.Int32 TMPro.Examples.VertexJitter/<AnimateVertexColors>c__Iterator0::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3CtextInfoU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266, ___U3CtextInfoU3E__0_0)); }
	inline TMP_TextInfo_t842977478 * get_U3CtextInfoU3E__0_0() const { return ___U3CtextInfoU3E__0_0; }
	inline TMP_TextInfo_t842977478 ** get_address_of_U3CtextInfoU3E__0_0() { return &___U3CtextInfoU3E__0_0; }
	inline void set_U3CtextInfoU3E__0_0(TMP_TextInfo_t842977478 * value)
	{
		___U3CtextInfoU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtextInfoU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CloopCountU3E__0_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266, ___U3CloopCountU3E__0_1)); }
	inline int32_t get_U3CloopCountU3E__0_1() const { return ___U3CloopCountU3E__0_1; }
	inline int32_t* get_address_of_U3CloopCountU3E__0_1() { return &___U3CloopCountU3E__0_1; }
	inline void set_U3CloopCountU3E__0_1(int32_t value)
	{
		___U3CloopCountU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CvertexAnimU3E__0_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266, ___U3CvertexAnimU3E__0_2)); }
	inline VertexAnimU5BU5D_t1995670284* get_U3CvertexAnimU3E__0_2() const { return ___U3CvertexAnimU3E__0_2; }
	inline VertexAnimU5BU5D_t1995670284** get_address_of_U3CvertexAnimU3E__0_2() { return &___U3CvertexAnimU3E__0_2; }
	inline void set_U3CvertexAnimU3E__0_2(VertexAnimU5BU5D_t1995670284* value)
	{
		___U3CvertexAnimU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CvertexAnimU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U3CcachedMeshInfoU3E__0_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266, ___U3CcachedMeshInfoU3E__0_3)); }
	inline TMP_MeshInfoU5BU5D_t130199721* get_U3CcachedMeshInfoU3E__0_3() const { return ___U3CcachedMeshInfoU3E__0_3; }
	inline TMP_MeshInfoU5BU5D_t130199721** get_address_of_U3CcachedMeshInfoU3E__0_3() { return &___U3CcachedMeshInfoU3E__0_3; }
	inline void set_U3CcachedMeshInfoU3E__0_3(TMP_MeshInfoU5BU5D_t130199721* value)
	{
		___U3CcachedMeshInfoU3E__0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcachedMeshInfoU3E__0_3), value);
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E__1_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266, ___U3CcharacterCountU3E__1_4)); }
	inline int32_t get_U3CcharacterCountU3E__1_4() const { return ___U3CcharacterCountU3E__1_4; }
	inline int32_t* get_address_of_U3CcharacterCountU3E__1_4() { return &___U3CcharacterCountU3E__1_4; }
	inline void set_U3CcharacterCountU3E__1_4(int32_t value)
	{
		___U3CcharacterCountU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CmatrixU3E__2_5() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266, ___U3CmatrixU3E__2_5)); }
	inline Matrix4x4_t887572436  get_U3CmatrixU3E__2_5() const { return ___U3CmatrixU3E__2_5; }
	inline Matrix4x4_t887572436 * get_address_of_U3CmatrixU3E__2_5() { return &___U3CmatrixU3E__2_5; }
	inline void set_U3CmatrixU3E__2_5(Matrix4x4_t887572436  value)
	{
		___U3CmatrixU3E__2_5 = value;
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266, ___U24this_6)); }
	inline VertexJitter_t1068353994 * get_U24this_6() const { return ___U24this_6; }
	inline VertexJitter_t1068353994 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(VertexJitter_t1068353994 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T1239328266_H
#ifndef U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T2914654206_H
#define U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T2914654206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.VertexColorCycler/<AnimateVertexColors>c__Iterator0
struct  U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206  : public RuntimeObject
{
public:
	// TMPro.TMP_TextInfo TMPro.Examples.VertexColorCycler/<AnimateVertexColors>c__Iterator0::<textInfo>__0
	TMP_TextInfo_t842977478 * ___U3CtextInfoU3E__0_0;
	// System.Int32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>c__Iterator0::<currentCharacter>__0
	int32_t ___U3CcurrentCharacterU3E__0_1;
	// UnityEngine.Color32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>c__Iterator0::<c0>__0
	Color32_t4068301183  ___U3Cc0U3E__0_2;
	// System.Int32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>c__Iterator0::<characterCount>__1
	int32_t ___U3CcharacterCountU3E__1_3;
	// System.Int32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>c__Iterator0::<materialIndex>__1
	int32_t ___U3CmaterialIndexU3E__1_4;
	// UnityEngine.Color32[] TMPro.Examples.VertexColorCycler/<AnimateVertexColors>c__Iterator0::<newVertexColors>__1
	Color32U5BU5D_t233041318* ___U3CnewVertexColorsU3E__1_5;
	// System.Int32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>c__Iterator0::<vertexIndex>__1
	int32_t ___U3CvertexIndexU3E__1_6;
	// TMPro.Examples.VertexColorCycler TMPro.Examples.VertexColorCycler/<AnimateVertexColors>c__Iterator0::$this
	VertexColorCycler_t1654838429 * ___U24this_7;
	// System.Object TMPro.Examples.VertexColorCycler/<AnimateVertexColors>c__Iterator0::$current
	RuntimeObject * ___U24current_8;
	// System.Boolean TMPro.Examples.VertexColorCycler/<AnimateVertexColors>c__Iterator0::$disposing
	bool ___U24disposing_9;
	// System.Int32 TMPro.Examples.VertexColorCycler/<AnimateVertexColors>c__Iterator0::$PC
	int32_t ___U24PC_10;

public:
	inline static int32_t get_offset_of_U3CtextInfoU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206, ___U3CtextInfoU3E__0_0)); }
	inline TMP_TextInfo_t842977478 * get_U3CtextInfoU3E__0_0() const { return ___U3CtextInfoU3E__0_0; }
	inline TMP_TextInfo_t842977478 ** get_address_of_U3CtextInfoU3E__0_0() { return &___U3CtextInfoU3E__0_0; }
	inline void set_U3CtextInfoU3E__0_0(TMP_TextInfo_t842977478 * value)
	{
		___U3CtextInfoU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtextInfoU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CcurrentCharacterU3E__0_1() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206, ___U3CcurrentCharacterU3E__0_1)); }
	inline int32_t get_U3CcurrentCharacterU3E__0_1() const { return ___U3CcurrentCharacterU3E__0_1; }
	inline int32_t* get_address_of_U3CcurrentCharacterU3E__0_1() { return &___U3CcurrentCharacterU3E__0_1; }
	inline void set_U3CcurrentCharacterU3E__0_1(int32_t value)
	{
		___U3CcurrentCharacterU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3Cc0U3E__0_2() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206, ___U3Cc0U3E__0_2)); }
	inline Color32_t4068301183  get_U3Cc0U3E__0_2() const { return ___U3Cc0U3E__0_2; }
	inline Color32_t4068301183 * get_address_of_U3Cc0U3E__0_2() { return &___U3Cc0U3E__0_2; }
	inline void set_U3Cc0U3E__0_2(Color32_t4068301183  value)
	{
		___U3Cc0U3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E__1_3() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206, ___U3CcharacterCountU3E__1_3)); }
	inline int32_t get_U3CcharacterCountU3E__1_3() const { return ___U3CcharacterCountU3E__1_3; }
	inline int32_t* get_address_of_U3CcharacterCountU3E__1_3() { return &___U3CcharacterCountU3E__1_3; }
	inline void set_U3CcharacterCountU3E__1_3(int32_t value)
	{
		___U3CcharacterCountU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CmaterialIndexU3E__1_4() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206, ___U3CmaterialIndexU3E__1_4)); }
	inline int32_t get_U3CmaterialIndexU3E__1_4() const { return ___U3CmaterialIndexU3E__1_4; }
	inline int32_t* get_address_of_U3CmaterialIndexU3E__1_4() { return &___U3CmaterialIndexU3E__1_4; }
	inline void set_U3CmaterialIndexU3E__1_4(int32_t value)
	{
		___U3CmaterialIndexU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CnewVertexColorsU3E__1_5() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206, ___U3CnewVertexColorsU3E__1_5)); }
	inline Color32U5BU5D_t233041318* get_U3CnewVertexColorsU3E__1_5() const { return ___U3CnewVertexColorsU3E__1_5; }
	inline Color32U5BU5D_t233041318** get_address_of_U3CnewVertexColorsU3E__1_5() { return &___U3CnewVertexColorsU3E__1_5; }
	inline void set_U3CnewVertexColorsU3E__1_5(Color32U5BU5D_t233041318* value)
	{
		___U3CnewVertexColorsU3E__1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnewVertexColorsU3E__1_5), value);
	}

	inline static int32_t get_offset_of_U3CvertexIndexU3E__1_6() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206, ___U3CvertexIndexU3E__1_6)); }
	inline int32_t get_U3CvertexIndexU3E__1_6() const { return ___U3CvertexIndexU3E__1_6; }
	inline int32_t* get_address_of_U3CvertexIndexU3E__1_6() { return &___U3CvertexIndexU3E__1_6; }
	inline void set_U3CvertexIndexU3E__1_6(int32_t value)
	{
		___U3CvertexIndexU3E__1_6 = value;
	}

	inline static int32_t get_offset_of_U24this_7() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206, ___U24this_7)); }
	inline VertexColorCycler_t1654838429 * get_U24this_7() const { return ___U24this_7; }
	inline VertexColorCycler_t1654838429 ** get_address_of_U24this_7() { return &___U24this_7; }
	inline void set_U24this_7(VertexColorCycler_t1654838429 * value)
	{
		___U24this_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_7), value);
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206, ___U24current_8)); }
	inline RuntimeObject * get_U24current_8() const { return ___U24current_8; }
	inline RuntimeObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(RuntimeObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_8), value);
	}

	inline static int32_t get_offset_of_U24disposing_9() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206, ___U24disposing_9)); }
	inline bool get_U24disposing_9() const { return ___U24disposing_9; }
	inline bool* get_address_of_U24disposing_9() { return &___U24disposing_9; }
	inline void set_U24disposing_9(bool value)
	{
		___U24disposing_9 = value;
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206, ___U24PC_10)); }
	inline int32_t get_U24PC_10() const { return ___U24PC_10; }
	inline int32_t* get_address_of_U24PC_10() { return &___U24PC_10; }
	inline void set_U24PC_10(int32_t value)
	{
		___U24PC_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CANIMATEVERTEXCOLORSU3EC__ITERATOR0_T2914654206_H
#ifndef OBJECT_T315965923_H
#define OBJECT_T315965923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t315965923  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t315965923, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t315965923_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t315965923_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t315965923_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t315965923_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T315965923_H
#ifndef FPSCOUNTERANCHORPOSITIONS_T937721072_H
#define FPSCOUNTERANCHORPOSITIONS_T937721072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_UiFrameRateCounter/FpsCounterAnchorPositions
struct  FpsCounterAnchorPositions_t937721072 
{
public:
	// System.Int32 TMPro.Examples.TMP_UiFrameRateCounter/FpsCounterAnchorPositions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FpsCounterAnchorPositions_t937721072, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FPSCOUNTERANCHORPOSITIONS_T937721072_H
#ifndef FPSCOUNTERANCHORPOSITIONS_T1631731125_H
#define FPSCOUNTERANCHORPOSITIONS_T1631731125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMPro_InstructionOverlay/FpsCounterAnchorPositions
struct  FpsCounterAnchorPositions_t1631731125 
{
public:
	// System.Int32 TMPro.Examples.TMPro_InstructionOverlay/FpsCounterAnchorPositions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FpsCounterAnchorPositions_t1631731125, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FPSCOUNTERANCHORPOSITIONS_T1631731125_H
#ifndef MOTIONTYPE_T472146513_H
#define MOTIONTYPE_T472146513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.ObjectSpin/MotionType
struct  MotionType_t472146513 
{
public:
	// System.Int32 TMPro.Examples.ObjectSpin/MotionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MotionType_t472146513, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTIONTYPE_T472146513_H
#ifndef U3CDISPLAYTEXTMESHFLOATINGTEXTU3EC__ITERATOR1_T4044511962_H
#define U3CDISPLAYTEXTMESHFLOATINGTEXTU3EC__ITERATOR1_T4044511962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>c__Iterator1
struct  U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962  : public RuntimeObject
{
public:
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>c__Iterator1::<CountDuration>__0
	float ___U3CCountDurationU3E__0_0;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>c__Iterator1::<starting_Count>__0
	float ___U3Cstarting_CountU3E__0_1;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>c__Iterator1::<current_Count>__0
	float ___U3Ccurrent_CountU3E__0_2;
	// UnityEngine.Vector3 TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>c__Iterator1::<start_pos>__0
	Vector3_t810140550  ___U3Cstart_posU3E__0_3;
	// UnityEngine.Color32 TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>c__Iterator1::<start_color>__0
	Color32_t4068301183  ___U3Cstart_colorU3E__0_4;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>c__Iterator1::<alpha>__0
	float ___U3CalphaU3E__0_5;
	// System.Int32 TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>c__Iterator1::<int_counter>__0
	int32_t ___U3Cint_counterU3E__0_6;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>c__Iterator1::<fadeDuration>__0
	float ___U3CfadeDurationU3E__0_7;
	// TMPro.Examples.TextMeshProFloatingText TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>c__Iterator1::$this
	TextMeshProFloatingText_t2820266173 * ___U24this_8;
	// System.Object TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>c__Iterator1::$current
	RuntimeObject * ___U24current_9;
	// System.Boolean TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>c__Iterator1::$disposing
	bool ___U24disposing_10;
	// System.Int32 TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshFloatingText>c__Iterator1::$PC
	int32_t ___U24PC_11;

public:
	inline static int32_t get_offset_of_U3CCountDurationU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962, ___U3CCountDurationU3E__0_0)); }
	inline float get_U3CCountDurationU3E__0_0() const { return ___U3CCountDurationU3E__0_0; }
	inline float* get_address_of_U3CCountDurationU3E__0_0() { return &___U3CCountDurationU3E__0_0; }
	inline void set_U3CCountDurationU3E__0_0(float value)
	{
		___U3CCountDurationU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3Cstarting_CountU3E__0_1() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962, ___U3Cstarting_CountU3E__0_1)); }
	inline float get_U3Cstarting_CountU3E__0_1() const { return ___U3Cstarting_CountU3E__0_1; }
	inline float* get_address_of_U3Cstarting_CountU3E__0_1() { return &___U3Cstarting_CountU3E__0_1; }
	inline void set_U3Cstarting_CountU3E__0_1(float value)
	{
		___U3Cstarting_CountU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3Ccurrent_CountU3E__0_2() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962, ___U3Ccurrent_CountU3E__0_2)); }
	inline float get_U3Ccurrent_CountU3E__0_2() const { return ___U3Ccurrent_CountU3E__0_2; }
	inline float* get_address_of_U3Ccurrent_CountU3E__0_2() { return &___U3Ccurrent_CountU3E__0_2; }
	inline void set_U3Ccurrent_CountU3E__0_2(float value)
	{
		___U3Ccurrent_CountU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3Cstart_posU3E__0_3() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962, ___U3Cstart_posU3E__0_3)); }
	inline Vector3_t810140550  get_U3Cstart_posU3E__0_3() const { return ___U3Cstart_posU3E__0_3; }
	inline Vector3_t810140550 * get_address_of_U3Cstart_posU3E__0_3() { return &___U3Cstart_posU3E__0_3; }
	inline void set_U3Cstart_posU3E__0_3(Vector3_t810140550  value)
	{
		___U3Cstart_posU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3Cstart_colorU3E__0_4() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962, ___U3Cstart_colorU3E__0_4)); }
	inline Color32_t4068301183  get_U3Cstart_colorU3E__0_4() const { return ___U3Cstart_colorU3E__0_4; }
	inline Color32_t4068301183 * get_address_of_U3Cstart_colorU3E__0_4() { return &___U3Cstart_colorU3E__0_4; }
	inline void set_U3Cstart_colorU3E__0_4(Color32_t4068301183  value)
	{
		___U3Cstart_colorU3E__0_4 = value;
	}

	inline static int32_t get_offset_of_U3CalphaU3E__0_5() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962, ___U3CalphaU3E__0_5)); }
	inline float get_U3CalphaU3E__0_5() const { return ___U3CalphaU3E__0_5; }
	inline float* get_address_of_U3CalphaU3E__0_5() { return &___U3CalphaU3E__0_5; }
	inline void set_U3CalphaU3E__0_5(float value)
	{
		___U3CalphaU3E__0_5 = value;
	}

	inline static int32_t get_offset_of_U3Cint_counterU3E__0_6() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962, ___U3Cint_counterU3E__0_6)); }
	inline int32_t get_U3Cint_counterU3E__0_6() const { return ___U3Cint_counterU3E__0_6; }
	inline int32_t* get_address_of_U3Cint_counterU3E__0_6() { return &___U3Cint_counterU3E__0_6; }
	inline void set_U3Cint_counterU3E__0_6(int32_t value)
	{
		___U3Cint_counterU3E__0_6 = value;
	}

	inline static int32_t get_offset_of_U3CfadeDurationU3E__0_7() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962, ___U3CfadeDurationU3E__0_7)); }
	inline float get_U3CfadeDurationU3E__0_7() const { return ___U3CfadeDurationU3E__0_7; }
	inline float* get_address_of_U3CfadeDurationU3E__0_7() { return &___U3CfadeDurationU3E__0_7; }
	inline void set_U3CfadeDurationU3E__0_7(float value)
	{
		___U3CfadeDurationU3E__0_7 = value;
	}

	inline static int32_t get_offset_of_U24this_8() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962, ___U24this_8)); }
	inline TextMeshProFloatingText_t2820266173 * get_U24this_8() const { return ___U24this_8; }
	inline TextMeshProFloatingText_t2820266173 ** get_address_of_U24this_8() { return &___U24this_8; }
	inline void set_U24this_8(TextMeshProFloatingText_t2820266173 * value)
	{
		___U24this_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_8), value);
	}

	inline static int32_t get_offset_of_U24current_9() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962, ___U24current_9)); }
	inline RuntimeObject * get_U24current_9() const { return ___U24current_9; }
	inline RuntimeObject ** get_address_of_U24current_9() { return &___U24current_9; }
	inline void set_U24current_9(RuntimeObject * value)
	{
		___U24current_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_9), value);
	}

	inline static int32_t get_offset_of_U24disposing_10() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962, ___U24disposing_10)); }
	inline bool get_U24disposing_10() const { return ___U24disposing_10; }
	inline bool* get_address_of_U24disposing_10() { return &___U24disposing_10; }
	inline void set_U24disposing_10(bool value)
	{
		___U24disposing_10 = value;
	}

	inline static int32_t get_offset_of_U24PC_11() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962, ___U24PC_11)); }
	inline int32_t get_U24PC_11() const { return ___U24PC_11; }
	inline int32_t* get_address_of_U24PC_11() { return &___U24PC_11; }
	inline void set_U24PC_11(int32_t value)
	{
		___U24PC_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDISPLAYTEXTMESHFLOATINGTEXTU3EC__ITERATOR1_T4044511962_H
#ifndef LINKSELECTIONEVENT_T526171622_H
#define LINKSELECTIONEVENT_T526171622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextEventHandler/LinkSelectionEvent
struct  LinkSelectionEvent_t526171622  : public UnityEvent_3_t2250828913
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKSELECTIONEVENT_T526171622_H
#ifndef LINESELECTIONEVENT_T2932876682_H
#define LINESELECTIONEVENT_T2932876682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextEventHandler/LineSelectionEvent
struct  LineSelectionEvent_t2932876682  : public UnityEvent_3_t2502555392
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINESELECTIONEVENT_T2932876682_H
#ifndef WORDSELECTIONEVENT_T1451953395_H
#define WORDSELECTIONEVENT_T1451953395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextEventHandler/WordSelectionEvent
struct  WordSelectionEvent_t1451953395  : public UnityEvent_3_t2502555392
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDSELECTIONEVENT_T1451953395_H
#ifndef U3CDISPLAYTEXTMESHPROFLOATINGTEXTU3EC__ITERATOR0_T1115204330_H
#define U3CDISPLAYTEXTMESHPROFLOATINGTEXTU3EC__ITERATOR0_T1115204330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>c__Iterator0
struct  U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330  : public RuntimeObject
{
public:
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>c__Iterator0::<CountDuration>__0
	float ___U3CCountDurationU3E__0_0;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>c__Iterator0::<starting_Count>__0
	float ___U3Cstarting_CountU3E__0_1;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>c__Iterator0::<current_Count>__0
	float ___U3Ccurrent_CountU3E__0_2;
	// UnityEngine.Vector3 TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>c__Iterator0::<start_pos>__0
	Vector3_t810140550  ___U3Cstart_posU3E__0_3;
	// UnityEngine.Color32 TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>c__Iterator0::<start_color>__0
	Color32_t4068301183  ___U3Cstart_colorU3E__0_4;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>c__Iterator0::<alpha>__0
	float ___U3CalphaU3E__0_5;
	// System.Single TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>c__Iterator0::<fadeDuration>__0
	float ___U3CfadeDurationU3E__0_6;
	// TMPro.Examples.TextMeshProFloatingText TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>c__Iterator0::$this
	TextMeshProFloatingText_t2820266173 * ___U24this_7;
	// System.Object TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>c__Iterator0::$current
	RuntimeObject * ___U24current_8;
	// System.Boolean TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>c__Iterator0::$disposing
	bool ___U24disposing_9;
	// System.Int32 TMPro.Examples.TextMeshProFloatingText/<DisplayTextMeshProFloatingText>c__Iterator0::$PC
	int32_t ___U24PC_10;

public:
	inline static int32_t get_offset_of_U3CCountDurationU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330, ___U3CCountDurationU3E__0_0)); }
	inline float get_U3CCountDurationU3E__0_0() const { return ___U3CCountDurationU3E__0_0; }
	inline float* get_address_of_U3CCountDurationU3E__0_0() { return &___U3CCountDurationU3E__0_0; }
	inline void set_U3CCountDurationU3E__0_0(float value)
	{
		___U3CCountDurationU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3Cstarting_CountU3E__0_1() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330, ___U3Cstarting_CountU3E__0_1)); }
	inline float get_U3Cstarting_CountU3E__0_1() const { return ___U3Cstarting_CountU3E__0_1; }
	inline float* get_address_of_U3Cstarting_CountU3E__0_1() { return &___U3Cstarting_CountU3E__0_1; }
	inline void set_U3Cstarting_CountU3E__0_1(float value)
	{
		___U3Cstarting_CountU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3Ccurrent_CountU3E__0_2() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330, ___U3Ccurrent_CountU3E__0_2)); }
	inline float get_U3Ccurrent_CountU3E__0_2() const { return ___U3Ccurrent_CountU3E__0_2; }
	inline float* get_address_of_U3Ccurrent_CountU3E__0_2() { return &___U3Ccurrent_CountU3E__0_2; }
	inline void set_U3Ccurrent_CountU3E__0_2(float value)
	{
		___U3Ccurrent_CountU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3Cstart_posU3E__0_3() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330, ___U3Cstart_posU3E__0_3)); }
	inline Vector3_t810140550  get_U3Cstart_posU3E__0_3() const { return ___U3Cstart_posU3E__0_3; }
	inline Vector3_t810140550 * get_address_of_U3Cstart_posU3E__0_3() { return &___U3Cstart_posU3E__0_3; }
	inline void set_U3Cstart_posU3E__0_3(Vector3_t810140550  value)
	{
		___U3Cstart_posU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3Cstart_colorU3E__0_4() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330, ___U3Cstart_colorU3E__0_4)); }
	inline Color32_t4068301183  get_U3Cstart_colorU3E__0_4() const { return ___U3Cstart_colorU3E__0_4; }
	inline Color32_t4068301183 * get_address_of_U3Cstart_colorU3E__0_4() { return &___U3Cstart_colorU3E__0_4; }
	inline void set_U3Cstart_colorU3E__0_4(Color32_t4068301183  value)
	{
		___U3Cstart_colorU3E__0_4 = value;
	}

	inline static int32_t get_offset_of_U3CalphaU3E__0_5() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330, ___U3CalphaU3E__0_5)); }
	inline float get_U3CalphaU3E__0_5() const { return ___U3CalphaU3E__0_5; }
	inline float* get_address_of_U3CalphaU3E__0_5() { return &___U3CalphaU3E__0_5; }
	inline void set_U3CalphaU3E__0_5(float value)
	{
		___U3CalphaU3E__0_5 = value;
	}

	inline static int32_t get_offset_of_U3CfadeDurationU3E__0_6() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330, ___U3CfadeDurationU3E__0_6)); }
	inline float get_U3CfadeDurationU3E__0_6() const { return ___U3CfadeDurationU3E__0_6; }
	inline float* get_address_of_U3CfadeDurationU3E__0_6() { return &___U3CfadeDurationU3E__0_6; }
	inline void set_U3CfadeDurationU3E__0_6(float value)
	{
		___U3CfadeDurationU3E__0_6 = value;
	}

	inline static int32_t get_offset_of_U24this_7() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330, ___U24this_7)); }
	inline TextMeshProFloatingText_t2820266173 * get_U24this_7() const { return ___U24this_7; }
	inline TextMeshProFloatingText_t2820266173 ** get_address_of_U24this_7() { return &___U24this_7; }
	inline void set_U24this_7(TextMeshProFloatingText_t2820266173 * value)
	{
		___U24this_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_7), value);
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330, ___U24current_8)); }
	inline RuntimeObject * get_U24current_8() const { return ___U24current_8; }
	inline RuntimeObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(RuntimeObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_8), value);
	}

	inline static int32_t get_offset_of_U24disposing_9() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330, ___U24disposing_9)); }
	inline bool get_U24disposing_9() const { return ___U24disposing_9; }
	inline bool* get_address_of_U24disposing_9() { return &___U24disposing_9; }
	inline void set_U24disposing_9(bool value)
	{
		___U24disposing_9 = value;
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330, ___U24PC_10)); }
	inline int32_t get_U24PC_10() const { return ___U24PC_10; }
	inline int32_t* get_address_of_U24PC_10() { return &___U24PC_10; }
	inline void set_U24PC_10(int32_t value)
	{
		___U24PC_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDISPLAYTEXTMESHPROFLOATINGTEXTU3EC__ITERATOR0_T1115204330_H
#ifndef CHARACTERSELECTIONEVENT_T3393545884_H
#define CHARACTERSELECTIONEVENT_T3393545884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextEventHandler/CharacterSelectionEvent
struct  CharacterSelectionEvent_t3393545884  : public UnityEvent_2_t928746861
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERSELECTIONEVENT_T3393545884_H
#ifndef OBJECTTYPE_T2270562366_H
#define OBJECTTYPE_T2270562366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_ExampleScript_01/objectType
struct  objectType_t2270562366 
{
public:
	// System.Int32 TMPro.Examples.TMP_ExampleScript_01/objectType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(objectType_t2270562366, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTYPE_T2270562366_H
#ifndef U3CWARPTEXTU3EC__ITERATOR0_T4103237136_H
#define U3CWARPTEXTU3EC__ITERATOR0_T4103237136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0
struct  U3CWarpTextU3Ec__Iterator0_t4103237136  : public RuntimeObject
{
public:
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0::<old_CurveScale>__0
	float ___U3Cold_CurveScaleU3E__0_0;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0::<old_ShearValue>__0
	float ___U3Cold_ShearValueU3E__0_1;
	// UnityEngine.AnimationCurve TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0::<old_curve>__0
	AnimationCurve_t1171892010 * ___U3Cold_curveU3E__0_2;
	// TMPro.TMP_TextInfo TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0::<textInfo>__1
	TMP_TextInfo_t842977478 * ___U3CtextInfoU3E__1_3;
	// System.Int32 TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0::<characterCount>__1
	int32_t ___U3CcharacterCountU3E__1_4;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0::<boundsMinX>__1
	float ___U3CboundsMinXU3E__1_5;
	// System.Single TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0::<boundsMaxX>__1
	float ___U3CboundsMaxXU3E__1_6;
	// UnityEngine.Vector3[] TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0::<vertices>__2
	Vector3U5BU5D_t2511409059* ___U3CverticesU3E__2_7;
	// UnityEngine.Matrix4x4 TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0::<matrix>__2
	Matrix4x4_t887572436  ___U3CmatrixU3E__2_8;
	// TMPro.Examples.SkewTextExample TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0::$this
	SkewTextExample_t1573568503 * ___U24this_9;
	// System.Object TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0::$current
	RuntimeObject * ___U24current_10;
	// System.Boolean TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0::$disposing
	bool ___U24disposing_11;
	// System.Int32 TMPro.Examples.SkewTextExample/<WarpText>c__Iterator0::$PC
	int32_t ___U24PC_12;

public:
	inline static int32_t get_offset_of_U3Cold_CurveScaleU3E__0_0() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t4103237136, ___U3Cold_CurveScaleU3E__0_0)); }
	inline float get_U3Cold_CurveScaleU3E__0_0() const { return ___U3Cold_CurveScaleU3E__0_0; }
	inline float* get_address_of_U3Cold_CurveScaleU3E__0_0() { return &___U3Cold_CurveScaleU3E__0_0; }
	inline void set_U3Cold_CurveScaleU3E__0_0(float value)
	{
		___U3Cold_CurveScaleU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3Cold_ShearValueU3E__0_1() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t4103237136, ___U3Cold_ShearValueU3E__0_1)); }
	inline float get_U3Cold_ShearValueU3E__0_1() const { return ___U3Cold_ShearValueU3E__0_1; }
	inline float* get_address_of_U3Cold_ShearValueU3E__0_1() { return &___U3Cold_ShearValueU3E__0_1; }
	inline void set_U3Cold_ShearValueU3E__0_1(float value)
	{
		___U3Cold_ShearValueU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3Cold_curveU3E__0_2() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t4103237136, ___U3Cold_curveU3E__0_2)); }
	inline AnimationCurve_t1171892010 * get_U3Cold_curveU3E__0_2() const { return ___U3Cold_curveU3E__0_2; }
	inline AnimationCurve_t1171892010 ** get_address_of_U3Cold_curveU3E__0_2() { return &___U3Cold_curveU3E__0_2; }
	inline void set_U3Cold_curveU3E__0_2(AnimationCurve_t1171892010 * value)
	{
		___U3Cold_curveU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3Cold_curveU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U3CtextInfoU3E__1_3() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t4103237136, ___U3CtextInfoU3E__1_3)); }
	inline TMP_TextInfo_t842977478 * get_U3CtextInfoU3E__1_3() const { return ___U3CtextInfoU3E__1_3; }
	inline TMP_TextInfo_t842977478 ** get_address_of_U3CtextInfoU3E__1_3() { return &___U3CtextInfoU3E__1_3; }
	inline void set_U3CtextInfoU3E__1_3(TMP_TextInfo_t842977478 * value)
	{
		___U3CtextInfoU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtextInfoU3E__1_3), value);
	}

	inline static int32_t get_offset_of_U3CcharacterCountU3E__1_4() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t4103237136, ___U3CcharacterCountU3E__1_4)); }
	inline int32_t get_U3CcharacterCountU3E__1_4() const { return ___U3CcharacterCountU3E__1_4; }
	inline int32_t* get_address_of_U3CcharacterCountU3E__1_4() { return &___U3CcharacterCountU3E__1_4; }
	inline void set_U3CcharacterCountU3E__1_4(int32_t value)
	{
		___U3CcharacterCountU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CboundsMinXU3E__1_5() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t4103237136, ___U3CboundsMinXU3E__1_5)); }
	inline float get_U3CboundsMinXU3E__1_5() const { return ___U3CboundsMinXU3E__1_5; }
	inline float* get_address_of_U3CboundsMinXU3E__1_5() { return &___U3CboundsMinXU3E__1_5; }
	inline void set_U3CboundsMinXU3E__1_5(float value)
	{
		___U3CboundsMinXU3E__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CboundsMaxXU3E__1_6() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t4103237136, ___U3CboundsMaxXU3E__1_6)); }
	inline float get_U3CboundsMaxXU3E__1_6() const { return ___U3CboundsMaxXU3E__1_6; }
	inline float* get_address_of_U3CboundsMaxXU3E__1_6() { return &___U3CboundsMaxXU3E__1_6; }
	inline void set_U3CboundsMaxXU3E__1_6(float value)
	{
		___U3CboundsMaxXU3E__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CverticesU3E__2_7() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t4103237136, ___U3CverticesU3E__2_7)); }
	inline Vector3U5BU5D_t2511409059* get_U3CverticesU3E__2_7() const { return ___U3CverticesU3E__2_7; }
	inline Vector3U5BU5D_t2511409059** get_address_of_U3CverticesU3E__2_7() { return &___U3CverticesU3E__2_7; }
	inline void set_U3CverticesU3E__2_7(Vector3U5BU5D_t2511409059* value)
	{
		___U3CverticesU3E__2_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CverticesU3E__2_7), value);
	}

	inline static int32_t get_offset_of_U3CmatrixU3E__2_8() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t4103237136, ___U3CmatrixU3E__2_8)); }
	inline Matrix4x4_t887572436  get_U3CmatrixU3E__2_8() const { return ___U3CmatrixU3E__2_8; }
	inline Matrix4x4_t887572436 * get_address_of_U3CmatrixU3E__2_8() { return &___U3CmatrixU3E__2_8; }
	inline void set_U3CmatrixU3E__2_8(Matrix4x4_t887572436  value)
	{
		___U3CmatrixU3E__2_8 = value;
	}

	inline static int32_t get_offset_of_U24this_9() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t4103237136, ___U24this_9)); }
	inline SkewTextExample_t1573568503 * get_U24this_9() const { return ___U24this_9; }
	inline SkewTextExample_t1573568503 ** get_address_of_U24this_9() { return &___U24this_9; }
	inline void set_U24this_9(SkewTextExample_t1573568503 * value)
	{
		___U24this_9 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_9), value);
	}

	inline static int32_t get_offset_of_U24current_10() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t4103237136, ___U24current_10)); }
	inline RuntimeObject * get_U24current_10() const { return ___U24current_10; }
	inline RuntimeObject ** get_address_of_U24current_10() { return &___U24current_10; }
	inline void set_U24current_10(RuntimeObject * value)
	{
		___U24current_10 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_10), value);
	}

	inline static int32_t get_offset_of_U24disposing_11() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t4103237136, ___U24disposing_11)); }
	inline bool get_U24disposing_11() const { return ___U24disposing_11; }
	inline bool* get_address_of_U24disposing_11() { return &___U24disposing_11; }
	inline void set_U24disposing_11(bool value)
	{
		___U24disposing_11 = value;
	}

	inline static int32_t get_offset_of_U24PC_12() { return static_cast<int32_t>(offsetof(U3CWarpTextU3Ec__Iterator0_t4103237136, ___U24PC_12)); }
	inline int32_t get_U24PC_12() const { return ___U24PC_12; }
	inline int32_t* get_address_of_U24PC_12() { return &___U24PC_12; }
	inline void set_U24PC_12(int32_t value)
	{
		___U24PC_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWARPTEXTU3EC__ITERATOR0_T4103237136_H
#ifndef FPSCOUNTERANCHORPOSITIONS_T1307472096_H
#define FPSCOUNTERANCHORPOSITIONS_T1307472096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_FrameRateCounter/FpsCounterAnchorPositions
struct  FpsCounterAnchorPositions_t1307472096 
{
public:
	// System.Int32 TMPro.Examples.TMP_FrameRateCounter/FpsCounterAnchorPositions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FpsCounterAnchorPositions_t1307472096, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FPSCOUNTERANCHORPOSITIONS_T1307472096_H
#ifndef COMPONENT_T731730528_H
#define COMPONENT_T731730528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t731730528  : public Object_t315965923
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T731730528_H
#ifndef SCRIPTABLEOBJECT_T4108801594_H
#define SCRIPTABLEOBJECT_T4108801594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4108801594  : public Object_t315965923
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4108801594_marshaled_pinvoke : public Object_t315965923_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4108801594_marshaled_com : public Object_t315965923_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T4108801594_H
#ifndef BEHAVIOUR_T2996607246_H
#define BEHAVIOUR_T2996607246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t2996607246  : public Component_t731730528
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T2996607246_H
#ifndef TMP_INPUTVALIDATOR_T2413303239_H
#define TMP_INPUTVALIDATOR_T2413303239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_InputValidator
struct  TMP_InputValidator_t2413303239  : public ScriptableObject_t4108801594
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_INPUTVALIDATOR_T2413303239_H
#ifndef MONOBEHAVIOUR_T3161303725_H
#define MONOBEHAVIOUR_T3161303725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3161303725  : public Behaviour_t2996607246
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3161303725_H
#ifndef TMP_DIGITVALIDATOR_T844730049_H
#define TMP_DIGITVALIDATOR_T844730049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_DigitValidator
struct  TMP_DigitValidator_t844730049  : public TMP_InputValidator_t2413303239
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_DIGITVALIDATOR_T844730049_H
#ifndef TEXTCONSOLESIMULATOR_T2416547963_H
#define TEXTCONSOLESIMULATOR_T2416547963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TextConsoleSimulator
struct  TextConsoleSimulator_t2416547963  : public MonoBehaviour_t3161303725
{
public:
	// TMPro.TMP_Text TMPro.Examples.TextConsoleSimulator::m_TextComponent
	TMP_Text_t717617228 * ___m_TextComponent_2;
	// System.Boolean TMPro.Examples.TextConsoleSimulator::hasTextChanged
	bool ___hasTextChanged_3;

public:
	inline static int32_t get_offset_of_m_TextComponent_2() { return static_cast<int32_t>(offsetof(TextConsoleSimulator_t2416547963, ___m_TextComponent_2)); }
	inline TMP_Text_t717617228 * get_m_TextComponent_2() const { return ___m_TextComponent_2; }
	inline TMP_Text_t717617228 ** get_address_of_m_TextComponent_2() { return &___m_TextComponent_2; }
	inline void set_m_TextComponent_2(TMP_Text_t717617228 * value)
	{
		___m_TextComponent_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_2), value);
	}

	inline static int32_t get_offset_of_hasTextChanged_3() { return static_cast<int32_t>(offsetof(TextConsoleSimulator_t2416547963, ___hasTextChanged_3)); }
	inline bool get_hasTextChanged_3() const { return ___hasTextChanged_3; }
	inline bool* get_address_of_hasTextChanged_3() { return &___hasTextChanged_3; }
	inline void set_hasTextChanged_3(bool value)
	{
		___hasTextChanged_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTCONSOLESIMULATOR_T2416547963_H
#ifndef TEXTMESHPROFLOATINGTEXT_T2820266173_H
#define TEXTMESHPROFLOATINGTEXT_T2820266173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TextMeshProFloatingText
struct  TextMeshProFloatingText_t2820266173  : public MonoBehaviour_t3161303725
{
public:
	// UnityEngine.Font TMPro.Examples.TextMeshProFloatingText::TheFont
	Font_t2702488509 * ___TheFont_2;
	// UnityEngine.GameObject TMPro.Examples.TextMeshProFloatingText::m_floatingText
	GameObject_t3418992616 * ___m_floatingText_3;
	// TMPro.TextMeshPro TMPro.Examples.TextMeshProFloatingText::m_textMeshPro
	TextMeshPro_t2730025418 * ___m_textMeshPro_4;
	// UnityEngine.TextMesh TMPro.Examples.TextMeshProFloatingText::m_textMesh
	TextMesh_t2724438670 * ___m_textMesh_5;
	// UnityEngine.Transform TMPro.Examples.TextMeshProFloatingText::m_transform
	Transform_t1635685313 * ___m_transform_6;
	// UnityEngine.Transform TMPro.Examples.TextMeshProFloatingText::m_floatingText_Transform
	Transform_t1635685313 * ___m_floatingText_Transform_7;
	// UnityEngine.Transform TMPro.Examples.TextMeshProFloatingText::m_cameraTransform
	Transform_t1635685313 * ___m_cameraTransform_8;
	// UnityEngine.Vector3 TMPro.Examples.TextMeshProFloatingText::lastPOS
	Vector3_t810140550  ___lastPOS_9;
	// UnityEngine.Quaternion TMPro.Examples.TextMeshProFloatingText::lastRotation
	Quaternion_t18359934  ___lastRotation_10;
	// System.Int32 TMPro.Examples.TextMeshProFloatingText::SpawnType
	int32_t ___SpawnType_11;

public:
	inline static int32_t get_offset_of_TheFont_2() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2820266173, ___TheFont_2)); }
	inline Font_t2702488509 * get_TheFont_2() const { return ___TheFont_2; }
	inline Font_t2702488509 ** get_address_of_TheFont_2() { return &___TheFont_2; }
	inline void set_TheFont_2(Font_t2702488509 * value)
	{
		___TheFont_2 = value;
		Il2CppCodeGenWriteBarrier((&___TheFont_2), value);
	}

	inline static int32_t get_offset_of_m_floatingText_3() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2820266173, ___m_floatingText_3)); }
	inline GameObject_t3418992616 * get_m_floatingText_3() const { return ___m_floatingText_3; }
	inline GameObject_t3418992616 ** get_address_of_m_floatingText_3() { return &___m_floatingText_3; }
	inline void set_m_floatingText_3(GameObject_t3418992616 * value)
	{
		___m_floatingText_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_floatingText_3), value);
	}

	inline static int32_t get_offset_of_m_textMeshPro_4() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2820266173, ___m_textMeshPro_4)); }
	inline TextMeshPro_t2730025418 * get_m_textMeshPro_4() const { return ___m_textMeshPro_4; }
	inline TextMeshPro_t2730025418 ** get_address_of_m_textMeshPro_4() { return &___m_textMeshPro_4; }
	inline void set_m_textMeshPro_4(TextMeshPro_t2730025418 * value)
	{
		___m_textMeshPro_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_textMeshPro_4), value);
	}

	inline static int32_t get_offset_of_m_textMesh_5() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2820266173, ___m_textMesh_5)); }
	inline TextMesh_t2724438670 * get_m_textMesh_5() const { return ___m_textMesh_5; }
	inline TextMesh_t2724438670 ** get_address_of_m_textMesh_5() { return &___m_textMesh_5; }
	inline void set_m_textMesh_5(TextMesh_t2724438670 * value)
	{
		___m_textMesh_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_textMesh_5), value);
	}

	inline static int32_t get_offset_of_m_transform_6() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2820266173, ___m_transform_6)); }
	inline Transform_t1635685313 * get_m_transform_6() const { return ___m_transform_6; }
	inline Transform_t1635685313 ** get_address_of_m_transform_6() { return &___m_transform_6; }
	inline void set_m_transform_6(Transform_t1635685313 * value)
	{
		___m_transform_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_transform_6), value);
	}

	inline static int32_t get_offset_of_m_floatingText_Transform_7() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2820266173, ___m_floatingText_Transform_7)); }
	inline Transform_t1635685313 * get_m_floatingText_Transform_7() const { return ___m_floatingText_Transform_7; }
	inline Transform_t1635685313 ** get_address_of_m_floatingText_Transform_7() { return &___m_floatingText_Transform_7; }
	inline void set_m_floatingText_Transform_7(Transform_t1635685313 * value)
	{
		___m_floatingText_Transform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_floatingText_Transform_7), value);
	}

	inline static int32_t get_offset_of_m_cameraTransform_8() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2820266173, ___m_cameraTransform_8)); }
	inline Transform_t1635685313 * get_m_cameraTransform_8() const { return ___m_cameraTransform_8; }
	inline Transform_t1635685313 ** get_address_of_m_cameraTransform_8() { return &___m_cameraTransform_8; }
	inline void set_m_cameraTransform_8(Transform_t1635685313 * value)
	{
		___m_cameraTransform_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_cameraTransform_8), value);
	}

	inline static int32_t get_offset_of_lastPOS_9() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2820266173, ___lastPOS_9)); }
	inline Vector3_t810140550  get_lastPOS_9() const { return ___lastPOS_9; }
	inline Vector3_t810140550 * get_address_of_lastPOS_9() { return &___lastPOS_9; }
	inline void set_lastPOS_9(Vector3_t810140550  value)
	{
		___lastPOS_9 = value;
	}

	inline static int32_t get_offset_of_lastRotation_10() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2820266173, ___lastRotation_10)); }
	inline Quaternion_t18359934  get_lastRotation_10() const { return ___lastRotation_10; }
	inline Quaternion_t18359934 * get_address_of_lastRotation_10() { return &___lastRotation_10; }
	inline void set_lastRotation_10(Quaternion_t18359934  value)
	{
		___lastRotation_10 = value;
	}

	inline static int32_t get_offset_of_SpawnType_11() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2820266173, ___SpawnType_11)); }
	inline int32_t get_SpawnType_11() const { return ___SpawnType_11; }
	inline int32_t* get_address_of_SpawnType_11() { return &___SpawnType_11; }
	inline void set_SpawnType_11(int32_t value)
	{
		___SpawnType_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESHPROFLOATINGTEXT_T2820266173_H
#ifndef SIMPLESCRIPT_T2850558685_H
#define SIMPLESCRIPT_T2850558685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.SimpleScript
struct  SimpleScript_t2850558685  : public MonoBehaviour_t3161303725
{
public:
	// TMPro.TextMeshPro TMPro.Examples.SimpleScript::m_textMeshPro
	TextMeshPro_t2730025418 * ___m_textMeshPro_2;
	// System.Single TMPro.Examples.SimpleScript::m_frame
	float ___m_frame_4;

public:
	inline static int32_t get_offset_of_m_textMeshPro_2() { return static_cast<int32_t>(offsetof(SimpleScript_t2850558685, ___m_textMeshPro_2)); }
	inline TextMeshPro_t2730025418 * get_m_textMeshPro_2() const { return ___m_textMeshPro_2; }
	inline TextMeshPro_t2730025418 ** get_address_of_m_textMeshPro_2() { return &___m_textMeshPro_2; }
	inline void set_m_textMeshPro_2(TextMeshPro_t2730025418 * value)
	{
		___m_textMeshPro_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_textMeshPro_2), value);
	}

	inline static int32_t get_offset_of_m_frame_4() { return static_cast<int32_t>(offsetof(SimpleScript_t2850558685, ___m_frame_4)); }
	inline float get_m_frame_4() const { return ___m_frame_4; }
	inline float* get_address_of_m_frame_4() { return &___m_frame_4; }
	inline void set_m_frame_4(float value)
	{
		___m_frame_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLESCRIPT_T2850558685_H
#ifndef SHADERPROPANIMATOR_T3327056230_H
#define SHADERPROPANIMATOR_T3327056230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.ShaderPropAnimator
struct  ShaderPropAnimator_t3327056230  : public MonoBehaviour_t3161303725
{
public:
	// UnityEngine.Renderer TMPro.Examples.ShaderPropAnimator::m_Renderer
	Renderer_t4098088352 * ___m_Renderer_2;
	// UnityEngine.Material TMPro.Examples.ShaderPropAnimator::m_Material
	Material_t2831551705 * ___m_Material_3;
	// UnityEngine.AnimationCurve TMPro.Examples.ShaderPropAnimator::GlowCurve
	AnimationCurve_t1171892010 * ___GlowCurve_4;
	// System.Single TMPro.Examples.ShaderPropAnimator::m_frame
	float ___m_frame_5;

public:
	inline static int32_t get_offset_of_m_Renderer_2() { return static_cast<int32_t>(offsetof(ShaderPropAnimator_t3327056230, ___m_Renderer_2)); }
	inline Renderer_t4098088352 * get_m_Renderer_2() const { return ___m_Renderer_2; }
	inline Renderer_t4098088352 ** get_address_of_m_Renderer_2() { return &___m_Renderer_2; }
	inline void set_m_Renderer_2(Renderer_t4098088352 * value)
	{
		___m_Renderer_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Renderer_2), value);
	}

	inline static int32_t get_offset_of_m_Material_3() { return static_cast<int32_t>(offsetof(ShaderPropAnimator_t3327056230, ___m_Material_3)); }
	inline Material_t2831551705 * get_m_Material_3() const { return ___m_Material_3; }
	inline Material_t2831551705 ** get_address_of_m_Material_3() { return &___m_Material_3; }
	inline void set_m_Material_3(Material_t2831551705 * value)
	{
		___m_Material_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_3), value);
	}

	inline static int32_t get_offset_of_GlowCurve_4() { return static_cast<int32_t>(offsetof(ShaderPropAnimator_t3327056230, ___GlowCurve_4)); }
	inline AnimationCurve_t1171892010 * get_GlowCurve_4() const { return ___GlowCurve_4; }
	inline AnimationCurve_t1171892010 ** get_address_of_GlowCurve_4() { return &___GlowCurve_4; }
	inline void set_GlowCurve_4(AnimationCurve_t1171892010 * value)
	{
		___GlowCurve_4 = value;
		Il2CppCodeGenWriteBarrier((&___GlowCurve_4), value);
	}

	inline static int32_t get_offset_of_m_frame_5() { return static_cast<int32_t>(offsetof(ShaderPropAnimator_t3327056230, ___m_frame_5)); }
	inline float get_m_frame_5() const { return ___m_frame_5; }
	inline float* get_address_of_m_frame_5() { return &___m_frame_5; }
	inline void set_m_frame_5(float value)
	{
		___m_frame_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADERPROPANIMATOR_T3327056230_H
#ifndef TELETYPE_T2190958428_H
#define TELETYPE_T2190958428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TeleType
struct  TeleType_t2190958428  : public MonoBehaviour_t3161303725
{
public:
	// System.String TMPro.Examples.TeleType::label01
	String_t* ___label01_2;
	// System.String TMPro.Examples.TeleType::label02
	String_t* ___label02_3;
	// TMPro.TMP_Text TMPro.Examples.TeleType::m_textMeshPro
	TMP_Text_t717617228 * ___m_textMeshPro_4;

public:
	inline static int32_t get_offset_of_label01_2() { return static_cast<int32_t>(offsetof(TeleType_t2190958428, ___label01_2)); }
	inline String_t* get_label01_2() const { return ___label01_2; }
	inline String_t** get_address_of_label01_2() { return &___label01_2; }
	inline void set_label01_2(String_t* value)
	{
		___label01_2 = value;
		Il2CppCodeGenWriteBarrier((&___label01_2), value);
	}

	inline static int32_t get_offset_of_label02_3() { return static_cast<int32_t>(offsetof(TeleType_t2190958428, ___label02_3)); }
	inline String_t* get_label02_3() const { return ___label02_3; }
	inline String_t** get_address_of_label02_3() { return &___label02_3; }
	inline void set_label02_3(String_t* value)
	{
		___label02_3 = value;
		Il2CppCodeGenWriteBarrier((&___label02_3), value);
	}

	inline static int32_t get_offset_of_m_textMeshPro_4() { return static_cast<int32_t>(offsetof(TeleType_t2190958428, ___m_textMeshPro_4)); }
	inline TMP_Text_t717617228 * get_m_textMeshPro_4() const { return ___m_textMeshPro_4; }
	inline TMP_Text_t717617228 ** get_address_of_m_textMeshPro_4() { return &___m_textMeshPro_4; }
	inline void set_m_textMeshPro_4(TMP_Text_t717617228 * value)
	{
		___m_textMeshPro_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_textMeshPro_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TELETYPE_T2190958428_H
#ifndef SKEWTEXTEXAMPLE_T1573568503_H
#define SKEWTEXTEXAMPLE_T1573568503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.SkewTextExample
struct  SkewTextExample_t1573568503  : public MonoBehaviour_t3161303725
{
public:
	// TMPro.TMP_Text TMPro.Examples.SkewTextExample::m_TextComponent
	TMP_Text_t717617228 * ___m_TextComponent_2;
	// UnityEngine.AnimationCurve TMPro.Examples.SkewTextExample::VertexCurve
	AnimationCurve_t1171892010 * ___VertexCurve_3;
	// System.Single TMPro.Examples.SkewTextExample::CurveScale
	float ___CurveScale_4;
	// System.Single TMPro.Examples.SkewTextExample::ShearAmount
	float ___ShearAmount_5;

public:
	inline static int32_t get_offset_of_m_TextComponent_2() { return static_cast<int32_t>(offsetof(SkewTextExample_t1573568503, ___m_TextComponent_2)); }
	inline TMP_Text_t717617228 * get_m_TextComponent_2() const { return ___m_TextComponent_2; }
	inline TMP_Text_t717617228 ** get_address_of_m_TextComponent_2() { return &___m_TextComponent_2; }
	inline void set_m_TextComponent_2(TMP_Text_t717617228 * value)
	{
		___m_TextComponent_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_2), value);
	}

	inline static int32_t get_offset_of_VertexCurve_3() { return static_cast<int32_t>(offsetof(SkewTextExample_t1573568503, ___VertexCurve_3)); }
	inline AnimationCurve_t1171892010 * get_VertexCurve_3() const { return ___VertexCurve_3; }
	inline AnimationCurve_t1171892010 ** get_address_of_VertexCurve_3() { return &___VertexCurve_3; }
	inline void set_VertexCurve_3(AnimationCurve_t1171892010 * value)
	{
		___VertexCurve_3 = value;
		Il2CppCodeGenWriteBarrier((&___VertexCurve_3), value);
	}

	inline static int32_t get_offset_of_CurveScale_4() { return static_cast<int32_t>(offsetof(SkewTextExample_t1573568503, ___CurveScale_4)); }
	inline float get_CurveScale_4() const { return ___CurveScale_4; }
	inline float* get_address_of_CurveScale_4() { return &___CurveScale_4; }
	inline void set_CurveScale_4(float value)
	{
		___CurveScale_4 = value;
	}

	inline static int32_t get_offset_of_ShearAmount_5() { return static_cast<int32_t>(offsetof(SkewTextExample_t1573568503, ___ShearAmount_5)); }
	inline float get_ShearAmount_5() const { return ___ShearAmount_5; }
	inline float* get_address_of_ShearAmount_5() { return &___ShearAmount_5; }
	inline void set_ShearAmount_5(float value)
	{
		___ShearAmount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKEWTEXTEXAMPLE_T1573568503_H
#ifndef WARPTEXTEXAMPLE_T826099379_H
#define WARPTEXTEXAMPLE_T826099379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.WarpTextExample
struct  WarpTextExample_t826099379  : public MonoBehaviour_t3161303725
{
public:
	// TMPro.TMP_Text TMPro.Examples.WarpTextExample::m_TextComponent
	TMP_Text_t717617228 * ___m_TextComponent_2;
	// UnityEngine.AnimationCurve TMPro.Examples.WarpTextExample::VertexCurve
	AnimationCurve_t1171892010 * ___VertexCurve_3;
	// System.Single TMPro.Examples.WarpTextExample::AngleMultiplier
	float ___AngleMultiplier_4;
	// System.Single TMPro.Examples.WarpTextExample::SpeedMultiplier
	float ___SpeedMultiplier_5;
	// System.Single TMPro.Examples.WarpTextExample::CurveScale
	float ___CurveScale_6;

public:
	inline static int32_t get_offset_of_m_TextComponent_2() { return static_cast<int32_t>(offsetof(WarpTextExample_t826099379, ___m_TextComponent_2)); }
	inline TMP_Text_t717617228 * get_m_TextComponent_2() const { return ___m_TextComponent_2; }
	inline TMP_Text_t717617228 ** get_address_of_m_TextComponent_2() { return &___m_TextComponent_2; }
	inline void set_m_TextComponent_2(TMP_Text_t717617228 * value)
	{
		___m_TextComponent_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_2), value);
	}

	inline static int32_t get_offset_of_VertexCurve_3() { return static_cast<int32_t>(offsetof(WarpTextExample_t826099379, ___VertexCurve_3)); }
	inline AnimationCurve_t1171892010 * get_VertexCurve_3() const { return ___VertexCurve_3; }
	inline AnimationCurve_t1171892010 ** get_address_of_VertexCurve_3() { return &___VertexCurve_3; }
	inline void set_VertexCurve_3(AnimationCurve_t1171892010 * value)
	{
		___VertexCurve_3 = value;
		Il2CppCodeGenWriteBarrier((&___VertexCurve_3), value);
	}

	inline static int32_t get_offset_of_AngleMultiplier_4() { return static_cast<int32_t>(offsetof(WarpTextExample_t826099379, ___AngleMultiplier_4)); }
	inline float get_AngleMultiplier_4() const { return ___AngleMultiplier_4; }
	inline float* get_address_of_AngleMultiplier_4() { return &___AngleMultiplier_4; }
	inline void set_AngleMultiplier_4(float value)
	{
		___AngleMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_5() { return static_cast<int32_t>(offsetof(WarpTextExample_t826099379, ___SpeedMultiplier_5)); }
	inline float get_SpeedMultiplier_5() const { return ___SpeedMultiplier_5; }
	inline float* get_address_of_SpeedMultiplier_5() { return &___SpeedMultiplier_5; }
	inline void set_SpeedMultiplier_5(float value)
	{
		___SpeedMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_CurveScale_6() { return static_cast<int32_t>(offsetof(WarpTextExample_t826099379, ___CurveScale_6)); }
	inline float get_CurveScale_6() const { return ___CurveScale_6; }
	inline float* get_address_of_CurveScale_6() { return &___CurveScale_6; }
	inline void set_CurveScale_6(float value)
	{
		___CurveScale_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WARPTEXTEXAMPLE_T826099379_H
#ifndef TMP_EXAMPLESCRIPT_01_T3990707700_H
#define TMP_EXAMPLESCRIPT_01_T3990707700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_ExampleScript_01
struct  TMP_ExampleScript_01_t3990707700  : public MonoBehaviour_t3161303725
{
public:
	// TMPro.Examples.TMP_ExampleScript_01/objectType TMPro.Examples.TMP_ExampleScript_01::ObjectType
	int32_t ___ObjectType_2;
	// System.Boolean TMPro.Examples.TMP_ExampleScript_01::isStatic
	bool ___isStatic_3;
	// TMPro.TMP_Text TMPro.Examples.TMP_ExampleScript_01::m_text
	TMP_Text_t717617228 * ___m_text_4;
	// System.Int32 TMPro.Examples.TMP_ExampleScript_01::count
	int32_t ___count_6;

public:
	inline static int32_t get_offset_of_ObjectType_2() { return static_cast<int32_t>(offsetof(TMP_ExampleScript_01_t3990707700, ___ObjectType_2)); }
	inline int32_t get_ObjectType_2() const { return ___ObjectType_2; }
	inline int32_t* get_address_of_ObjectType_2() { return &___ObjectType_2; }
	inline void set_ObjectType_2(int32_t value)
	{
		___ObjectType_2 = value;
	}

	inline static int32_t get_offset_of_isStatic_3() { return static_cast<int32_t>(offsetof(TMP_ExampleScript_01_t3990707700, ___isStatic_3)); }
	inline bool get_isStatic_3() const { return ___isStatic_3; }
	inline bool* get_address_of_isStatic_3() { return &___isStatic_3; }
	inline void set_isStatic_3(bool value)
	{
		___isStatic_3 = value;
	}

	inline static int32_t get_offset_of_m_text_4() { return static_cast<int32_t>(offsetof(TMP_ExampleScript_01_t3990707700, ___m_text_4)); }
	inline TMP_Text_t717617228 * get_m_text_4() const { return ___m_text_4; }
	inline TMP_Text_t717617228 ** get_address_of_m_text_4() { return &___m_text_4; }
	inline void set_m_text_4(TMP_Text_t717617228 * value)
	{
		___m_text_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_4), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(TMP_ExampleScript_01_t3990707700, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_EXAMPLESCRIPT_01_T3990707700_H
#ifndef TMP_TEXTINFODEBUGTOOL_T4008839466_H
#define TMP_TEXTINFODEBUGTOOL_T4008839466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_TextInfoDebugTool
struct  TMP_TextInfoDebugTool_t4008839466  : public MonoBehaviour_t3161303725
{
public:
	// System.Boolean TMPro.Examples.TMP_TextInfoDebugTool::ShowCharacters
	bool ___ShowCharacters_2;
	// System.Boolean TMPro.Examples.TMP_TextInfoDebugTool::ShowWords
	bool ___ShowWords_3;
	// System.Boolean TMPro.Examples.TMP_TextInfoDebugTool::ShowLinks
	bool ___ShowLinks_4;
	// System.Boolean TMPro.Examples.TMP_TextInfoDebugTool::ShowLines
	bool ___ShowLines_5;
	// System.Boolean TMPro.Examples.TMP_TextInfoDebugTool::ShowMeshBounds
	bool ___ShowMeshBounds_6;
	// System.Boolean TMPro.Examples.TMP_TextInfoDebugTool::ShowTextBounds
	bool ___ShowTextBounds_7;
	// System.String TMPro.Examples.TMP_TextInfoDebugTool::ObjectStats
	String_t* ___ObjectStats_8;
	// TMPro.TMP_Text TMPro.Examples.TMP_TextInfoDebugTool::m_TextComponent
	TMP_Text_t717617228 * ___m_TextComponent_9;
	// UnityEngine.Transform TMPro.Examples.TMP_TextInfoDebugTool::m_Transform
	Transform_t1635685313 * ___m_Transform_10;

public:
	inline static int32_t get_offset_of_ShowCharacters_2() { return static_cast<int32_t>(offsetof(TMP_TextInfoDebugTool_t4008839466, ___ShowCharacters_2)); }
	inline bool get_ShowCharacters_2() const { return ___ShowCharacters_2; }
	inline bool* get_address_of_ShowCharacters_2() { return &___ShowCharacters_2; }
	inline void set_ShowCharacters_2(bool value)
	{
		___ShowCharacters_2 = value;
	}

	inline static int32_t get_offset_of_ShowWords_3() { return static_cast<int32_t>(offsetof(TMP_TextInfoDebugTool_t4008839466, ___ShowWords_3)); }
	inline bool get_ShowWords_3() const { return ___ShowWords_3; }
	inline bool* get_address_of_ShowWords_3() { return &___ShowWords_3; }
	inline void set_ShowWords_3(bool value)
	{
		___ShowWords_3 = value;
	}

	inline static int32_t get_offset_of_ShowLinks_4() { return static_cast<int32_t>(offsetof(TMP_TextInfoDebugTool_t4008839466, ___ShowLinks_4)); }
	inline bool get_ShowLinks_4() const { return ___ShowLinks_4; }
	inline bool* get_address_of_ShowLinks_4() { return &___ShowLinks_4; }
	inline void set_ShowLinks_4(bool value)
	{
		___ShowLinks_4 = value;
	}

	inline static int32_t get_offset_of_ShowLines_5() { return static_cast<int32_t>(offsetof(TMP_TextInfoDebugTool_t4008839466, ___ShowLines_5)); }
	inline bool get_ShowLines_5() const { return ___ShowLines_5; }
	inline bool* get_address_of_ShowLines_5() { return &___ShowLines_5; }
	inline void set_ShowLines_5(bool value)
	{
		___ShowLines_5 = value;
	}

	inline static int32_t get_offset_of_ShowMeshBounds_6() { return static_cast<int32_t>(offsetof(TMP_TextInfoDebugTool_t4008839466, ___ShowMeshBounds_6)); }
	inline bool get_ShowMeshBounds_6() const { return ___ShowMeshBounds_6; }
	inline bool* get_address_of_ShowMeshBounds_6() { return &___ShowMeshBounds_6; }
	inline void set_ShowMeshBounds_6(bool value)
	{
		___ShowMeshBounds_6 = value;
	}

	inline static int32_t get_offset_of_ShowTextBounds_7() { return static_cast<int32_t>(offsetof(TMP_TextInfoDebugTool_t4008839466, ___ShowTextBounds_7)); }
	inline bool get_ShowTextBounds_7() const { return ___ShowTextBounds_7; }
	inline bool* get_address_of_ShowTextBounds_7() { return &___ShowTextBounds_7; }
	inline void set_ShowTextBounds_7(bool value)
	{
		___ShowTextBounds_7 = value;
	}

	inline static int32_t get_offset_of_ObjectStats_8() { return static_cast<int32_t>(offsetof(TMP_TextInfoDebugTool_t4008839466, ___ObjectStats_8)); }
	inline String_t* get_ObjectStats_8() const { return ___ObjectStats_8; }
	inline String_t** get_address_of_ObjectStats_8() { return &___ObjectStats_8; }
	inline void set_ObjectStats_8(String_t* value)
	{
		___ObjectStats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectStats_8), value);
	}

	inline static int32_t get_offset_of_m_TextComponent_9() { return static_cast<int32_t>(offsetof(TMP_TextInfoDebugTool_t4008839466, ___m_TextComponent_9)); }
	inline TMP_Text_t717617228 * get_m_TextComponent_9() const { return ___m_TextComponent_9; }
	inline TMP_Text_t717617228 ** get_address_of_m_TextComponent_9() { return &___m_TextComponent_9; }
	inline void set_m_TextComponent_9(TMP_Text_t717617228 * value)
	{
		___m_TextComponent_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_9), value);
	}

	inline static int32_t get_offset_of_m_Transform_10() { return static_cast<int32_t>(offsetof(TMP_TextInfoDebugTool_t4008839466, ___m_Transform_10)); }
	inline Transform_t1635685313 * get_m_Transform_10() const { return ___m_Transform_10; }
	inline Transform_t1635685313 ** get_address_of_m_Transform_10() { return &___m_Transform_10; }
	inline void set_m_Transform_10(Transform_t1635685313 * value)
	{
		___m_Transform_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Transform_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_TEXTINFODEBUGTOOL_T4008839466_H
#ifndef TMP_FRAMERATECOUNTER_T3128181729_H
#define TMP_FRAMERATECOUNTER_T3128181729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_FrameRateCounter
struct  TMP_FrameRateCounter_t3128181729  : public MonoBehaviour_t3161303725
{
public:
	// System.Single TMPro.Examples.TMP_FrameRateCounter::UpdateInterval
	float ___UpdateInterval_2;
	// System.Single TMPro.Examples.TMP_FrameRateCounter::m_LastInterval
	float ___m_LastInterval_3;
	// System.Int32 TMPro.Examples.TMP_FrameRateCounter::m_Frames
	int32_t ___m_Frames_4;
	// TMPro.Examples.TMP_FrameRateCounter/FpsCounterAnchorPositions TMPro.Examples.TMP_FrameRateCounter::AnchorPosition
	int32_t ___AnchorPosition_5;
	// System.String TMPro.Examples.TMP_FrameRateCounter::htmlColorTag
	String_t* ___htmlColorTag_6;
	// TMPro.TextMeshPro TMPro.Examples.TMP_FrameRateCounter::m_TextMeshPro
	TextMeshPro_t2730025418 * ___m_TextMeshPro_8;
	// UnityEngine.Transform TMPro.Examples.TMP_FrameRateCounter::m_frameCounter_transform
	Transform_t1635685313 * ___m_frameCounter_transform_9;
	// UnityEngine.Camera TMPro.Examples.TMP_FrameRateCounter::m_camera
	Camera_t614277760 * ___m_camera_10;
	// TMPro.Examples.TMP_FrameRateCounter/FpsCounterAnchorPositions TMPro.Examples.TMP_FrameRateCounter::last_AnchorPosition
	int32_t ___last_AnchorPosition_11;

public:
	inline static int32_t get_offset_of_UpdateInterval_2() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t3128181729, ___UpdateInterval_2)); }
	inline float get_UpdateInterval_2() const { return ___UpdateInterval_2; }
	inline float* get_address_of_UpdateInterval_2() { return &___UpdateInterval_2; }
	inline void set_UpdateInterval_2(float value)
	{
		___UpdateInterval_2 = value;
	}

	inline static int32_t get_offset_of_m_LastInterval_3() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t3128181729, ___m_LastInterval_3)); }
	inline float get_m_LastInterval_3() const { return ___m_LastInterval_3; }
	inline float* get_address_of_m_LastInterval_3() { return &___m_LastInterval_3; }
	inline void set_m_LastInterval_3(float value)
	{
		___m_LastInterval_3 = value;
	}

	inline static int32_t get_offset_of_m_Frames_4() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t3128181729, ___m_Frames_4)); }
	inline int32_t get_m_Frames_4() const { return ___m_Frames_4; }
	inline int32_t* get_address_of_m_Frames_4() { return &___m_Frames_4; }
	inline void set_m_Frames_4(int32_t value)
	{
		___m_Frames_4 = value;
	}

	inline static int32_t get_offset_of_AnchorPosition_5() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t3128181729, ___AnchorPosition_5)); }
	inline int32_t get_AnchorPosition_5() const { return ___AnchorPosition_5; }
	inline int32_t* get_address_of_AnchorPosition_5() { return &___AnchorPosition_5; }
	inline void set_AnchorPosition_5(int32_t value)
	{
		___AnchorPosition_5 = value;
	}

	inline static int32_t get_offset_of_htmlColorTag_6() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t3128181729, ___htmlColorTag_6)); }
	inline String_t* get_htmlColorTag_6() const { return ___htmlColorTag_6; }
	inline String_t** get_address_of_htmlColorTag_6() { return &___htmlColorTag_6; }
	inline void set_htmlColorTag_6(String_t* value)
	{
		___htmlColorTag_6 = value;
		Il2CppCodeGenWriteBarrier((&___htmlColorTag_6), value);
	}

	inline static int32_t get_offset_of_m_TextMeshPro_8() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t3128181729, ___m_TextMeshPro_8)); }
	inline TextMeshPro_t2730025418 * get_m_TextMeshPro_8() const { return ___m_TextMeshPro_8; }
	inline TextMeshPro_t2730025418 ** get_address_of_m_TextMeshPro_8() { return &___m_TextMeshPro_8; }
	inline void set_m_TextMeshPro_8(TextMeshPro_t2730025418 * value)
	{
		___m_TextMeshPro_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextMeshPro_8), value);
	}

	inline static int32_t get_offset_of_m_frameCounter_transform_9() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t3128181729, ___m_frameCounter_transform_9)); }
	inline Transform_t1635685313 * get_m_frameCounter_transform_9() const { return ___m_frameCounter_transform_9; }
	inline Transform_t1635685313 ** get_address_of_m_frameCounter_transform_9() { return &___m_frameCounter_transform_9; }
	inline void set_m_frameCounter_transform_9(Transform_t1635685313 * value)
	{
		___m_frameCounter_transform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_frameCounter_transform_9), value);
	}

	inline static int32_t get_offset_of_m_camera_10() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t3128181729, ___m_camera_10)); }
	inline Camera_t614277760 * get_m_camera_10() const { return ___m_camera_10; }
	inline Camera_t614277760 ** get_address_of_m_camera_10() { return &___m_camera_10; }
	inline void set_m_camera_10(Camera_t614277760 * value)
	{
		___m_camera_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_camera_10), value);
	}

	inline static int32_t get_offset_of_last_AnchorPosition_11() { return static_cast<int32_t>(offsetof(TMP_FrameRateCounter_t3128181729, ___last_AnchorPosition_11)); }
	inline int32_t get_last_AnchorPosition_11() const { return ___last_AnchorPosition_11; }
	inline int32_t* get_address_of_last_AnchorPosition_11() { return &___last_AnchorPosition_11; }
	inline void set_last_AnchorPosition_11(int32_t value)
	{
		___last_AnchorPosition_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_FRAMERATECOUNTER_T3128181729_H
#ifndef VERTEXZOOM_T1781881840_H
#define VERTEXZOOM_T1781881840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.VertexZoom
struct  VertexZoom_t1781881840  : public MonoBehaviour_t3161303725
{
public:
	// System.Single TMPro.Examples.VertexZoom::AngleMultiplier
	float ___AngleMultiplier_2;
	// System.Single TMPro.Examples.VertexZoom::SpeedMultiplier
	float ___SpeedMultiplier_3;
	// System.Single TMPro.Examples.VertexZoom::CurveScale
	float ___CurveScale_4;
	// TMPro.TMP_Text TMPro.Examples.VertexZoom::m_TextComponent
	TMP_Text_t717617228 * ___m_TextComponent_5;
	// System.Boolean TMPro.Examples.VertexZoom::hasTextChanged
	bool ___hasTextChanged_6;

public:
	inline static int32_t get_offset_of_AngleMultiplier_2() { return static_cast<int32_t>(offsetof(VertexZoom_t1781881840, ___AngleMultiplier_2)); }
	inline float get_AngleMultiplier_2() const { return ___AngleMultiplier_2; }
	inline float* get_address_of_AngleMultiplier_2() { return &___AngleMultiplier_2; }
	inline void set_AngleMultiplier_2(float value)
	{
		___AngleMultiplier_2 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_3() { return static_cast<int32_t>(offsetof(VertexZoom_t1781881840, ___SpeedMultiplier_3)); }
	inline float get_SpeedMultiplier_3() const { return ___SpeedMultiplier_3; }
	inline float* get_address_of_SpeedMultiplier_3() { return &___SpeedMultiplier_3; }
	inline void set_SpeedMultiplier_3(float value)
	{
		___SpeedMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_CurveScale_4() { return static_cast<int32_t>(offsetof(VertexZoom_t1781881840, ___CurveScale_4)); }
	inline float get_CurveScale_4() const { return ___CurveScale_4; }
	inline float* get_address_of_CurveScale_4() { return &___CurveScale_4; }
	inline void set_CurveScale_4(float value)
	{
		___CurveScale_4 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_5() { return static_cast<int32_t>(offsetof(VertexZoom_t1781881840, ___m_TextComponent_5)); }
	inline TMP_Text_t717617228 * get_m_TextComponent_5() const { return ___m_TextComponent_5; }
	inline TMP_Text_t717617228 ** get_address_of_m_TextComponent_5() { return &___m_TextComponent_5; }
	inline void set_m_TextComponent_5(TMP_Text_t717617228 * value)
	{
		___m_TextComponent_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_5), value);
	}

	inline static int32_t get_offset_of_hasTextChanged_6() { return static_cast<int32_t>(offsetof(VertexZoom_t1781881840, ___hasTextChanged_6)); }
	inline bool get_hasTextChanged_6() const { return ___hasTextChanged_6; }
	inline bool* get_address_of_hasTextChanged_6() { return &___hasTextChanged_6; }
	inline void set_hasTextChanged_6(bool value)
	{
		___hasTextChanged_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXZOOM_T1781881840_H
#ifndef VERTEXSHAKEB_T1391118062_H
#define VERTEXSHAKEB_T1391118062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.VertexShakeB
struct  VertexShakeB_t1391118062  : public MonoBehaviour_t3161303725
{
public:
	// System.Single TMPro.Examples.VertexShakeB::AngleMultiplier
	float ___AngleMultiplier_2;
	// System.Single TMPro.Examples.VertexShakeB::SpeedMultiplier
	float ___SpeedMultiplier_3;
	// System.Single TMPro.Examples.VertexShakeB::CurveScale
	float ___CurveScale_4;
	// TMPro.TMP_Text TMPro.Examples.VertexShakeB::m_TextComponent
	TMP_Text_t717617228 * ___m_TextComponent_5;
	// System.Boolean TMPro.Examples.VertexShakeB::hasTextChanged
	bool ___hasTextChanged_6;

public:
	inline static int32_t get_offset_of_AngleMultiplier_2() { return static_cast<int32_t>(offsetof(VertexShakeB_t1391118062, ___AngleMultiplier_2)); }
	inline float get_AngleMultiplier_2() const { return ___AngleMultiplier_2; }
	inline float* get_address_of_AngleMultiplier_2() { return &___AngleMultiplier_2; }
	inline void set_AngleMultiplier_2(float value)
	{
		___AngleMultiplier_2 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_3() { return static_cast<int32_t>(offsetof(VertexShakeB_t1391118062, ___SpeedMultiplier_3)); }
	inline float get_SpeedMultiplier_3() const { return ___SpeedMultiplier_3; }
	inline float* get_address_of_SpeedMultiplier_3() { return &___SpeedMultiplier_3; }
	inline void set_SpeedMultiplier_3(float value)
	{
		___SpeedMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_CurveScale_4() { return static_cast<int32_t>(offsetof(VertexShakeB_t1391118062, ___CurveScale_4)); }
	inline float get_CurveScale_4() const { return ___CurveScale_4; }
	inline float* get_address_of_CurveScale_4() { return &___CurveScale_4; }
	inline void set_CurveScale_4(float value)
	{
		___CurveScale_4 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_5() { return static_cast<int32_t>(offsetof(VertexShakeB_t1391118062, ___m_TextComponent_5)); }
	inline TMP_Text_t717617228 * get_m_TextComponent_5() const { return ___m_TextComponent_5; }
	inline TMP_Text_t717617228 ** get_address_of_m_TextComponent_5() { return &___m_TextComponent_5; }
	inline void set_m_TextComponent_5(TMP_Text_t717617228 * value)
	{
		___m_TextComponent_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_5), value);
	}

	inline static int32_t get_offset_of_hasTextChanged_6() { return static_cast<int32_t>(offsetof(VertexShakeB_t1391118062, ___hasTextChanged_6)); }
	inline bool get_hasTextChanged_6() const { return ___hasTextChanged_6; }
	inline bool* get_address_of_hasTextChanged_6() { return &___hasTextChanged_6; }
	inline void set_hasTextChanged_6(bool value)
	{
		___hasTextChanged_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXSHAKEB_T1391118062_H
#ifndef TMP_TEXTEVENTCHECK_T14418682_H
#define TMP_TEXTEVENTCHECK_T14418682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_TextEventCheck
struct  TMP_TextEventCheck_t14418682  : public MonoBehaviour_t3161303725
{
public:
	// TMPro.TMP_TextEventHandler TMPro.Examples.TMP_TextEventCheck::TextEventHandler
	TMP_TextEventHandler_t3534282063 * ___TextEventHandler_2;

public:
	inline static int32_t get_offset_of_TextEventHandler_2() { return static_cast<int32_t>(offsetof(TMP_TextEventCheck_t14418682, ___TextEventHandler_2)); }
	inline TMP_TextEventHandler_t3534282063 * get_TextEventHandler_2() const { return ___TextEventHandler_2; }
	inline TMP_TextEventHandler_t3534282063 ** get_address_of_TextEventHandler_2() { return &___TextEventHandler_2; }
	inline void set_TextEventHandler_2(TMP_TextEventHandler_t3534282063 * value)
	{
		___TextEventHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___TextEventHandler_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_TEXTEVENTCHECK_T14418682_H
#ifndef VERTEXSHAKEA_T1278660418_H
#define VERTEXSHAKEA_T1278660418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.VertexShakeA
struct  VertexShakeA_t1278660418  : public MonoBehaviour_t3161303725
{
public:
	// System.Single TMPro.Examples.VertexShakeA::AngleMultiplier
	float ___AngleMultiplier_2;
	// System.Single TMPro.Examples.VertexShakeA::SpeedMultiplier
	float ___SpeedMultiplier_3;
	// System.Single TMPro.Examples.VertexShakeA::ScaleMultiplier
	float ___ScaleMultiplier_4;
	// System.Single TMPro.Examples.VertexShakeA::RotationMultiplier
	float ___RotationMultiplier_5;
	// TMPro.TMP_Text TMPro.Examples.VertexShakeA::m_TextComponent
	TMP_Text_t717617228 * ___m_TextComponent_6;
	// System.Boolean TMPro.Examples.VertexShakeA::hasTextChanged
	bool ___hasTextChanged_7;

public:
	inline static int32_t get_offset_of_AngleMultiplier_2() { return static_cast<int32_t>(offsetof(VertexShakeA_t1278660418, ___AngleMultiplier_2)); }
	inline float get_AngleMultiplier_2() const { return ___AngleMultiplier_2; }
	inline float* get_address_of_AngleMultiplier_2() { return &___AngleMultiplier_2; }
	inline void set_AngleMultiplier_2(float value)
	{
		___AngleMultiplier_2 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_3() { return static_cast<int32_t>(offsetof(VertexShakeA_t1278660418, ___SpeedMultiplier_3)); }
	inline float get_SpeedMultiplier_3() const { return ___SpeedMultiplier_3; }
	inline float* get_address_of_SpeedMultiplier_3() { return &___SpeedMultiplier_3; }
	inline void set_SpeedMultiplier_3(float value)
	{
		___SpeedMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_ScaleMultiplier_4() { return static_cast<int32_t>(offsetof(VertexShakeA_t1278660418, ___ScaleMultiplier_4)); }
	inline float get_ScaleMultiplier_4() const { return ___ScaleMultiplier_4; }
	inline float* get_address_of_ScaleMultiplier_4() { return &___ScaleMultiplier_4; }
	inline void set_ScaleMultiplier_4(float value)
	{
		___ScaleMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_RotationMultiplier_5() { return static_cast<int32_t>(offsetof(VertexShakeA_t1278660418, ___RotationMultiplier_5)); }
	inline float get_RotationMultiplier_5() const { return ___RotationMultiplier_5; }
	inline float* get_address_of_RotationMultiplier_5() { return &___RotationMultiplier_5; }
	inline void set_RotationMultiplier_5(float value)
	{
		___RotationMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_6() { return static_cast<int32_t>(offsetof(VertexShakeA_t1278660418, ___m_TextComponent_6)); }
	inline TMP_Text_t717617228 * get_m_TextComponent_6() const { return ___m_TextComponent_6; }
	inline TMP_Text_t717617228 ** get_address_of_m_TextComponent_6() { return &___m_TextComponent_6; }
	inline void set_m_TextComponent_6(TMP_Text_t717617228 * value)
	{
		___m_TextComponent_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_6), value);
	}

	inline static int32_t get_offset_of_hasTextChanged_7() { return static_cast<int32_t>(offsetof(VertexShakeA_t1278660418, ___hasTextChanged_7)); }
	inline bool get_hasTextChanged_7() const { return ___hasTextChanged_7; }
	inline bool* get_address_of_hasTextChanged_7() { return &___hasTextChanged_7; }
	inline void set_hasTextChanged_7(bool value)
	{
		___hasTextChanged_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXSHAKEA_T1278660418_H
#ifndef TMP_TEXTEVENTHANDLER_T3534282063_H
#define TMP_TEXTEVENTHANDLER_T3534282063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextEventHandler
struct  TMP_TextEventHandler_t3534282063  : public MonoBehaviour_t3161303725
{
public:
	// TMPro.TMP_TextEventHandler/CharacterSelectionEvent TMPro.TMP_TextEventHandler::m_OnCharacterSelection
	CharacterSelectionEvent_t3393545884 * ___m_OnCharacterSelection_2;
	// TMPro.TMP_TextEventHandler/WordSelectionEvent TMPro.TMP_TextEventHandler::m_OnWordSelection
	WordSelectionEvent_t1451953395 * ___m_OnWordSelection_3;
	// TMPro.TMP_TextEventHandler/LineSelectionEvent TMPro.TMP_TextEventHandler::m_OnLineSelection
	LineSelectionEvent_t2932876682 * ___m_OnLineSelection_4;
	// TMPro.TMP_TextEventHandler/LinkSelectionEvent TMPro.TMP_TextEventHandler::m_OnLinkSelection
	LinkSelectionEvent_t526171622 * ___m_OnLinkSelection_5;
	// TMPro.TMP_Text TMPro.TMP_TextEventHandler::m_TextComponent
	TMP_Text_t717617228 * ___m_TextComponent_6;
	// UnityEngine.Camera TMPro.TMP_TextEventHandler::m_Camera
	Camera_t614277760 * ___m_Camera_7;
	// UnityEngine.Canvas TMPro.TMP_TextEventHandler::m_Canvas
	Canvas_t26857931 * ___m_Canvas_8;
	// System.Int32 TMPro.TMP_TextEventHandler::m_selectedLink
	int32_t ___m_selectedLink_9;
	// System.Int32 TMPro.TMP_TextEventHandler::m_lastCharIndex
	int32_t ___m_lastCharIndex_10;
	// System.Int32 TMPro.TMP_TextEventHandler::m_lastWordIndex
	int32_t ___m_lastWordIndex_11;
	// System.Int32 TMPro.TMP_TextEventHandler::m_lastLineIndex
	int32_t ___m_lastLineIndex_12;

public:
	inline static int32_t get_offset_of_m_OnCharacterSelection_2() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t3534282063, ___m_OnCharacterSelection_2)); }
	inline CharacterSelectionEvent_t3393545884 * get_m_OnCharacterSelection_2() const { return ___m_OnCharacterSelection_2; }
	inline CharacterSelectionEvent_t3393545884 ** get_address_of_m_OnCharacterSelection_2() { return &___m_OnCharacterSelection_2; }
	inline void set_m_OnCharacterSelection_2(CharacterSelectionEvent_t3393545884 * value)
	{
		___m_OnCharacterSelection_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCharacterSelection_2), value);
	}

	inline static int32_t get_offset_of_m_OnWordSelection_3() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t3534282063, ___m_OnWordSelection_3)); }
	inline WordSelectionEvent_t1451953395 * get_m_OnWordSelection_3() const { return ___m_OnWordSelection_3; }
	inline WordSelectionEvent_t1451953395 ** get_address_of_m_OnWordSelection_3() { return &___m_OnWordSelection_3; }
	inline void set_m_OnWordSelection_3(WordSelectionEvent_t1451953395 * value)
	{
		___m_OnWordSelection_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnWordSelection_3), value);
	}

	inline static int32_t get_offset_of_m_OnLineSelection_4() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t3534282063, ___m_OnLineSelection_4)); }
	inline LineSelectionEvent_t2932876682 * get_m_OnLineSelection_4() const { return ___m_OnLineSelection_4; }
	inline LineSelectionEvent_t2932876682 ** get_address_of_m_OnLineSelection_4() { return &___m_OnLineSelection_4; }
	inline void set_m_OnLineSelection_4(LineSelectionEvent_t2932876682 * value)
	{
		___m_OnLineSelection_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnLineSelection_4), value);
	}

	inline static int32_t get_offset_of_m_OnLinkSelection_5() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t3534282063, ___m_OnLinkSelection_5)); }
	inline LinkSelectionEvent_t526171622 * get_m_OnLinkSelection_5() const { return ___m_OnLinkSelection_5; }
	inline LinkSelectionEvent_t526171622 ** get_address_of_m_OnLinkSelection_5() { return &___m_OnLinkSelection_5; }
	inline void set_m_OnLinkSelection_5(LinkSelectionEvent_t526171622 * value)
	{
		___m_OnLinkSelection_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnLinkSelection_5), value);
	}

	inline static int32_t get_offset_of_m_TextComponent_6() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t3534282063, ___m_TextComponent_6)); }
	inline TMP_Text_t717617228 * get_m_TextComponent_6() const { return ___m_TextComponent_6; }
	inline TMP_Text_t717617228 ** get_address_of_m_TextComponent_6() { return &___m_TextComponent_6; }
	inline void set_m_TextComponent_6(TMP_Text_t717617228 * value)
	{
		___m_TextComponent_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_6), value);
	}

	inline static int32_t get_offset_of_m_Camera_7() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t3534282063, ___m_Camera_7)); }
	inline Camera_t614277760 * get_m_Camera_7() const { return ___m_Camera_7; }
	inline Camera_t614277760 ** get_address_of_m_Camera_7() { return &___m_Camera_7; }
	inline void set_m_Camera_7(Camera_t614277760 * value)
	{
		___m_Camera_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Camera_7), value);
	}

	inline static int32_t get_offset_of_m_Canvas_8() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t3534282063, ___m_Canvas_8)); }
	inline Canvas_t26857931 * get_m_Canvas_8() const { return ___m_Canvas_8; }
	inline Canvas_t26857931 ** get_address_of_m_Canvas_8() { return &___m_Canvas_8; }
	inline void set_m_Canvas_8(Canvas_t26857931 * value)
	{
		___m_Canvas_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_8), value);
	}

	inline static int32_t get_offset_of_m_selectedLink_9() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t3534282063, ___m_selectedLink_9)); }
	inline int32_t get_m_selectedLink_9() const { return ___m_selectedLink_9; }
	inline int32_t* get_address_of_m_selectedLink_9() { return &___m_selectedLink_9; }
	inline void set_m_selectedLink_9(int32_t value)
	{
		___m_selectedLink_9 = value;
	}

	inline static int32_t get_offset_of_m_lastCharIndex_10() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t3534282063, ___m_lastCharIndex_10)); }
	inline int32_t get_m_lastCharIndex_10() const { return ___m_lastCharIndex_10; }
	inline int32_t* get_address_of_m_lastCharIndex_10() { return &___m_lastCharIndex_10; }
	inline void set_m_lastCharIndex_10(int32_t value)
	{
		___m_lastCharIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_lastWordIndex_11() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t3534282063, ___m_lastWordIndex_11)); }
	inline int32_t get_m_lastWordIndex_11() const { return ___m_lastWordIndex_11; }
	inline int32_t* get_address_of_m_lastWordIndex_11() { return &___m_lastWordIndex_11; }
	inline void set_m_lastWordIndex_11(int32_t value)
	{
		___m_lastWordIndex_11 = value;
	}

	inline static int32_t get_offset_of_m_lastLineIndex_12() { return static_cast<int32_t>(offsetof(TMP_TextEventHandler_t3534282063, ___m_lastLineIndex_12)); }
	inline int32_t get_m_lastLineIndex_12() const { return ___m_lastLineIndex_12; }
	inline int32_t* get_address_of_m_lastLineIndex_12() { return &___m_lastLineIndex_12; }
	inline void set_m_lastLineIndex_12(int32_t value)
	{
		___m_lastLineIndex_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_TEXTEVENTHANDLER_T3534282063_H
#ifndef VERTEXJITTER_T1068353994_H
#define VERTEXJITTER_T1068353994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.VertexJitter
struct  VertexJitter_t1068353994  : public MonoBehaviour_t3161303725
{
public:
	// System.Single TMPro.Examples.VertexJitter::AngleMultiplier
	float ___AngleMultiplier_2;
	// System.Single TMPro.Examples.VertexJitter::SpeedMultiplier
	float ___SpeedMultiplier_3;
	// System.Single TMPro.Examples.VertexJitter::CurveScale
	float ___CurveScale_4;
	// TMPro.TMP_Text TMPro.Examples.VertexJitter::m_TextComponent
	TMP_Text_t717617228 * ___m_TextComponent_5;
	// System.Boolean TMPro.Examples.VertexJitter::hasTextChanged
	bool ___hasTextChanged_6;

public:
	inline static int32_t get_offset_of_AngleMultiplier_2() { return static_cast<int32_t>(offsetof(VertexJitter_t1068353994, ___AngleMultiplier_2)); }
	inline float get_AngleMultiplier_2() const { return ___AngleMultiplier_2; }
	inline float* get_address_of_AngleMultiplier_2() { return &___AngleMultiplier_2; }
	inline void set_AngleMultiplier_2(float value)
	{
		___AngleMultiplier_2 = value;
	}

	inline static int32_t get_offset_of_SpeedMultiplier_3() { return static_cast<int32_t>(offsetof(VertexJitter_t1068353994, ___SpeedMultiplier_3)); }
	inline float get_SpeedMultiplier_3() const { return ___SpeedMultiplier_3; }
	inline float* get_address_of_SpeedMultiplier_3() { return &___SpeedMultiplier_3; }
	inline void set_SpeedMultiplier_3(float value)
	{
		___SpeedMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_CurveScale_4() { return static_cast<int32_t>(offsetof(VertexJitter_t1068353994, ___CurveScale_4)); }
	inline float get_CurveScale_4() const { return ___CurveScale_4; }
	inline float* get_address_of_CurveScale_4() { return &___CurveScale_4; }
	inline void set_CurveScale_4(float value)
	{
		___CurveScale_4 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_5() { return static_cast<int32_t>(offsetof(VertexJitter_t1068353994, ___m_TextComponent_5)); }
	inline TMP_Text_t717617228 * get_m_TextComponent_5() const { return ___m_TextComponent_5; }
	inline TMP_Text_t717617228 ** get_address_of_m_TextComponent_5() { return &___m_TextComponent_5; }
	inline void set_m_TextComponent_5(TMP_Text_t717617228 * value)
	{
		___m_TextComponent_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_5), value);
	}

	inline static int32_t get_offset_of_hasTextChanged_6() { return static_cast<int32_t>(offsetof(VertexJitter_t1068353994, ___hasTextChanged_6)); }
	inline bool get_hasTextChanged_6() const { return ___hasTextChanged_6; }
	inline bool* get_address_of_hasTextChanged_6() { return &___hasTextChanged_6; }
	inline void set_hasTextChanged_6(bool value)
	{
		___hasTextChanged_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXJITTER_T1068353994_H
#ifndef VERTEXCOLORCYCLER_T1654838429_H
#define VERTEXCOLORCYCLER_T1654838429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.VertexColorCycler
struct  VertexColorCycler_t1654838429  : public MonoBehaviour_t3161303725
{
public:
	// TMPro.TMP_Text TMPro.Examples.VertexColorCycler::m_TextComponent
	TMP_Text_t717617228 * ___m_TextComponent_2;

public:
	inline static int32_t get_offset_of_m_TextComponent_2() { return static_cast<int32_t>(offsetof(VertexColorCycler_t1654838429, ___m_TextComponent_2)); }
	inline TMP_Text_t717617228 * get_m_TextComponent_2() const { return ___m_TextComponent_2; }
	inline TMP_Text_t717617228 ** get_address_of_m_TextComponent_2() { return &___m_TextComponent_2; }
	inline void set_m_TextComponent_2(TMP_Text_t717617228 * value)
	{
		___m_TextComponent_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXCOLORCYCLER_T1654838429_H
#ifndef TMPRO_INSTRUCTIONOVERLAY_T1300919462_H
#define TMPRO_INSTRUCTIONOVERLAY_T1300919462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMPro_InstructionOverlay
struct  TMPro_InstructionOverlay_t1300919462  : public MonoBehaviour_t3161303725
{
public:
	// TMPro.Examples.TMPro_InstructionOverlay/FpsCounterAnchorPositions TMPro.Examples.TMPro_InstructionOverlay::AnchorPosition
	int32_t ___AnchorPosition_2;
	// TMPro.TextMeshPro TMPro.Examples.TMPro_InstructionOverlay::m_TextMeshPro
	TextMeshPro_t2730025418 * ___m_TextMeshPro_4;
	// TMPro.TextContainer TMPro.Examples.TMPro_InstructionOverlay::m_textContainer
	TextContainer_t398000997 * ___m_textContainer_5;
	// UnityEngine.Transform TMPro.Examples.TMPro_InstructionOverlay::m_frameCounter_transform
	Transform_t1635685313 * ___m_frameCounter_transform_6;
	// UnityEngine.Camera TMPro.Examples.TMPro_InstructionOverlay::m_camera
	Camera_t614277760 * ___m_camera_7;

public:
	inline static int32_t get_offset_of_AnchorPosition_2() { return static_cast<int32_t>(offsetof(TMPro_InstructionOverlay_t1300919462, ___AnchorPosition_2)); }
	inline int32_t get_AnchorPosition_2() const { return ___AnchorPosition_2; }
	inline int32_t* get_address_of_AnchorPosition_2() { return &___AnchorPosition_2; }
	inline void set_AnchorPosition_2(int32_t value)
	{
		___AnchorPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_TextMeshPro_4() { return static_cast<int32_t>(offsetof(TMPro_InstructionOverlay_t1300919462, ___m_TextMeshPro_4)); }
	inline TextMeshPro_t2730025418 * get_m_TextMeshPro_4() const { return ___m_TextMeshPro_4; }
	inline TextMeshPro_t2730025418 ** get_address_of_m_TextMeshPro_4() { return &___m_TextMeshPro_4; }
	inline void set_m_TextMeshPro_4(TextMeshPro_t2730025418 * value)
	{
		___m_TextMeshPro_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextMeshPro_4), value);
	}

	inline static int32_t get_offset_of_m_textContainer_5() { return static_cast<int32_t>(offsetof(TMPro_InstructionOverlay_t1300919462, ___m_textContainer_5)); }
	inline TextContainer_t398000997 * get_m_textContainer_5() const { return ___m_textContainer_5; }
	inline TextContainer_t398000997 ** get_address_of_m_textContainer_5() { return &___m_textContainer_5; }
	inline void set_m_textContainer_5(TextContainer_t398000997 * value)
	{
		___m_textContainer_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_textContainer_5), value);
	}

	inline static int32_t get_offset_of_m_frameCounter_transform_6() { return static_cast<int32_t>(offsetof(TMPro_InstructionOverlay_t1300919462, ___m_frameCounter_transform_6)); }
	inline Transform_t1635685313 * get_m_frameCounter_transform_6() const { return ___m_frameCounter_transform_6; }
	inline Transform_t1635685313 ** get_address_of_m_frameCounter_transform_6() { return &___m_frameCounter_transform_6; }
	inline void set_m_frameCounter_transform_6(Transform_t1635685313 * value)
	{
		___m_frameCounter_transform_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_frameCounter_transform_6), value);
	}

	inline static int32_t get_offset_of_m_camera_7() { return static_cast<int32_t>(offsetof(TMPro_InstructionOverlay_t1300919462, ___m_camera_7)); }
	inline Camera_t614277760 * get_m_camera_7() const { return ___m_camera_7; }
	inline Camera_t614277760 ** get_address_of_m_camera_7() { return &___m_camera_7; }
	inline void set_m_camera_7(Camera_t614277760 * value)
	{
		___m_camera_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_camera_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMPRO_INSTRUCTIONOVERLAY_T1300919462_H
#ifndef TMP_UIFRAMERATECOUNTER_T2642474138_H
#define TMP_UIFRAMERATECOUNTER_T2642474138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_UiFrameRateCounter
struct  TMP_UiFrameRateCounter_t2642474138  : public MonoBehaviour_t3161303725
{
public:
	// System.Single TMPro.Examples.TMP_UiFrameRateCounter::UpdateInterval
	float ___UpdateInterval_2;
	// System.Single TMPro.Examples.TMP_UiFrameRateCounter::m_LastInterval
	float ___m_LastInterval_3;
	// System.Int32 TMPro.Examples.TMP_UiFrameRateCounter::m_Frames
	int32_t ___m_Frames_4;
	// TMPro.Examples.TMP_UiFrameRateCounter/FpsCounterAnchorPositions TMPro.Examples.TMP_UiFrameRateCounter::AnchorPosition
	int32_t ___AnchorPosition_5;
	// System.String TMPro.Examples.TMP_UiFrameRateCounter::htmlColorTag
	String_t* ___htmlColorTag_6;
	// TMPro.TextMeshProUGUI TMPro.Examples.TMP_UiFrameRateCounter::m_TextMeshPro
	TextMeshProUGUI_t3883666365 * ___m_TextMeshPro_8;
	// UnityEngine.RectTransform TMPro.Examples.TMP_UiFrameRateCounter::m_frameCounter_transform
	RectTransform_t1293310661 * ___m_frameCounter_transform_9;
	// TMPro.Examples.TMP_UiFrameRateCounter/FpsCounterAnchorPositions TMPro.Examples.TMP_UiFrameRateCounter::last_AnchorPosition
	int32_t ___last_AnchorPosition_10;

public:
	inline static int32_t get_offset_of_UpdateInterval_2() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t2642474138, ___UpdateInterval_2)); }
	inline float get_UpdateInterval_2() const { return ___UpdateInterval_2; }
	inline float* get_address_of_UpdateInterval_2() { return &___UpdateInterval_2; }
	inline void set_UpdateInterval_2(float value)
	{
		___UpdateInterval_2 = value;
	}

	inline static int32_t get_offset_of_m_LastInterval_3() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t2642474138, ___m_LastInterval_3)); }
	inline float get_m_LastInterval_3() const { return ___m_LastInterval_3; }
	inline float* get_address_of_m_LastInterval_3() { return &___m_LastInterval_3; }
	inline void set_m_LastInterval_3(float value)
	{
		___m_LastInterval_3 = value;
	}

	inline static int32_t get_offset_of_m_Frames_4() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t2642474138, ___m_Frames_4)); }
	inline int32_t get_m_Frames_4() const { return ___m_Frames_4; }
	inline int32_t* get_address_of_m_Frames_4() { return &___m_Frames_4; }
	inline void set_m_Frames_4(int32_t value)
	{
		___m_Frames_4 = value;
	}

	inline static int32_t get_offset_of_AnchorPosition_5() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t2642474138, ___AnchorPosition_5)); }
	inline int32_t get_AnchorPosition_5() const { return ___AnchorPosition_5; }
	inline int32_t* get_address_of_AnchorPosition_5() { return &___AnchorPosition_5; }
	inline void set_AnchorPosition_5(int32_t value)
	{
		___AnchorPosition_5 = value;
	}

	inline static int32_t get_offset_of_htmlColorTag_6() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t2642474138, ___htmlColorTag_6)); }
	inline String_t* get_htmlColorTag_6() const { return ___htmlColorTag_6; }
	inline String_t** get_address_of_htmlColorTag_6() { return &___htmlColorTag_6; }
	inline void set_htmlColorTag_6(String_t* value)
	{
		___htmlColorTag_6 = value;
		Il2CppCodeGenWriteBarrier((&___htmlColorTag_6), value);
	}

	inline static int32_t get_offset_of_m_TextMeshPro_8() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t2642474138, ___m_TextMeshPro_8)); }
	inline TextMeshProUGUI_t3883666365 * get_m_TextMeshPro_8() const { return ___m_TextMeshPro_8; }
	inline TextMeshProUGUI_t3883666365 ** get_address_of_m_TextMeshPro_8() { return &___m_TextMeshPro_8; }
	inline void set_m_TextMeshPro_8(TextMeshProUGUI_t3883666365 * value)
	{
		___m_TextMeshPro_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextMeshPro_8), value);
	}

	inline static int32_t get_offset_of_m_frameCounter_transform_9() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t2642474138, ___m_frameCounter_transform_9)); }
	inline RectTransform_t1293310661 * get_m_frameCounter_transform_9() const { return ___m_frameCounter_transform_9; }
	inline RectTransform_t1293310661 ** get_address_of_m_frameCounter_transform_9() { return &___m_frameCounter_transform_9; }
	inline void set_m_frameCounter_transform_9(RectTransform_t1293310661 * value)
	{
		___m_frameCounter_transform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_frameCounter_transform_9), value);
	}

	inline static int32_t get_offset_of_last_AnchorPosition_10() { return static_cast<int32_t>(offsetof(TMP_UiFrameRateCounter_t2642474138, ___last_AnchorPosition_10)); }
	inline int32_t get_last_AnchorPosition_10() const { return ___last_AnchorPosition_10; }
	inline int32_t* get_address_of_last_AnchorPosition_10() { return &___last_AnchorPosition_10; }
	inline void set_last_AnchorPosition_10(int32_t value)
	{
		___last_AnchorPosition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_UIFRAMERATECOUNTER_T2642474138_H
#ifndef TMP_TEXTSELECTOR_B_T2557140051_H
#define TMP_TEXTSELECTOR_B_T2557140051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_TextSelector_B
struct  TMP_TextSelector_B_t2557140051  : public MonoBehaviour_t3161303725
{
public:
	// UnityEngine.RectTransform TMPro.Examples.TMP_TextSelector_B::TextPopup_Prefab_01
	RectTransform_t1293310661 * ___TextPopup_Prefab_01_2;
	// UnityEngine.RectTransform TMPro.Examples.TMP_TextSelector_B::m_TextPopup_RectTransform
	RectTransform_t1293310661 * ___m_TextPopup_RectTransform_3;
	// TMPro.TextMeshProUGUI TMPro.Examples.TMP_TextSelector_B::m_TextPopup_TMPComponent
	TextMeshProUGUI_t3883666365 * ___m_TextPopup_TMPComponent_4;
	// TMPro.TextMeshProUGUI TMPro.Examples.TMP_TextSelector_B::m_TextMeshPro
	TextMeshProUGUI_t3883666365 * ___m_TextMeshPro_7;
	// UnityEngine.Canvas TMPro.Examples.TMP_TextSelector_B::m_Canvas
	Canvas_t26857931 * ___m_Canvas_8;
	// UnityEngine.Camera TMPro.Examples.TMP_TextSelector_B::m_Camera
	Camera_t614277760 * ___m_Camera_9;
	// System.Boolean TMPro.Examples.TMP_TextSelector_B::isHoveringObject
	bool ___isHoveringObject_10;
	// System.Int32 TMPro.Examples.TMP_TextSelector_B::m_selectedWord
	int32_t ___m_selectedWord_11;
	// System.Int32 TMPro.Examples.TMP_TextSelector_B::m_selectedLink
	int32_t ___m_selectedLink_12;
	// System.Int32 TMPro.Examples.TMP_TextSelector_B::m_lastIndex
	int32_t ___m_lastIndex_13;
	// UnityEngine.Matrix4x4 TMPro.Examples.TMP_TextSelector_B::m_matrix
	Matrix4x4_t887572436  ___m_matrix_14;
	// TMPro.TMP_MeshInfo[] TMPro.Examples.TMP_TextSelector_B::m_cachedMeshInfoVertexData
	TMP_MeshInfoU5BU5D_t130199721* ___m_cachedMeshInfoVertexData_15;

public:
	inline static int32_t get_offset_of_TextPopup_Prefab_01_2() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2557140051, ___TextPopup_Prefab_01_2)); }
	inline RectTransform_t1293310661 * get_TextPopup_Prefab_01_2() const { return ___TextPopup_Prefab_01_2; }
	inline RectTransform_t1293310661 ** get_address_of_TextPopup_Prefab_01_2() { return &___TextPopup_Prefab_01_2; }
	inline void set_TextPopup_Prefab_01_2(RectTransform_t1293310661 * value)
	{
		___TextPopup_Prefab_01_2 = value;
		Il2CppCodeGenWriteBarrier((&___TextPopup_Prefab_01_2), value);
	}

	inline static int32_t get_offset_of_m_TextPopup_RectTransform_3() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2557140051, ___m_TextPopup_RectTransform_3)); }
	inline RectTransform_t1293310661 * get_m_TextPopup_RectTransform_3() const { return ___m_TextPopup_RectTransform_3; }
	inline RectTransform_t1293310661 ** get_address_of_m_TextPopup_RectTransform_3() { return &___m_TextPopup_RectTransform_3; }
	inline void set_m_TextPopup_RectTransform_3(RectTransform_t1293310661 * value)
	{
		___m_TextPopup_RectTransform_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextPopup_RectTransform_3), value);
	}

	inline static int32_t get_offset_of_m_TextPopup_TMPComponent_4() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2557140051, ___m_TextPopup_TMPComponent_4)); }
	inline TextMeshProUGUI_t3883666365 * get_m_TextPopup_TMPComponent_4() const { return ___m_TextPopup_TMPComponent_4; }
	inline TextMeshProUGUI_t3883666365 ** get_address_of_m_TextPopup_TMPComponent_4() { return &___m_TextPopup_TMPComponent_4; }
	inline void set_m_TextPopup_TMPComponent_4(TextMeshProUGUI_t3883666365 * value)
	{
		___m_TextPopup_TMPComponent_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextPopup_TMPComponent_4), value);
	}

	inline static int32_t get_offset_of_m_TextMeshPro_7() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2557140051, ___m_TextMeshPro_7)); }
	inline TextMeshProUGUI_t3883666365 * get_m_TextMeshPro_7() const { return ___m_TextMeshPro_7; }
	inline TextMeshProUGUI_t3883666365 ** get_address_of_m_TextMeshPro_7() { return &___m_TextMeshPro_7; }
	inline void set_m_TextMeshPro_7(TextMeshProUGUI_t3883666365 * value)
	{
		___m_TextMeshPro_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextMeshPro_7), value);
	}

	inline static int32_t get_offset_of_m_Canvas_8() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2557140051, ___m_Canvas_8)); }
	inline Canvas_t26857931 * get_m_Canvas_8() const { return ___m_Canvas_8; }
	inline Canvas_t26857931 ** get_address_of_m_Canvas_8() { return &___m_Canvas_8; }
	inline void set_m_Canvas_8(Canvas_t26857931 * value)
	{
		___m_Canvas_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_8), value);
	}

	inline static int32_t get_offset_of_m_Camera_9() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2557140051, ___m_Camera_9)); }
	inline Camera_t614277760 * get_m_Camera_9() const { return ___m_Camera_9; }
	inline Camera_t614277760 ** get_address_of_m_Camera_9() { return &___m_Camera_9; }
	inline void set_m_Camera_9(Camera_t614277760 * value)
	{
		___m_Camera_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Camera_9), value);
	}

	inline static int32_t get_offset_of_isHoveringObject_10() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2557140051, ___isHoveringObject_10)); }
	inline bool get_isHoveringObject_10() const { return ___isHoveringObject_10; }
	inline bool* get_address_of_isHoveringObject_10() { return &___isHoveringObject_10; }
	inline void set_isHoveringObject_10(bool value)
	{
		___isHoveringObject_10 = value;
	}

	inline static int32_t get_offset_of_m_selectedWord_11() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2557140051, ___m_selectedWord_11)); }
	inline int32_t get_m_selectedWord_11() const { return ___m_selectedWord_11; }
	inline int32_t* get_address_of_m_selectedWord_11() { return &___m_selectedWord_11; }
	inline void set_m_selectedWord_11(int32_t value)
	{
		___m_selectedWord_11 = value;
	}

	inline static int32_t get_offset_of_m_selectedLink_12() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2557140051, ___m_selectedLink_12)); }
	inline int32_t get_m_selectedLink_12() const { return ___m_selectedLink_12; }
	inline int32_t* get_address_of_m_selectedLink_12() { return &___m_selectedLink_12; }
	inline void set_m_selectedLink_12(int32_t value)
	{
		___m_selectedLink_12 = value;
	}

	inline static int32_t get_offset_of_m_lastIndex_13() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2557140051, ___m_lastIndex_13)); }
	inline int32_t get_m_lastIndex_13() const { return ___m_lastIndex_13; }
	inline int32_t* get_address_of_m_lastIndex_13() { return &___m_lastIndex_13; }
	inline void set_m_lastIndex_13(int32_t value)
	{
		___m_lastIndex_13 = value;
	}

	inline static int32_t get_offset_of_m_matrix_14() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2557140051, ___m_matrix_14)); }
	inline Matrix4x4_t887572436  get_m_matrix_14() const { return ___m_matrix_14; }
	inline Matrix4x4_t887572436 * get_address_of_m_matrix_14() { return &___m_matrix_14; }
	inline void set_m_matrix_14(Matrix4x4_t887572436  value)
	{
		___m_matrix_14 = value;
	}

	inline static int32_t get_offset_of_m_cachedMeshInfoVertexData_15() { return static_cast<int32_t>(offsetof(TMP_TextSelector_B_t2557140051, ___m_cachedMeshInfoVertexData_15)); }
	inline TMP_MeshInfoU5BU5D_t130199721* get_m_cachedMeshInfoVertexData_15() const { return ___m_cachedMeshInfoVertexData_15; }
	inline TMP_MeshInfoU5BU5D_t130199721** get_address_of_m_cachedMeshInfoVertexData_15() { return &___m_cachedMeshInfoVertexData_15; }
	inline void set_m_cachedMeshInfoVertexData_15(TMP_MeshInfoU5BU5D_t130199721* value)
	{
		___m_cachedMeshInfoVertexData_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_cachedMeshInfoVertexData_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_TEXTSELECTOR_B_T2557140051_H
#ifndef TEXTMESHSPAWNER_T2225502081_H
#define TEXTMESHSPAWNER_T2225502081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TextMeshSpawner
struct  TextMeshSpawner_t2225502081  : public MonoBehaviour_t3161303725
{
public:
	// System.Int32 TMPro.Examples.TextMeshSpawner::SpawnType
	int32_t ___SpawnType_2;
	// System.Int32 TMPro.Examples.TextMeshSpawner::NumberOfNPC
	int32_t ___NumberOfNPC_3;
	// UnityEngine.Font TMPro.Examples.TextMeshSpawner::TheFont
	Font_t2702488509 * ___TheFont_4;
	// TMPro.Examples.TextMeshProFloatingText TMPro.Examples.TextMeshSpawner::floatingText_Script
	TextMeshProFloatingText_t2820266173 * ___floatingText_Script_5;

public:
	inline static int32_t get_offset_of_SpawnType_2() { return static_cast<int32_t>(offsetof(TextMeshSpawner_t2225502081, ___SpawnType_2)); }
	inline int32_t get_SpawnType_2() const { return ___SpawnType_2; }
	inline int32_t* get_address_of_SpawnType_2() { return &___SpawnType_2; }
	inline void set_SpawnType_2(int32_t value)
	{
		___SpawnType_2 = value;
	}

	inline static int32_t get_offset_of_NumberOfNPC_3() { return static_cast<int32_t>(offsetof(TextMeshSpawner_t2225502081, ___NumberOfNPC_3)); }
	inline int32_t get_NumberOfNPC_3() const { return ___NumberOfNPC_3; }
	inline int32_t* get_address_of_NumberOfNPC_3() { return &___NumberOfNPC_3; }
	inline void set_NumberOfNPC_3(int32_t value)
	{
		___NumberOfNPC_3 = value;
	}

	inline static int32_t get_offset_of_TheFont_4() { return static_cast<int32_t>(offsetof(TextMeshSpawner_t2225502081, ___TheFont_4)); }
	inline Font_t2702488509 * get_TheFont_4() const { return ___TheFont_4; }
	inline Font_t2702488509 ** get_address_of_TheFont_4() { return &___TheFont_4; }
	inline void set_TheFont_4(Font_t2702488509 * value)
	{
		___TheFont_4 = value;
		Il2CppCodeGenWriteBarrier((&___TheFont_4), value);
	}

	inline static int32_t get_offset_of_floatingText_Script_5() { return static_cast<int32_t>(offsetof(TextMeshSpawner_t2225502081, ___floatingText_Script_5)); }
	inline TextMeshProFloatingText_t2820266173 * get_floatingText_Script_5() const { return ___floatingText_Script_5; }
	inline TextMeshProFloatingText_t2820266173 ** get_address_of_floatingText_Script_5() { return &___floatingText_Script_5; }
	inline void set_floatingText_Script_5(TextMeshProFloatingText_t2820266173 * value)
	{
		___floatingText_Script_5 = value;
		Il2CppCodeGenWriteBarrier((&___floatingText_Script_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESHSPAWNER_T2225502081_H
#ifndef TMP_TEXTSELECTOR_A_T3874359578_H
#define TMP_TEXTSELECTOR_A_T3874359578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_TextSelector_A
struct  TMP_TextSelector_A_t3874359578  : public MonoBehaviour_t3161303725
{
public:
	// TMPro.TextMeshPro TMPro.Examples.TMP_TextSelector_A::m_TextMeshPro
	TextMeshPro_t2730025418 * ___m_TextMeshPro_2;
	// UnityEngine.Camera TMPro.Examples.TMP_TextSelector_A::m_Camera
	Camera_t614277760 * ___m_Camera_3;
	// System.Boolean TMPro.Examples.TMP_TextSelector_A::m_isHoveringObject
	bool ___m_isHoveringObject_4;
	// System.Int32 TMPro.Examples.TMP_TextSelector_A::m_selectedLink
	int32_t ___m_selectedLink_5;
	// System.Int32 TMPro.Examples.TMP_TextSelector_A::m_lastCharIndex
	int32_t ___m_lastCharIndex_6;
	// System.Int32 TMPro.Examples.TMP_TextSelector_A::m_lastWordIndex
	int32_t ___m_lastWordIndex_7;

public:
	inline static int32_t get_offset_of_m_TextMeshPro_2() { return static_cast<int32_t>(offsetof(TMP_TextSelector_A_t3874359578, ___m_TextMeshPro_2)); }
	inline TextMeshPro_t2730025418 * get_m_TextMeshPro_2() const { return ___m_TextMeshPro_2; }
	inline TextMeshPro_t2730025418 ** get_address_of_m_TextMeshPro_2() { return &___m_TextMeshPro_2; }
	inline void set_m_TextMeshPro_2(TextMeshPro_t2730025418 * value)
	{
		___m_TextMeshPro_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextMeshPro_2), value);
	}

	inline static int32_t get_offset_of_m_Camera_3() { return static_cast<int32_t>(offsetof(TMP_TextSelector_A_t3874359578, ___m_Camera_3)); }
	inline Camera_t614277760 * get_m_Camera_3() const { return ___m_Camera_3; }
	inline Camera_t614277760 ** get_address_of_m_Camera_3() { return &___m_Camera_3; }
	inline void set_m_Camera_3(Camera_t614277760 * value)
	{
		___m_Camera_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Camera_3), value);
	}

	inline static int32_t get_offset_of_m_isHoveringObject_4() { return static_cast<int32_t>(offsetof(TMP_TextSelector_A_t3874359578, ___m_isHoveringObject_4)); }
	inline bool get_m_isHoveringObject_4() const { return ___m_isHoveringObject_4; }
	inline bool* get_address_of_m_isHoveringObject_4() { return &___m_isHoveringObject_4; }
	inline void set_m_isHoveringObject_4(bool value)
	{
		___m_isHoveringObject_4 = value;
	}

	inline static int32_t get_offset_of_m_selectedLink_5() { return static_cast<int32_t>(offsetof(TMP_TextSelector_A_t3874359578, ___m_selectedLink_5)); }
	inline int32_t get_m_selectedLink_5() const { return ___m_selectedLink_5; }
	inline int32_t* get_address_of_m_selectedLink_5() { return &___m_selectedLink_5; }
	inline void set_m_selectedLink_5(int32_t value)
	{
		___m_selectedLink_5 = value;
	}

	inline static int32_t get_offset_of_m_lastCharIndex_6() { return static_cast<int32_t>(offsetof(TMP_TextSelector_A_t3874359578, ___m_lastCharIndex_6)); }
	inline int32_t get_m_lastCharIndex_6() const { return ___m_lastCharIndex_6; }
	inline int32_t* get_address_of_m_lastCharIndex_6() { return &___m_lastCharIndex_6; }
	inline void set_m_lastCharIndex_6(int32_t value)
	{
		___m_lastCharIndex_6 = value;
	}

	inline static int32_t get_offset_of_m_lastWordIndex_7() { return static_cast<int32_t>(offsetof(TMP_TextSelector_A_t3874359578, ___m_lastWordIndex_7)); }
	inline int32_t get_m_lastWordIndex_7() const { return ___m_lastWordIndex_7; }
	inline int32_t* get_address_of_m_lastWordIndex_7() { return &___m_lastWordIndex_7; }
	inline void set_m_lastWordIndex_7(int32_t value)
	{
		___m_lastWordIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_TEXTSELECTOR_A_T3874359578_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (MotionType_t472146513)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1900[4] = 
{
	MotionType_t472146513::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (ShaderPropAnimator_t3327056230), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1901[4] = 
{
	ShaderPropAnimator_t3327056230::get_offset_of_m_Renderer_2(),
	ShaderPropAnimator_t3327056230::get_offset_of_m_Material_3(),
	ShaderPropAnimator_t3327056230::get_offset_of_GlowCurve_4(),
	ShaderPropAnimator_t3327056230::get_offset_of_m_frame_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (U3CAnimatePropertiesU3Ec__Iterator0_t334717826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1902[5] = 
{
	U3CAnimatePropertiesU3Ec__Iterator0_t334717826::get_offset_of_U3CglowPowerU3E__1_0(),
	U3CAnimatePropertiesU3Ec__Iterator0_t334717826::get_offset_of_U24this_1(),
	U3CAnimatePropertiesU3Ec__Iterator0_t334717826::get_offset_of_U24current_2(),
	U3CAnimatePropertiesU3Ec__Iterator0_t334717826::get_offset_of_U24disposing_3(),
	U3CAnimatePropertiesU3Ec__Iterator0_t334717826::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (SimpleScript_t2850558685), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1903[3] = 
{
	SimpleScript_t2850558685::get_offset_of_m_textMeshPro_2(),
	0,
	SimpleScript_t2850558685::get_offset_of_m_frame_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (SkewTextExample_t1573568503), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1904[4] = 
{
	SkewTextExample_t1573568503::get_offset_of_m_TextComponent_2(),
	SkewTextExample_t1573568503::get_offset_of_VertexCurve_3(),
	SkewTextExample_t1573568503::get_offset_of_CurveScale_4(),
	SkewTextExample_t1573568503::get_offset_of_ShearAmount_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (U3CWarpTextU3Ec__Iterator0_t4103237136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1905[13] = 
{
	U3CWarpTextU3Ec__Iterator0_t4103237136::get_offset_of_U3Cold_CurveScaleU3E__0_0(),
	U3CWarpTextU3Ec__Iterator0_t4103237136::get_offset_of_U3Cold_ShearValueU3E__0_1(),
	U3CWarpTextU3Ec__Iterator0_t4103237136::get_offset_of_U3Cold_curveU3E__0_2(),
	U3CWarpTextU3Ec__Iterator0_t4103237136::get_offset_of_U3CtextInfoU3E__1_3(),
	U3CWarpTextU3Ec__Iterator0_t4103237136::get_offset_of_U3CcharacterCountU3E__1_4(),
	U3CWarpTextU3Ec__Iterator0_t4103237136::get_offset_of_U3CboundsMinXU3E__1_5(),
	U3CWarpTextU3Ec__Iterator0_t4103237136::get_offset_of_U3CboundsMaxXU3E__1_6(),
	U3CWarpTextU3Ec__Iterator0_t4103237136::get_offset_of_U3CverticesU3E__2_7(),
	U3CWarpTextU3Ec__Iterator0_t4103237136::get_offset_of_U3CmatrixU3E__2_8(),
	U3CWarpTextU3Ec__Iterator0_t4103237136::get_offset_of_U24this_9(),
	U3CWarpTextU3Ec__Iterator0_t4103237136::get_offset_of_U24current_10(),
	U3CWarpTextU3Ec__Iterator0_t4103237136::get_offset_of_U24disposing_11(),
	U3CWarpTextU3Ec__Iterator0_t4103237136::get_offset_of_U24PC_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (TeleType_t2190958428), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1906[3] = 
{
	TeleType_t2190958428::get_offset_of_label01_2(),
	TeleType_t2190958428::get_offset_of_label02_3(),
	TeleType_t2190958428::get_offset_of_m_textMeshPro_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (U3CStartU3Ec__Iterator0_t972236035), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1907[7] = 
{
	U3CStartU3Ec__Iterator0_t972236035::get_offset_of_U3CtotalVisibleCharactersU3E__0_0(),
	U3CStartU3Ec__Iterator0_t972236035::get_offset_of_U3CcounterU3E__0_1(),
	U3CStartU3Ec__Iterator0_t972236035::get_offset_of_U3CvisibleCountU3E__0_2(),
	U3CStartU3Ec__Iterator0_t972236035::get_offset_of_U24this_3(),
	U3CStartU3Ec__Iterator0_t972236035::get_offset_of_U24current_4(),
	U3CStartU3Ec__Iterator0_t972236035::get_offset_of_U24disposing_5(),
	U3CStartU3Ec__Iterator0_t972236035::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (TextConsoleSimulator_t2416547963), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1908[2] = 
{
	TextConsoleSimulator_t2416547963::get_offset_of_m_TextComponent_2(),
	TextConsoleSimulator_t2416547963::get_offset_of_hasTextChanged_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (U3CRevealCharactersU3Ec__Iterator0_t3808268575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1909[8] = 
{
	U3CRevealCharactersU3Ec__Iterator0_t3808268575::get_offset_of_textComponent_0(),
	U3CRevealCharactersU3Ec__Iterator0_t3808268575::get_offset_of_U3CtextInfoU3E__0_1(),
	U3CRevealCharactersU3Ec__Iterator0_t3808268575::get_offset_of_U3CtotalVisibleCharactersU3E__0_2(),
	U3CRevealCharactersU3Ec__Iterator0_t3808268575::get_offset_of_U3CvisibleCountU3E__0_3(),
	U3CRevealCharactersU3Ec__Iterator0_t3808268575::get_offset_of_U24this_4(),
	U3CRevealCharactersU3Ec__Iterator0_t3808268575::get_offset_of_U24current_5(),
	U3CRevealCharactersU3Ec__Iterator0_t3808268575::get_offset_of_U24disposing_6(),
	U3CRevealCharactersU3Ec__Iterator0_t3808268575::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (U3CRevealWordsU3Ec__Iterator1_t856750721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1910[9] = 
{
	U3CRevealWordsU3Ec__Iterator1_t856750721::get_offset_of_textComponent_0(),
	U3CRevealWordsU3Ec__Iterator1_t856750721::get_offset_of_U3CtotalWordCountU3E__0_1(),
	U3CRevealWordsU3Ec__Iterator1_t856750721::get_offset_of_U3CtotalVisibleCharactersU3E__0_2(),
	U3CRevealWordsU3Ec__Iterator1_t856750721::get_offset_of_U3CcounterU3E__0_3(),
	U3CRevealWordsU3Ec__Iterator1_t856750721::get_offset_of_U3CcurrentWordU3E__0_4(),
	U3CRevealWordsU3Ec__Iterator1_t856750721::get_offset_of_U3CvisibleCountU3E__0_5(),
	U3CRevealWordsU3Ec__Iterator1_t856750721::get_offset_of_U24current_6(),
	U3CRevealWordsU3Ec__Iterator1_t856750721::get_offset_of_U24disposing_7(),
	U3CRevealWordsU3Ec__Iterator1_t856750721::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (TextMeshProFloatingText_t2820266173), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[10] = 
{
	TextMeshProFloatingText_t2820266173::get_offset_of_TheFont_2(),
	TextMeshProFloatingText_t2820266173::get_offset_of_m_floatingText_3(),
	TextMeshProFloatingText_t2820266173::get_offset_of_m_textMeshPro_4(),
	TextMeshProFloatingText_t2820266173::get_offset_of_m_textMesh_5(),
	TextMeshProFloatingText_t2820266173::get_offset_of_m_transform_6(),
	TextMeshProFloatingText_t2820266173::get_offset_of_m_floatingText_Transform_7(),
	TextMeshProFloatingText_t2820266173::get_offset_of_m_cameraTransform_8(),
	TextMeshProFloatingText_t2820266173::get_offset_of_lastPOS_9(),
	TextMeshProFloatingText_t2820266173::get_offset_of_lastRotation_10(),
	TextMeshProFloatingText_t2820266173::get_offset_of_SpawnType_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1912[11] = 
{
	U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330::get_offset_of_U3CCountDurationU3E__0_0(),
	U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330::get_offset_of_U3Cstarting_CountU3E__0_1(),
	U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330::get_offset_of_U3Ccurrent_CountU3E__0_2(),
	U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330::get_offset_of_U3Cstart_posU3E__0_3(),
	U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330::get_offset_of_U3Cstart_colorU3E__0_4(),
	U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330::get_offset_of_U3CalphaU3E__0_5(),
	U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330::get_offset_of_U3CfadeDurationU3E__0_6(),
	U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330::get_offset_of_U24this_7(),
	U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330::get_offset_of_U24current_8(),
	U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330::get_offset_of_U24disposing_9(),
	U3CDisplayTextMeshProFloatingTextU3Ec__Iterator0_t1115204330::get_offset_of_U24PC_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1913[12] = 
{
	U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962::get_offset_of_U3CCountDurationU3E__0_0(),
	U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962::get_offset_of_U3Cstarting_CountU3E__0_1(),
	U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962::get_offset_of_U3Ccurrent_CountU3E__0_2(),
	U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962::get_offset_of_U3Cstart_posU3E__0_3(),
	U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962::get_offset_of_U3Cstart_colorU3E__0_4(),
	U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962::get_offset_of_U3CalphaU3E__0_5(),
	U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962::get_offset_of_U3Cint_counterU3E__0_6(),
	U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962::get_offset_of_U3CfadeDurationU3E__0_7(),
	U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962::get_offset_of_U24this_8(),
	U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962::get_offset_of_U24current_9(),
	U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962::get_offset_of_U24disposing_10(),
	U3CDisplayTextMeshFloatingTextU3Ec__Iterator1_t4044511962::get_offset_of_U24PC_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (TextMeshSpawner_t2225502081), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1914[4] = 
{
	TextMeshSpawner_t2225502081::get_offset_of_SpawnType_2(),
	TextMeshSpawner_t2225502081::get_offset_of_NumberOfNPC_3(),
	TextMeshSpawner_t2225502081::get_offset_of_TheFont_4(),
	TextMeshSpawner_t2225502081::get_offset_of_floatingText_Script_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (TMP_DigitValidator_t844730049), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { sizeof (TMP_ExampleScript_01_t3990707700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1916[5] = 
{
	TMP_ExampleScript_01_t3990707700::get_offset_of_ObjectType_2(),
	TMP_ExampleScript_01_t3990707700::get_offset_of_isStatic_3(),
	TMP_ExampleScript_01_t3990707700::get_offset_of_m_text_4(),
	0,
	TMP_ExampleScript_01_t3990707700::get_offset_of_count_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (objectType_t2270562366)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1917[3] = 
{
	objectType_t2270562366::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1918 = { sizeof (TMP_FrameRateCounter_t3128181729), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1918[10] = 
{
	TMP_FrameRateCounter_t3128181729::get_offset_of_UpdateInterval_2(),
	TMP_FrameRateCounter_t3128181729::get_offset_of_m_LastInterval_3(),
	TMP_FrameRateCounter_t3128181729::get_offset_of_m_Frames_4(),
	TMP_FrameRateCounter_t3128181729::get_offset_of_AnchorPosition_5(),
	TMP_FrameRateCounter_t3128181729::get_offset_of_htmlColorTag_6(),
	0,
	TMP_FrameRateCounter_t3128181729::get_offset_of_m_TextMeshPro_8(),
	TMP_FrameRateCounter_t3128181729::get_offset_of_m_frameCounter_transform_9(),
	TMP_FrameRateCounter_t3128181729::get_offset_of_m_camera_10(),
	TMP_FrameRateCounter_t3128181729::get_offset_of_last_AnchorPosition_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1919 = { sizeof (FpsCounterAnchorPositions_t1307472096)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1919[5] = 
{
	FpsCounterAnchorPositions_t1307472096::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1920 = { sizeof (TMP_TextEventCheck_t14418682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1920[1] = 
{
	TMP_TextEventCheck_t14418682::get_offset_of_TextEventHandler_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1921 = { sizeof (TMP_TextEventHandler_t3534282063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1921[11] = 
{
	TMP_TextEventHandler_t3534282063::get_offset_of_m_OnCharacterSelection_2(),
	TMP_TextEventHandler_t3534282063::get_offset_of_m_OnWordSelection_3(),
	TMP_TextEventHandler_t3534282063::get_offset_of_m_OnLineSelection_4(),
	TMP_TextEventHandler_t3534282063::get_offset_of_m_OnLinkSelection_5(),
	TMP_TextEventHandler_t3534282063::get_offset_of_m_TextComponent_6(),
	TMP_TextEventHandler_t3534282063::get_offset_of_m_Camera_7(),
	TMP_TextEventHandler_t3534282063::get_offset_of_m_Canvas_8(),
	TMP_TextEventHandler_t3534282063::get_offset_of_m_selectedLink_9(),
	TMP_TextEventHandler_t3534282063::get_offset_of_m_lastCharIndex_10(),
	TMP_TextEventHandler_t3534282063::get_offset_of_m_lastWordIndex_11(),
	TMP_TextEventHandler_t3534282063::get_offset_of_m_lastLineIndex_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1922 = { sizeof (CharacterSelectionEvent_t3393545884), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1923 = { sizeof (WordSelectionEvent_t1451953395), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1924 = { sizeof (LineSelectionEvent_t2932876682), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1925 = { sizeof (LinkSelectionEvent_t526171622), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1926 = { sizeof (TMP_TextInfoDebugTool_t4008839466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1926[9] = 
{
	TMP_TextInfoDebugTool_t4008839466::get_offset_of_ShowCharacters_2(),
	TMP_TextInfoDebugTool_t4008839466::get_offset_of_ShowWords_3(),
	TMP_TextInfoDebugTool_t4008839466::get_offset_of_ShowLinks_4(),
	TMP_TextInfoDebugTool_t4008839466::get_offset_of_ShowLines_5(),
	TMP_TextInfoDebugTool_t4008839466::get_offset_of_ShowMeshBounds_6(),
	TMP_TextInfoDebugTool_t4008839466::get_offset_of_ShowTextBounds_7(),
	TMP_TextInfoDebugTool_t4008839466::get_offset_of_ObjectStats_8(),
	TMP_TextInfoDebugTool_t4008839466::get_offset_of_m_TextComponent_9(),
	TMP_TextInfoDebugTool_t4008839466::get_offset_of_m_Transform_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1927 = { sizeof (TMP_TextSelector_A_t3874359578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1927[6] = 
{
	TMP_TextSelector_A_t3874359578::get_offset_of_m_TextMeshPro_2(),
	TMP_TextSelector_A_t3874359578::get_offset_of_m_Camera_3(),
	TMP_TextSelector_A_t3874359578::get_offset_of_m_isHoveringObject_4(),
	TMP_TextSelector_A_t3874359578::get_offset_of_m_selectedLink_5(),
	TMP_TextSelector_A_t3874359578::get_offset_of_m_lastCharIndex_6(),
	TMP_TextSelector_A_t3874359578::get_offset_of_m_lastWordIndex_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1928 = { sizeof (TMP_TextSelector_B_t2557140051), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1928[14] = 
{
	TMP_TextSelector_B_t2557140051::get_offset_of_TextPopup_Prefab_01_2(),
	TMP_TextSelector_B_t2557140051::get_offset_of_m_TextPopup_RectTransform_3(),
	TMP_TextSelector_B_t2557140051::get_offset_of_m_TextPopup_TMPComponent_4(),
	0,
	0,
	TMP_TextSelector_B_t2557140051::get_offset_of_m_TextMeshPro_7(),
	TMP_TextSelector_B_t2557140051::get_offset_of_m_Canvas_8(),
	TMP_TextSelector_B_t2557140051::get_offset_of_m_Camera_9(),
	TMP_TextSelector_B_t2557140051::get_offset_of_isHoveringObject_10(),
	TMP_TextSelector_B_t2557140051::get_offset_of_m_selectedWord_11(),
	TMP_TextSelector_B_t2557140051::get_offset_of_m_selectedLink_12(),
	TMP_TextSelector_B_t2557140051::get_offset_of_m_lastIndex_13(),
	TMP_TextSelector_B_t2557140051::get_offset_of_m_matrix_14(),
	TMP_TextSelector_B_t2557140051::get_offset_of_m_cachedMeshInfoVertexData_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1929 = { sizeof (TMP_UiFrameRateCounter_t2642474138), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1929[9] = 
{
	TMP_UiFrameRateCounter_t2642474138::get_offset_of_UpdateInterval_2(),
	TMP_UiFrameRateCounter_t2642474138::get_offset_of_m_LastInterval_3(),
	TMP_UiFrameRateCounter_t2642474138::get_offset_of_m_Frames_4(),
	TMP_UiFrameRateCounter_t2642474138::get_offset_of_AnchorPosition_5(),
	TMP_UiFrameRateCounter_t2642474138::get_offset_of_htmlColorTag_6(),
	0,
	TMP_UiFrameRateCounter_t2642474138::get_offset_of_m_TextMeshPro_8(),
	TMP_UiFrameRateCounter_t2642474138::get_offset_of_m_frameCounter_transform_9(),
	TMP_UiFrameRateCounter_t2642474138::get_offset_of_last_AnchorPosition_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1930 = { sizeof (FpsCounterAnchorPositions_t937721072)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1930[5] = 
{
	FpsCounterAnchorPositions_t937721072::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1931 = { sizeof (TMPro_InstructionOverlay_t1300919462), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1931[6] = 
{
	TMPro_InstructionOverlay_t1300919462::get_offset_of_AnchorPosition_2(),
	0,
	TMPro_InstructionOverlay_t1300919462::get_offset_of_m_TextMeshPro_4(),
	TMPro_InstructionOverlay_t1300919462::get_offset_of_m_textContainer_5(),
	TMPro_InstructionOverlay_t1300919462::get_offset_of_m_frameCounter_transform_6(),
	TMPro_InstructionOverlay_t1300919462::get_offset_of_m_camera_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1932 = { sizeof (FpsCounterAnchorPositions_t1631731125)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1932[5] = 
{
	FpsCounterAnchorPositions_t1631731125::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1933 = { sizeof (VertexColorCycler_t1654838429), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1933[1] = 
{
	VertexColorCycler_t1654838429::get_offset_of_m_TextComponent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1934 = { sizeof (U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1934[11] = 
{
	U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206::get_offset_of_U3CtextInfoU3E__0_0(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206::get_offset_of_U3CcurrentCharacterU3E__0_1(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206::get_offset_of_U3Cc0U3E__0_2(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206::get_offset_of_U3CcharacterCountU3E__1_3(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206::get_offset_of_U3CmaterialIndexU3E__1_4(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206::get_offset_of_U3CnewVertexColorsU3E__1_5(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206::get_offset_of_U3CvertexIndexU3E__1_6(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206::get_offset_of_U24this_7(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206::get_offset_of_U24current_8(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206::get_offset_of_U24disposing_9(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2914654206::get_offset_of_U24PC_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1935 = { sizeof (VertexJitter_t1068353994), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1935[5] = 
{
	VertexJitter_t1068353994::get_offset_of_AngleMultiplier_2(),
	VertexJitter_t1068353994::get_offset_of_SpeedMultiplier_3(),
	VertexJitter_t1068353994::get_offset_of_CurveScale_4(),
	VertexJitter_t1068353994::get_offset_of_m_TextComponent_5(),
	VertexJitter_t1068353994::get_offset_of_hasTextChanged_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1936 = { sizeof (VertexAnim_t1779064721)+ sizeof (RuntimeObject), sizeof(VertexAnim_t1779064721 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1936[3] = 
{
	VertexAnim_t1779064721::get_offset_of_angleRange_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VertexAnim_t1779064721::get_offset_of_angle_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VertexAnim_t1779064721::get_offset_of_speed_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1937 = { sizeof (U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1937[10] = 
{
	U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266::get_offset_of_U3CtextInfoU3E__0_0(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266::get_offset_of_U3CloopCountU3E__0_1(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266::get_offset_of_U3CvertexAnimU3E__0_2(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266::get_offset_of_U3CcachedMeshInfoU3E__0_3(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266::get_offset_of_U3CcharacterCountU3E__1_4(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266::get_offset_of_U3CmatrixU3E__2_5(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266::get_offset_of_U24this_6(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266::get_offset_of_U24current_7(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266::get_offset_of_U24disposing_8(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t1239328266::get_offset_of_U24PC_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1938 = { sizeof (VertexShakeA_t1278660418), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1938[6] = 
{
	VertexShakeA_t1278660418::get_offset_of_AngleMultiplier_2(),
	VertexShakeA_t1278660418::get_offset_of_SpeedMultiplier_3(),
	VertexShakeA_t1278660418::get_offset_of_ScaleMultiplier_4(),
	VertexShakeA_t1278660418::get_offset_of_RotationMultiplier_5(),
	VertexShakeA_t1278660418::get_offset_of_m_TextComponent_6(),
	VertexShakeA_t1278660418::get_offset_of_hasTextChanged_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1939 = { sizeof (U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1939[9] = 
{
	U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058::get_offset_of_U3CtextInfoU3E__0_0(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058::get_offset_of_U3CcopyOfVerticesU3E__0_1(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058::get_offset_of_U3CcharacterCountU3E__1_2(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058::get_offset_of_U3ClineCountU3E__1_3(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058::get_offset_of_U3CmatrixU3E__2_4(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058::get_offset_of_U24this_5(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058::get_offset_of_U24current_6(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058::get_offset_of_U24disposing_7(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t2701499058::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1940 = { sizeof (VertexShakeB_t1391118062), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1940[5] = 
{
	VertexShakeB_t1391118062::get_offset_of_AngleMultiplier_2(),
	VertexShakeB_t1391118062::get_offset_of_SpeedMultiplier_3(),
	VertexShakeB_t1391118062::get_offset_of_CurveScale_4(),
	VertexShakeB_t1391118062::get_offset_of_m_TextComponent_5(),
	VertexShakeB_t1391118062::get_offset_of_hasTextChanged_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1941 = { sizeof (U3CAnimateVertexColorsU3Ec__Iterator0_t37519185), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1941[9] = 
{
	U3CAnimateVertexColorsU3Ec__Iterator0_t37519185::get_offset_of_U3CtextInfoU3E__0_0(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t37519185::get_offset_of_U3CcopyOfVerticesU3E__0_1(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t37519185::get_offset_of_U3CcharacterCountU3E__1_2(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t37519185::get_offset_of_U3ClineCountU3E__1_3(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t37519185::get_offset_of_U3CmatrixU3E__2_4(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t37519185::get_offset_of_U24this_5(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t37519185::get_offset_of_U24current_6(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t37519185::get_offset_of_U24disposing_7(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t37519185::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1942 = { sizeof (VertexZoom_t1781881840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1942[5] = 
{
	VertexZoom_t1781881840::get_offset_of_AngleMultiplier_2(),
	VertexZoom_t1781881840::get_offset_of_SpeedMultiplier_3(),
	VertexZoom_t1781881840::get_offset_of_CurveScale_4(),
	VertexZoom_t1781881840::get_offset_of_m_TextComponent_5(),
	VertexZoom_t1781881840::get_offset_of_hasTextChanged_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1943 = { sizeof (U3CAnimateVertexColorsU3Ec__Iterator0_t840739842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1943[10] = 
{
	U3CAnimateVertexColorsU3Ec__Iterator0_t840739842::get_offset_of_U3CtextInfoU3E__0_0(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t840739842::get_offset_of_U3CcachedMeshInfoVertexDataU3E__0_1(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t840739842::get_offset_of_U3CscaleSortingOrderU3E__0_2(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t840739842::get_offset_of_U3CcharacterCountU3E__1_3(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t840739842::get_offset_of_U3CmatrixU3E__2_4(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t840739842::get_offset_of_U24this_5(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t840739842::get_offset_of_U24current_6(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t840739842::get_offset_of_U24disposing_7(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t840739842::get_offset_of_U24PC_8(),
	U3CAnimateVertexColorsU3Ec__Iterator0_t840739842::get_offset_of_U24locvar0_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1944 = { sizeof (U3CAnimateVertexColorsU3Ec__AnonStorey1_t115028000), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1944[2] = 
{
	U3CAnimateVertexColorsU3Ec__AnonStorey1_t115028000::get_offset_of_modifiedCharScale_0(),
	U3CAnimateVertexColorsU3Ec__AnonStorey1_t115028000::get_offset_of_U3CU3Ef__refU240_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1945 = { sizeof (WarpTextExample_t826099379), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1945[5] = 
{
	WarpTextExample_t826099379::get_offset_of_m_TextComponent_2(),
	WarpTextExample_t826099379::get_offset_of_VertexCurve_3(),
	WarpTextExample_t826099379::get_offset_of_AngleMultiplier_4(),
	WarpTextExample_t826099379::get_offset_of_SpeedMultiplier_5(),
	WarpTextExample_t826099379::get_offset_of_CurveScale_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1946 = { sizeof (U3CWarpTextU3Ec__Iterator0_t2858176180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1946[12] = 
{
	U3CWarpTextU3Ec__Iterator0_t2858176180::get_offset_of_U3Cold_CurveScaleU3E__0_0(),
	U3CWarpTextU3Ec__Iterator0_t2858176180::get_offset_of_U3Cold_curveU3E__0_1(),
	U3CWarpTextU3Ec__Iterator0_t2858176180::get_offset_of_U3CtextInfoU3E__1_2(),
	U3CWarpTextU3Ec__Iterator0_t2858176180::get_offset_of_U3CcharacterCountU3E__1_3(),
	U3CWarpTextU3Ec__Iterator0_t2858176180::get_offset_of_U3CboundsMinXU3E__1_4(),
	U3CWarpTextU3Ec__Iterator0_t2858176180::get_offset_of_U3CboundsMaxXU3E__1_5(),
	U3CWarpTextU3Ec__Iterator0_t2858176180::get_offset_of_U3CverticesU3E__2_6(),
	U3CWarpTextU3Ec__Iterator0_t2858176180::get_offset_of_U3CmatrixU3E__2_7(),
	U3CWarpTextU3Ec__Iterator0_t2858176180::get_offset_of_U24this_8(),
	U3CWarpTextU3Ec__Iterator0_t2858176180::get_offset_of_U24current_9(),
	U3CWarpTextU3Ec__Iterator0_t2858176180::get_offset_of_U24disposing_10(),
	U3CWarpTextU3Ec__Iterator0_t2858176180::get_offset_of_U24PC_11(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
