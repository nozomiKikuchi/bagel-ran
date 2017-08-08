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
// UnityEngine.EdgeCollider2D
struct EdgeCollider2D_t216857133;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainStart
struct  MainStart_t3226110189  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MainStart::ufo
	GameObject_t1756533147 * ___ufo_2;
	// UnityEngine.GameObject MainStart::uforight
	GameObject_t1756533147 * ___uforight_3;
	// UnityEngine.GameObject MainStart::goal_ufo
	GameObject_t1756533147 * ___goal_ufo_4;
	// UnityEngine.EdgeCollider2D MainStart::ufo_c
	EdgeCollider2D_t216857133 * ___ufo_c_5;
	// System.Int32 MainStart::start
	int32_t ___start_6;
	// System.Int32 MainStart::stop
	int32_t ___stop_7;
	// System.Int32 MainStart::right
	int32_t ___right_8;
	// UnityEngine.AudioSource MainStart::sound
	AudioSource_t1135106623 * ___sound_9;

public:
	inline static int32_t get_offset_of_ufo_2() { return static_cast<int32_t>(offsetof(MainStart_t3226110189, ___ufo_2)); }
	inline GameObject_t1756533147 * get_ufo_2() const { return ___ufo_2; }
	inline GameObject_t1756533147 ** get_address_of_ufo_2() { return &___ufo_2; }
	inline void set_ufo_2(GameObject_t1756533147 * value)
	{
		___ufo_2 = value;
		Il2CppCodeGenWriteBarrier(&___ufo_2, value);
	}

	inline static int32_t get_offset_of_uforight_3() { return static_cast<int32_t>(offsetof(MainStart_t3226110189, ___uforight_3)); }
	inline GameObject_t1756533147 * get_uforight_3() const { return ___uforight_3; }
	inline GameObject_t1756533147 ** get_address_of_uforight_3() { return &___uforight_3; }
	inline void set_uforight_3(GameObject_t1756533147 * value)
	{
		___uforight_3 = value;
		Il2CppCodeGenWriteBarrier(&___uforight_3, value);
	}

	inline static int32_t get_offset_of_goal_ufo_4() { return static_cast<int32_t>(offsetof(MainStart_t3226110189, ___goal_ufo_4)); }
	inline GameObject_t1756533147 * get_goal_ufo_4() const { return ___goal_ufo_4; }
	inline GameObject_t1756533147 ** get_address_of_goal_ufo_4() { return &___goal_ufo_4; }
	inline void set_goal_ufo_4(GameObject_t1756533147 * value)
	{
		___goal_ufo_4 = value;
		Il2CppCodeGenWriteBarrier(&___goal_ufo_4, value);
	}

	inline static int32_t get_offset_of_ufo_c_5() { return static_cast<int32_t>(offsetof(MainStart_t3226110189, ___ufo_c_5)); }
	inline EdgeCollider2D_t216857133 * get_ufo_c_5() const { return ___ufo_c_5; }
	inline EdgeCollider2D_t216857133 ** get_address_of_ufo_c_5() { return &___ufo_c_5; }
	inline void set_ufo_c_5(EdgeCollider2D_t216857133 * value)
	{
		___ufo_c_5 = value;
		Il2CppCodeGenWriteBarrier(&___ufo_c_5, value);
	}

	inline static int32_t get_offset_of_start_6() { return static_cast<int32_t>(offsetof(MainStart_t3226110189, ___start_6)); }
	inline int32_t get_start_6() const { return ___start_6; }
	inline int32_t* get_address_of_start_6() { return &___start_6; }
	inline void set_start_6(int32_t value)
	{
		___start_6 = value;
	}

	inline static int32_t get_offset_of_stop_7() { return static_cast<int32_t>(offsetof(MainStart_t3226110189, ___stop_7)); }
	inline int32_t get_stop_7() const { return ___stop_7; }
	inline int32_t* get_address_of_stop_7() { return &___stop_7; }
	inline void set_stop_7(int32_t value)
	{
		___stop_7 = value;
	}

	inline static int32_t get_offset_of_right_8() { return static_cast<int32_t>(offsetof(MainStart_t3226110189, ___right_8)); }
	inline int32_t get_right_8() const { return ___right_8; }
	inline int32_t* get_address_of_right_8() { return &___right_8; }
	inline void set_right_8(int32_t value)
	{
		___right_8 = value;
	}

	inline static int32_t get_offset_of_sound_9() { return static_cast<int32_t>(offsetof(MainStart_t3226110189, ___sound_9)); }
	inline AudioSource_t1135106623 * get_sound_9() const { return ___sound_9; }
	inline AudioSource_t1135106623 ** get_address_of_sound_9() { return &___sound_9; }
	inline void set_sound_9(AudioSource_t1135106623 * value)
	{
		___sound_9 = value;
		Il2CppCodeGenWriteBarrier(&___sound_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
