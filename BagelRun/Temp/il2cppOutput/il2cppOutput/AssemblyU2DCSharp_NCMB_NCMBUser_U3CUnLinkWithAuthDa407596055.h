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
// System.String
struct String_t;
// NCMB.NCMBCallback
struct NCMBCallback_t3652385177;
// NCMB.NCMBUser
struct NCMBUser_t2319159161;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBUser/<UnLinkWithAuthDataAsync>c__AnonStorey12
struct  U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey12_t407596055  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> NCMB.NCMBUser/<UnLinkWithAuthDataAsync>c__AnonStorey12::currentParam
	Dictionary_2_t309261261 * ___currentParam_0;
	// System.String NCMB.NCMBUser/<UnLinkWithAuthDataAsync>c__AnonStorey12::provider
	String_t* ___provider_1;
	// NCMB.NCMBCallback NCMB.NCMBUser/<UnLinkWithAuthDataAsync>c__AnonStorey12::callback
	NCMBCallback_t3652385177 * ___callback_2;
	// NCMB.NCMBUser NCMB.NCMBUser/<UnLinkWithAuthDataAsync>c__AnonStorey12::$this
	NCMBUser_t2319159161 * ___U24this_3;

public:
	inline static int32_t get_offset_of_currentParam_0() { return static_cast<int32_t>(offsetof(U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey12_t407596055, ___currentParam_0)); }
	inline Dictionary_2_t309261261 * get_currentParam_0() const { return ___currentParam_0; }
	inline Dictionary_2_t309261261 ** get_address_of_currentParam_0() { return &___currentParam_0; }
	inline void set_currentParam_0(Dictionary_2_t309261261 * value)
	{
		___currentParam_0 = value;
		Il2CppCodeGenWriteBarrier(&___currentParam_0, value);
	}

	inline static int32_t get_offset_of_provider_1() { return static_cast<int32_t>(offsetof(U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey12_t407596055, ___provider_1)); }
	inline String_t* get_provider_1() const { return ___provider_1; }
	inline String_t** get_address_of_provider_1() { return &___provider_1; }
	inline void set_provider_1(String_t* value)
	{
		___provider_1 = value;
		Il2CppCodeGenWriteBarrier(&___provider_1, value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey12_t407596055, ___callback_2)); }
	inline NCMBCallback_t3652385177 * get_callback_2() const { return ___callback_2; }
	inline NCMBCallback_t3652385177 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(NCMBCallback_t3652385177 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier(&___callback_2, value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CUnLinkWithAuthDataAsyncU3Ec__AnonStorey12_t407596055, ___U24this_3)); }
	inline NCMBUser_t2319159161 * get_U24this_3() const { return ___U24this_3; }
	inline NCMBUser_t2319159161 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(NCMBUser_t2319159161 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
