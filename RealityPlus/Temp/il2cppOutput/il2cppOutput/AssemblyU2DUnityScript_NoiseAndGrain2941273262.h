﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DUnityScript_PostEffectsBase3757392499.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_FilterMode10814199.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NoiseAndGrain
struct  NoiseAndGrain_t2941273262  : public PostEffectsBase_t3757392499
{
public:
	// System.Single NoiseAndGrain::intensityMultiplier
	float ___intensityMultiplier_5;
	// System.Single NoiseAndGrain::generalIntensity
	float ___generalIntensity_6;
	// System.Single NoiseAndGrain::blackIntensity
	float ___blackIntensity_7;
	// System.Single NoiseAndGrain::whiteIntensity
	float ___whiteIntensity_8;
	// System.Single NoiseAndGrain::midGrey
	float ___midGrey_9;
	// System.Boolean NoiseAndGrain::dx11Grain
	bool ___dx11Grain_10;
	// System.Single NoiseAndGrain::softness
	float ___softness_11;
	// System.Boolean NoiseAndGrain::monochrome
	bool ___monochrome_12;
	// UnityEngine.Vector3 NoiseAndGrain::intensities
	Vector3_t2243707580  ___intensities_13;
	// UnityEngine.Vector3 NoiseAndGrain::tiling
	Vector3_t2243707580  ___tiling_14;
	// System.Single NoiseAndGrain::monochromeTiling
	float ___monochromeTiling_15;
	// UnityEngine.FilterMode NoiseAndGrain::filterMode
	int32_t ___filterMode_16;
	// UnityEngine.Texture2D NoiseAndGrain::noiseTexture
	Texture2D_t3542995729 * ___noiseTexture_17;
	// UnityEngine.Shader NoiseAndGrain::noiseShader
	Shader_t2430389951 * ___noiseShader_18;
	// UnityEngine.Material NoiseAndGrain::noiseMaterial
	Material_t193706927 * ___noiseMaterial_19;
	// UnityEngine.Shader NoiseAndGrain::dx11NoiseShader
	Shader_t2430389951 * ___dx11NoiseShader_20;
	// UnityEngine.Material NoiseAndGrain::dx11NoiseMaterial
	Material_t193706927 * ___dx11NoiseMaterial_21;

public:
	inline static int32_t get_offset_of_intensityMultiplier_5() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___intensityMultiplier_5)); }
	inline float get_intensityMultiplier_5() const { return ___intensityMultiplier_5; }
	inline float* get_address_of_intensityMultiplier_5() { return &___intensityMultiplier_5; }
	inline void set_intensityMultiplier_5(float value)
	{
		___intensityMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_generalIntensity_6() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___generalIntensity_6)); }
	inline float get_generalIntensity_6() const { return ___generalIntensity_6; }
	inline float* get_address_of_generalIntensity_6() { return &___generalIntensity_6; }
	inline void set_generalIntensity_6(float value)
	{
		___generalIntensity_6 = value;
	}

	inline static int32_t get_offset_of_blackIntensity_7() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___blackIntensity_7)); }
	inline float get_blackIntensity_7() const { return ___blackIntensity_7; }
	inline float* get_address_of_blackIntensity_7() { return &___blackIntensity_7; }
	inline void set_blackIntensity_7(float value)
	{
		___blackIntensity_7 = value;
	}

	inline static int32_t get_offset_of_whiteIntensity_8() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___whiteIntensity_8)); }
	inline float get_whiteIntensity_8() const { return ___whiteIntensity_8; }
	inline float* get_address_of_whiteIntensity_8() { return &___whiteIntensity_8; }
	inline void set_whiteIntensity_8(float value)
	{
		___whiteIntensity_8 = value;
	}

	inline static int32_t get_offset_of_midGrey_9() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___midGrey_9)); }
	inline float get_midGrey_9() const { return ___midGrey_9; }
	inline float* get_address_of_midGrey_9() { return &___midGrey_9; }
	inline void set_midGrey_9(float value)
	{
		___midGrey_9 = value;
	}

	inline static int32_t get_offset_of_dx11Grain_10() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___dx11Grain_10)); }
	inline bool get_dx11Grain_10() const { return ___dx11Grain_10; }
	inline bool* get_address_of_dx11Grain_10() { return &___dx11Grain_10; }
	inline void set_dx11Grain_10(bool value)
	{
		___dx11Grain_10 = value;
	}

	inline static int32_t get_offset_of_softness_11() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___softness_11)); }
	inline float get_softness_11() const { return ___softness_11; }
	inline float* get_address_of_softness_11() { return &___softness_11; }
	inline void set_softness_11(float value)
	{
		___softness_11 = value;
	}

	inline static int32_t get_offset_of_monochrome_12() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___monochrome_12)); }
	inline bool get_monochrome_12() const { return ___monochrome_12; }
	inline bool* get_address_of_monochrome_12() { return &___monochrome_12; }
	inline void set_monochrome_12(bool value)
	{
		___monochrome_12 = value;
	}

	inline static int32_t get_offset_of_intensities_13() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___intensities_13)); }
	inline Vector3_t2243707580  get_intensities_13() const { return ___intensities_13; }
	inline Vector3_t2243707580 * get_address_of_intensities_13() { return &___intensities_13; }
	inline void set_intensities_13(Vector3_t2243707580  value)
	{
		___intensities_13 = value;
	}

	inline static int32_t get_offset_of_tiling_14() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___tiling_14)); }
	inline Vector3_t2243707580  get_tiling_14() const { return ___tiling_14; }
	inline Vector3_t2243707580 * get_address_of_tiling_14() { return &___tiling_14; }
	inline void set_tiling_14(Vector3_t2243707580  value)
	{
		___tiling_14 = value;
	}

	inline static int32_t get_offset_of_monochromeTiling_15() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___monochromeTiling_15)); }
	inline float get_monochromeTiling_15() const { return ___monochromeTiling_15; }
	inline float* get_address_of_monochromeTiling_15() { return &___monochromeTiling_15; }
	inline void set_monochromeTiling_15(float value)
	{
		___monochromeTiling_15 = value;
	}

	inline static int32_t get_offset_of_filterMode_16() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___filterMode_16)); }
	inline int32_t get_filterMode_16() const { return ___filterMode_16; }
	inline int32_t* get_address_of_filterMode_16() { return &___filterMode_16; }
	inline void set_filterMode_16(int32_t value)
	{
		___filterMode_16 = value;
	}

	inline static int32_t get_offset_of_noiseTexture_17() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___noiseTexture_17)); }
	inline Texture2D_t3542995729 * get_noiseTexture_17() const { return ___noiseTexture_17; }
	inline Texture2D_t3542995729 ** get_address_of_noiseTexture_17() { return &___noiseTexture_17; }
	inline void set_noiseTexture_17(Texture2D_t3542995729 * value)
	{
		___noiseTexture_17 = value;
		Il2CppCodeGenWriteBarrier(&___noiseTexture_17, value);
	}

	inline static int32_t get_offset_of_noiseShader_18() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___noiseShader_18)); }
	inline Shader_t2430389951 * get_noiseShader_18() const { return ___noiseShader_18; }
	inline Shader_t2430389951 ** get_address_of_noiseShader_18() { return &___noiseShader_18; }
	inline void set_noiseShader_18(Shader_t2430389951 * value)
	{
		___noiseShader_18 = value;
		Il2CppCodeGenWriteBarrier(&___noiseShader_18, value);
	}

	inline static int32_t get_offset_of_noiseMaterial_19() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___noiseMaterial_19)); }
	inline Material_t193706927 * get_noiseMaterial_19() const { return ___noiseMaterial_19; }
	inline Material_t193706927 ** get_address_of_noiseMaterial_19() { return &___noiseMaterial_19; }
	inline void set_noiseMaterial_19(Material_t193706927 * value)
	{
		___noiseMaterial_19 = value;
		Il2CppCodeGenWriteBarrier(&___noiseMaterial_19, value);
	}

	inline static int32_t get_offset_of_dx11NoiseShader_20() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___dx11NoiseShader_20)); }
	inline Shader_t2430389951 * get_dx11NoiseShader_20() const { return ___dx11NoiseShader_20; }
	inline Shader_t2430389951 ** get_address_of_dx11NoiseShader_20() { return &___dx11NoiseShader_20; }
	inline void set_dx11NoiseShader_20(Shader_t2430389951 * value)
	{
		___dx11NoiseShader_20 = value;
		Il2CppCodeGenWriteBarrier(&___dx11NoiseShader_20, value);
	}

	inline static int32_t get_offset_of_dx11NoiseMaterial_21() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262, ___dx11NoiseMaterial_21)); }
	inline Material_t193706927 * get_dx11NoiseMaterial_21() const { return ___dx11NoiseMaterial_21; }
	inline Material_t193706927 ** get_address_of_dx11NoiseMaterial_21() { return &___dx11NoiseMaterial_21; }
	inline void set_dx11NoiseMaterial_21(Material_t193706927 * value)
	{
		___dx11NoiseMaterial_21 = value;
		Il2CppCodeGenWriteBarrier(&___dx11NoiseMaterial_21, value);
	}
};

struct NoiseAndGrain_t2941273262_StaticFields
{
public:
	// System.Single NoiseAndGrain::TILE_AMOUNT
	float ___TILE_AMOUNT_22;

public:
	inline static int32_t get_offset_of_TILE_AMOUNT_22() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t2941273262_StaticFields, ___TILE_AMOUNT_22)); }
	inline float get_TILE_AMOUNT_22() const { return ___TILE_AMOUNT_22; }
	inline float* get_address_of_TILE_AMOUNT_22() { return &___TILE_AMOUNT_22; }
	inline void set_TILE_AMOUNT_22(float value)
	{
		___TILE_AMOUNT_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
