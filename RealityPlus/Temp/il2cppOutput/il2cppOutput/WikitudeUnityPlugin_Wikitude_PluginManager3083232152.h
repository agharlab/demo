#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Wikitude.PluginManager/OnCameraFrameAvailableEvent
struct OnCameraFrameAvailableEvent_t2791441841;
// Wikitude.PluginManager/OnPluginFailureEvent
struct OnPluginFailureEvent_t2397520937;
// Wikitude.IPlatformBridge
struct IPlatformBridge_t864295325;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.PluginManager
struct  PluginManager_t3083232152  : public MonoBehaviour_t1158329972
{
public:
	// Wikitude.PluginManager/OnCameraFrameAvailableEvent Wikitude.PluginManager::OnCameraFrameAvailable
	OnCameraFrameAvailableEvent_t2791441841 * ___OnCameraFrameAvailable_2;
	// Wikitude.PluginManager/OnPluginFailureEvent Wikitude.PluginManager::OnPluginFailure
	OnPluginFailureEvent_t2397520937 * ___OnPluginFailure_3;
	// Wikitude.IPlatformBridge Wikitude.PluginManager::_bridge
	Il2CppObject * ____bridge_4;

public:
	inline static int32_t get_offset_of_OnCameraFrameAvailable_2() { return static_cast<int32_t>(offsetof(PluginManager_t3083232152, ___OnCameraFrameAvailable_2)); }
	inline OnCameraFrameAvailableEvent_t2791441841 * get_OnCameraFrameAvailable_2() const { return ___OnCameraFrameAvailable_2; }
	inline OnCameraFrameAvailableEvent_t2791441841 ** get_address_of_OnCameraFrameAvailable_2() { return &___OnCameraFrameAvailable_2; }
	inline void set_OnCameraFrameAvailable_2(OnCameraFrameAvailableEvent_t2791441841 * value)
	{
		___OnCameraFrameAvailable_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnCameraFrameAvailable_2, value);
	}

	inline static int32_t get_offset_of_OnPluginFailure_3() { return static_cast<int32_t>(offsetof(PluginManager_t3083232152, ___OnPluginFailure_3)); }
	inline OnPluginFailureEvent_t2397520937 * get_OnPluginFailure_3() const { return ___OnPluginFailure_3; }
	inline OnPluginFailureEvent_t2397520937 ** get_address_of_OnPluginFailure_3() { return &___OnPluginFailure_3; }
	inline void set_OnPluginFailure_3(OnPluginFailureEvent_t2397520937 * value)
	{
		___OnPluginFailure_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnPluginFailure_3, value);
	}

	inline static int32_t get_offset_of__bridge_4() { return static_cast<int32_t>(offsetof(PluginManager_t3083232152, ____bridge_4)); }
	inline Il2CppObject * get__bridge_4() const { return ____bridge_4; }
	inline Il2CppObject ** get_address_of__bridge_4() { return &____bridge_4; }
	inline void set__bridge_4(Il2CppObject * value)
	{
		____bridge_4 = value;
		Il2CppCodeGenWriteBarrier(&____bridge_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
