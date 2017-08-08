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

// NCMB.Internal.NCMBIncrementOperation
struct  NCMBIncrementOperation_t3676083124  : public Il2CppObject
{
public:
	// System.Object NCMB.Internal.NCMBIncrementOperation::amount
	Il2CppObject * ___amount_0;

public:
	inline static int32_t get_offset_of_amount_0() { return static_cast<int32_t>(offsetof(NCMBIncrementOperation_t3676083124, ___amount_0)); }
	inline Il2CppObject * get_amount_0() const { return ___amount_0; }
	inline Il2CppObject ** get_address_of_amount_0() { return &___amount_0; }
	inline void set_amount_0(Il2CppObject * value)
	{
		___amount_0 = value;
		Il2CppCodeGenWriteBarrier(&___amount_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
