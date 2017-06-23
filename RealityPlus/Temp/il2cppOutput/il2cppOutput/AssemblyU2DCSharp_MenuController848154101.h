#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuController
struct  MenuController_t848154101  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MenuController::InfoPanel
	GameObject_t1756533147 * ___InfoPanel_2;
	// UnityEngine.UI.Text MenuController::VersionNumberText
	Text_t356221433 * ___VersionNumberText_3;
	// UnityEngine.UI.Text MenuController::BuildDateText
	Text_t356221433 * ___BuildDateText_4;
	// UnityEngine.UI.Text MenuController::BuildNumberText
	Text_t356221433 * ___BuildNumberText_5;
	// UnityEngine.UI.Text MenuController::BuildConfigurationText
	Text_t356221433 * ___BuildConfigurationText_6;

public:
	inline static int32_t get_offset_of_InfoPanel_2() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___InfoPanel_2)); }
	inline GameObject_t1756533147 * get_InfoPanel_2() const { return ___InfoPanel_2; }
	inline GameObject_t1756533147 ** get_address_of_InfoPanel_2() { return &___InfoPanel_2; }
	inline void set_InfoPanel_2(GameObject_t1756533147 * value)
	{
		___InfoPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___InfoPanel_2, value);
	}

	inline static int32_t get_offset_of_VersionNumberText_3() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___VersionNumberText_3)); }
	inline Text_t356221433 * get_VersionNumberText_3() const { return ___VersionNumberText_3; }
	inline Text_t356221433 ** get_address_of_VersionNumberText_3() { return &___VersionNumberText_3; }
	inline void set_VersionNumberText_3(Text_t356221433 * value)
	{
		___VersionNumberText_3 = value;
		Il2CppCodeGenWriteBarrier(&___VersionNumberText_3, value);
	}

	inline static int32_t get_offset_of_BuildDateText_4() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___BuildDateText_4)); }
	inline Text_t356221433 * get_BuildDateText_4() const { return ___BuildDateText_4; }
	inline Text_t356221433 ** get_address_of_BuildDateText_4() { return &___BuildDateText_4; }
	inline void set_BuildDateText_4(Text_t356221433 * value)
	{
		___BuildDateText_4 = value;
		Il2CppCodeGenWriteBarrier(&___BuildDateText_4, value);
	}

	inline static int32_t get_offset_of_BuildNumberText_5() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___BuildNumberText_5)); }
	inline Text_t356221433 * get_BuildNumberText_5() const { return ___BuildNumberText_5; }
	inline Text_t356221433 ** get_address_of_BuildNumberText_5() { return &___BuildNumberText_5; }
	inline void set_BuildNumberText_5(Text_t356221433 * value)
	{
		___BuildNumberText_5 = value;
		Il2CppCodeGenWriteBarrier(&___BuildNumberText_5, value);
	}

	inline static int32_t get_offset_of_BuildConfigurationText_6() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___BuildConfigurationText_6)); }
	inline Text_t356221433 * get_BuildConfigurationText_6() const { return ___BuildConfigurationText_6; }
	inline Text_t356221433 ** get_address_of_BuildConfigurationText_6() { return &___BuildConfigurationText_6; }
	inline void set_BuildConfigurationText_6(Text_t356221433 * value)
	{
		___BuildConfigurationText_6 = value;
		Il2CppCodeGenWriteBarrier(&___BuildConfigurationText_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
