#pragma once

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

// TiltShift
struct  TiltShift_t2739456459  : public PostEffectsBase_t3757392499
{
public:
	// UnityEngine.Shader TiltShift::tiltShiftShader
	Shader_t2430389951 * ___tiltShiftShader_5;
	// UnityEngine.Material TiltShift::tiltShiftMaterial
	Material_t193706927 * ___tiltShiftMaterial_6;
	// System.Int32 TiltShift::renderTextureDivider
	int32_t ___renderTextureDivider_7;
	// System.Int32 TiltShift::blurIterations
	int32_t ___blurIterations_8;
	// System.Boolean TiltShift::enableForegroundBlur
	bool ___enableForegroundBlur_9;
	// System.Int32 TiltShift::foregroundBlurIterations
	int32_t ___foregroundBlurIterations_10;
	// System.Single TiltShift::maxBlurSpread
	float ___maxBlurSpread_11;
	// System.Single TiltShift::focalPoint
	float ___focalPoint_12;
	// System.Single TiltShift::smoothness
	float ___smoothness_13;
	// System.Boolean TiltShift::visualizeCoc
	bool ___visualizeCoc_14;
	// System.Single TiltShift::start01
	float ___start01_15;
	// System.Single TiltShift::distance01
	float ___distance01_16;
	// System.Single TiltShift::end01
	float ___end01_17;
	// System.Single TiltShift::curve
	float ___curve_18;

public:
	inline static int32_t get_offset_of_tiltShiftShader_5() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___tiltShiftShader_5)); }
	inline Shader_t2430389951 * get_tiltShiftShader_5() const { return ___tiltShiftShader_5; }
	inline Shader_t2430389951 ** get_address_of_tiltShiftShader_5() { return &___tiltShiftShader_5; }
	inline void set_tiltShiftShader_5(Shader_t2430389951 * value)
	{
		___tiltShiftShader_5 = value;
		Il2CppCodeGenWriteBarrier(&___tiltShiftShader_5, value);
	}

	inline static int32_t get_offset_of_tiltShiftMaterial_6() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___tiltShiftMaterial_6)); }
	inline Material_t193706927 * get_tiltShiftMaterial_6() const { return ___tiltShiftMaterial_6; }
	inline Material_t193706927 ** get_address_of_tiltShiftMaterial_6() { return &___tiltShiftMaterial_6; }
	inline void set_tiltShiftMaterial_6(Material_t193706927 * value)
	{
		___tiltShiftMaterial_6 = value;
		Il2CppCodeGenWriteBarrier(&___tiltShiftMaterial_6, value);
	}

	inline static int32_t get_offset_of_renderTextureDivider_7() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___renderTextureDivider_7)); }
	inline int32_t get_renderTextureDivider_7() const { return ___renderTextureDivider_7; }
	inline int32_t* get_address_of_renderTextureDivider_7() { return &___renderTextureDivider_7; }
	inline void set_renderTextureDivider_7(int32_t value)
	{
		___renderTextureDivider_7 = value;
	}

	inline static int32_t get_offset_of_blurIterations_8() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___blurIterations_8)); }
	inline int32_t get_blurIterations_8() const { return ___blurIterations_8; }
	inline int32_t* get_address_of_blurIterations_8() { return &___blurIterations_8; }
	inline void set_blurIterations_8(int32_t value)
	{
		___blurIterations_8 = value;
	}

	inline static int32_t get_offset_of_enableForegroundBlur_9() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___enableForegroundBlur_9)); }
	inline bool get_enableForegroundBlur_9() const { return ___enableForegroundBlur_9; }
	inline bool* get_address_of_enableForegroundBlur_9() { return &___enableForegroundBlur_9; }
	inline void set_enableForegroundBlur_9(bool value)
	{
		___enableForegroundBlur_9 = value;
	}

	inline static int32_t get_offset_of_foregroundBlurIterations_10() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___foregroundBlurIterations_10)); }
	inline int32_t get_foregroundBlurIterations_10() const { return ___foregroundBlurIterations_10; }
	inline int32_t* get_address_of_foregroundBlurIterations_10() { return &___foregroundBlurIterations_10; }
	inline void set_foregroundBlurIterations_10(int32_t value)
	{
		___foregroundBlurIterations_10 = value;
	}

	inline static int32_t get_offset_of_maxBlurSpread_11() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___maxBlurSpread_11)); }
	inline float get_maxBlurSpread_11() const { return ___maxBlurSpread_11; }
	inline float* get_address_of_maxBlurSpread_11() { return &___maxBlurSpread_11; }
	inline void set_maxBlurSpread_11(float value)
	{
		___maxBlurSpread_11 = value;
	}

	inline static int32_t get_offset_of_focalPoint_12() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___focalPoint_12)); }
	inline float get_focalPoint_12() const { return ___focalPoint_12; }
	inline float* get_address_of_focalPoint_12() { return &___focalPoint_12; }
	inline void set_focalPoint_12(float value)
	{
		___focalPoint_12 = value;
	}

	inline static int32_t get_offset_of_smoothness_13() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___smoothness_13)); }
	inline float get_smoothness_13() const { return ___smoothness_13; }
	inline float* get_address_of_smoothness_13() { return &___smoothness_13; }
	inline void set_smoothness_13(float value)
	{
		___smoothness_13 = value;
	}

	inline static int32_t get_offset_of_visualizeCoc_14() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___visualizeCoc_14)); }
	inline bool get_visualizeCoc_14() const { return ___visualizeCoc_14; }
	inline bool* get_address_of_visualizeCoc_14() { return &___visualizeCoc_14; }
	inline void set_visualizeCoc_14(bool value)
	{
		___visualizeCoc_14 = value;
	}

	inline static int32_t get_offset_of_start01_15() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___start01_15)); }
	inline float get_start01_15() const { return ___start01_15; }
	inline float* get_address_of_start01_15() { return &___start01_15; }
	inline void set_start01_15(float value)
	{
		___start01_15 = value;
	}

	inline static int32_t get_offset_of_distance01_16() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___distance01_16)); }
	inline float get_distance01_16() const { return ___distance01_16; }
	inline float* get_address_of_distance01_16() { return &___distance01_16; }
	inline void set_distance01_16(float value)
	{
		___distance01_16 = value;
	}

	inline static int32_t get_offset_of_end01_17() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___end01_17)); }
	inline float get_end01_17() const { return ___end01_17; }
	inline float* get_address_of_end01_17() { return &___end01_17; }
	inline void set_end01_17(float value)
	{
		___end01_17 = value;
	}

	inline static int32_t get_offset_of_curve_18() { return static_cast<int32_t>(offsetof(TiltShift_t2739456459, ___curve_18)); }
	inline float get_curve_18() const { return ___curve_18; }
	inline float* get_address_of_curve_18() { return &___curve_18; }
	inline void set_curve_18(float value)
	{
		___curve_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
