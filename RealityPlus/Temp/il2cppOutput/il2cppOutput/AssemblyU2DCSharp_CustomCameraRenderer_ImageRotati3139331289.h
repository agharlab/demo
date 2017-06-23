#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomCameraRenderer/ImageRotation
struct  ImageRotation_t3139331289 
{
public:
	// System.Boolean CustomCameraRenderer/ImageRotation::FlipHorizontally
	bool ___FlipHorizontally_0;
	// System.Boolean CustomCameraRenderer/ImageRotation::FlipVertically
	bool ___FlipVertically_1;
	// System.Boolean CustomCameraRenderer/ImageRotation::Rotate
	bool ___Rotate_2;

public:
	inline static int32_t get_offset_of_FlipHorizontally_0() { return static_cast<int32_t>(offsetof(ImageRotation_t3139331289, ___FlipHorizontally_0)); }
	inline bool get_FlipHorizontally_0() const { return ___FlipHorizontally_0; }
	inline bool* get_address_of_FlipHorizontally_0() { return &___FlipHorizontally_0; }
	inline void set_FlipHorizontally_0(bool value)
	{
		___FlipHorizontally_0 = value;
	}

	inline static int32_t get_offset_of_FlipVertically_1() { return static_cast<int32_t>(offsetof(ImageRotation_t3139331289, ___FlipVertically_1)); }
	inline bool get_FlipVertically_1() const { return ___FlipVertically_1; }
	inline bool* get_address_of_FlipVertically_1() { return &___FlipVertically_1; }
	inline void set_FlipVertically_1(bool value)
	{
		___FlipVertically_1 = value;
	}

	inline static int32_t get_offset_of_Rotate_2() { return static_cast<int32_t>(offsetof(ImageRotation_t3139331289, ___Rotate_2)); }
	inline bool get_Rotate_2() const { return ___Rotate_2; }
	inline bool* get_address_of_Rotate_2() { return &___Rotate_2; }
	inline void set_Rotate_2(bool value)
	{
		___Rotate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of CustomCameraRenderer/ImageRotation
struct ImageRotation_t3139331289_marshaled_pinvoke
{
	int32_t ___FlipHorizontally_0;
	int32_t ___FlipVertically_1;
	int32_t ___Rotate_2;
};
// Native definition for COM marshalling of CustomCameraRenderer/ImageRotation
struct ImageRotation_t3139331289_marshaled_com
{
	int32_t ___FlipHorizontally_0;
	int32_t ___FlipVertically_1;
	int32_t ___Rotate_2;
};
