// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_MOTION_SIMULATION__FLOAT_H__
#define __APP_EXPERIMENTAL_PHYSICS_MOTION_SIMULATION__FLOAT_H__

#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Experimental {
namespace Physics {

::uInterfaceType* MotionSimulation__float__typeof();

struct MotionSimulation__float
{
    float(*__fp_get_Position)(void*);
    void(*__fp_set_Position)(void*, float);
    float(*__fp_get_Velocity)(void*);
    void(*__fp_set_Velocity)(void*, float);

    static float Position(::uObject* __this) { return ((MotionSimulation__float*)uGetInterfacePtr(__this, MotionSimulation__float__typeof()))->__fp_get_Position((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void Position(::uObject* __this, float value) { ((MotionSimulation__float*)uGetInterfacePtr(__this, MotionSimulation__float__typeof()))->__fp_set_Position((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
    static float Velocity(::uObject* __this) { return ((MotionSimulation__float*)uGetInterfacePtr(__this, MotionSimulation__float__typeof()))->__fp_get_Velocity((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0)); }
    static void Velocity(::uObject* __this, float value) { ((MotionSimulation__float*)uGetInterfacePtr(__this, MotionSimulation__float__typeof()))->__fp_set_Velocity((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), value); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Experimental {
namespace Physics {

}}}


#endif
