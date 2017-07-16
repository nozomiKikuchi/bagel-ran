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

// MainStart
struct  MainStart_t3226110189  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MainStart::bagel
	GameObject_t1756533147 * ___bagel_2;
	// UnityEngine.GameObject MainStart::ufo
	GameObject_t1756533147 * ___ufo_3;
	// UnityEngine.GameObject MainStart::uforight
	GameObject_t1756533147 * ___uforight_4;
	// System.Int32 MainStart::start
	int32_t ___start_5;

public:
	inline static int32_t get_offset_of_bagel_2() { return static_cast<int32_t>(offsetof(MainStart_t3226110189, ___bagel_2)); }
	inline GameObject_t1756533147 * get_bagel_2() const { return ___bagel_2; }
	inline GameObject_t1756533147 ** get_address_of_bagel_2() { return &___bagel_2; }
	inline void set_bagel_2(GameObject_t1756533147 * value)
	{
		___bagel_2 = value;
		Il2CppCodeGenWriteBarrier(&___bagel_2, value);
	}

	inline static int32_t get_offset_of_ufo_3() { return static_cast<int32_t>(offsetof(MainStart_t3226110189, ___ufo_3)); }
	inline GameObject_t1756533147 * get_ufo_3() const { return ___ufo_3; }
	inline GameObject_t1756533147 ** get_address_of_ufo_3() { return &___ufo_3; }
	inline void set_ufo_3(GameObject_t1756533147 * value)
	{
		___ufo_3 = value;
		Il2CppCodeGenWriteBarrier(&___ufo_3, value);
	}

	inline static int32_t get_offset_of_uforight_4() { return static_cast<int32_t>(offsetof(MainStart_t3226110189, ___uforight_4)); }
	inline GameObject_t1756533147 * get_uforight_4() const { return ___uforight_4; }
	inline GameObject_t1756533147 ** get_address_of_uforight_4() { return &___uforight_4; }
	inline void set_uforight_4(GameObject_t1756533147 * value)
	{
		___uforight_4 = value;
		Il2CppCodeGenWriteBarrier(&___uforight_4, value);
	}

	inline static int32_t get_offset_of_start_5() { return static_cast<int32_t>(offsetof(MainStart_t3226110189, ___start_5)); }
	inline int32_t get_start_5() const { return ___start_5; }
	inline int32_t* get_address_of_start_5() { return &___start_5; }
	inline void set_start_5(int32_t value)
	{
		___start_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
