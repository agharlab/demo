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
// System.Collections.Generic.List`1<CustomRenderingController/InputFrameData>
struct List_1_t3960385407;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;
// CustomCameraRenderer
struct CustomCameraRenderer_t150218021;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomRenderingController
struct  CustomRenderingController_t2484634267  : public SampleController_t1035474834
{
public:
	// Wikitude.WikitudeCamera CustomRenderingController::WikitudeCam
	WikitudeCamera_t2517845841 * ___WikitudeCam_2;
	// UnityEngine.WebCamTexture CustomRenderingController::_feed
	WebCamTexture_t1079476942 * ____feed_3;
	// System.Int32 CustomRenderingController::_frameDataSize
	int32_t ____frameDataSize_6;
	// System.Int32 CustomRenderingController::_frameIndex
	int32_t ____frameIndex_7;
	// System.Int32 CustomRenderingController::_bufferWriteIndex
	int32_t ____bufferWriteIndex_8;
	// System.Int32 CustomRenderingController::_bufferReadIndex
	int32_t ____bufferReadIndex_9;
	// System.Int32 CustomRenderingController::_bufferCount
	int32_t ____bufferCount_10;
	// System.Collections.Generic.List`1<CustomRenderingController/InputFrameData> CustomRenderingController::_ringBuffer
	List_1_t3960385407 * ____ringBuffer_11;
	// UnityEngine.Color32[] CustomRenderingController::_colorData
	Color32U5BU5D_t30278651* ____colorData_12;
	// CustomCameraRenderer CustomRenderingController::Renderer
	CustomCameraRenderer_t150218021 * ___Renderer_13;

public:
	inline static int32_t get_offset_of_WikitudeCam_2() { return static_cast<int32_t>(offsetof(CustomRenderingController_t2484634267, ___WikitudeCam_2)); }
	inline WikitudeCamera_t2517845841 * get_WikitudeCam_2() const { return ___WikitudeCam_2; }
	inline WikitudeCamera_t2517845841 ** get_address_of_WikitudeCam_2() { return &___WikitudeCam_2; }
	inline void set_WikitudeCam_2(WikitudeCamera_t2517845841 * value)
	{
		___WikitudeCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___WikitudeCam_2, value);
	}

	inline static int32_t get_offset_of__feed_3() { return static_cast<int32_t>(offsetof(CustomRenderingController_t2484634267, ____feed_3)); }
	inline WebCamTexture_t1079476942 * get__feed_3() const { return ____feed_3; }
	inline WebCamTexture_t1079476942 ** get_address_of__feed_3() { return &____feed_3; }
	inline void set__feed_3(WebCamTexture_t1079476942 * value)
	{
		____feed_3 = value;
		Il2CppCodeGenWriteBarrier(&____feed_3, value);
	}

	inline static int32_t get_offset_of__frameDataSize_6() { return static_cast<int32_t>(offsetof(CustomRenderingController_t2484634267, ____frameDataSize_6)); }
	inline int32_t get__frameDataSize_6() const { return ____frameDataSize_6; }
	inline int32_t* get_address_of__frameDataSize_6() { return &____frameDataSize_6; }
	inline void set__frameDataSize_6(int32_t value)
	{
		____frameDataSize_6 = value;
	}

	inline static int32_t get_offset_of__frameIndex_7() { return static_cast<int32_t>(offsetof(CustomRenderingController_t2484634267, ____frameIndex_7)); }
	inline int32_t get__frameIndex_7() const { return ____frameIndex_7; }
	inline int32_t* get_address_of__frameIndex_7() { return &____frameIndex_7; }
	inline void set__frameIndex_7(int32_t value)
	{
		____frameIndex_7 = value;
	}

	inline static int32_t get_offset_of__bufferWriteIndex_8() { return static_cast<int32_t>(offsetof(CustomRenderingController_t2484634267, ____bufferWriteIndex_8)); }
	inline int32_t get__bufferWriteIndex_8() const { return ____bufferWriteIndex_8; }
	inline int32_t* get_address_of__bufferWriteIndex_8() { return &____bufferWriteIndex_8; }
	inline void set__bufferWriteIndex_8(int32_t value)
	{
		____bufferWriteIndex_8 = value;
	}

	inline static int32_t get_offset_of__bufferReadIndex_9() { return static_cast<int32_t>(offsetof(CustomRenderingController_t2484634267, ____bufferReadIndex_9)); }
	inline int32_t get__bufferReadIndex_9() const { return ____bufferReadIndex_9; }
	inline int32_t* get_address_of__bufferReadIndex_9() { return &____bufferReadIndex_9; }
	inline void set__bufferReadIndex_9(int32_t value)
	{
		____bufferReadIndex_9 = value;
	}

	inline static int32_t get_offset_of__bufferCount_10() { return static_cast<int32_t>(offsetof(CustomRenderingController_t2484634267, ____bufferCount_10)); }
	inline int32_t get__bufferCount_10() const { return ____bufferCount_10; }
	inline int32_t* get_address_of__bufferCount_10() { return &____bufferCount_10; }
	inline void set__bufferCount_10(int32_t value)
	{
		____bufferCount_10 = value;
	}

	inline static int32_t get_offset_of__ringBuffer_11() { return static_cast<int32_t>(offsetof(CustomRenderingController_t2484634267, ____ringBuffer_11)); }
	inline List_1_t3960385407 * get__ringBuffer_11() const { return ____ringBuffer_11; }
	inline List_1_t3960385407 ** get_address_of__ringBuffer_11() { return &____ringBuffer_11; }
	inline void set__ringBuffer_11(List_1_t3960385407 * value)
	{
		____ringBuffer_11 = value;
		Il2CppCodeGenWriteBarrier(&____ringBuffer_11, value);
	}

	inline static int32_t get_offset_of__colorData_12() { return static_cast<int32_t>(offsetof(CustomRenderingController_t2484634267, ____colorData_12)); }
	inline Color32U5BU5D_t30278651* get__colorData_12() const { return ____colorData_12; }
	inline Color32U5BU5D_t30278651** get_address_of__colorData_12() { return &____colorData_12; }
	inline void set__colorData_12(Color32U5BU5D_t30278651* value)
	{
		____colorData_12 = value;
		Il2CppCodeGenWriteBarrier(&____colorData_12, value);
	}

	inline static int32_t get_offset_of_Renderer_13() { return static_cast<int32_t>(offsetof(CustomRenderingController_t2484634267, ___Renderer_13)); }
	inline CustomCameraRenderer_t150218021 * get_Renderer_13() const { return ___Renderer_13; }
	inline CustomCameraRenderer_t150218021 ** get_address_of_Renderer_13() { return &___Renderer_13; }
	inline void set_Renderer_13(CustomCameraRenderer_t150218021 * value)
	{
		___Renderer_13 = value;
		Il2CppCodeGenWriteBarrier(&___Renderer_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
