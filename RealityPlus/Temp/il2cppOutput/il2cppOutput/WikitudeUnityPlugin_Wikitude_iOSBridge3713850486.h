#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_ScreenOrientation4019489636.h"
#include "mscorlib_System_IntPtr2504060609.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.iOSBridge
struct  iOSBridge_t3713850486  : public Il2CppObject
{
public:
	// UnityEngine.ScreenOrientation Wikitude.iOSBridge::_screenOrientation
	int32_t ____screenOrientation_0;
	// System.IntPtr Wikitude.iOSBridge::_nativeFramePtr
	IntPtr_t ____nativeFramePtr_1;

public:
	inline static int32_t get_offset_of__screenOrientation_0() { return static_cast<int32_t>(offsetof(iOSBridge_t3713850486, ____screenOrientation_0)); }
	inline int32_t get__screenOrientation_0() const { return ____screenOrientation_0; }
	inline int32_t* get_address_of__screenOrientation_0() { return &____screenOrientation_0; }
	inline void set__screenOrientation_0(int32_t value)
	{
		____screenOrientation_0 = value;
	}

	inline static int32_t get_offset_of__nativeFramePtr_1() { return static_cast<int32_t>(offsetof(iOSBridge_t3713850486, ____nativeFramePtr_1)); }
	inline IntPtr_t get__nativeFramePtr_1() const { return ____nativeFramePtr_1; }
	inline IntPtr_t* get_address_of__nativeFramePtr_1() { return &____nativeFramePtr_1; }
	inline void set__nativeFramePtr_1(IntPtr_t value)
	{
		____nativeFramePtr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
