#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t362681087;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.Internal.NCMBRelationOperation`1<NCMB.NCMBUser>
struct  NCMBRelationOperation_1_t2213593284  : public Il2CppObject
{
public:
	// System.String NCMB.Internal.NCMBRelationOperation`1::_targetClass
	String_t* ____targetClass_0;
	// System.Collections.Generic.HashSet`1<System.String> NCMB.Internal.NCMBRelationOperation`1::_relationsToAdd
	HashSet_1_t362681087 * ____relationsToAdd_1;
	// System.Collections.Generic.HashSet`1<System.String> NCMB.Internal.NCMBRelationOperation`1::_relationsToRemove
	HashSet_1_t362681087 * ____relationsToRemove_2;

public:
	inline static int32_t get_offset_of__targetClass_0() { return static_cast<int32_t>(offsetof(NCMBRelationOperation_1_t2213593284, ____targetClass_0)); }
	inline String_t* get__targetClass_0() const { return ____targetClass_0; }
	inline String_t** get_address_of__targetClass_0() { return &____targetClass_0; }
	inline void set__targetClass_0(String_t* value)
	{
		____targetClass_0 = value;
		Il2CppCodeGenWriteBarrier(&____targetClass_0, value);
	}

	inline static int32_t get_offset_of__relationsToAdd_1() { return static_cast<int32_t>(offsetof(NCMBRelationOperation_1_t2213593284, ____relationsToAdd_1)); }
	inline HashSet_1_t362681087 * get__relationsToAdd_1() const { return ____relationsToAdd_1; }
	inline HashSet_1_t362681087 ** get_address_of__relationsToAdd_1() { return &____relationsToAdd_1; }
	inline void set__relationsToAdd_1(HashSet_1_t362681087 * value)
	{
		____relationsToAdd_1 = value;
		Il2CppCodeGenWriteBarrier(&____relationsToAdd_1, value);
	}

	inline static int32_t get_offset_of__relationsToRemove_2() { return static_cast<int32_t>(offsetof(NCMBRelationOperation_1_t2213593284, ____relationsToRemove_2)); }
	inline HashSet_1_t362681087 * get__relationsToRemove_2() const { return ____relationsToRemove_2; }
	inline HashSet_1_t362681087 ** get_address_of__relationsToRemove_2() { return &____relationsToRemove_2; }
	inline void set__relationsToRemove_2(HashSet_1_t362681087 * value)
	{
		____relationsToRemove_2 = value;
		Il2CppCodeGenWriteBarrier(&____relationsToRemove_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
