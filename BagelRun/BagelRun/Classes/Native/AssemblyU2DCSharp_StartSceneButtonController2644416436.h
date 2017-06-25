#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartSceneButtonController
struct  StartSceneButtonController_t2644416436  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject StartSceneButtonController::bagel
	GameObject_t1756533147 * ___bagel_2;
	// UnityEngine.GameObject StartSceneButtonController::run
	GameObject_t1756533147 * ___run_3;
	// System.Single StartSceneButtonController::currentRemainTime
	float ___currentRemainTime_4;
	// UnityEngine.SpriteRenderer StartSceneButtonController::spRenderer
	SpriteRenderer_t1209076198 * ___spRenderer_5;
	// System.Single StartSceneButtonController::fadeTime
	float ___fadeTime_6;

public:
	inline static int32_t get_offset_of_bagel_2() { return static_cast<int32_t>(offsetof(StartSceneButtonController_t2644416436, ___bagel_2)); }
	inline GameObject_t1756533147 * get_bagel_2() const { return ___bagel_2; }
	inline GameObject_t1756533147 ** get_address_of_bagel_2() { return &___bagel_2; }
	inline void set_bagel_2(GameObject_t1756533147 * value)
	{
		___bagel_2 = value;
		Il2CppCodeGenWriteBarrier(&___bagel_2, value);
	}

	inline static int32_t get_offset_of_run_3() { return static_cast<int32_t>(offsetof(StartSceneButtonController_t2644416436, ___run_3)); }
	inline GameObject_t1756533147 * get_run_3() const { return ___run_3; }
	inline GameObject_t1756533147 ** get_address_of_run_3() { return &___run_3; }
	inline void set_run_3(GameObject_t1756533147 * value)
	{
		___run_3 = value;
		Il2CppCodeGenWriteBarrier(&___run_3, value);
	}

	inline static int32_t get_offset_of_currentRemainTime_4() { return static_cast<int32_t>(offsetof(StartSceneButtonController_t2644416436, ___currentRemainTime_4)); }
	inline float get_currentRemainTime_4() const { return ___currentRemainTime_4; }
	inline float* get_address_of_currentRemainTime_4() { return &___currentRemainTime_4; }
	inline void set_currentRemainTime_4(float value)
	{
		___currentRemainTime_4 = value;
	}

	inline static int32_t get_offset_of_spRenderer_5() { return static_cast<int32_t>(offsetof(StartSceneButtonController_t2644416436, ___spRenderer_5)); }
	inline SpriteRenderer_t1209076198 * get_spRenderer_5() const { return ___spRenderer_5; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spRenderer_5() { return &___spRenderer_5; }
	inline void set_spRenderer_5(SpriteRenderer_t1209076198 * value)
	{
		___spRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___spRenderer_5, value);
	}

	inline static int32_t get_offset_of_fadeTime_6() { return static_cast<int32_t>(offsetof(StartSceneButtonController_t2644416436, ___fadeTime_6)); }
	inline float get_fadeTime_6() const { return ___fadeTime_6; }
	inline float* get_address_of_fadeTime_6() { return &___fadeTime_6; }
	inline void set_fadeTime_6(float value)
	{
		___fadeTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
