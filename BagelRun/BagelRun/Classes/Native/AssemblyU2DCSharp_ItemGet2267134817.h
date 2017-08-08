#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemGet
struct  ItemGet_t2267134817  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ItemGet::item_n
	int32_t ___item_n_2;
	// UnityEngine.AudioSource ItemGet::sound01
	AudioSource_t1135106623 * ___sound01_3;

public:
	inline static int32_t get_offset_of_item_n_2() { return static_cast<int32_t>(offsetof(ItemGet_t2267134817, ___item_n_2)); }
	inline int32_t get_item_n_2() const { return ___item_n_2; }
	inline int32_t* get_address_of_item_n_2() { return &___item_n_2; }
	inline void set_item_n_2(int32_t value)
	{
		___item_n_2 = value;
	}

	inline static int32_t get_offset_of_sound01_3() { return static_cast<int32_t>(offsetof(ItemGet_t2267134817, ___sound01_3)); }
	inline AudioSource_t1135106623 * get_sound01_3() const { return ___sound01_3; }
	inline AudioSource_t1135106623 ** get_address_of_sound01_3() { return &___sound01_3; }
	inline void set_sound01_3(AudioSource_t1135106623 * value)
	{
		___sound01_3 = value;
		Il2CppCodeGenWriteBarrier(&___sound01_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
