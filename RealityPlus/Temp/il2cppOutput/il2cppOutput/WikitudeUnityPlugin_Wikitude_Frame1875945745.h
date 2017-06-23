#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "WikitudeUnityPlugin_Wikitude_FrameColorSpace1238203676.h"
#include "WikitudeUnityPlugin_Wikitude_FrameStrides204969663.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.Frame
struct  Frame_t1875945745 
{
public:
	// System.IntPtr Wikitude.Frame::Data
	IntPtr_t ___Data_0;
	// System.Int32 Wikitude.Frame::DataSize
	int32_t ___DataSize_1;
	// System.Int32 Wikitude.Frame::Width
	int32_t ___Width_2;
	// System.Int32 Wikitude.Frame::Height
	int32_t ___Height_3;
	// Wikitude.FrameColorSpace Wikitude.Frame::ColorSpace
	int32_t ___ColorSpace_4;
	// System.Boolean Wikitude.Frame::HasStrides
	bool ___HasStrides_5;
	// Wikitude.FrameStrides Wikitude.Frame::Strides
	FrameStrides_t204969663  ___Strides_6;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Frame_t1875945745, ___Data_0)); }
	inline IntPtr_t get_Data_0() const { return ___Data_0; }
	inline IntPtr_t* get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(IntPtr_t value)
	{
		___Data_0 = value;
	}

	inline static int32_t get_offset_of_DataSize_1() { return static_cast<int32_t>(offsetof(Frame_t1875945745, ___DataSize_1)); }
	inline int32_t get_DataSize_1() const { return ___DataSize_1; }
	inline int32_t* get_address_of_DataSize_1() { return &___DataSize_1; }
	inline void set_DataSize_1(int32_t value)
	{
		___DataSize_1 = value;
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(Frame_t1875945745, ___Width_2)); }
	inline int32_t get_Width_2() const { return ___Width_2; }
	inline int32_t* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(int32_t value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(Frame_t1875945745, ___Height_3)); }
	inline int32_t get_Height_3() const { return ___Height_3; }
	inline int32_t* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(int32_t value)
	{
		___Height_3 = value;
	}

	inline static int32_t get_offset_of_ColorSpace_4() { return static_cast<int32_t>(offsetof(Frame_t1875945745, ___ColorSpace_4)); }
	inline int32_t get_ColorSpace_4() const { return ___ColorSpace_4; }
	inline int32_t* get_address_of_ColorSpace_4() { return &___ColorSpace_4; }
	inline void set_ColorSpace_4(int32_t value)
	{
		___ColorSpace_4 = value;
	}

	inline static int32_t get_offset_of_HasStrides_5() { return static_cast<int32_t>(offsetof(Frame_t1875945745, ___HasStrides_5)); }
	inline bool get_HasStrides_5() const { return ___HasStrides_5; }
	inline bool* get_address_of_HasStrides_5() { return &___HasStrides_5; }
	inline void set_HasStrides_5(bool value)
	{
		___HasStrides_5 = value;
	}

	inline static int32_t get_offset_of_Strides_6() { return static_cast<int32_t>(offsetof(Frame_t1875945745, ___Strides_6)); }
	inline FrameStrides_t204969663  get_Strides_6() const { return ___Strides_6; }
	inline FrameStrides_t204969663 * get_address_of_Strides_6() { return &___Strides_6; }
	inline void set_Strides_6(FrameStrides_t204969663  value)
	{
		___Strides_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Wikitude.Frame
struct Frame_t1875945745_marshaled_pinvoke
{
	intptr_t ___Data_0;
	int32_t ___DataSize_1;
	int32_t ___Width_2;
	int32_t ___Height_3;
	int32_t ___ColorSpace_4;
	int32_t ___HasStrides_5;
	FrameStrides_t204969663  ___Strides_6;
};
// Native definition for COM marshalling of Wikitude.Frame
struct Frame_t1875945745_marshaled_com
{
	intptr_t ___Data_0;
	int32_t ___DataSize_1;
	int32_t ___Width_2;
	int32_t ___Height_3;
	int32_t ___ColorSpace_4;
	int32_t ___HasStrides_5;
	FrameStrides_t204969663  ___Strides_6;
};
