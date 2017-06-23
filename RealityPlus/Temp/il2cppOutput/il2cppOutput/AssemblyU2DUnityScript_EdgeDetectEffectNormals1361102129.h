#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DUnityScript_PostEffectsBase3757392499.h"
#include "AssemblyU2DUnityScript_EdgeDetectMode795813161.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EdgeDetectEffectNormals
struct  EdgeDetectEffectNormals_t1361102129  : public PostEffectsBase_t3757392499
{
public:
	// EdgeDetectMode EdgeDetectEffectNormals::mode
	int32_t ___mode_5;
	// System.Single EdgeDetectEffectNormals::sensitivityDepth
	float ___sensitivityDepth_6;
	// System.Single EdgeDetectEffectNormals::sensitivityNormals
	float ___sensitivityNormals_7;
	// System.Single EdgeDetectEffectNormals::edgeExp
	float ___edgeExp_8;
	// System.Single EdgeDetectEffectNormals::sampleDist
	float ___sampleDist_9;
	// System.Single EdgeDetectEffectNormals::edgesOnly
	float ___edgesOnly_10;
	// UnityEngine.Color EdgeDetectEffectNormals::edgesOnlyBgColor
	Color_t2020392075  ___edgesOnlyBgColor_11;
	// UnityEngine.Shader EdgeDetectEffectNormals::edgeDetectShader
	Shader_t2430389951 * ___edgeDetectShader_12;
	// UnityEngine.Material EdgeDetectEffectNormals::edgeDetectMaterial
	Material_t193706927 * ___edgeDetectMaterial_13;
	// EdgeDetectMode EdgeDetectEffectNormals::oldMode
	int32_t ___oldMode_14;

public:
	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(EdgeDetectEffectNormals_t1361102129, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_sensitivityDepth_6() { return static_cast<int32_t>(offsetof(EdgeDetectEffectNormals_t1361102129, ___sensitivityDepth_6)); }
	inline float get_sensitivityDepth_6() const { return ___sensitivityDepth_6; }
	inline float* get_address_of_sensitivityDepth_6() { return &___sensitivityDepth_6; }
	inline void set_sensitivityDepth_6(float value)
	{
		___sensitivityDepth_6 = value;
	}

	inline static int32_t get_offset_of_sensitivityNormals_7() { return static_cast<int32_t>(offsetof(EdgeDetectEffectNormals_t1361102129, ___sensitivityNormals_7)); }
	inline float get_sensitivityNormals_7() const { return ___sensitivityNormals_7; }
	inline float* get_address_of_sensitivityNormals_7() { return &___sensitivityNormals_7; }
	inline void set_sensitivityNormals_7(float value)
	{
		___sensitivityNormals_7 = value;
	}

	inline static int32_t get_offset_of_edgeExp_8() { return static_cast<int32_t>(offsetof(EdgeDetectEffectNormals_t1361102129, ___edgeExp_8)); }
	inline float get_edgeExp_8() const { return ___edgeExp_8; }
	inline float* get_address_of_edgeExp_8() { return &___edgeExp_8; }
	inline void set_edgeExp_8(float value)
	{
		___edgeExp_8 = value;
	}

	inline static int32_t get_offset_of_sampleDist_9() { return static_cast<int32_t>(offsetof(EdgeDetectEffectNormals_t1361102129, ___sampleDist_9)); }
	inline float get_sampleDist_9() const { return ___sampleDist_9; }
	inline float* get_address_of_sampleDist_9() { return &___sampleDist_9; }
	inline void set_sampleDist_9(float value)
	{
		___sampleDist_9 = value;
	}

	inline static int32_t get_offset_of_edgesOnly_10() { return static_cast<int32_t>(offsetof(EdgeDetectEffectNormals_t1361102129, ___edgesOnly_10)); }
	inline float get_edgesOnly_10() const { return ___edgesOnly_10; }
	inline float* get_address_of_edgesOnly_10() { return &___edgesOnly_10; }
	inline void set_edgesOnly_10(float value)
	{
		___edgesOnly_10 = value;
	}

	inline static int32_t get_offset_of_edgesOnlyBgColor_11() { return static_cast<int32_t>(offsetof(EdgeDetectEffectNormals_t1361102129, ___edgesOnlyBgColor_11)); }
	inline Color_t2020392075  get_edgesOnlyBgColor_11() const { return ___edgesOnlyBgColor_11; }
	inline Color_t2020392075 * get_address_of_edgesOnlyBgColor_11() { return &___edgesOnlyBgColor_11; }
	inline void set_edgesOnlyBgColor_11(Color_t2020392075  value)
	{
		___edgesOnlyBgColor_11 = value;
	}

	inline static int32_t get_offset_of_edgeDetectShader_12() { return static_cast<int32_t>(offsetof(EdgeDetectEffectNormals_t1361102129, ___edgeDetectShader_12)); }
	inline Shader_t2430389951 * get_edgeDetectShader_12() const { return ___edgeDetectShader_12; }
	inline Shader_t2430389951 ** get_address_of_edgeDetectShader_12() { return &___edgeDetectShader_12; }
	inline void set_edgeDetectShader_12(Shader_t2430389951 * value)
	{
		___edgeDetectShader_12 = value;
		Il2CppCodeGenWriteBarrier(&___edgeDetectShader_12, value);
	}

	inline static int32_t get_offset_of_edgeDetectMaterial_13() { return static_cast<int32_t>(offsetof(EdgeDetectEffectNormals_t1361102129, ___edgeDetectMaterial_13)); }
	inline Material_t193706927 * get_edgeDetectMaterial_13() const { return ___edgeDetectMaterial_13; }
	inline Material_t193706927 ** get_address_of_edgeDetectMaterial_13() { return &___edgeDetectMaterial_13; }
	inline void set_edgeDetectMaterial_13(Material_t193706927 * value)
	{
		___edgeDetectMaterial_13 = value;
		Il2CppCodeGenWriteBarrier(&___edgeDetectMaterial_13, value);
	}

	inline static int32_t get_offset_of_oldMode_14() { return static_cast<int32_t>(offsetof(EdgeDetectEffectNormals_t1361102129, ___oldMode_14)); }
	inline int32_t get_oldMode_14() const { return ___oldMode_14; }
	inline int32_t* get_address_of_oldMode_14() { return &___oldMode_14; }
	inline void set_oldMode_14(int32_t value)
	{
		___oldMode_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
