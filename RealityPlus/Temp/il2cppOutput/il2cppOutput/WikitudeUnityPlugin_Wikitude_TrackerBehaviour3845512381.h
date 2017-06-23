#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// Wikitude.TrackerManager
struct TrackerManager_t130000407;
// System.Collections.Generic.HashSet`1<Wikitude.TrackableBehaviour>
struct HashSet_1_t1977092026;
// UnityEngine.Camera
struct Camera_t189460977;
// Wikitude.WikitudeCamera
struct WikitudeCamera_t2517845841;
// System.String
struct String_t;
// Wikitude.TrackerBehaviour/OnTargetsLoadedEvent
struct OnTargetsLoadedEvent_t3080540202;
// Wikitude.TrackerBehaviour/OnErrorLoadingTargetsEvent
struct OnErrorLoadingTargetsEvent_t3800749431;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.TrackerBehaviour
struct  TrackerBehaviour_t3845512381  : public MonoBehaviour_t1158329972
{
public:
	// Wikitude.TrackerManager Wikitude.TrackerBehaviour::_manager
	TrackerManager_t130000407 * ____manager_2;
	// System.Collections.Generic.HashSet`1<Wikitude.TrackableBehaviour> Wikitude.TrackerBehaviour::_registeredTrackables
	HashSet_1_t1977092026 * ____registeredTrackables_3;
	// System.Boolean Wikitude.TrackerBehaviour::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_4;
	// UnityEngine.Camera Wikitude.TrackerBehaviour::_sceneCamera
	Camera_t189460977 * ____sceneCamera_5;
	// UnityEngine.Vector3 Wikitude.TrackerBehaviour::_initialSceneCameraPosition
	Vector3_t2243707580  ____initialSceneCameraPosition_6;
	// UnityEngine.Quaternion Wikitude.TrackerBehaviour::_initialSceneCameraRotation
	Quaternion_t4030073918  ____initialSceneCameraRotation_7;
	// Wikitude.WikitudeCamera Wikitude.TrackerBehaviour::_wikitudeCamera
	WikitudeCamera_t2517845841 * ____wikitudeCamera_8;
	// System.String Wikitude.TrackerBehaviour::_trackedTargetName
	String_t* ____trackedTargetName_9;
	// Wikitude.TrackerBehaviour/OnTargetsLoadedEvent Wikitude.TrackerBehaviour::OnTargetsLoaded
	OnTargetsLoadedEvent_t3080540202 * ___OnTargetsLoaded_10;
	// Wikitude.TrackerBehaviour/OnErrorLoadingTargetsEvent Wikitude.TrackerBehaviour::OnErrorLoadingTargets
	OnErrorLoadingTargetsEvent_t3800749431 * ___OnErrorLoadingTargets_11;

public:
	inline static int32_t get_offset_of__manager_2() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t3845512381, ____manager_2)); }
	inline TrackerManager_t130000407 * get__manager_2() const { return ____manager_2; }
	inline TrackerManager_t130000407 ** get_address_of__manager_2() { return &____manager_2; }
	inline void set__manager_2(TrackerManager_t130000407 * value)
	{
		____manager_2 = value;
		Il2CppCodeGenWriteBarrier(&____manager_2, value);
	}

	inline static int32_t get_offset_of__registeredTrackables_3() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t3845512381, ____registeredTrackables_3)); }
	inline HashSet_1_t1977092026 * get__registeredTrackables_3() const { return ____registeredTrackables_3; }
	inline HashSet_1_t1977092026 ** get_address_of__registeredTrackables_3() { return &____registeredTrackables_3; }
	inline void set__registeredTrackables_3(HashSet_1_t1977092026 * value)
	{
		____registeredTrackables_3 = value;
		Il2CppCodeGenWriteBarrier(&____registeredTrackables_3, value);
	}

	inline static int32_t get_offset_of_U3CInitializedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t3845512381, ___U3CInitializedU3Ek__BackingField_4)); }
	inline bool get_U3CInitializedU3Ek__BackingField_4() const { return ___U3CInitializedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CInitializedU3Ek__BackingField_4() { return &___U3CInitializedU3Ek__BackingField_4; }
	inline void set_U3CInitializedU3Ek__BackingField_4(bool value)
	{
		___U3CInitializedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__sceneCamera_5() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t3845512381, ____sceneCamera_5)); }
	inline Camera_t189460977 * get__sceneCamera_5() const { return ____sceneCamera_5; }
	inline Camera_t189460977 ** get_address_of__sceneCamera_5() { return &____sceneCamera_5; }
	inline void set__sceneCamera_5(Camera_t189460977 * value)
	{
		____sceneCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&____sceneCamera_5, value);
	}

	inline static int32_t get_offset_of__initialSceneCameraPosition_6() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t3845512381, ____initialSceneCameraPosition_6)); }
	inline Vector3_t2243707580  get__initialSceneCameraPosition_6() const { return ____initialSceneCameraPosition_6; }
	inline Vector3_t2243707580 * get_address_of__initialSceneCameraPosition_6() { return &____initialSceneCameraPosition_6; }
	inline void set__initialSceneCameraPosition_6(Vector3_t2243707580  value)
	{
		____initialSceneCameraPosition_6 = value;
	}

	inline static int32_t get_offset_of__initialSceneCameraRotation_7() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t3845512381, ____initialSceneCameraRotation_7)); }
	inline Quaternion_t4030073918  get__initialSceneCameraRotation_7() const { return ____initialSceneCameraRotation_7; }
	inline Quaternion_t4030073918 * get_address_of__initialSceneCameraRotation_7() { return &____initialSceneCameraRotation_7; }
	inline void set__initialSceneCameraRotation_7(Quaternion_t4030073918  value)
	{
		____initialSceneCameraRotation_7 = value;
	}

	inline static int32_t get_offset_of__wikitudeCamera_8() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t3845512381, ____wikitudeCamera_8)); }
	inline WikitudeCamera_t2517845841 * get__wikitudeCamera_8() const { return ____wikitudeCamera_8; }
	inline WikitudeCamera_t2517845841 ** get_address_of__wikitudeCamera_8() { return &____wikitudeCamera_8; }
	inline void set__wikitudeCamera_8(WikitudeCamera_t2517845841 * value)
	{
		____wikitudeCamera_8 = value;
		Il2CppCodeGenWriteBarrier(&____wikitudeCamera_8, value);
	}

	inline static int32_t get_offset_of__trackedTargetName_9() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t3845512381, ____trackedTargetName_9)); }
	inline String_t* get__trackedTargetName_9() const { return ____trackedTargetName_9; }
	inline String_t** get_address_of__trackedTargetName_9() { return &____trackedTargetName_9; }
	inline void set__trackedTargetName_9(String_t* value)
	{
		____trackedTargetName_9 = value;
		Il2CppCodeGenWriteBarrier(&____trackedTargetName_9, value);
	}

	inline static int32_t get_offset_of_OnTargetsLoaded_10() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t3845512381, ___OnTargetsLoaded_10)); }
	inline OnTargetsLoadedEvent_t3080540202 * get_OnTargetsLoaded_10() const { return ___OnTargetsLoaded_10; }
	inline OnTargetsLoadedEvent_t3080540202 ** get_address_of_OnTargetsLoaded_10() { return &___OnTargetsLoaded_10; }
	inline void set_OnTargetsLoaded_10(OnTargetsLoadedEvent_t3080540202 * value)
	{
		___OnTargetsLoaded_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnTargetsLoaded_10, value);
	}

	inline static int32_t get_offset_of_OnErrorLoadingTargets_11() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t3845512381, ___OnErrorLoadingTargets_11)); }
	inline OnErrorLoadingTargetsEvent_t3800749431 * get_OnErrorLoadingTargets_11() const { return ___OnErrorLoadingTargets_11; }
	inline OnErrorLoadingTargetsEvent_t3800749431 ** get_address_of_OnErrorLoadingTargets_11() { return &___OnErrorLoadingTargets_11; }
	inline void set_OnErrorLoadingTargets_11(OnErrorLoadingTargetsEvent_t3800749431 * value)
	{
		___OnErrorLoadingTargets_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnErrorLoadingTargets_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
