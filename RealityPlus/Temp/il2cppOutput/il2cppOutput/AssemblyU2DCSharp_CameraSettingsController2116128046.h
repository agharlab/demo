#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_SampleController1035474834.h"

// Wikitude.WikitudeCamera
struct WikitudeCamera_t2517845841;
// Wikitude.ImageTracker
struct ImageTracker_t1984565635;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Dropdown
struct Dropdown_t1985816271;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t3248359358;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraSettingsController
struct  CameraSettingsController_t2116128046  : public SampleController_t1035474834
{
public:
	// Wikitude.WikitudeCamera CameraSettingsController::Camera
	WikitudeCamera_t2517845841 * ___Camera_2;
	// Wikitude.ImageTracker CameraSettingsController::CurrentImageTracker
	ImageTracker_t1984565635 * ___CurrentImageTracker_3;
	// UnityEngine.GameObject CameraSettingsController::ConfirmationTab
	GameObject_t1756533147 * ___ConfirmationTab_4;
	// UnityEngine.GameObject CameraSettingsController::ControlsLayout
	GameObject_t1756533147 * ___ControlsLayout_5;
	// UnityEngine.UI.Dropdown CameraSettingsController::PositionDropdown
	Dropdown_t1985816271 * ___PositionDropdown_6;
	// UnityEngine.UI.Dropdown CameraSettingsController::FocusModeDropdown
	Dropdown_t1985816271 * ___FocusModeDropdown_7;
	// UnityEngine.GameObject CameraSettingsController::AutoFocusRestrictionLayout
	GameObject_t1756533147 * ___AutoFocusRestrictionLayout_8;
	// UnityEngine.UI.Dropdown CameraSettingsController::AutoFocusRestrictionDropdown
	Dropdown_t1985816271 * ___AutoFocusRestrictionDropdown_9;
	// UnityEngine.UI.Dropdown CameraSettingsController::FlashModeDropdown
	Dropdown_t1985816271 * ___FlashModeDropdown_10;
	// UnityEngine.GameObject CameraSettingsController::ZoomLayout
	GameObject_t1756533147 * ___ZoomLayout_11;
	// UnityEngine.UI.Scrollbar CameraSettingsController::ZoomScrollbar
	Scrollbar_t3248359358 * ___ZoomScrollbar_12;
	// UnityEngine.GameObject CameraSettingsController::ManualFocusLayout
	GameObject_t1756533147 * ___ManualFocusLayout_13;
	// UnityEngine.GameObject CameraSettingsController::WikitudeCameraPrefab
	GameObject_t1756533147 * ___WikitudeCameraPrefab_14;
	// UnityEngine.GameObject CameraSettingsController::ImageTrackerPrefab
	GameObject_t1756533147 * ___ImageTrackerPrefab_15;
	// UnityEngine.GameObject CameraSettingsController::WikitudeEyePrefab
	GameObject_t1756533147 * ___WikitudeEyePrefab_16;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___Camera_2)); }
	inline WikitudeCamera_t2517845841 * get_Camera_2() const { return ___Camera_2; }
	inline WikitudeCamera_t2517845841 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(WikitudeCamera_t2517845841 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_2, value);
	}

	inline static int32_t get_offset_of_CurrentImageTracker_3() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___CurrentImageTracker_3)); }
	inline ImageTracker_t1984565635 * get_CurrentImageTracker_3() const { return ___CurrentImageTracker_3; }
	inline ImageTracker_t1984565635 ** get_address_of_CurrentImageTracker_3() { return &___CurrentImageTracker_3; }
	inline void set_CurrentImageTracker_3(ImageTracker_t1984565635 * value)
	{
		___CurrentImageTracker_3 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentImageTracker_3, value);
	}

	inline static int32_t get_offset_of_ConfirmationTab_4() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___ConfirmationTab_4)); }
	inline GameObject_t1756533147 * get_ConfirmationTab_4() const { return ___ConfirmationTab_4; }
	inline GameObject_t1756533147 ** get_address_of_ConfirmationTab_4() { return &___ConfirmationTab_4; }
	inline void set_ConfirmationTab_4(GameObject_t1756533147 * value)
	{
		___ConfirmationTab_4 = value;
		Il2CppCodeGenWriteBarrier(&___ConfirmationTab_4, value);
	}

	inline static int32_t get_offset_of_ControlsLayout_5() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___ControlsLayout_5)); }
	inline GameObject_t1756533147 * get_ControlsLayout_5() const { return ___ControlsLayout_5; }
	inline GameObject_t1756533147 ** get_address_of_ControlsLayout_5() { return &___ControlsLayout_5; }
	inline void set_ControlsLayout_5(GameObject_t1756533147 * value)
	{
		___ControlsLayout_5 = value;
		Il2CppCodeGenWriteBarrier(&___ControlsLayout_5, value);
	}

	inline static int32_t get_offset_of_PositionDropdown_6() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___PositionDropdown_6)); }
	inline Dropdown_t1985816271 * get_PositionDropdown_6() const { return ___PositionDropdown_6; }
	inline Dropdown_t1985816271 ** get_address_of_PositionDropdown_6() { return &___PositionDropdown_6; }
	inline void set_PositionDropdown_6(Dropdown_t1985816271 * value)
	{
		___PositionDropdown_6 = value;
		Il2CppCodeGenWriteBarrier(&___PositionDropdown_6, value);
	}

	inline static int32_t get_offset_of_FocusModeDropdown_7() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___FocusModeDropdown_7)); }
	inline Dropdown_t1985816271 * get_FocusModeDropdown_7() const { return ___FocusModeDropdown_7; }
	inline Dropdown_t1985816271 ** get_address_of_FocusModeDropdown_7() { return &___FocusModeDropdown_7; }
	inline void set_FocusModeDropdown_7(Dropdown_t1985816271 * value)
	{
		___FocusModeDropdown_7 = value;
		Il2CppCodeGenWriteBarrier(&___FocusModeDropdown_7, value);
	}

	inline static int32_t get_offset_of_AutoFocusRestrictionLayout_8() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___AutoFocusRestrictionLayout_8)); }
	inline GameObject_t1756533147 * get_AutoFocusRestrictionLayout_8() const { return ___AutoFocusRestrictionLayout_8; }
	inline GameObject_t1756533147 ** get_address_of_AutoFocusRestrictionLayout_8() { return &___AutoFocusRestrictionLayout_8; }
	inline void set_AutoFocusRestrictionLayout_8(GameObject_t1756533147 * value)
	{
		___AutoFocusRestrictionLayout_8 = value;
		Il2CppCodeGenWriteBarrier(&___AutoFocusRestrictionLayout_8, value);
	}

	inline static int32_t get_offset_of_AutoFocusRestrictionDropdown_9() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___AutoFocusRestrictionDropdown_9)); }
	inline Dropdown_t1985816271 * get_AutoFocusRestrictionDropdown_9() const { return ___AutoFocusRestrictionDropdown_9; }
	inline Dropdown_t1985816271 ** get_address_of_AutoFocusRestrictionDropdown_9() { return &___AutoFocusRestrictionDropdown_9; }
	inline void set_AutoFocusRestrictionDropdown_9(Dropdown_t1985816271 * value)
	{
		___AutoFocusRestrictionDropdown_9 = value;
		Il2CppCodeGenWriteBarrier(&___AutoFocusRestrictionDropdown_9, value);
	}

	inline static int32_t get_offset_of_FlashModeDropdown_10() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___FlashModeDropdown_10)); }
	inline Dropdown_t1985816271 * get_FlashModeDropdown_10() const { return ___FlashModeDropdown_10; }
	inline Dropdown_t1985816271 ** get_address_of_FlashModeDropdown_10() { return &___FlashModeDropdown_10; }
	inline void set_FlashModeDropdown_10(Dropdown_t1985816271 * value)
	{
		___FlashModeDropdown_10 = value;
		Il2CppCodeGenWriteBarrier(&___FlashModeDropdown_10, value);
	}

	inline static int32_t get_offset_of_ZoomLayout_11() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___ZoomLayout_11)); }
	inline GameObject_t1756533147 * get_ZoomLayout_11() const { return ___ZoomLayout_11; }
	inline GameObject_t1756533147 ** get_address_of_ZoomLayout_11() { return &___ZoomLayout_11; }
	inline void set_ZoomLayout_11(GameObject_t1756533147 * value)
	{
		___ZoomLayout_11 = value;
		Il2CppCodeGenWriteBarrier(&___ZoomLayout_11, value);
	}

	inline static int32_t get_offset_of_ZoomScrollbar_12() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___ZoomScrollbar_12)); }
	inline Scrollbar_t3248359358 * get_ZoomScrollbar_12() const { return ___ZoomScrollbar_12; }
	inline Scrollbar_t3248359358 ** get_address_of_ZoomScrollbar_12() { return &___ZoomScrollbar_12; }
	inline void set_ZoomScrollbar_12(Scrollbar_t3248359358 * value)
	{
		___ZoomScrollbar_12 = value;
		Il2CppCodeGenWriteBarrier(&___ZoomScrollbar_12, value);
	}

	inline static int32_t get_offset_of_ManualFocusLayout_13() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___ManualFocusLayout_13)); }
	inline GameObject_t1756533147 * get_ManualFocusLayout_13() const { return ___ManualFocusLayout_13; }
	inline GameObject_t1756533147 ** get_address_of_ManualFocusLayout_13() { return &___ManualFocusLayout_13; }
	inline void set_ManualFocusLayout_13(GameObject_t1756533147 * value)
	{
		___ManualFocusLayout_13 = value;
		Il2CppCodeGenWriteBarrier(&___ManualFocusLayout_13, value);
	}

	inline static int32_t get_offset_of_WikitudeCameraPrefab_14() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___WikitudeCameraPrefab_14)); }
	inline GameObject_t1756533147 * get_WikitudeCameraPrefab_14() const { return ___WikitudeCameraPrefab_14; }
	inline GameObject_t1756533147 ** get_address_of_WikitudeCameraPrefab_14() { return &___WikitudeCameraPrefab_14; }
	inline void set_WikitudeCameraPrefab_14(GameObject_t1756533147 * value)
	{
		___WikitudeCameraPrefab_14 = value;
		Il2CppCodeGenWriteBarrier(&___WikitudeCameraPrefab_14, value);
	}

	inline static int32_t get_offset_of_ImageTrackerPrefab_15() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___ImageTrackerPrefab_15)); }
	inline GameObject_t1756533147 * get_ImageTrackerPrefab_15() const { return ___ImageTrackerPrefab_15; }
	inline GameObject_t1756533147 ** get_address_of_ImageTrackerPrefab_15() { return &___ImageTrackerPrefab_15; }
	inline void set_ImageTrackerPrefab_15(GameObject_t1756533147 * value)
	{
		___ImageTrackerPrefab_15 = value;
		Il2CppCodeGenWriteBarrier(&___ImageTrackerPrefab_15, value);
	}

	inline static int32_t get_offset_of_WikitudeEyePrefab_16() { return static_cast<int32_t>(offsetof(CameraSettingsController_t2116128046, ___WikitudeEyePrefab_16)); }
	inline GameObject_t1756533147 * get_WikitudeEyePrefab_16() const { return ___WikitudeEyePrefab_16; }
	inline GameObject_t1756533147 ** get_address_of_WikitudeEyePrefab_16() { return &___WikitudeEyePrefab_16; }
	inline void set_WikitudeEyePrefab_16(GameObject_t1756533147 * value)
	{
		___WikitudeEyePrefab_16 = value;
		Il2CppCodeGenWriteBarrier(&___WikitudeEyePrefab_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
