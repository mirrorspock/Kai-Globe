﻿#include "il2cpp-config.h"

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

// System.Text.RegularExpressions.Regex
struct Regex_t3028474144;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t3730071912;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t2859985451;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t2038845939;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1027024321;
// UnityEngine.Object
struct Object_t315965923;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3431180083;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t2819469789;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t3540066686;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t3331729415;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1933673345;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_t3970256404;
// System.IntPtr[]
struct IntPtrU5BU5D_t1684138550;
// System.Collections.IDictionary
struct IDictionary_t4257306035;
// UnityEngine.Events.UnityAction
struct UnityAction_t2224945929;
// System.Object[]
struct ObjectU5BU5D_t136843628;
// UnityEngine.GameObject
struct GameObject_t3418992616;
// UnityEngine.Camera
struct Camera_t614277760;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2639987906;
// System.Void
struct Void_t442090261;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t3442171682;
// System.Type
struct Type_t;
// System.Char[]
struct CharU5BU5D_t3090594554;
// UnityEngine.GUIStyle
struct GUIStyle_t2081306553;
// UnityEngine.Texture2D
struct Texture2D_t2457237138;
// System.Action
struct Action_t1022868860;
// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_t3316587067;
// System.Func`2<System.Exception,System.Boolean>
struct Func_2_t3119003478;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1310518667;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t171616963;
// UnityEngine.GUIContent
struct GUIContent_t2187133888;
// UnityEngine.GUIStyleState
struct GUIStyleState_t2743156586;
// UnityEngine.RectOffset
struct RectOffset_t1769772307;
// UnityEngine.Font
struct Font_t2702488509;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t748652206;
// System.IAsyncResult
struct IAsyncResult_t4006078115;
// System.AsyncCallback
struct AsyncCallback_t2650922263;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t3323379012;
// UnityEngine.GUISettings
struct GUISettings_t2376918572;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t3363132336;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t2152753215;

struct GUIStyle_t2081306553_marshaled_pinvoke;
struct GUIStyle_t2081306553_marshaled_com;
struct GUIStyleState_t2743156586_marshaled_pinvoke;
struct GUIStyleState_t2743156586_marshaled_com;
struct RectOffset_t1769772307_marshaled_com;



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
#ifndef WEBREQUESTUTILS_T1046553809_H
#define WEBREQUESTUTILS_T1046553809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t1046553809  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t1046553809_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t3028474144 * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t1046553809_StaticFields, ___domainRegex_0)); }
	inline Regex_t3028474144 * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t3028474144 ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t3028474144 * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_T1046553809_H
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
#ifndef CLASSLIBRARYINITIALIZER_T1194013402_H
#define CLASSLIBRARYINITIALIZER_T1194013402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ClassLibraryInitializer
struct  ClassLibraryInitializer_t1194013402  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSLIBRARYINITIALIZER_T1194013402_H
#ifndef SETUPCOROUTINE_T2504291678_H
#define SETUPCOROUTINE_T2504291678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SetupCoroutine
struct  SetupCoroutine_t2504291678  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPCOROUTINE_T2504291678_H
#ifndef INVOKABLECALLLIST_T3730071912_H
#define INVOKABLECALLLIST_T3730071912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t3730071912  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t2038845939 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t2038845939 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t2038845939 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t3730071912, ___m_PersistentCalls_0)); }
	inline List_1_t2038845939 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t2038845939 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t2038845939 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t3730071912, ___m_RuntimeCalls_1)); }
	inline List_1_t2038845939 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t2038845939 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t2038845939 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t3730071912, ___m_ExecutingCalls_2)); }
	inline List_1_t2038845939 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t2038845939 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t2038845939 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t3730071912, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T3730071912_H
#ifndef PERSISTENTCALLGROUP_T2859985451_H
#define PERSISTENTCALLGROUP_T2859985451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t2859985451  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t1027024321 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t2859985451, ___m_Calls_0)); }
	inline List_1_t1027024321 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t1027024321 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t1027024321 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T2859985451_H
#ifndef BASEINVOKABLECALL_T4027638979_H
#define BASEINVOKABLECALL_T4027638979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t4027638979  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T4027638979_H
#ifndef ARGUMENTCACHE_T748652206_H
#define ARGUMENTCACHE_T748652206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t748652206  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t315965923 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t748652206, ___m_ObjectArgument_0)); }
	inline Object_t315965923 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t315965923 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t315965923 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t748652206, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t748652206, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t748652206, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t748652206, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t748652206, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T748652206_H
#ifndef SCRIPTINGUTILS_T1529929783_H
#define SCRIPTINGUTILS_T1529929783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.ScriptingUtils
struct  ScriptingUtils_t1529929783  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTINGUTILS_T1529929783_H
#ifndef ATTRIBUTEHELPERENGINE_T2298386040_H
#define ATTRIBUTEHELPERENGINE_T2298386040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t2298386040  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t2298386040_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t3431180083* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t2819469789* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t3540066686* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2298386040_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t3431180083* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t3431180083** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t3431180083* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2298386040_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t2819469789* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t2819469789** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t2819469789* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2298386040_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t3540066686* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t3540066686** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t3540066686* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T2298386040_H
#ifndef SENDMOUSEEVENTS_T3718403482_H
#define SENDMOUSEEVENTS_T3718403482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t3718403482  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t3718403482_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t3331729415* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t3331729415* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t3331729415* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t1933673345* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3718403482_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3718403482_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t3331729415* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t3331729415** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t3331729415* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3718403482_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t3331729415* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t3331729415** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t3331729415* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3718403482_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t3331729415* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t3331729415** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t3331729415* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3718403482_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t1933673345* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t1933673345** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t1933673345* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T3718403482_H
#ifndef REMOTESETTINGS_T2621109373_H
#define REMOTESETTINGS_T2621109373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings
struct  RemoteSettings_t2621109373  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t2621109373_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_t3970256404 * ___Updated_0;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t2621109373_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_t3970256404 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_t3970256404 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_t3970256404 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTESETTINGS_T2621109373_H
#ifndef JSONUTILITY_T207288216_H
#define JSONUTILITY_T207288216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.JsonUtility
struct  JsonUtility_t207288216  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONUTILITY_T207288216_H
#ifndef UNITYSTRING_T17182392_H
#define UNITYSTRING_T17182392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityString
struct  UnityString_t17182392  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSTRING_T17182392_H
#ifndef SYNCHRONIZATIONCONTEXT_T2175892495_H
#define SYNCHRONIZATIONCONTEXT_T2175892495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t2175892495  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t2175892495_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t2175892495 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2175892495_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t2175892495 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t2175892495 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t2175892495 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T2175892495_H
#ifndef SLIDERSTATE_T191964464_H
#define SLIDERSTATE_T191964464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SliderState
struct  SliderState_t191964464  : public RuntimeObject
{
public:
	// System.Single UnityEngine.SliderState::dragStartPos
	float ___dragStartPos_0;
	// System.Single UnityEngine.SliderState::dragStartValue
	float ___dragStartValue_1;
	// System.Boolean UnityEngine.SliderState::isDragging
	bool ___isDragging_2;

public:
	inline static int32_t get_offset_of_dragStartPos_0() { return static_cast<int32_t>(offsetof(SliderState_t191964464, ___dragStartPos_0)); }
	inline float get_dragStartPos_0() const { return ___dragStartPos_0; }
	inline float* get_address_of_dragStartPos_0() { return &___dragStartPos_0; }
	inline void set_dragStartPos_0(float value)
	{
		___dragStartPos_0 = value;
	}

	inline static int32_t get_offset_of_dragStartValue_1() { return static_cast<int32_t>(offsetof(SliderState_t191964464, ___dragStartValue_1)); }
	inline float get_dragStartValue_1() const { return ___dragStartValue_1; }
	inline float* get_address_of_dragStartValue_1() { return &___dragStartValue_1; }
	inline void set_dragStartValue_1(float value)
	{
		___dragStartValue_1 = value;
	}

	inline static int32_t get_offset_of_isDragging_2() { return static_cast<int32_t>(offsetof(SliderState_t191964464, ___isDragging_2)); }
	inline bool get_isDragging_2() const { return ___isDragging_2; }
	inline bool* get_address_of_isDragging_2() { return &___isDragging_2; }
	inline void set_isDragging_2(bool value)
	{
		___isDragging_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDERSTATE_T191964464_H
#ifndef SCROLLVIEWSTATE_T676566219_H
#define SCROLLVIEWSTATE_T676566219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScrollViewState
struct  ScrollViewState_t676566219  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLVIEWSTATE_T676566219_H
#ifndef STACKTRACEUTILITY_T3509378697_H
#define STACKTRACEUTILITY_T3509378697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t3509378697  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t3509378697_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t3509378697_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T3509378697_H
#ifndef ATTRIBUTE_T2408740618_H
#define ATTRIBUTE_T2408740618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2408740618  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2408740618_H
#ifndef EXCEPTION_T3658998237_H
#define EXCEPTION_T3658998237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3658998237  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1684138550* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3658998237 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3658998237, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1684138550* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1684138550** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1684138550* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3658998237, ___inner_exception_1)); }
	inline Exception_t3658998237 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3658998237 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3658998237 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3658998237, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3658998237, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3658998237, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3658998237, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3658998237, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3658998237, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3658998237, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3658998237, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3658998237, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T3658998237_H
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
#ifndef UNITYEXCEPTION_T3963573683_H
#define UNITYEXCEPTION_T3963573683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t3963573683  : public Exception_t3658998237
{
public:
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;

public:
	inline static int32_t get_offset_of_unityStackTrace_12() { return static_cast<int32_t>(offsetof(UnityException_t3963573683, ___unityStackTrace_12)); }
	inline String_t* get_unityStackTrace_12() const { return ___unityStackTrace_12; }
	inline String_t** get_address_of_unityStackTrace_12() { return &___unityStackTrace_12; }
	inline void set_unityStackTrace_12(String_t* value)
	{
		___unityStackTrace_12 = value;
		Il2CppCodeGenWriteBarrier((&___unityStackTrace_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T3963573683_H
#ifndef RANGEINT_T1409630221_H
#define RANGEINT_T1409630221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeInt
struct  RangeInt_t1409630221 
{
public:
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RangeInt_t1409630221, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(RangeInt_t1409630221, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEINT_T1409630221_H
#ifndef COLOR_T3475876905_H
#define COLOR_T3475876905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t3475876905 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t3475876905, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t3475876905, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t3475876905, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t3475876905, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T3475876905_H
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
#ifndef SERIALIZEPRIVATEVARIABLES_T2813517410_H
#define SERIALIZEPRIVATEVARIABLES_T2813517410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t2813517410  : public Attribute_t2408740618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T2813517410_H
#ifndef INVOKABLECALL_T2814066954_H
#define INVOKABLECALL_T2814066954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t2814066954  : public BaseInvokableCall_t4027638979
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t2224945929 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t2814066954, ___Delegate_0)); }
	inline UnityAction_t2224945929 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t2224945929 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t2224945929 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T2814066954_H
#ifndef SERIALIZEFIELD_T1356798746_H
#define SERIALIZEFIELD_T1356798746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t1356798746  : public Attribute_t2408740618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T1356798746_H
#ifndef PREFERBINARYSERIALIZATION_T466788239_H
#define PREFERBINARYSERIALIZATION_T466788239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t466788239  : public Attribute_t2408740618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T466788239_H
#ifndef PROPERTYATTRIBUTE_T3396508051_H
#define PROPERTYATTRIBUTE_T3396508051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t3396508051  : public Attribute_t2408740618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T3396508051_H
#ifndef UNITYEVENT_T1264434350_H
#define UNITYEVENT_T1264434350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t1264434350  : public UnityEventBase_t3155819061
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t136843628* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t1264434350, ___m_InvokeArray_4)); }
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
#endif // UNITYEVENT_T1264434350_H
#ifndef HITINFO_T937832434_H
#define HITINFO_T937832434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t937832434 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t3418992616 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t614277760 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t937832434, ___target_0)); }
	inline GameObject_t3418992616 * get_target_0() const { return ___target_0; }
	inline GameObject_t3418992616 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t3418992616 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t937832434, ___camera_1)); }
	inline Camera_t614277760 * get_camera_1() const { return ___camera_1; }
	inline Camera_t614277760 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t614277760 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t937832434_marshaled_pinvoke
{
	GameObject_t3418992616 * ___target_0;
	Camera_t614277760 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t937832434_marshaled_com
{
	GameObject_t3418992616 * ___target_0;
	Camera_t614277760 * ___camera_1;
};
#endif // HITINFO_T937832434_H
#ifndef WRITABLEATTRIBUTE_T2959310280_H
#define WRITABLEATTRIBUTE_T2959310280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WritableAttribute
struct  WritableAttribute_t2959310280  : public Attribute_t2408740618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITABLEATTRIBUTE_T2959310280_H
#ifndef RECT_T3675127498_H
#define RECT_T3675127498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t3675127498 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t3675127498, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t3675127498, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t3675127498, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t3675127498, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T3675127498_H
#ifndef WORKREQUEST_T2022209215_H
#define WORKREQUEST_T2022209215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t2022209215 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t2639987906 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t2022209215, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t2639987906 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t2639987906 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t2639987906 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t2022209215, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t2022209215_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t2022209215_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
};
#endif // WORKREQUEST_T2022209215_H
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
#ifndef VOID_T442090261_H
#define VOID_T442090261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t442090261 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T442090261_H
#ifndef VECTOR2_T3712736133_H
#define VECTOR2_T3712736133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t3712736133 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t3712736133, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t3712736133, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t3712736133_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t3712736133  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t3712736133  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t3712736133  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t3712736133  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t3712736133  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t3712736133  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t3712736133  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t3712736133  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t3712736133_StaticFields, ___zeroVector_2)); }
	inline Vector2_t3712736133  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t3712736133 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t3712736133  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t3712736133_StaticFields, ___oneVector_3)); }
	inline Vector2_t3712736133  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t3712736133 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t3712736133  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t3712736133_StaticFields, ___upVector_4)); }
	inline Vector2_t3712736133  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t3712736133 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t3712736133  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t3712736133_StaticFields, ___downVector_5)); }
	inline Vector2_t3712736133  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t3712736133 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t3712736133  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t3712736133_StaticFields, ___leftVector_6)); }
	inline Vector2_t3712736133  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t3712736133 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t3712736133  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t3712736133_StaticFields, ___rightVector_7)); }
	inline Vector2_t3712736133  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t3712736133 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t3712736133  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t3712736133_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t3712736133  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t3712736133 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t3712736133  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t3712736133_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t3712736133  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t3712736133 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t3712736133  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T3712736133_H
#ifndef DISALLOWMULTIPLECOMPONENT_T583857974_H
#define DISALLOWMULTIPLECOMPONENT_T583857974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DisallowMultipleComponent
struct  DisallowMultipleComponent_t583857974  : public Attribute_t2408740618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISALLOWMULTIPLECOMPONENT_T583857974_H
#ifndef GUITARGETATTRIBUTE_T2117440723_H
#define GUITARGETATTRIBUTE_T2117440723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUITargetAttribute
struct  GUITargetAttribute_t2117440723  : public Attribute_t2408740618
{
public:
	// System.Int32 UnityEngine.GUITargetAttribute::displayMask
	int32_t ___displayMask_0;

public:
	inline static int32_t get_offset_of_displayMask_0() { return static_cast<int32_t>(offsetof(GUITargetAttribute_t2117440723, ___displayMask_0)); }
	inline int32_t get_displayMask_0() const { return ___displayMask_0; }
	inline int32_t* get_address_of_displayMask_0() { return &___displayMask_0; }
	inline void set_displayMask_0(int32_t value)
	{
		___displayMask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUITARGETATTRIBUTE_T2117440723_H
#ifndef SINGLE_T3304290730_H
#define SINGLE_T3304290730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t3304290730 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t3304290730, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T3304290730_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T1787653941_H
#define UNITYSYNCHRONIZATIONCONTEXT_T1787653941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t1787653941  : public SynchronizationContext_t2175892495
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t3442171682 * ___m_AsyncWorkQueue_1;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t1787653941, ___m_AsyncWorkQueue_1)); }
	inline Queue_1_t3442171682 * get_m_AsyncWorkQueue_1() const { return ___m_AsyncWorkQueue_1; }
	inline Queue_1_t3442171682 ** get_address_of_m_AsyncWorkQueue_1() { return &___m_AsyncWorkQueue_1; }
	inline void set_m_AsyncWorkQueue_1(Queue_1_t3442171682 * value)
	{
		___m_AsyncWorkQueue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T1787653941_H
#ifndef REQUIRECOMPONENT_T2724446343_H
#define REQUIRECOMPONENT_T2724446343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RequireComponent
struct  RequireComponent_t2724446343  : public Attribute_t2408740618
{
public:
	// System.Type UnityEngine.RequireComponent::m_Type0
	Type_t * ___m_Type0_0;
	// System.Type UnityEngine.RequireComponent::m_Type1
	Type_t * ___m_Type1_1;
	// System.Type UnityEngine.RequireComponent::m_Type2
	Type_t * ___m_Type2_2;

public:
	inline static int32_t get_offset_of_m_Type0_0() { return static_cast<int32_t>(offsetof(RequireComponent_t2724446343, ___m_Type0_0)); }
	inline Type_t * get_m_Type0_0() const { return ___m_Type0_0; }
	inline Type_t ** get_address_of_m_Type0_0() { return &___m_Type0_0; }
	inline void set_m_Type0_0(Type_t * value)
	{
		___m_Type0_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type0_0), value);
	}

	inline static int32_t get_offset_of_m_Type1_1() { return static_cast<int32_t>(offsetof(RequireComponent_t2724446343, ___m_Type1_1)); }
	inline Type_t * get_m_Type1_1() const { return ___m_Type1_1; }
	inline Type_t ** get_address_of_m_Type1_1() { return &___m_Type1_1; }
	inline void set_m_Type1_1(Type_t * value)
	{
		___m_Type1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type1_1), value);
	}

	inline static int32_t get_offset_of_m_Type2_2() { return static_cast<int32_t>(offsetof(RequireComponent_t2724446343, ___m_Type2_2)); }
	inline Type_t * get_m_Type2_2() const { return ___m_Type2_2; }
	inline Type_t ** get_address_of_m_Type2_2() { return &___m_Type2_2; }
	inline void set_m_Type2_2(Type_t * value)
	{
		___m_Type2_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIRECOMPONENT_T2724446343_H
#ifndef ADDCOMPONENTMENU_T2981921098_H
#define ADDCOMPONENTMENU_T2981921098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AddComponentMenu
struct  AddComponentMenu_t2981921098  : public Attribute_t2408740618
{
public:
	// System.String UnityEngine.AddComponentMenu::m_AddComponentMenu
	String_t* ___m_AddComponentMenu_0;
	// System.Int32 UnityEngine.AddComponentMenu::m_Ordering
	int32_t ___m_Ordering_1;

public:
	inline static int32_t get_offset_of_m_AddComponentMenu_0() { return static_cast<int32_t>(offsetof(AddComponentMenu_t2981921098, ___m_AddComponentMenu_0)); }
	inline String_t* get_m_AddComponentMenu_0() const { return ___m_AddComponentMenu_0; }
	inline String_t** get_address_of_m_AddComponentMenu_0() { return &___m_AddComponentMenu_0; }
	inline void set_m_AddComponentMenu_0(String_t* value)
	{
		___m_AddComponentMenu_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_AddComponentMenu_0), value);
	}

	inline static int32_t get_offset_of_m_Ordering_1() { return static_cast<int32_t>(offsetof(AddComponentMenu_t2981921098, ___m_Ordering_1)); }
	inline int32_t get_m_Ordering_1() const { return ___m_Ordering_1; }
	inline int32_t* get_address_of_m_Ordering_1() { return &___m_Ordering_1; }
	inline void set_m_Ordering_1(int32_t value)
	{
		___m_Ordering_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDCOMPONENTMENU_T2981921098_H
#ifndef CONTEXTMENU_T2232829444_H
#define CONTEXTMENU_T2232829444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContextMenu
struct  ContextMenu_t2232829444  : public Attribute_t2408740618
{
public:
	// System.String UnityEngine.ContextMenu::menuItem
	String_t* ___menuItem_0;
	// System.Boolean UnityEngine.ContextMenu::validate
	bool ___validate_1;
	// System.Int32 UnityEngine.ContextMenu::priority
	int32_t ___priority_2;

public:
	inline static int32_t get_offset_of_menuItem_0() { return static_cast<int32_t>(offsetof(ContextMenu_t2232829444, ___menuItem_0)); }
	inline String_t* get_menuItem_0() const { return ___menuItem_0; }
	inline String_t** get_address_of_menuItem_0() { return &___menuItem_0; }
	inline void set_menuItem_0(String_t* value)
	{
		___menuItem_0 = value;
		Il2CppCodeGenWriteBarrier((&___menuItem_0), value);
	}

	inline static int32_t get_offset_of_validate_1() { return static_cast<int32_t>(offsetof(ContextMenu_t2232829444, ___validate_1)); }
	inline bool get_validate_1() const { return ___validate_1; }
	inline bool* get_address_of_validate_1() { return &___validate_1; }
	inline void set_validate_1(bool value)
	{
		___validate_1 = value;
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(ContextMenu_t2232829444, ___priority_2)); }
	inline int32_t get_priority_2() const { return ___priority_2; }
	inline int32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(int32_t value)
	{
		___priority_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTMENU_T2232829444_H
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
#ifndef EXECUTEINEDITMODE_T2044159572_H
#define EXECUTEINEDITMODE_T2044159572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExecuteInEditMode
struct  ExecuteInEditMode_t2044159572  : public Attribute_t2408740618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEINEDITMODE_T2044159572_H
#ifndef HIDEININSPECTOR_T4279041541_H
#define HIDEININSPECTOR_T4279041541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideInInspector
struct  HideInInspector_t4279041541  : public Attribute_t2408740618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEININSPECTOR_T4279041541_H
#ifndef DEFAULTEXECUTIONORDER_T2687855486_H
#define DEFAULTEXECUTIONORDER_T2687855486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DefaultExecutionOrder
struct  DefaultExecutionOrder_t2687855486  : public Attribute_t2408740618
{
public:
	// System.Int32 UnityEngine.DefaultExecutionOrder::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CorderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DefaultExecutionOrder_t2687855486, ___U3CorderU3Ek__BackingField_0)); }
	inline int32_t get_U3CorderU3Ek__BackingField_0() const { return ___U3CorderU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CorderU3Ek__BackingField_0() { return &___U3CorderU3Ek__BackingField_0; }
	inline void set_U3CorderU3Ek__BackingField_0(int32_t value)
	{
		___U3CorderU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXECUTIONORDER_T2687855486_H
#ifndef IL2CPPSTRUCTALIGNMENTATTRIBUTE_T20987081_H
#define IL2CPPSTRUCTALIGNMENTATTRIBUTE_T20987081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IL2CPPStructAlignmentAttribute
struct  IL2CPPStructAlignmentAttribute_t20987081  : public Attribute_t2408740618
{
public:
	// System.Int32 UnityEngine.IL2CPPStructAlignmentAttribute::Align
	int32_t ___Align_0;

public:
	inline static int32_t get_offset_of_Align_0() { return static_cast<int32_t>(offsetof(IL2CPPStructAlignmentAttribute_t20987081, ___Align_0)); }
	inline int32_t get_Align_0() const { return ___Align_0; }
	inline int32_t* get_address_of_Align_0() { return &___Align_0; }
	inline void set_Align_0(int32_t value)
	{
		___Align_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPSTRUCTALIGNMENTATTRIBUTE_T20987081_H
#ifndef NATIVECLASSATTRIBUTE_T2452132120_H
#define NATIVECLASSATTRIBUTE_T2452132120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NativeClassAttribute
struct  NativeClassAttribute_t2452132120  : public Attribute_t2408740618
{
public:
	// System.String UnityEngine.NativeClassAttribute::<QualifiedNativeName>k__BackingField
	String_t* ___U3CQualifiedNativeNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeClassAttribute_t2452132120, ___U3CQualifiedNativeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CQualifiedNativeNameU3Ek__BackingField_0() const { return ___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return &___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline void set_U3CQualifiedNativeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CQualifiedNativeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CQualifiedNativeNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECLASSATTRIBUTE_T2452132120_H
#ifndef ASSEMBLYISEDITORASSEMBLY_T996449338_H
#define ASSEMBLYISEDITORASSEMBLY_T996449338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssemblyIsEditorAssembly
struct  AssemblyIsEditorAssembly_t996449338  : public Attribute_t2408740618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYISEDITORASSEMBLY_T996449338_H
#ifndef SELECTIONBASEATTRIBUTE_T24578736_H
#define SELECTIONBASEATTRIBUTE_T24578736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SelectionBaseAttribute
struct  SelectionBaseAttribute_t24578736  : public Attribute_t2408740618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONBASEATTRIBUTE_T24578736_H
#ifndef GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T280742843_H
#define GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T280742843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.GeneratedByOldBindingsGeneratorAttribute
struct  GeneratedByOldBindingsGeneratorAttribute_t280742843  : public Attribute_t2408740618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T280742843_H
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
#ifndef EXITGUIEXCEPTION_T1857074474_H
#define EXITGUIEXCEPTION_T1857074474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExitGUIException
struct  ExitGUIException_t1857074474  : public Exception_t3658998237
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXITGUIEXCEPTION_T1857074474_H
#ifndef PERSISTENTLISTENERMODE_T2003201099_H
#define PERSISTENTLISTENERMODE_T2003201099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t2003201099 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t2003201099, ___value___1)); }
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
#endif // PERSISTENTLISTENERMODE_T2003201099_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T2629352558_H
#define TOUCHSCREENKEYBOARDTYPE_T2629352558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t2629352558 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t2629352558, ___value___1)); }
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
#endif // TOUCHSCREENKEYBOARDTYPE_T2629352558_H
#ifndef TRACKEDREFERENCE_T243067320_H
#define TRACKEDREFERENCE_T243067320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t243067320  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t243067320, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t243067320_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t243067320_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T243067320_H
#ifndef UNITYEVENTCALLSTATE_T4120262759_H
#define UNITYEVENTCALLSTATE_T4120262759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t4120262759 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t4120262759, ___value___1)); }
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
#endif // UNITYEVENTCALLSTATE_T4120262759_H
#ifndef RECTOFFSET_T1769772307_H
#define RECTOFFSET_T1769772307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1769772307  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1769772307, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1769772307, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1769772307_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1769772307_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1769772307_H
#ifndef GUISETTINGS_T2376918572_H
#define GUISETTINGS_T2376918572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISettings
struct  GUISettings_t2376918572  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.GUISettings::m_DoubleClickSelectsWord
	bool ___m_DoubleClickSelectsWord_0;
	// System.Boolean UnityEngine.GUISettings::m_TripleClickSelectsLine
	bool ___m_TripleClickSelectsLine_1;
	// UnityEngine.Color UnityEngine.GUISettings::m_CursorColor
	Color_t3475876905  ___m_CursorColor_2;
	// System.Single UnityEngine.GUISettings::m_CursorFlashSpeed
	float ___m_CursorFlashSpeed_3;
	// UnityEngine.Color UnityEngine.GUISettings::m_SelectionColor
	Color_t3475876905  ___m_SelectionColor_4;

public:
	inline static int32_t get_offset_of_m_DoubleClickSelectsWord_0() { return static_cast<int32_t>(offsetof(GUISettings_t2376918572, ___m_DoubleClickSelectsWord_0)); }
	inline bool get_m_DoubleClickSelectsWord_0() const { return ___m_DoubleClickSelectsWord_0; }
	inline bool* get_address_of_m_DoubleClickSelectsWord_0() { return &___m_DoubleClickSelectsWord_0; }
	inline void set_m_DoubleClickSelectsWord_0(bool value)
	{
		___m_DoubleClickSelectsWord_0 = value;
	}

	inline static int32_t get_offset_of_m_TripleClickSelectsLine_1() { return static_cast<int32_t>(offsetof(GUISettings_t2376918572, ___m_TripleClickSelectsLine_1)); }
	inline bool get_m_TripleClickSelectsLine_1() const { return ___m_TripleClickSelectsLine_1; }
	inline bool* get_address_of_m_TripleClickSelectsLine_1() { return &___m_TripleClickSelectsLine_1; }
	inline void set_m_TripleClickSelectsLine_1(bool value)
	{
		___m_TripleClickSelectsLine_1 = value;
	}

	inline static int32_t get_offset_of_m_CursorColor_2() { return static_cast<int32_t>(offsetof(GUISettings_t2376918572, ___m_CursorColor_2)); }
	inline Color_t3475876905  get_m_CursorColor_2() const { return ___m_CursorColor_2; }
	inline Color_t3475876905 * get_address_of_m_CursorColor_2() { return &___m_CursorColor_2; }
	inline void set_m_CursorColor_2(Color_t3475876905  value)
	{
		___m_CursorColor_2 = value;
	}

	inline static int32_t get_offset_of_m_CursorFlashSpeed_3() { return static_cast<int32_t>(offsetof(GUISettings_t2376918572, ___m_CursorFlashSpeed_3)); }
	inline float get_m_CursorFlashSpeed_3() const { return ___m_CursorFlashSpeed_3; }
	inline float* get_address_of_m_CursorFlashSpeed_3() { return &___m_CursorFlashSpeed_3; }
	inline void set_m_CursorFlashSpeed_3(float value)
	{
		___m_CursorFlashSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_4() { return static_cast<int32_t>(offsetof(GUISettings_t2376918572, ___m_SelectionColor_4)); }
	inline Color_t3475876905  get_m_SelectionColor_4() const { return ___m_SelectionColor_4; }
	inline Color_t3475876905 * get_address_of_m_SelectionColor_4() { return &___m_SelectionColor_4; }
	inline void set_m_SelectionColor_4(Color_t3475876905  value)
	{
		___m_SelectionColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISETTINGS_T2376918572_H
#ifndef MATHFINTERNAL_T2352713465_H
#define MATHFINTERNAL_T2352713465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t2352713465 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t2352713465__padding[1];
	};

public:
};

struct MathfInternal_t2352713465_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t2352713465_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t2352713465_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t2352713465_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T2352713465_H
#ifndef TEXTAREAATTRIBUTE_T2982221496_H
#define TEXTAREAATTRIBUTE_T2982221496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t2982221496  : public PropertyAttribute_t3396508051
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_0;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_1;

public:
	inline static int32_t get_offset_of_minLines_0() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t2982221496, ___minLines_0)); }
	inline int32_t get_minLines_0() const { return ___minLines_0; }
	inline int32_t* get_address_of_minLines_0() { return &___minLines_0; }
	inline void set_minLines_0(int32_t value)
	{
		___minLines_0 = value;
	}

	inline static int32_t get_offset_of_maxLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t2982221496, ___maxLines_1)); }
	inline int32_t get_maxLines_1() const { return ___maxLines_1; }
	inline int32_t* get_address_of_maxLines_1() { return &___maxLines_1; }
	inline void set_maxLines_1(int32_t value)
	{
		___maxLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTAREAATTRIBUTE_T2982221496_H
#ifndef GUISTYLESTATE_T2743156586_H
#define GUISTYLESTATE_T2743156586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t2743156586  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t2081306553 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t2457237138 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t2743156586, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t2743156586, ___m_SourceStyle_1)); }
	inline GUIStyle_t2081306553 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t2081306553 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t2081306553 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t2743156586, ___m_Background_2)); }
	inline Texture2D_t2457237138 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t2457237138 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t2457237138 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Background_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t2743156586_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t2081306553_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t2457237138 * ___m_Background_2;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t2743156586_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t2081306553_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t2457237138 * ___m_Background_2;
};
#endif // GUISTYLESTATE_T2743156586_H
#ifndef IMAGEPOSITION_T3963803968_H
#define IMAGEPOSITION_T3963803968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ImagePosition
struct  ImagePosition_t3963803968 
{
public:
	// System.Int32 UnityEngine.ImagePosition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ImagePosition_t3963803968, ___value___1)); }
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
#endif // IMAGEPOSITION_T3963803968_H
#ifndef TEXTCLIPPING_T1036524953_H
#define TEXTCLIPPING_T1036524953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextClipping
struct  TextClipping_t1036524953 
{
public:
	// System.Int32 UnityEngine.TextClipping::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextClipping_t1036524953, ___value___1)); }
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
#endif // TEXTCLIPPING_T1036524953_H
#ifndef GUIUTILITY_T2087182921_H
#define GUIUTILITY_T2087182921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIUtility
struct  GUIUtility_t2087182921  : public RuntimeObject
{
public:

public:
};

struct GUIUtility_t2087182921_StaticFields
{
public:
	// System.Int32 UnityEngine.GUIUtility::s_SkinMode
	int32_t ___s_SkinMode_0;
	// System.Int32 UnityEngine.GUIUtility::s_OriginalID
	int32_t ___s_OriginalID_1;
	// System.Action UnityEngine.GUIUtility::takeCapture
	Action_t1022868860 * ___takeCapture_2;
	// System.Action UnityEngine.GUIUtility::releaseCapture
	Action_t1022868860 * ___releaseCapture_3;
	// System.Func`3<System.Int32,System.IntPtr,System.Boolean> UnityEngine.GUIUtility::processEvent
	Func_3_t3316587067 * ___processEvent_4;
	// System.Func`2<System.Exception,System.Boolean> UnityEngine.GUIUtility::endContainerGUIFromException
	Func_2_t3119003478 * ___endContainerGUIFromException_5;
	// System.Boolean UnityEngine.GUIUtility::<guiIsExiting>k__BackingField
	bool ___U3CguiIsExitingU3Ek__BackingField_6;
	// UnityEngine.Vector2 UnityEngine.GUIUtility::s_EditorScreenPointOffset
	Vector2_t3712736133  ___s_EditorScreenPointOffset_7;

public:
	inline static int32_t get_offset_of_s_SkinMode_0() { return static_cast<int32_t>(offsetof(GUIUtility_t2087182921_StaticFields, ___s_SkinMode_0)); }
	inline int32_t get_s_SkinMode_0() const { return ___s_SkinMode_0; }
	inline int32_t* get_address_of_s_SkinMode_0() { return &___s_SkinMode_0; }
	inline void set_s_SkinMode_0(int32_t value)
	{
		___s_SkinMode_0 = value;
	}

	inline static int32_t get_offset_of_s_OriginalID_1() { return static_cast<int32_t>(offsetof(GUIUtility_t2087182921_StaticFields, ___s_OriginalID_1)); }
	inline int32_t get_s_OriginalID_1() const { return ___s_OriginalID_1; }
	inline int32_t* get_address_of_s_OriginalID_1() { return &___s_OriginalID_1; }
	inline void set_s_OriginalID_1(int32_t value)
	{
		___s_OriginalID_1 = value;
	}

	inline static int32_t get_offset_of_takeCapture_2() { return static_cast<int32_t>(offsetof(GUIUtility_t2087182921_StaticFields, ___takeCapture_2)); }
	inline Action_t1022868860 * get_takeCapture_2() const { return ___takeCapture_2; }
	inline Action_t1022868860 ** get_address_of_takeCapture_2() { return &___takeCapture_2; }
	inline void set_takeCapture_2(Action_t1022868860 * value)
	{
		___takeCapture_2 = value;
		Il2CppCodeGenWriteBarrier((&___takeCapture_2), value);
	}

	inline static int32_t get_offset_of_releaseCapture_3() { return static_cast<int32_t>(offsetof(GUIUtility_t2087182921_StaticFields, ___releaseCapture_3)); }
	inline Action_t1022868860 * get_releaseCapture_3() const { return ___releaseCapture_3; }
	inline Action_t1022868860 ** get_address_of_releaseCapture_3() { return &___releaseCapture_3; }
	inline void set_releaseCapture_3(Action_t1022868860 * value)
	{
		___releaseCapture_3 = value;
		Il2CppCodeGenWriteBarrier((&___releaseCapture_3), value);
	}

	inline static int32_t get_offset_of_processEvent_4() { return static_cast<int32_t>(offsetof(GUIUtility_t2087182921_StaticFields, ___processEvent_4)); }
	inline Func_3_t3316587067 * get_processEvent_4() const { return ___processEvent_4; }
	inline Func_3_t3316587067 ** get_address_of_processEvent_4() { return &___processEvent_4; }
	inline void set_processEvent_4(Func_3_t3316587067 * value)
	{
		___processEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___processEvent_4), value);
	}

	inline static int32_t get_offset_of_endContainerGUIFromException_5() { return static_cast<int32_t>(offsetof(GUIUtility_t2087182921_StaticFields, ___endContainerGUIFromException_5)); }
	inline Func_2_t3119003478 * get_endContainerGUIFromException_5() const { return ___endContainerGUIFromException_5; }
	inline Func_2_t3119003478 ** get_address_of_endContainerGUIFromException_5() { return &___endContainerGUIFromException_5; }
	inline void set_endContainerGUIFromException_5(Func_2_t3119003478 * value)
	{
		___endContainerGUIFromException_5 = value;
		Il2CppCodeGenWriteBarrier((&___endContainerGUIFromException_5), value);
	}

	inline static int32_t get_offset_of_U3CguiIsExitingU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GUIUtility_t2087182921_StaticFields, ___U3CguiIsExitingU3Ek__BackingField_6)); }
	inline bool get_U3CguiIsExitingU3Ek__BackingField_6() const { return ___U3CguiIsExitingU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CguiIsExitingU3Ek__BackingField_6() { return &___U3CguiIsExitingU3Ek__BackingField_6; }
	inline void set_U3CguiIsExitingU3Ek__BackingField_6(bool value)
	{
		___U3CguiIsExitingU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_s_EditorScreenPointOffset_7() { return static_cast<int32_t>(offsetof(GUIUtility_t2087182921_StaticFields, ___s_EditorScreenPointOffset_7)); }
	inline Vector2_t3712736133  get_s_EditorScreenPointOffset_7() const { return ___s_EditorScreenPointOffset_7; }
	inline Vector2_t3712736133 * get_address_of_s_EditorScreenPointOffset_7() { return &___s_EditorScreenPointOffset_7; }
	inline void set_s_EditorScreenPointOffset_7(Vector2_t3712736133  value)
	{
		___s_EditorScreenPointOffset_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIUTILITY_T2087182921_H
#ifndef DBLCLICKSNAPPING_T1379575697_H
#define DBLCLICKSNAPPING_T1379575697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor/DblClickSnapping
struct  DblClickSnapping_t1379575697 
{
public:
	// System.Byte UnityEngine.TextEditor/DblClickSnapping::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DblClickSnapping_t1379575697, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBLCLICKSNAPPING_T1379575697_H
#ifndef INTERNAL_DRAWARGUMENTS_T1863668733_H
#define INTERNAL_DRAWARGUMENTS_T1863668733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal_DrawArguments
struct  Internal_DrawArguments_t1863668733 
{
public:
	// System.IntPtr UnityEngine.Internal_DrawArguments::target
	IntPtr_t ___target_0;
	// UnityEngine.Rect UnityEngine.Internal_DrawArguments::position
	Rect_t3675127498  ___position_1;
	// System.Int32 UnityEngine.Internal_DrawArguments::isHover
	int32_t ___isHover_2;
	// System.Int32 UnityEngine.Internal_DrawArguments::isActive
	int32_t ___isActive_3;
	// System.Int32 UnityEngine.Internal_DrawArguments::on
	int32_t ___on_4;
	// System.Int32 UnityEngine.Internal_DrawArguments::hasKeyboardFocus
	int32_t ___hasKeyboardFocus_5;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t1863668733, ___target_0)); }
	inline IntPtr_t get_target_0() const { return ___target_0; }
	inline IntPtr_t* get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(IntPtr_t value)
	{
		___target_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t1863668733, ___position_1)); }
	inline Rect_t3675127498  get_position_1() const { return ___position_1; }
	inline Rect_t3675127498 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Rect_t3675127498  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_isHover_2() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t1863668733, ___isHover_2)); }
	inline int32_t get_isHover_2() const { return ___isHover_2; }
	inline int32_t* get_address_of_isHover_2() { return &___isHover_2; }
	inline void set_isHover_2(int32_t value)
	{
		___isHover_2 = value;
	}

	inline static int32_t get_offset_of_isActive_3() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t1863668733, ___isActive_3)); }
	inline int32_t get_isActive_3() const { return ___isActive_3; }
	inline int32_t* get_address_of_isActive_3() { return &___isActive_3; }
	inline void set_isActive_3(int32_t value)
	{
		___isActive_3 = value;
	}

	inline static int32_t get_offset_of_on_4() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t1863668733, ___on_4)); }
	inline int32_t get_on_4() const { return ___on_4; }
	inline int32_t* get_address_of_on_4() { return &___on_4; }
	inline void set_on_4(int32_t value)
	{
		___on_4 = value;
	}

	inline static int32_t get_offset_of_hasKeyboardFocus_5() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t1863668733, ___hasKeyboardFocus_5)); }
	inline int32_t get_hasKeyboardFocus_5() const { return ___hasKeyboardFocus_5; }
	inline int32_t* get_address_of_hasKeyboardFocus_5() { return &___hasKeyboardFocus_5; }
	inline void set_hasKeyboardFocus_5(int32_t value)
	{
		___hasKeyboardFocus_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_DRAWARGUMENTS_T1863668733_H
#ifndef INTERNAL_DRAWWITHTEXTSELECTIONARGUMENTS_T2760259280_H
#define INTERNAL_DRAWWITHTEXTSELECTIONARGUMENTS_T2760259280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal_DrawWithTextSelectionArguments
struct  Internal_DrawWithTextSelectionArguments_t2760259280 
{
public:
	// System.IntPtr UnityEngine.Internal_DrawWithTextSelectionArguments::target
	IntPtr_t ___target_0;
	// UnityEngine.Rect UnityEngine.Internal_DrawWithTextSelectionArguments::position
	Rect_t3675127498  ___position_1;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::firstPos
	int32_t ___firstPos_2;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::lastPos
	int32_t ___lastPos_3;
	// UnityEngine.Color UnityEngine.Internal_DrawWithTextSelectionArguments::cursorColor
	Color_t3475876905  ___cursorColor_4;
	// UnityEngine.Color UnityEngine.Internal_DrawWithTextSelectionArguments::selectionColor
	Color_t3475876905  ___selectionColor_5;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::isHover
	int32_t ___isHover_6;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::isActive
	int32_t ___isActive_7;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::on
	int32_t ___on_8;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::hasKeyboardFocus
	int32_t ___hasKeyboardFocus_9;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::drawSelectionAsComposition
	int32_t ___drawSelectionAsComposition_10;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t2760259280, ___target_0)); }
	inline IntPtr_t get_target_0() const { return ___target_0; }
	inline IntPtr_t* get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(IntPtr_t value)
	{
		___target_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t2760259280, ___position_1)); }
	inline Rect_t3675127498  get_position_1() const { return ___position_1; }
	inline Rect_t3675127498 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Rect_t3675127498  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_firstPos_2() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t2760259280, ___firstPos_2)); }
	inline int32_t get_firstPos_2() const { return ___firstPos_2; }
	inline int32_t* get_address_of_firstPos_2() { return &___firstPos_2; }
	inline void set_firstPos_2(int32_t value)
	{
		___firstPos_2 = value;
	}

	inline static int32_t get_offset_of_lastPos_3() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t2760259280, ___lastPos_3)); }
	inline int32_t get_lastPos_3() const { return ___lastPos_3; }
	inline int32_t* get_address_of_lastPos_3() { return &___lastPos_3; }
	inline void set_lastPos_3(int32_t value)
	{
		___lastPos_3 = value;
	}

	inline static int32_t get_offset_of_cursorColor_4() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t2760259280, ___cursorColor_4)); }
	inline Color_t3475876905  get_cursorColor_4() const { return ___cursorColor_4; }
	inline Color_t3475876905 * get_address_of_cursorColor_4() { return &___cursorColor_4; }
	inline void set_cursorColor_4(Color_t3475876905  value)
	{
		___cursorColor_4 = value;
	}

	inline static int32_t get_offset_of_selectionColor_5() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t2760259280, ___selectionColor_5)); }
	inline Color_t3475876905  get_selectionColor_5() const { return ___selectionColor_5; }
	inline Color_t3475876905 * get_address_of_selectionColor_5() { return &___selectionColor_5; }
	inline void set_selectionColor_5(Color_t3475876905  value)
	{
		___selectionColor_5 = value;
	}

	inline static int32_t get_offset_of_isHover_6() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t2760259280, ___isHover_6)); }
	inline int32_t get_isHover_6() const { return ___isHover_6; }
	inline int32_t* get_address_of_isHover_6() { return &___isHover_6; }
	inline void set_isHover_6(int32_t value)
	{
		___isHover_6 = value;
	}

	inline static int32_t get_offset_of_isActive_7() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t2760259280, ___isActive_7)); }
	inline int32_t get_isActive_7() const { return ___isActive_7; }
	inline int32_t* get_address_of_isActive_7() { return &___isActive_7; }
	inline void set_isActive_7(int32_t value)
	{
		___isActive_7 = value;
	}

	inline static int32_t get_offset_of_on_8() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t2760259280, ___on_8)); }
	inline int32_t get_on_8() const { return ___on_8; }
	inline int32_t* get_address_of_on_8() { return &___on_8; }
	inline void set_on_8(int32_t value)
	{
		___on_8 = value;
	}

	inline static int32_t get_offset_of_hasKeyboardFocus_9() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t2760259280, ___hasKeyboardFocus_9)); }
	inline int32_t get_hasKeyboardFocus_9() const { return ___hasKeyboardFocus_9; }
	inline int32_t* get_address_of_hasKeyboardFocus_9() { return &___hasKeyboardFocus_9; }
	inline void set_hasKeyboardFocus_9(int32_t value)
	{
		___hasKeyboardFocus_9 = value;
	}

	inline static int32_t get_offset_of_drawSelectionAsComposition_10() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t2760259280, ___drawSelectionAsComposition_10)); }
	inline int32_t get_drawSelectionAsComposition_10() const { return ___drawSelectionAsComposition_10; }
	inline int32_t* get_address_of_drawSelectionAsComposition_10() { return &___drawSelectionAsComposition_10; }
	inline void set_drawSelectionAsComposition_10(int32_t value)
	{
		___drawSelectionAsComposition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_DRAWWITHTEXTSELECTIONARGUMENTS_T2760259280_H
#ifndef SENDMESSAGEOPTIONS_T2509409470_H
#define SENDMESSAGEOPTIONS_T2509409470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t2509409470 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t2509409470, ___value___1)); }
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
#endif // SENDMESSAGEOPTIONS_T2509409470_H
#ifndef SPACE_T59219198_H
#define SPACE_T59219198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t59219198 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t59219198, ___value___1)); }
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
#endif // SPACE_T59219198_H
#ifndef RAY_T1558035696_H
#define RAY_T1558035696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t1558035696 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t810140550  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t810140550  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t1558035696, ___m_Origin_0)); }
	inline Vector3_t810140550  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t810140550 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t810140550  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t1558035696, ___m_Direction_1)); }
	inline Vector3_t810140550  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t810140550 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t810140550  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T1558035696_H
#ifndef OPERATINGSYSTEMFAMILY_T1934566773_H
#define OPERATINGSYSTEMFAMILY_T1934566773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.OperatingSystemFamily
struct  OperatingSystemFamily_t1934566773 
{
public:
	// System.Int32 UnityEngine.OperatingSystemFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperatingSystemFamily_t1934566773, ___value___1)); }
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
#endif // OPERATINGSYSTEMFAMILY_T1934566773_H
#ifndef LOGTYPE_T602156541_H
#define LOGTYPE_T602156541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t602156541 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t602156541, ___value___1)); }
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
#endif // LOGTYPE_T602156541_H
#ifndef CAMERACLEARFLAGS_T1725939350_H
#define CAMERACLEARFLAGS_T1725939350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t1725939350 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t1725939350, ___value___1)); }
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
#endif // CAMERACLEARFLAGS_T1725939350_H
#ifndef RUNTIMEPLATFORM_T1660011037_H
#define RUNTIMEPLATFORM_T1660011037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t1660011037 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t1660011037, ___value___1)); }
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
#endif // RUNTIMEPLATFORM_T1660011037_H
#ifndef KEYCODE_T3563531570_H
#define KEYCODE_T3563531570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t3563531570 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t3563531570, ___value___1)); }
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
#endif // KEYCODE_T3563531570_H
#ifndef RANGEATTRIBUTE_T2418075479_H
#define RANGEATTRIBUTE_T2418075479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeAttribute
struct  RangeAttribute_t2418075479  : public PropertyAttribute_t3396508051
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t2418075479, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t2418075479, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEATTRIBUTE_T2418075479_H
#ifndef SPACEATTRIBUTE_T386808266_H
#define SPACEATTRIBUTE_T386808266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpaceAttribute
struct  SpaceAttribute_t386808266  : public PropertyAttribute_t3396508051
{
public:
	// System.Single UnityEngine.SpaceAttribute::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SpaceAttribute_t386808266, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACEATTRIBUTE_T386808266_H
#ifndef TOOLTIPATTRIBUTE_T441156628_H
#define TOOLTIPATTRIBUTE_T441156628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t441156628  : public PropertyAttribute_t3396508051
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t441156628, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((&___tooltip_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLTIPATTRIBUTE_T441156628_H
#ifndef PLANE_T3507963357_H
#define PLANE_T3507963357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t3507963357 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t810140550  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t3507963357, ___m_Normal_0)); }
	inline Vector3_t810140550  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t810140550 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t810140550  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t3507963357, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T3507963357_H
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
#ifndef MESHTOPOLOGY_T3920613302_H
#define MESHTOPOLOGY_T3920613302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshTopology
struct  MeshTopology_t3920613302 
{
public:
	// System.Int32 UnityEngine.MeshTopology::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MeshTopology_t3920613302, ___value___1)); }
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
#endif // MESHTOPOLOGY_T3920613302_H
#ifndef DELEGATE_T2929957058_H
#define DELEGATE_T2929957058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t2929957058  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1310518667 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t2929957058, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t2929957058, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t2929957058, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t2929957058, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t2929957058, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t2929957058, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t2929957058, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t2929957058, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t2929957058, ___data_8)); }
	inline DelegateData_t1310518667 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1310518667 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1310518667 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T2929957058_H
#ifndef STENCILOP_T3146900326_H
#define STENCILOP_T3146900326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.StencilOp
struct  StencilOp_t3146900326 
{
public:
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StencilOp_t3146900326, ___value___1)); }
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
#endif // STENCILOP_T3146900326_H
#ifndef COLORWRITEMASK_T3294933392_H
#define COLORWRITEMASK_T3294933392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ColorWriteMask
struct  ColorWriteMask_t3294933392 
{
public:
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorWriteMask_t3294933392, ___value___1)); }
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
#endif // COLORWRITEMASK_T3294933392_H
#ifndef COMPAREFUNCTION_T3333855270_H
#define COMPAREFUNCTION_T3333855270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CompareFunction
struct  CompareFunction_t3333855270 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareFunction_t3333855270, ___value___1)); }
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
#endif // COMPAREFUNCTION_T3333855270_H
#ifndef TEXTUREWRAPMODE_T1054439689_H
#define TEXTUREWRAPMODE_T1054439689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t1054439689 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t1054439689, ___value___1)); }
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
#endif // TEXTUREWRAPMODE_T1054439689_H
#ifndef SHADOWCASTINGMODE_T4038836241_H
#define SHADOWCASTINGMODE_T4038836241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ShadowCastingMode
struct  ShadowCastingMode_t4038836241 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t4038836241, ___value___1)); }
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
#endif // SHADOWCASTINGMODE_T4038836241_H
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
#ifndef MULTICASTDELEGATE_T703341468_H
#define MULTICASTDELEGATE_T703341468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t703341468  : public Delegate_t2929957058
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t703341468 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t703341468 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t703341468, ___prev_9)); }
	inline MulticastDelegate_t703341468 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t703341468 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t703341468 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t703341468, ___kpm_next_10)); }
	inline MulticastDelegate_t703341468 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t703341468 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t703341468 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T703341468_H
#ifndef TEXTEDITOR_T1466939461_H
#define TEXTEDITOR_T1466939461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor
struct  TextEditor_t1466939461  : public RuntimeObject
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t171616963 * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t2081306553 * ___style_2;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_3;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_4;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_5;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t3712736133  ___scrollOffset_6;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t2187133888 * ___m_Content_7;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_8;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_9;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_10;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_11;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_12;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_13;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_14;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_15;

public:
	inline static int32_t get_offset_of_keyboardOnScreen_0() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___keyboardOnScreen_0)); }
	inline TouchScreenKeyboard_t171616963 * get_keyboardOnScreen_0() const { return ___keyboardOnScreen_0; }
	inline TouchScreenKeyboard_t171616963 ** get_address_of_keyboardOnScreen_0() { return &___keyboardOnScreen_0; }
	inline void set_keyboardOnScreen_0(TouchScreenKeyboard_t171616963 * value)
	{
		___keyboardOnScreen_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyboardOnScreen_0), value);
	}

	inline static int32_t get_offset_of_controlID_1() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___controlID_1)); }
	inline int32_t get_controlID_1() const { return ___controlID_1; }
	inline int32_t* get_address_of_controlID_1() { return &___controlID_1; }
	inline void set_controlID_1(int32_t value)
	{
		___controlID_1 = value;
	}

	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___style_2)); }
	inline GUIStyle_t2081306553 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t2081306553 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t2081306553 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier((&___style_2), value);
	}

	inline static int32_t get_offset_of_multiline_3() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___multiline_3)); }
	inline bool get_multiline_3() const { return ___multiline_3; }
	inline bool* get_address_of_multiline_3() { return &___multiline_3; }
	inline void set_multiline_3(bool value)
	{
		___multiline_3 = value;
	}

	inline static int32_t get_offset_of_hasHorizontalCursorPos_4() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___hasHorizontalCursorPos_4)); }
	inline bool get_hasHorizontalCursorPos_4() const { return ___hasHorizontalCursorPos_4; }
	inline bool* get_address_of_hasHorizontalCursorPos_4() { return &___hasHorizontalCursorPos_4; }
	inline void set_hasHorizontalCursorPos_4(bool value)
	{
		___hasHorizontalCursorPos_4 = value;
	}

	inline static int32_t get_offset_of_isPasswordField_5() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___isPasswordField_5)); }
	inline bool get_isPasswordField_5() const { return ___isPasswordField_5; }
	inline bool* get_address_of_isPasswordField_5() { return &___isPasswordField_5; }
	inline void set_isPasswordField_5(bool value)
	{
		___isPasswordField_5 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_6() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___scrollOffset_6)); }
	inline Vector2_t3712736133  get_scrollOffset_6() const { return ___scrollOffset_6; }
	inline Vector2_t3712736133 * get_address_of_scrollOffset_6() { return &___scrollOffset_6; }
	inline void set_scrollOffset_6(Vector2_t3712736133  value)
	{
		___scrollOffset_6 = value;
	}

	inline static int32_t get_offset_of_m_Content_7() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___m_Content_7)); }
	inline GUIContent_t2187133888 * get_m_Content_7() const { return ___m_Content_7; }
	inline GUIContent_t2187133888 ** get_address_of_m_Content_7() { return &___m_Content_7; }
	inline void set_m_Content_7(GUIContent_t2187133888 * value)
	{
		___m_Content_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_7), value);
	}

	inline static int32_t get_offset_of_m_CursorIndex_8() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___m_CursorIndex_8)); }
	inline int32_t get_m_CursorIndex_8() const { return ___m_CursorIndex_8; }
	inline int32_t* get_address_of_m_CursorIndex_8() { return &___m_CursorIndex_8; }
	inline void set_m_CursorIndex_8(int32_t value)
	{
		___m_CursorIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_SelectIndex_9() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___m_SelectIndex_9)); }
	inline int32_t get_m_SelectIndex_9() const { return ___m_SelectIndex_9; }
	inline int32_t* get_address_of_m_SelectIndex_9() { return &___m_SelectIndex_9; }
	inline void set_m_SelectIndex_9(int32_t value)
	{
		___m_SelectIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_RevealCursor_10() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___m_RevealCursor_10)); }
	inline bool get_m_RevealCursor_10() const { return ___m_RevealCursor_10; }
	inline bool* get_address_of_m_RevealCursor_10() { return &___m_RevealCursor_10; }
	inline void set_m_RevealCursor_10(bool value)
	{
		___m_RevealCursor_10 = value;
	}

	inline static int32_t get_offset_of_m_MouseDragSelectsWholeWords_11() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___m_MouseDragSelectsWholeWords_11)); }
	inline bool get_m_MouseDragSelectsWholeWords_11() const { return ___m_MouseDragSelectsWholeWords_11; }
	inline bool* get_address_of_m_MouseDragSelectsWholeWords_11() { return &___m_MouseDragSelectsWholeWords_11; }
	inline void set_m_MouseDragSelectsWholeWords_11(bool value)
	{
		___m_MouseDragSelectsWholeWords_11 = value;
	}

	inline static int32_t get_offset_of_m_DblClickInitPos_12() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___m_DblClickInitPos_12)); }
	inline int32_t get_m_DblClickInitPos_12() const { return ___m_DblClickInitPos_12; }
	inline int32_t* get_address_of_m_DblClickInitPos_12() { return &___m_DblClickInitPos_12; }
	inline void set_m_DblClickInitPos_12(int32_t value)
	{
		___m_DblClickInitPos_12 = value;
	}

	inline static int32_t get_offset_of_m_DblClickSnap_13() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___m_DblClickSnap_13)); }
	inline uint8_t get_m_DblClickSnap_13() const { return ___m_DblClickSnap_13; }
	inline uint8_t* get_address_of_m_DblClickSnap_13() { return &___m_DblClickSnap_13; }
	inline void set_m_DblClickSnap_13(uint8_t value)
	{
		___m_DblClickSnap_13 = value;
	}

	inline static int32_t get_offset_of_m_bJustSelected_14() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___m_bJustSelected_14)); }
	inline bool get_m_bJustSelected_14() const { return ___m_bJustSelected_14; }
	inline bool* get_address_of_m_bJustSelected_14() { return &___m_bJustSelected_14; }
	inline void set_m_bJustSelected_14(bool value)
	{
		___m_bJustSelected_14 = value;
	}

	inline static int32_t get_offset_of_m_iAltCursorPos_15() { return static_cast<int32_t>(offsetof(TextEditor_t1466939461, ___m_iAltCursorPos_15)); }
	inline int32_t get_m_iAltCursorPos_15() const { return ___m_iAltCursorPos_15; }
	inline int32_t* get_address_of_m_iAltCursorPos_15() { return &___m_iAltCursorPos_15; }
	inline void set_m_iAltCursorPos_15(int32_t value)
	{
		___m_iAltCursorPos_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTEDITOR_T1466939461_H
#ifndef GUISTYLE_T2081306553_H
#define GUISTYLE_T2081306553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t2081306553  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t2743156586 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t2743156586 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t2743156586 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t2743156586 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t2743156586 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t2743156586 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t2743156586 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t2743156586 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1769772307 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1769772307 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1769772307 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1769772307 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t2702488509 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_Normal_1)); }
	inline GUIStyleState_t2743156586 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t2743156586 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t2743156586 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_Hover_2)); }
	inline GUIStyleState_t2743156586 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t2743156586 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t2743156586 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_Active_3)); }
	inline GUIStyleState_t2743156586 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t2743156586 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t2743156586 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_Focused_4)); }
	inline GUIStyleState_t2743156586 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t2743156586 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t2743156586 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_OnNormal_5)); }
	inline GUIStyleState_t2743156586 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t2743156586 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t2743156586 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_OnHover_6)); }
	inline GUIStyleState_t2743156586 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t2743156586 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t2743156586 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_OnActive_7)); }
	inline GUIStyleState_t2743156586 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t2743156586 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t2743156586 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_OnFocused_8)); }
	inline GUIStyleState_t2743156586 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t2743156586 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t2743156586 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_Border_9)); }
	inline RectOffset_t1769772307 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1769772307 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1769772307 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_Padding_10)); }
	inline RectOffset_t1769772307 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1769772307 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1769772307 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_Margin_11)); }
	inline RectOffset_t1769772307 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1769772307 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1769772307 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_Overflow_12)); }
	inline RectOffset_t1769772307 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1769772307 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1769772307 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553, ___m_FontInternal_13)); }
	inline Font_t2702488509 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t2702488509 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t2702488509 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t2081306553_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t2081306553 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t2081306553_StaticFields, ___s_None_15)); }
	inline GUIStyle_t2081306553 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t2081306553 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t2081306553 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t2081306553_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t2743156586_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t2743156586_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t2743156586_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t2743156586_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t2743156586_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t2743156586_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t2743156586_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t2743156586_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1769772307_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1769772307_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1769772307_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1769772307_marshaled_pinvoke ___m_Overflow_12;
	Font_t2702488509 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t2081306553_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t2743156586_marshaled_com* ___m_Normal_1;
	GUIStyleState_t2743156586_marshaled_com* ___m_Hover_2;
	GUIStyleState_t2743156586_marshaled_com* ___m_Active_3;
	GUIStyleState_t2743156586_marshaled_com* ___m_Focused_4;
	GUIStyleState_t2743156586_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t2743156586_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t2743156586_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t2743156586_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1769772307_marshaled_com* ___m_Border_9;
	RectOffset_t1769772307_marshaled_com* ___m_Padding_10;
	RectOffset_t1769772307_marshaled_com* ___m_Margin_11;
	RectOffset_t1769772307_marshaled_com* ___m_Overflow_12;
	Font_t2702488509 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T2081306553_H
#ifndef PERSISTENTCALL_T3015817361_H
#define PERSISTENTCALL_T3015817361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t3015817361  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t315965923 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t748652206 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t3015817361, ___m_Target_0)); }
	inline Object_t315965923 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t315965923 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t315965923 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t3015817361, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t3015817361, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t3015817361, ___m_Arguments_3)); }
	inline ArgumentCache_t748652206 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t748652206 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t748652206 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t3015817361, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T3015817361_H
#ifndef UPDATEDEVENTHANDLER_T3970256404_H
#define UPDATEDEVENTHANDLER_T3970256404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct  UpdatedEventHandler_t3970256404  : public MulticastDelegate_t703341468
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEDEVENTHANDLER_T3970256404_H
#ifndef UNITYACTION_T2224945929_H
#define UNITYACTION_T2224945929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t2224945929  : public MulticastDelegate_t703341468
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T2224945929_H
#ifndef SKINCHANGEDDELEGATE_T2152753215_H
#define SKINCHANGEDDELEGATE_T2152753215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin/SkinChangedDelegate
struct  SkinChangedDelegate_t2152753215  : public MulticastDelegate_t703341468
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKINCHANGEDDELEGATE_T2152753215_H
#ifndef GUISKIN_T3710981552_H
#define GUISKIN_T3710981552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin
struct  GUISkin_t3710981552  : public ScriptableObject_t4108801594
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t2702488509 * ___m_Font_2;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t2081306553 * ___m_box_3;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t2081306553 * ___m_button_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t2081306553 * ___m_toggle_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t2081306553 * ___m_label_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t2081306553 * ___m_textField_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t2081306553 * ___m_textArea_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t2081306553 * ___m_window_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t2081306553 * ___m_horizontalSlider_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t2081306553 * ___m_horizontalSliderThumb_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t2081306553 * ___m_verticalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t2081306553 * ___m_verticalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t2081306553 * ___m_horizontalScrollbar_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t2081306553 * ___m_horizontalScrollbarThumb_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t2081306553 * ___m_horizontalScrollbarLeftButton_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t2081306553 * ___m_horizontalScrollbarRightButton_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t2081306553 * ___m_verticalScrollbar_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t2081306553 * ___m_verticalScrollbarThumb_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t2081306553 * ___m_verticalScrollbarUpButton_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t2081306553 * ___m_verticalScrollbarDownButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t2081306553 * ___m_ScrollView_22;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t3323379012* ___m_CustomStyles_23;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_t2376918572 * ___m_Settings_24;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t3363132336 * ___m_Styles_26;

public:
	inline static int32_t get_offset_of_m_Font_2() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_Font_2)); }
	inline Font_t2702488509 * get_m_Font_2() const { return ___m_Font_2; }
	inline Font_t2702488509 ** get_address_of_m_Font_2() { return &___m_Font_2; }
	inline void set_m_Font_2(Font_t2702488509 * value)
	{
		___m_Font_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Font_2), value);
	}

	inline static int32_t get_offset_of_m_box_3() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_box_3)); }
	inline GUIStyle_t2081306553 * get_m_box_3() const { return ___m_box_3; }
	inline GUIStyle_t2081306553 ** get_address_of_m_box_3() { return &___m_box_3; }
	inline void set_m_box_3(GUIStyle_t2081306553 * value)
	{
		___m_box_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_box_3), value);
	}

	inline static int32_t get_offset_of_m_button_4() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_button_4)); }
	inline GUIStyle_t2081306553 * get_m_button_4() const { return ___m_button_4; }
	inline GUIStyle_t2081306553 ** get_address_of_m_button_4() { return &___m_button_4; }
	inline void set_m_button_4(GUIStyle_t2081306553 * value)
	{
		___m_button_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_button_4), value);
	}

	inline static int32_t get_offset_of_m_toggle_5() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_toggle_5)); }
	inline GUIStyle_t2081306553 * get_m_toggle_5() const { return ___m_toggle_5; }
	inline GUIStyle_t2081306553 ** get_address_of_m_toggle_5() { return &___m_toggle_5; }
	inline void set_m_toggle_5(GUIStyle_t2081306553 * value)
	{
		___m_toggle_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_toggle_5), value);
	}

	inline static int32_t get_offset_of_m_label_6() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_label_6)); }
	inline GUIStyle_t2081306553 * get_m_label_6() const { return ___m_label_6; }
	inline GUIStyle_t2081306553 ** get_address_of_m_label_6() { return &___m_label_6; }
	inline void set_m_label_6(GUIStyle_t2081306553 * value)
	{
		___m_label_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_label_6), value);
	}

	inline static int32_t get_offset_of_m_textField_7() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_textField_7)); }
	inline GUIStyle_t2081306553 * get_m_textField_7() const { return ___m_textField_7; }
	inline GUIStyle_t2081306553 ** get_address_of_m_textField_7() { return &___m_textField_7; }
	inline void set_m_textField_7(GUIStyle_t2081306553 * value)
	{
		___m_textField_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_textField_7), value);
	}

	inline static int32_t get_offset_of_m_textArea_8() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_textArea_8)); }
	inline GUIStyle_t2081306553 * get_m_textArea_8() const { return ___m_textArea_8; }
	inline GUIStyle_t2081306553 ** get_address_of_m_textArea_8() { return &___m_textArea_8; }
	inline void set_m_textArea_8(GUIStyle_t2081306553 * value)
	{
		___m_textArea_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textArea_8), value);
	}

	inline static int32_t get_offset_of_m_window_9() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_window_9)); }
	inline GUIStyle_t2081306553 * get_m_window_9() const { return ___m_window_9; }
	inline GUIStyle_t2081306553 ** get_address_of_m_window_9() { return &___m_window_9; }
	inline void set_m_window_9(GUIStyle_t2081306553 * value)
	{
		___m_window_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_window_9), value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_10() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_horizontalSlider_10)); }
	inline GUIStyle_t2081306553 * get_m_horizontalSlider_10() const { return ___m_horizontalSlider_10; }
	inline GUIStyle_t2081306553 ** get_address_of_m_horizontalSlider_10() { return &___m_horizontalSlider_10; }
	inline void set_m_horizontalSlider_10(GUIStyle_t2081306553 * value)
	{
		___m_horizontalSlider_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSlider_10), value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_11() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_horizontalSliderThumb_11)); }
	inline GUIStyle_t2081306553 * get_m_horizontalSliderThumb_11() const { return ___m_horizontalSliderThumb_11; }
	inline GUIStyle_t2081306553 ** get_address_of_m_horizontalSliderThumb_11() { return &___m_horizontalSliderThumb_11; }
	inline void set_m_horizontalSliderThumb_11(GUIStyle_t2081306553 * value)
	{
		___m_horizontalSliderThumb_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSliderThumb_11), value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_verticalSlider_12)); }
	inline GUIStyle_t2081306553 * get_m_verticalSlider_12() const { return ___m_verticalSlider_12; }
	inline GUIStyle_t2081306553 ** get_address_of_m_verticalSlider_12() { return &___m_verticalSlider_12; }
	inline void set_m_verticalSlider_12(GUIStyle_t2081306553 * value)
	{
		___m_verticalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSlider_12), value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_verticalSliderThumb_13)); }
	inline GUIStyle_t2081306553 * get_m_verticalSliderThumb_13() const { return ___m_verticalSliderThumb_13; }
	inline GUIStyle_t2081306553 ** get_address_of_m_verticalSliderThumb_13() { return &___m_verticalSliderThumb_13; }
	inline void set_m_verticalSliderThumb_13(GUIStyle_t2081306553 * value)
	{
		___m_verticalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSliderThumb_13), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_14() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_horizontalScrollbar_14)); }
	inline GUIStyle_t2081306553 * get_m_horizontalScrollbar_14() const { return ___m_horizontalScrollbar_14; }
	inline GUIStyle_t2081306553 ** get_address_of_m_horizontalScrollbar_14() { return &___m_horizontalScrollbar_14; }
	inline void set_m_horizontalScrollbar_14(GUIStyle_t2081306553 * value)
	{
		___m_horizontalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbar_14), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_15() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_horizontalScrollbarThumb_15)); }
	inline GUIStyle_t2081306553 * get_m_horizontalScrollbarThumb_15() const { return ___m_horizontalScrollbarThumb_15; }
	inline GUIStyle_t2081306553 ** get_address_of_m_horizontalScrollbarThumb_15() { return &___m_horizontalScrollbarThumb_15; }
	inline void set_m_horizontalScrollbarThumb_15(GUIStyle_t2081306553 * value)
	{
		___m_horizontalScrollbarThumb_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarThumb_15), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_16() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_horizontalScrollbarLeftButton_16)); }
	inline GUIStyle_t2081306553 * get_m_horizontalScrollbarLeftButton_16() const { return ___m_horizontalScrollbarLeftButton_16; }
	inline GUIStyle_t2081306553 ** get_address_of_m_horizontalScrollbarLeftButton_16() { return &___m_horizontalScrollbarLeftButton_16; }
	inline void set_m_horizontalScrollbarLeftButton_16(GUIStyle_t2081306553 * value)
	{
		___m_horizontalScrollbarLeftButton_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarLeftButton_16), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_17() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_horizontalScrollbarRightButton_17)); }
	inline GUIStyle_t2081306553 * get_m_horizontalScrollbarRightButton_17() const { return ___m_horizontalScrollbarRightButton_17; }
	inline GUIStyle_t2081306553 ** get_address_of_m_horizontalScrollbarRightButton_17() { return &___m_horizontalScrollbarRightButton_17; }
	inline void set_m_horizontalScrollbarRightButton_17(GUIStyle_t2081306553 * value)
	{
		___m_horizontalScrollbarRightButton_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarRightButton_17), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_18() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_verticalScrollbar_18)); }
	inline GUIStyle_t2081306553 * get_m_verticalScrollbar_18() const { return ___m_verticalScrollbar_18; }
	inline GUIStyle_t2081306553 ** get_address_of_m_verticalScrollbar_18() { return &___m_verticalScrollbar_18; }
	inline void set_m_verticalScrollbar_18(GUIStyle_t2081306553 * value)
	{
		___m_verticalScrollbar_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbar_18), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_19() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_verticalScrollbarThumb_19)); }
	inline GUIStyle_t2081306553 * get_m_verticalScrollbarThumb_19() const { return ___m_verticalScrollbarThumb_19; }
	inline GUIStyle_t2081306553 ** get_address_of_m_verticalScrollbarThumb_19() { return &___m_verticalScrollbarThumb_19; }
	inline void set_m_verticalScrollbarThumb_19(GUIStyle_t2081306553 * value)
	{
		___m_verticalScrollbarThumb_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarThumb_19), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_20() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_verticalScrollbarUpButton_20)); }
	inline GUIStyle_t2081306553 * get_m_verticalScrollbarUpButton_20() const { return ___m_verticalScrollbarUpButton_20; }
	inline GUIStyle_t2081306553 ** get_address_of_m_verticalScrollbarUpButton_20() { return &___m_verticalScrollbarUpButton_20; }
	inline void set_m_verticalScrollbarUpButton_20(GUIStyle_t2081306553 * value)
	{
		___m_verticalScrollbarUpButton_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarUpButton_20), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_21() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_verticalScrollbarDownButton_21)); }
	inline GUIStyle_t2081306553 * get_m_verticalScrollbarDownButton_21() const { return ___m_verticalScrollbarDownButton_21; }
	inline GUIStyle_t2081306553 ** get_address_of_m_verticalScrollbarDownButton_21() { return &___m_verticalScrollbarDownButton_21; }
	inline void set_m_verticalScrollbarDownButton_21(GUIStyle_t2081306553 * value)
	{
		___m_verticalScrollbarDownButton_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarDownButton_21), value);
	}

	inline static int32_t get_offset_of_m_ScrollView_22() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_ScrollView_22)); }
	inline GUIStyle_t2081306553 * get_m_ScrollView_22() const { return ___m_ScrollView_22; }
	inline GUIStyle_t2081306553 ** get_address_of_m_ScrollView_22() { return &___m_ScrollView_22; }
	inline void set_m_ScrollView_22(GUIStyle_t2081306553 * value)
	{
		___m_ScrollView_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScrollView_22), value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_23() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_CustomStyles_23)); }
	inline GUIStyleU5BU5D_t3323379012* get_m_CustomStyles_23() const { return ___m_CustomStyles_23; }
	inline GUIStyleU5BU5D_t3323379012** get_address_of_m_CustomStyles_23() { return &___m_CustomStyles_23; }
	inline void set_m_CustomStyles_23(GUIStyleU5BU5D_t3323379012* value)
	{
		___m_CustomStyles_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomStyles_23), value);
	}

	inline static int32_t get_offset_of_m_Settings_24() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_Settings_24)); }
	inline GUISettings_t2376918572 * get_m_Settings_24() const { return ___m_Settings_24; }
	inline GUISettings_t2376918572 ** get_address_of_m_Settings_24() { return &___m_Settings_24; }
	inline void set_m_Settings_24(GUISettings_t2376918572 * value)
	{
		___m_Settings_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Settings_24), value);
	}

	inline static int32_t get_offset_of_m_Styles_26() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552, ___m_Styles_26)); }
	inline Dictionary_2_t3363132336 * get_m_Styles_26() const { return ___m_Styles_26; }
	inline Dictionary_2_t3363132336 ** get_address_of_m_Styles_26() { return &___m_Styles_26; }
	inline void set_m_Styles_26(Dictionary_2_t3363132336 * value)
	{
		___m_Styles_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Styles_26), value);
	}
};

struct GUISkin_t3710981552_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t2081306553 * ___ms_Error_25;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t2152753215 * ___m_SkinChanged_27;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t3710981552 * ___current_28;

public:
	inline static int32_t get_offset_of_ms_Error_25() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552_StaticFields, ___ms_Error_25)); }
	inline GUIStyle_t2081306553 * get_ms_Error_25() const { return ___ms_Error_25; }
	inline GUIStyle_t2081306553 ** get_address_of_ms_Error_25() { return &___ms_Error_25; }
	inline void set_ms_Error_25(GUIStyle_t2081306553 * value)
	{
		___ms_Error_25 = value;
		Il2CppCodeGenWriteBarrier((&___ms_Error_25), value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_27() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552_StaticFields, ___m_SkinChanged_27)); }
	inline SkinChangedDelegate_t2152753215 * get_m_SkinChanged_27() const { return ___m_SkinChanged_27; }
	inline SkinChangedDelegate_t2152753215 ** get_address_of_m_SkinChanged_27() { return &___m_SkinChanged_27; }
	inline void set_m_SkinChanged_27(SkinChangedDelegate_t2152753215 * value)
	{
		___m_SkinChanged_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_SkinChanged_27), value);
	}

	inline static int32_t get_offset_of_current_28() { return static_cast<int32_t>(offsetof(GUISkin_t3710981552_StaticFields, ___current_28)); }
	inline GUISkin_t3710981552 * get_current_28() const { return ___current_28; }
	inline GUISkin_t3710981552 ** get_address_of_current_28() { return &___current_28; }
	inline void set_current_28(GUISkin_t3710981552 * value)
	{
		___current_28 = value;
		Il2CppCodeGenWriteBarrier((&___current_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISKIN_T3710981552_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (GUISettings_t2376918572), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1400[5] = 
{
	GUISettings_t2376918572::get_offset_of_m_DoubleClickSelectsWord_0(),
	GUISettings_t2376918572::get_offset_of_m_TripleClickSelectsLine_1(),
	GUISettings_t2376918572::get_offset_of_m_CursorColor_2(),
	GUISettings_t2376918572::get_offset_of_m_CursorFlashSpeed_3(),
	GUISettings_t2376918572::get_offset_of_m_SelectionColor_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (GUISkin_t3710981552), -1, sizeof(GUISkin_t3710981552_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1401[27] = 
{
	GUISkin_t3710981552::get_offset_of_m_Font_2(),
	GUISkin_t3710981552::get_offset_of_m_box_3(),
	GUISkin_t3710981552::get_offset_of_m_button_4(),
	GUISkin_t3710981552::get_offset_of_m_toggle_5(),
	GUISkin_t3710981552::get_offset_of_m_label_6(),
	GUISkin_t3710981552::get_offset_of_m_textField_7(),
	GUISkin_t3710981552::get_offset_of_m_textArea_8(),
	GUISkin_t3710981552::get_offset_of_m_window_9(),
	GUISkin_t3710981552::get_offset_of_m_horizontalSlider_10(),
	GUISkin_t3710981552::get_offset_of_m_horizontalSliderThumb_11(),
	GUISkin_t3710981552::get_offset_of_m_verticalSlider_12(),
	GUISkin_t3710981552::get_offset_of_m_verticalSliderThumb_13(),
	GUISkin_t3710981552::get_offset_of_m_horizontalScrollbar_14(),
	GUISkin_t3710981552::get_offset_of_m_horizontalScrollbarThumb_15(),
	GUISkin_t3710981552::get_offset_of_m_horizontalScrollbarLeftButton_16(),
	GUISkin_t3710981552::get_offset_of_m_horizontalScrollbarRightButton_17(),
	GUISkin_t3710981552::get_offset_of_m_verticalScrollbar_18(),
	GUISkin_t3710981552::get_offset_of_m_verticalScrollbarThumb_19(),
	GUISkin_t3710981552::get_offset_of_m_verticalScrollbarUpButton_20(),
	GUISkin_t3710981552::get_offset_of_m_verticalScrollbarDownButton_21(),
	GUISkin_t3710981552::get_offset_of_m_ScrollView_22(),
	GUISkin_t3710981552::get_offset_of_m_CustomStyles_23(),
	GUISkin_t3710981552::get_offset_of_m_Settings_24(),
	GUISkin_t3710981552_StaticFields::get_offset_of_ms_Error_25(),
	GUISkin_t3710981552::get_offset_of_m_Styles_26(),
	GUISkin_t3710981552_StaticFields::get_offset_of_m_SkinChanged_27(),
	GUISkin_t3710981552_StaticFields::get_offset_of_current_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (SkinChangedDelegate_t2152753215), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (GUIStyleState_t2743156586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1403[3] = 
{
	GUIStyleState_t2743156586::get_offset_of_m_Ptr_0(),
	GUIStyleState_t2743156586::get_offset_of_m_SourceStyle_1(),
	GUIStyleState_t2743156586::get_offset_of_m_Background_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (ImagePosition_t3963803968)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1404[5] = 
{
	ImagePosition_t3963803968::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (GUIStyle_t2081306553), -1, sizeof(GUIStyle_t2081306553_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1405[16] = 
{
	GUIStyle_t2081306553::get_offset_of_m_Ptr_0(),
	GUIStyle_t2081306553::get_offset_of_m_Normal_1(),
	GUIStyle_t2081306553::get_offset_of_m_Hover_2(),
	GUIStyle_t2081306553::get_offset_of_m_Active_3(),
	GUIStyle_t2081306553::get_offset_of_m_Focused_4(),
	GUIStyle_t2081306553::get_offset_of_m_OnNormal_5(),
	GUIStyle_t2081306553::get_offset_of_m_OnHover_6(),
	GUIStyle_t2081306553::get_offset_of_m_OnActive_7(),
	GUIStyle_t2081306553::get_offset_of_m_OnFocused_8(),
	GUIStyle_t2081306553::get_offset_of_m_Border_9(),
	GUIStyle_t2081306553::get_offset_of_m_Padding_10(),
	GUIStyle_t2081306553::get_offset_of_m_Margin_11(),
	GUIStyle_t2081306553::get_offset_of_m_Overflow_12(),
	GUIStyle_t2081306553::get_offset_of_m_FontInternal_13(),
	GUIStyle_t2081306553_StaticFields::get_offset_of_showKeyboardFocus_14(),
	GUIStyle_t2081306553_StaticFields::get_offset_of_s_None_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (TextClipping_t1036524953)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1406[3] = 
{
	TextClipping_t1036524953::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (GUITargetAttribute_t2117440723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1407[1] = 
{
	GUITargetAttribute_t2117440723::get_offset_of_displayMask_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (ExitGUIException_t1857074474), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (GUIUtility_t2087182921), -1, sizeof(GUIUtility_t2087182921_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1409[8] = 
{
	GUIUtility_t2087182921_StaticFields::get_offset_of_s_SkinMode_0(),
	GUIUtility_t2087182921_StaticFields::get_offset_of_s_OriginalID_1(),
	GUIUtility_t2087182921_StaticFields::get_offset_of_takeCapture_2(),
	GUIUtility_t2087182921_StaticFields::get_offset_of_releaseCapture_3(),
	GUIUtility_t2087182921_StaticFields::get_offset_of_processEvent_4(),
	GUIUtility_t2087182921_StaticFields::get_offset_of_endContainerGUIFromException_5(),
	GUIUtility_t2087182921_StaticFields::get_offset_of_U3CguiIsExitingU3Ek__BackingField_6(),
	GUIUtility_t2087182921_StaticFields::get_offset_of_s_EditorScreenPointOffset_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (ScrollViewState_t676566219), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { sizeof (SliderState_t191964464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1411[3] = 
{
	SliderState_t191964464::get_offset_of_dragStartPos_0(),
	SliderState_t191964464::get_offset_of_dragStartValue_1(),
	SliderState_t191964464::get_offset_of_isDragging_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { sizeof (TextEditor_t1466939461), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1412[16] = 
{
	TextEditor_t1466939461::get_offset_of_keyboardOnScreen_0(),
	TextEditor_t1466939461::get_offset_of_controlID_1(),
	TextEditor_t1466939461::get_offset_of_style_2(),
	TextEditor_t1466939461::get_offset_of_multiline_3(),
	TextEditor_t1466939461::get_offset_of_hasHorizontalCursorPos_4(),
	TextEditor_t1466939461::get_offset_of_isPasswordField_5(),
	TextEditor_t1466939461::get_offset_of_scrollOffset_6(),
	TextEditor_t1466939461::get_offset_of_m_Content_7(),
	TextEditor_t1466939461::get_offset_of_m_CursorIndex_8(),
	TextEditor_t1466939461::get_offset_of_m_SelectIndex_9(),
	TextEditor_t1466939461::get_offset_of_m_RevealCursor_10(),
	TextEditor_t1466939461::get_offset_of_m_MouseDragSelectsWholeWords_11(),
	TextEditor_t1466939461::get_offset_of_m_DblClickInitPos_12(),
	TextEditor_t1466939461::get_offset_of_m_DblClickSnap_13(),
	TextEditor_t1466939461::get_offset_of_m_bJustSelected_14(),
	TextEditor_t1466939461::get_offset_of_m_iAltCursorPos_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (DblClickSnapping_t1379575697)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1413[3] = 
{
	DblClickSnapping_t1379575697::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { sizeof (Internal_DrawArguments_t1863668733)+ sizeof (RuntimeObject), sizeof(Internal_DrawArguments_t1863668733 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1414[6] = 
{
	Internal_DrawArguments_t1863668733::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t1863668733::get_offset_of_position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t1863668733::get_offset_of_isHover_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t1863668733::get_offset_of_isActive_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t1863668733::get_offset_of_on_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t1863668733::get_offset_of_hasKeyboardFocus_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (Internal_DrawWithTextSelectionArguments_t2760259280)+ sizeof (RuntimeObject), sizeof(Internal_DrawWithTextSelectionArguments_t2760259280 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1415[11] = 
{
	Internal_DrawWithTextSelectionArguments_t2760259280::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t2760259280::get_offset_of_position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t2760259280::get_offset_of_firstPos_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t2760259280::get_offset_of_lastPos_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t2760259280::get_offset_of_cursorColor_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t2760259280::get_offset_of_selectionColor_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t2760259280::get_offset_of_isHover_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t2760259280::get_offset_of_isActive_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t2760259280::get_offset_of_on_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t2760259280::get_offset_of_hasKeyboardFocus_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t2760259280::get_offset_of_drawSelectionAsComposition_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (WebRequestUtils_t1046553809), -1, sizeof(WebRequestUtils_t1046553809_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1416[1] = 
{
	WebRequestUtils_t1046553809_StaticFields::get_offset_of_domainRegex_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (JsonUtility_t207288216), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (RemoteSettings_t2621109373), -1, sizeof(RemoteSettings_t2621109373_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1418[1] = 
{
	RemoteSettings_t2621109373_StaticFields::get_offset_of_Updated_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (UpdatedEventHandler_t3970256404), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (AttributeHelperEngine_t2298386040), -1, sizeof(AttributeHelperEngine_t2298386040_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1420[3] = 
{
	AttributeHelperEngine_t2298386040_StaticFields::get_offset_of__disallowMultipleComponentArray_0(),
	AttributeHelperEngine_t2298386040_StaticFields::get_offset_of__executeInEditModeArray_1(),
	AttributeHelperEngine_t2298386040_StaticFields::get_offset_of__requireComponentArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { sizeof (DisallowMultipleComponent_t583857974), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { sizeof (RequireComponent_t2724446343), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1422[3] = 
{
	RequireComponent_t2724446343::get_offset_of_m_Type0_0(),
	RequireComponent_t2724446343::get_offset_of_m_Type1_1(),
	RequireComponent_t2724446343::get_offset_of_m_Type2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (AddComponentMenu_t2981921098), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1423[2] = 
{
	AddComponentMenu_t2981921098::get_offset_of_m_AddComponentMenu_0(),
	AddComponentMenu_t2981921098::get_offset_of_m_Ordering_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (ContextMenu_t2232829444), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1424[3] = 
{
	ContextMenu_t2232829444::get_offset_of_menuItem_0(),
	ContextMenu_t2232829444::get_offset_of_validate_1(),
	ContextMenu_t2232829444::get_offset_of_priority_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { sizeof (ExecuteInEditMode_t2044159572), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (HideInInspector_t4279041541), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (DefaultExecutionOrder_t2687855486), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1427[1] = 
{
	DefaultExecutionOrder_t2687855486::get_offset_of_U3CorderU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (IL2CPPStructAlignmentAttribute_t20987081), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1428[1] = 
{
	IL2CPPStructAlignmentAttribute_t20987081::get_offset_of_Align_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (NativeClassAttribute_t2452132120), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1429[1] = 
{
	NativeClassAttribute_t2452132120::get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (AssemblyIsEditorAssembly_t996449338), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (WritableAttribute_t2959310280), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { sizeof (GeneratedByOldBindingsGeneratorAttribute_t280742843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { sizeof (SendMessageOptions_t2509409470)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1433[3] = 
{
	SendMessageOptions_t2509409470::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (Space_t59219198)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1434[3] = 
{
	Space_t59219198::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (RuntimePlatform_t1660011037)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1435[34] = 
{
	RuntimePlatform_t1660011037::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (OperatingSystemFamily_t1934566773)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1436[5] = 
{
	OperatingSystemFamily_t1934566773::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (LogType_t602156541)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1437[6] = 
{
	LogType_t602156541::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (ClassLibraryInitializer_t1194013402), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (Color_t3475876905)+ sizeof (RuntimeObject), sizeof(Color_t3475876905 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1439[4] = 
{
	Color_t3475876905::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t3475876905::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t3475876905::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t3475876905::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (Color32_t4068301183)+ sizeof (RuntimeObject), sizeof(Color32_t4068301183 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1440[4] = 
{
	Color32_t4068301183::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t4068301183::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t4068301183::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t4068301183::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (SetupCoroutine_t2504291678), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (CameraClearFlags_t1725939350)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1442[6] = 
{
	CameraClearFlags_t1725939350::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (MeshTopology_t3920613302)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1443[6] = 
{
	MeshTopology_t3920613302::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (TextureWrapMode_t1054439689)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1444[5] = 
{
	TextureWrapMode_t1054439689::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { sizeof (CompareFunction_t3333855270)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1445[10] = 
{
	CompareFunction_t3333855270::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (ColorWriteMask_t3294933392)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1446[6] = 
{
	ColorWriteMask_t3294933392::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { sizeof (StencilOp_t3146900326)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1447[9] = 
{
	StencilOp_t3146900326::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (ShadowCastingMode_t4038836241)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1448[5] = 
{
	ShadowCastingMode_t4038836241::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (KeyCode_t3563531570)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1449[322] = 
{
	KeyCode_t3563531570::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (MathfInternal_t2352713465)+ sizeof (RuntimeObject), sizeof(MathfInternal_t2352713465 ), sizeof(MathfInternal_t2352713465_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1450[3] = 
{
	MathfInternal_t2352713465_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t2352713465_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t2352713465_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { sizeof (ScriptingUtils_t1529929783), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (SendMouseEvents_t3718403482), -1, sizeof(SendMouseEvents_t3718403482_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1452[5] = 
{
	SendMouseEvents_t3718403482_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t3718403482_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t3718403482_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t3718403482_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t3718403482_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (HitInfo_t937832434)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1453[2] = 
{
	HitInfo_t937832434::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t937832434::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (Plane_t3507963357)+ sizeof (RuntimeObject), sizeof(Plane_t3507963357 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1454[2] = 
{
	Plane_t3507963357::get_offset_of_m_Normal_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Plane_t3507963357::get_offset_of_m_Distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (PropertyAttribute_t3396508051), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (TooltipAttribute_t441156628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1456[1] = 
{
	TooltipAttribute_t441156628::get_offset_of_tooltip_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (SpaceAttribute_t386808266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1457[1] = 
{
	SpaceAttribute_t386808266::get_offset_of_height_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (RangeAttribute_t2418075479), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1458[2] = 
{
	RangeAttribute_t2418075479::get_offset_of_min_0(),
	RangeAttribute_t2418075479::get_offset_of_max_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (TextAreaAttribute_t2982221496), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1459[2] = 
{
	TextAreaAttribute_t2982221496::get_offset_of_minLines_0(),
	TextAreaAttribute_t2982221496::get_offset_of_maxLines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (RangeInt_t1409630221)+ sizeof (RuntimeObject), sizeof(RangeInt_t1409630221 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1460[2] = 
{
	RangeInt_t1409630221::get_offset_of_start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RangeInt_t1409630221::get_offset_of_length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { sizeof (Ray_t1558035696)+ sizeof (RuntimeObject), sizeof(Ray_t1558035696 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1461[2] = 
{
	Ray_t1558035696::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t1558035696::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { sizeof (Rect_t3675127498)+ sizeof (RuntimeObject), sizeof(Rect_t3675127498 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1462[4] = 
{
	Rect_t3675127498::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3675127498::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3675127498::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3675127498::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { sizeof (SelectionBaseAttribute_t24578736), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { sizeof (SerializePrivateVariables_t2813517410), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { sizeof (SerializeField_t1356798746), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { sizeof (PreferBinarySerialization_t466788239), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { sizeof (StackTraceUtility_t3509378697), -1, sizeof(StackTraceUtility_t3509378697_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1468[1] = 
{
	StackTraceUtility_t3509378697_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { sizeof (UnityException_t3963573683), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1469[2] = 
{
	0,
	UnityException_t3963573683::get_offset_of_unityStackTrace_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (TouchScreenKeyboardType_t2629352558)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1470[12] = 
{
	TouchScreenKeyboardType_t2629352558::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (TrackedReference_t243067320), sizeof(TrackedReference_t243067320_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1471[1] = 
{
	TrackedReference_t243067320::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { sizeof (PersistentListenerMode_t2003201099)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1472[8] = 
{
	PersistentListenerMode_t2003201099::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { sizeof (ArgumentCache_t748652206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1473[6] = 
{
	ArgumentCache_t748652206::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t748652206::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t748652206::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t748652206::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t748652206::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t748652206::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { sizeof (BaseInvokableCall_t4027638979), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { sizeof (InvokableCall_t2814066954), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1475[1] = 
{
	InvokableCall_t2814066954::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1476[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1477[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1478[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1479[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1480[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (UnityEventCallState_t4120262759)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1481[4] = 
{
	UnityEventCallState_t4120262759::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { sizeof (PersistentCall_t3015817361), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1482[5] = 
{
	PersistentCall_t3015817361::get_offset_of_m_Target_0(),
	PersistentCall_t3015817361::get_offset_of_m_MethodName_1(),
	PersistentCall_t3015817361::get_offset_of_m_Mode_2(),
	PersistentCall_t3015817361::get_offset_of_m_Arguments_3(),
	PersistentCall_t3015817361::get_offset_of_m_CallState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (PersistentCallGroup_t2859985451), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1483[1] = 
{
	PersistentCallGroup_t2859985451::get_offset_of_m_Calls_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { sizeof (InvokableCallList_t3730071912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1484[4] = 
{
	InvokableCallList_t3730071912::get_offset_of_m_PersistentCalls_0(),
	InvokableCallList_t3730071912::get_offset_of_m_RuntimeCalls_1(),
	InvokableCallList_t3730071912::get_offset_of_m_ExecutingCalls_2(),
	InvokableCallList_t3730071912::get_offset_of_m_NeedsUpdate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { sizeof (UnityEventBase_t3155819061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1485[4] = 
{
	UnityEventBase_t3155819061::get_offset_of_m_Calls_0(),
	UnityEventBase_t3155819061::get_offset_of_m_PersistentCalls_1(),
	UnityEventBase_t3155819061::get_offset_of_m_TypeName_2(),
	UnityEventBase_t3155819061::get_offset_of_m_CallsDirty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { sizeof (UnityAction_t2224945929), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { sizeof (UnityEvent_t1264434350), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1487[1] = 
{
	UnityEvent_t1264434350::get_offset_of_m_InvokeArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1489[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1491 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1491[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1492 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1493 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1493[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1494 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1495 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1495[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1496 = { sizeof (UnityString_t17182392), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1497 = { sizeof (UnitySynchronizationContext_t1787653941), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1497[1] = 
{
	UnitySynchronizationContext_t1787653941::get_offset_of_m_AsyncWorkQueue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1498 = { sizeof (WorkRequest_t2022209215)+ sizeof (RuntimeObject), sizeof(WorkRequest_t2022209215_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1498[2] = 
{
	WorkRequest_t2022209215::get_offset_of_m_DelagateCallback_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t2022209215::get_offset_of_m_DelagateState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1499 = { sizeof (Vector2_t3712736133)+ sizeof (RuntimeObject), sizeof(Vector2_t3712736133 ), sizeof(Vector2_t3712736133_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1499[11] = 
{
	Vector2_t3712736133::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t3712736133::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t3712736133_StaticFields::get_offset_of_zeroVector_2(),
	Vector2_t3712736133_StaticFields::get_offset_of_oneVector_3(),
	Vector2_t3712736133_StaticFields::get_offset_of_upVector_4(),
	Vector2_t3712736133_StaticFields::get_offset_of_downVector_5(),
	Vector2_t3712736133_StaticFields::get_offset_of_leftVector_6(),
	Vector2_t3712736133_StaticFields::get_offset_of_rightVector_7(),
	Vector2_t3712736133_StaticFields::get_offset_of_positiveInfinityVector_8(),
	Vector2_t3712736133_StaticFields::get_offset_of_negativeInfinityVector_9(),
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
