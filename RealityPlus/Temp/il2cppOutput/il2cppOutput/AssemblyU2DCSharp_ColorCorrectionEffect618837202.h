﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_ImageEffectBase898523515.h"

// UnityEngine.Texture
struct Texture_t2243626319;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorCorrectionEffect
struct  ColorCorrectionEffect_t618837202  : public ImageEffectBase_t898523515
{
public:
	// UnityEngine.Texture ColorCorrectionEffect::textureRamp
	Texture_t2243626319 * ___textureRamp_4;

public:
	inline static int32_t get_offset_of_textureRamp_4() { return static_cast<int32_t>(offsetof(ColorCorrectionEffect_t618837202, ___textureRamp_4)); }
	inline Texture_t2243626319 * get_textureRamp_4() const { return ___textureRamp_4; }
	inline Texture_t2243626319 ** get_address_of_textureRamp_4() { return &___textureRamp_4; }
	inline void set_textureRamp_4(Texture_t2243626319 * value)
	{
		___textureRamp_4 = value;
		Il2CppCodeGenWriteBarrier(&___textureRamp_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
