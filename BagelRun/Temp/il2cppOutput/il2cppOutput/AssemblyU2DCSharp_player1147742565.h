#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// player
struct  player_t1147742565  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D player::_rigid
	Rigidbody2D_t502193897 * ____rigid_2;
	// UnityEngine.GameObject player::goal_ufo
	GameObject_t1756533147 * ___goal_ufo_3;
	// UnityEngine.GameObject player::bagel
	GameObject_t1756533147 * ___bagel_4;
	// System.Int32 player::number
	int32_t ___number_5;
	// System.Int32 player::S
	int32_t ___S_6;
	// UnityEngine.AudioSource player::sound01
	AudioSource_t1135106623 * ___sound01_7;
	// UnityEngine.AudioSource player::sound02
	AudioSource_t1135106623 * ___sound02_8;

public:
	inline static int32_t get_offset_of__rigid_2() { return static_cast<int32_t>(offsetof(player_t1147742565, ____rigid_2)); }
	inline Rigidbody2D_t502193897 * get__rigid_2() const { return ____rigid_2; }
	inline Rigidbody2D_t502193897 ** get_address_of__rigid_2() { return &____rigid_2; }
	inline void set__rigid_2(Rigidbody2D_t502193897 * value)
	{
		____rigid_2 = value;
		Il2CppCodeGenWriteBarrier(&____rigid_2, value);
	}

	inline static int32_t get_offset_of_goal_ufo_3() { return static_cast<int32_t>(offsetof(player_t1147742565, ___goal_ufo_3)); }
	inline GameObject_t1756533147 * get_goal_ufo_3() const { return ___goal_ufo_3; }
	inline GameObject_t1756533147 ** get_address_of_goal_ufo_3() { return &___goal_ufo_3; }
	inline void set_goal_ufo_3(GameObject_t1756533147 * value)
	{
		___goal_ufo_3 = value;
		Il2CppCodeGenWriteBarrier(&___goal_ufo_3, value);
	}

	inline static int32_t get_offset_of_bagel_4() { return static_cast<int32_t>(offsetof(player_t1147742565, ___bagel_4)); }
	inline GameObject_t1756533147 * get_bagel_4() const { return ___bagel_4; }
	inline GameObject_t1756533147 ** get_address_of_bagel_4() { return &___bagel_4; }
	inline void set_bagel_4(GameObject_t1756533147 * value)
	{
		___bagel_4 = value;
		Il2CppCodeGenWriteBarrier(&___bagel_4, value);
	}

	inline static int32_t get_offset_of_number_5() { return static_cast<int32_t>(offsetof(player_t1147742565, ___number_5)); }
	inline int32_t get_number_5() const { return ___number_5; }
	inline int32_t* get_address_of_number_5() { return &___number_5; }
	inline void set_number_5(int32_t value)
	{
		___number_5 = value;
	}

	inline static int32_t get_offset_of_S_6() { return static_cast<int32_t>(offsetof(player_t1147742565, ___S_6)); }
	inline int32_t get_S_6() const { return ___S_6; }
	inline int32_t* get_address_of_S_6() { return &___S_6; }
	inline void set_S_6(int32_t value)
	{
		___S_6 = value;
	}

	inline static int32_t get_offset_of_sound01_7() { return static_cast<int32_t>(offsetof(player_t1147742565, ___sound01_7)); }
	inline AudioSource_t1135106623 * get_sound01_7() const { return ___sound01_7; }
	inline AudioSource_t1135106623 ** get_address_of_sound01_7() { return &___sound01_7; }
	inline void set_sound01_7(AudioSource_t1135106623 * value)
	{
		___sound01_7 = value;
		Il2CppCodeGenWriteBarrier(&___sound01_7, value);
	}

	inline static int32_t get_offset_of_sound02_8() { return static_cast<int32_t>(offsetof(player_t1147742565, ___sound02_8)); }
	inline AudioSource_t1135106623 * get_sound02_8() const { return ___sound02_8; }
	inline AudioSource_t1135106623 ** get_address_of_sound02_8() { return &___sound02_8; }
	inline void set_sound02_8(AudioSource_t1135106623 * value)
	{
		___sound02_8 = value;
		Il2CppCodeGenWriteBarrier(&___sound02_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
