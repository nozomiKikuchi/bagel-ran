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

// NCMB.NCMBUser/<LogInWithMailAddressAsync>c__AnonStorey6
struct  U3CLogInWithMailAddressAsyncU3Ec__AnonStorey6_t3418940609  : public Il2CppObject
{
public:
	// System.String NCMB.NCMBUser/<LogInWithMailAddressAsync>c__AnonStorey6::password
	String_t* ___password_0;
	// System.String NCMB.NCMBUser/<LogInWithMailAddressAsync>c__AnonStorey6::email
	String_t* ___email_1;
	// NCMB.NCMBCallback NCMB.NCMBUser/<LogInWithMailAddressAsync>c__AnonStorey6::callback
	NCMBCallback_t3652385177 * ___callback_2;

public:
	inline static int32_t get_offset_of_password_0() { return static_cast<int32_t>(offsetof(U3CLogInWithMailAddressAsyncU3Ec__AnonStorey6_t3418940609, ___password_0)); }
	inline String_t* get_password_0() const { return ___password_0; }
	inline String_t** get_address_of_password_0() { return &___password_0; }
	inline void set_password_0(String_t* value)
	{
		___password_0 = value;
		Il2CppCodeGenWriteBarrier(&___password_0, value);
	}

	inline static int32_t get_offset_of_email_1() { return static_cast<int32_t>(offsetof(U3CLogInWithMailAddressAsyncU3Ec__AnonStorey6_t3418940609, ___email_1)); }
	inline String_t* get_email_1() const { return ___email_1; }
	inline String_t** get_address_of_email_1() { return &___email_1; }
	inline void set_email_1(String_t* value)
	{
		___email_1 = value;
		Il2CppCodeGenWriteBarrier(&___email_1, value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CLogInWithMailAddressAsyncU3Ec__AnonStorey6_t3418940609, ___callback_2)); }
	inline NCMBCallback_t3652385177 * get_callback_2() const { return ___callback_2; }
	inline NCMBCallback_t3652385177 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(NCMBCallback_t3652385177 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier(&___callback_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
