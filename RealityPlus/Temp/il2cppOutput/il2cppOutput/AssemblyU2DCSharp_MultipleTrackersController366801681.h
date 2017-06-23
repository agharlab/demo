#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_SampleController1035474834.h"

// Wikitude.ImageTracker
struct ImageTracker_t1984565635;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MultipleTrackersController
struct  MultipleTrackersController_t366801681  : public SampleController_t1035474834
{
public:
	// Wikitude.ImageTracker MultipleTrackersController::CarTracker
	ImageTracker_t1984565635 * ___CarTracker_2;
	// Wikitude.ImageTracker MultipleTrackersController::MagazineTracker
	ImageTracker_t1984565635 * ___MagazineTracker_3;
	// UnityEngine.GameObject MultipleTrackersController::CarInstructions
	GameObject_t1756533147 * ___CarInstructions_4;
	// UnityEngine.GameObject MultipleTrackersController::MagazineInstructions
	GameObject_t1756533147 * ___MagazineInstructions_5;
	// System.Boolean MultipleTrackersController::_waitingForTrackerToLoad
	bool ____waitingForTrackerToLoad_6;

public:
	inline static int32_t get_offset_of_CarTracker_2() { return static_cast<int32_t>(offsetof(MultipleTrackersController_t366801681, ___CarTracker_2)); }
	inline ImageTracker_t1984565635 * get_CarTracker_2() const { return ___CarTracker_2; }
	inline ImageTracker_t1984565635 ** get_address_of_CarTracker_2() { return &___CarTracker_2; }
	inline void set_CarTracker_2(ImageTracker_t1984565635 * value)
	{
		___CarTracker_2 = value;
		Il2CppCodeGenWriteBarrier(&___CarTracker_2, value);
	}

	inline static int32_t get_offset_of_MagazineTracker_3() { return static_cast<int32_t>(offsetof(MultipleTrackersController_t366801681, ___MagazineTracker_3)); }
	inline ImageTracker_t1984565635 * get_MagazineTracker_3() const { return ___MagazineTracker_3; }
	inline ImageTracker_t1984565635 ** get_address_of_MagazineTracker_3() { return &___MagazineTracker_3; }
	inline void set_MagazineTracker_3(ImageTracker_t1984565635 * value)
	{
		___MagazineTracker_3 = value;
		Il2CppCodeGenWriteBarrier(&___MagazineTracker_3, value);
	}

	inline static int32_t get_offset_of_CarInstructions_4() { return static_cast<int32_t>(offsetof(MultipleTrackersController_t366801681, ___CarInstructions_4)); }
	inline GameObject_t1756533147 * get_CarInstructions_4() const { return ___CarInstructions_4; }
	inline GameObject_t1756533147 ** get_address_of_CarInstructions_4() { return &___CarInstructions_4; }
	inline void set_CarInstructions_4(GameObject_t1756533147 * value)
	{
		___CarInstructions_4 = value;
		Il2CppCodeGenWriteBarrier(&___CarInstructions_4, value);
	}

	inline static int32_t get_offset_of_MagazineInstructions_5() { return static_cast<int32_t>(offsetof(MultipleTrackersController_t366801681, ___MagazineInstructions_5)); }
	inline GameObject_t1756533147 * get_MagazineInstructions_5() const { return ___MagazineInstructions_5; }
	inline GameObject_t1756533147 ** get_address_of_MagazineInstructions_5() { return &___MagazineInstructions_5; }
	inline void set_MagazineInstructions_5(GameObject_t1756533147 * value)
	{
		___MagazineInstructions_5 = value;
		Il2CppCodeGenWriteBarrier(&___MagazineInstructions_5, value);
	}

	inline static int32_t get_offset_of__waitingForTrackerToLoad_6() { return static_cast<int32_t>(offsetof(MultipleTrackersController_t366801681, ____waitingForTrackerToLoad_6)); }
	inline bool get__waitingForTrackerToLoad_6() const { return ____waitingForTrackerToLoad_6; }
	inline bool* get_address_of__waitingForTrackerToLoad_6() { return &____waitingForTrackerToLoad_6; }
	inline void set__waitingForTrackerToLoad_6(bool value)
	{
		____waitingForTrackerToLoad_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
