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
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Drawer
struct  Drawer_t2055070993  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Animator Drawer::animator
	Animator_t2776330603 * ___animator_2;
	// System.Int32 Drawer::drawerTrigger
	int32_t ___drawerTrigger_3;
	// UnityEngine.AudioSource Drawer::audio
	AudioSource_t1740077639 * ___audio_4;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(Drawer_t2055070993, ___animator_2)); }
	inline Animator_t2776330603 * get_animator_2() const { return ___animator_2; }
	inline Animator_t2776330603 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t2776330603 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_drawerTrigger_3() { return static_cast<int32_t>(offsetof(Drawer_t2055070993, ___drawerTrigger_3)); }
	inline int32_t get_drawerTrigger_3() const { return ___drawerTrigger_3; }
	inline int32_t* get_address_of_drawerTrigger_3() { return &___drawerTrigger_3; }
	inline void set_drawerTrigger_3(int32_t value)
	{
		___drawerTrigger_3 = value;
	}

	inline static int32_t get_offset_of_audio_4() { return static_cast<int32_t>(offsetof(Drawer_t2055070993, ___audio_4)); }
	inline AudioSource_t1740077639 * get_audio_4() const { return ___audio_4; }
	inline AudioSource_t1740077639 ** get_address_of_audio_4() { return &___audio_4; }
	inline void set_audio_4(AudioSource_t1740077639 * value)
	{
		___audio_4 = value;
		Il2CppCodeGenWriteBarrier(&___audio_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
