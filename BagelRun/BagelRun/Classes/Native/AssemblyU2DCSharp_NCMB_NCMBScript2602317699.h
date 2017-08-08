#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_NCMB_NCMBScript_MethodType1747495851.h"

// System.String
struct String_t;
// System.AsyncCallback
struct AsyncCallback_t163412349;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBScript
struct  NCMBScript_t2602317699  : public Il2CppObject
{
public:
	// System.String NCMB.NCMBScript::_scriptName
	String_t* ____scriptName_3;
	// NCMB.NCMBScript/MethodType NCMB.NCMBScript::_method
	int32_t ____method_4;
	// System.String NCMB.NCMBScript::_baseUrl
	String_t* ____baseUrl_5;

public:
	inline static int32_t get_offset_of__scriptName_3() { return static_cast<int32_t>(offsetof(NCMBScript_t2602317699, ____scriptName_3)); }
	inline String_t* get__scriptName_3() const { return ____scriptName_3; }
	inline String_t** get_address_of__scriptName_3() { return &____scriptName_3; }
	inline void set__scriptName_3(String_t* value)
	{
		____scriptName_3 = value;
		Il2CppCodeGenWriteBarrier(&____scriptName_3, value);
	}

	inline static int32_t get_offset_of__method_4() { return static_cast<int32_t>(offsetof(NCMBScript_t2602317699, ____method_4)); }
	inline int32_t get__method_4() const { return ____method_4; }
	inline int32_t* get_address_of__method_4() { return &____method_4; }
	inline void set__method_4(int32_t value)
	{
		____method_4 = value;
	}

	inline static int32_t get_offset_of__baseUrl_5() { return static_cast<int32_t>(offsetof(NCMBScript_t2602317699, ____baseUrl_5)); }
	inline String_t* get__baseUrl_5() const { return ____baseUrl_5; }
	inline String_t** get_address_of__baseUrl_5() { return &____baseUrl_5; }
	inline void set__baseUrl_5(String_t* value)
	{
		____baseUrl_5 = value;
		Il2CppCodeGenWriteBarrier(&____baseUrl_5, value);
	}
};

struct NCMBScript_t2602317699_StaticFields
{
public:
	// System.String NCMB.NCMBScript::SERVICE_PATH
	String_t* ___SERVICE_PATH_0;
	// System.String NCMB.NCMBScript::DEFAULT_SCRIPT_ENDPOINT
	String_t* ___DEFAULT_SCRIPT_ENDPOINT_1;
	// System.String NCMB.NCMBScript::DEFAULT_SCRIPT_API_VERSION
	String_t* ___DEFAULT_SCRIPT_API_VERSION_2;
	// System.AsyncCallback NCMB.NCMBScript::<>f__am$cache0
	AsyncCallback_t163412349 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_SERVICE_PATH_0() { return static_cast<int32_t>(offsetof(NCMBScript_t2602317699_StaticFields, ___SERVICE_PATH_0)); }
	inline String_t* get_SERVICE_PATH_0() const { return ___SERVICE_PATH_0; }
	inline String_t** get_address_of_SERVICE_PATH_0() { return &___SERVICE_PATH_0; }
	inline void set_SERVICE_PATH_0(String_t* value)
	{
		___SERVICE_PATH_0 = value;
		Il2CppCodeGenWriteBarrier(&___SERVICE_PATH_0, value);
	}

	inline static int32_t get_offset_of_DEFAULT_SCRIPT_ENDPOINT_1() { return static_cast<int32_t>(offsetof(NCMBScript_t2602317699_StaticFields, ___DEFAULT_SCRIPT_ENDPOINT_1)); }
	inline String_t* get_DEFAULT_SCRIPT_ENDPOINT_1() const { return ___DEFAULT_SCRIPT_ENDPOINT_1; }
	inline String_t** get_address_of_DEFAULT_SCRIPT_ENDPOINT_1() { return &___DEFAULT_SCRIPT_ENDPOINT_1; }
	inline void set_DEFAULT_SCRIPT_ENDPOINT_1(String_t* value)
	{
		___DEFAULT_SCRIPT_ENDPOINT_1 = value;
		Il2CppCodeGenWriteBarrier(&___DEFAULT_SCRIPT_ENDPOINT_1, value);
	}

	inline static int32_t get_offset_of_DEFAULT_SCRIPT_API_VERSION_2() { return static_cast<int32_t>(offsetof(NCMBScript_t2602317699_StaticFields, ___DEFAULT_SCRIPT_API_VERSION_2)); }
	inline String_t* get_DEFAULT_SCRIPT_API_VERSION_2() const { return ___DEFAULT_SCRIPT_API_VERSION_2; }
	inline String_t** get_address_of_DEFAULT_SCRIPT_API_VERSION_2() { return &___DEFAULT_SCRIPT_API_VERSION_2; }
	inline void set_DEFAULT_SCRIPT_API_VERSION_2(String_t* value)
	{
		___DEFAULT_SCRIPT_API_VERSION_2 = value;
		Il2CppCodeGenWriteBarrier(&___DEFAULT_SCRIPT_API_VERSION_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(NCMBScript_t2602317699_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline AsyncCallback_t163412349 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline AsyncCallback_t163412349 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(AsyncCallback_t163412349 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
