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
// System.Collections.Generic.IDictionary`2<System.String,NCMB.Internal.INCMBFieldOperation>
struct IDictionary_2_t949603673;
// NCMB.NCMBObject
struct NCMBObject_t2812218109;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBObject/<Save>c__AnonStorey3
struct  U3CSaveU3Ec__AnonStorey3_t93426769  : public Il2CppObject
{
public:
	// NCMB.NCMBCallback NCMB.NCMBObject/<Save>c__AnonStorey3::callback
	NCMBCallback_t3652385177 * ___callback_0;
	// System.Collections.Generic.IDictionary`2<System.String,NCMB.Internal.INCMBFieldOperation> NCMB.NCMBObject/<Save>c__AnonStorey3::currentOperations
	Il2CppObject* ___currentOperations_1;
	// NCMB.NCMBObject NCMB.NCMBObject/<Save>c__AnonStorey3::$this
	NCMBObject_t2812218109 * ___U24this_2;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CSaveU3Ec__AnonStorey3_t93426769, ___callback_0)); }
	inline NCMBCallback_t3652385177 * get_callback_0() const { return ___callback_0; }
	inline NCMBCallback_t3652385177 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(NCMBCallback_t3652385177 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_currentOperations_1() { return static_cast<int32_t>(offsetof(U3CSaveU3Ec__AnonStorey3_t93426769, ___currentOperations_1)); }
	inline Il2CppObject* get_currentOperations_1() const { return ___currentOperations_1; }
	inline Il2CppObject** get_address_of_currentOperations_1() { return &___currentOperations_1; }
	inline void set_currentOperations_1(Il2CppObject* value)
	{
		___currentOperations_1 = value;
		Il2CppCodeGenWriteBarrier(&___currentOperations_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CSaveU3Ec__AnonStorey3_t93426769, ___U24this_2)); }
	inline NCMBObject_t2812218109 * get_U24this_2() const { return ___U24this_2; }
	inline NCMBObject_t2812218109 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(NCMBObject_t2812218109 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
