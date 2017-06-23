#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_SampleController1035474834.h"

// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Wikitude.ImageTracker
struct ImageTracker_t1984565635;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RuntimeTrackerController
struct  RuntimeTrackerController_t1614694092  : public SampleController_t1035474834
{
public:
	// UnityEngine.UI.InputField RuntimeTrackerController::Url
	InputField_t1631627530 * ___Url_2;
	// UnityEngine.GameObject RuntimeTrackerController::TrackablePrefab
	GameObject_t1756533147 * ___TrackablePrefab_3;
	// UnityEngine.GameObject RuntimeTrackerController::CarInstructions
	GameObject_t1756533147 * ___CarInstructions_4;
	// Wikitude.ImageTracker RuntimeTrackerController::_currentTracker
	ImageTracker_t1984565635 * ____currentTracker_5;
	// System.Boolean RuntimeTrackerController::_isLoadingTracker
	bool ____isLoadingTracker_6;

public:
	inline static int32_t get_offset_of_Url_2() { return static_cast<int32_t>(offsetof(RuntimeTrackerController_t1614694092, ___Url_2)); }
	inline InputField_t1631627530 * get_Url_2() const { return ___Url_2; }
	inline InputField_t1631627530 ** get_address_of_Url_2() { return &___Url_2; }
	inline void set_Url_2(InputField_t1631627530 * value)
	{
		___Url_2 = value;
		Il2CppCodeGenWriteBarrier(&___Url_2, value);
	}

	inline static int32_t get_offset_of_TrackablePrefab_3() { return static_cast<int32_t>(offsetof(RuntimeTrackerController_t1614694092, ___TrackablePrefab_3)); }
	inline GameObject_t1756533147 * get_TrackablePrefab_3() const { return ___TrackablePrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_TrackablePrefab_3() { return &___TrackablePrefab_3; }
	inline void set_TrackablePrefab_3(GameObject_t1756533147 * value)
	{
		___TrackablePrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___TrackablePrefab_3, value);
	}

	inline static int32_t get_offset_of_CarInstructions_4() { return static_cast<int32_t>(offsetof(RuntimeTrackerController_t1614694092, ___CarInstructions_4)); }
	inline GameObject_t1756533147 * get_CarInstructions_4() const { return ___CarInstructions_4; }
	inline GameObject_t1756533147 ** get_address_of_CarInstructions_4() { return &___CarInstructions_4; }
	inline void set_CarInstructions_4(GameObject_t1756533147 * value)
	{
		___CarInstructions_4 = value;
		Il2CppCodeGenWriteBarrier(&___CarInstructions_4, value);
	}

	inline static int32_t get_offset_of__currentTracker_5() { return static_cast<int32_t>(offsetof(RuntimeTrackerController_t1614694092, ____currentTracker_5)); }
	inline ImageTracker_t1984565635 * get__currentTracker_5() const { return ____currentTracker_5; }
	inline ImageTracker_t1984565635 ** get_address_of__currentTracker_5() { return &____currentTracker_5; }
	inline void set__currentTracker_5(ImageTracker_t1984565635 * value)
	{
		____currentTracker_5 = value;
		Il2CppCodeGenWriteBarrier(&____currentTracker_5, value);
	}

	inline static int32_t get_offset_of__isLoadingTracker_6() { return static_cast<int32_t>(offsetof(RuntimeTrackerController_t1614694092, ____isLoadingTracker_6)); }
	inline bool get__isLoadingTracker_6() const { return ____isLoadingTracker_6; }
	inline bool* get_address_of__isLoadingTracker_6() { return &____isLoadingTracker_6; }
	inline void set__isLoadingTracker_6(bool value)
	{
		____isLoadingTracker_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
