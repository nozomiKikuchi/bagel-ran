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
// NCMB.NCMBCallback
struct NCMBCallback_t3652385177;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBUser/<RequestPasswordResetAsync>c__AnonStorey0
struct  U3CRequestPasswordResetAsyncU3Ec__AnonStorey0_t1741418624  : public Il2CppObject
{
public:
	// System.String NCMB.NCMBUser/<RequestPasswordResetAsync>c__AnonStorey0::email
	String_t* ___email_0;
	// NCMB.NCMBCallback NCMB.NCMBUser/<RequestPasswordResetAsync>c__AnonStorey0::callback
	NCMBCallback_t3652385177 * ___callback_1;

public:
	inline static int32_t get_offset_of_email_0() { return static_cast<int32_t>(offsetof(U3CRequestPasswordResetAsyncU3Ec__AnonStorey0_t1741418624, ___email_0)); }
	inline String_t* get_email_0() const { return ___email_0; }
	inline String_t** get_address_of_email_0() { return &___email_0; }
	inline void set_email_0(String_t* value)
	{
		___email_0 = value;
		Il2CppCodeGenWriteBarrier(&___email_0, value);
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(U3CRequestPasswordResetAsyncU3Ec__AnonStorey0_t1741418624, ___callback_1)); }
	inline NCMBCallback_t3652385177 * get_callback_1() const { return ___callback_1; }
	inline NCMBCallback_t3652385177 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(NCMBCallback_t3652385177 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
