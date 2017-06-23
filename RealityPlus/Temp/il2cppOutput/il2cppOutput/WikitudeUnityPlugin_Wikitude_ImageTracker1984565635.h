#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "WikitudeUnityPlugin_Wikitude_TrackerBehaviour3845512381.h"
#include "WikitudeUnityPlugin_Wikitude_TargetSourceType625349866.h"

// Wikitude.ImageTracker/OnExtendedTrackingQualityChangedEvent
struct OnExtendedTrackingQualityChangedEvent_t1461804644;
// Wikitude.TargetCollectionResource
struct TargetCollectionResource_t3980041541;
// Wikitude.CloudRecognitionService
struct CloudRecognitionService_t1970555431;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.ImageTracker
struct  ImageTracker_t1984565635  : public TrackerBehaviour_t3845512381
{
public:
	// Wikitude.ImageTracker/OnExtendedTrackingQualityChangedEvent Wikitude.ImageTracker::OnExtendedTrackingQualityChanged
	OnExtendedTrackingQualityChangedEvent_t1461804644 * ___OnExtendedTrackingQualityChanged_12;
	// Wikitude.TargetSourceType Wikitude.ImageTracker::_targetSourceType
	int32_t ____targetSourceType_13;
	// Wikitude.TargetCollectionResource Wikitude.ImageTracker::_targetCollectionResource
	TargetCollectionResource_t3980041541 * ____targetCollectionResource_14;
	// Wikitude.CloudRecognitionService Wikitude.ImageTracker::_cloudRecognitionService
	CloudRecognitionService_t1970555431 * ____cloudRecognitionService_15;
	// System.Boolean Wikitude.ImageTracker::<IsRegistered>k__BackingField
	bool ___U3CIsRegisteredU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_OnExtendedTrackingQualityChanged_12() { return static_cast<int32_t>(offsetof(ImageTracker_t1984565635, ___OnExtendedTrackingQualityChanged_12)); }
	inline OnExtendedTrackingQualityChangedEvent_t1461804644 * get_OnExtendedTrackingQualityChanged_12() const { return ___OnExtendedTrackingQualityChanged_12; }
	inline OnExtendedTrackingQualityChangedEvent_t1461804644 ** get_address_of_OnExtendedTrackingQualityChanged_12() { return &___OnExtendedTrackingQualityChanged_12; }
	inline void set_OnExtendedTrackingQualityChanged_12(OnExtendedTrackingQualityChangedEvent_t1461804644 * value)
	{
		___OnExtendedTrackingQualityChanged_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnExtendedTrackingQualityChanged_12, value);
	}

	inline static int32_t get_offset_of__targetSourceType_13() { return static_cast<int32_t>(offsetof(ImageTracker_t1984565635, ____targetSourceType_13)); }
	inline int32_t get__targetSourceType_13() const { return ____targetSourceType_13; }
	inline int32_t* get_address_of__targetSourceType_13() { return &____targetSourceType_13; }
	inline void set__targetSourceType_13(int32_t value)
	{
		____targetSourceType_13 = value;
	}

	inline static int32_t get_offset_of__targetCollectionResource_14() { return static_cast<int32_t>(offsetof(ImageTracker_t1984565635, ____targetCollectionResource_14)); }
	inline TargetCollectionResource_t3980041541 * get__targetCollectionResource_14() const { return ____targetCollectionResource_14; }
	inline TargetCollectionResource_t3980041541 ** get_address_of__targetCollectionResource_14() { return &____targetCollectionResource_14; }
	inline void set__targetCollectionResource_14(TargetCollectionResource_t3980041541 * value)
	{
		____targetCollectionResource_14 = value;
		Il2CppCodeGenWriteBarrier(&____targetCollectionResource_14, value);
	}

	inline static int32_t get_offset_of__cloudRecognitionService_15() { return static_cast<int32_t>(offsetof(ImageTracker_t1984565635, ____cloudRecognitionService_15)); }
	inline CloudRecognitionService_t1970555431 * get__cloudRecognitionService_15() const { return ____cloudRecognitionService_15; }
	inline CloudRecognitionService_t1970555431 ** get_address_of__cloudRecognitionService_15() { return &____cloudRecognitionService_15; }
	inline void set__cloudRecognitionService_15(CloudRecognitionService_t1970555431 * value)
	{
		____cloudRecognitionService_15 = value;
		Il2CppCodeGenWriteBarrier(&____cloudRecognitionService_15, value);
	}

	inline static int32_t get_offset_of_U3CIsRegisteredU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ImageTracker_t1984565635, ___U3CIsRegisteredU3Ek__BackingField_16)); }
	inline bool get_U3CIsRegisteredU3Ek__BackingField_16() const { return ___U3CIsRegisteredU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsRegisteredU3Ek__BackingField_16() { return &___U3CIsRegisteredU3Ek__BackingField_16; }
	inline void set_U3CIsRegisteredU3Ek__BackingField_16(bool value)
	{
		___U3CIsRegisteredU3Ek__BackingField_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
