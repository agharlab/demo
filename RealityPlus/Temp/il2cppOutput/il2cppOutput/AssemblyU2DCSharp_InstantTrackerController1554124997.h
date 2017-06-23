#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_SampleController1035474834.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "WikitudeUnityPlugin_Wikitude_InstantTrackingState4068257203.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// Wikitude.InstantTracker
struct InstantTracker_t2685404523;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t2241232412;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.UI.Image
struct Image_t2042527209;
// MoveController
struct MoveController_t2913498283;
// GridRenderer
struct GridRenderer_t1179619227;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t89994001;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InstantTrackerController
struct  InstantTrackerController_t1554124997  : public SampleController_t1035474834
{
public:
	// UnityEngine.GameObject InstantTrackerController::ButtonDock
	GameObject_t1756533147 * ___ButtonDock_2;
	// UnityEngine.GameObject InstantTrackerController::InitializationControls
	GameObject_t1756533147 * ___InitializationControls_3;
	// UnityEngine.UI.Text InstantTrackerController::HeightLabel
	Text_t356221433 * ___HeightLabel_4;
	// UnityEngine.UI.Text InstantTrackerController::ScaleLabel
	Text_t356221433 * ___ScaleLabel_5;
	// Wikitude.InstantTracker InstantTrackerController::Tracker
	InstantTracker_t2685404523 * ___Tracker_6;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> InstantTrackerController::Buttons
	List_1_t2241232412 * ___Buttons_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> InstantTrackerController::Models
	List_1_t1125654279 * ___Models_8;
	// UnityEngine.UI.Image InstantTrackerController::ActivityIndicator
	Image_t2042527209 * ___ActivityIndicator_9;
	// UnityEngine.Color InstantTrackerController::EnabledColor
	Color_t2020392075  ___EnabledColor_10;
	// UnityEngine.Color InstantTrackerController::DisabledColor
	Color_t2020392075  ___DisabledColor_11;
	// System.Single InstantTrackerController::_currentDeviceHeightAboveGround
	float ____currentDeviceHeightAboveGround_12;
	// MoveController InstantTrackerController::_moveController
	MoveController_t2913498283 * ____moveController_13;
	// GridRenderer InstantTrackerController::_gridRenderer
	GridRenderer_t1179619227 * ____gridRenderer_14;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> InstantTrackerController::_activeModels
	HashSet_1_t89994001 * ____activeModels_15;
	// Wikitude.InstantTrackingState InstantTrackerController::_currentState
	int32_t ____currentState_16;
	// System.Boolean InstantTrackerController::_isTracking
	bool ____isTracking_17;

public:
	inline static int32_t get_offset_of_ButtonDock_2() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ___ButtonDock_2)); }
	inline GameObject_t1756533147 * get_ButtonDock_2() const { return ___ButtonDock_2; }
	inline GameObject_t1756533147 ** get_address_of_ButtonDock_2() { return &___ButtonDock_2; }
	inline void set_ButtonDock_2(GameObject_t1756533147 * value)
	{
		___ButtonDock_2 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonDock_2, value);
	}

	inline static int32_t get_offset_of_InitializationControls_3() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ___InitializationControls_3)); }
	inline GameObject_t1756533147 * get_InitializationControls_3() const { return ___InitializationControls_3; }
	inline GameObject_t1756533147 ** get_address_of_InitializationControls_3() { return &___InitializationControls_3; }
	inline void set_InitializationControls_3(GameObject_t1756533147 * value)
	{
		___InitializationControls_3 = value;
		Il2CppCodeGenWriteBarrier(&___InitializationControls_3, value);
	}

	inline static int32_t get_offset_of_HeightLabel_4() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ___HeightLabel_4)); }
	inline Text_t356221433 * get_HeightLabel_4() const { return ___HeightLabel_4; }
	inline Text_t356221433 ** get_address_of_HeightLabel_4() { return &___HeightLabel_4; }
	inline void set_HeightLabel_4(Text_t356221433 * value)
	{
		___HeightLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___HeightLabel_4, value);
	}

	inline static int32_t get_offset_of_ScaleLabel_5() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ___ScaleLabel_5)); }
	inline Text_t356221433 * get_ScaleLabel_5() const { return ___ScaleLabel_5; }
	inline Text_t356221433 ** get_address_of_ScaleLabel_5() { return &___ScaleLabel_5; }
	inline void set_ScaleLabel_5(Text_t356221433 * value)
	{
		___ScaleLabel_5 = value;
		Il2CppCodeGenWriteBarrier(&___ScaleLabel_5, value);
	}

	inline static int32_t get_offset_of_Tracker_6() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ___Tracker_6)); }
	inline InstantTracker_t2685404523 * get_Tracker_6() const { return ___Tracker_6; }
	inline InstantTracker_t2685404523 ** get_address_of_Tracker_6() { return &___Tracker_6; }
	inline void set_Tracker_6(InstantTracker_t2685404523 * value)
	{
		___Tracker_6 = value;
		Il2CppCodeGenWriteBarrier(&___Tracker_6, value);
	}

	inline static int32_t get_offset_of_Buttons_7() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ___Buttons_7)); }
	inline List_1_t2241232412 * get_Buttons_7() const { return ___Buttons_7; }
	inline List_1_t2241232412 ** get_address_of_Buttons_7() { return &___Buttons_7; }
	inline void set_Buttons_7(List_1_t2241232412 * value)
	{
		___Buttons_7 = value;
		Il2CppCodeGenWriteBarrier(&___Buttons_7, value);
	}

	inline static int32_t get_offset_of_Models_8() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ___Models_8)); }
	inline List_1_t1125654279 * get_Models_8() const { return ___Models_8; }
	inline List_1_t1125654279 ** get_address_of_Models_8() { return &___Models_8; }
	inline void set_Models_8(List_1_t1125654279 * value)
	{
		___Models_8 = value;
		Il2CppCodeGenWriteBarrier(&___Models_8, value);
	}

	inline static int32_t get_offset_of_ActivityIndicator_9() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ___ActivityIndicator_9)); }
	inline Image_t2042527209 * get_ActivityIndicator_9() const { return ___ActivityIndicator_9; }
	inline Image_t2042527209 ** get_address_of_ActivityIndicator_9() { return &___ActivityIndicator_9; }
	inline void set_ActivityIndicator_9(Image_t2042527209 * value)
	{
		___ActivityIndicator_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActivityIndicator_9, value);
	}

	inline static int32_t get_offset_of_EnabledColor_10() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ___EnabledColor_10)); }
	inline Color_t2020392075  get_EnabledColor_10() const { return ___EnabledColor_10; }
	inline Color_t2020392075 * get_address_of_EnabledColor_10() { return &___EnabledColor_10; }
	inline void set_EnabledColor_10(Color_t2020392075  value)
	{
		___EnabledColor_10 = value;
	}

	inline static int32_t get_offset_of_DisabledColor_11() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ___DisabledColor_11)); }
	inline Color_t2020392075  get_DisabledColor_11() const { return ___DisabledColor_11; }
	inline Color_t2020392075 * get_address_of_DisabledColor_11() { return &___DisabledColor_11; }
	inline void set_DisabledColor_11(Color_t2020392075  value)
	{
		___DisabledColor_11 = value;
	}

	inline static int32_t get_offset_of__currentDeviceHeightAboveGround_12() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ____currentDeviceHeightAboveGround_12)); }
	inline float get__currentDeviceHeightAboveGround_12() const { return ____currentDeviceHeightAboveGround_12; }
	inline float* get_address_of__currentDeviceHeightAboveGround_12() { return &____currentDeviceHeightAboveGround_12; }
	inline void set__currentDeviceHeightAboveGround_12(float value)
	{
		____currentDeviceHeightAboveGround_12 = value;
	}

	inline static int32_t get_offset_of__moveController_13() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ____moveController_13)); }
	inline MoveController_t2913498283 * get__moveController_13() const { return ____moveController_13; }
	inline MoveController_t2913498283 ** get_address_of__moveController_13() { return &____moveController_13; }
	inline void set__moveController_13(MoveController_t2913498283 * value)
	{
		____moveController_13 = value;
		Il2CppCodeGenWriteBarrier(&____moveController_13, value);
	}

	inline static int32_t get_offset_of__gridRenderer_14() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ____gridRenderer_14)); }
	inline GridRenderer_t1179619227 * get__gridRenderer_14() const { return ____gridRenderer_14; }
	inline GridRenderer_t1179619227 ** get_address_of__gridRenderer_14() { return &____gridRenderer_14; }
	inline void set__gridRenderer_14(GridRenderer_t1179619227 * value)
	{
		____gridRenderer_14 = value;
		Il2CppCodeGenWriteBarrier(&____gridRenderer_14, value);
	}

	inline static int32_t get_offset_of__activeModels_15() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ____activeModels_15)); }
	inline HashSet_1_t89994001 * get__activeModels_15() const { return ____activeModels_15; }
	inline HashSet_1_t89994001 ** get_address_of__activeModels_15() { return &____activeModels_15; }
	inline void set__activeModels_15(HashSet_1_t89994001 * value)
	{
		____activeModels_15 = value;
		Il2CppCodeGenWriteBarrier(&____activeModels_15, value);
	}

	inline static int32_t get_offset_of__currentState_16() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ____currentState_16)); }
	inline int32_t get__currentState_16() const { return ____currentState_16; }
	inline int32_t* get_address_of__currentState_16() { return &____currentState_16; }
	inline void set__currentState_16(int32_t value)
	{
		____currentState_16 = value;
	}

	inline static int32_t get_offset_of__isTracking_17() { return static_cast<int32_t>(offsetof(InstantTrackerController_t1554124997, ____isTracking_17)); }
	inline bool get__isTracking_17() const { return ____isTracking_17; }
	inline bool* get_address_of__isTracking_17() { return &____isTracking_17; }
	inline void set__isTracking_17(bool value)
	{
		____isTracking_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
