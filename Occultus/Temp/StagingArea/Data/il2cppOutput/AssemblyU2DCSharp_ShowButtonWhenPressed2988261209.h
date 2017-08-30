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

// ShowButtonWhenPressed
struct  ShowButtonWhenPressed_t2988261209  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform ShowButtonWhenPressed::model
	Transform_t1659122786 * ___model_2;

public:
	inline static int32_t get_offset_of_model_2() { return static_cast<int32_t>(offsetof(ShowButtonWhenPressed_t2988261209, ___model_2)); }
	inline Transform_t1659122786 * get_model_2() const { return ___model_2; }
	inline Transform_t1659122786 ** get_address_of_model_2() { return &___model_2; }
	inline void set_model_2(Transform_t1659122786 * value)
	{
		___model_2 = value;
		Il2CppCodeGenWriteBarrier(&___model_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
