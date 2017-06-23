#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DockUI
struct  DockUI_t538899497  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform DockUI::ButtonsBackground
	RectTransform_t3349966182 * ___ButtonsBackground_2;
	// UnityEngine.RectTransform DockUI::ButtonsParent
	RectTransform_t3349966182 * ___ButtonsParent_3;

public:
	inline static int32_t get_offset_of_ButtonsBackground_2() { return static_cast<int32_t>(offsetof(DockUI_t538899497, ___ButtonsBackground_2)); }
	inline RectTransform_t3349966182 * get_ButtonsBackground_2() const { return ___ButtonsBackground_2; }
	inline RectTransform_t3349966182 ** get_address_of_ButtonsBackground_2() { return &___ButtonsBackground_2; }
	inline void set_ButtonsBackground_2(RectTransform_t3349966182 * value)
	{
		___ButtonsBackground_2 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonsBackground_2, value);
	}

	inline static int32_t get_offset_of_ButtonsParent_3() { return static_cast<int32_t>(offsetof(DockUI_t538899497, ___ButtonsParent_3)); }
	inline RectTransform_t3349966182 * get_ButtonsParent_3() const { return ___ButtonsParent_3; }
	inline RectTransform_t3349966182 ** get_address_of_ButtonsParent_3() { return &___ButtonsParent_3; }
	inline void set_ButtonsParent_3(RectTransform_t3349966182 * value)
	{
		___ButtonsParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___ButtonsParent_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
