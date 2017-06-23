#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.UnityBridge
struct  UnityBridge_t209696710  : public Il2CppObject
{
public:
	// System.String Wikitude.UnityBridge::_trackerManagerName
	String_t* ____trackerManagerName_0;

public:
	inline static int32_t get_offset_of__trackerManagerName_0() { return static_cast<int32_t>(offsetof(UnityBridge_t209696710, ____trackerManagerName_0)); }
	inline String_t* get__trackerManagerName_0() const { return ____trackerManagerName_0; }
	inline String_t** get_address_of__trackerManagerName_0() { return &____trackerManagerName_0; }
	inline void set__trackerManagerName_0(String_t* value)
	{
		____trackerManagerName_0 = value;
		Il2CppCodeGenWriteBarrier(&____trackerManagerName_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
