#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "WikitudeUnityPlugin_Wikitude_TrackerBehaviour3845512381.h"

// System.String
struct String_t;
// Wikitude.ClientTracker/OnTrackerFinishedLoadingEvent
struct OnTrackerFinishedLoadingEvent_t3128440919;
// Wikitude.ClientTracker/OnTrackerLoadingErrorEvent
struct OnTrackerLoadingErrorEvent_t1753622137;
// Wikitude.ClientTracker/OnExtendedTrackingQualityChangedEvent
struct OnExtendedTrackingQualityChangedEvent_t838064302;
// Wikitude.TargetCollectionResource
struct TargetCollectionResource_t3980041541;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.ClientTracker
struct  ClientTracker_t40625541  : public TrackerBehaviour_t3845512381
{
public:
	// System.String Wikitude.ClientTracker::_targetPath
	String_t* ____targetPath_12;
	// System.Boolean Wikitude.ClientTracker::_useCustomUrl
	bool ____useCustomUrl_13;
	// System.Boolean Wikitude.ClientTracker::_use3DTracking
	bool ____use3DTracking_14;
	// Wikitude.ClientTracker/OnTrackerFinishedLoadingEvent Wikitude.ClientTracker::OnTrackerFinishedLoading
	OnTrackerFinishedLoadingEvent_t3128440919 * ___OnTrackerFinishedLoading_15;
	// Wikitude.ClientTracker/OnTrackerLoadingErrorEvent Wikitude.ClientTracker::OnTrackerLoadingError
	OnTrackerLoadingErrorEvent_t1753622137 * ___OnTrackerLoadingError_16;
	// Wikitude.ClientTracker/OnExtendedTrackingQualityChangedEvent Wikitude.ClientTracker::OnExtendedTrackingQualityChanged
	OnExtendedTrackingQualityChangedEvent_t838064302 * ___OnExtendedTrackingQualityChanged_17;
	// Wikitude.TargetCollectionResource Wikitude.ClientTracker::_targetCollectionResource
	TargetCollectionResource_t3980041541 * ____targetCollectionResource_18;
	// System.Boolean Wikitude.ClientTracker::<IsRegistered>k__BackingField
	bool ___U3CIsRegisteredU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of__targetPath_12() { return static_cast<int32_t>(offsetof(ClientTracker_t40625541, ____targetPath_12)); }
	inline String_t* get__targetPath_12() const { return ____targetPath_12; }
	inline String_t** get_address_of__targetPath_12() { return &____targetPath_12; }
	inline void set__targetPath_12(String_t* value)
	{
		____targetPath_12 = value;
		Il2CppCodeGenWriteBarrier(&____targetPath_12, value);
	}

	inline static int32_t get_offset_of__useCustomUrl_13() { return static_cast<int32_t>(offsetof(ClientTracker_t40625541, ____useCustomUrl_13)); }
	inline bool get__useCustomUrl_13() const { return ____useCustomUrl_13; }
	inline bool* get_address_of__useCustomUrl_13() { return &____useCustomUrl_13; }
	inline void set__useCustomUrl_13(bool value)
	{
		____useCustomUrl_13 = value;
	}

	inline static int32_t get_offset_of__use3DTracking_14() { return static_cast<int32_t>(offsetof(ClientTracker_t40625541, ____use3DTracking_14)); }
	inline bool get__use3DTracking_14() const { return ____use3DTracking_14; }
	inline bool* get_address_of__use3DTracking_14() { return &____use3DTracking_14; }
	inline void set__use3DTracking_14(bool value)
	{
		____use3DTracking_14 = value;
	}

	inline static int32_t get_offset_of_OnTrackerFinishedLoading_15() { return static_cast<int32_t>(offsetof(ClientTracker_t40625541, ___OnTrackerFinishedLoading_15)); }
	inline OnTrackerFinishedLoadingEvent_t3128440919 * get_OnTrackerFinishedLoading_15() const { return ___OnTrackerFinishedLoading_15; }
	inline OnTrackerFinishedLoadingEvent_t3128440919 ** get_address_of_OnTrackerFinishedLoading_15() { return &___OnTrackerFinishedLoading_15; }
	inline void set_OnTrackerFinishedLoading_15(OnTrackerFinishedLoadingEvent_t3128440919 * value)
	{
		___OnTrackerFinishedLoading_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnTrackerFinishedLoading_15, value);
	}

	inline static int32_t get_offset_of_OnTrackerLoadingError_16() { return static_cast<int32_t>(offsetof(ClientTracker_t40625541, ___OnTrackerLoadingError_16)); }
	inline OnTrackerLoadingErrorEvent_t1753622137 * get_OnTrackerLoadingError_16() const { return ___OnTrackerLoadingError_16; }
	inline OnTrackerLoadingErrorEvent_t1753622137 ** get_address_of_OnTrackerLoadingError_16() { return &___OnTrackerLoadingError_16; }
	inline void set_OnTrackerLoadingError_16(OnTrackerLoadingErrorEvent_t1753622137 * value)
	{
		___OnTrackerLoadingError_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnTrackerLoadingError_16, value);
	}

	inline static int32_t get_offset_of_OnExtendedTrackingQualityChanged_17() { return static_cast<int32_t>(offsetof(ClientTracker_t40625541, ___OnExtendedTrackingQualityChanged_17)); }
	inline OnExtendedTrackingQualityChangedEvent_t838064302 * get_OnExtendedTrackingQualityChanged_17() const { return ___OnExtendedTrackingQualityChanged_17; }
	inline OnExtendedTrackingQualityChangedEvent_t838064302 ** get_address_of_OnExtendedTrackingQualityChanged_17() { return &___OnExtendedTrackingQualityChanged_17; }
	inline void set_OnExtendedTrackingQualityChanged_17(OnExtendedTrackingQualityChangedEvent_t838064302 * value)
	{
		___OnExtendedTrackingQualityChanged_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnExtendedTrackingQualityChanged_17, value);
	}

	inline static int32_t get_offset_of__targetCollectionResource_18() { return static_cast<int32_t>(offsetof(ClientTracker_t40625541, ____targetCollectionResource_18)); }
	inline TargetCollectionResource_t3980041541 * get__targetCollectionResource_18() const { return ____targetCollectionResource_18; }
	inline TargetCollectionResource_t3980041541 ** get_address_of__targetCollectionResource_18() { return &____targetCollectionResource_18; }
	inline void set__targetCollectionResource_18(TargetCollectionResource_t3980041541 * value)
	{
		____targetCollectionResource_18 = value;
		Il2CppCodeGenWriteBarrier(&____targetCollectionResource_18, value);
	}

	inline static int32_t get_offset_of_U3CIsRegisteredU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(ClientTracker_t40625541, ___U3CIsRegisteredU3Ek__BackingField_19)); }
	inline bool get_U3CIsRegisteredU3Ek__BackingField_19() const { return ___U3CIsRegisteredU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CIsRegisteredU3Ek__BackingField_19() { return &___U3CIsRegisteredU3Ek__BackingField_19; }
	inline void set_U3CIsRegisteredU3Ek__BackingField_19(bool value)
	{
		___U3CIsRegisteredU3Ek__BackingField_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
