#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Slider
struct Slider_t297367283;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SliderController
struct  SliderController_t2812089311  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Slider SliderController::slider
	Slider_t297367283 * ___slider_2;
	// System.Single SliderController::param
	float ___param_3;
	// System.Single SliderController::max1
	float ___max1_4;
	// System.Single SliderController::max2
	float ___max2_5;
	// System.Single SliderController::max3
	float ___max3_6;

public:
	inline static int32_t get_offset_of_slider_2() { return static_cast<int32_t>(offsetof(SliderController_t2812089311, ___slider_2)); }
	inline Slider_t297367283 * get_slider_2() const { return ___slider_2; }
	inline Slider_t297367283 ** get_address_of_slider_2() { return &___slider_2; }
	inline void set_slider_2(Slider_t297367283 * value)
	{
		___slider_2 = value;
		Il2CppCodeGenWriteBarrier(&___slider_2, value);
	}

	inline static int32_t get_offset_of_param_3() { return static_cast<int32_t>(offsetof(SliderController_t2812089311, ___param_3)); }
	inline float get_param_3() const { return ___param_3; }
	inline float* get_address_of_param_3() { return &___param_3; }
	inline void set_param_3(float value)
	{
		___param_3 = value;
	}

	inline static int32_t get_offset_of_max1_4() { return static_cast<int32_t>(offsetof(SliderController_t2812089311, ___max1_4)); }
	inline float get_max1_4() const { return ___max1_4; }
	inline float* get_address_of_max1_4() { return &___max1_4; }
	inline void set_max1_4(float value)
	{
		___max1_4 = value;
	}

	inline static int32_t get_offset_of_max2_5() { return static_cast<int32_t>(offsetof(SliderController_t2812089311, ___max2_5)); }
	inline float get_max2_5() const { return ___max2_5; }
	inline float* get_address_of_max2_5() { return &___max2_5; }
	inline void set_max2_5(float value)
	{
		___max2_5 = value;
	}

	inline static int32_t get_offset_of_max3_6() { return static_cast<int32_t>(offsetof(SliderController_t2812089311, ___max3_6)); }
	inline float get_max3_6() const { return ___max3_6; }
	inline float* get_address_of_max3_6() { return &___max3_6; }
	inline void set_max3_6(float value)
	{
		___max3_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
