#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomRenderingController/InputFrameData
struct  InputFrameData_t296296979 
{
public:
	// System.Int64 CustomRenderingController/InputFrameData::Index
	int64_t ___Index_0;
	// UnityEngine.Texture2D CustomRenderingController/InputFrameData::Texture
	Texture2D_t3542995729 * ___Texture_1;

public:
	inline static int32_t get_offset_of_Index_0() { return static_cast<int32_t>(offsetof(InputFrameData_t296296979, ___Index_0)); }
	inline int64_t get_Index_0() const { return ___Index_0; }
	inline int64_t* get_address_of_Index_0() { return &___Index_0; }
	inline void set_Index_0(int64_t value)
	{
		___Index_0 = value;
	}

	inline static int32_t get_offset_of_Texture_1() { return static_cast<int32_t>(offsetof(InputFrameData_t296296979, ___Texture_1)); }
	inline Texture2D_t3542995729 * get_Texture_1() const { return ___Texture_1; }
	inline Texture2D_t3542995729 ** get_address_of_Texture_1() { return &___Texture_1; }
	inline void set_Texture_1(Texture2D_t3542995729 * value)
	{
		___Texture_1 = value;
		Il2CppCodeGenWriteBarrier(&___Texture_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of CustomRenderingController/InputFrameData
struct InputFrameData_t296296979_marshaled_pinvoke
{
	int64_t ___Index_0;
	Texture2D_t3542995729 * ___Texture_1;
};
// Native definition for COM marshalling of CustomRenderingController/InputFrameData
struct InputFrameData_t296296979_marshaled_com
{
	int64_t ___Index_0;
	Texture2D_t3542995729 * ___Texture_1;
};
