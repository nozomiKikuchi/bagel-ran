#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.Internal.NCMBSetOperation
struct  NCMBSetOperation_t2923041593  : public Il2CppObject
{
public:
	// System.Object NCMB.Internal.NCMBSetOperation::Value
	Il2CppObject * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(NCMBSetOperation_t2923041593, ___Value_0)); }
	inline Il2CppObject * get_Value_0() const { return ___Value_0; }
	inline Il2CppObject ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Il2CppObject * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier(&___Value_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
