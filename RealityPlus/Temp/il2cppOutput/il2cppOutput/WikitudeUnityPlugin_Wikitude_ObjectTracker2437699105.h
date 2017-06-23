#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "WikitudeUnityPlugin_Wikitude_TrackerBehaviour3845512381.h"

// Wikitude.TargetCollectionResource
struct TargetCollectionResource_t3980041541;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.ObjectTracker
struct  ObjectTracker_t2437699105  : public TrackerBehaviour_t3845512381
{
public:
	// Wikitude.TargetCollectionResource Wikitude.ObjectTracker::_targetCollectionResource
	TargetCollectionResource_t3980041541 * ____targetCollectionResource_12;
	// System.Boolean Wikitude.ObjectTracker::<IsRegistered>k__BackingField
	bool ___U3CIsRegisteredU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of__targetCollectionResource_12() { return static_cast<int32_t>(offsetof(ObjectTracker_t2437699105, ____targetCollectionResource_12)); }
	inline TargetCollectionResource_t3980041541 * get__targetCollectionResource_12() const { return ____targetCollectionResource_12; }
	inline TargetCollectionResource_t3980041541 ** get_address_of__targetCollectionResource_12() { return &____targetCollectionResource_12; }
	inline void set__targetCollectionResource_12(TargetCollectionResource_t3980041541 * value)
	{
		____targetCollectionResource_12 = value;
		Il2CppCodeGenWriteBarrier(&____targetCollectionResource_12, value);
	}

	inline static int32_t get_offset_of_U3CIsRegisteredU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ObjectTracker_t2437699105, ___U3CIsRegisteredU3Ek__BackingField_13)); }
	inline bool get_U3CIsRegisteredU3Ek__BackingField_13() const { return ___U3CIsRegisteredU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CIsRegisteredU3Ek__BackingField_13() { return &___U3CIsRegisteredU3Ek__BackingField_13; }
	inline void set_U3CIsRegisteredU3Ek__BackingField_13(bool value)
	{
		___U3CIsRegisteredU3Ek__BackingField_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
