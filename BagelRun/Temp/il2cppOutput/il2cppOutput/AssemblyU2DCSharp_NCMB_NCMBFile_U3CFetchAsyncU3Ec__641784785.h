#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// NCMB.NCMBGetFileCallback
struct NCMBGetFileCallback_t3502735169;
// NCMB.NCMBFile
struct NCMBFile_t2251642980;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBFile/<FetchAsync>c__AnonStorey3
struct  U3CFetchAsyncU3Ec__AnonStorey3_t641784785  : public Il2CppObject
{
public:
	// NCMB.NCMBGetFileCallback NCMB.NCMBFile/<FetchAsync>c__AnonStorey3::callback
	NCMBGetFileCallback_t3502735169 * ___callback_0;
	// NCMB.NCMBFile NCMB.NCMBFile/<FetchAsync>c__AnonStorey3::$this
	NCMBFile_t2251642980 * ___U24this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CFetchAsyncU3Ec__AnonStorey3_t641784785, ___callback_0)); }
	inline NCMBGetFileCallback_t3502735169 * get_callback_0() const { return ___callback_0; }
	inline NCMBGetFileCallback_t3502735169 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(NCMBGetFileCallback_t3502735169 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier(&___callback_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFetchAsyncU3Ec__AnonStorey3_t641784785, ___U24this_1)); }
	inline NCMBFile_t2251642980 * get_U24this_1() const { return ___U24this_1; }
	inline NCMBFile_t2251642980 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(NCMBFile_t2251642980 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
