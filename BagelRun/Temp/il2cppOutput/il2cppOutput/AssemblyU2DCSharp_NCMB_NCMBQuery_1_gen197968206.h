#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.AsyncCallback
struct AsyncCallback_t163412349;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBQuery`1<NCMB.NCMBInstallation>
struct  NCMBQuery_1_t197968206  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> NCMB.NCMBQuery`1::_where
	Dictionary_2_t309261261 * ____where_0;
	// System.String NCMB.NCMBQuery`1::WHERE_URL
	String_t* ___WHERE_URL_1;
	// System.String NCMB.NCMBQuery`1::_className
	String_t* ____className_2;
	// System.Int32 NCMB.NCMBQuery`1::_limit
	int32_t ____limit_3;
	// System.Int32 NCMB.NCMBQuery`1::_skip
	int32_t ____skip_4;
	// System.Collections.Generic.List`1<System.String> NCMB.NCMBQuery`1::_order
	List_1_t1398341365 * ____order_5;
	// System.Collections.Generic.List`1<System.String> NCMB.NCMBQuery`1::_include
	List_1_t1398341365 * ____include_6;

public:
	inline static int32_t get_offset_of__where_0() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t197968206, ____where_0)); }
	inline Dictionary_2_t309261261 * get__where_0() const { return ____where_0; }
	inline Dictionary_2_t309261261 ** get_address_of__where_0() { return &____where_0; }
	inline void set__where_0(Dictionary_2_t309261261 * value)
	{
		____where_0 = value;
		Il2CppCodeGenWriteBarrier(&____where_0, value);
	}

	inline static int32_t get_offset_of_WHERE_URL_1() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t197968206, ___WHERE_URL_1)); }
	inline String_t* get_WHERE_URL_1() const { return ___WHERE_URL_1; }
	inline String_t** get_address_of_WHERE_URL_1() { return &___WHERE_URL_1; }
	inline void set_WHERE_URL_1(String_t* value)
	{
		___WHERE_URL_1 = value;
		Il2CppCodeGenWriteBarrier(&___WHERE_URL_1, value);
	}

	inline static int32_t get_offset_of__className_2() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t197968206, ____className_2)); }
	inline String_t* get__className_2() const { return ____className_2; }
	inline String_t** get_address_of__className_2() { return &____className_2; }
	inline void set__className_2(String_t* value)
	{
		____className_2 = value;
		Il2CppCodeGenWriteBarrier(&____className_2, value);
	}

	inline static int32_t get_offset_of__limit_3() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t197968206, ____limit_3)); }
	inline int32_t get__limit_3() const { return ____limit_3; }
	inline int32_t* get_address_of__limit_3() { return &____limit_3; }
	inline void set__limit_3(int32_t value)
	{
		____limit_3 = value;
	}

	inline static int32_t get_offset_of__skip_4() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t197968206, ____skip_4)); }
	inline int32_t get__skip_4() const { return ____skip_4; }
	inline int32_t* get_address_of__skip_4() { return &____skip_4; }
	inline void set__skip_4(int32_t value)
	{
		____skip_4 = value;
	}

	inline static int32_t get_offset_of__order_5() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t197968206, ____order_5)); }
	inline List_1_t1398341365 * get__order_5() const { return ____order_5; }
	inline List_1_t1398341365 ** get_address_of__order_5() { return &____order_5; }
	inline void set__order_5(List_1_t1398341365 * value)
	{
		____order_5 = value;
		Il2CppCodeGenWriteBarrier(&____order_5, value);
	}

	inline static int32_t get_offset_of__include_6() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t197968206, ____include_6)); }
	inline List_1_t1398341365 * get__include_6() const { return ____include_6; }
	inline List_1_t1398341365 ** get_address_of__include_6() { return &____include_6; }
	inline void set__include_6(List_1_t1398341365 * value)
	{
		____include_6 = value;
		Il2CppCodeGenWriteBarrier(&____include_6, value);
	}
};

struct NCMBQuery_1_t197968206_StaticFields
{
public:
	// System.AsyncCallback NCMB.NCMBQuery`1::<>f__am$cache0
	AsyncCallback_t163412349 * ___U3CU3Ef__amU24cache0_7;
	// System.AsyncCallback NCMB.NCMBQuery`1::<>f__am$cache1
	AsyncCallback_t163412349 * ___U3CU3Ef__amU24cache1_8;
	// System.AsyncCallback NCMB.NCMBQuery`1::<>f__am$cache2
	AsyncCallback_t163412349 * ___U3CU3Ef__amU24cache2_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t197968206_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline AsyncCallback_t163412349 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline AsyncCallback_t163412349 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(AsyncCallback_t163412349 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_8() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t197968206_StaticFields, ___U3CU3Ef__amU24cache1_8)); }
	inline AsyncCallback_t163412349 * get_U3CU3Ef__amU24cache1_8() const { return ___U3CU3Ef__amU24cache1_8; }
	inline AsyncCallback_t163412349 ** get_address_of_U3CU3Ef__amU24cache1_8() { return &___U3CU3Ef__amU24cache1_8; }
	inline void set_U3CU3Ef__amU24cache1_8(AsyncCallback_t163412349 * value)
	{
		___U3CU3Ef__amU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_9() { return static_cast<int32_t>(offsetof(NCMBQuery_1_t197968206_StaticFields, ___U3CU3Ef__amU24cache2_9)); }
	inline AsyncCallback_t163412349 * get_U3CU3Ef__amU24cache2_9() const { return ___U3CU3Ef__amU24cache2_9; }
	inline AsyncCallback_t163412349 ** get_address_of_U3CU3Ef__amU24cache2_9() { return &___U3CU3Ef__amU24cache2_9; }
	inline void set_U3CU3Ef__amU24cache2_9(AsyncCallback_t163412349 * value)
	{
		___U3CU3Ef__amU24cache2_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
