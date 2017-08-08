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
// NCMB.NCMBUser
struct NCMBUser_t2319159161;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBUser/<LogInWithAuthDataAsync>c__AnonStoreyE
struct  U3CLogInWithAuthDataAsyncU3Ec__AnonStoreyE_t3470642465  : public Il2CppObject
{
public:
	// NCMB.NCMBCallback NCMB.NCMBUser/<LogInWithAuthDataAsync>c__AnonStoreyE::callback
	NCMBCallback_t3652385177 * ___callback_0;
	// NCMB.NCMBUser NCMB.NCMBUser/<LogInWithAuthDataAsync>c__AnonStoreyE::$this
	NCMBUser_t2319159161 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CLogInWithAuthDataAsyncU3Ec__AnonStoreyE_t3470642465, ___callback_0)); }
	inline NCMBCallback_t3652385177 * get_callback_0() const { return ___callback_0; }
	inline NCMBCallback_t3652385177 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(NCMBCallback_t3652385177 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CLogInWithAuthDataAsyncU3Ec__AnonStoreyE_t3470642465, ___U24this_1)); }
	inline NCMBUser_t2319159161 * get_U24this_1() const { return ___U24this_1; }
	inline NCMBUser_t2319159161 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(NCMBUser_t2319159161 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
