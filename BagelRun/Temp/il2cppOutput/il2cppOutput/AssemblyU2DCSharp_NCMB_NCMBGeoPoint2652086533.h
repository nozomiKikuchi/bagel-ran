#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NCMB.NCMBGeoPoint
struct  NCMBGeoPoint_t2652086533 
{
public:
	// System.Double NCMB.NCMBGeoPoint::latitude
	double ___latitude_0;
	// System.Double NCMB.NCMBGeoPoint::longitude
	double ___longitude_1;

public:
	inline static int32_t get_offset_of_latitude_0() { return static_cast<int32_t>(offsetof(NCMBGeoPoint_t2652086533, ___latitude_0)); }
	inline double get_latitude_0() const { return ___latitude_0; }
	inline double* get_address_of_latitude_0() { return &___latitude_0; }
	inline void set_latitude_0(double value)
	{
		___latitude_0 = value;
	}

	inline static int32_t get_offset_of_longitude_1() { return static_cast<int32_t>(offsetof(NCMBGeoPoint_t2652086533, ___longitude_1)); }
	inline double get_longitude_1() const { return ___longitude_1; }
	inline double* get_address_of_longitude_1() { return &___longitude_1; }
	inline void set_longitude_1(double value)
	{
		___longitude_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
