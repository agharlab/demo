﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DUnityScript_PostEffectsBase3757392499.h"
#include "AssemblyU2DUnityScript_CameraMotionBlur_MotionBlur3030354800.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraMotionBlur
struct  CameraMotionBlur_t32230768  : public PostEffectsBase_t3757392499
{
public:
	// CameraMotionBlur/MotionBlurFilter CameraMotionBlur::filterType
	int32_t ___filterType_6;
	// System.Boolean CameraMotionBlur::preview
	bool ___preview_7;
	// UnityEngine.Vector3 CameraMotionBlur::previewScale
	Vector3_t2243707580  ___previewScale_8;
	// System.Single CameraMotionBlur::movementScale
	float ___movementScale_9;
	// System.Single CameraMotionBlur::rotationScale
	float ___rotationScale_10;
	// System.Single CameraMotionBlur::maxVelocity
	float ___maxVelocity_11;
	// System.Int32 CameraMotionBlur::maxNumSamples
	int32_t ___maxNumSamples_12;
	// System.Single CameraMotionBlur::minVelocity
	float ___minVelocity_13;
	// System.Single CameraMotionBlur::velocityScale
	float ___velocityScale_14;
	// System.Single CameraMotionBlur::softZDistance
	float ___softZDistance_15;
	// System.Int32 CameraMotionBlur::velocityDownsample
	int32_t ___velocityDownsample_16;
	// UnityEngine.LayerMask CameraMotionBlur::excludeLayers
	LayerMask_t3188175821  ___excludeLayers_17;
	// UnityEngine.GameObject CameraMotionBlur::tmpCam
	GameObject_t1756533147 * ___tmpCam_18;
	// UnityEngine.Shader CameraMotionBlur::shader
	Shader_t2430389951 * ___shader_19;
	// UnityEngine.Shader CameraMotionBlur::dx11MotionBlurShader
	Shader_t2430389951 * ___dx11MotionBlurShader_20;
	// UnityEngine.Shader CameraMotionBlur::replacementClear
	Shader_t2430389951 * ___replacementClear_21;
	// UnityEngine.Material CameraMotionBlur::motionBlurMaterial
	Material_t193706927 * ___motionBlurMaterial_22;
	// UnityEngine.Material CameraMotionBlur::dx11MotionBlurMaterial
	Material_t193706927 * ___dx11MotionBlurMaterial_23;
	// UnityEngine.Texture2D CameraMotionBlur::noiseTexture
	Texture2D_t3542995729 * ___noiseTexture_24;
	// System.Boolean CameraMotionBlur::showVelocity
	bool ___showVelocity_25;
	// System.Single CameraMotionBlur::showVelocityScale
	float ___showVelocityScale_26;
	// UnityEngine.Matrix4x4 CameraMotionBlur::currentViewProjMat
	Matrix4x4_t2933234003  ___currentViewProjMat_27;
	// UnityEngine.Matrix4x4 CameraMotionBlur::prevViewProjMat
	Matrix4x4_t2933234003  ___prevViewProjMat_28;
	// System.Int32 CameraMotionBlur::prevFrameCount
	int32_t ___prevFrameCount_29;
	// System.Boolean CameraMotionBlur::wasActive
	bool ___wasActive_30;
	// UnityEngine.Vector3 CameraMotionBlur::prevFrameForward
	Vector3_t2243707580  ___prevFrameForward_31;
	// UnityEngine.Vector3 CameraMotionBlur::prevFrameRight
	Vector3_t2243707580  ___prevFrameRight_32;
	// UnityEngine.Vector3 CameraMotionBlur::prevFrameUp
	Vector3_t2243707580  ___prevFrameUp_33;
	// UnityEngine.Vector3 CameraMotionBlur::prevFramePos
	Vector3_t2243707580  ___prevFramePos_34;

public:
	inline static int32_t get_offset_of_filterType_6() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___filterType_6)); }
	inline int32_t get_filterType_6() const { return ___filterType_6; }
	inline int32_t* get_address_of_filterType_6() { return &___filterType_6; }
	inline void set_filterType_6(int32_t value)
	{
		___filterType_6 = value;
	}

	inline static int32_t get_offset_of_preview_7() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___preview_7)); }
	inline bool get_preview_7() const { return ___preview_7; }
	inline bool* get_address_of_preview_7() { return &___preview_7; }
	inline void set_preview_7(bool value)
	{
		___preview_7 = value;
	}

	inline static int32_t get_offset_of_previewScale_8() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___previewScale_8)); }
	inline Vector3_t2243707580  get_previewScale_8() const { return ___previewScale_8; }
	inline Vector3_t2243707580 * get_address_of_previewScale_8() { return &___previewScale_8; }
	inline void set_previewScale_8(Vector3_t2243707580  value)
	{
		___previewScale_8 = value;
	}

	inline static int32_t get_offset_of_movementScale_9() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___movementScale_9)); }
	inline float get_movementScale_9() const { return ___movementScale_9; }
	inline float* get_address_of_movementScale_9() { return &___movementScale_9; }
	inline void set_movementScale_9(float value)
	{
		___movementScale_9 = value;
	}

	inline static int32_t get_offset_of_rotationScale_10() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___rotationScale_10)); }
	inline float get_rotationScale_10() const { return ___rotationScale_10; }
	inline float* get_address_of_rotationScale_10() { return &___rotationScale_10; }
	inline void set_rotationScale_10(float value)
	{
		___rotationScale_10 = value;
	}

	inline static int32_t get_offset_of_maxVelocity_11() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___maxVelocity_11)); }
	inline float get_maxVelocity_11() const { return ___maxVelocity_11; }
	inline float* get_address_of_maxVelocity_11() { return &___maxVelocity_11; }
	inline void set_maxVelocity_11(float value)
	{
		___maxVelocity_11 = value;
	}

	inline static int32_t get_offset_of_maxNumSamples_12() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___maxNumSamples_12)); }
	inline int32_t get_maxNumSamples_12() const { return ___maxNumSamples_12; }
	inline int32_t* get_address_of_maxNumSamples_12() { return &___maxNumSamples_12; }
	inline void set_maxNumSamples_12(int32_t value)
	{
		___maxNumSamples_12 = value;
	}

	inline static int32_t get_offset_of_minVelocity_13() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___minVelocity_13)); }
	inline float get_minVelocity_13() const { return ___minVelocity_13; }
	inline float* get_address_of_minVelocity_13() { return &___minVelocity_13; }
	inline void set_minVelocity_13(float value)
	{
		___minVelocity_13 = value;
	}

	inline static int32_t get_offset_of_velocityScale_14() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___velocityScale_14)); }
	inline float get_velocityScale_14() const { return ___velocityScale_14; }
	inline float* get_address_of_velocityScale_14() { return &___velocityScale_14; }
	inline void set_velocityScale_14(float value)
	{
		___velocityScale_14 = value;
	}

	inline static int32_t get_offset_of_softZDistance_15() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___softZDistance_15)); }
	inline float get_softZDistance_15() const { return ___softZDistance_15; }
	inline float* get_address_of_softZDistance_15() { return &___softZDistance_15; }
	inline void set_softZDistance_15(float value)
	{
		___softZDistance_15 = value;
	}

	inline static int32_t get_offset_of_velocityDownsample_16() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___velocityDownsample_16)); }
	inline int32_t get_velocityDownsample_16() const { return ___velocityDownsample_16; }
	inline int32_t* get_address_of_velocityDownsample_16() { return &___velocityDownsample_16; }
	inline void set_velocityDownsample_16(int32_t value)
	{
		___velocityDownsample_16 = value;
	}

	inline static int32_t get_offset_of_excludeLayers_17() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___excludeLayers_17)); }
	inline LayerMask_t3188175821  get_excludeLayers_17() const { return ___excludeLayers_17; }
	inline LayerMask_t3188175821 * get_address_of_excludeLayers_17() { return &___excludeLayers_17; }
	inline void set_excludeLayers_17(LayerMask_t3188175821  value)
	{
		___excludeLayers_17 = value;
	}

	inline static int32_t get_offset_of_tmpCam_18() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___tmpCam_18)); }
	inline GameObject_t1756533147 * get_tmpCam_18() const { return ___tmpCam_18; }
	inline GameObject_t1756533147 ** get_address_of_tmpCam_18() { return &___tmpCam_18; }
	inline void set_tmpCam_18(GameObject_t1756533147 * value)
	{
		___tmpCam_18 = value;
		Il2CppCodeGenWriteBarrier(&___tmpCam_18, value);
	}

	inline static int32_t get_offset_of_shader_19() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___shader_19)); }
	inline Shader_t2430389951 * get_shader_19() const { return ___shader_19; }
	inline Shader_t2430389951 ** get_address_of_shader_19() { return &___shader_19; }
	inline void set_shader_19(Shader_t2430389951 * value)
	{
		___shader_19 = value;
		Il2CppCodeGenWriteBarrier(&___shader_19, value);
	}

	inline static int32_t get_offset_of_dx11MotionBlurShader_20() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___dx11MotionBlurShader_20)); }
	inline Shader_t2430389951 * get_dx11MotionBlurShader_20() const { return ___dx11MotionBlurShader_20; }
	inline Shader_t2430389951 ** get_address_of_dx11MotionBlurShader_20() { return &___dx11MotionBlurShader_20; }
	inline void set_dx11MotionBlurShader_20(Shader_t2430389951 * value)
	{
		___dx11MotionBlurShader_20 = value;
		Il2CppCodeGenWriteBarrier(&___dx11MotionBlurShader_20, value);
	}

	inline static int32_t get_offset_of_replacementClear_21() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___replacementClear_21)); }
	inline Shader_t2430389951 * get_replacementClear_21() const { return ___replacementClear_21; }
	inline Shader_t2430389951 ** get_address_of_replacementClear_21() { return &___replacementClear_21; }
	inline void set_replacementClear_21(Shader_t2430389951 * value)
	{
		___replacementClear_21 = value;
		Il2CppCodeGenWriteBarrier(&___replacementClear_21, value);
	}

	inline static int32_t get_offset_of_motionBlurMaterial_22() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___motionBlurMaterial_22)); }
	inline Material_t193706927 * get_motionBlurMaterial_22() const { return ___motionBlurMaterial_22; }
	inline Material_t193706927 ** get_address_of_motionBlurMaterial_22() { return &___motionBlurMaterial_22; }
	inline void set_motionBlurMaterial_22(Material_t193706927 * value)
	{
		___motionBlurMaterial_22 = value;
		Il2CppCodeGenWriteBarrier(&___motionBlurMaterial_22, value);
	}

	inline static int32_t get_offset_of_dx11MotionBlurMaterial_23() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___dx11MotionBlurMaterial_23)); }
	inline Material_t193706927 * get_dx11MotionBlurMaterial_23() const { return ___dx11MotionBlurMaterial_23; }
	inline Material_t193706927 ** get_address_of_dx11MotionBlurMaterial_23() { return &___dx11MotionBlurMaterial_23; }
	inline void set_dx11MotionBlurMaterial_23(Material_t193706927 * value)
	{
		___dx11MotionBlurMaterial_23 = value;
		Il2CppCodeGenWriteBarrier(&___dx11MotionBlurMaterial_23, value);
	}

	inline static int32_t get_offset_of_noiseTexture_24() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___noiseTexture_24)); }
	inline Texture2D_t3542995729 * get_noiseTexture_24() const { return ___noiseTexture_24; }
	inline Texture2D_t3542995729 ** get_address_of_noiseTexture_24() { return &___noiseTexture_24; }
	inline void set_noiseTexture_24(Texture2D_t3542995729 * value)
	{
		___noiseTexture_24 = value;
		Il2CppCodeGenWriteBarrier(&___noiseTexture_24, value);
	}

	inline static int32_t get_offset_of_showVelocity_25() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___showVelocity_25)); }
	inline bool get_showVelocity_25() const { return ___showVelocity_25; }
	inline bool* get_address_of_showVelocity_25() { return &___showVelocity_25; }
	inline void set_showVelocity_25(bool value)
	{
		___showVelocity_25 = value;
	}

	inline static int32_t get_offset_of_showVelocityScale_26() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___showVelocityScale_26)); }
	inline float get_showVelocityScale_26() const { return ___showVelocityScale_26; }
	inline float* get_address_of_showVelocityScale_26() { return &___showVelocityScale_26; }
	inline void set_showVelocityScale_26(float value)
	{
		___showVelocityScale_26 = value;
	}

	inline static int32_t get_offset_of_currentViewProjMat_27() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___currentViewProjMat_27)); }
	inline Matrix4x4_t2933234003  get_currentViewProjMat_27() const { return ___currentViewProjMat_27; }
	inline Matrix4x4_t2933234003 * get_address_of_currentViewProjMat_27() { return &___currentViewProjMat_27; }
	inline void set_currentViewProjMat_27(Matrix4x4_t2933234003  value)
	{
		___currentViewProjMat_27 = value;
	}

	inline static int32_t get_offset_of_prevViewProjMat_28() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___prevViewProjMat_28)); }
	inline Matrix4x4_t2933234003  get_prevViewProjMat_28() const { return ___prevViewProjMat_28; }
	inline Matrix4x4_t2933234003 * get_address_of_prevViewProjMat_28() { return &___prevViewProjMat_28; }
	inline void set_prevViewProjMat_28(Matrix4x4_t2933234003  value)
	{
		___prevViewProjMat_28 = value;
	}

	inline static int32_t get_offset_of_prevFrameCount_29() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___prevFrameCount_29)); }
	inline int32_t get_prevFrameCount_29() const { return ___prevFrameCount_29; }
	inline int32_t* get_address_of_prevFrameCount_29() { return &___prevFrameCount_29; }
	inline void set_prevFrameCount_29(int32_t value)
	{
		___prevFrameCount_29 = value;
	}

	inline static int32_t get_offset_of_wasActive_30() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___wasActive_30)); }
	inline bool get_wasActive_30() const { return ___wasActive_30; }
	inline bool* get_address_of_wasActive_30() { return &___wasActive_30; }
	inline void set_wasActive_30(bool value)
	{
		___wasActive_30 = value;
	}

	inline static int32_t get_offset_of_prevFrameForward_31() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___prevFrameForward_31)); }
	inline Vector3_t2243707580  get_prevFrameForward_31() const { return ___prevFrameForward_31; }
	inline Vector3_t2243707580 * get_address_of_prevFrameForward_31() { return &___prevFrameForward_31; }
	inline void set_prevFrameForward_31(Vector3_t2243707580  value)
	{
		___prevFrameForward_31 = value;
	}

	inline static int32_t get_offset_of_prevFrameRight_32() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___prevFrameRight_32)); }
	inline Vector3_t2243707580  get_prevFrameRight_32() const { return ___prevFrameRight_32; }
	inline Vector3_t2243707580 * get_address_of_prevFrameRight_32() { return &___prevFrameRight_32; }
	inline void set_prevFrameRight_32(Vector3_t2243707580  value)
	{
		___prevFrameRight_32 = value;
	}

	inline static int32_t get_offset_of_prevFrameUp_33() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___prevFrameUp_33)); }
	inline Vector3_t2243707580  get_prevFrameUp_33() const { return ___prevFrameUp_33; }
	inline Vector3_t2243707580 * get_address_of_prevFrameUp_33() { return &___prevFrameUp_33; }
	inline void set_prevFrameUp_33(Vector3_t2243707580  value)
	{
		___prevFrameUp_33 = value;
	}

	inline static int32_t get_offset_of_prevFramePos_34() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768, ___prevFramePos_34)); }
	inline Vector3_t2243707580  get_prevFramePos_34() const { return ___prevFramePos_34; }
	inline Vector3_t2243707580 * get_address_of_prevFramePos_34() { return &___prevFramePos_34; }
	inline void set_prevFramePos_34(Vector3_t2243707580  value)
	{
		___prevFramePos_34 = value;
	}
};

struct CameraMotionBlur_t32230768_StaticFields
{
public:
	// System.Int32 CameraMotionBlur::MAX_RADIUS
	int32_t ___MAX_RADIUS_5;

public:
	inline static int32_t get_offset_of_MAX_RADIUS_5() { return static_cast<int32_t>(offsetof(CameraMotionBlur_t32230768_StaticFields, ___MAX_RADIUS_5)); }
	inline int32_t get_MAX_RADIUS_5() const { return ___MAX_RADIUS_5; }
	inline int32_t* get_address_of_MAX_RADIUS_5() { return &___MAX_RADIUS_5; }
	inline void set_MAX_RADIUS_5(int32_t value)
	{
		___MAX_RADIUS_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
