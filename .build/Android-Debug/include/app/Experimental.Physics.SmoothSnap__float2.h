// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_SMOOTH_SNAP__FLOAT2_H__
#define __APP_EXPERIMENTAL_PHYSICS_SMOOTH_SNAP__FLOAT2_H__

#include <app/Experimental.Physics.DestinationSimulation__float2.h>
#include <app/Experimental.Physics.MotionSimulation__float2.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__float2; } } }

namespace app {
namespace Experimental {
namespace Physics {

struct SmoothSnap__float2;

struct SmoothSnap__float2__uType : ::uClassType
{
    ::app::Experimental::Physics::DestinationSimulation__float2 __interface_0;
    ::app::Experimental::Physics::MotionSimulation__float2 __interface_1;
    ::app::Experimental::Physics::Simulation __interface_2;
};

SmoothSnap__float2__uType* SmoothSnap__float2__typeof();

::app::Uno::Float2 SmoothSnap__float2__get_Position(SmoothSnap__float2* __this);
void SmoothSnap__float2__set_Position(SmoothSnap__float2* __this, ::app::Uno::Float2 value);
::app::Uno::Float2 SmoothSnap__float2__get_Velocity(SmoothSnap__float2* __this);
void SmoothSnap__float2__set_Velocity(SmoothSnap__float2* __this, ::app::Uno::Float2 value);
::app::Uno::Float2 SmoothSnap__float2__get_Destination(SmoothSnap__float2* __this);
void SmoothSnap__float2__set_Destination(SmoothSnap__float2* __this, ::app::Uno::Float2 value);
float SmoothSnap__float2__get_Speed(SmoothSnap__float2* __this);
void SmoothSnap__float2__set_Speed(SmoothSnap__float2* __this, float value);
bool SmoothSnap__float2__get_IsStatic(SmoothSnap__float2* __this);
void SmoothSnap__float2__Update(SmoothSnap__float2* __this, double elapsed);
void SmoothSnap__float2___ObjInit(SmoothSnap__float2* __this, float scale);
SmoothSnap__float2* SmoothSnap__float2__New_1(::uStatic* __this, float scale);

struct SmoothSnap__float2 : ::uObject
{
    ::uStrong< ::app::Fuse::Internal::Blender__float2*> _blender;
    float _scale;
    float _speedMin;
    float _speedDropoutDistance;
    float _speed;
    ::app::Uno::Float2 _Position;
    ::app::Uno::Float2 _Velocity;
    ::app::Uno::Float2 _Destination;

    void Update(double elapsed) { SmoothSnap__float2__Update(this, elapsed); }
    void _ObjInit(float scale) { SmoothSnap__float2___ObjInit(this, scale); }
    ::app::Uno::Float2 Position();
    void Position(::app::Uno::Float2 value);
    ::app::Uno::Float2 Velocity();
    void Velocity(::app::Uno::Float2 value);
    ::app::Uno::Float2 Destination();
    void Destination(::app::Uno::Float2 value);
    float Speed() { return SmoothSnap__float2__get_Speed(this); }
    void Speed(float value) { SmoothSnap__float2__set_Speed(this, value); }
    bool IsStatic() { return SmoothSnap__float2__get_IsStatic(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Experimental {
namespace Physics {

inline ::app::Uno::Float2 SmoothSnap__float2::Position() { return SmoothSnap__float2__get_Position(this); }
inline void SmoothSnap__float2::Position(::app::Uno::Float2 value) { SmoothSnap__float2__set_Position(this, value); }
inline ::app::Uno::Float2 SmoothSnap__float2::Velocity() { return SmoothSnap__float2__get_Velocity(this); }
inline void SmoothSnap__float2::Velocity(::app::Uno::Float2 value) { SmoothSnap__float2__set_Velocity(this, value); }
inline ::app::Uno::Float2 SmoothSnap__float2::Destination() { return SmoothSnap__float2__get_Destination(this); }
inline void SmoothSnap__float2::Destination(::app::Uno::Float2 value) { SmoothSnap__float2__set_Destination(this, value); }

}}}


#endif
