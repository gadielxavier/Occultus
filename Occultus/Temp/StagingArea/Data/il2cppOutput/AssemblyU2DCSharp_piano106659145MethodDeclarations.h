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

// piano
struct piano_t106659145;
// piano/ClickAction
struct ClickAction_t1355662840;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_piano_ClickAction1355662840.h"

// System.Void piano::.ctor()
extern "C"  void piano__ctor_m2636656194 (piano_t106659145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void piano::add_OnClicked(piano/ClickAction)
extern "C"  void piano_add_OnClicked_m2019997296 (Il2CppObject * __this /* static, unused */, ClickAction_t1355662840 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void piano::remove_OnClicked(piano/ClickAction)
extern "C"  void piano_remove_OnClicked_m969412875 (Il2CppObject * __this /* static, unused */, ClickAction_t1355662840 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void piano::Start()
extern "C"  void piano_Start_m1583793986 (piano_t106659145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void piano::setPianoArray(System.Int32)
extern "C"  void piano_setPianoArray_m2240318179 (piano_t106659145 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean piano::validatePianoArray()
extern "C"  bool piano_validatePianoArray_m3801438324 (piano_t106659145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void piano::openSecretDoor()
extern "C"  void piano_openSecretDoor_m3798118346 (piano_t106659145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
