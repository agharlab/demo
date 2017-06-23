#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// InstantTrackerController
struct InstantTrackerController_t1554124997;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScaleController
struct  ScaleController_t126727534  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ScaleController::MinScale
	float ___MinScale_2;
	// System.Single ScaleController::MaxScale
	float ___MaxScale_3;
	// InstantTrackerController ScaleController::_controller
	InstantTrackerController_t1554124997 * ____controller_4;
	// UnityEngine.Transform ScaleController::_activeObject
	Transform_t3275118058 * ____activeObject_5;
	// UnityEngine.Vector3 ScaleController::_touch1StartGroundPosition
	Vector3_t2243707580  ____touch1StartGroundPosition_6;
	// UnityEngine.Vector3 ScaleController::_touch2StartGroundPosition
	Vector3_t2243707580  ____touch2StartGroundPosition_7;
	// UnityEngine.Vector3 ScaleController::_startObjectScale
	Vector3_t2243707580  ____startObjectScale_8;

public:
	inline static int32_t get_offset_of_MinScale_2() { return static_cast<int32_t>(offsetof(ScaleController_t126727534, ___MinScale_2)); }
	inline float get_MinScale_2() const { return ___MinScale_2; }
	inline float* get_address_of_MinScale_2() { return &___MinScale_2; }
	inline void set_MinScale_2(float value)
	{
		___MinScale_2 = value;
	}

	inline static int32_t get_offset_of_MaxScale_3() { return static_cast<int32_t>(offsetof(ScaleController_t126727534, ___MaxScale_3)); }
	inline float get_MaxScale_3() const { return ___MaxScale_3; }
	inline float* get_address_of_MaxScale_3() { return &___MaxScale_3; }
	inline void set_MaxScale_3(float value)
	{
		___MaxScale_3 = value;
	}

	inline static int32_t get_offset_of__controller_4() { return static_cast<int32_t>(offsetof(ScaleController_t126727534, ____controller_4)); }
	inline InstantTrackerController_t1554124997 * get__controller_4() const { return ____controller_4; }
	inline InstantTrackerController_t1554124997 ** get_address_of__controller_4() { return &____controller_4; }
	inline void set__controller_4(InstantTrackerController_t1554124997 * value)
	{
		____controller_4 = value;
		Il2CppCodeGenWriteBarrier(&____controller_4, value);
	}

	inline static int32_t get_offset_of__activeObject_5() { return static_cast<int32_t>(offsetof(ScaleController_t126727534, ____activeObject_5)); }
	inline Transform_t3275118058 * get__activeObject_5() const { return ____activeObject_5; }
	inline Transform_t3275118058 ** get_address_of__activeObject_5() { return &____activeObject_5; }
	inline void set__activeObject_5(Transform_t3275118058 * value)
	{
		____activeObject_5 = value;
		Il2CppCodeGenWriteBarrier(&____activeObject_5, value);
	}

	inline static int32_t get_offset_of__touch1StartGroundPosition_6() { return static_cast<int32_t>(offsetof(ScaleController_t126727534, ____touch1StartGroundPosition_6)); }
	inline Vector3_t2243707580  get__touch1StartGroundPosition_6() const { return ____touch1StartGroundPosition_6; }
	inline Vector3_t2243707580 * get_address_of__touch1StartGroundPosition_6() { return &____touch1StartGroundPosition_6; }
	inline void set__touch1StartGroundPosition_6(Vector3_t2243707580  value)
	{
		____touch1StartGroundPosition_6 = value;
	}

	inline static int32_t get_offset_of__touch2StartGroundPosition_7() { return static_cast<int32_t>(offsetof(ScaleController_t126727534, ____touch2StartGroundPosition_7)); }
	inline Vector3_t2243707580  get__touch2StartGroundPosition_7() const { return ____touch2StartGroundPosition_7; }
	inline Vector3_t2243707580 * get_address_of__touch2StartGroundPosition_7() { return &____touch2StartGroundPosition_7; }
	inline void set__touch2StartGroundPosition_7(Vector3_t2243707580  value)
	{
		____touch2StartGroundPosition_7 = value;
	}

	inline static int32_t get_offset_of__startObjectScale_8() { return static_cast<int32_t>(offsetof(ScaleController_t126727534, ____startObjectScale_8)); }
	inline Vector3_t2243707580  get__startObjectScale_8() const { return ____startObjectScale_8; }
	inline Vector3_t2243707580 * get_address_of__startObjectScale_8() { return &____startObjectScale_8; }
	inline void set__startObjectScale_8(Vector3_t2243707580  value)
	{
		____startObjectScale_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
