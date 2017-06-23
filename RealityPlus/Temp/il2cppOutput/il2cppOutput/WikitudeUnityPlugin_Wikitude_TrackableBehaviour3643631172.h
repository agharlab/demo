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
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// System.String[]
struct StringU5BU5D_t1642385972;
// Wikitude.TrackableBehaviour/OnEnterFieldOfVisionEvent
struct OnEnterFieldOfVisionEvent_t3362888889;
// Wikitude.TrackableBehaviour/OnExitFieldOfVisionEvent
struct OnExitFieldOfVisionEvent_t2513344377;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Mesh
struct Mesh_t1356156583;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.TrackableBehaviour
struct  TrackableBehaviour_t3643631172  : public MonoBehaviour_t1158329972
{
public:
	// System.String Wikitude.TrackableBehaviour::_targetPattern
	String_t* ____targetPattern_2;
	// System.Text.RegularExpressions.Regex Wikitude.TrackableBehaviour::_targetPatternRegex
	Regex_t1803876613 * ____targetPatternRegex_3;
	// System.Boolean Wikitude.TrackableBehaviour::_isKnown
	bool ____isKnown_4;
	// System.Boolean Wikitude.TrackableBehaviour::_extendedTracking
	bool ____extendedTracking_5;
	// System.String[] Wikitude.TrackableBehaviour::_targetsForExtendedTracking
	StringU5BU5D_t1642385972* ____targetsForExtendedTracking_6;
	// System.Boolean Wikitude.TrackableBehaviour::_autoToggleVisibility
	bool ____autoToggleVisibility_7;
	// Wikitude.TrackableBehaviour/OnEnterFieldOfVisionEvent Wikitude.TrackableBehaviour::OnEnterFieldOfVision
	OnEnterFieldOfVisionEvent_t3362888889 * ___OnEnterFieldOfVision_8;
	// Wikitude.TrackableBehaviour/OnExitFieldOfVisionEvent Wikitude.TrackableBehaviour::OnExitFieldOfVision
	OnExitFieldOfVisionEvent_t2513344377 * ___OnExitFieldOfVision_9;
	// System.Boolean Wikitude.TrackableBehaviour::_eventsFoldout
	bool ____eventsFoldout_10;
	// System.Boolean Wikitude.TrackableBehaviour::_registeredToTracker
	bool ____registeredToTracker_11;
	// UnityEngine.Texture2D Wikitude.TrackableBehaviour::_preview
	Texture2D_t3542995729 * ____preview_12;
	// UnityEngine.Material Wikitude.TrackableBehaviour::_previewMaterial
	Material_t193706927 * ____previewMaterial_13;
	// UnityEngine.Mesh Wikitude.TrackableBehaviour::_previewMesh
	Mesh_t1356156583 * ____previewMesh_14;

public:
	inline static int32_t get_offset_of__targetPattern_2() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t3643631172, ____targetPattern_2)); }
	inline String_t* get__targetPattern_2() const { return ____targetPattern_2; }
	inline String_t** get_address_of__targetPattern_2() { return &____targetPattern_2; }
	inline void set__targetPattern_2(String_t* value)
	{
		____targetPattern_2 = value;
		Il2CppCodeGenWriteBarrier(&____targetPattern_2, value);
	}

	inline static int32_t get_offset_of__targetPatternRegex_3() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t3643631172, ____targetPatternRegex_3)); }
	inline Regex_t1803876613 * get__targetPatternRegex_3() const { return ____targetPatternRegex_3; }
	inline Regex_t1803876613 ** get_address_of__targetPatternRegex_3() { return &____targetPatternRegex_3; }
	inline void set__targetPatternRegex_3(Regex_t1803876613 * value)
	{
		____targetPatternRegex_3 = value;
		Il2CppCodeGenWriteBarrier(&____targetPatternRegex_3, value);
	}

	inline static int32_t get_offset_of__isKnown_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t3643631172, ____isKnown_4)); }
	inline bool get__isKnown_4() const { return ____isKnown_4; }
	inline bool* get_address_of__isKnown_4() { return &____isKnown_4; }
	inline void set__isKnown_4(bool value)
	{
		____isKnown_4 = value;
	}

	inline static int32_t get_offset_of__extendedTracking_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t3643631172, ____extendedTracking_5)); }
	inline bool get__extendedTracking_5() const { return ____extendedTracking_5; }
	inline bool* get_address_of__extendedTracking_5() { return &____extendedTracking_5; }
	inline void set__extendedTracking_5(bool value)
	{
		____extendedTracking_5 = value;
	}

	inline static int32_t get_offset_of__targetsForExtendedTracking_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t3643631172, ____targetsForExtendedTracking_6)); }
	inline StringU5BU5D_t1642385972* get__targetsForExtendedTracking_6() const { return ____targetsForExtendedTracking_6; }
	inline StringU5BU5D_t1642385972** get_address_of__targetsForExtendedTracking_6() { return &____targetsForExtendedTracking_6; }
	inline void set__targetsForExtendedTracking_6(StringU5BU5D_t1642385972* value)
	{
		____targetsForExtendedTracking_6 = value;
		Il2CppCodeGenWriteBarrier(&____targetsForExtendedTracking_6, value);
	}

	inline static int32_t get_offset_of__autoToggleVisibility_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t3643631172, ____autoToggleVisibility_7)); }
	inline bool get__autoToggleVisibility_7() const { return ____autoToggleVisibility_7; }
	inline bool* get_address_of__autoToggleVisibility_7() { return &____autoToggleVisibility_7; }
	inline void set__autoToggleVisibility_7(bool value)
	{
		____autoToggleVisibility_7 = value;
	}

	inline static int32_t get_offset_of_OnEnterFieldOfVision_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t3643631172, ___OnEnterFieldOfVision_8)); }
	inline OnEnterFieldOfVisionEvent_t3362888889 * get_OnEnterFieldOfVision_8() const { return ___OnEnterFieldOfVision_8; }
	inline OnEnterFieldOfVisionEvent_t3362888889 ** get_address_of_OnEnterFieldOfVision_8() { return &___OnEnterFieldOfVision_8; }
	inline void set_OnEnterFieldOfVision_8(OnEnterFieldOfVisionEvent_t3362888889 * value)
	{
		___OnEnterFieldOfVision_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnEnterFieldOfVision_8, value);
	}

	inline static int32_t get_offset_of_OnExitFieldOfVision_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t3643631172, ___OnExitFieldOfVision_9)); }
	inline OnExitFieldOfVisionEvent_t2513344377 * get_OnExitFieldOfVision_9() const { return ___OnExitFieldOfVision_9; }
	inline OnExitFieldOfVisionEvent_t2513344377 ** get_address_of_OnExitFieldOfVision_9() { return &___OnExitFieldOfVision_9; }
	inline void set_OnExitFieldOfVision_9(OnExitFieldOfVisionEvent_t2513344377 * value)
	{
		___OnExitFieldOfVision_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnExitFieldOfVision_9, value);
	}

	inline static int32_t get_offset_of__eventsFoldout_10() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t3643631172, ____eventsFoldout_10)); }
	inline bool get__eventsFoldout_10() const { return ____eventsFoldout_10; }
	inline bool* get_address_of__eventsFoldout_10() { return &____eventsFoldout_10; }
	inline void set__eventsFoldout_10(bool value)
	{
		____eventsFoldout_10 = value;
	}

	inline static int32_t get_offset_of__registeredToTracker_11() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t3643631172, ____registeredToTracker_11)); }
	inline bool get__registeredToTracker_11() const { return ____registeredToTracker_11; }
	inline bool* get_address_of__registeredToTracker_11() { return &____registeredToTracker_11; }
	inline void set__registeredToTracker_11(bool value)
	{
		____registeredToTracker_11 = value;
	}

	inline static int32_t get_offset_of__preview_12() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t3643631172, ____preview_12)); }
	inline Texture2D_t3542995729 * get__preview_12() const { return ____preview_12; }
	inline Texture2D_t3542995729 ** get_address_of__preview_12() { return &____preview_12; }
	inline void set__preview_12(Texture2D_t3542995729 * value)
	{
		____preview_12 = value;
		Il2CppCodeGenWriteBarrier(&____preview_12, value);
	}

	inline static int32_t get_offset_of__previewMaterial_13() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t3643631172, ____previewMaterial_13)); }
	inline Material_t193706927 * get__previewMaterial_13() const { return ____previewMaterial_13; }
	inline Material_t193706927 ** get_address_of__previewMaterial_13() { return &____previewMaterial_13; }
	inline void set__previewMaterial_13(Material_t193706927 * value)
	{
		____previewMaterial_13 = value;
		Il2CppCodeGenWriteBarrier(&____previewMaterial_13, value);
	}

	inline static int32_t get_offset_of__previewMesh_14() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t3643631172, ____previewMesh_14)); }
	inline Mesh_t1356156583 * get__previewMesh_14() const { return ____previewMesh_14; }
	inline Mesh_t1356156583 ** get_address_of__previewMesh_14() { return &____previewMesh_14; }
	inline void set__previewMesh_14(Mesh_t1356156583 * value)
	{
		____previewMesh_14 = value;
		Il2CppCodeGenWriteBarrier(&____previewMesh_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
