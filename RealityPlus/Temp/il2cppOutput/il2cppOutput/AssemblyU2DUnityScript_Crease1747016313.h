﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DUnityScript_PostEffectsBase3757392499.h"

// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Crease
struct  Crease_t1747016313  : public PostEffectsBase_t3757392499
{
public:
	// System.Single Crease::intensity
	float ___intensity_5;
	// System.Int32 Crease::softness
	int32_t ___softness_6;
	// System.Single Crease::spread
	float ___spread_7;
	// UnityEngine.Shader Crease::blurShader
	Shader_t2430389951 * ___blurShader_8;
	// UnityEngine.Material Crease::blurMaterial
	Material_t193706927 * ___blurMaterial_9;
	// UnityEngine.Shader Crease::depthFetchShader
	Shader_t2430389951 * ___depthFetchShader_10;
	// UnityEngine.Material Crease::depthFetchMaterial
	Material_t193706927 * ___depthFetchMaterial_11;
	// UnityEngine.Shader Crease::creaseApplyShader
	Shader_t2430389951 * ___creaseApplyShader_12;
	// UnityEngine.Material Crease::creaseApplyMaterial
	Material_t193706927 * ___creaseApplyMaterial_13;

public:
	inline static int32_t get_offset_of_intensity_5() { return static_cast<int32_t>(offsetof(Crease_t1747016313, ___intensity_5)); }
	inline float get_intensity_5() const { return ___intensity_5; }
	inline float* get_address_of_intensity_5() { return &___intensity_5; }
	inline void set_intensity_5(float value)
	{
		___intensity_5 = value;
	}

	inline static int32_t get_offset_of_softness_6() { return static_cast<int32_t>(offsetof(Crease_t1747016313, ___softness_6)); }
	inline int32_t get_softness_6() const { return ___softness_6; }
	inline int32_t* get_address_of_softness_6() { return &___softness_6; }
	inline void set_softness_6(int32_t value)
	{
		___softness_6 = value;
	}

	inline static int32_t get_offset_of_spread_7() { return static_cast<int32_t>(offsetof(Crease_t1747016313, ___spread_7)); }
	inline float get_spread_7() const { return ___spread_7; }
	inline float* get_address_of_spread_7() { return &___spread_7; }
	inline void set_spread_7(float value)
	{
		___spread_7 = value;
	}

	inline static int32_t get_offset_of_blurShader_8() { return static_cast<int32_t>(offsetof(Crease_t1747016313, ___blurShader_8)); }
	inline Shader_t2430389951 * get_blurShader_8() const { return ___blurShader_8; }
	inline Shader_t2430389951 ** get_address_of_blurShader_8() { return &___blurShader_8; }
	inline void set_blurShader_8(Shader_t2430389951 * value)
	{
		___blurShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___blurShader_8, value);
	}

	inline static int32_t get_offset_of_blurMaterial_9() { return static_cast<int32_t>(offsetof(Crease_t1747016313, ___blurMaterial_9)); }
	inline Material_t193706927 * get_blurMaterial_9() const { return ___blurMaterial_9; }
	inline Material_t193706927 ** get_address_of_blurMaterial_9() { return &___blurMaterial_9; }
	inline void set_blurMaterial_9(Material_t193706927 * value)
	{
		___blurMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___blurMaterial_9, value);
	}

	inline static int32_t get_offset_of_depthFetchShader_10() { return static_cast<int32_t>(offsetof(Crease_t1747016313, ___depthFetchShader_10)); }
	inline Shader_t2430389951 * get_depthFetchShader_10() const { return ___depthFetchShader_10; }
	inline Shader_t2430389951 ** get_address_of_depthFetchShader_10() { return &___depthFetchShader_10; }
	inline void set_depthFetchShader_10(Shader_t2430389951 * value)
	{
		___depthFetchShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___depthFetchShader_10, value);
	}

	inline static int32_t get_offset_of_depthFetchMaterial_11() { return static_cast<int32_t>(offsetof(Crease_t1747016313, ___depthFetchMaterial_11)); }
	inline Material_t193706927 * get_depthFetchMaterial_11() const { return ___depthFetchMaterial_11; }
	inline Material_t193706927 ** get_address_of_depthFetchMaterial_11() { return &___depthFetchMaterial_11; }
	inline void set_depthFetchMaterial_11(Material_t193706927 * value)
	{
		___depthFetchMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___depthFetchMaterial_11, value);
	}

	inline static int32_t get_offset_of_creaseApplyShader_12() { return static_cast<int32_t>(offsetof(Crease_t1747016313, ___creaseApplyShader_12)); }
	inline Shader_t2430389951 * get_creaseApplyShader_12() const { return ___creaseApplyShader_12; }
	inline Shader_t2430389951 ** get_address_of_creaseApplyShader_12() { return &___creaseApplyShader_12; }
	inline void set_creaseApplyShader_12(Shader_t2430389951 * value)
	{
		___creaseApplyShader_12 = value;
		Il2CppCodeGenWriteBarrier(&___creaseApplyShader_12, value);
	}

	inline static int32_t get_offset_of_creaseApplyMaterial_13() { return static_cast<int32_t>(offsetof(Crease_t1747016313, ___creaseApplyMaterial_13)); }
	inline Material_t193706927 * get_creaseApplyMaterial_13() const { return ___creaseApplyMaterial_13; }
	inline Material_t193706927 ** get_address_of_creaseApplyMaterial_13() { return &___creaseApplyMaterial_13; }
	inline void set_creaseApplyMaterial_13(Material_t193706927 * value)
	{
		___creaseApplyMaterial_13 = value;
		Il2CppCodeGenWriteBarrier(&___creaseApplyMaterial_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
