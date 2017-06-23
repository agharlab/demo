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
// UnityEngine.UI.Button
struct Button_t2872111280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnClickTrackerController
struct  OnClickTrackerController_t2270494461  : public SampleController_t1035474834
{
public:
	// Wikitude.ImageTracker OnClickTrackerController::Tracker
	ImageTracker_t1984565635 * ___Tracker_2;
	// UnityEngine.UI.Text OnClickTrackerController::InfoText
	Text_t356221433 * ___InfoText_3;
	// UnityEngine.UI.Button OnClickTrackerController::RecognizeButton
	Button_t2872111280 * ___RecognizeButton_4;
	// UnityEngine.UI.Text OnClickTrackerController::ButtonText
	Text_t356221433 * ___ButtonText_5;

public:
	inline static int32_t get_offset_of_Tracker_2() { return static_cast<int32_t>(offsetof(OnClickTrackerController_t2270494461, ___Tracker_2)); }
	inline ImageTracker_t1984565635 * get_Tracker_2() const { return ___Tracker_2; }
	inline ImageTracker_t1984565635 ** get_address_of_Tracker_2() { return &___Tracker_2; }
	inline void set_Tracker_2(ImageTracker_t1984565635 * value)
	{
		___Tracker_2 = value;
		Il2CppCodeGenWriteBarrier(&___Tracker_2, value);
	}

	inline static int32_t get_offset_of_InfoText_3() { return static_cast<int32_t>(offsetof(OnClickTrackerController_t2270494461, ___InfoText_3)); }
	inline Text_t356221433 * get_InfoText_3() const { return ___InfoText_3; }
	inline Text_t356221433 ** get_address_of_InfoText_3() { return &___InfoText_3; }
	inline void set_InfoText_3(Text_t356221433 * value)
	{
		___InfoText_3 = value;
		Il2CppCodeGenWriteBarrier(&___InfoText_3, value);
	}

	inline static int32_t get_offset_of_RecognizeButton_4() { return static_cast<int32_t>(offsetof(OnClickTrackerController_t2270494461, ___RecognizeButton_4)); }
	inline Button_t2872111280 * get_RecognizeButton_4() const { return ___RecognizeButton_4; }
	inline Button_t2872111280 ** get_address_of_RecognizeButton_4() { return &___RecognizeButton_4; }
	inline void set_RecognizeButton_4(Button_t2872111280 * value)
	{
		___RecognizeButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___RecognizeButton_4, value);
	}

	inline static int32_t get_offset_of_ButtonText_5() { return static_cast<int32_t>(offsetof(OnClickTrackerController_t2270494461, ___ButtonText_5)); }
	inline Text_t356221433 * get_ButtonText_5() const { return ___ButtonText_5; }
	inline Text_t356221433 ** get_address_of_ButtonText_5() { return &___ButtonText_5; }
	inline void set_ButtonText_5(Text_t356221433 * value)
	{
		___ButtonText_5 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonText_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
