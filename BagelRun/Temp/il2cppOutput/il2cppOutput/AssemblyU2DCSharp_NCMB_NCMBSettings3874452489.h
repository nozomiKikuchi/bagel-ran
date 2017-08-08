#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBSettings
struct  NCMBSettings_t3874452489  : public MonoBehaviour_t1158329972
{
public:
	// System.String NCMB.NCMBSettings::applicationKey
	String_t* ___applicationKey_11;
	// System.String NCMB.NCMBSettings::clientKey
	String_t* ___clientKey_12;
	// System.Boolean NCMB.NCMBSettings::usePush
	bool ___usePush_13;
	// System.Boolean NCMB.NCMBSettings::useAnalytics
	bool ___useAnalytics_14;
	// System.String NCMB.NCMBSettings::androidSenderId
	String_t* ___androidSenderId_15;
	// System.Boolean NCMB.NCMBSettings::responseValidation
	bool ___responseValidation_16;
	// System.String NCMB.NCMBSettings::domainURL
	String_t* ___domainURL_17;
	// System.String NCMB.NCMBSettings::apiVersion
	String_t* ___apiVersion_18;

public:
	inline static int32_t get_offset_of_applicationKey_11() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489, ___applicationKey_11)); }
	inline String_t* get_applicationKey_11() const { return ___applicationKey_11; }
	inline String_t** get_address_of_applicationKey_11() { return &___applicationKey_11; }
	inline void set_applicationKey_11(String_t* value)
	{
		___applicationKey_11 = value;
		Il2CppCodeGenWriteBarrier(&___applicationKey_11, value);
	}

	inline static int32_t get_offset_of_clientKey_12() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489, ___clientKey_12)); }
	inline String_t* get_clientKey_12() const { return ___clientKey_12; }
	inline String_t** get_address_of_clientKey_12() { return &___clientKey_12; }
	inline void set_clientKey_12(String_t* value)
	{
		___clientKey_12 = value;
		Il2CppCodeGenWriteBarrier(&___clientKey_12, value);
	}

	inline static int32_t get_offset_of_usePush_13() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489, ___usePush_13)); }
	inline bool get_usePush_13() const { return ___usePush_13; }
	inline bool* get_address_of_usePush_13() { return &___usePush_13; }
	inline void set_usePush_13(bool value)
	{
		___usePush_13 = value;
	}

	inline static int32_t get_offset_of_useAnalytics_14() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489, ___useAnalytics_14)); }
	inline bool get_useAnalytics_14() const { return ___useAnalytics_14; }
	inline bool* get_address_of_useAnalytics_14() { return &___useAnalytics_14; }
	inline void set_useAnalytics_14(bool value)
	{
		___useAnalytics_14 = value;
	}

	inline static int32_t get_offset_of_androidSenderId_15() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489, ___androidSenderId_15)); }
	inline String_t* get_androidSenderId_15() const { return ___androidSenderId_15; }
	inline String_t** get_address_of_androidSenderId_15() { return &___androidSenderId_15; }
	inline void set_androidSenderId_15(String_t* value)
	{
		___androidSenderId_15 = value;
		Il2CppCodeGenWriteBarrier(&___androidSenderId_15, value);
	}

	inline static int32_t get_offset_of_responseValidation_16() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489, ___responseValidation_16)); }
	inline bool get_responseValidation_16() const { return ___responseValidation_16; }
	inline bool* get_address_of_responseValidation_16() { return &___responseValidation_16; }
	inline void set_responseValidation_16(bool value)
	{
		___responseValidation_16 = value;
	}

	inline static int32_t get_offset_of_domainURL_17() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489, ___domainURL_17)); }
	inline String_t* get_domainURL_17() const { return ___domainURL_17; }
	inline String_t** get_address_of_domainURL_17() { return &___domainURL_17; }
	inline void set_domainURL_17(String_t* value)
	{
		___domainURL_17 = value;
		Il2CppCodeGenWriteBarrier(&___domainURL_17, value);
	}

	inline static int32_t get_offset_of_apiVersion_18() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489, ___apiVersion_18)); }
	inline String_t* get_apiVersion_18() const { return ___apiVersion_18; }
	inline String_t** get_address_of_apiVersion_18() { return &___apiVersion_18; }
	inline void set_apiVersion_18(String_t* value)
	{
		___apiVersion_18 = value;
		Il2CppCodeGenWriteBarrier(&___apiVersion_18, value);
	}
};

struct NCMBSettings_t3874452489_StaticFields
{
public:
	// System.String NCMB.NCMBSettings::_applicationKey
	String_t* ____applicationKey_2;
	// System.String NCMB.NCMBSettings::_clientKey
	String_t* ____clientKey_3;
	// System.String NCMB.NCMBSettings::_androidSenderId
	String_t* ____androidSenderId_4;
	// System.Boolean NCMB.NCMBSettings::_responseValidationFlag
	bool ____responseValidationFlag_5;
	// System.Boolean NCMB.NCMBSettings::_isInitialized
	bool ____isInitialized_6;
	// System.Boolean NCMB.NCMBSettings::_usePush
	bool ____usePush_7;
	// System.Boolean NCMB.NCMBSettings::_useAnalytics
	bool ____useAnalytics_8;
	// System.String NCMB.NCMBSettings::_domainURL
	String_t* ____domainURL_9;
	// System.String NCMB.NCMBSettings::_apiVersion
	String_t* ____apiVersion_10;
	// System.String NCMB.NCMBSettings::_currentUser
	String_t* ____currentUser_19;
	// System.String NCMB.NCMBSettings::filePath
	String_t* ___filePath_20;
	// System.String NCMB.NCMBSettings::currentInstallationPath
	String_t* ___currentInstallationPath_21;

public:
	inline static int32_t get_offset_of__applicationKey_2() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489_StaticFields, ____applicationKey_2)); }
	inline String_t* get__applicationKey_2() const { return ____applicationKey_2; }
	inline String_t** get_address_of__applicationKey_2() { return &____applicationKey_2; }
	inline void set__applicationKey_2(String_t* value)
	{
		____applicationKey_2 = value;
		Il2CppCodeGenWriteBarrier(&____applicationKey_2, value);
	}

	inline static int32_t get_offset_of__clientKey_3() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489_StaticFields, ____clientKey_3)); }
	inline String_t* get__clientKey_3() const { return ____clientKey_3; }
	inline String_t** get_address_of__clientKey_3() { return &____clientKey_3; }
	inline void set__clientKey_3(String_t* value)
	{
		____clientKey_3 = value;
		Il2CppCodeGenWriteBarrier(&____clientKey_3, value);
	}

	inline static int32_t get_offset_of__androidSenderId_4() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489_StaticFields, ____androidSenderId_4)); }
	inline String_t* get__androidSenderId_4() const { return ____androidSenderId_4; }
	inline String_t** get_address_of__androidSenderId_4() { return &____androidSenderId_4; }
	inline void set__androidSenderId_4(String_t* value)
	{
		____androidSenderId_4 = value;
		Il2CppCodeGenWriteBarrier(&____androidSenderId_4, value);
	}

	inline static int32_t get_offset_of__responseValidationFlag_5() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489_StaticFields, ____responseValidationFlag_5)); }
	inline bool get__responseValidationFlag_5() const { return ____responseValidationFlag_5; }
	inline bool* get_address_of__responseValidationFlag_5() { return &____responseValidationFlag_5; }
	inline void set__responseValidationFlag_5(bool value)
	{
		____responseValidationFlag_5 = value;
	}

	inline static int32_t get_offset_of__isInitialized_6() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489_StaticFields, ____isInitialized_6)); }
	inline bool get__isInitialized_6() const { return ____isInitialized_6; }
	inline bool* get_address_of__isInitialized_6() { return &____isInitialized_6; }
	inline void set__isInitialized_6(bool value)
	{
		____isInitialized_6 = value;
	}

	inline static int32_t get_offset_of__usePush_7() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489_StaticFields, ____usePush_7)); }
	inline bool get__usePush_7() const { return ____usePush_7; }
	inline bool* get_address_of__usePush_7() { return &____usePush_7; }
	inline void set__usePush_7(bool value)
	{
		____usePush_7 = value;
	}

	inline static int32_t get_offset_of__useAnalytics_8() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489_StaticFields, ____useAnalytics_8)); }
	inline bool get__useAnalytics_8() const { return ____useAnalytics_8; }
	inline bool* get_address_of__useAnalytics_8() { return &____useAnalytics_8; }
	inline void set__useAnalytics_8(bool value)
	{
		____useAnalytics_8 = value;
	}

	inline static int32_t get_offset_of__domainURL_9() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489_StaticFields, ____domainURL_9)); }
	inline String_t* get__domainURL_9() const { return ____domainURL_9; }
	inline String_t** get_address_of__domainURL_9() { return &____domainURL_9; }
	inline void set__domainURL_9(String_t* value)
	{
		____domainURL_9 = value;
		Il2CppCodeGenWriteBarrier(&____domainURL_9, value);
	}

	inline static int32_t get_offset_of__apiVersion_10() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489_StaticFields, ____apiVersion_10)); }
	inline String_t* get__apiVersion_10() const { return ____apiVersion_10; }
	inline String_t** get_address_of__apiVersion_10() { return &____apiVersion_10; }
	inline void set__apiVersion_10(String_t* value)
	{
		____apiVersion_10 = value;
		Il2CppCodeGenWriteBarrier(&____apiVersion_10, value);
	}

	inline static int32_t get_offset_of__currentUser_19() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489_StaticFields, ____currentUser_19)); }
	inline String_t* get__currentUser_19() const { return ____currentUser_19; }
	inline String_t** get_address_of__currentUser_19() { return &____currentUser_19; }
	inline void set__currentUser_19(String_t* value)
	{
		____currentUser_19 = value;
		Il2CppCodeGenWriteBarrier(&____currentUser_19, value);
	}

	inline static int32_t get_offset_of_filePath_20() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489_StaticFields, ___filePath_20)); }
	inline String_t* get_filePath_20() const { return ___filePath_20; }
	inline String_t** get_address_of_filePath_20() { return &___filePath_20; }
	inline void set_filePath_20(String_t* value)
	{
		___filePath_20 = value;
		Il2CppCodeGenWriteBarrier(&___filePath_20, value);
	}

	inline static int32_t get_offset_of_currentInstallationPath_21() { return static_cast<int32_t>(offsetof(NCMBSettings_t3874452489_StaticFields, ___currentInstallationPath_21)); }
	inline String_t* get_currentInstallationPath_21() const { return ___currentInstallationPath_21; }
	inline String_t** get_address_of_currentInstallationPath_21() { return &___currentInstallationPath_21; }
	inline void set_currentInstallationPath_21(String_t* value)
	{
		___currentInstallationPath_21 = value;
		Il2CppCodeGenWriteBarrier(&___currentInstallationPath_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
