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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameClear
struct  GameClear_t122518785  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameClear::goal_ufo
	GameObject_t1756533147 * ___goal_ufo_2;
	// UnityEngine.GameObject GameClear::goal_right
	GameObject_t1756533147 * ___goal_right_3;

public:
	inline static int32_t get_offset_of_goal_ufo_2() { return static_cast<int32_t>(offsetof(GameClear_t122518785, ___goal_ufo_2)); }
	inline GameObject_t1756533147 * get_goal_ufo_2() const { return ___goal_ufo_2; }
	inline GameObject_t1756533147 ** get_address_of_goal_ufo_2() { return &___goal_ufo_2; }
	inline void set_goal_ufo_2(GameObject_t1756533147 * value)
	{
		___goal_ufo_2 = value;
		Il2CppCodeGenWriteBarrier(&___goal_ufo_2, value);
	}

	inline static int32_t get_offset_of_goal_right_3() { return static_cast<int32_t>(offsetof(GameClear_t122518785, ___goal_right_3)); }
	inline GameObject_t1756533147 * get_goal_right_3() const { return ___goal_right_3; }
	inline GameObject_t1756533147 ** get_address_of_goal_right_3() { return &___goal_right_3; }
	inline void set_goal_right_3(GameObject_t1756533147 * value)
	{
		___goal_right_3 = value;
		Il2CppCodeGenWriteBarrier(&___goal_right_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
