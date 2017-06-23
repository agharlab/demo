#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t1204166949;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomCameraRenderer
struct  CustomCameraRenderer_t150218021  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material CustomCameraRenderer::EffectMaterial
	Material_t193706927 * ___EffectMaterial_2;
	// UnityEngine.Texture CustomCameraRenderer::_currentFrame
	Texture_t2243626319 * ____currentFrame_3;
	// System.Boolean CustomCameraRenderer::_flipImage
	bool ____flipImage_4;
	// UnityEngine.Rendering.CommandBuffer CustomCameraRenderer::_drawFrameBuffer
	CommandBuffer_t1204166949 * ____drawFrameBuffer_5;
	// System.Int32 CustomCameraRenderer::_currentScreenWidth
	int32_t ____currentScreenWidth_6;
	// System.Int32 CustomCameraRenderer::_currentScreenHeight
	int32_t ____currentScreenHeight_7;

public:
	inline static int32_t get_offset_of_EffectMaterial_2() { return static_cast<int32_t>(offsetof(CustomCameraRenderer_t150218021, ___EffectMaterial_2)); }
	inline Material_t193706927 * get_EffectMaterial_2() const { return ___EffectMaterial_2; }
	inline Material_t193706927 ** get_address_of_EffectMaterial_2() { return &___EffectMaterial_2; }
	inline void set_EffectMaterial_2(Material_t193706927 * value)
	{
		___EffectMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___EffectMaterial_2, value);
	}

	inline static int32_t get_offset_of__currentFrame_3() { return static_cast<int32_t>(offsetof(CustomCameraRenderer_t150218021, ____currentFrame_3)); }
	inline Texture_t2243626319 * get__currentFrame_3() const { return ____currentFrame_3; }
	inline Texture_t2243626319 ** get_address_of__currentFrame_3() { return &____currentFrame_3; }
	inline void set__currentFrame_3(Texture_t2243626319 * value)
	{
		____currentFrame_3 = value;
		Il2CppCodeGenWriteBarrier(&____currentFrame_3, value);
	}

	inline static int32_t get_offset_of__flipImage_4() { return static_cast<int32_t>(offsetof(CustomCameraRenderer_t150218021, ____flipImage_4)); }
	inline bool get__flipImage_4() const { return ____flipImage_4; }
	inline bool* get_address_of__flipImage_4() { return &____flipImage_4; }
	inline void set__flipImage_4(bool value)
	{
		____flipImage_4 = value;
	}

	inline static int32_t get_offset_of__drawFrameBuffer_5() { return static_cast<int32_t>(offsetof(CustomCameraRenderer_t150218021, ____drawFrameBuffer_5)); }
	inline CommandBuffer_t1204166949 * get__drawFrameBuffer_5() const { return ____drawFrameBuffer_5; }
	inline CommandBuffer_t1204166949 ** get_address_of__drawFrameBuffer_5() { return &____drawFrameBuffer_5; }
	inline void set__drawFrameBuffer_5(CommandBuffer_t1204166949 * value)
	{
		____drawFrameBuffer_5 = value;
		Il2CppCodeGenWriteBarrier(&____drawFrameBuffer_5, value);
	}

	inline static int32_t get_offset_of__currentScreenWidth_6() { return static_cast<int32_t>(offsetof(CustomCameraRenderer_t150218021, ____currentScreenWidth_6)); }
	inline int32_t get__currentScreenWidth_6() const { return ____currentScreenWidth_6; }
	inline int32_t* get_address_of__currentScreenWidth_6() { return &____currentScreenWidth_6; }
	inline void set__currentScreenWidth_6(int32_t value)
	{
		____currentScreenWidth_6 = value;
	}

	inline static int32_t get_offset_of__currentScreenHeight_7() { return static_cast<int32_t>(offsetof(CustomCameraRenderer_t150218021, ____currentScreenHeight_7)); }
	inline int32_t get__currentScreenHeight_7() const { return ____currentScreenHeight_7; }
	inline int32_t* get_address_of__currentScreenHeight_7() { return &____currentScreenHeight_7; }
	inline void set__currentScreenHeight_7(int32_t value)
	{
		____currentScreenHeight_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
