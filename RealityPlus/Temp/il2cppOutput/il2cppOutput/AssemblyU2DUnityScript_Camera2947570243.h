#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animation
struct Animation_t2068071072;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Camera
struct  Camera_t2947570243  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Camera::selectTargetObject
	Transform_t3275118058 * ___selectTargetObject_2;
	// UnityEngine.Animation Camera::selectAnimatedObject
	Animation_t2068071072 * ___selectAnimatedObject_3;

public:
	inline static int32_t get_offset_of_selectTargetObject_2() { return static_cast<int32_t>(offsetof(Camera_t2947570243, ___selectTargetObject_2)); }
	inline Transform_t3275118058 * get_selectTargetObject_2() const { return ___selectTargetObject_2; }
	inline Transform_t3275118058 ** get_address_of_selectTargetObject_2() { return &___selectTargetObject_2; }
	inline void set_selectTargetObject_2(Transform_t3275118058 * value)
	{
		___selectTargetObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___selectTargetObject_2, value);
	}

	inline static int32_t get_offset_of_selectAnimatedObject_3() { return static_cast<int32_t>(offsetof(Camera_t2947570243, ___selectAnimatedObject_3)); }
	inline Animation_t2068071072 * get_selectAnimatedObject_3() const { return ___selectAnimatedObject_3; }
	inline Animation_t2068071072 ** get_address_of_selectAnimatedObject_3() { return &___selectAnimatedObject_3; }
	inline void set_selectAnimatedObject_3(Animation_t2068071072 * value)
	{
		___selectAnimatedObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___selectAnimatedObject_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
