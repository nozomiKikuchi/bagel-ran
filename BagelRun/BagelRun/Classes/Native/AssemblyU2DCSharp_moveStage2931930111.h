#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// moveStage
struct  moveStage_t2931930111  : public MonoBehaviour_t1158329972
{
public:
	// System.Single moveStage::speed
	float ___speed_2;
	// System.Single moveStage::startPosition
	float ___startPosition_3;
	// System.Single moveStage::endPosition
	float ___endPosition_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(moveStage_t2931930111, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_startPosition_3() { return static_cast<int32_t>(offsetof(moveStage_t2931930111, ___startPosition_3)); }
	inline float get_startPosition_3() const { return ___startPosition_3; }
	inline float* get_address_of_startPosition_3() { return &___startPosition_3; }
	inline void set_startPosition_3(float value)
	{
		___startPosition_3 = value;
	}

	inline static int32_t get_offset_of_endPosition_4() { return static_cast<int32_t>(offsetof(moveStage_t2931930111, ___endPosition_4)); }
	inline float get_endPosition_4() const { return ___endPosition_4; }
	inline float* get_address_of_endPosition_4() { return &___endPosition_4; }
	inline void set_endPosition_4(float value)
	{
		___endPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
