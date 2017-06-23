#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GridRenderer
struct  GridRenderer_t1179619227  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material GridRenderer::_lineMaterial
	Material_t193706927 * ____lineMaterial_10;

public:
	inline static int32_t get_offset_of__lineMaterial_10() { return static_cast<int32_t>(offsetof(GridRenderer_t1179619227, ____lineMaterial_10)); }
	inline Material_t193706927 * get__lineMaterial_10() const { return ____lineMaterial_10; }
	inline Material_t193706927 ** get_address_of__lineMaterial_10() { return &____lineMaterial_10; }
	inline void set__lineMaterial_10(Material_t193706927 * value)
	{
		____lineMaterial_10 = value;
		Il2CppCodeGenWriteBarrier(&____lineMaterial_10, value);
	}
};

struct GridRenderer_t1179619227_StaticFields
{
public:
	// UnityEngine.Color GridRenderer::TargetColor
	Color_t2020392075  ___TargetColor_2;
	// UnityEngine.Color GridRenderer::GridColor
	Color_t2020392075  ___GridColor_3;
	// UnityEngine.Color GridRenderer::MainLineColor
	Color_t2020392075  ___MainLineColor_4;
	// UnityEngine.Color GridRenderer::UnitLineColor
	Color_t2020392075  ___UnitLineColor_5;

public:
	inline static int32_t get_offset_of_TargetColor_2() { return static_cast<int32_t>(offsetof(GridRenderer_t1179619227_StaticFields, ___TargetColor_2)); }
	inline Color_t2020392075  get_TargetColor_2() const { return ___TargetColor_2; }
	inline Color_t2020392075 * get_address_of_TargetColor_2() { return &___TargetColor_2; }
	inline void set_TargetColor_2(Color_t2020392075  value)
	{
		___TargetColor_2 = value;
	}

	inline static int32_t get_offset_of_GridColor_3() { return static_cast<int32_t>(offsetof(GridRenderer_t1179619227_StaticFields, ___GridColor_3)); }
	inline Color_t2020392075  get_GridColor_3() const { return ___GridColor_3; }
	inline Color_t2020392075 * get_address_of_GridColor_3() { return &___GridColor_3; }
	inline void set_GridColor_3(Color_t2020392075  value)
	{
		___GridColor_3 = value;
	}

	inline static int32_t get_offset_of_MainLineColor_4() { return static_cast<int32_t>(offsetof(GridRenderer_t1179619227_StaticFields, ___MainLineColor_4)); }
	inline Color_t2020392075  get_MainLineColor_4() const { return ___MainLineColor_4; }
	inline Color_t2020392075 * get_address_of_MainLineColor_4() { return &___MainLineColor_4; }
	inline void set_MainLineColor_4(Color_t2020392075  value)
	{
		___MainLineColor_4 = value;
	}

	inline static int32_t get_offset_of_UnitLineColor_5() { return static_cast<int32_t>(offsetof(GridRenderer_t1179619227_StaticFields, ___UnitLineColor_5)); }
	inline Color_t2020392075  get_UnitLineColor_5() const { return ___UnitLineColor_5; }
	inline Color_t2020392075 * get_address_of_UnitLineColor_5() { return &___UnitLineColor_5; }
	inline void set_UnitLineColor_5(Color_t2020392075  value)
	{
		___UnitLineColor_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
