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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2894086140;
// System.Char[]
struct CharU5BU5D_t3090594554;
// System.Byte
struct Byte_t2323409009;
// System.Double
struct Double_t3837215111;
// System.UInt16
struct UInt16_t972853744;

extern RuntimeClass* StringU5BU5D_t2894086140_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1415976431;
extern Il2CppCodeGenString* _stringLiteral3244645962;
extern Il2CppCodeGenString* _stringLiteral4034896531;
extern const uint32_t KeyValuePair_2_ToString_m3440002371_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1254910535_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2374843802_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m158010201_MetadataUsageId;

struct StringU5BU5D_t2894086140;


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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3090594554* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3090594554* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3090594554** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3090594554* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef KEYVALUEPAIR_2_T2279740520_H
#define KEYVALUEPAIR_2_T2279740520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>
struct  KeyValuePair_2_t2279740520 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2279740520, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2279740520, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2279740520_H
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
#ifndef INT32_T2434991294_H
#define INT32_T2434991294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2434991294 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2434991294, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2434991294_H
#ifndef BOOLEAN_T1385716400_H
#define BOOLEAN_T1385716400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1385716400 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1385716400, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1385716400_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1385716400_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1385716400_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T1385716400_H
#ifndef KEYVALUEPAIR_2_T3014236531_H
#define KEYVALUEPAIR_2_T3014236531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>
struct  KeyValuePair_2_t3014236531 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Il2CppChar ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3014236531, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3014236531, ___value_1)); }
	inline Il2CppChar get_value_1() const { return ___value_1; }
	inline Il2CppChar* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Il2CppChar value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3014236531_H
#ifndef CHAR_T2120212411_H
#define CHAR_T2120212411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t2120212411 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t2120212411, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t2120212411_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t2120212411_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t2120212411_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t2120212411_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t2120212411_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t2120212411_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t2120212411_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t2120212411_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T2120212411_H
#ifndef KEYVALUEPAIR_2_T3329015414_H
#define KEYVALUEPAIR_2_T3329015414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_t3329015414 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3329015414, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3329015414, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3329015414_H
#ifndef KEYVALUEPAIR_2_T559509107_H
#define KEYVALUEPAIR_2_T559509107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>
struct  KeyValuePair_2_t559509107 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t559509107, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t559509107, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T559509107_H
#ifndef INT64_T3960452283_H
#define INT64_T3960452283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3960452283 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3960452283, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3960452283_H
// System.String[]
struct StringU5BU5D_t2894086140  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m928062979_gshared (KeyValuePair_2_t2279740520 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1552511980_gshared (KeyValuePair_2_t2279740520 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4030266706_gshared (KeyValuePair_2_t2279740520 * __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2311711174_gshared (KeyValuePair_2_t2279740520 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m2221533295_gshared (KeyValuePair_2_t2279740520 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3440002371_gshared (KeyValuePair_2_t2279740520 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4053434911_gshared (KeyValuePair_2_t3014236531 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1312391115_gshared (KeyValuePair_2_t3014236531 * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m929374358_gshared (KeyValuePair_2_t3014236531 * __this, int32_t ___key0, Il2CppChar ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1729009313_gshared (KeyValuePair_2_t3014236531 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Value()
extern "C"  Il2CppChar KeyValuePair_2_get_Value_m1159180636_gshared (KeyValuePair_2_t3014236531 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1254910535_gshared (KeyValuePair_2_t3014236531 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1691825053_gshared (KeyValuePair_2_t3329015414 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m88166035_gshared (KeyValuePair_2_t3329015414 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1196262312_gshared (KeyValuePair_2_t3329015414 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1585962111_gshared (KeyValuePair_2_t3329015414 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m3938780747_gshared (KeyValuePair_2_t3329015414 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2374843802_gshared (KeyValuePair_2_t3329015414 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1457444608_gshared (KeyValuePair_2_t559509107 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1691871241_gshared (KeyValuePair_2_t559509107 * __this, int64_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m307919309_gshared (KeyValuePair_2_t559509107 * __this, int32_t ___key0, int64_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1456754055_gshared (KeyValuePair_2_t559509107 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Value()
extern "C"  int64_t KeyValuePair_2_get_Value_m267241325_gshared (KeyValuePair_2_t559509107 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m158010201_gshared (KeyValuePair_2_t559509107 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m928062979(__this, p0, method) ((  void (*) (KeyValuePair_2_t2279740520 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m928062979_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1552511980(__this, p0, method) ((  void (*) (KeyValuePair_2_t2279740520 *, bool, const RuntimeMethod*))KeyValuePair_2_set_Value_m1552511980_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m4030266706(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2279740520 *, int32_t, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m4030266706_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m2311711174(__this, method) ((  int32_t (*) (KeyValuePair_2_t2279740520 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2311711174_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m2221533295(__this, method) ((  bool (*) (KeyValuePair_2_t2279740520 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2221533295_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m1828908656 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m1832840080 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m708906343 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t2894086140* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::ToString()
#define KeyValuePair_2_ToString_m3440002371(__this, method) ((  String_t* (*) (KeyValuePair_2_t2279740520 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3440002371_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m4053434911(__this, p0, method) ((  void (*) (KeyValuePair_2_t3014236531 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m4053434911_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1312391115(__this, p0, method) ((  void (*) (KeyValuePair_2_t3014236531 *, Il2CppChar, const RuntimeMethod*))KeyValuePair_2_set_Value_m1312391115_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m929374358(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3014236531 *, int32_t, Il2CppChar, const RuntimeMethod*))KeyValuePair_2__ctor_m929374358_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Key()
#define KeyValuePair_2_get_Key_m1729009313(__this, method) ((  int32_t (*) (KeyValuePair_2_t3014236531 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1729009313_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Value()
#define KeyValuePair_2_get_Value_m1159180636(__this, method) ((  Il2CppChar (*) (KeyValuePair_2_t3014236531 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1159180636_gshared)(__this, method)
// System.String System.Char::ToString()
extern "C"  String_t* Char_ToString_m1447376922 (Il2CppChar* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::ToString()
#define KeyValuePair_2_ToString_m1254910535(__this, method) ((  String_t* (*) (KeyValuePair_2_t3014236531 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1254910535_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1691825053(__this, p0, method) ((  void (*) (KeyValuePair_2_t3329015414 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1691825053_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m88166035(__this, p0, method) ((  void (*) (KeyValuePair_2_t3329015414 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m88166035_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1196262312(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3329015414 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m1196262312_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m1585962111(__this, method) ((  int32_t (*) (KeyValuePair_2_t3329015414 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1585962111_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m3938780747(__this, method) ((  int32_t (*) (KeyValuePair_2_t3329015414 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3938780747_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m2374843802(__this, method) ((  String_t* (*) (KeyValuePair_2_t3329015414 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2374843802_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1457444608(__this, p0, method) ((  void (*) (KeyValuePair_2_t559509107 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1457444608_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1691871241(__this, p0, method) ((  void (*) (KeyValuePair_2_t559509107 *, int64_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m1691871241_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m307919309(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t559509107 *, int32_t, int64_t, const RuntimeMethod*))KeyValuePair_2__ctor_m307919309_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Key()
#define KeyValuePair_2_get_Key_m1456754055(__this, method) ((  int32_t (*) (KeyValuePair_2_t559509107 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1456754055_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Value()
#define KeyValuePair_2_get_Value_m267241325(__this, method) ((  int64_t (*) (KeyValuePair_2_t559509107 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m267241325_gshared)(__this, method)
// System.String System.Int64::ToString()
extern "C"  String_t* Int64_ToString_m1112319801 (int64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::ToString()
#define KeyValuePair_2_ToString_m158010201(__this, method) ((  String_t* (*) (KeyValuePair_2_t559509107 *, const RuntimeMethod*))KeyValuePair_2_ToString_m158010201_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m4030266706_gshared (KeyValuePair_2_t2279740520 * __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m928062979((KeyValuePair_2_t2279740520 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = ___value1;
		KeyValuePair_2_set_Value_m1552511980((KeyValuePair_2_t2279740520 *)__this, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m4030266706_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2279740520 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2279740520 *>(__this + 1);
	KeyValuePair_2__ctor_m4030266706(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2311711174_gshared (KeyValuePair_2_t2279740520 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2311711174_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2279740520 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2279740520 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2311711174(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m928062979_gshared (KeyValuePair_2_t2279740520 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m928062979_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2279740520 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2279740520 *>(__this + 1);
	KeyValuePair_2_set_Key_m928062979(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m2221533295_gshared (KeyValuePair_2_t2279740520 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return L_0;
	}
}
extern "C"  bool KeyValuePair_2_get_Value_m2221533295_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2279740520 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2279740520 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2221533295(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1552511980_gshared (KeyValuePair_2_t2279740520 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1552511980_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2279740520 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2279740520 *>(__this + 1);
	KeyValuePair_2_set_Value_m1552511980(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3440002371_gshared (KeyValuePair_2_t2279740520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3440002371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2894086140* G_B2_1 = NULL;
	StringU5BU5D_t2894086140* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2894086140* G_B1_1 = NULL;
	StringU5BU5D_t2894086140* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2894086140* G_B3_2 = NULL;
	StringU5BU5D_t2894086140* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2894086140* G_B5_1 = NULL;
	StringU5BU5D_t2894086140* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2894086140* G_B4_1 = NULL;
	StringU5BU5D_t2894086140* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2894086140* G_B6_2 = NULL;
	StringU5BU5D_t2894086140* G_B6_3 = NULL;
	{
		StringU5BU5D_t2894086140* L_0 = (StringU5BU5D_t2894086140*)((StringU5BU5D_t2894086140*)SZArrayNew(StringU5BU5D_t2894086140_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1415976431);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1415976431);
		StringU5BU5D_t2894086140* L_1 = (StringU5BU5D_t2894086140*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m2311711174((KeyValuePair_2_t2279740520 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m2311711174((KeyValuePair_2_t2279740520 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m1828908656((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2894086140* L_6 = (StringU5BU5D_t2894086140*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral3244645962);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3244645962);
		StringU5BU5D_t2894086140* L_7 = (StringU5BU5D_t2894086140*)L_6;
		bool L_8 = KeyValuePair_2_get_Value_m2221533295((KeyValuePair_2_t2279740520 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		bool L_9 = KeyValuePair_2_get_Value_m2221533295((KeyValuePair_2_t2279740520 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (bool)L_9;
		String_t* L_10 = Boolean_ToString_m1832840080((bool*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2894086140* L_12 = (StringU5BU5D_t2894086140*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral4034896531);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4034896531);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m708906343(NULL /*static, unused*/, (StringU5BU5D_t2894086140*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3440002371_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2279740520 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2279740520 *>(__this + 1);
	return KeyValuePair_2_ToString_m3440002371(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m929374358_gshared (KeyValuePair_2_t3014236531 * __this, int32_t ___key0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m4053434911((KeyValuePair_2_t3014236531 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Il2CppChar L_1 = ___value1;
		KeyValuePair_2_set_Value_m1312391115((KeyValuePair_2_t3014236531 *)__this, (Il2CppChar)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m929374358_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3014236531 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3014236531 *>(__this + 1);
	KeyValuePair_2__ctor_m929374358(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1729009313_gshared (KeyValuePair_2_t3014236531 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1729009313_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3014236531 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3014236531 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1729009313(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4053434911_gshared (KeyValuePair_2_t3014236531 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m4053434911_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3014236531 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3014236531 *>(__this + 1);
	KeyValuePair_2_set_Key_m4053434911(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Value()
extern "C"  Il2CppChar KeyValuePair_2_get_Value_m1159180636_gshared (KeyValuePair_2_t3014236531 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = (Il2CppChar)__this->get_value_1();
		return L_0;
	}
}
extern "C"  Il2CppChar KeyValuePair_2_get_Value_m1159180636_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3014236531 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3014236531 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1159180636(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1312391115_gshared (KeyValuePair_2_t3014236531 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1312391115_AdjustorThunk (RuntimeObject * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3014236531 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3014236531 *>(__this + 1);
	KeyValuePair_2_set_Value_m1312391115(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1254910535_gshared (KeyValuePair_2_t3014236531 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1254910535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2894086140* G_B2_1 = NULL;
	StringU5BU5D_t2894086140* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2894086140* G_B1_1 = NULL;
	StringU5BU5D_t2894086140* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2894086140* G_B3_2 = NULL;
	StringU5BU5D_t2894086140* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2894086140* G_B5_1 = NULL;
	StringU5BU5D_t2894086140* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2894086140* G_B4_1 = NULL;
	StringU5BU5D_t2894086140* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2894086140* G_B6_2 = NULL;
	StringU5BU5D_t2894086140* G_B6_3 = NULL;
	{
		StringU5BU5D_t2894086140* L_0 = (StringU5BU5D_t2894086140*)((StringU5BU5D_t2894086140*)SZArrayNew(StringU5BU5D_t2894086140_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1415976431);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1415976431);
		StringU5BU5D_t2894086140* L_1 = (StringU5BU5D_t2894086140*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1729009313((KeyValuePair_2_t3014236531 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1729009313((KeyValuePair_2_t3014236531 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m1828908656((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2894086140* L_6 = (StringU5BU5D_t2894086140*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral3244645962);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3244645962);
		StringU5BU5D_t2894086140* L_7 = (StringU5BU5D_t2894086140*)L_6;
		Il2CppChar L_8 = KeyValuePair_2_get_Value_m1159180636((KeyValuePair_2_t3014236531 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		Il2CppChar L_9 = KeyValuePair_2_get_Value_m1159180636((KeyValuePair_2_t3014236531 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Il2CppChar)L_9;
		String_t* L_10 = Char_ToString_m1447376922((Il2CppChar*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2894086140* L_12 = (StringU5BU5D_t2894086140*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral4034896531);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4034896531);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m708906343(NULL /*static, unused*/, (StringU5BU5D_t2894086140*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1254910535_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3014236531 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3014236531 *>(__this + 1);
	return KeyValuePair_2_ToString_m1254910535(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1196262312_gshared (KeyValuePair_2_t3329015414 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1691825053((KeyValuePair_2_t3329015414 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m88166035((KeyValuePair_2_t3329015414 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1196262312_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3329015414 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3329015414 *>(__this + 1);
	KeyValuePair_2__ctor_m1196262312(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1585962111_gshared (KeyValuePair_2_t3329015414 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1585962111_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3329015414 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3329015414 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1585962111(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1691825053_gshared (KeyValuePair_2_t3329015414 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1691825053_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3329015414 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3329015414 *>(__this + 1);
	KeyValuePair_2_set_Key_m1691825053(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m3938780747_gshared (KeyValuePair_2_t3329015414 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m3938780747_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3329015414 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3329015414 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3938780747(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m88166035_gshared (KeyValuePair_2_t3329015414 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m88166035_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3329015414 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3329015414 *>(__this + 1);
	KeyValuePair_2_set_Value_m88166035(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2374843802_gshared (KeyValuePair_2_t3329015414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2374843802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2894086140* G_B2_1 = NULL;
	StringU5BU5D_t2894086140* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2894086140* G_B1_1 = NULL;
	StringU5BU5D_t2894086140* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2894086140* G_B3_2 = NULL;
	StringU5BU5D_t2894086140* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2894086140* G_B5_1 = NULL;
	StringU5BU5D_t2894086140* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2894086140* G_B4_1 = NULL;
	StringU5BU5D_t2894086140* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2894086140* G_B6_2 = NULL;
	StringU5BU5D_t2894086140* G_B6_3 = NULL;
	{
		StringU5BU5D_t2894086140* L_0 = (StringU5BU5D_t2894086140*)((StringU5BU5D_t2894086140*)SZArrayNew(StringU5BU5D_t2894086140_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1415976431);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1415976431);
		StringU5BU5D_t2894086140* L_1 = (StringU5BU5D_t2894086140*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1585962111((KeyValuePair_2_t3329015414 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1585962111((KeyValuePair_2_t3329015414 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m1828908656((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2894086140* L_6 = (StringU5BU5D_t2894086140*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral3244645962);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3244645962);
		StringU5BU5D_t2894086140* L_7 = (StringU5BU5D_t2894086140*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m3938780747((KeyValuePair_2_t3329015414 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m3938780747((KeyValuePair_2_t3329015414 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m1828908656((int32_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2894086140* L_12 = (StringU5BU5D_t2894086140*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral4034896531);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4034896531);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m708906343(NULL /*static, unused*/, (StringU5BU5D_t2894086140*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2374843802_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3329015414 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3329015414 *>(__this + 1);
	return KeyValuePair_2_ToString_m2374843802(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m307919309_gshared (KeyValuePair_2_t559509107 * __this, int32_t ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1457444608((KeyValuePair_2_t559509107 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m1691871241((KeyValuePair_2_t559509107 *)__this, (int64_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m307919309_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t559509107 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t559509107 *>(__this + 1);
	KeyValuePair_2__ctor_m307919309(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1456754055_gshared (KeyValuePair_2_t559509107 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1456754055_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t559509107 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t559509107 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1456754055(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1457444608_gshared (KeyValuePair_2_t559509107 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1457444608_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t559509107 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t559509107 *>(__this + 1);
	KeyValuePair_2_set_Key_m1457444608(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Value()
extern "C"  int64_t KeyValuePair_2_get_Value_m267241325_gshared (KeyValuePair_2_t559509107 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = (int64_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int64_t KeyValuePair_2_get_Value_m267241325_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t559509107 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t559509107 *>(__this + 1);
	return KeyValuePair_2_get_Value_m267241325(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1691871241_gshared (KeyValuePair_2_t559509107 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1691871241_AdjustorThunk (RuntimeObject * __this, int64_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t559509107 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t559509107 *>(__this + 1);
	KeyValuePair_2_set_Value_m1691871241(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m158010201_gshared (KeyValuePair_2_t559509107 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m158010201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2894086140* G_B2_1 = NULL;
	StringU5BU5D_t2894086140* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2894086140* G_B1_1 = NULL;
	StringU5BU5D_t2894086140* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2894086140* G_B3_2 = NULL;
	StringU5BU5D_t2894086140* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2894086140* G_B5_1 = NULL;
	StringU5BU5D_t2894086140* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2894086140* G_B4_1 = NULL;
	StringU5BU5D_t2894086140* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2894086140* G_B6_2 = NULL;
	StringU5BU5D_t2894086140* G_B6_3 = NULL;
	{
		StringU5BU5D_t2894086140* L_0 = (StringU5BU5D_t2894086140*)((StringU5BU5D_t2894086140*)SZArrayNew(StringU5BU5D_t2894086140_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral1415976431);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1415976431);
		StringU5BU5D_t2894086140* L_1 = (StringU5BU5D_t2894086140*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1456754055((KeyValuePair_2_t559509107 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1456754055((KeyValuePair_2_t559509107 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m1828908656((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2894086140* L_6 = (StringU5BU5D_t2894086140*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral3244645962);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3244645962);
		StringU5BU5D_t2894086140* L_7 = (StringU5BU5D_t2894086140*)L_6;
		int64_t L_8 = KeyValuePair_2_get_Value_m267241325((KeyValuePair_2_t559509107 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int64_t L_9 = KeyValuePair_2_get_Value_m267241325((KeyValuePair_2_t559509107 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int64_t)L_9;
		String_t* L_10 = Int64_ToString_m1112319801((int64_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2894086140* L_12 = (StringU5BU5D_t2894086140*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral4034896531);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4034896531);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m708906343(NULL /*static, unused*/, (StringU5BU5D_t2894086140*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m158010201_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t559509107 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t559509107 *>(__this + 1);
	return KeyValuePair_2_ToString_m158010201(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
