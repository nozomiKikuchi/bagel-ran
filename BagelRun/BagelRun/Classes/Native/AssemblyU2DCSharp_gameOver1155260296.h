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

// gameOver
struct  gameOver_t1155260296  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject gameOver::text
	GameObject_t1756533147 * ___text_2;
	// UnityEngine.GameObject gameOver::reset
	GameObject_t1756533147 * ___reset_3;
	// UnityEngine.GameObject gameOver::home
	GameObject_t1756533147 * ___home_4;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(gameOver_t1155260296, ___text_2)); }
	inline GameObject_t1756533147 * get_text_2() const { return ___text_2; }
	inline GameObject_t1756533147 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(GameObject_t1756533147 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_reset_3() { return static_cast<int32_t>(offsetof(gameOver_t1155260296, ___reset_3)); }
	inline GameObject_t1756533147 * get_reset_3() const { return ___reset_3; }
	inline GameObject_t1756533147 ** get_address_of_reset_3() { return &___reset_3; }
	inline void set_reset_3(GameObject_t1756533147 * value)
	{
		___reset_3 = value;
		Il2CppCodeGenWriteBarrier(&___reset_3, value);
	}

	inline static int32_t get_offset_of_home_4() { return static_cast<int32_t>(offsetof(gameOver_t1155260296, ___home_4)); }
	inline GameObject_t1756533147 * get_home_4() const { return ___home_4; }
	inline GameObject_t1756533147 ** get_address_of_home_4() { return &___home_4; }
	inline void set_home_4(GameObject_t1756533147 * value)
	{
		___home_4 = value;
		Il2CppCodeGenWriteBarrier(&___home_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
