#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Dictionary`2<System.Int64,Wikitude.TargetCollectionResource>
struct Dictionary_2_t674592647;
// System.Collections.Generic.Dictionary`2<System.Int64,Wikitude.CloudRecognitionService>
struct Dictionary_2_t2960073833;
// Wikitude.IPlatformBridge
struct IPlatformBridge_t864295325;
// System.Collections.Generic.HashSet`1<Wikitude.TrackerBehaviour>
struct HashSet_1_t2178973235;
// Wikitude.TrackerBehaviour
struct TrackerBehaviour_t3845512381;
// Wikitude.TrackingMapRecorder
struct TrackingMapRecorder_t746125273;
// Wikitude.WikitudeCamera
struct WikitudeCamera_t2517845841;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.TrackerManager
struct  TrackerManager_t130000407  : public MonoBehaviour_t1158329972
{
public:
	// System.Int64 Wikitude.TrackerManager::_targetCollectionResourceId
	int64_t ____targetCollectionResourceId_2;
	// System.Int64 Wikitude.TrackerManager::_cloudRecognitionServiceId
	int64_t ____cloudRecognitionServiceId_3;
	// System.Collections.Generic.Dictionary`2<System.Int64,Wikitude.TargetCollectionResource> Wikitude.TrackerManager::_registeredResources
	Dictionary_2_t674592647 * ____registeredResources_4;
	// System.Collections.Generic.Dictionary`2<System.Int64,Wikitude.CloudRecognitionService> Wikitude.TrackerManager::_registeredCloudRecognitionServices
	Dictionary_2_t2960073833 * ____registeredCloudRecognitionServices_5;
	// Wikitude.IPlatformBridge Wikitude.TrackerManager::_bridge
	Il2CppObject * ____bridge_6;
	// System.Collections.Generic.HashSet`1<Wikitude.TrackerBehaviour> Wikitude.TrackerManager::_registeredTrackers
	HashSet_1_t2178973235 * ____registeredTrackers_7;
	// Wikitude.TrackerBehaviour Wikitude.TrackerManager::_activeTracker
	TrackerBehaviour_t3845512381 * ____activeTracker_8;
	// Wikitude.TrackingMapRecorder Wikitude.TrackerManager::_activeRecorder
	TrackingMapRecorder_t746125273 * ____activeRecorder_9;
	// Wikitude.WikitudeCamera Wikitude.TrackerManager::_wikitudeCamera
	WikitudeCamera_t2517845841 * ____wikitudeCamera_10;

public:
	inline static int32_t get_offset_of__targetCollectionResourceId_2() { return static_cast<int32_t>(offsetof(TrackerManager_t130000407, ____targetCollectionResourceId_2)); }
	inline int64_t get__targetCollectionResourceId_2() const { return ____targetCollectionResourceId_2; }
	inline int64_t* get_address_of__targetCollectionResourceId_2() { return &____targetCollectionResourceId_2; }
	inline void set__targetCollectionResourceId_2(int64_t value)
	{
		____targetCollectionResourceId_2 = value;
	}

	inline static int32_t get_offset_of__cloudRecognitionServiceId_3() { return static_cast<int32_t>(offsetof(TrackerManager_t130000407, ____cloudRecognitionServiceId_3)); }
	inline int64_t get__cloudRecognitionServiceId_3() const { return ____cloudRecognitionServiceId_3; }
	inline int64_t* get_address_of__cloudRecognitionServiceId_3() { return &____cloudRecognitionServiceId_3; }
	inline void set__cloudRecognitionServiceId_3(int64_t value)
	{
		____cloudRecognitionServiceId_3 = value;
	}

	inline static int32_t get_offset_of__registeredResources_4() { return static_cast<int32_t>(offsetof(TrackerManager_t130000407, ____registeredResources_4)); }
	inline Dictionary_2_t674592647 * get__registeredResources_4() const { return ____registeredResources_4; }
	inline Dictionary_2_t674592647 ** get_address_of__registeredResources_4() { return &____registeredResources_4; }
	inline void set__registeredResources_4(Dictionary_2_t674592647 * value)
	{
		____registeredResources_4 = value;
		Il2CppCodeGenWriteBarrier(&____registeredResources_4, value);
	}

	inline static int32_t get_offset_of__registeredCloudRecognitionServices_5() { return static_cast<int32_t>(offsetof(TrackerManager_t130000407, ____registeredCloudRecognitionServices_5)); }
	inline Dictionary_2_t2960073833 * get__registeredCloudRecognitionServices_5() const { return ____registeredCloudRecognitionServices_5; }
	inline Dictionary_2_t2960073833 ** get_address_of__registeredCloudRecognitionServices_5() { return &____registeredCloudRecognitionServices_5; }
	inline void set__registeredCloudRecognitionServices_5(Dictionary_2_t2960073833 * value)
	{
		____registeredCloudRecognitionServices_5 = value;
		Il2CppCodeGenWriteBarrier(&____registeredCloudRecognitionServices_5, value);
	}

	inline static int32_t get_offset_of__bridge_6() { return static_cast<int32_t>(offsetof(TrackerManager_t130000407, ____bridge_6)); }
	inline Il2CppObject * get__bridge_6() const { return ____bridge_6; }
	inline Il2CppObject ** get_address_of__bridge_6() { return &____bridge_6; }
	inline void set__bridge_6(Il2CppObject * value)
	{
		____bridge_6 = value;
		Il2CppCodeGenWriteBarrier(&____bridge_6, value);
	}

	inline static int32_t get_offset_of__registeredTrackers_7() { return static_cast<int32_t>(offsetof(TrackerManager_t130000407, ____registeredTrackers_7)); }
	inline HashSet_1_t2178973235 * get__registeredTrackers_7() const { return ____registeredTrackers_7; }
	inline HashSet_1_t2178973235 ** get_address_of__registeredTrackers_7() { return &____registeredTrackers_7; }
	inline void set__registeredTrackers_7(HashSet_1_t2178973235 * value)
	{
		____registeredTrackers_7 = value;
		Il2CppCodeGenWriteBarrier(&____registeredTrackers_7, value);
	}

	inline static int32_t get_offset_of__activeTracker_8() { return static_cast<int32_t>(offsetof(TrackerManager_t130000407, ____activeTracker_8)); }
	inline TrackerBehaviour_t3845512381 * get__activeTracker_8() const { return ____activeTracker_8; }
	inline TrackerBehaviour_t3845512381 ** get_address_of__activeTracker_8() { return &____activeTracker_8; }
	inline void set__activeTracker_8(TrackerBehaviour_t3845512381 * value)
	{
		____activeTracker_8 = value;
		Il2CppCodeGenWriteBarrier(&____activeTracker_8, value);
	}

	inline static int32_t get_offset_of__activeRecorder_9() { return static_cast<int32_t>(offsetof(TrackerManager_t130000407, ____activeRecorder_9)); }
	inline TrackingMapRecorder_t746125273 * get__activeRecorder_9() const { return ____activeRecorder_9; }
	inline TrackingMapRecorder_t746125273 ** get_address_of__activeRecorder_9() { return &____activeRecorder_9; }
	inline void set__activeRecorder_9(TrackingMapRecorder_t746125273 * value)
	{
		____activeRecorder_9 = value;
		Il2CppCodeGenWriteBarrier(&____activeRecorder_9, value);
	}

	inline static int32_t get_offset_of__wikitudeCamera_10() { return static_cast<int32_t>(offsetof(TrackerManager_t130000407, ____wikitudeCamera_10)); }
	inline WikitudeCamera_t2517845841 * get__wikitudeCamera_10() const { return ____wikitudeCamera_10; }
	inline WikitudeCamera_t2517845841 ** get_address_of__wikitudeCamera_10() { return &____wikitudeCamera_10; }
	inline void set__wikitudeCamera_10(WikitudeCamera_t2517845841 * value)
	{
		____wikitudeCamera_10 = value;
		Il2CppCodeGenWriteBarrier(&____wikitudeCamera_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
