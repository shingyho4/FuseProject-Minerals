// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_SMOOTH_SNAP__FLOAT_H__
#define __APP_EXPERIMENTAL_PHYSICS_SMOOTH_SNAP__FLOAT_H__

#include <app/Experimental.Physics.DestinationSimulation__float.h>
#include <app/Experimental.Physics.MotionSimulation__float.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__float; } } }

namespace app {
namespace Experimental {
namespace Physics {

struct SmoothSnap__float;

struct SmoothSnap__float__uType : ::uClassType
{
    ::app::Experimental::Physics::DestinationSimulation__float __interface_0;
    ::app::Experimental::Physics::MotionSimulation__float __interface_1;
    ::app::Experimental::Physics::Simulation __interface_2;
};

SmoothSnap__float__uType* SmoothSnap__float__typeof();

float SmoothSnap__float__get_Position(SmoothSnap__float* __this);
void SmoothSnap__float__set_Position(SmoothSnap__float* __this, float value);
float SmoothSnap__float__get_Velocity(SmoothSnap__float* __this);
void SmoothSnap__float__set_Velocity(SmoothSnap__float* __this, float value);
float SmoothSnap__float__get_Destination(SmoothSnap__float* __this);
void SmoothSnap__float__set_Destination(SmoothSnap__float* __this, float value);
float SmoothSnap__float__get_Speed(SmoothSnap__float* __this);
void SmoothSnap__float__set_Speed(SmoothSnap__float* __this, float value);
bool SmoothSnap__float__get_IsStatic(SmoothSnap__float* __this);
SmoothSnap__float* SmoothSnap__float__CreateNormalized(::uStatic* __this);
void SmoothSnap__float__Update(SmoothSnap__float* __this, double elapsed);
void SmoothSnap__float___ObjInit(SmoothSnap__float* __this, float scale);
SmoothSnap__float* SmoothSnap__float__New_1(::uStatic* __this, float scale);

struct SmoothSnap__float : ::uObject
{
    ::uStrong< ::app::Fuse::Internal::Blender__float*> _blender;
    float _scale;
    float _speedMin;
    float _speedDropoutDistance;
    float _speed;
    float _Position;
    float _Velocity;
    float _Destination;

    void Update(double elapsed) { SmoothSnap__float__Update(this, elapsed); }
    void _ObjInit(float scale) { SmoothSnap__float___ObjInit(this, scale); }
    float Position() { return SmoothSnap__float__get_Position(this); }
    void Position(float value) { SmoothSnap__float__set_Position(this, value); }
    float Velocity() { return SmoothSnap__float__get_Velocity(this); }
    void Velocity(float value) { SmoothSnap__float__set_Velocity(this, value); }
    float Destination() { return SmoothSnap__float__get_Destination(this); }
    void Destination(float value) { SmoothSnap__float__set_Destination(this, value); }
    float Speed() { return SmoothSnap__float__get_Speed(this); }
    void Speed(float value) { SmoothSnap__float__set_Speed(this, value); }
    bool IsStatic() { return SmoothSnap__float__get_IsStatic(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Experimental {
namespace Physics {

}}}


#endif
