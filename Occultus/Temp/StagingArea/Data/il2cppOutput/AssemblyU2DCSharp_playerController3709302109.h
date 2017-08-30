#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// playerController
struct  playerController_t3709302109  : public MonoBehaviour_t667441552
{
public:
	// System.Single playerController::speed
	float ___speed_2;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(playerController_t3709302109, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
