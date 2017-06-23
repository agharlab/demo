#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// Wikitude.TrackingMapRecorder/OnRecordingFinishedEvent
struct OnRecordingFinishedEvent_t3200701272;
// Wikitude.TrackingMapRecorder/OnRecordingErrorEvent
struct OnRecordingErrorEvent_t89808920;
// Wikitude.TrackingMapRecorder/OnRecordingQualityChangedEvent
struct OnRecordingQualityChangedEvent_t3085246221;
// Wikitude.TrackerManager
struct TrackerManager_t130000407;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.TrackingMapRecorder
struct  TrackingMapRecorder_t746125273  : public MonoBehaviour_t1158329972
{
public:
	// System.String Wikitude.TrackingMapRecorder::_trackingMapName
	String_t* ____trackingMapName_3;
	// System.Boolean Wikitude.TrackingMapRecorder::<IsRecording>k__BackingField
	bool ___U3CIsRecordingU3Ek__BackingField_4;
	// Wikitude.TrackingMapRecorder/OnRecordingFinishedEvent Wikitude.TrackingMapRecorder::OnRecordingFinished
	OnRecordingFinishedEvent_t3200701272 * ___OnRecordingFinished_5;
	// Wikitude.TrackingMapRecorder/OnRecordingErrorEvent Wikitude.TrackingMapRecorder::OnRecordingError
	OnRecordingErrorEvent_t89808920 * ___OnRecordingError_6;
	// Wikitude.TrackingMapRecorder/OnRecordingQualityChangedEvent Wikitude.TrackingMapRecorder::OnRecordingQualityChanged
	OnRecordingQualityChangedEvent_t3085246221 * ___OnRecordingQualityChanged_7;
	// Wikitude.TrackerManager Wikitude.TrackingMapRecorder::_trackerManager
	TrackerManager_t130000407 * ____trackerManager_8;

public:
	inline static int32_t get_offset_of__trackingMapName_3() { return static_cast<int32_t>(offsetof(TrackingMapRecorder_t746125273, ____trackingMapName_3)); }
	inline String_t* get__trackingMapName_3() const { return ____trackingMapName_3; }
	inline String_t** get_address_of__trackingMapName_3() { return &____trackingMapName_3; }
	inline void set__trackingMapName_3(String_t* value)
	{
		____trackingMapName_3 = value;
		Il2CppCodeGenWriteBarrier(&____trackingMapName_3, value);
	}

	inline static int32_t get_offset_of_U3CIsRecordingU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrackingMapRecorder_t746125273, ___U3CIsRecordingU3Ek__BackingField_4)); }
	inline bool get_U3CIsRecordingU3Ek__BackingField_4() const { return ___U3CIsRecordingU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsRecordingU3Ek__BackingField_4() { return &___U3CIsRecordingU3Ek__BackingField_4; }
	inline void set_U3CIsRecordingU3Ek__BackingField_4(bool value)
	{
		___U3CIsRecordingU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_OnRecordingFinished_5() { return static_cast<int32_t>(offsetof(TrackingMapRecorder_t746125273, ___OnRecordingFinished_5)); }
	inline OnRecordingFinishedEvent_t3200701272 * get_OnRecordingFinished_5() const { return ___OnRecordingFinished_5; }
	inline OnRecordingFinishedEvent_t3200701272 ** get_address_of_OnRecordingFinished_5() { return &___OnRecordingFinished_5; }
	inline void set_OnRecordingFinished_5(OnRecordingFinishedEvent_t3200701272 * value)
	{
		___OnRecordingFinished_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnRecordingFinished_5, value);
	}

	inline static int32_t get_offset_of_OnRecordingError_6() { return static_cast<int32_t>(offsetof(TrackingMapRecorder_t746125273, ___OnRecordingError_6)); }
	inline OnRecordingErrorEvent_t89808920 * get_OnRecordingError_6() const { return ___OnRecordingError_6; }
	inline OnRecordingErrorEvent_t89808920 ** get_address_of_OnRecordingError_6() { return &___OnRecordingError_6; }
	inline void set_OnRecordingError_6(OnRecordingErrorEvent_t89808920 * value)
	{
		___OnRecordingError_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnRecordingError_6, value);
	}

	inline static int32_t get_offset_of_OnRecordingQualityChanged_7() { return static_cast<int32_t>(offsetof(TrackingMapRecorder_t746125273, ___OnRecordingQualityChanged_7)); }
	inline OnRecordingQualityChangedEvent_t3085246221 * get_OnRecordingQualityChanged_7() const { return ___OnRecordingQualityChanged_7; }
	inline OnRecordingQualityChangedEvent_t3085246221 ** get_address_of_OnRecordingQualityChanged_7() { return &___OnRecordingQualityChanged_7; }
	inline void set_OnRecordingQualityChanged_7(OnRecordingQualityChangedEvent_t3085246221 * value)
	{
		___OnRecordingQualityChanged_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnRecordingQualityChanged_7, value);
	}

	inline static int32_t get_offset_of__trackerManager_8() { return static_cast<int32_t>(offsetof(TrackingMapRecorder_t746125273, ____trackerManager_8)); }
	inline TrackerManager_t130000407 * get__trackerManager_8() const { return ____trackerManager_8; }
	inline TrackerManager_t130000407 ** get_address_of__trackerManager_8() { return &____trackerManager_8; }
	inline void set__trackerManager_8(TrackerManager_t130000407 * value)
	{
		____trackerManager_8 = value;
		Il2CppCodeGenWriteBarrier(&____trackerManager_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
