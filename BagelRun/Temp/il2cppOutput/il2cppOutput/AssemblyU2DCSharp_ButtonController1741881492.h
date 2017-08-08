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

// ButtonController
struct  ButtonController_t1741881492  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ButtonController::titleLogo
	GameObject_t1756533147 * ___titleLogo_2;
	// System.Single ButtonController::currentRemainTime
	float ___currentRemainTime_3;
	// UnityEngine.SpriteRenderer ButtonController::spRenderer
	SpriteRenderer_t1209076198 * ___spRenderer_4;
	// System.Single ButtonController::fadeTime
	float ___fadeTime_5;

public:
	inline static int32_t get_offset_of_titleLogo_2() { return static_cast<int32_t>(offsetof(ButtonController_t1741881492, ___titleLogo_2)); }
	inline GameObject_t1756533147 * get_titleLogo_2() const { return ___titleLogo_2; }
	inline GameObject_t1756533147 ** get_address_of_titleLogo_2() { return &___titleLogo_2; }
	inline void set_titleLogo_2(GameObject_t1756533147 * value)
	{
		___titleLogo_2 = value;
		Il2CppCodeGenWriteBarrier(&___titleLogo_2, value);
	}

	inline static int32_t get_offset_of_currentRemainTime_3() { return static_cast<int32_t>(offsetof(ButtonController_t1741881492, ___currentRemainTime_3)); }
	inline float get_currentRemainTime_3() const { return ___currentRemainTime_3; }
	inline float* get_address_of_currentRemainTime_3() { return &___currentRemainTime_3; }
	inline void set_currentRemainTime_3(float value)
	{
		___currentRemainTime_3 = value;
	}

	inline static int32_t get_offset_of_spRenderer_4() { return static_cast<int32_t>(offsetof(ButtonController_t1741881492, ___spRenderer_4)); }
	inline SpriteRenderer_t1209076198 * get_spRenderer_4() const { return ___spRenderer_4; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spRenderer_4() { return &___spRenderer_4; }
	inline void set_spRenderer_4(SpriteRenderer_t1209076198 * value)
	{
		___spRenderer_4 = value;
		Il2CppCodeGenWriteBarrier(&___spRenderer_4, value);
	}

	inline static int32_t get_offset_of_fadeTime_5() { return static_cast<int32_t>(offsetof(ButtonController_t1741881492, ___fadeTime_5)); }
	inline float get_fadeTime_5() const { return ___fadeTime_5; }
	inline float* get_address_of_fadeTime_5() { return &___fadeTime_5; }
	inline void set_fadeTime_5(float value)
	{
		___fadeTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
