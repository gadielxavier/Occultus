#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Door
struct  Door_t2136014  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Animator Door::animator
	Animator_t2776330603 * ___animator_2;
	// System.Boolean Door::doorOpen
	bool ___doorOpen_3;
	// System.Int32 Door::Open
	int32_t ___Open_4;
	// System.Int32 Door::Close
	int32_t ___Close_5;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(Door_t2136014, ___animator_2)); }
	inline Animator_t2776330603 * get_animator_2() const { return ___animator_2; }
	inline Animator_t2776330603 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t2776330603 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_doorOpen_3() { return static_cast<int32_t>(offsetof(Door_t2136014, ___doorOpen_3)); }
	inline bool get_doorOpen_3() const { return ___doorOpen_3; }
	inline bool* get_address_of_doorOpen_3() { return &___doorOpen_3; }
	inline void set_doorOpen_3(bool value)
	{
		___doorOpen_3 = value;
	}

	inline static int32_t get_offset_of_Open_4() { return static_cast<int32_t>(offsetof(Door_t2136014, ___Open_4)); }
	inline int32_t get_Open_4() const { return ___Open_4; }
	inline int32_t* get_address_of_Open_4() { return &___Open_4; }
	inline void set_Open_4(int32_t value)
	{
		___Open_4 = value;
	}

	inline static int32_t get_offset_of_Close_5() { return static_cast<int32_t>(offsetof(Door_t2136014, ___Close_5)); }
	inline int32_t get_Close_5() const { return ___Close_5; }
	inline int32_t* get_address_of_Close_5() { return &___Close_5; }
	inline void set_Close_5(int32_t value)
	{
		___Close_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
