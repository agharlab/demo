#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Wikitude.IPlatformBridge
struct IPlatformBridge_t864295325;
// Wikitude.SDKBuildInformation
struct SDKBuildInformation_t1997552748;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.WikitudeSDK
struct  WikitudeSDK_t4145097758  : public Il2CppObject
{
public:

public:
};

struct WikitudeSDK_t4145097758_StaticFields
{
public:
	// Wikitude.IPlatformBridge Wikitude.WikitudeSDK::_bridge
	Il2CppObject * ____bridge_0;
	// Wikitude.SDKBuildInformation Wikitude.WikitudeSDK::_cachedBuildInformation
	SDKBuildInformation_t1997552748 * ____cachedBuildInformation_1;

public:
	inline static int32_t get_offset_of__bridge_0() { return static_cast<int32_t>(offsetof(WikitudeSDK_t4145097758_StaticFields, ____bridge_0)); }
	inline Il2CppObject * get__bridge_0() const { return ____bridge_0; }
	inline Il2CppObject ** get_address_of__bridge_0() { return &____bridge_0; }
	inline void set__bridge_0(Il2CppObject * value)
	{
		____bridge_0 = value;
		Il2CppCodeGenWriteBarrier(&____bridge_0, value);
	}

	inline static int32_t get_offset_of__cachedBuildInformation_1() { return static_cast<int32_t>(offsetof(WikitudeSDK_t4145097758_StaticFields, ____cachedBuildInformation_1)); }
	inline SDKBuildInformation_t1997552748 * get__cachedBuildInformation_1() const { return ____cachedBuildInformation_1; }
	inline SDKBuildInformation_t1997552748 ** get_address_of__cachedBuildInformation_1() { return &____cachedBuildInformation_1; }
	inline void set__cachedBuildInformation_1(SDKBuildInformation_t1997552748 * value)
	{
		____cachedBuildInformation_1 = value;
		Il2CppCodeGenWriteBarrier(&____cachedBuildInformation_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
