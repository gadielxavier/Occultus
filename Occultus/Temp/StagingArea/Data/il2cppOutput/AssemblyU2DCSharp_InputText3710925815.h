#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// InputText/ClickAction
struct ClickAction_t3850629030;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputText
struct  InputText_t3710925815  : public MonoBehaviour_t667441552
{
public:

public:
};

struct InputText_t3710925815_StaticFields
{
public:
	// InputText/ClickAction InputText::safeBoxEvent
	ClickAction_t3850629030 * ___safeBoxEvent_2;

public:
	inline static int32_t get_offset_of_safeBoxEvent_2() { return static_cast<int32_t>(offsetof(InputText_t3710925815_StaticFields, ___safeBoxEvent_2)); }
	inline ClickAction_t3850629030 * get_safeBoxEvent_2() const { return ___safeBoxEvent_2; }
	inline ClickAction_t3850629030 ** get_address_of_safeBoxEvent_2() { return &___safeBoxEvent_2; }
	inline void set_safeBoxEvent_2(ClickAction_t3850629030 * value)
	{
		___safeBoxEvent_2 = value;
		Il2CppCodeGenWriteBarrier(&___safeBoxEvent_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
