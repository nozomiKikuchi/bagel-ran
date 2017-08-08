#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// NCMB.NCMBInstallation
struct NCMBInstallation_t424620590;
// System.String
struct String_t;
// NCMB.NCMBManager
struct NCMBManager_t2444233343;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBManager/<onTokenReceived>c__AnonStorey1
struct  U3ConTokenReceivedU3Ec__AnonStorey1_t731819381  : public Il2CppObject
{
public:
	// NCMB.NCMBInstallation NCMB.NCMBManager/<onTokenReceived>c__AnonStorey1::installation
	NCMBInstallation_t424620590 * ___installation_0;
	// System.String NCMB.NCMBManager/<onTokenReceived>c__AnonStorey1::path
	String_t* ___path_1;
	// NCMB.NCMBManager NCMB.NCMBManager/<onTokenReceived>c__AnonStorey1::$this
	NCMBManager_t2444233343 * ___U24this_2;

public:
	inline static int32_t get_offset_of_installation_0() { return static_cast<int32_t>(offsetof(U3ConTokenReceivedU3Ec__AnonStorey1_t731819381, ___installation_0)); }
	inline NCMBInstallation_t424620590 * get_installation_0() const { return ___installation_0; }
	inline NCMBInstallation_t424620590 ** get_address_of_installation_0() { return &___installation_0; }
	inline void set_installation_0(NCMBInstallation_t424620590 * value)
	{
		___installation_0 = value;
		Il2CppCodeGenWriteBarrier(&___installation_0, value);
	}

	inline static int32_t get_offset_of_path_1() { return static_cast<int32_t>(offsetof(U3ConTokenReceivedU3Ec__AnonStorey1_t731819381, ___path_1)); }
	inline String_t* get_path_1() const { return ___path_1; }
	inline String_t** get_address_of_path_1() { return &___path_1; }
	inline void set_path_1(String_t* value)
	{
		___path_1 = value;
		Il2CppCodeGenWriteBarrier(&___path_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3ConTokenReceivedU3Ec__AnonStorey1_t731819381, ___U24this_2)); }
	inline NCMBManager_t2444233343 * get_U24this_2() const { return ___U24this_2; }
	inline NCMBManager_t2444233343 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(NCMBManager_t2444233343 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
