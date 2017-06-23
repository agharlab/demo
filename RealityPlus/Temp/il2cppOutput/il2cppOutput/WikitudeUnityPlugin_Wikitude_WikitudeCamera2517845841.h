#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Nullable_1_gen3873599312.h"
#include "WikitudeUnityPlugin_Wikitude_CaptureFocusMode2427875963.h"
#include "WikitudeUnityPlugin_Wikitude_CaptureAutoFocusRestr2382848555.h"
#include "WikitudeUnityPlugin_Wikitude_CaptureFlashMode3782377483.h"
#include "WikitudeUnityPlugin_Wikitude_CaptureDeviceResolutio572570384.h"
#include "WikitudeUnityPlugin_Wikitude_CaptureDeviceFramerat2233906395.h"
#include "WikitudeUnityPlugin_Wikitude_FrameColorSpace1238203676.h"

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;
// Wikitude.WikitudeCamera/OnInputPluginFailureEvent
struct OnInputPluginFailureEvent_t1715928524;
// Wikitude.WikitudeCamera/OnCameraFailureEvent
struct OnCameraFailureEvent_t1753808034;
// Wikitude.WikitudeBridge
struct WikitudeBridge_t1522526835;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.WikitudeCamera
struct  WikitudeCamera_t2517845841  : public MonoBehaviour_t1158329972
{
public:
	// System.String Wikitude.WikitudeCamera::_WikitudeLicenseKey
	String_t* ____WikitudeLicenseKey_2;
	// UnityEngine.Texture2D Wikitude.WikitudeCamera::_cameraTexture
	Texture2D_t3542995729 * ____cameraTexture_3;
	// System.Nullable`1<Wikitude.CaptureDevicePosition> Wikitude.WikitudeCamera::_cachedDevicePosition
	Nullable_1_t3873599312  ____cachedDevicePosition_4;
	// Wikitude.CaptureFocusMode Wikitude.WikitudeCamera::_cachedFocusMode
	int32_t ____cachedFocusMode_5;
	// Wikitude.CaptureAutoFocusRestriction Wikitude.WikitudeCamera::_cachedAutoFocusRestriction
	int32_t ____cachedAutoFocusRestriction_6;
	// System.Single Wikitude.WikitudeCamera::_cachedZoomLevel
	float ____cachedZoomLevel_7;
	// Wikitude.CaptureFlashMode Wikitude.WikitudeCamera::_cachedFlashMode
	int32_t ____cachedFlashMode_8;
	// Wikitude.CaptureDeviceResolution Wikitude.WikitudeCamera::_desiredDeviceResolution
	int32_t ____desiredDeviceResolution_9;
	// Wikitude.CaptureDeviceFramerate Wikitude.WikitudeCamera::_desiredDeviceFramerate
	int32_t ____desiredDeviceFramerate_10;
	// System.Boolean Wikitude.WikitudeCamera::_enableCamera2
	bool ____enableCamera2_11;
	// System.Boolean Wikitude.WikitudeCamera::_enableInputPlugin
	bool ____enableInputPlugin_12;
	// System.Boolean Wikitude.WikitudeCamera::_enableMirroring
	bool ____enableMirroring_13;
	// System.Boolean Wikitude.WikitudeCamera::_invertedFrame
	bool ____invertedFrame_14;
	// System.Boolean Wikitude.WikitudeCamera::_mirroredFrame
	bool ____mirroredFrame_15;
	// Wikitude.FrameColorSpace Wikitude.WikitudeCamera::_inputFrameColorSpace
	int32_t ____inputFrameColorSpace_16;
	// System.Single Wikitude.WikitudeCamera::_horizontalAngle
	float ____horizontalAngle_17;
	// System.Int32 Wikitude.WikitudeCamera::_inputFrameWidth
	int32_t ____inputFrameWidth_18;
	// System.Int32 Wikitude.WikitudeCamera::_inputFrameHeight
	int32_t ____inputFrameHeight_19;
	// System.Boolean Wikitude.WikitudeCamera::_requestInputFrameRendering
	bool ____requestInputFrameRendering_20;
	// UnityEngine.Events.UnityEvent Wikitude.WikitudeCamera::OnInputPluginRegistered
	UnityEvent_t408735097 * ___OnInputPluginRegistered_21;
	// Wikitude.WikitudeCamera/OnInputPluginFailureEvent Wikitude.WikitudeCamera::OnInputPluginFailure
	OnInputPluginFailureEvent_t1715928524 * ___OnInputPluginFailure_22;
	// Wikitude.WikitudeCamera/OnCameraFailureEvent Wikitude.WikitudeCamera::OnCameraFailure
	OnCameraFailureEvent_t1753808034 * ___OnCameraFailure_23;
	// System.Boolean Wikitude.WikitudeCamera::_inputPluginRegistered
	bool ____inputPluginRegistered_24;
	// System.Boolean Wikitude.WikitudeCamera::_cameraOpened
	bool ____cameraOpened_25;
	// Wikitude.WikitudeBridge Wikitude.WikitudeCamera::_bridge
	WikitudeBridge_t1522526835 * ____bridge_26;
	// UnityEngine.Color32[] Wikitude.WikitudeCamera::_blackPixels
	Color32U5BU5D_t30278651* ____blackPixels_27;

public:
	inline static int32_t get_offset_of__WikitudeLicenseKey_2() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____WikitudeLicenseKey_2)); }
	inline String_t* get__WikitudeLicenseKey_2() const { return ____WikitudeLicenseKey_2; }
	inline String_t** get_address_of__WikitudeLicenseKey_2() { return &____WikitudeLicenseKey_2; }
	inline void set__WikitudeLicenseKey_2(String_t* value)
	{
		____WikitudeLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier(&____WikitudeLicenseKey_2, value);
	}

	inline static int32_t get_offset_of__cameraTexture_3() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____cameraTexture_3)); }
	inline Texture2D_t3542995729 * get__cameraTexture_3() const { return ____cameraTexture_3; }
	inline Texture2D_t3542995729 ** get_address_of__cameraTexture_3() { return &____cameraTexture_3; }
	inline void set__cameraTexture_3(Texture2D_t3542995729 * value)
	{
		____cameraTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&____cameraTexture_3, value);
	}

	inline static int32_t get_offset_of__cachedDevicePosition_4() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____cachedDevicePosition_4)); }
	inline Nullable_1_t3873599312  get__cachedDevicePosition_4() const { return ____cachedDevicePosition_4; }
	inline Nullable_1_t3873599312 * get_address_of__cachedDevicePosition_4() { return &____cachedDevicePosition_4; }
	inline void set__cachedDevicePosition_4(Nullable_1_t3873599312  value)
	{
		____cachedDevicePosition_4 = value;
	}

	inline static int32_t get_offset_of__cachedFocusMode_5() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____cachedFocusMode_5)); }
	inline int32_t get__cachedFocusMode_5() const { return ____cachedFocusMode_5; }
	inline int32_t* get_address_of__cachedFocusMode_5() { return &____cachedFocusMode_5; }
	inline void set__cachedFocusMode_5(int32_t value)
	{
		____cachedFocusMode_5 = value;
	}

	inline static int32_t get_offset_of__cachedAutoFocusRestriction_6() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____cachedAutoFocusRestriction_6)); }
	inline int32_t get__cachedAutoFocusRestriction_6() const { return ____cachedAutoFocusRestriction_6; }
	inline int32_t* get_address_of__cachedAutoFocusRestriction_6() { return &____cachedAutoFocusRestriction_6; }
	inline void set__cachedAutoFocusRestriction_6(int32_t value)
	{
		____cachedAutoFocusRestriction_6 = value;
	}

	inline static int32_t get_offset_of__cachedZoomLevel_7() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____cachedZoomLevel_7)); }
	inline float get__cachedZoomLevel_7() const { return ____cachedZoomLevel_7; }
	inline float* get_address_of__cachedZoomLevel_7() { return &____cachedZoomLevel_7; }
	inline void set__cachedZoomLevel_7(float value)
	{
		____cachedZoomLevel_7 = value;
	}

	inline static int32_t get_offset_of__cachedFlashMode_8() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____cachedFlashMode_8)); }
	inline int32_t get__cachedFlashMode_8() const { return ____cachedFlashMode_8; }
	inline int32_t* get_address_of__cachedFlashMode_8() { return &____cachedFlashMode_8; }
	inline void set__cachedFlashMode_8(int32_t value)
	{
		____cachedFlashMode_8 = value;
	}

	inline static int32_t get_offset_of__desiredDeviceResolution_9() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____desiredDeviceResolution_9)); }
	inline int32_t get__desiredDeviceResolution_9() const { return ____desiredDeviceResolution_9; }
	inline int32_t* get_address_of__desiredDeviceResolution_9() { return &____desiredDeviceResolution_9; }
	inline void set__desiredDeviceResolution_9(int32_t value)
	{
		____desiredDeviceResolution_9 = value;
	}

	inline static int32_t get_offset_of__desiredDeviceFramerate_10() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____desiredDeviceFramerate_10)); }
	inline int32_t get__desiredDeviceFramerate_10() const { return ____desiredDeviceFramerate_10; }
	inline int32_t* get_address_of__desiredDeviceFramerate_10() { return &____desiredDeviceFramerate_10; }
	inline void set__desiredDeviceFramerate_10(int32_t value)
	{
		____desiredDeviceFramerate_10 = value;
	}

	inline static int32_t get_offset_of__enableCamera2_11() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____enableCamera2_11)); }
	inline bool get__enableCamera2_11() const { return ____enableCamera2_11; }
	inline bool* get_address_of__enableCamera2_11() { return &____enableCamera2_11; }
	inline void set__enableCamera2_11(bool value)
	{
		____enableCamera2_11 = value;
	}

	inline static int32_t get_offset_of__enableInputPlugin_12() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____enableInputPlugin_12)); }
	inline bool get__enableInputPlugin_12() const { return ____enableInputPlugin_12; }
	inline bool* get_address_of__enableInputPlugin_12() { return &____enableInputPlugin_12; }
	inline void set__enableInputPlugin_12(bool value)
	{
		____enableInputPlugin_12 = value;
	}

	inline static int32_t get_offset_of__enableMirroring_13() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____enableMirroring_13)); }
	inline bool get__enableMirroring_13() const { return ____enableMirroring_13; }
	inline bool* get_address_of__enableMirroring_13() { return &____enableMirroring_13; }
	inline void set__enableMirroring_13(bool value)
	{
		____enableMirroring_13 = value;
	}

	inline static int32_t get_offset_of__invertedFrame_14() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____invertedFrame_14)); }
	inline bool get__invertedFrame_14() const { return ____invertedFrame_14; }
	inline bool* get_address_of__invertedFrame_14() { return &____invertedFrame_14; }
	inline void set__invertedFrame_14(bool value)
	{
		____invertedFrame_14 = value;
	}

	inline static int32_t get_offset_of__mirroredFrame_15() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____mirroredFrame_15)); }
	inline bool get__mirroredFrame_15() const { return ____mirroredFrame_15; }
	inline bool* get_address_of__mirroredFrame_15() { return &____mirroredFrame_15; }
	inline void set__mirroredFrame_15(bool value)
	{
		____mirroredFrame_15 = value;
	}

	inline static int32_t get_offset_of__inputFrameColorSpace_16() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____inputFrameColorSpace_16)); }
	inline int32_t get__inputFrameColorSpace_16() const { return ____inputFrameColorSpace_16; }
	inline int32_t* get_address_of__inputFrameColorSpace_16() { return &____inputFrameColorSpace_16; }
	inline void set__inputFrameColorSpace_16(int32_t value)
	{
		____inputFrameColorSpace_16 = value;
	}

	inline static int32_t get_offset_of__horizontalAngle_17() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____horizontalAngle_17)); }
	inline float get__horizontalAngle_17() const { return ____horizontalAngle_17; }
	inline float* get_address_of__horizontalAngle_17() { return &____horizontalAngle_17; }
	inline void set__horizontalAngle_17(float value)
	{
		____horizontalAngle_17 = value;
	}

	inline static int32_t get_offset_of__inputFrameWidth_18() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____inputFrameWidth_18)); }
	inline int32_t get__inputFrameWidth_18() const { return ____inputFrameWidth_18; }
	inline int32_t* get_address_of__inputFrameWidth_18() { return &____inputFrameWidth_18; }
	inline void set__inputFrameWidth_18(int32_t value)
	{
		____inputFrameWidth_18 = value;
	}

	inline static int32_t get_offset_of__inputFrameHeight_19() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____inputFrameHeight_19)); }
	inline int32_t get__inputFrameHeight_19() const { return ____inputFrameHeight_19; }
	inline int32_t* get_address_of__inputFrameHeight_19() { return &____inputFrameHeight_19; }
	inline void set__inputFrameHeight_19(int32_t value)
	{
		____inputFrameHeight_19 = value;
	}

	inline static int32_t get_offset_of__requestInputFrameRendering_20() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____requestInputFrameRendering_20)); }
	inline bool get__requestInputFrameRendering_20() const { return ____requestInputFrameRendering_20; }
	inline bool* get_address_of__requestInputFrameRendering_20() { return &____requestInputFrameRendering_20; }
	inline void set__requestInputFrameRendering_20(bool value)
	{
		____requestInputFrameRendering_20 = value;
	}

	inline static int32_t get_offset_of_OnInputPluginRegistered_21() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ___OnInputPluginRegistered_21)); }
	inline UnityEvent_t408735097 * get_OnInputPluginRegistered_21() const { return ___OnInputPluginRegistered_21; }
	inline UnityEvent_t408735097 ** get_address_of_OnInputPluginRegistered_21() { return &___OnInputPluginRegistered_21; }
	inline void set_OnInputPluginRegistered_21(UnityEvent_t408735097 * value)
	{
		___OnInputPluginRegistered_21 = value;
		Il2CppCodeGenWriteBarrier(&___OnInputPluginRegistered_21, value);
	}

	inline static int32_t get_offset_of_OnInputPluginFailure_22() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ___OnInputPluginFailure_22)); }
	inline OnInputPluginFailureEvent_t1715928524 * get_OnInputPluginFailure_22() const { return ___OnInputPluginFailure_22; }
	inline OnInputPluginFailureEvent_t1715928524 ** get_address_of_OnInputPluginFailure_22() { return &___OnInputPluginFailure_22; }
	inline void set_OnInputPluginFailure_22(OnInputPluginFailureEvent_t1715928524 * value)
	{
		___OnInputPluginFailure_22 = value;
		Il2CppCodeGenWriteBarrier(&___OnInputPluginFailure_22, value);
	}

	inline static int32_t get_offset_of_OnCameraFailure_23() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ___OnCameraFailure_23)); }
	inline OnCameraFailureEvent_t1753808034 * get_OnCameraFailure_23() const { return ___OnCameraFailure_23; }
	inline OnCameraFailureEvent_t1753808034 ** get_address_of_OnCameraFailure_23() { return &___OnCameraFailure_23; }
	inline void set_OnCameraFailure_23(OnCameraFailureEvent_t1753808034 * value)
	{
		___OnCameraFailure_23 = value;
		Il2CppCodeGenWriteBarrier(&___OnCameraFailure_23, value);
	}

	inline static int32_t get_offset_of__inputPluginRegistered_24() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____inputPluginRegistered_24)); }
	inline bool get__inputPluginRegistered_24() const { return ____inputPluginRegistered_24; }
	inline bool* get_address_of__inputPluginRegistered_24() { return &____inputPluginRegistered_24; }
	inline void set__inputPluginRegistered_24(bool value)
	{
		____inputPluginRegistered_24 = value;
	}

	inline static int32_t get_offset_of__cameraOpened_25() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____cameraOpened_25)); }
	inline bool get__cameraOpened_25() const { return ____cameraOpened_25; }
	inline bool* get_address_of__cameraOpened_25() { return &____cameraOpened_25; }
	inline void set__cameraOpened_25(bool value)
	{
		____cameraOpened_25 = value;
	}

	inline static int32_t get_offset_of__bridge_26() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____bridge_26)); }
	inline WikitudeBridge_t1522526835 * get__bridge_26() const { return ____bridge_26; }
	inline WikitudeBridge_t1522526835 ** get_address_of__bridge_26() { return &____bridge_26; }
	inline void set__bridge_26(WikitudeBridge_t1522526835 * value)
	{
		____bridge_26 = value;
		Il2CppCodeGenWriteBarrier(&____bridge_26, value);
	}

	inline static int32_t get_offset_of__blackPixels_27() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2517845841, ____blackPixels_27)); }
	inline Color32U5BU5D_t30278651* get__blackPixels_27() const { return ____blackPixels_27; }
	inline Color32U5BU5D_t30278651** get_address_of__blackPixels_27() { return &____blackPixels_27; }
	inline void set__blackPixels_27(Color32U5BU5D_t30278651* value)
	{
		____blackPixels_27 = value;
		Il2CppCodeGenWriteBarrier(&____blackPixels_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
