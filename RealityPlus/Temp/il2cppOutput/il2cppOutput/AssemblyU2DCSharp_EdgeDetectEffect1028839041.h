#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ImageEffectBase898523515.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EdgeDetectEffect
struct  EdgeDetectEffect_t1028839041  : public ImageEffectBase_t898523515
{
public:
	// System.Single EdgeDetectEffect::threshold
	float ___threshold_4;

public:
	inline static int32_t get_offset_of_threshold_4() { return static_cast<int32_t>(offsetof(EdgeDetectEffect_t1028839041, ___threshold_4)); }
	inline float get_threshold_4() const { return ___threshold_4; }
	inline float* get_address_of_threshold_4() { return &___threshold_4; }
	inline void set_threshold_4(float value)
	{
		___threshold_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
