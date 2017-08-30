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
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// safeBox
struct  safeBox_t1858010878  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Animator safeBox::animator
	Animator_t2776330603 * ___animator_2;
	// System.Int32 safeBox::Open
	int32_t ___Open_3;
	// UnityEngine.Transform safeBox::book
	Transform_t1659122786 * ___book_4;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(safeBox_t1858010878, ___animator_2)); }
	inline Animator_t2776330603 * get_animator_2() const { return ___animator_2; }
	inline Animator_t2776330603 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t2776330603 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_Open_3() { return static_cast<int32_t>(offsetof(safeBox_t1858010878, ___Open_3)); }
	inline int32_t get_Open_3() const { return ___Open_3; }
	inline int32_t* get_address_of_Open_3() { return &___Open_3; }
	inline void set_Open_3(int32_t value)
	{
		___Open_3 = value;
	}

	inline static int32_t get_offset_of_book_4() { return static_cast<int32_t>(offsetof(safeBox_t1858010878, ___book_4)); }
	inline Transform_t1659122786 * get_book_4() const { return ___book_4; }
	inline Transform_t1659122786 ** get_address_of_book_4() { return &___book_4; }
	inline void set_book_4(Transform_t1659122786 * value)
	{
		___book_4 = value;
		Il2CppCodeGenWriteBarrier(&___book_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
