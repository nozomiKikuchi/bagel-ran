#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.ArrayList
struct ArrayList_t4252133567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.Internal.NCMBAddOperation
struct  NCMBAddOperation_t2572962560  : public Il2CppObject
{
public:
	// System.Collections.ArrayList NCMB.Internal.NCMBAddOperation::objects
	ArrayList_t4252133567 * ___objects_0;

public:
	inline static int32_t get_offset_of_objects_0() { return static_cast<int32_t>(offsetof(NCMBAddOperation_t2572962560, ___objects_0)); }
	inline ArrayList_t4252133567 * get_objects_0() const { return ___objects_0; }
	inline ArrayList_t4252133567 ** get_address_of_objects_0() { return &___objects_0; }
	inline void set_objects_0(ArrayList_t4252133567 * value)
	{
		___objects_0 = value;
		Il2CppCodeGenWriteBarrier(&___objects_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
