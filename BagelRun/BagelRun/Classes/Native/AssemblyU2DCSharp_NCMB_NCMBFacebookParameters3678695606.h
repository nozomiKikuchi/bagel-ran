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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBFacebookParameters
struct  NCMBFacebookParameters_t3678695606  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> NCMB.NCMBFacebookParameters::param
	Dictionary_2_t309261261 * ___param_0;

public:
	inline static int32_t get_offset_of_param_0() { return static_cast<int32_t>(offsetof(NCMBFacebookParameters_t3678695606, ___param_0)); }
	inline Dictionary_2_t309261261 * get_param_0() const { return ___param_0; }
	inline Dictionary_2_t309261261 ** get_address_of_param_0() { return &___param_0; }
	inline void set_param_0(Dictionary_2_t309261261 * value)
	{
		___param_0 = value;
		Il2CppCodeGenWriteBarrier(&___param_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
