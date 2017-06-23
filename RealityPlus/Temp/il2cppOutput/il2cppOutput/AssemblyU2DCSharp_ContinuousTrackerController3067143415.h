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
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ContinuousTrackerController
struct  ContinuousTrackerController_t3067143415  : public SampleController_t1035474834
{
public:
	// Wikitude.ImageTracker ContinuousTrackerController::Tracker
	ImageTracker_t1984565635 * ___Tracker_2;
	// UnityEngine.UI.Text ContinuousTrackerController::buttonText
	Text_t356221433 * ___buttonText_3;
	// System.Boolean ContinuousTrackerController::_trackerRunning
	bool ____trackerRunning_4;
	// System.Boolean ContinuousTrackerController::_connectionInitialized
	bool ____connectionInitialized_5;
	// System.Double ContinuousTrackerController::_recognitionInterval
	double ____recognitionInterval_6;

public:
	inline static int32_t get_offset_of_Tracker_2() { return static_cast<int32_t>(offsetof(ContinuousTrackerController_t3067143415, ___Tracker_2)); }
	inline ImageTracker_t1984565635 * get_Tracker_2() const { return ___Tracker_2; }
	inline ImageTracker_t1984565635 ** get_address_of_Tracker_2() { return &___Tracker_2; }
	inline void set_Tracker_2(ImageTracker_t1984565635 * value)
	{
		___Tracker_2 = value;
		Il2CppCodeGenWriteBarrier(&___Tracker_2, value);
	}

	inline static int32_t get_offset_of_buttonText_3() { return static_cast<int32_t>(offsetof(ContinuousTrackerController_t3067143415, ___buttonText_3)); }
	inline Text_t356221433 * get_buttonText_3() const { return ___buttonText_3; }
	inline Text_t356221433 ** get_address_of_buttonText_3() { return &___buttonText_3; }
	inline void set_buttonText_3(Text_t356221433 * value)
	{
		___buttonText_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttonText_3, value);
	}

	inline static int32_t get_offset_of__trackerRunning_4() { return static_cast<int32_t>(offsetof(ContinuousTrackerController_t3067143415, ____trackerRunning_4)); }
	inline bool get__trackerRunning_4() const { return ____trackerRunning_4; }
	inline bool* get_address_of__trackerRunning_4() { return &____trackerRunning_4; }
	inline void set__trackerRunning_4(bool value)
	{
		____trackerRunning_4 = value;
	}

	inline static int32_t get_offset_of__connectionInitialized_5() { return static_cast<int32_t>(offsetof(ContinuousTrackerController_t3067143415, ____connectionInitialized_5)); }
	inline bool get__connectionInitialized_5() const { return ____connectionInitialized_5; }
	inline bool* get_address_of__connectionInitialized_5() { return &____connectionInitialized_5; }
	inline void set__connectionInitialized_5(bool value)
	{
		____connectionInitialized_5 = value;
	}

	inline static int32_t get_offset_of__recognitionInterval_6() { return static_cast<int32_t>(offsetof(ContinuousTrackerController_t3067143415, ____recognitionInterval_6)); }
	inline double get__recognitionInterval_6() const { return ____recognitionInterval_6; }
	inline double* get_address_of__recognitionInterval_6() { return &____recognitionInterval_6; }
	inline void set__recognitionInterval_6(double value)
	{
		____recognitionInterval_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
