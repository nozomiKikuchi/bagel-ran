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

// MovePanel
struct  MovePanel_t3417660653  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MovePanel::look
	GameObject_t1756533147 * ___look_2;
	// UnityEngine.GameObject MovePanel::redPanel
	GameObject_t1756533147 * ___redPanel_3;
	// UnityEngine.GameObject MovePanel::bluePanel
	GameObject_t1756533147 * ___bluePanel_4;
	// UnityEngine.GameObject MovePanel::greenPanel
	GameObject_t1756533147 * ___greenPanel_5;

public:
	inline static int32_t get_offset_of_look_2() { return static_cast<int32_t>(offsetof(MovePanel_t3417660653, ___look_2)); }
	inline GameObject_t1756533147 * get_look_2() const { return ___look_2; }
	inline GameObject_t1756533147 ** get_address_of_look_2() { return &___look_2; }
	inline void set_look_2(GameObject_t1756533147 * value)
	{
		___look_2 = value;
		Il2CppCodeGenWriteBarrier(&___look_2, value);
	}

	inline static int32_t get_offset_of_redPanel_3() { return static_cast<int32_t>(offsetof(MovePanel_t3417660653, ___redPanel_3)); }
	inline GameObject_t1756533147 * get_redPanel_3() const { return ___redPanel_3; }
	inline GameObject_t1756533147 ** get_address_of_redPanel_3() { return &___redPanel_3; }
	inline void set_redPanel_3(GameObject_t1756533147 * value)
	{
		___redPanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___redPanel_3, value);
	}

	inline static int32_t get_offset_of_bluePanel_4() { return static_cast<int32_t>(offsetof(MovePanel_t3417660653, ___bluePanel_4)); }
	inline GameObject_t1756533147 * get_bluePanel_4() const { return ___bluePanel_4; }
	inline GameObject_t1756533147 ** get_address_of_bluePanel_4() { return &___bluePanel_4; }
	inline void set_bluePanel_4(GameObject_t1756533147 * value)
	{
		___bluePanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___bluePanel_4, value);
	}

	inline static int32_t get_offset_of_greenPanel_5() { return static_cast<int32_t>(offsetof(MovePanel_t3417660653, ___greenPanel_5)); }
	inline GameObject_t1756533147 * get_greenPanel_5() const { return ___greenPanel_5; }
	inline GameObject_t1756533147 ** get_address_of_greenPanel_5() { return &___greenPanel_5; }
	inline void set_greenPanel_5(GameObject_t1756533147 * value)
	{
		___greenPanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___greenPanel_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
