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
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ClientExtendedTrackingController
struct  ClientExtendedTrackingController_t2100438199  : public SampleController_t1035474834
{
public:
	// Wikitude.ImageTracker ClientExtendedTrackingController::Tracker
	ImageTracker_t1984565635 * ___Tracker_2;
	// UnityEngine.UI.Text ClientExtendedTrackingController::TrackingQualityText
	Text_t356221433 * ___TrackingQualityText_3;
	// UnityEngine.UI.Image ClientExtendedTrackingController::TrackingQualityBackground
	Image_t2042527209 * ___TrackingQualityBackground_4;
	// UnityEngine.GameObject ClientExtendedTrackingController::StopExtendedTrackingButton
	GameObject_t1756533147 * ___StopExtendedTrackingButton_5;

public:
	inline static int32_t get_offset_of_Tracker_2() { return static_cast<int32_t>(offsetof(ClientExtendedTrackingController_t2100438199, ___Tracker_2)); }
	inline ImageTracker_t1984565635 * get_Tracker_2() const { return ___Tracker_2; }
	inline ImageTracker_t1984565635 ** get_address_of_Tracker_2() { return &___Tracker_2; }
	inline void set_Tracker_2(ImageTracker_t1984565635 * value)
	{
		___Tracker_2 = value;
		Il2CppCodeGenWriteBarrier(&___Tracker_2, value);
	}

	inline static int32_t get_offset_of_TrackingQualityText_3() { return static_cast<int32_t>(offsetof(ClientExtendedTrackingController_t2100438199, ___TrackingQualityText_3)); }
	inline Text_t356221433 * get_TrackingQualityText_3() const { return ___TrackingQualityText_3; }
	inline Text_t356221433 ** get_address_of_TrackingQualityText_3() { return &___TrackingQualityText_3; }
	inline void set_TrackingQualityText_3(Text_t356221433 * value)
	{
		___TrackingQualityText_3 = value;
		Il2CppCodeGenWriteBarrier(&___TrackingQualityText_3, value);
	}

	inline static int32_t get_offset_of_TrackingQualityBackground_4() { return static_cast<int32_t>(offsetof(ClientExtendedTrackingController_t2100438199, ___TrackingQualityBackground_4)); }
	inline Image_t2042527209 * get_TrackingQualityBackground_4() const { return ___TrackingQualityBackground_4; }
	inline Image_t2042527209 ** get_address_of_TrackingQualityBackground_4() { return &___TrackingQualityBackground_4; }
	inline void set_TrackingQualityBackground_4(Image_t2042527209 * value)
	{
		___TrackingQualityBackground_4 = value;
		Il2CppCodeGenWriteBarrier(&___TrackingQualityBackground_4, value);
	}

	inline static int32_t get_offset_of_StopExtendedTrackingButton_5() { return static_cast<int32_t>(offsetof(ClientExtendedTrackingController_t2100438199, ___StopExtendedTrackingButton_5)); }
	inline GameObject_t1756533147 * get_StopExtendedTrackingButton_5() const { return ___StopExtendedTrackingButton_5; }
	inline GameObject_t1756533147 ** get_address_of_StopExtendedTrackingButton_5() { return &___StopExtendedTrackingButton_5; }
	inline void set_StopExtendedTrackingButton_5(GameObject_t1756533147 * value)
	{
		___StopExtendedTrackingButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___StopExtendedTrackingButton_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
