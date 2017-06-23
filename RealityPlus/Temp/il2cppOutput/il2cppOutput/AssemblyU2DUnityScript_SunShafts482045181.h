﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DUnityScript_PostEffectsBase3757392499.h"
#include "AssemblyU2DUnityScript_SunShaftsResolution2166148231.h"
#include "AssemblyU2DUnityScript_ShaftsScreenBlendMode616022271.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SunShafts
struct  SunShafts_t482045181  : public PostEffectsBase_t3757392499
{
public:
	// SunShaftsResolution SunShafts::resolution
	int32_t ___resolution_5;
	// ShaftsScreenBlendMode SunShafts::screenBlendMode
	int32_t ___screenBlendMode_6;
	// UnityEngine.Transform SunShafts::sunTransform
	Transform_t3275118058 * ___sunTransform_7;
	// System.Int32 SunShafts::radialBlurIterations
	int32_t ___radialBlurIterations_8;
	// UnityEngine.Color SunShafts::sunColor
	Color_t2020392075  ___sunColor_9;
	// System.Single SunShafts::sunShaftBlurRadius
	float ___sunShaftBlurRadius_10;
	// System.Single SunShafts::sunShaftIntensity
	float ___sunShaftIntensity_11;
	// System.Single SunShafts::useSkyBoxAlpha
	float ___useSkyBoxAlpha_12;
	// System.Single SunShafts::maxRadius
	float ___maxRadius_13;
	// System.Boolean SunShafts::useDepthTexture
	bool ___useDepthTexture_14;
	// UnityEngine.Shader SunShafts::sunShaftsShader
	Shader_t2430389951 * ___sunShaftsShader_15;
	// UnityEngine.Material SunShafts::sunShaftsMaterial
	Material_t193706927 * ___sunShaftsMaterial_16;
	// UnityEngine.Shader SunShafts::simpleClearShader
	Shader_t2430389951 * ___simpleClearShader_17;
	// UnityEngine.Material SunShafts::simpleClearMaterial
	Material_t193706927 * ___simpleClearMaterial_18;

public:
	inline static int32_t get_offset_of_resolution_5() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___resolution_5)); }
	inline int32_t get_resolution_5() const { return ___resolution_5; }
	inline int32_t* get_address_of_resolution_5() { return &___resolution_5; }
	inline void set_resolution_5(int32_t value)
	{
		___resolution_5 = value;
	}

	inline static int32_t get_offset_of_screenBlendMode_6() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___screenBlendMode_6)); }
	inline int32_t get_screenBlendMode_6() const { return ___screenBlendMode_6; }
	inline int32_t* get_address_of_screenBlendMode_6() { return &___screenBlendMode_6; }
	inline void set_screenBlendMode_6(int32_t value)
	{
		___screenBlendMode_6 = value;
	}

	inline static int32_t get_offset_of_sunTransform_7() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___sunTransform_7)); }
	inline Transform_t3275118058 * get_sunTransform_7() const { return ___sunTransform_7; }
	inline Transform_t3275118058 ** get_address_of_sunTransform_7() { return &___sunTransform_7; }
	inline void set_sunTransform_7(Transform_t3275118058 * value)
	{
		___sunTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___sunTransform_7, value);
	}

	inline static int32_t get_offset_of_radialBlurIterations_8() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___radialBlurIterations_8)); }
	inline int32_t get_radialBlurIterations_8() const { return ___radialBlurIterations_8; }
	inline int32_t* get_address_of_radialBlurIterations_8() { return &___radialBlurIterations_8; }
	inline void set_radialBlurIterations_8(int32_t value)
	{
		___radialBlurIterations_8 = value;
	}

	inline static int32_t get_offset_of_sunColor_9() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___sunColor_9)); }
	inline Color_t2020392075  get_sunColor_9() const { return ___sunColor_9; }
	inline Color_t2020392075 * get_address_of_sunColor_9() { return &___sunColor_9; }
	inline void set_sunColor_9(Color_t2020392075  value)
	{
		___sunColor_9 = value;
	}

	inline static int32_t get_offset_of_sunShaftBlurRadius_10() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___sunShaftBlurRadius_10)); }
	inline float get_sunShaftBlurRadius_10() const { return ___sunShaftBlurRadius_10; }
	inline float* get_address_of_sunShaftBlurRadius_10() { return &___sunShaftBlurRadius_10; }
	inline void set_sunShaftBlurRadius_10(float value)
	{
		___sunShaftBlurRadius_10 = value;
	}

	inline static int32_t get_offset_of_sunShaftIntensity_11() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___sunShaftIntensity_11)); }
	inline float get_sunShaftIntensity_11() const { return ___sunShaftIntensity_11; }
	inline float* get_address_of_sunShaftIntensity_11() { return &___sunShaftIntensity_11; }
	inline void set_sunShaftIntensity_11(float value)
	{
		___sunShaftIntensity_11 = value;
	}

	inline static int32_t get_offset_of_useSkyBoxAlpha_12() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___useSkyBoxAlpha_12)); }
	inline float get_useSkyBoxAlpha_12() const { return ___useSkyBoxAlpha_12; }
	inline float* get_address_of_useSkyBoxAlpha_12() { return &___useSkyBoxAlpha_12; }
	inline void set_useSkyBoxAlpha_12(float value)
	{
		___useSkyBoxAlpha_12 = value;
	}

	inline static int32_t get_offset_of_maxRadius_13() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___maxRadius_13)); }
	inline float get_maxRadius_13() const { return ___maxRadius_13; }
	inline float* get_address_of_maxRadius_13() { return &___maxRadius_13; }
	inline void set_maxRadius_13(float value)
	{
		___maxRadius_13 = value;
	}

	inline static int32_t get_offset_of_useDepthTexture_14() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___useDepthTexture_14)); }
	inline bool get_useDepthTexture_14() const { return ___useDepthTexture_14; }
	inline bool* get_address_of_useDepthTexture_14() { return &___useDepthTexture_14; }
	inline void set_useDepthTexture_14(bool value)
	{
		___useDepthTexture_14 = value;
	}

	inline static int32_t get_offset_of_sunShaftsShader_15() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___sunShaftsShader_15)); }
	inline Shader_t2430389951 * get_sunShaftsShader_15() const { return ___sunShaftsShader_15; }
	inline Shader_t2430389951 ** get_address_of_sunShaftsShader_15() { return &___sunShaftsShader_15; }
	inline void set_sunShaftsShader_15(Shader_t2430389951 * value)
	{
		___sunShaftsShader_15 = value;
		Il2CppCodeGenWriteBarrier(&___sunShaftsShader_15, value);
	}

	inline static int32_t get_offset_of_sunShaftsMaterial_16() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___sunShaftsMaterial_16)); }
	inline Material_t193706927 * get_sunShaftsMaterial_16() const { return ___sunShaftsMaterial_16; }
	inline Material_t193706927 ** get_address_of_sunShaftsMaterial_16() { return &___sunShaftsMaterial_16; }
	inline void set_sunShaftsMaterial_16(Material_t193706927 * value)
	{
		___sunShaftsMaterial_16 = value;
		Il2CppCodeGenWriteBarrier(&___sunShaftsMaterial_16, value);
	}

	inline static int32_t get_offset_of_simpleClearShader_17() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___simpleClearShader_17)); }
	inline Shader_t2430389951 * get_simpleClearShader_17() const { return ___simpleClearShader_17; }
	inline Shader_t2430389951 ** get_address_of_simpleClearShader_17() { return &___simpleClearShader_17; }
	inline void set_simpleClearShader_17(Shader_t2430389951 * value)
	{
		___simpleClearShader_17 = value;
		Il2CppCodeGenWriteBarrier(&___simpleClearShader_17, value);
	}

	inline static int32_t get_offset_of_simpleClearMaterial_18() { return static_cast<int32_t>(offsetof(SunShafts_t482045181, ___simpleClearMaterial_18)); }
	inline Material_t193706927 * get_simpleClearMaterial_18() const { return ___simpleClearMaterial_18; }
	inline Material_t193706927 ** get_address_of_simpleClearMaterial_18() { return &___simpleClearMaterial_18; }
	inline void set_simpleClearMaterial_18(Material_t193706927 * value)
	{
		___simpleClearMaterial_18 = value;
		Il2CppCodeGenWriteBarrier(&___simpleClearMaterial_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif