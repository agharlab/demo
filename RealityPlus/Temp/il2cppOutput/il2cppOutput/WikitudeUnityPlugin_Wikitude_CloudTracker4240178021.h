#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "WikitudeUnityPlugin_Wikitude_TrackerBehaviour3845512381.h"
#include "WikitudeUnityPlugin_Wikitude_TrackerManager_CloudRe139324267.h"

// System.String
struct String_t;
// Wikitude.CloudTracker/OnTrackerFinishedLoadingEvent
struct OnTrackerFinishedLoadingEvent_t2073899635;
// Wikitude.CloudTracker/OnTrackerLoadingErrorEvent
struct OnTrackerLoadingErrorEvent_t4048345185;
// Wikitude.CloudTracker/OnExtendedTrackingQualityChangedEvent
struct OnExtendedTrackingQualityChangedEvent_t185594368;
// Wikitude.CloudTracker/OnRecognitionSuccessfulEvent
struct OnRecognitionSuccessfulEvent_t597905196;
// Wikitude.CloudTracker/OnRecognitionFailedEvent
struct OnRecognitionFailedEvent_t2475925451;
// Wikitude.CloudTracker/OnRecognitionInterruptionEvent
struct OnRecognitionInterruptionEvent_t4169328967;
// Wikitude.CloudRecognitionService
struct CloudRecognitionService_t1970555431;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.CloudTracker
struct  CloudTracker_t4240178021  : public TrackerBehaviour_t3845512381
{
public:
	// System.String Wikitude.CloudTracker::_authenticationToken
	String_t* ____authenticationToken_12;
	// System.String Wikitude.CloudTracker::_targetCollectionId
	String_t* ____targetCollectionId_13;
	// Wikitude.TrackerManager/CloudRecognitionServerRegion Wikitude.CloudTracker::_serverRegion
	int32_t ____serverRegion_14;
	// Wikitude.CloudTracker/OnTrackerFinishedLoadingEvent Wikitude.CloudTracker::OnTrackerFinishedLoading
	OnTrackerFinishedLoadingEvent_t2073899635 * ___OnTrackerFinishedLoading_15;
	// Wikitude.CloudTracker/OnTrackerLoadingErrorEvent Wikitude.CloudTracker::OnTrackerLoadingError
	OnTrackerLoadingErrorEvent_t4048345185 * ___OnTrackerLoadingError_16;
	// Wikitude.CloudTracker/OnExtendedTrackingQualityChangedEvent Wikitude.CloudTracker::OnExtendedTrackingQualityChanged
	OnExtendedTrackingQualityChangedEvent_t185594368 * ___OnExtendedTrackingQualityChanged_17;
	// Wikitude.CloudTracker/OnRecognitionSuccessfulEvent Wikitude.CloudTracker::OnRecognitionSuccessful
	OnRecognitionSuccessfulEvent_t597905196 * ___OnRecognitionSuccessful_18;
	// Wikitude.CloudTracker/OnRecognitionFailedEvent Wikitude.CloudTracker::OnRecognitionFailed
	OnRecognitionFailedEvent_t2475925451 * ___OnRecognitionFailed_19;
	// Wikitude.CloudTracker/OnRecognitionInterruptionEvent Wikitude.CloudTracker::OnRecognitionInterruption
	OnRecognitionInterruptionEvent_t4169328967 * ___OnRecognitionInterruption_20;
	// Wikitude.CloudRecognitionService Wikitude.CloudTracker::_cloudRecognitionService
	CloudRecognitionService_t1970555431 * ____cloudRecognitionService_21;
	// System.Boolean Wikitude.CloudTracker::<IsRegistered>k__BackingField
	bool ___U3CIsRegisteredU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of__authenticationToken_12() { return static_cast<int32_t>(offsetof(CloudTracker_t4240178021, ____authenticationToken_12)); }
	inline String_t* get__authenticationToken_12() const { return ____authenticationToken_12; }
	inline String_t** get_address_of__authenticationToken_12() { return &____authenticationToken_12; }
	inline void set__authenticationToken_12(String_t* value)
	{
		____authenticationToken_12 = value;
		Il2CppCodeGenWriteBarrier(&____authenticationToken_12, value);
	}

	inline static int32_t get_offset_of__targetCollectionId_13() { return static_cast<int32_t>(offsetof(CloudTracker_t4240178021, ____targetCollectionId_13)); }
	inline String_t* get__targetCollectionId_13() const { return ____targetCollectionId_13; }
	inline String_t** get_address_of__targetCollectionId_13() { return &____targetCollectionId_13; }
	inline void set__targetCollectionId_13(String_t* value)
	{
		____targetCollectionId_13 = value;
		Il2CppCodeGenWriteBarrier(&____targetCollectionId_13, value);
	}

	inline static int32_t get_offset_of__serverRegion_14() { return static_cast<int32_t>(offsetof(CloudTracker_t4240178021, ____serverRegion_14)); }
	inline int32_t get__serverRegion_14() const { return ____serverRegion_14; }
	inline int32_t* get_address_of__serverRegion_14() { return &____serverRegion_14; }
	inline void set__serverRegion_14(int32_t value)
	{
		____serverRegion_14 = value;
	}

	inline static int32_t get_offset_of_OnTrackerFinishedLoading_15() { return static_cast<int32_t>(offsetof(CloudTracker_t4240178021, ___OnTrackerFinishedLoading_15)); }
	inline OnTrackerFinishedLoadingEvent_t2073899635 * get_OnTrackerFinishedLoading_15() const { return ___OnTrackerFinishedLoading_15; }
	inline OnTrackerFinishedLoadingEvent_t2073899635 ** get_address_of_OnTrackerFinishedLoading_15() { return &___OnTrackerFinishedLoading_15; }
	inline void set_OnTrackerFinishedLoading_15(OnTrackerFinishedLoadingEvent_t2073899635 * value)
	{
		___OnTrackerFinishedLoading_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnTrackerFinishedLoading_15, value);
	}

	inline static int32_t get_offset_of_OnTrackerLoadingError_16() { return static_cast<int32_t>(offsetof(CloudTracker_t4240178021, ___OnTrackerLoadingError_16)); }
	inline OnTrackerLoadingErrorEvent_t4048345185 * get_OnTrackerLoadingError_16() const { return ___OnTrackerLoadingError_16; }
	inline OnTrackerLoadingErrorEvent_t4048345185 ** get_address_of_OnTrackerLoadingError_16() { return &___OnTrackerLoadingError_16; }
	inline void set_OnTrackerLoadingError_16(OnTrackerLoadingErrorEvent_t4048345185 * value)
	{
		___OnTrackerLoadingError_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnTrackerLoadingError_16, value);
	}

	inline static int32_t get_offset_of_OnExtendedTrackingQualityChanged_17() { return static_cast<int32_t>(offsetof(CloudTracker_t4240178021, ___OnExtendedTrackingQualityChanged_17)); }
	inline OnExtendedTrackingQualityChangedEvent_t185594368 * get_OnExtendedTrackingQualityChanged_17() const { return ___OnExtendedTrackingQualityChanged_17; }
	inline OnExtendedTrackingQualityChangedEvent_t185594368 ** get_address_of_OnExtendedTrackingQualityChanged_17() { return &___OnExtendedTrackingQualityChanged_17; }
	inline void set_OnExtendedTrackingQualityChanged_17(OnExtendedTrackingQualityChangedEvent_t185594368 * value)
	{
		___OnExtendedTrackingQualityChanged_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnExtendedTrackingQualityChanged_17, value);
	}

	inline static int32_t get_offset_of_OnRecognitionSuccessful_18() { return static_cast<int32_t>(offsetof(CloudTracker_t4240178021, ___OnRecognitionSuccessful_18)); }
	inline OnRecognitionSuccessfulEvent_t597905196 * get_OnRecognitionSuccessful_18() const { return ___OnRecognitionSuccessful_18; }
	inline OnRecognitionSuccessfulEvent_t597905196 ** get_address_of_OnRecognitionSuccessful_18() { return &___OnRecognitionSuccessful_18; }
	inline void set_OnRecognitionSuccessful_18(OnRecognitionSuccessfulEvent_t597905196 * value)
	{
		___OnRecognitionSuccessful_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnRecognitionSuccessful_18, value);
	}

	inline static int32_t get_offset_of_OnRecognitionFailed_19() { return static_cast<int32_t>(offsetof(CloudTracker_t4240178021, ___OnRecognitionFailed_19)); }
	inline OnRecognitionFailedEvent_t2475925451 * get_OnRecognitionFailed_19() const { return ___OnRecognitionFailed_19; }
	inline OnRecognitionFailedEvent_t2475925451 ** get_address_of_OnRecognitionFailed_19() { return &___OnRecognitionFailed_19; }
	inline void set_OnRecognitionFailed_19(OnRecognitionFailedEvent_t2475925451 * value)
	{
		___OnRecognitionFailed_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnRecognitionFailed_19, value);
	}

	inline static int32_t get_offset_of_OnRecognitionInterruption_20() { return static_cast<int32_t>(offsetof(CloudTracker_t4240178021, ___OnRecognitionInterruption_20)); }
	inline OnRecognitionInterruptionEvent_t4169328967 * get_OnRecognitionInterruption_20() const { return ___OnRecognitionInterruption_20; }
	inline OnRecognitionInterruptionEvent_t4169328967 ** get_address_of_OnRecognitionInterruption_20() { return &___OnRecognitionInterruption_20; }
	inline void set_OnRecognitionInterruption_20(OnRecognitionInterruptionEvent_t4169328967 * value)
	{
		___OnRecognitionInterruption_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnRecognitionInterruption_20, value);
	}

	inline static int32_t get_offset_of__cloudRecognitionService_21() { return static_cast<int32_t>(offsetof(CloudTracker_t4240178021, ____cloudRecognitionService_21)); }
	inline CloudRecognitionService_t1970555431 * get__cloudRecognitionService_21() const { return ____cloudRecognitionService_21; }
	inline CloudRecognitionService_t1970555431 ** get_address_of__cloudRecognitionService_21() { return &____cloudRecognitionService_21; }
	inline void set__cloudRecognitionService_21(CloudRecognitionService_t1970555431 * value)
	{
		____cloudRecognitionService_21 = value;
		Il2CppCodeGenWriteBarrier(&____cloudRecognitionService_21, value);
	}

	inline static int32_t get_offset_of_U3CIsRegisteredU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(CloudTracker_t4240178021, ___U3CIsRegisteredU3Ek__BackingField_22)); }
	inline bool get_U3CIsRegisteredU3Ek__BackingField_22() const { return ___U3CIsRegisteredU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CIsRegisteredU3Ek__BackingField_22() { return &___U3CIsRegisteredU3Ek__BackingField_22; }
	inline void set_U3CIsRegisteredU3Ek__BackingField_22(bool value)
	{
		___U3CIsRegisteredU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
