#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"

// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3739437401;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,NCMB.Internal.INCMBFieldOperation>>
struct LinkedList_1_t1254311902;
// System.AsyncCallback
struct AsyncCallback_t163412349;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBObject
struct  NCMBObject_t2812218109  : public Il2CppObject
{
public:
	// System.Boolean NCMB.NCMBObject::_dirty
	bool ____dirty_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Boolean> NCMB.NCMBObject::dataAvailability
	Il2CppObject* ___dataAvailability_2;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> NCMB.NCMBObject::estimatedData
	Il2CppObject* ___estimatedData_3;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> NCMB.NCMBObject::serverData
	Il2CppObject* ___serverData_4;
	// System.Object NCMB.NCMBObject::mutex
	Il2CppObject * ___mutex_5;
	// System.Collections.Generic.LinkedList`1<System.Collections.Generic.IDictionary`2<System.String,NCMB.Internal.INCMBFieldOperation>> NCMB.NCMBObject::operationSetQueue
	LinkedList_1_t1254311902 * ___operationSetQueue_7;
	// System.String NCMB.NCMBObject::_className
	String_t* ____className_8;
	// System.String NCMB.NCMBObject::_objectId
	String_t* ____objectId_9;
	// System.Nullable`1<System.DateTime> NCMB.NCMBObject::_updateDate
	Nullable_1_t3251239280  ____updateDate_10;
	// System.Nullable`1<System.DateTime> NCMB.NCMBObject::_createDate
	Nullable_1_t3251239280  ____createDate_11;

public:
	inline static int32_t get_offset_of__dirty_1() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109, ____dirty_1)); }
	inline bool get__dirty_1() const { return ____dirty_1; }
	inline bool* get_address_of__dirty_1() { return &____dirty_1; }
	inline void set__dirty_1(bool value)
	{
		____dirty_1 = value;
	}

	inline static int32_t get_offset_of_dataAvailability_2() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109, ___dataAvailability_2)); }
	inline Il2CppObject* get_dataAvailability_2() const { return ___dataAvailability_2; }
	inline Il2CppObject** get_address_of_dataAvailability_2() { return &___dataAvailability_2; }
	inline void set_dataAvailability_2(Il2CppObject* value)
	{
		___dataAvailability_2 = value;
		Il2CppCodeGenWriteBarrier(&___dataAvailability_2, value);
	}

	inline static int32_t get_offset_of_estimatedData_3() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109, ___estimatedData_3)); }
	inline Il2CppObject* get_estimatedData_3() const { return ___estimatedData_3; }
	inline Il2CppObject** get_address_of_estimatedData_3() { return &___estimatedData_3; }
	inline void set_estimatedData_3(Il2CppObject* value)
	{
		___estimatedData_3 = value;
		Il2CppCodeGenWriteBarrier(&___estimatedData_3, value);
	}

	inline static int32_t get_offset_of_serverData_4() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109, ___serverData_4)); }
	inline Il2CppObject* get_serverData_4() const { return ___serverData_4; }
	inline Il2CppObject** get_address_of_serverData_4() { return &___serverData_4; }
	inline void set_serverData_4(Il2CppObject* value)
	{
		___serverData_4 = value;
		Il2CppCodeGenWriteBarrier(&___serverData_4, value);
	}

	inline static int32_t get_offset_of_mutex_5() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109, ___mutex_5)); }
	inline Il2CppObject * get_mutex_5() const { return ___mutex_5; }
	inline Il2CppObject ** get_address_of_mutex_5() { return &___mutex_5; }
	inline void set_mutex_5(Il2CppObject * value)
	{
		___mutex_5 = value;
		Il2CppCodeGenWriteBarrier(&___mutex_5, value);
	}

	inline static int32_t get_offset_of_operationSetQueue_7() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109, ___operationSetQueue_7)); }
	inline LinkedList_1_t1254311902 * get_operationSetQueue_7() const { return ___operationSetQueue_7; }
	inline LinkedList_1_t1254311902 ** get_address_of_operationSetQueue_7() { return &___operationSetQueue_7; }
	inline void set_operationSetQueue_7(LinkedList_1_t1254311902 * value)
	{
		___operationSetQueue_7 = value;
		Il2CppCodeGenWriteBarrier(&___operationSetQueue_7, value);
	}

	inline static int32_t get_offset_of__className_8() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109, ____className_8)); }
	inline String_t* get__className_8() const { return ____className_8; }
	inline String_t** get_address_of__className_8() { return &____className_8; }
	inline void set__className_8(String_t* value)
	{
		____className_8 = value;
		Il2CppCodeGenWriteBarrier(&____className_8, value);
	}

	inline static int32_t get_offset_of__objectId_9() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109, ____objectId_9)); }
	inline String_t* get__objectId_9() const { return ____objectId_9; }
	inline String_t** get_address_of__objectId_9() { return &____objectId_9; }
	inline void set__objectId_9(String_t* value)
	{
		____objectId_9 = value;
		Il2CppCodeGenWriteBarrier(&____objectId_9, value);
	}

	inline static int32_t get_offset_of__updateDate_10() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109, ____updateDate_10)); }
	inline Nullable_1_t3251239280  get__updateDate_10() const { return ____updateDate_10; }
	inline Nullable_1_t3251239280 * get_address_of__updateDate_10() { return &____updateDate_10; }
	inline void set__updateDate_10(Nullable_1_t3251239280  value)
	{
		____updateDate_10 = value;
	}

	inline static int32_t get_offset_of__createDate_11() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109, ____createDate_11)); }
	inline Nullable_1_t3251239280  get__createDate_11() const { return ____createDate_11; }
	inline Nullable_1_t3251239280 * get_address_of__createDate_11() { return &____createDate_11; }
	inline void set__createDate_11(Nullable_1_t3251239280  value)
	{
		____createDate_11 = value;
	}
};

struct NCMBObject_t2812218109_StaticFields
{
public:
	// System.String NCMB.NCMBObject::AUTO_CLASS_NAME
	String_t* ___AUTO_CLASS_NAME_0;
	// System.Object NCMB.NCMBObject::fileMutex
	Il2CppObject * ___fileMutex_6;
	// System.AsyncCallback NCMB.NCMBObject::<>f__am$cache0
	AsyncCallback_t163412349 * ___U3CU3Ef__amU24cache0_12;
	// System.AsyncCallback NCMB.NCMBObject::<>f__am$cache1
	AsyncCallback_t163412349 * ___U3CU3Ef__amU24cache1_13;
	// System.AsyncCallback NCMB.NCMBObject::<>f__am$cache2
	AsyncCallback_t163412349 * ___U3CU3Ef__amU24cache2_14;

public:
	inline static int32_t get_offset_of_AUTO_CLASS_NAME_0() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109_StaticFields, ___AUTO_CLASS_NAME_0)); }
	inline String_t* get_AUTO_CLASS_NAME_0() const { return ___AUTO_CLASS_NAME_0; }
	inline String_t** get_address_of_AUTO_CLASS_NAME_0() { return &___AUTO_CLASS_NAME_0; }
	inline void set_AUTO_CLASS_NAME_0(String_t* value)
	{
		___AUTO_CLASS_NAME_0 = value;
		Il2CppCodeGenWriteBarrier(&___AUTO_CLASS_NAME_0, value);
	}

	inline static int32_t get_offset_of_fileMutex_6() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109_StaticFields, ___fileMutex_6)); }
	inline Il2CppObject * get_fileMutex_6() const { return ___fileMutex_6; }
	inline Il2CppObject ** get_address_of_fileMutex_6() { return &___fileMutex_6; }
	inline void set_fileMutex_6(Il2CppObject * value)
	{
		___fileMutex_6 = value;
		Il2CppCodeGenWriteBarrier(&___fileMutex_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_12() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109_StaticFields, ___U3CU3Ef__amU24cache0_12)); }
	inline AsyncCallback_t163412349 * get_U3CU3Ef__amU24cache0_12() const { return ___U3CU3Ef__amU24cache0_12; }
	inline AsyncCallback_t163412349 ** get_address_of_U3CU3Ef__amU24cache0_12() { return &___U3CU3Ef__amU24cache0_12; }
	inline void set_U3CU3Ef__amU24cache0_12(AsyncCallback_t163412349 * value)
	{
		___U3CU3Ef__amU24cache0_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_13() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109_StaticFields, ___U3CU3Ef__amU24cache1_13)); }
	inline AsyncCallback_t163412349 * get_U3CU3Ef__amU24cache1_13() const { return ___U3CU3Ef__amU24cache1_13; }
	inline AsyncCallback_t163412349 ** get_address_of_U3CU3Ef__amU24cache1_13() { return &___U3CU3Ef__amU24cache1_13; }
	inline void set_U3CU3Ef__amU24cache1_13(AsyncCallback_t163412349 * value)
	{
		___U3CU3Ef__amU24cache1_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_14() { return static_cast<int32_t>(offsetof(NCMBObject_t2812218109_StaticFields, ___U3CU3Ef__amU24cache2_14)); }
	inline AsyncCallback_t163412349 * get_U3CU3Ef__amU24cache2_14() const { return ___U3CU3Ef__amU24cache2_14; }
	inline AsyncCallback_t163412349 ** get_address_of_U3CU3Ef__amU24cache2_14() { return &___U3CU3Ef__amU24cache2_14; }
	inline void set_U3CU3Ef__amU24cache2_14(AsyncCallback_t163412349 * value)
	{
		___U3CU3Ef__amU24cache2_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
