#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Exception1927440687.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBException
struct  NCMBException_t1167303643  : public Exception_t1927440687
{
public:
	// System.String NCMB.NCMBException::_errorCode
	String_t* ____errorCode_11;
	// System.String NCMB.NCMBException::_errorMessage
	String_t* ____errorMessage_12;

public:
	inline static int32_t get_offset_of__errorCode_11() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643, ____errorCode_11)); }
	inline String_t* get__errorCode_11() const { return ____errorCode_11; }
	inline String_t** get_address_of__errorCode_11() { return &____errorCode_11; }
	inline void set__errorCode_11(String_t* value)
	{
		____errorCode_11 = value;
		Il2CppCodeGenWriteBarrier(&____errorCode_11, value);
	}

	inline static int32_t get_offset_of__errorMessage_12() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643, ____errorMessage_12)); }
	inline String_t* get__errorMessage_12() const { return ____errorMessage_12; }
	inline String_t** get_address_of__errorMessage_12() { return &____errorMessage_12; }
	inline void set__errorMessage_12(String_t* value)
	{
		____errorMessage_12 = value;
		Il2CppCodeGenWriteBarrier(&____errorMessage_12, value);
	}
};

struct NCMBException_t1167303643_StaticFields
{
public:
	// System.String NCMB.NCMBException::BAD_REQUEST
	String_t* ___BAD_REQUEST_13;
	// System.String NCMB.NCMBException::INVALID_JSON
	String_t* ___INVALID_JSON_14;
	// System.String NCMB.NCMBException::INVALID_TYPE
	String_t* ___INVALID_TYPE_15;
	// System.String NCMB.NCMBException::REQUIRED
	String_t* ___REQUIRED_16;
	// System.String NCMB.NCMBException::INVALID_FORMAT
	String_t* ___INVALID_FORMAT_17;
	// System.String NCMB.NCMBException::INVALID_VALUE
	String_t* ___INVALID_VALUE_18;
	// System.String NCMB.NCMBException::NOT_EXIST
	String_t* ___NOT_EXIST_19;
	// System.String NCMB.NCMBException::RELATION_ERROR
	String_t* ___RELATION_ERROR_20;
	// System.String NCMB.NCMBException::INVALID_SIZE
	String_t* ___INVALID_SIZE_21;
	// System.String NCMB.NCMBException::INCORRECT_HEADER
	String_t* ___INCORRECT_HEADER_22;
	// System.String NCMB.NCMBException::INCORRECT_PASSWORD
	String_t* ___INCORRECT_PASSWORD_23;
	// System.String NCMB.NCMBException::OAUTH_ERROR
	String_t* ___OAUTH_ERROR_24;
	// System.String NCMB.NCMBException::INVALID_ACL
	String_t* ___INVALID_ACL_25;
	// System.String NCMB.NCMBException::INVALID_OPERATION
	String_t* ___INVALID_OPERATION_26;
	// System.String NCMB.NCMBException::FORBIDDEN_OPERATION
	String_t* ___FORBIDDEN_OPERATION_27;
	// System.String NCMB.NCMBException::INVALID_SETTING
	String_t* ___INVALID_SETTING_28;
	// System.String NCMB.NCMBException::INVALID_GEOPOINT
	String_t* ___INVALID_GEOPOINT_29;
	// System.String NCMB.NCMBException::INVALID_METHOD
	String_t* ___INVALID_METHOD_30;
	// System.String NCMB.NCMBException::DUPPLICATION_ERROR
	String_t* ___DUPPLICATION_ERROR_31;
	// System.String NCMB.NCMBException::FILE_SIZE_ERROR
	String_t* ___FILE_SIZE_ERROR_32;
	// System.String NCMB.NCMBException::DOCUMENT_SIZE_ERROR
	String_t* ___DOCUMENT_SIZE_ERROR_33;
	// System.String NCMB.NCMBException::REQUEST_LIMIT_ERROR
	String_t* ___REQUEST_LIMIT_ERROR_34;
	// System.String NCMB.NCMBException::UNSUPPORT_MEDIA
	String_t* ___UNSUPPORT_MEDIA_35;
	// System.String NCMB.NCMBException::REQUEST_OVERLOAD
	String_t* ___REQUEST_OVERLOAD_36;
	// System.String NCMB.NCMBException::SYSTEM_ERROR
	String_t* ___SYSTEM_ERROR_37;
	// System.String NCMB.NCMBException::STORAGE_ERROR
	String_t* ___STORAGE_ERROR_38;
	// System.String NCMB.NCMBException::MAIL_ERROR
	String_t* ___MAIL_ERROR_39;
	// System.String NCMB.NCMBException::DATABASE_ERROR
	String_t* ___DATABASE_ERROR_40;

public:
	inline static int32_t get_offset_of_BAD_REQUEST_13() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___BAD_REQUEST_13)); }
	inline String_t* get_BAD_REQUEST_13() const { return ___BAD_REQUEST_13; }
	inline String_t** get_address_of_BAD_REQUEST_13() { return &___BAD_REQUEST_13; }
	inline void set_BAD_REQUEST_13(String_t* value)
	{
		___BAD_REQUEST_13 = value;
		Il2CppCodeGenWriteBarrier(&___BAD_REQUEST_13, value);
	}

	inline static int32_t get_offset_of_INVALID_JSON_14() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___INVALID_JSON_14)); }
	inline String_t* get_INVALID_JSON_14() const { return ___INVALID_JSON_14; }
	inline String_t** get_address_of_INVALID_JSON_14() { return &___INVALID_JSON_14; }
	inline void set_INVALID_JSON_14(String_t* value)
	{
		___INVALID_JSON_14 = value;
		Il2CppCodeGenWriteBarrier(&___INVALID_JSON_14, value);
	}

	inline static int32_t get_offset_of_INVALID_TYPE_15() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___INVALID_TYPE_15)); }
	inline String_t* get_INVALID_TYPE_15() const { return ___INVALID_TYPE_15; }
	inline String_t** get_address_of_INVALID_TYPE_15() { return &___INVALID_TYPE_15; }
	inline void set_INVALID_TYPE_15(String_t* value)
	{
		___INVALID_TYPE_15 = value;
		Il2CppCodeGenWriteBarrier(&___INVALID_TYPE_15, value);
	}

	inline static int32_t get_offset_of_REQUIRED_16() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___REQUIRED_16)); }
	inline String_t* get_REQUIRED_16() const { return ___REQUIRED_16; }
	inline String_t** get_address_of_REQUIRED_16() { return &___REQUIRED_16; }
	inline void set_REQUIRED_16(String_t* value)
	{
		___REQUIRED_16 = value;
		Il2CppCodeGenWriteBarrier(&___REQUIRED_16, value);
	}

	inline static int32_t get_offset_of_INVALID_FORMAT_17() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___INVALID_FORMAT_17)); }
	inline String_t* get_INVALID_FORMAT_17() const { return ___INVALID_FORMAT_17; }
	inline String_t** get_address_of_INVALID_FORMAT_17() { return &___INVALID_FORMAT_17; }
	inline void set_INVALID_FORMAT_17(String_t* value)
	{
		___INVALID_FORMAT_17 = value;
		Il2CppCodeGenWriteBarrier(&___INVALID_FORMAT_17, value);
	}

	inline static int32_t get_offset_of_INVALID_VALUE_18() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___INVALID_VALUE_18)); }
	inline String_t* get_INVALID_VALUE_18() const { return ___INVALID_VALUE_18; }
	inline String_t** get_address_of_INVALID_VALUE_18() { return &___INVALID_VALUE_18; }
	inline void set_INVALID_VALUE_18(String_t* value)
	{
		___INVALID_VALUE_18 = value;
		Il2CppCodeGenWriteBarrier(&___INVALID_VALUE_18, value);
	}

	inline static int32_t get_offset_of_NOT_EXIST_19() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___NOT_EXIST_19)); }
	inline String_t* get_NOT_EXIST_19() const { return ___NOT_EXIST_19; }
	inline String_t** get_address_of_NOT_EXIST_19() { return &___NOT_EXIST_19; }
	inline void set_NOT_EXIST_19(String_t* value)
	{
		___NOT_EXIST_19 = value;
		Il2CppCodeGenWriteBarrier(&___NOT_EXIST_19, value);
	}

	inline static int32_t get_offset_of_RELATION_ERROR_20() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___RELATION_ERROR_20)); }
	inline String_t* get_RELATION_ERROR_20() const { return ___RELATION_ERROR_20; }
	inline String_t** get_address_of_RELATION_ERROR_20() { return &___RELATION_ERROR_20; }
	inline void set_RELATION_ERROR_20(String_t* value)
	{
		___RELATION_ERROR_20 = value;
		Il2CppCodeGenWriteBarrier(&___RELATION_ERROR_20, value);
	}

	inline static int32_t get_offset_of_INVALID_SIZE_21() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___INVALID_SIZE_21)); }
	inline String_t* get_INVALID_SIZE_21() const { return ___INVALID_SIZE_21; }
	inline String_t** get_address_of_INVALID_SIZE_21() { return &___INVALID_SIZE_21; }
	inline void set_INVALID_SIZE_21(String_t* value)
	{
		___INVALID_SIZE_21 = value;
		Il2CppCodeGenWriteBarrier(&___INVALID_SIZE_21, value);
	}

	inline static int32_t get_offset_of_INCORRECT_HEADER_22() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___INCORRECT_HEADER_22)); }
	inline String_t* get_INCORRECT_HEADER_22() const { return ___INCORRECT_HEADER_22; }
	inline String_t** get_address_of_INCORRECT_HEADER_22() { return &___INCORRECT_HEADER_22; }
	inline void set_INCORRECT_HEADER_22(String_t* value)
	{
		___INCORRECT_HEADER_22 = value;
		Il2CppCodeGenWriteBarrier(&___INCORRECT_HEADER_22, value);
	}

	inline static int32_t get_offset_of_INCORRECT_PASSWORD_23() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___INCORRECT_PASSWORD_23)); }
	inline String_t* get_INCORRECT_PASSWORD_23() const { return ___INCORRECT_PASSWORD_23; }
	inline String_t** get_address_of_INCORRECT_PASSWORD_23() { return &___INCORRECT_PASSWORD_23; }
	inline void set_INCORRECT_PASSWORD_23(String_t* value)
	{
		___INCORRECT_PASSWORD_23 = value;
		Il2CppCodeGenWriteBarrier(&___INCORRECT_PASSWORD_23, value);
	}

	inline static int32_t get_offset_of_OAUTH_ERROR_24() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___OAUTH_ERROR_24)); }
	inline String_t* get_OAUTH_ERROR_24() const { return ___OAUTH_ERROR_24; }
	inline String_t** get_address_of_OAUTH_ERROR_24() { return &___OAUTH_ERROR_24; }
	inline void set_OAUTH_ERROR_24(String_t* value)
	{
		___OAUTH_ERROR_24 = value;
		Il2CppCodeGenWriteBarrier(&___OAUTH_ERROR_24, value);
	}

	inline static int32_t get_offset_of_INVALID_ACL_25() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___INVALID_ACL_25)); }
	inline String_t* get_INVALID_ACL_25() const { return ___INVALID_ACL_25; }
	inline String_t** get_address_of_INVALID_ACL_25() { return &___INVALID_ACL_25; }
	inline void set_INVALID_ACL_25(String_t* value)
	{
		___INVALID_ACL_25 = value;
		Il2CppCodeGenWriteBarrier(&___INVALID_ACL_25, value);
	}

	inline static int32_t get_offset_of_INVALID_OPERATION_26() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___INVALID_OPERATION_26)); }
	inline String_t* get_INVALID_OPERATION_26() const { return ___INVALID_OPERATION_26; }
	inline String_t** get_address_of_INVALID_OPERATION_26() { return &___INVALID_OPERATION_26; }
	inline void set_INVALID_OPERATION_26(String_t* value)
	{
		___INVALID_OPERATION_26 = value;
		Il2CppCodeGenWriteBarrier(&___INVALID_OPERATION_26, value);
	}

	inline static int32_t get_offset_of_FORBIDDEN_OPERATION_27() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___FORBIDDEN_OPERATION_27)); }
	inline String_t* get_FORBIDDEN_OPERATION_27() const { return ___FORBIDDEN_OPERATION_27; }
	inline String_t** get_address_of_FORBIDDEN_OPERATION_27() { return &___FORBIDDEN_OPERATION_27; }
	inline void set_FORBIDDEN_OPERATION_27(String_t* value)
	{
		___FORBIDDEN_OPERATION_27 = value;
		Il2CppCodeGenWriteBarrier(&___FORBIDDEN_OPERATION_27, value);
	}

	inline static int32_t get_offset_of_INVALID_SETTING_28() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___INVALID_SETTING_28)); }
	inline String_t* get_INVALID_SETTING_28() const { return ___INVALID_SETTING_28; }
	inline String_t** get_address_of_INVALID_SETTING_28() { return &___INVALID_SETTING_28; }
	inline void set_INVALID_SETTING_28(String_t* value)
	{
		___INVALID_SETTING_28 = value;
		Il2CppCodeGenWriteBarrier(&___INVALID_SETTING_28, value);
	}

	inline static int32_t get_offset_of_INVALID_GEOPOINT_29() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___INVALID_GEOPOINT_29)); }
	inline String_t* get_INVALID_GEOPOINT_29() const { return ___INVALID_GEOPOINT_29; }
	inline String_t** get_address_of_INVALID_GEOPOINT_29() { return &___INVALID_GEOPOINT_29; }
	inline void set_INVALID_GEOPOINT_29(String_t* value)
	{
		___INVALID_GEOPOINT_29 = value;
		Il2CppCodeGenWriteBarrier(&___INVALID_GEOPOINT_29, value);
	}

	inline static int32_t get_offset_of_INVALID_METHOD_30() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___INVALID_METHOD_30)); }
	inline String_t* get_INVALID_METHOD_30() const { return ___INVALID_METHOD_30; }
	inline String_t** get_address_of_INVALID_METHOD_30() { return &___INVALID_METHOD_30; }
	inline void set_INVALID_METHOD_30(String_t* value)
	{
		___INVALID_METHOD_30 = value;
		Il2CppCodeGenWriteBarrier(&___INVALID_METHOD_30, value);
	}

	inline static int32_t get_offset_of_DUPPLICATION_ERROR_31() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___DUPPLICATION_ERROR_31)); }
	inline String_t* get_DUPPLICATION_ERROR_31() const { return ___DUPPLICATION_ERROR_31; }
	inline String_t** get_address_of_DUPPLICATION_ERROR_31() { return &___DUPPLICATION_ERROR_31; }
	inline void set_DUPPLICATION_ERROR_31(String_t* value)
	{
		___DUPPLICATION_ERROR_31 = value;
		Il2CppCodeGenWriteBarrier(&___DUPPLICATION_ERROR_31, value);
	}

	inline static int32_t get_offset_of_FILE_SIZE_ERROR_32() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___FILE_SIZE_ERROR_32)); }
	inline String_t* get_FILE_SIZE_ERROR_32() const { return ___FILE_SIZE_ERROR_32; }
	inline String_t** get_address_of_FILE_SIZE_ERROR_32() { return &___FILE_SIZE_ERROR_32; }
	inline void set_FILE_SIZE_ERROR_32(String_t* value)
	{
		___FILE_SIZE_ERROR_32 = value;
		Il2CppCodeGenWriteBarrier(&___FILE_SIZE_ERROR_32, value);
	}

	inline static int32_t get_offset_of_DOCUMENT_SIZE_ERROR_33() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___DOCUMENT_SIZE_ERROR_33)); }
	inline String_t* get_DOCUMENT_SIZE_ERROR_33() const { return ___DOCUMENT_SIZE_ERROR_33; }
	inline String_t** get_address_of_DOCUMENT_SIZE_ERROR_33() { return &___DOCUMENT_SIZE_ERROR_33; }
	inline void set_DOCUMENT_SIZE_ERROR_33(String_t* value)
	{
		___DOCUMENT_SIZE_ERROR_33 = value;
		Il2CppCodeGenWriteBarrier(&___DOCUMENT_SIZE_ERROR_33, value);
	}

	inline static int32_t get_offset_of_REQUEST_LIMIT_ERROR_34() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___REQUEST_LIMIT_ERROR_34)); }
	inline String_t* get_REQUEST_LIMIT_ERROR_34() const { return ___REQUEST_LIMIT_ERROR_34; }
	inline String_t** get_address_of_REQUEST_LIMIT_ERROR_34() { return &___REQUEST_LIMIT_ERROR_34; }
	inline void set_REQUEST_LIMIT_ERROR_34(String_t* value)
	{
		___REQUEST_LIMIT_ERROR_34 = value;
		Il2CppCodeGenWriteBarrier(&___REQUEST_LIMIT_ERROR_34, value);
	}

	inline static int32_t get_offset_of_UNSUPPORT_MEDIA_35() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___UNSUPPORT_MEDIA_35)); }
	inline String_t* get_UNSUPPORT_MEDIA_35() const { return ___UNSUPPORT_MEDIA_35; }
	inline String_t** get_address_of_UNSUPPORT_MEDIA_35() { return &___UNSUPPORT_MEDIA_35; }
	inline void set_UNSUPPORT_MEDIA_35(String_t* value)
	{
		___UNSUPPORT_MEDIA_35 = value;
		Il2CppCodeGenWriteBarrier(&___UNSUPPORT_MEDIA_35, value);
	}

	inline static int32_t get_offset_of_REQUEST_OVERLOAD_36() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___REQUEST_OVERLOAD_36)); }
	inline String_t* get_REQUEST_OVERLOAD_36() const { return ___REQUEST_OVERLOAD_36; }
	inline String_t** get_address_of_REQUEST_OVERLOAD_36() { return &___REQUEST_OVERLOAD_36; }
	inline void set_REQUEST_OVERLOAD_36(String_t* value)
	{
		___REQUEST_OVERLOAD_36 = value;
		Il2CppCodeGenWriteBarrier(&___REQUEST_OVERLOAD_36, value);
	}

	inline static int32_t get_offset_of_SYSTEM_ERROR_37() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___SYSTEM_ERROR_37)); }
	inline String_t* get_SYSTEM_ERROR_37() const { return ___SYSTEM_ERROR_37; }
	inline String_t** get_address_of_SYSTEM_ERROR_37() { return &___SYSTEM_ERROR_37; }
	inline void set_SYSTEM_ERROR_37(String_t* value)
	{
		___SYSTEM_ERROR_37 = value;
		Il2CppCodeGenWriteBarrier(&___SYSTEM_ERROR_37, value);
	}

	inline static int32_t get_offset_of_STORAGE_ERROR_38() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___STORAGE_ERROR_38)); }
	inline String_t* get_STORAGE_ERROR_38() const { return ___STORAGE_ERROR_38; }
	inline String_t** get_address_of_STORAGE_ERROR_38() { return &___STORAGE_ERROR_38; }
	inline void set_STORAGE_ERROR_38(String_t* value)
	{
		___STORAGE_ERROR_38 = value;
		Il2CppCodeGenWriteBarrier(&___STORAGE_ERROR_38, value);
	}

	inline static int32_t get_offset_of_MAIL_ERROR_39() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___MAIL_ERROR_39)); }
	inline String_t* get_MAIL_ERROR_39() const { return ___MAIL_ERROR_39; }
	inline String_t** get_address_of_MAIL_ERROR_39() { return &___MAIL_ERROR_39; }
	inline void set_MAIL_ERROR_39(String_t* value)
	{
		___MAIL_ERROR_39 = value;
		Il2CppCodeGenWriteBarrier(&___MAIL_ERROR_39, value);
	}

	inline static int32_t get_offset_of_DATABASE_ERROR_40() { return static_cast<int32_t>(offsetof(NCMBException_t1167303643_StaticFields, ___DATABASE_ERROR_40)); }
	inline String_t* get_DATABASE_ERROR_40() const { return ___DATABASE_ERROR_40; }
	inline String_t** get_address_of_DATABASE_ERROR_40() { return &___DATABASE_ERROR_40; }
	inline void set_DATABASE_ERROR_40(String_t* value)
	{
		___DATABASE_ERROR_40 = value;
		Il2CppCodeGenWriteBarrier(&___DATABASE_ERROR_40, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
