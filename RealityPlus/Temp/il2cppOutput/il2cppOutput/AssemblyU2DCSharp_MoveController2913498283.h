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
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// InstantTrackerController
struct InstantTrackerController_t1554124997;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveController
struct  MoveController_t2913498283  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform MoveController::_activeObject
	Transform_t3275118058 * ____activeObject_2;
	// UnityEngine.Vector3 MoveController::_startObjectPosition
	Vector3_t2243707580  ____startObjectPosition_3;
	// UnityEngine.Vector2 MoveController::_startTouchPosition
	Vector2_t2243707579  ____startTouchPosition_4;
	// UnityEngine.Vector2 MoveController::_touchOffset
	Vector2_t2243707579  ____touchOffset_5;
	// InstantTrackerController MoveController::_controller
	InstantTrackerController_t1554124997 * ____controller_6;

public:
	inline static int32_t get_offset_of__activeObject_2() { return static_cast<int32_t>(offsetof(MoveController_t2913498283, ____activeObject_2)); }
	inline Transform_t3275118058 * get__activeObject_2() const { return ____activeObject_2; }
	inline Transform_t3275118058 ** get_address_of__activeObject_2() { return &____activeObject_2; }
	inline void set__activeObject_2(Transform_t3275118058 * value)
	{
		____activeObject_2 = value;
		Il2CppCodeGenWriteBarrier(&____activeObject_2, value);
	}

	inline static int32_t get_offset_of__startObjectPosition_3() { return static_cast<int32_t>(offsetof(MoveController_t2913498283, ____startObjectPosition_3)); }
	inline Vector3_t2243707580  get__startObjectPosition_3() const { return ____startObjectPosition_3; }
	inline Vector3_t2243707580 * get_address_of__startObjectPosition_3() { return &____startObjectPosition_3; }
	inline void set__startObjectPosition_3(Vector3_t2243707580  value)
	{
		____startObjectPosition_3 = value;
	}

	inline static int32_t get_offset_of__startTouchPosition_4() { return static_cast<int32_t>(offsetof(MoveController_t2913498283, ____startTouchPosition_4)); }
	inline Vector2_t2243707579  get__startTouchPosition_4() const { return ____startTouchPosition_4; }
	inline Vector2_t2243707579 * get_address_of__startTouchPosition_4() { return &____startTouchPosition_4; }
	inline void set__startTouchPosition_4(Vector2_t2243707579  value)
	{
		____startTouchPosition_4 = value;
	}

	inline static int32_t get_offset_of__touchOffset_5() { return static_cast<int32_t>(offsetof(MoveController_t2913498283, ____touchOffset_5)); }
	inline Vector2_t2243707579  get__touchOffset_5() const { return ____touchOffset_5; }
	inline Vector2_t2243707579 * get_address_of__touchOffset_5() { return &____touchOffset_5; }
	inline void set__touchOffset_5(Vector2_t2243707579  value)
	{
		____touchOffset_5 = value;
	}

	inline static int32_t get_offset_of__controller_6() { return static_cast<int32_t>(offsetof(MoveController_t2913498283, ____controller_6)); }
	inline InstantTrackerController_t1554124997 * get__controller_6() const { return ____controller_6; }
	inline InstantTrackerController_t1554124997 ** get_address_of__controller_6() { return &____controller_6; }
	inline void set__controller_6(InstantTrackerController_t1554124997 * value)
	{
		____controller_6 = value;
		Il2CppCodeGenWriteBarrier(&____controller_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
