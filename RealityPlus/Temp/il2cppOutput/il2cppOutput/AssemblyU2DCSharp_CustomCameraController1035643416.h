#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_SampleController1035474834.h"

// Wikitude.WikitudeCamera
struct WikitudeCamera_t2517845841;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1079476942;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomCameraController
struct  CustomCameraController_t1035643416  : public SampleController_t1035474834
{
public:
	// Wikitude.WikitudeCamera CustomCameraController::WikitudeCam
	WikitudeCamera_t2517845841 * ___WikitudeCam_2;
	// UnityEngine.WebCamTexture CustomCameraController::_feed
	WebCamTexture_t1079476942 * ____feed_3;
	// System.Int32 CustomCameraController::_frameDataSize
	int32_t ____frameDataSize_6;
	// System.Int32 CustomCameraController::_frameIndex
	int32_t ____frameIndex_7;
	// UnityEngine.Color32[] CustomCameraController::_pixels
	Color32U5BU5D_t30278651* ____pixels_8;

public:
	inline static int32_t get_offset_of_WikitudeCam_2() { return static_cast<int32_t>(offsetof(CustomCameraController_t1035643416, ___WikitudeCam_2)); }
	inline WikitudeCamera_t2517845841 * get_WikitudeCam_2() const { return ___WikitudeCam_2; }
	inline WikitudeCamera_t2517845841 ** get_address_of_WikitudeCam_2() { return &___WikitudeCam_2; }
	inline void set_WikitudeCam_2(WikitudeCamera_t2517845841 * value)
	{
		___WikitudeCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___WikitudeCam_2, value);
	}

	inline static int32_t get_offset_of__feed_3() { return static_cast<int32_t>(offsetof(CustomCameraController_t1035643416, ____feed_3)); }
	inline WebCamTexture_t1079476942 * get__feed_3() const { return ____feed_3; }
	inline WebCamTexture_t1079476942 ** get_address_of__feed_3() { return &____feed_3; }
	inline void set__feed_3(WebCamTexture_t1079476942 * value)
	{
		____feed_3 = value;
		Il2CppCodeGenWriteBarrier(&____feed_3, value);
	}

	inline static int32_t get_offset_of__frameDataSize_6() { return static_cast<int32_t>(offsetof(CustomCameraController_t1035643416, ____frameDataSize_6)); }
	inline int32_t get__frameDataSize_6() const { return ____frameDataSize_6; }
	inline int32_t* get_address_of__frameDataSize_6() { return &____frameDataSize_6; }
	inline void set__frameDataSize_6(int32_t value)
	{
		____frameDataSize_6 = value;
	}

	inline static int32_t get_offset_of__frameIndex_7() { return static_cast<int32_t>(offsetof(CustomCameraController_t1035643416, ____frameIndex_7)); }
	inline int32_t get__frameIndex_7() const { return ____frameIndex_7; }
	inline int32_t* get_address_of__frameIndex_7() { return &____frameIndex_7; }
	inline void set__frameIndex_7(int32_t value)
	{
		____frameIndex_7 = value;
	}

	inline static int32_t get_offset_of__pixels_8() { return static_cast<int32_t>(offsetof(CustomCameraController_t1035643416, ____pixels_8)); }
	inline Color32U5BU5D_t30278651* get__pixels_8() const { return ____pixels_8; }
	inline Color32U5BU5D_t30278651** get_address_of__pixels_8() { return &____pixels_8; }
	inline void set__pixels_8(Color32U5BU5D_t30278651* value)
	{
		____pixels_8 = value;
		Il2CppCodeGenWriteBarrier(&____pixels_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
