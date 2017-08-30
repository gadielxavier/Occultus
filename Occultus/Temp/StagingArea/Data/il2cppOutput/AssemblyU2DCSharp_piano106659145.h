#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;
// piano/ClickAction
struct ClickAction_t1355662840;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// piano
struct  piano_t106659145  : public MonoBehaviour_t667441552
{
public:
	// System.Int32[] piano::array
	Int32U5BU5D_t3230847821* ___array_2;
	// System.Int32[] piano::anotherArray
	Int32U5BU5D_t3230847821* ___anotherArray_3;
	// System.Int32 piano::count
	int32_t ___count_4;

public:
	inline static int32_t get_offset_of_array_2() { return static_cast<int32_t>(offsetof(piano_t106659145, ___array_2)); }
	inline Int32U5BU5D_t3230847821* get_array_2() const { return ___array_2; }
	inline Int32U5BU5D_t3230847821** get_address_of_array_2() { return &___array_2; }
	inline void set_array_2(Int32U5BU5D_t3230847821* value)
	{
		___array_2 = value;
		Il2CppCodeGenWriteBarrier(&___array_2, value);
	}

	inline static int32_t get_offset_of_anotherArray_3() { return static_cast<int32_t>(offsetof(piano_t106659145, ___anotherArray_3)); }
	inline Int32U5BU5D_t3230847821* get_anotherArray_3() const { return ___anotherArray_3; }
	inline Int32U5BU5D_t3230847821** get_address_of_anotherArray_3() { return &___anotherArray_3; }
	inline void set_anotherArray_3(Int32U5BU5D_t3230847821* value)
	{
		___anotherArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___anotherArray_3, value);
	}

	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(piano_t106659145, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}
};

struct piano_t106659145_StaticFields
{
public:
	// piano/ClickAction piano::OnClicked
	ClickAction_t1355662840 * ___OnClicked_5;

public:
	inline static int32_t get_offset_of_OnClicked_5() { return static_cast<int32_t>(offsetof(piano_t106659145_StaticFields, ___OnClicked_5)); }
	inline ClickAction_t1355662840 * get_OnClicked_5() const { return ___OnClicked_5; }
	inline ClickAction_t1355662840 ** get_address_of_OnClicked_5() { return &___OnClicked_5; }
	inline void set_OnClicked_5(ClickAction_t1355662840 * value)
	{
		___OnClicked_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnClicked_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
