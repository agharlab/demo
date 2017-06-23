#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_SampleController1035474834.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// BarcodePlugin
struct BarcodePlugin_t3110576463;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PluginController
struct  PluginController_t4064647867  : public SampleController_t1035474834
{
public:
	// UnityEngine.UI.Text PluginController::ResultText
	Text_t356221433 * ___ResultText_2;
	// BarcodePlugin PluginController::_plugin
	BarcodePlugin_t3110576463 * ____plugin_3;
	// System.Boolean PluginController::_initialized
	bool ____initialized_4;

public:
	inline static int32_t get_offset_of_ResultText_2() { return static_cast<int32_t>(offsetof(PluginController_t4064647867, ___ResultText_2)); }
	inline Text_t356221433 * get_ResultText_2() const { return ___ResultText_2; }
	inline Text_t356221433 ** get_address_of_ResultText_2() { return &___ResultText_2; }
	inline void set_ResultText_2(Text_t356221433 * value)
	{
		___ResultText_2 = value;
		Il2CppCodeGenWriteBarrier(&___ResultText_2, value);
	}

	inline static int32_t get_offset_of__plugin_3() { return static_cast<int32_t>(offsetof(PluginController_t4064647867, ____plugin_3)); }
	inline BarcodePlugin_t3110576463 * get__plugin_3() const { return ____plugin_3; }
	inline BarcodePlugin_t3110576463 ** get_address_of__plugin_3() { return &____plugin_3; }
	inline void set__plugin_3(BarcodePlugin_t3110576463 * value)
	{
		____plugin_3 = value;
		Il2CppCodeGenWriteBarrier(&____plugin_3, value);
	}

	inline static int32_t get_offset_of__initialized_4() { return static_cast<int32_t>(offsetof(PluginController_t4064647867, ____initialized_4)); }
	inline bool get__initialized_4() const { return ____initialized_4; }
	inline bool* get_address_of__initialized_4() { return &____initialized_4; }
	inline void set__initialized_4(bool value)
	{
		____initialized_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
