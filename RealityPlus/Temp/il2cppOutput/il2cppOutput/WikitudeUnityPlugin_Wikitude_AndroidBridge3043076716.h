#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wikitude.AndroidBridge
struct  AndroidBridge_t3043076716  : public Il2CppObject
{
public:
	// System.Object Wikitude.AndroidBridge::androidClass
	Il2CppObject * ___androidClass_0;
	// System.Type Wikitude.AndroidBridge::androidJNIType
	Type_t * ___androidJNIType_1;
	// System.Object Wikitude.AndroidBridge::androidActivity
	Il2CppObject * ___androidActivity_2;
	// System.Reflection.MethodInfo Wikitude.AndroidBridge::_callMethod
	MethodInfo_t * ____callMethod_3;
	// System.Reflection.MethodInfo Wikitude.AndroidBridge::_callStringMethod
	MethodInfo_t * ____callStringMethod_4;
	// System.Reflection.MethodInfo Wikitude.AndroidBridge::_callFloatArrayMethod
	MethodInfo_t * ____callFloatArrayMethod_5;
	// System.Reflection.MethodInfo Wikitude.AndroidBridge::_callIntMethod
	MethodInfo_t * ____callIntMethod_6;
	// System.Reflection.MethodInfo Wikitude.AndroidBridge::_callFloatMethod
	MethodInfo_t * ____callFloatMethod_7;
	// System.Reflection.MethodInfo Wikitude.AndroidBridge::_callBoolMethod
	MethodInfo_t * ____callBoolMethod_8;
	// System.Reflection.MethodInfo Wikitude.AndroidBridge::_callLongMethod
	MethodInfo_t * ____callLongMethod_9;
	// System.IntPtr Wikitude.AndroidBridge::_nativeFramePtr
	IntPtr_t ____nativeFramePtr_10;

public:
	inline static int32_t get_offset_of_androidClass_0() { return static_cast<int32_t>(offsetof(AndroidBridge_t3043076716, ___androidClass_0)); }
	inline Il2CppObject * get_androidClass_0() const { return ___androidClass_0; }
	inline Il2CppObject ** get_address_of_androidClass_0() { return &___androidClass_0; }
	inline void set_androidClass_0(Il2CppObject * value)
	{
		___androidClass_0 = value;
		Il2CppCodeGenWriteBarrier(&___androidClass_0, value);
	}

	inline static int32_t get_offset_of_androidJNIType_1() { return static_cast<int32_t>(offsetof(AndroidBridge_t3043076716, ___androidJNIType_1)); }
	inline Type_t * get_androidJNIType_1() const { return ___androidJNIType_1; }
	inline Type_t ** get_address_of_androidJNIType_1() { return &___androidJNIType_1; }
	inline void set_androidJNIType_1(Type_t * value)
	{
		___androidJNIType_1 = value;
		Il2CppCodeGenWriteBarrier(&___androidJNIType_1, value);
	}

	inline static int32_t get_offset_of_androidActivity_2() { return static_cast<int32_t>(offsetof(AndroidBridge_t3043076716, ___androidActivity_2)); }
	inline Il2CppObject * get_androidActivity_2() const { return ___androidActivity_2; }
	inline Il2CppObject ** get_address_of_androidActivity_2() { return &___androidActivity_2; }
	inline void set_androidActivity_2(Il2CppObject * value)
	{
		___androidActivity_2 = value;
		Il2CppCodeGenWriteBarrier(&___androidActivity_2, value);
	}

	inline static int32_t get_offset_of__callMethod_3() { return static_cast<int32_t>(offsetof(AndroidBridge_t3043076716, ____callMethod_3)); }
	inline MethodInfo_t * get__callMethod_3() const { return ____callMethod_3; }
	inline MethodInfo_t ** get_address_of__callMethod_3() { return &____callMethod_3; }
	inline void set__callMethod_3(MethodInfo_t * value)
	{
		____callMethod_3 = value;
		Il2CppCodeGenWriteBarrier(&____callMethod_3, value);
	}

	inline static int32_t get_offset_of__callStringMethod_4() { return static_cast<int32_t>(offsetof(AndroidBridge_t3043076716, ____callStringMethod_4)); }
	inline MethodInfo_t * get__callStringMethod_4() const { return ____callStringMethod_4; }
	inline MethodInfo_t ** get_address_of__callStringMethod_4() { return &____callStringMethod_4; }
	inline void set__callStringMethod_4(MethodInfo_t * value)
	{
		____callStringMethod_4 = value;
		Il2CppCodeGenWriteBarrier(&____callStringMethod_4, value);
	}

	inline static int32_t get_offset_of__callFloatArrayMethod_5() { return static_cast<int32_t>(offsetof(AndroidBridge_t3043076716, ____callFloatArrayMethod_5)); }
	inline MethodInfo_t * get__callFloatArrayMethod_5() const { return ____callFloatArrayMethod_5; }
	inline MethodInfo_t ** get_address_of__callFloatArrayMethod_5() { return &____callFloatArrayMethod_5; }
	inline void set__callFloatArrayMethod_5(MethodInfo_t * value)
	{
		____callFloatArrayMethod_5 = value;
		Il2CppCodeGenWriteBarrier(&____callFloatArrayMethod_5, value);
	}

	inline static int32_t get_offset_of__callIntMethod_6() { return static_cast<int32_t>(offsetof(AndroidBridge_t3043076716, ____callIntMethod_6)); }
	inline MethodInfo_t * get__callIntMethod_6() const { return ____callIntMethod_6; }
	inline MethodInfo_t ** get_address_of__callIntMethod_6() { return &____callIntMethod_6; }
	inline void set__callIntMethod_6(MethodInfo_t * value)
	{
		____callIntMethod_6 = value;
		Il2CppCodeGenWriteBarrier(&____callIntMethod_6, value);
	}

	inline static int32_t get_offset_of__callFloatMethod_7() { return static_cast<int32_t>(offsetof(AndroidBridge_t3043076716, ____callFloatMethod_7)); }
	inline MethodInfo_t * get__callFloatMethod_7() const { return ____callFloatMethod_7; }
	inline MethodInfo_t ** get_address_of__callFloatMethod_7() { return &____callFloatMethod_7; }
	inline void set__callFloatMethod_7(MethodInfo_t * value)
	{
		____callFloatMethod_7 = value;
		Il2CppCodeGenWriteBarrier(&____callFloatMethod_7, value);
	}

	inline static int32_t get_offset_of__callBoolMethod_8() { return static_cast<int32_t>(offsetof(AndroidBridge_t3043076716, ____callBoolMethod_8)); }
	inline MethodInfo_t * get__callBoolMethod_8() const { return ____callBoolMethod_8; }
	inline MethodInfo_t ** get_address_of__callBoolMethod_8() { return &____callBoolMethod_8; }
	inline void set__callBoolMethod_8(MethodInfo_t * value)
	{
		____callBoolMethod_8 = value;
		Il2CppCodeGenWriteBarrier(&____callBoolMethod_8, value);
	}

	inline static int32_t get_offset_of__callLongMethod_9() { return static_cast<int32_t>(offsetof(AndroidBridge_t3043076716, ____callLongMethod_9)); }
	inline MethodInfo_t * get__callLongMethod_9() const { return ____callLongMethod_9; }
	inline MethodInfo_t ** get_address_of__callLongMethod_9() { return &____callLongMethod_9; }
	inline void set__callLongMethod_9(MethodInfo_t * value)
	{
		____callLongMethod_9 = value;
		Il2CppCodeGenWriteBarrier(&____callLongMethod_9, value);
	}

	inline static int32_t get_offset_of__nativeFramePtr_10() { return static_cast<int32_t>(offsetof(AndroidBridge_t3043076716, ____nativeFramePtr_10)); }
	inline IntPtr_t get__nativeFramePtr_10() const { return ____nativeFramePtr_10; }
	inline IntPtr_t* get_address_of__nativeFramePtr_10() { return &____nativeFramePtr_10; }
	inline void set__nativeFramePtr_10(IntPtr_t value)
	{
		____nativeFramePtr_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
