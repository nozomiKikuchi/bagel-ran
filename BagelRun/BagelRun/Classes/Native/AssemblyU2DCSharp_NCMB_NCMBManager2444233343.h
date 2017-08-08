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
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;
// NCMB.NCMBManager/OnRegistrationDelegate
struct OnRegistrationDelegate_t2590705843;
// NCMB.NCMBManager/OnNotificationReceivedDelegate
struct OnNotificationReceivedDelegate_t154800424;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBManager
struct  NCMBManager_t2444233343  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct NCMBManager_t2444233343_StaticFields
{
public:
	// System.Boolean NCMB.NCMBManager::<Inited>k__BackingField
	bool ___U3CInitedU3Ek__BackingField_3;
	// System.String NCMB.NCMBManager::_token
	String_t* ____token_4;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> NCMB.NCMBManager::installationDefaultProperty
	Il2CppObject* ___installationDefaultProperty_5;
	// NCMB.NCMBManager/OnRegistrationDelegate NCMB.NCMBManager::onRegistration
	OnRegistrationDelegate_t2590705843 * ___onRegistration_6;
	// NCMB.NCMBManager/OnNotificationReceivedDelegate NCMB.NCMBManager::onNotificationReceived
	OnNotificationReceivedDelegate_t154800424 * ___onNotificationReceived_7;

public:
	inline static int32_t get_offset_of_U3CInitedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(NCMBManager_t2444233343_StaticFields, ___U3CInitedU3Ek__BackingField_3)); }
	inline bool get_U3CInitedU3Ek__BackingField_3() const { return ___U3CInitedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CInitedU3Ek__BackingField_3() { return &___U3CInitedU3Ek__BackingField_3; }
	inline void set_U3CInitedU3Ek__BackingField_3(bool value)
	{
		___U3CInitedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of__token_4() { return static_cast<int32_t>(offsetof(NCMBManager_t2444233343_StaticFields, ____token_4)); }
	inline String_t* get__token_4() const { return ____token_4; }
	inline String_t** get_address_of__token_4() { return &____token_4; }
	inline void set__token_4(String_t* value)
	{
		____token_4 = value;
		Il2CppCodeGenWriteBarrier(&____token_4, value);
	}

	inline static int32_t get_offset_of_installationDefaultProperty_5() { return static_cast<int32_t>(offsetof(NCMBManager_t2444233343_StaticFields, ___installationDefaultProperty_5)); }
	inline Il2CppObject* get_installationDefaultProperty_5() const { return ___installationDefaultProperty_5; }
	inline Il2CppObject** get_address_of_installationDefaultProperty_5() { return &___installationDefaultProperty_5; }
	inline void set_installationDefaultProperty_5(Il2CppObject* value)
	{
		___installationDefaultProperty_5 = value;
		Il2CppCodeGenWriteBarrier(&___installationDefaultProperty_5, value);
	}

	inline static int32_t get_offset_of_onRegistration_6() { return static_cast<int32_t>(offsetof(NCMBManager_t2444233343_StaticFields, ___onRegistration_6)); }
	inline OnRegistrationDelegate_t2590705843 * get_onRegistration_6() const { return ___onRegistration_6; }
	inline OnRegistrationDelegate_t2590705843 ** get_address_of_onRegistration_6() { return &___onRegistration_6; }
	inline void set_onRegistration_6(OnRegistrationDelegate_t2590705843 * value)
	{
		___onRegistration_6 = value;
		Il2CppCodeGenWriteBarrier(&___onRegistration_6, value);
	}

	inline static int32_t get_offset_of_onNotificationReceived_7() { return static_cast<int32_t>(offsetof(NCMBManager_t2444233343_StaticFields, ___onNotificationReceived_7)); }
	inline OnNotificationReceivedDelegate_t154800424 * get_onNotificationReceived_7() const { return ___onNotificationReceived_7; }
	inline OnNotificationReceivedDelegate_t154800424 ** get_address_of_onNotificationReceived_7() { return &___onNotificationReceived_7; }
	inline void set_onNotificationReceived_7(OnNotificationReceivedDelegate_t154800424 * value)
	{
		___onNotificationReceived_7 = value;
		Il2CppCodeGenWriteBarrier(&___onNotificationReceived_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
