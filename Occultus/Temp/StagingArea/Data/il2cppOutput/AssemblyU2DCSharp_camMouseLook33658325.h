#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// camMouseLook
struct  camMouseLook_t33658325  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector2 camMouseLook::mouseLook
	Vector2_t4282066565  ___mouseLook_2;
	// UnityEngine.Vector2 camMouseLook::smoothV
	Vector2_t4282066565  ___smoothV_3;
	// System.Single camMouseLook::sensivity
	float ___sensivity_4;
	// System.Single camMouseLook::smoothing
	float ___smoothing_5;
	// UnityEngine.GameObject camMouseLook::character
	GameObject_t3674682005 * ___character_6;

public:
	inline static int32_t get_offset_of_mouseLook_2() { return static_cast<int32_t>(offsetof(camMouseLook_t33658325, ___mouseLook_2)); }
	inline Vector2_t4282066565  get_mouseLook_2() const { return ___mouseLook_2; }
	inline Vector2_t4282066565 * get_address_of_mouseLook_2() { return &___mouseLook_2; }
	inline void set_mouseLook_2(Vector2_t4282066565  value)
	{
		___mouseLook_2 = value;
	}

	inline static int32_t get_offset_of_smoothV_3() { return static_cast<int32_t>(offsetof(camMouseLook_t33658325, ___smoothV_3)); }
	inline Vector2_t4282066565  get_smoothV_3() const { return ___smoothV_3; }
	inline Vector2_t4282066565 * get_address_of_smoothV_3() { return &___smoothV_3; }
	inline void set_smoothV_3(Vector2_t4282066565  value)
	{
		___smoothV_3 = value;
	}

	inline static int32_t get_offset_of_sensivity_4() { return static_cast<int32_t>(offsetof(camMouseLook_t33658325, ___sensivity_4)); }
	inline float get_sensivity_4() const { return ___sensivity_4; }
	inline float* get_address_of_sensivity_4() { return &___sensivity_4; }
	inline void set_sensivity_4(float value)
	{
		___sensivity_4 = value;
	}

	inline static int32_t get_offset_of_smoothing_5() { return static_cast<int32_t>(offsetof(camMouseLook_t33658325, ___smoothing_5)); }
	inline float get_smoothing_5() const { return ___smoothing_5; }
	inline float* get_address_of_smoothing_5() { return &___smoothing_5; }
	inline void set_smoothing_5(float value)
	{
		___smoothing_5 = value;
	}

	inline static int32_t get_offset_of_character_6() { return static_cast<int32_t>(offsetof(camMouseLook_t33658325, ___character_6)); }
	inline GameObject_t3674682005 * get_character_6() const { return ___character_6; }
	inline GameObject_t3674682005 ** get_address_of_character_6() { return &___character_6; }
	inline void set_character_6(GameObject_t3674682005 * value)
	{
		___character_6 = value;
		Il2CppCodeGenWriteBarrier(&___character_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
