#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// NCMB.NCMBObject
struct NCMBObject_t2812218109;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBRelation`1<NCMB.NCMBRole>
struct  NCMBRelation_1_t71616046  : public Il2CppObject
{
public:
	// NCMB.NCMBObject NCMB.NCMBRelation`1::_parent
	NCMBObject_t2812218109 * ____parent_0;
	// System.String NCMB.NCMBRelation`1::_key
	String_t* ____key_1;
	// System.String NCMB.NCMBRelation`1::_targetClass
	String_t* ____targetClass_2;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(NCMBRelation_1_t71616046, ____parent_0)); }
	inline NCMBObject_t2812218109 * get__parent_0() const { return ____parent_0; }
	inline NCMBObject_t2812218109 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(NCMBObject_t2812218109 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier(&____parent_0, value);
	}

	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(NCMBRelation_1_t71616046, ____key_1)); }
	inline String_t* get__key_1() const { return ____key_1; }
	inline String_t** get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(String_t* value)
	{
		____key_1 = value;
		Il2CppCodeGenWriteBarrier(&____key_1, value);
	}

	inline static int32_t get_offset_of__targetClass_2() { return static_cast<int32_t>(offsetof(NCMBRelation_1_t71616046, ____targetClass_2)); }
	inline String_t* get__targetClass_2() const { return ____targetClass_2; }
	inline String_t** get_address_of__targetClass_2() { return &____targetClass_2; }
	inline void set__targetClass_2(String_t* value)
	{
		____targetClass_2 = value;
		Il2CppCodeGenWriteBarrier(&____targetClass_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
