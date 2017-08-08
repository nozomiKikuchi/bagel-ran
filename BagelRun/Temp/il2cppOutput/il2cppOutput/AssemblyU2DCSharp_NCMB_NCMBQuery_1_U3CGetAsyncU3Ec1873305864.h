#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// NCMB.NCMBGetCallback`1<NCMB.NCMBObject>
struct NCMBGetCallback_1_t3363735772;
// NCMB.NCMBQuery`1<NCMB.NCMBObject>
struct NCMBQuery_1_t2585565725;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBQuery`1/<GetAsync>c__AnonStorey3<NCMB.NCMBObject>
struct  U3CGetAsyncU3Ec__AnonStorey3_t1873305864  : public Il2CppObject
{
public:
	// System.String NCMB.NCMBQuery`1/<GetAsync>c__AnonStorey3::objectId
	String_t* ___objectId_0;
	// NCMB.NCMBGetCallback`1<T> NCMB.NCMBQuery`1/<GetAsync>c__AnonStorey3::callback
	NCMBGetCallback_1_t3363735772 * ___callback_1;
	// NCMB.NCMBQuery`1<T> NCMB.NCMBQuery`1/<GetAsync>c__AnonStorey3::$this
	NCMBQuery_1_t2585565725 * ___U24this_2;

public:
	inline static int32_t get_offset_of_objectId_0() { return static_cast<int32_t>(offsetof(U3CGetAsyncU3Ec__AnonStorey3_t1873305864, ___objectId_0)); }
	inline String_t* get_objectId_0() const { return ___objectId_0; }
	inline String_t** get_address_of_objectId_0() { return &___objectId_0; }
	inline void set_objectId_0(String_t* value)
	{
		___objectId_0 = value;
		Il2CppCodeGenWriteBarrier(&___objectId_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CGetAsyncU3Ec__AnonStorey3_t1873305864, ___callback_1)); }
	inline NCMBGetCallback_1_t3363735772 * get_callback_1() const { return ___callback_1; }
	inline NCMBGetCallback_1_t3363735772 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(NCMBGetCallback_1_t3363735772 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetAsyncU3Ec__AnonStorey3_t1873305864, ___U24this_2)); }
	inline NCMBQuery_1_t2585565725 * get_U24this_2() const { return ___U24this_2; }
	inline NCMBQuery_1_t2585565725 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(NCMBQuery_1_t2585565725 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
