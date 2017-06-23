#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DUnityScript_PostEffectsBase3757392499.h"
#include "AssemblyU2DUnityScript_Vignetting_AberrationMode3883519246.h"

// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vignetting
struct  Vignetting_t1869961069  : public PostEffectsBase_t3757392499
{
public:
	// Vignetting/AberrationMode Vignetting::mode
	int32_t ___mode_5;
	// System.Single Vignetting::intensity
	float ___intensity_6;
	// System.Single Vignetting::chromaticAberration
	float ___chromaticAberration_7;
	// System.Single Vignetting::axialAberration
	float ___axialAberration_8;
	// System.Single Vignetting::blur
	float ___blur_9;
	// System.Single Vignetting::blurSpread
	float ___blurSpread_10;
	// System.Single Vignetting::luminanceDependency
	float ___luminanceDependency_11;
	// UnityEngine.Shader Vignetting::vignetteShader
	Shader_t2430389951 * ___vignetteShader_12;
	// UnityEngine.Material Vignetting::vignetteMaterial
	Material_t193706927 * ___vignetteMaterial_13;
	// UnityEngine.Shader Vignetting::separableBlurShader
	Shader_t2430389951 * ___separableBlurShader_14;
	// UnityEngine.Material Vignetting::separableBlurMaterial
	Material_t193706927 * ___separableBlurMaterial_15;
	// UnityEngine.Shader Vignetting::chromAberrationShader
	Shader_t2430389951 * ___chromAberrationShader_16;
	// UnityEngine.Material Vignetting::chromAberrationMaterial
	Material_t193706927 * ___chromAberrationMaterial_17;

public:
	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(Vignetting_t1869961069, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_intensity_6() { return static_cast<int32_t>(offsetof(Vignetting_t1869961069, ___intensity_6)); }
	inline float get_intensity_6() const { return ___intensity_6; }
	inline float* get_address_of_intensity_6() { return &___intensity_6; }
	inline void set_intensity_6(float value)
	{
		___intensity_6 = value;
	}

	inline static int32_t get_offset_of_chromaticAberration_7() { return static_cast<int32_t>(offsetof(Vignetting_t1869961069, ___chromaticAberration_7)); }
	inline float get_chromaticAberration_7() const { return ___chromaticAberration_7; }
	inline float* get_address_of_chromaticAberration_7() { return &___chromaticAberration_7; }
	inline void set_chromaticAberration_7(float value)
	{
		___chromaticAberration_7 = value;
	}

	inline static int32_t get_offset_of_axialAberration_8() { return static_cast<int32_t>(offsetof(Vignetting_t1869961069, ___axialAberration_8)); }
	inline float get_axialAberration_8() const { return ___axialAberration_8; }
	inline float* get_address_of_axialAberration_8() { return &___axialAberration_8; }
	inline void set_axialAberration_8(float value)
	{
		___axialAberration_8 = value;
	}

	inline static int32_t get_offset_of_blur_9() { return static_cast<int32_t>(offsetof(Vignetting_t1869961069, ___blur_9)); }
	inline float get_blur_9() const { return ___blur_9; }
	inline float* get_address_of_blur_9() { return &___blur_9; }
	inline void set_blur_9(float value)
	{
		___blur_9 = value;
	}

	inline static int32_t get_offset_of_blurSpread_10() { return static_cast<int32_t>(offsetof(Vignetting_t1869961069, ___blurSpread_10)); }
	inline float get_blurSpread_10() const { return ___blurSpread_10; }
	inline float* get_address_of_blurSpread_10() { return &___blurSpread_10; }
	inline void set_blurSpread_10(float value)
	{
		___blurSpread_10 = value;
	}

	inline static int32_t get_offset_of_luminanceDependency_11() { return static_cast<int32_t>(offsetof(Vignetting_t1869961069, ___luminanceDependency_11)); }
	inline float get_luminanceDependency_11() const { return ___luminanceDependency_11; }
	inline float* get_address_of_luminanceDependency_11() { return &___luminanceDependency_11; }
	inline void set_luminanceDependency_11(float value)
	{
		___luminanceDependency_11 = value;
	}

	inline static int32_t get_offset_of_vignetteShader_12() { return static_cast<int32_t>(offsetof(Vignetting_t1869961069, ___vignetteShader_12)); }
	inline Shader_t2430389951 * get_vignetteShader_12() const { return ___vignetteShader_12; }
	inline Shader_t2430389951 ** get_address_of_vignetteShader_12() { return &___vignetteShader_12; }
	inline void set_vignetteShader_12(Shader_t2430389951 * value)
	{
		___vignetteShader_12 = value;
		Il2CppCodeGenWriteBarrier(&___vignetteShader_12, value);
	}

	inline static int32_t get_offset_of_vignetteMaterial_13() { return static_cast<int32_t>(offsetof(Vignetting_t1869961069, ___vignetteMaterial_13)); }
	inline Material_t193706927 * get_vignetteMaterial_13() const { return ___vignetteMaterial_13; }
	inline Material_t193706927 ** get_address_of_vignetteMaterial_13() { return &___vignetteMaterial_13; }
	inline void set_vignetteMaterial_13(Material_t193706927 * value)
	{
		___vignetteMaterial_13 = value;
		Il2CppCodeGenWriteBarrier(&___vignetteMaterial_13, value);
	}

	inline static int32_t get_offset_of_separableBlurShader_14() { return static_cast<int32_t>(offsetof(Vignetting_t1869961069, ___separableBlurShader_14)); }
	inline Shader_t2430389951 * get_separableBlurShader_14() const { return ___separableBlurShader_14; }
	inline Shader_t2430389951 ** get_address_of_separableBlurShader_14() { return &___separableBlurShader_14; }
	inline void set_separableBlurShader_14(Shader_t2430389951 * value)
	{
		___separableBlurShader_14 = value;
		Il2CppCodeGenWriteBarrier(&___separableBlurShader_14, value);
	}

	inline static int32_t get_offset_of_separableBlurMaterial_15() { return static_cast<int32_t>(offsetof(Vignetting_t1869961069, ___separableBlurMaterial_15)); }
	inline Material_t193706927 * get_separableBlurMaterial_15() const { return ___separableBlurMaterial_15; }
	inline Material_t193706927 ** get_address_of_separableBlurMaterial_15() { return &___separableBlurMaterial_15; }
	inline void set_separableBlurMaterial_15(Material_t193706927 * value)
	{
		___separableBlurMaterial_15 = value;
		Il2CppCodeGenWriteBarrier(&___separableBlurMaterial_15, value);
	}

	inline static int32_t get_offset_of_chromAberrationShader_16() { return static_cast<int32_t>(offsetof(Vignetting_t1869961069, ___chromAberrationShader_16)); }
	inline Shader_t2430389951 * get_chromAberrationShader_16() const { return ___chromAberrationShader_16; }
	inline Shader_t2430389951 ** get_address_of_chromAberrationShader_16() { return &___chromAberrationShader_16; }
	inline void set_chromAberrationShader_16(Shader_t2430389951 * value)
	{
		___chromAberrationShader_16 = value;
		Il2CppCodeGenWriteBarrier(&___chromAberrationShader_16, value);
	}

	inline static int32_t get_offset_of_chromAberrationMaterial_17() { return static_cast<int32_t>(offsetof(Vignetting_t1869961069, ___chromAberrationMaterial_17)); }
	inline Material_t193706927 * get_chromAberrationMaterial_17() const { return ___chromAberrationMaterial_17; }
	inline Material_t193706927 ** get_address_of_chromAberrationMaterial_17() { return &___chromAberrationMaterial_17; }
	inline void set_chromAberrationMaterial_17(Material_t193706927 * value)
	{
		___chromAberrationMaterial_17 = value;
		Il2CppCodeGenWriteBarrier(&___chromAberrationMaterial_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
