#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Door
struct Door_t2136014;
// UnityEngine.Collider
struct Collider_t2939674232;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"

// System.Void Door::.ctor()
extern "C"  void Door__ctor_m103930509 (Door_t2136014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Door::Start()
extern "C"  void Door_Start_m3346035597 (Door_t2136014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Door::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Door_OnTriggerEnter_m575330315 (Door_t2136014 * __this, Collider_t2939674232 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Door::OnTriggerExit(UnityEngine.Collider)
extern "C"  void Door_OnTriggerExit_m4101996599 (Door_t2136014 * __this, Collider_t2939674232 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Door::DoorControl(System.Int32)
extern "C"  void Door_DoorControl_m2354317451 (Door_t2136014 * __this, int32_t ___direction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
