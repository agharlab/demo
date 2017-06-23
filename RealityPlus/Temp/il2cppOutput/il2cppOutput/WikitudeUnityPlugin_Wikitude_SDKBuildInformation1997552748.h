#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.SDKBuildInformation
struct  SDKBuildInformation_t1997552748  : public Il2CppObject
{
public:
	// System.String Wikitude.SDKBuildInformation::BuildConfiguration
	String_t* ___BuildConfiguration_0;
	// System.String Wikitude.SDKBuildInformation::BuildDate
	String_t* ___BuildDate_1;
	// System.String Wikitude.SDKBuildInformation::BuildNumber
	String_t* ___BuildNumber_2;
	// System.String Wikitude.SDKBuildInformation::SDKVersion
	String_t* ___SDKVersion_3;

public:
	inline static int32_t get_offset_of_BuildConfiguration_0() { return static_cast<int32_t>(offsetof(SDKBuildInformation_t1997552748, ___BuildConfiguration_0)); }
	inline String_t* get_BuildConfiguration_0() const { return ___BuildConfiguration_0; }
	inline String_t** get_address_of_BuildConfiguration_0() { return &___BuildConfiguration_0; }
	inline void set_BuildConfiguration_0(String_t* value)
	{
		___BuildConfiguration_0 = value;
		Il2CppCodeGenWriteBarrier(&___BuildConfiguration_0, value);
	}

	inline static int32_t get_offset_of_BuildDate_1() { return static_cast<int32_t>(offsetof(SDKBuildInformation_t1997552748, ___BuildDate_1)); }
	inline String_t* get_BuildDate_1() const { return ___BuildDate_1; }
	inline String_t** get_address_of_BuildDate_1() { return &___BuildDate_1; }
	inline void set_BuildDate_1(String_t* value)
	{
		___BuildDate_1 = value;
		Il2CppCodeGenWriteBarrier(&___BuildDate_1, value);
	}

	inline static int32_t get_offset_of_BuildNumber_2() { return static_cast<int32_t>(offsetof(SDKBuildInformation_t1997552748, ___BuildNumber_2)); }
	inline String_t* get_BuildNumber_2() const { return ___BuildNumber_2; }
	inline String_t** get_address_of_BuildNumber_2() { return &___BuildNumber_2; }
	inline void set_BuildNumber_2(String_t* value)
	{
		___BuildNumber_2 = value;
		Il2CppCodeGenWriteBarrier(&___BuildNumber_2, value);
	}

	inline static int32_t get_offset_of_SDKVersion_3() { return static_cast<int32_t>(offsetof(SDKBuildInformation_t1997552748, ___SDKVersion_3)); }
	inline String_t* get_SDKVersion_3() const { return ___SDKVersion_3; }
	inline String_t** get_address_of_SDKVersion_3() { return &___SDKVersion_3; }
	inline void set_SDKVersion_3(String_t* value)
	{
		___SDKVersion_3 = value;
		Il2CppCodeGenWriteBarrier(&___SDKVersion_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
