#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// NCMB.NCMBCallback
struct NCMBCallback_t3652385177;
// NCMB.NCMBObject
struct NCMBObject_t2812218109;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBObject/<FetchAsync>c__AnonStorey6
struct  U3CFetchAsyncU3Ec__AnonStorey6_t939102223  : public Il2CppObject
{
public:
	// NCMB.NCMBCallback NCMB.NCMBObject/<FetchAsync>c__AnonStorey6::callback
	NCMBCallback_t3652385177 * ___callback_0;
	// NCMB.NCMBObject NCMB.NCMBObject/<FetchAsync>c__AnonStorey6::$this
	NCMBObject_t2812218109 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CFetchAsyncU3Ec__AnonStorey6_t939102223, ___callback_0)); }
	inline NCMBCallback_t3652385177 * get_callback_0() const { return ___callback_0; }
	inline NCMBCallback_t3652385177 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(NCMBCallback_t3652385177 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFetchAsyncU3Ec__AnonStorey6_t939102223, ___U24this_1)); }
	inline NCMBObject_t2812218109 * get_U24this_1() const { return ___U24this_1; }
	inline NCMBObject_t2812218109 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(NCMBObject_t2812218109 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
