#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// NCMB.NCMBACL
struct NCMBACL_t1370756154;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBACL
struct  NCMBACL_t1370756154  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> NCMB.NCMBACL::permissionsById
	Dictionary_2_t309261261 * ___permissionsById_1;
	// System.Boolean NCMB.NCMBACL::shared
	bool ___shared_2;

public:
	inline static int32_t get_offset_of_permissionsById_1() { return static_cast<int32_t>(offsetof(NCMBACL_t1370756154, ___permissionsById_1)); }
	inline Dictionary_2_t309261261 * get_permissionsById_1() const { return ___permissionsById_1; }
	inline Dictionary_2_t309261261 ** get_address_of_permissionsById_1() { return &___permissionsById_1; }
	inline void set_permissionsById_1(Dictionary_2_t309261261 * value)
	{
		___permissionsById_1 = value;
		Il2CppCodeGenWriteBarrier(&___permissionsById_1, value);
	}

	inline static int32_t get_offset_of_shared_2() { return static_cast<int32_t>(offsetof(NCMBACL_t1370756154, ___shared_2)); }
	inline bool get_shared_2() const { return ___shared_2; }
	inline bool* get_address_of_shared_2() { return &___shared_2; }
	inline void set_shared_2(bool value)
	{
		___shared_2 = value;
	}
};

struct NCMBACL_t1370756154_StaticFields
{
public:
	// NCMB.NCMBACL NCMB.NCMBACL::defaultACL
	NCMBACL_t1370756154 * ___defaultACL_0;
	// NCMB.NCMBACL NCMB.NCMBACL::defaultACLWithCurrentUser
	NCMBACL_t1370756154 * ___defaultACLWithCurrentUser_3;
	// System.Boolean NCMB.NCMBACL::defaultACLUsesCurrentUser
	bool ___defaultACLUsesCurrentUser_4;

public:
	inline static int32_t get_offset_of_defaultACL_0() { return static_cast<int32_t>(offsetof(NCMBACL_t1370756154_StaticFields, ___defaultACL_0)); }
	inline NCMBACL_t1370756154 * get_defaultACL_0() const { return ___defaultACL_0; }
	inline NCMBACL_t1370756154 ** get_address_of_defaultACL_0() { return &___defaultACL_0; }
	inline void set_defaultACL_0(NCMBACL_t1370756154 * value)
	{
		___defaultACL_0 = value;
		Il2CppCodeGenWriteBarrier(&___defaultACL_0, value);
	}

	inline static int32_t get_offset_of_defaultACLWithCurrentUser_3() { return static_cast<int32_t>(offsetof(NCMBACL_t1370756154_StaticFields, ___defaultACLWithCurrentUser_3)); }
	inline NCMBACL_t1370756154 * get_defaultACLWithCurrentUser_3() const { return ___defaultACLWithCurrentUser_3; }
	inline NCMBACL_t1370756154 ** get_address_of_defaultACLWithCurrentUser_3() { return &___defaultACLWithCurrentUser_3; }
	inline void set_defaultACLWithCurrentUser_3(NCMBACL_t1370756154 * value)
	{
		___defaultACLWithCurrentUser_3 = value;
		Il2CppCodeGenWriteBarrier(&___defaultACLWithCurrentUser_3, value);
	}

	inline static int32_t get_offset_of_defaultACLUsesCurrentUser_4() { return static_cast<int32_t>(offsetof(NCMBACL_t1370756154_StaticFields, ___defaultACLUsesCurrentUser_4)); }
	inline bool get_defaultACLUsesCurrentUser_4() const { return ___defaultACLUsesCurrentUser_4; }
	inline bool* get_address_of_defaultACLUsesCurrentUser_4() { return &___defaultACLUsesCurrentUser_4; }
	inline void set_defaultACLUsesCurrentUser_4(bool value)
	{
		___defaultACLUsesCurrentUser_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
