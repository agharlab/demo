#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Wikitude.TrackerManager
struct TrackerManager_t130000407;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.WikitudeBridge
struct  WikitudeBridge_t1522526835  : public Il2CppObject
{
public:
	// Wikitude.TrackerManager Wikitude.WikitudeBridge::_trackerManager
	TrackerManager_t130000407 * ____trackerManager_0;
	// UnityEngine.GameObject Wikitude.WikitudeBridge::_trackerManagerGameObject
	GameObject_t1756533147 * ____trackerManagerGameObject_1;

public:
	inline static int32_t get_offset_of__trackerManager_0() { return static_cast<int32_t>(offsetof(WikitudeBridge_t1522526835, ____trackerManager_0)); }
	inline TrackerManager_t130000407 * get__trackerManager_0() const { return ____trackerManager_0; }
	inline TrackerManager_t130000407 ** get_address_of__trackerManager_0() { return &____trackerManager_0; }
	inline void set__trackerManager_0(TrackerManager_t130000407 * value)
	{
		____trackerManager_0 = value;
		Il2CppCodeGenWriteBarrier(&____trackerManager_0, value);
	}

	inline static int32_t get_offset_of__trackerManagerGameObject_1() { return static_cast<int32_t>(offsetof(WikitudeBridge_t1522526835, ____trackerManagerGameObject_1)); }
	inline GameObject_t1756533147 * get__trackerManagerGameObject_1() const { return ____trackerManagerGameObject_1; }
	inline GameObject_t1756533147 ** get_address_of__trackerManagerGameObject_1() { return &____trackerManagerGameObject_1; }
	inline void set__trackerManagerGameObject_1(GameObject_t1756533147 * value)
	{
		____trackerManagerGameObject_1 = value;
		Il2CppCodeGenWriteBarrier(&____trackerManagerGameObject_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
