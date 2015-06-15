// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_SIMULATION_H__
#define __APP_EXPERIMENTAL_PHYSICS_SIMULATION_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Experimental {
namespace Physics {

::uInterfaceType* Simulation__typeof();

struct Simulation
{
    bool(*__fp_get_IsStatic)(void*);
    void(*__fp_Update)(void*, double);

    static bool IsStatic(::uObject* __this) { return ((Simulation*)uGetInterfacePtr(__this, Simulation__typeof()))->__fp_get_IsStatic((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void Update(::uObject* __this, double elapsed) { ((Simulation*)uGetInterfacePtr(__this, Simulation__typeof()))->__fp_Update((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), elapsed); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>

namespace app {
namespace Experimental {
namespace Physics {

}}}


#endif
