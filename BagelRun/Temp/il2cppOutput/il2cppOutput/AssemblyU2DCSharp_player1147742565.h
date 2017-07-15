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

public:
	inline static int32_t get_offset_of__rigid_2() { return static_cast<int32_t>(offsetof(player_t1147742565, ____rigid_2)); }
	inline Rigidbody2D_t502193897 * get__rigid_2() const { return ____rigid_2; }
	inline Rigidbody2D_t502193897 ** get_address_of__rigid_2() { return &____rigid_2; }
	inline void set__rigid_2(Rigidbody2D_t502193897 * value)
	{
		____rigid_2 = value;
		Il2CppCodeGenWriteBarrier(&____rigid_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
