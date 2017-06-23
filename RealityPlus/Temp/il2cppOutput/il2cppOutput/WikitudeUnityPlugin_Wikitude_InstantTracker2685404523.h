#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "WikitudeUnityPlugin_Wikitude_TrackerBehaviour3845512381.h"

// Wikitude.InstantTracker/OnStateChangedEvent
struct OnStateChangedEvent_t3227093256;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.InstantTracker
struct  InstantTracker_t2685404523  : public TrackerBehaviour_t3845512381
{
public:
	// Wikitude.InstantTracker/OnStateChangedEvent Wikitude.InstantTracker::OnStateChanged
	OnStateChangedEvent_t3227093256 * ___OnStateChanged_12;

public:
	inline static int32_t get_offset_of_OnStateChanged_12() { return static_cast<int32_t>(offsetof(InstantTracker_t2685404523, ___OnStateChanged_12)); }
	inline OnStateChangedEvent_t3227093256 * get_OnStateChanged_12() const { return ___OnStateChanged_12; }
	inline OnStateChangedEvent_t3227093256 ** get_address_of_OnStateChanged_12() { return &___OnStateChanged_12; }
	inline void set_OnStateChanged_12(OnStateChangedEvent_t3227093256 * value)
	{
		___OnStateChanged_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnStateChanged_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
