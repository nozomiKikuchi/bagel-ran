#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// NCMB.NCMBExecuteScriptCallback
struct NCMBExecuteScriptCallback_t3729290685;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// NCMB.NCMBException
struct NCMBException_t1167303643;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBScript/<Connect>c__AnonStorey1
struct  U3CConnectU3Ec__AnonStorey1_t3646962838  : public Il2CppObject
{
public:
	// NCMB.NCMBExecuteScriptCallback NCMB.NCMBScript/<Connect>c__AnonStorey1::callback
	NCMBExecuteScriptCallback_t3729290685 * ___callback_0;
	// System.Byte[] NCMB.NCMBScript/<Connect>c__AnonStorey1::result
	ByteU5BU5D_t3397334013* ___result_1;
	// NCMB.NCMBException NCMB.NCMBScript/<Connect>c__AnonStorey1::error
	NCMBException_t1167303643 * ___error_2;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CConnectU3Ec__AnonStorey1_t3646962838, ___callback_0)); }
	inline NCMBExecuteScriptCallback_t3729290685 * get_callback_0() const { return ___callback_0; }
	inline NCMBExecuteScriptCallback_t3729290685 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(NCMBExecuteScriptCallback_t3729290685 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(U3CConnectU3Ec__AnonStorey1_t3646962838, ___result_1)); }
	inline ByteU5BU5D_t3397334013* get_result_1() const { return ___result_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(ByteU5BU5D_t3397334013* value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier(&___result_1, value);
	}

	inline static int32_t get_offset_of_error_2() { return static_cast<int32_t>(offsetof(U3CConnectU3Ec__AnonStorey1_t3646962838, ___error_2)); }
	inline NCMBException_t1167303643 * get_error_2() const { return ___error_2; }
	inline NCMBException_t1167303643 ** get_address_of_error_2() { return &___error_2; }
	inline void set_error_2(NCMBException_t1167303643 * value)
	{
		___error_2 = value;
		Il2CppCodeGenWriteBarrier(&___error_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
