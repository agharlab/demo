#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "WikitudeUnityPlugin_Wikitude_TargetSource1091527250.h"

// System.String
struct String_t;
// Wikitude.TargetCollectionResource/OnFinishLoadingEvent
struct OnFinishLoadingEvent_t1372070578;
// Wikitude.TargetCollectionResource/OnErrorLoadingEvent
struct OnErrorLoadingEvent_t706169873;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.TargetCollectionResource
struct  TargetCollectionResource_t3980041541  : public TargetSource_t1091527250
{
public:
	// System.String Wikitude.TargetCollectionResource::_targetPath
	String_t* ____targetPath_2;
	// System.Boolean Wikitude.TargetCollectionResource::_useCustomURL
	bool ____useCustomURL_3;
	// Wikitude.TargetCollectionResource/OnFinishLoadingEvent Wikitude.TargetCollectionResource::OnFinishLoading
	OnFinishLoadingEvent_t1372070578 * ___OnFinishLoading_4;
	// Wikitude.TargetCollectionResource/OnErrorLoadingEvent Wikitude.TargetCollectionResource::OnErrorLoading
	OnErrorLoadingEvent_t706169873 * ___OnErrorLoading_5;

public:
	inline static int32_t get_offset_of__targetPath_2() { return static_cast<int32_t>(offsetof(TargetCollectionResource_t3980041541, ____targetPath_2)); }
	inline String_t* get__targetPath_2() const { return ____targetPath_2; }
	inline String_t** get_address_of__targetPath_2() { return &____targetPath_2; }
	inline void set__targetPath_2(String_t* value)
	{
		____targetPath_2 = value;
		Il2CppCodeGenWriteBarrier(&____targetPath_2, value);
	}

	inline static int32_t get_offset_of__useCustomURL_3() { return static_cast<int32_t>(offsetof(TargetCollectionResource_t3980041541, ____useCustomURL_3)); }
	inline bool get__useCustomURL_3() const { return ____useCustomURL_3; }
	inline bool* get_address_of__useCustomURL_3() { return &____useCustomURL_3; }
	inline void set__useCustomURL_3(bool value)
	{
		____useCustomURL_3 = value;
	}

	inline static int32_t get_offset_of_OnFinishLoading_4() { return static_cast<int32_t>(offsetof(TargetCollectionResource_t3980041541, ___OnFinishLoading_4)); }
	inline OnFinishLoadingEvent_t1372070578 * get_OnFinishLoading_4() const { return ___OnFinishLoading_4; }
	inline OnFinishLoadingEvent_t1372070578 ** get_address_of_OnFinishLoading_4() { return &___OnFinishLoading_4; }
	inline void set_OnFinishLoading_4(OnFinishLoadingEvent_t1372070578 * value)
	{
		___OnFinishLoading_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnFinishLoading_4, value);
	}

	inline static int32_t get_offset_of_OnErrorLoading_5() { return static_cast<int32_t>(offsetof(TargetCollectionResource_t3980041541, ___OnErrorLoading_5)); }
	inline OnErrorLoadingEvent_t706169873 * get_OnErrorLoading_5() const { return ___OnErrorLoading_5; }
	inline OnErrorLoadingEvent_t706169873 ** get_address_of_OnErrorLoading_5() { return &___OnErrorLoading_5; }
	inline void set_OnErrorLoading_5(OnErrorLoadingEvent_t706169873 * value)
	{
		___OnErrorLoading_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnErrorLoading_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
