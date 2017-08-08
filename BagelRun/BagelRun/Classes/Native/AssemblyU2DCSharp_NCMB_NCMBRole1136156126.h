#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_NCMB_NCMBObject2812218109.h"

// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBRole
struct  NCMBRole_t1136156126  : public NCMBObject_t2812218109
{
public:

public:
};

struct NCMBRole_t1136156126_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex NCMB.NCMBRole::namePattern
	Regex_t1803876613 * ___namePattern_15;

public:
	inline static int32_t get_offset_of_namePattern_15() { return static_cast<int32_t>(offsetof(NCMBRole_t1136156126_StaticFields, ___namePattern_15)); }
	inline Regex_t1803876613 * get_namePattern_15() const { return ___namePattern_15; }
	inline Regex_t1803876613 ** get_address_of_namePattern_15() { return &___namePattern_15; }
	inline void set_namePattern_15(Regex_t1803876613 * value)
	{
		___namePattern_15 = value;
		Il2CppCodeGenWriteBarrier(&___namePattern_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
