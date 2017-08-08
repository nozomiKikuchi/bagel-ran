#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3961242320;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t3046128587;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.Internal.Platform
struct  Platform_t2452210395  : public Il2CppObject
{
public:

public:
};

struct Platform_t2452210395_StaticFields
{
public:
	// System.Threading.ReaderWriterLockSlim NCMB.Internal.Platform::QueueLock
	ReaderWriterLockSlim_t3961242320 * ___QueueLock_0;
	// System.Collections.Generic.Queue`1<System.Action> NCMB.Internal.Platform::Queue
	Queue_1_t3046128587 * ___Queue_1;

public:
	inline static int32_t get_offset_of_QueueLock_0() { return static_cast<int32_t>(offsetof(Platform_t2452210395_StaticFields, ___QueueLock_0)); }
	inline ReaderWriterLockSlim_t3961242320 * get_QueueLock_0() const { return ___QueueLock_0; }
	inline ReaderWriterLockSlim_t3961242320 ** get_address_of_QueueLock_0() { return &___QueueLock_0; }
	inline void set_QueueLock_0(ReaderWriterLockSlim_t3961242320 * value)
	{
		___QueueLock_0 = value;
		Il2CppCodeGenWriteBarrier(&___QueueLock_0, value);
	}

	inline static int32_t get_offset_of_Queue_1() { return static_cast<int32_t>(offsetof(Platform_t2452210395_StaticFields, ___Queue_1)); }
	inline Queue_1_t3046128587 * get_Queue_1() const { return ___Queue_1; }
	inline Queue_1_t3046128587 ** get_address_of_Queue_1() { return &___Queue_1; }
	inline void set_Queue_1(Queue_1_t3046128587 * value)
	{
		___Queue_1 = value;
		Il2CppCodeGenWriteBarrier(&___Queue_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
