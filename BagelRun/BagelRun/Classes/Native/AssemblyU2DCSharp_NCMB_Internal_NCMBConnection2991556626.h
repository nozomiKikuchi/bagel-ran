#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_NCMB_Internal_ConnectType2296615628.h"

// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;
// NCMB.NCMBFile
struct NCMBFile_t2251642980;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.Internal.NCMBConnection
struct  NCMBConnection_t2991556626  : public Il2CppObject
{
public:
	// System.String NCMB.Internal.NCMBConnection::_applicationKey
	String_t* ____applicationKey_13;
	// System.String NCMB.Internal.NCMBConnection::_clientKey
	String_t* ____clientKey_14;
	// System.String NCMB.Internal.NCMBConnection::_headerTimestamp
	String_t* ____headerTimestamp_15;
	// NCMB.Internal.ConnectType NCMB.Internal.NCMBConnection::_method
	int32_t ____method_16;
	// System.String NCMB.Internal.NCMBConnection::_url
	String_t* ____url_17;
	// System.String NCMB.Internal.NCMBConnection::_content
	String_t* ____content_18;
	// System.String NCMB.Internal.NCMBConnection::_sessionToken
	String_t* ____sessionToken_19;
	// System.Uri NCMB.Internal.NCMBConnection::_domainUri
	Uri_t19570940 * ____domainUri_20;
	// NCMB.NCMBFile NCMB.Internal.NCMBConnection::_file
	NCMBFile_t2251642980 * ____file_21;

public:
	inline static int32_t get_offset_of__applicationKey_13() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626, ____applicationKey_13)); }
	inline String_t* get__applicationKey_13() const { return ____applicationKey_13; }
	inline String_t** get_address_of__applicationKey_13() { return &____applicationKey_13; }
	inline void set__applicationKey_13(String_t* value)
	{
		____applicationKey_13 = value;
		Il2CppCodeGenWriteBarrier(&____applicationKey_13, value);
	}

	inline static int32_t get_offset_of__clientKey_14() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626, ____clientKey_14)); }
	inline String_t* get__clientKey_14() const { return ____clientKey_14; }
	inline String_t** get_address_of__clientKey_14() { return &____clientKey_14; }
	inline void set__clientKey_14(String_t* value)
	{
		____clientKey_14 = value;
		Il2CppCodeGenWriteBarrier(&____clientKey_14, value);
	}

	inline static int32_t get_offset_of__headerTimestamp_15() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626, ____headerTimestamp_15)); }
	inline String_t* get__headerTimestamp_15() const { return ____headerTimestamp_15; }
	inline String_t** get_address_of__headerTimestamp_15() { return &____headerTimestamp_15; }
	inline void set__headerTimestamp_15(String_t* value)
	{
		____headerTimestamp_15 = value;
		Il2CppCodeGenWriteBarrier(&____headerTimestamp_15, value);
	}

	inline static int32_t get_offset_of__method_16() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626, ____method_16)); }
	inline int32_t get__method_16() const { return ____method_16; }
	inline int32_t* get_address_of__method_16() { return &____method_16; }
	inline void set__method_16(int32_t value)
	{
		____method_16 = value;
	}

	inline static int32_t get_offset_of__url_17() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626, ____url_17)); }
	inline String_t* get__url_17() const { return ____url_17; }
	inline String_t** get_address_of__url_17() { return &____url_17; }
	inline void set__url_17(String_t* value)
	{
		____url_17 = value;
		Il2CppCodeGenWriteBarrier(&____url_17, value);
	}

	inline static int32_t get_offset_of__content_18() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626, ____content_18)); }
	inline String_t* get__content_18() const { return ____content_18; }
	inline String_t** get_address_of__content_18() { return &____content_18; }
	inline void set__content_18(String_t* value)
	{
		____content_18 = value;
		Il2CppCodeGenWriteBarrier(&____content_18, value);
	}

	inline static int32_t get_offset_of__sessionToken_19() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626, ____sessionToken_19)); }
	inline String_t* get__sessionToken_19() const { return ____sessionToken_19; }
	inline String_t** get_address_of__sessionToken_19() { return &____sessionToken_19; }
	inline void set__sessionToken_19(String_t* value)
	{
		____sessionToken_19 = value;
		Il2CppCodeGenWriteBarrier(&____sessionToken_19, value);
	}

	inline static int32_t get_offset_of__domainUri_20() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626, ____domainUri_20)); }
	inline Uri_t19570940 * get__domainUri_20() const { return ____domainUri_20; }
	inline Uri_t19570940 ** get_address_of__domainUri_20() { return &____domainUri_20; }
	inline void set__domainUri_20(Uri_t19570940 * value)
	{
		____domainUri_20 = value;
		Il2CppCodeGenWriteBarrier(&____domainUri_20, value);
	}

	inline static int32_t get_offset_of__file_21() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626, ____file_21)); }
	inline NCMBFile_t2251642980 * get__file_21() const { return ____file_21; }
	inline NCMBFile_t2251642980 ** get_address_of__file_21() { return &____file_21; }
	inline void set__file_21(NCMBFile_t2251642980 * value)
	{
		____file_21 = value;
		Il2CppCodeGenWriteBarrier(&____file_21, value);
	}
};

struct NCMBConnection_t2991556626_StaticFields
{
public:
	// System.String NCMB.Internal.NCMBConnection::RESPONSE_SIGNATURE
	String_t* ___RESPONSE_SIGNATURE_0;
	// System.String NCMB.Internal.NCMBConnection::SIGNATURE_METHOD_KEY
	String_t* ___SIGNATURE_METHOD_KEY_1;
	// System.String NCMB.Internal.NCMBConnection::SIGNATURE_METHOD_VALUE
	String_t* ___SIGNATURE_METHOD_VALUE_2;
	// System.String NCMB.Internal.NCMBConnection::SIGNATURE_VERSION_KEY
	String_t* ___SIGNATURE_VERSION_KEY_3;
	// System.String NCMB.Internal.NCMBConnection::SIGNATURE_VERSION_VALUE
	String_t* ___SIGNATURE_VERSION_VALUE_4;
	// System.String NCMB.Internal.NCMBConnection::HEADER_SIGNATURE
	String_t* ___HEADER_SIGNATURE_5;
	// System.String NCMB.Internal.NCMBConnection::HEADER_APPLICATION_KEY
	String_t* ___HEADER_APPLICATION_KEY_6;
	// System.String NCMB.Internal.NCMBConnection::HEADER_TIMESTAMP_KEY
	String_t* ___HEADER_TIMESTAMP_KEY_7;
	// System.String NCMB.Internal.NCMBConnection::HEADER_ACCESS_CONTROL_ALLOW_ORIGIN
	String_t* ___HEADER_ACCESS_CONTROL_ALLOW_ORIGIN_8;
	// System.String NCMB.Internal.NCMBConnection::HEADER_SESSION_TOKEN
	String_t* ___HEADER_SESSION_TOKEN_9;
	// System.String NCMB.Internal.NCMBConnection::HEADER_USER_AGENT_KEY
	String_t* ___HEADER_USER_AGENT_KEY_10;
	// System.String NCMB.Internal.NCMBConnection::HEADER_USER_AGENT_VALUE
	String_t* ___HEADER_USER_AGENT_VALUE_11;
	// System.Int32 NCMB.Internal.NCMBConnection::REQUEST_TIME_OUT
	int32_t ___REQUEST_TIME_OUT_12;
	// System.Net.Security.RemoteCertificateValidationCallback NCMB.Internal.NCMBConnection::<>f__am$cache0
	RemoteCertificateValidationCallback_t2756269959 * ___U3CU3Ef__amU24cache0_22;

public:
	inline static int32_t get_offset_of_RESPONSE_SIGNATURE_0() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___RESPONSE_SIGNATURE_0)); }
	inline String_t* get_RESPONSE_SIGNATURE_0() const { return ___RESPONSE_SIGNATURE_0; }
	inline String_t** get_address_of_RESPONSE_SIGNATURE_0() { return &___RESPONSE_SIGNATURE_0; }
	inline void set_RESPONSE_SIGNATURE_0(String_t* value)
	{
		___RESPONSE_SIGNATURE_0 = value;
		Il2CppCodeGenWriteBarrier(&___RESPONSE_SIGNATURE_0, value);
	}

	inline static int32_t get_offset_of_SIGNATURE_METHOD_KEY_1() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___SIGNATURE_METHOD_KEY_1)); }
	inline String_t* get_SIGNATURE_METHOD_KEY_1() const { return ___SIGNATURE_METHOD_KEY_1; }
	inline String_t** get_address_of_SIGNATURE_METHOD_KEY_1() { return &___SIGNATURE_METHOD_KEY_1; }
	inline void set_SIGNATURE_METHOD_KEY_1(String_t* value)
	{
		___SIGNATURE_METHOD_KEY_1 = value;
		Il2CppCodeGenWriteBarrier(&___SIGNATURE_METHOD_KEY_1, value);
	}

	inline static int32_t get_offset_of_SIGNATURE_METHOD_VALUE_2() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___SIGNATURE_METHOD_VALUE_2)); }
	inline String_t* get_SIGNATURE_METHOD_VALUE_2() const { return ___SIGNATURE_METHOD_VALUE_2; }
	inline String_t** get_address_of_SIGNATURE_METHOD_VALUE_2() { return &___SIGNATURE_METHOD_VALUE_2; }
	inline void set_SIGNATURE_METHOD_VALUE_2(String_t* value)
	{
		___SIGNATURE_METHOD_VALUE_2 = value;
		Il2CppCodeGenWriteBarrier(&___SIGNATURE_METHOD_VALUE_2, value);
	}

	inline static int32_t get_offset_of_SIGNATURE_VERSION_KEY_3() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___SIGNATURE_VERSION_KEY_3)); }
	inline String_t* get_SIGNATURE_VERSION_KEY_3() const { return ___SIGNATURE_VERSION_KEY_3; }
	inline String_t** get_address_of_SIGNATURE_VERSION_KEY_3() { return &___SIGNATURE_VERSION_KEY_3; }
	inline void set_SIGNATURE_VERSION_KEY_3(String_t* value)
	{
		___SIGNATURE_VERSION_KEY_3 = value;
		Il2CppCodeGenWriteBarrier(&___SIGNATURE_VERSION_KEY_3, value);
	}

	inline static int32_t get_offset_of_SIGNATURE_VERSION_VALUE_4() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___SIGNATURE_VERSION_VALUE_4)); }
	inline String_t* get_SIGNATURE_VERSION_VALUE_4() const { return ___SIGNATURE_VERSION_VALUE_4; }
	inline String_t** get_address_of_SIGNATURE_VERSION_VALUE_4() { return &___SIGNATURE_VERSION_VALUE_4; }
	inline void set_SIGNATURE_VERSION_VALUE_4(String_t* value)
	{
		___SIGNATURE_VERSION_VALUE_4 = value;
		Il2CppCodeGenWriteBarrier(&___SIGNATURE_VERSION_VALUE_4, value);
	}

	inline static int32_t get_offset_of_HEADER_SIGNATURE_5() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___HEADER_SIGNATURE_5)); }
	inline String_t* get_HEADER_SIGNATURE_5() const { return ___HEADER_SIGNATURE_5; }
	inline String_t** get_address_of_HEADER_SIGNATURE_5() { return &___HEADER_SIGNATURE_5; }
	inline void set_HEADER_SIGNATURE_5(String_t* value)
	{
		___HEADER_SIGNATURE_5 = value;
		Il2CppCodeGenWriteBarrier(&___HEADER_SIGNATURE_5, value);
	}

	inline static int32_t get_offset_of_HEADER_APPLICATION_KEY_6() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___HEADER_APPLICATION_KEY_6)); }
	inline String_t* get_HEADER_APPLICATION_KEY_6() const { return ___HEADER_APPLICATION_KEY_6; }
	inline String_t** get_address_of_HEADER_APPLICATION_KEY_6() { return &___HEADER_APPLICATION_KEY_6; }
	inline void set_HEADER_APPLICATION_KEY_6(String_t* value)
	{
		___HEADER_APPLICATION_KEY_6 = value;
		Il2CppCodeGenWriteBarrier(&___HEADER_APPLICATION_KEY_6, value);
	}

	inline static int32_t get_offset_of_HEADER_TIMESTAMP_KEY_7() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___HEADER_TIMESTAMP_KEY_7)); }
	inline String_t* get_HEADER_TIMESTAMP_KEY_7() const { return ___HEADER_TIMESTAMP_KEY_7; }
	inline String_t** get_address_of_HEADER_TIMESTAMP_KEY_7() { return &___HEADER_TIMESTAMP_KEY_7; }
	inline void set_HEADER_TIMESTAMP_KEY_7(String_t* value)
	{
		___HEADER_TIMESTAMP_KEY_7 = value;
		Il2CppCodeGenWriteBarrier(&___HEADER_TIMESTAMP_KEY_7, value);
	}

	inline static int32_t get_offset_of_HEADER_ACCESS_CONTROL_ALLOW_ORIGIN_8() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___HEADER_ACCESS_CONTROL_ALLOW_ORIGIN_8)); }
	inline String_t* get_HEADER_ACCESS_CONTROL_ALLOW_ORIGIN_8() const { return ___HEADER_ACCESS_CONTROL_ALLOW_ORIGIN_8; }
	inline String_t** get_address_of_HEADER_ACCESS_CONTROL_ALLOW_ORIGIN_8() { return &___HEADER_ACCESS_CONTROL_ALLOW_ORIGIN_8; }
	inline void set_HEADER_ACCESS_CONTROL_ALLOW_ORIGIN_8(String_t* value)
	{
		___HEADER_ACCESS_CONTROL_ALLOW_ORIGIN_8 = value;
		Il2CppCodeGenWriteBarrier(&___HEADER_ACCESS_CONTROL_ALLOW_ORIGIN_8, value);
	}

	inline static int32_t get_offset_of_HEADER_SESSION_TOKEN_9() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___HEADER_SESSION_TOKEN_9)); }
	inline String_t* get_HEADER_SESSION_TOKEN_9() const { return ___HEADER_SESSION_TOKEN_9; }
	inline String_t** get_address_of_HEADER_SESSION_TOKEN_9() { return &___HEADER_SESSION_TOKEN_9; }
	inline void set_HEADER_SESSION_TOKEN_9(String_t* value)
	{
		___HEADER_SESSION_TOKEN_9 = value;
		Il2CppCodeGenWriteBarrier(&___HEADER_SESSION_TOKEN_9, value);
	}

	inline static int32_t get_offset_of_HEADER_USER_AGENT_KEY_10() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___HEADER_USER_AGENT_KEY_10)); }
	inline String_t* get_HEADER_USER_AGENT_KEY_10() const { return ___HEADER_USER_AGENT_KEY_10; }
	inline String_t** get_address_of_HEADER_USER_AGENT_KEY_10() { return &___HEADER_USER_AGENT_KEY_10; }
	inline void set_HEADER_USER_AGENT_KEY_10(String_t* value)
	{
		___HEADER_USER_AGENT_KEY_10 = value;
		Il2CppCodeGenWriteBarrier(&___HEADER_USER_AGENT_KEY_10, value);
	}

	inline static int32_t get_offset_of_HEADER_USER_AGENT_VALUE_11() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___HEADER_USER_AGENT_VALUE_11)); }
	inline String_t* get_HEADER_USER_AGENT_VALUE_11() const { return ___HEADER_USER_AGENT_VALUE_11; }
	inline String_t** get_address_of_HEADER_USER_AGENT_VALUE_11() { return &___HEADER_USER_AGENT_VALUE_11; }
	inline void set_HEADER_USER_AGENT_VALUE_11(String_t* value)
	{
		___HEADER_USER_AGENT_VALUE_11 = value;
		Il2CppCodeGenWriteBarrier(&___HEADER_USER_AGENT_VALUE_11, value);
	}

	inline static int32_t get_offset_of_REQUEST_TIME_OUT_12() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___REQUEST_TIME_OUT_12)); }
	inline int32_t get_REQUEST_TIME_OUT_12() const { return ___REQUEST_TIME_OUT_12; }
	inline int32_t* get_address_of_REQUEST_TIME_OUT_12() { return &___REQUEST_TIME_OUT_12; }
	inline void set_REQUEST_TIME_OUT_12(int32_t value)
	{
		___REQUEST_TIME_OUT_12 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_22() { return static_cast<int32_t>(offsetof(NCMBConnection_t2991556626_StaticFields, ___U3CU3Ef__amU24cache0_22)); }
	inline RemoteCertificateValidationCallback_t2756269959 * get_U3CU3Ef__amU24cache0_22() const { return ___U3CU3Ef__amU24cache0_22; }
	inline RemoteCertificateValidationCallback_t2756269959 ** get_address_of_U3CU3Ef__amU24cache0_22() { return &___U3CU3Ef__amU24cache0_22; }
	inline void set_U3CU3Ef__amU24cache0_22(RemoteCertificateValidationCallback_t2756269959 * value)
	{
		___U3CU3Ef__amU24cache0_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
