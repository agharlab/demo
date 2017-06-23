#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "WikitudeUnityPlugin_Wikitude_TargetSource1091527250.h"
#include "WikitudeUnityPlugin_Wikitude_TrackerManager_CloudRe139324267.h"

// System.String
struct String_t;
// Wikitude.CloudRecognitionService/OnInitializedEvent
struct OnInitializedEvent_t830202925;
// Wikitude.CloudRecognitionService/OnInitializationErrorEvent
struct OnInitializationErrorEvent_t2097344561;
// Wikitude.CloudRecognitionService/OnRecognitionResponseEvent
struct OnRecognitionResponseEvent_t330592769;
// Wikitude.CloudRecognitionService/OnRecognitionErrorEvent
struct OnRecognitionErrorEvent_t96168148;
// Wikitude.CloudRecognitionService/OnInterruptionEvent
struct OnInterruptionEvent_t1387741428;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.CloudRecognitionService
struct  CloudRecognitionService_t1970555431  : public TargetSource_t1091527250
{
public:
	// System.String Wikitude.CloudRecognitionService::_clientToken
	String_t* ____clientToken_2;
	// System.String Wikitude.CloudRecognitionService::_targetCollectionId
	String_t* ____targetCollectionId_3;
	// Wikitude.TrackerManager/CloudRecognitionServerRegion Wikitude.CloudRecognitionService::_serverRegion
	int32_t ____serverRegion_4;
	// Wikitude.CloudRecognitionService/OnInitializedEvent Wikitude.CloudRecognitionService::OnInitialized
	OnInitializedEvent_t830202925 * ___OnInitialized_5;
	// Wikitude.CloudRecognitionService/OnInitializationErrorEvent Wikitude.CloudRecognitionService::OnInitializationError
	OnInitializationErrorEvent_t2097344561 * ___OnInitializationError_6;
	// Wikitude.CloudRecognitionService/OnRecognitionResponseEvent Wikitude.CloudRecognitionService::OnRecognitionResponse
	OnRecognitionResponseEvent_t330592769 * ___OnRecognitionResponse_7;
	// Wikitude.CloudRecognitionService/OnRecognitionErrorEvent Wikitude.CloudRecognitionService::OnRecognitionError
	OnRecognitionErrorEvent_t96168148 * ___OnRecognitionError_8;
	// Wikitude.CloudRecognitionService/OnInterruptionEvent Wikitude.CloudRecognitionService::OnInterruption
	OnInterruptionEvent_t1387741428 * ___OnInterruption_9;
	// System.Boolean Wikitude.CloudRecognitionService::<IsContinuousRecognitionRunning>k__BackingField
	bool ___U3CIsContinuousRecognitionRunningU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of__clientToken_2() { return static_cast<int32_t>(offsetof(CloudRecognitionService_t1970555431, ____clientToken_2)); }
	inline String_t* get__clientToken_2() const { return ____clientToken_2; }
	inline String_t** get_address_of__clientToken_2() { return &____clientToken_2; }
	inline void set__clientToken_2(String_t* value)
	{
		____clientToken_2 = value;
		Il2CppCodeGenWriteBarrier(&____clientToken_2, value);
	}

	inline static int32_t get_offset_of__targetCollectionId_3() { return static_cast<int32_t>(offsetof(CloudRecognitionService_t1970555431, ____targetCollectionId_3)); }
	inline String_t* get__targetCollectionId_3() const { return ____targetCollectionId_3; }
	inline String_t** get_address_of__targetCollectionId_3() { return &____targetCollectionId_3; }
	inline void set__targetCollectionId_3(String_t* value)
	{
		____targetCollectionId_3 = value;
		Il2CppCodeGenWriteBarrier(&____targetCollectionId_3, value);
	}

	inline static int32_t get_offset_of__serverRegion_4() { return static_cast<int32_t>(offsetof(CloudRecognitionService_t1970555431, ____serverRegion_4)); }
	inline int32_t get__serverRegion_4() const { return ____serverRegion_4; }
	inline int32_t* get_address_of__serverRegion_4() { return &____serverRegion_4; }
	inline void set__serverRegion_4(int32_t value)
	{
		____serverRegion_4 = value;
	}

	inline static int32_t get_offset_of_OnInitialized_5() { return static_cast<int32_t>(offsetof(CloudRecognitionService_t1970555431, ___OnInitialized_5)); }
	inline OnInitializedEvent_t830202925 * get_OnInitialized_5() const { return ___OnInitialized_5; }
	inline OnInitializedEvent_t830202925 ** get_address_of_OnInitialized_5() { return &___OnInitialized_5; }
	inline void set_OnInitialized_5(OnInitializedEvent_t830202925 * value)
	{
		___OnInitialized_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnInitialized_5, value);
	}

	inline static int32_t get_offset_of_OnInitializationError_6() { return static_cast<int32_t>(offsetof(CloudRecognitionService_t1970555431, ___OnInitializationError_6)); }
	inline OnInitializationErrorEvent_t2097344561 * get_OnInitializationError_6() const { return ___OnInitializationError_6; }
	inline OnInitializationErrorEvent_t2097344561 ** get_address_of_OnInitializationError_6() { return &___OnInitializationError_6; }
	inline void set_OnInitializationError_6(OnInitializationErrorEvent_t2097344561 * value)
	{
		___OnInitializationError_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnInitializationError_6, value);
	}

	inline static int32_t get_offset_of_OnRecognitionResponse_7() { return static_cast<int32_t>(offsetof(CloudRecognitionService_t1970555431, ___OnRecognitionResponse_7)); }
	inline OnRecognitionResponseEvent_t330592769 * get_OnRecognitionResponse_7() const { return ___OnRecognitionResponse_7; }
	inline OnRecognitionResponseEvent_t330592769 ** get_address_of_OnRecognitionResponse_7() { return &___OnRecognitionResponse_7; }
	inline void set_OnRecognitionResponse_7(OnRecognitionResponseEvent_t330592769 * value)
	{
		___OnRecognitionResponse_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnRecognitionResponse_7, value);
	}

	inline static int32_t get_offset_of_OnRecognitionError_8() { return static_cast<int32_t>(offsetof(CloudRecognitionService_t1970555431, ___OnRecognitionError_8)); }
	inline OnRecognitionErrorEvent_t96168148 * get_OnRecognitionError_8() const { return ___OnRecognitionError_8; }
	inline OnRecognitionErrorEvent_t96168148 ** get_address_of_OnRecognitionError_8() { return &___OnRecognitionError_8; }
	inline void set_OnRecognitionError_8(OnRecognitionErrorEvent_t96168148 * value)
	{
		___OnRecognitionError_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnRecognitionError_8, value);
	}

	inline static int32_t get_offset_of_OnInterruption_9() { return static_cast<int32_t>(offsetof(CloudRecognitionService_t1970555431, ___OnInterruption_9)); }
	inline OnInterruptionEvent_t1387741428 * get_OnInterruption_9() const { return ___OnInterruption_9; }
	inline OnInterruptionEvent_t1387741428 ** get_address_of_OnInterruption_9() { return &___OnInterruption_9; }
	inline void set_OnInterruption_9(OnInterruptionEvent_t1387741428 * value)
	{
		___OnInterruption_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnInterruption_9, value);
	}

	inline static int32_t get_offset_of_U3CIsContinuousRecognitionRunningU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CloudRecognitionService_t1970555431, ___U3CIsContinuousRecognitionRunningU3Ek__BackingField_10)); }
	inline bool get_U3CIsContinuousRecognitionRunningU3Ek__BackingField_10() const { return ___U3CIsContinuousRecognitionRunningU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsContinuousRecognitionRunningU3Ek__BackingField_10() { return &___U3CIsContinuousRecognitionRunningU3Ek__BackingField_10; }
	inline void set_U3CIsContinuousRecognitionRunningU3Ek__BackingField_10(bool value)
	{
		___U3CIsContinuousRecognitionRunningU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
