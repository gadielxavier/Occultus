#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighLightObejectWhenCollided
struct  HighLightObejectWhenCollided_t9768490  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform HighLightObejectWhenCollided::model
	Transform_t1659122786 * ___model_2;
	// UnityEngine.Transform HighLightObejectWhenCollided::canvas
	Transform_t1659122786 * ___canvas_3;
	// System.Boolean HighLightObejectWhenCollided::collision
	bool ___collision_4;

public:
	inline static int32_t get_offset_of_model_2() { return static_cast<int32_t>(offsetof(HighLightObejectWhenCollided_t9768490, ___model_2)); }
	inline Transform_t1659122786 * get_model_2() const { return ___model_2; }
	inline Transform_t1659122786 ** get_address_of_model_2() { return &___model_2; }
	inline void set_model_2(Transform_t1659122786 * value)
	{
		___model_2 = value;
		Il2CppCodeGenWriteBarrier(&___model_2, value);
	}

	inline static int32_t get_offset_of_canvas_3() { return static_cast<int32_t>(offsetof(HighLightObejectWhenCollided_t9768490, ___canvas_3)); }
	inline Transform_t1659122786 * get_canvas_3() const { return ___canvas_3; }
	inline Transform_t1659122786 ** get_address_of_canvas_3() { return &___canvas_3; }
	inline void set_canvas_3(Transform_t1659122786 * value)
	{
		___canvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_3, value);
	}

	inline static int32_t get_offset_of_collision_4() { return static_cast<int32_t>(offsetof(HighLightObejectWhenCollided_t9768490, ___collision_4)); }
	inline bool get_collision_4() const { return ___collision_4; }
	inline bool* get_address_of_collision_4() { return &___collision_4; }
	inline void set_collision_4(bool value)
	{
		___collision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
