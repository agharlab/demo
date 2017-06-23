#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_DepthTextureMode1156392273.h"
#include "UnityEngine_UnityEngine_RenderingPath1538007819.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraInfo
struct  CameraInfo_t2478355941  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.DepthTextureMode CameraInfo::currentDepthMode
	int32_t ___currentDepthMode_2;
	// UnityEngine.RenderingPath CameraInfo::currentRenderPath
	int32_t ___currentRenderPath_3;
	// System.Int32 CameraInfo::recognizedPostFxCount
	int32_t ___recognizedPostFxCount_4;

public:
	inline static int32_t get_offset_of_currentDepthMode_2() { return static_cast<int32_t>(offsetof(CameraInfo_t2478355941, ___currentDepthMode_2)); }
	inline int32_t get_currentDepthMode_2() const { return ___currentDepthMode_2; }
	inline int32_t* get_address_of_currentDepthMode_2() { return &___currentDepthMode_2; }
	inline void set_currentDepthMode_2(int32_t value)
	{
		___currentDepthMode_2 = value;
	}

	inline static int32_t get_offset_of_currentRenderPath_3() { return static_cast<int32_t>(offsetof(CameraInfo_t2478355941, ___currentRenderPath_3)); }
	inline int32_t get_currentRenderPath_3() const { return ___currentRenderPath_3; }
	inline int32_t* get_address_of_currentRenderPath_3() { return &___currentRenderPath_3; }
	inline void set_currentRenderPath_3(int32_t value)
	{
		___currentRenderPath_3 = value;
	}

	inline static int32_t get_offset_of_recognizedPostFxCount_4() { return static_cast<int32_t>(offsetof(CameraInfo_t2478355941, ___recognizedPostFxCount_4)); }
	inline int32_t get_recognizedPostFxCount_4() const { return ___recognizedPostFxCount_4; }
	inline int32_t* get_address_of_recognizedPostFxCount_4() { return &___recognizedPostFxCount_4; }
	inline void set_recognizedPostFxCount_4(int32_t value)
	{
		___recognizedPostFxCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
