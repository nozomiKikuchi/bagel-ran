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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBUser/<LogOutAsync>c__AnonStoreyA
struct  U3CLogOutAsyncU3Ec__AnonStoreyA_t791232234  : public Il2CppObject
{
public:
	// NCMB.NCMBCallback NCMB.NCMBUser/<LogOutAsync>c__AnonStoreyA::callback
	NCMBCallback_t3652385177 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CLogOutAsyncU3Ec__AnonStoreyA_t791232234, ___callback_0)); }
	inline NCMBCallback_t3652385177 * get_callback_0() const { return ___callback_0; }
	inline NCMBCallback_t3652385177 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(NCMBCallback_t3652385177 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
