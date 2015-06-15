// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_FRICTION__FLOAT2_H__
#define __APP_EXPERIMENTAL_PHYSICS_FRICTION__FLOAT2_H__

#include <app/Experimental.Physics.MotionSimulation__float2.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__float2; } } }

namespace app {
namespace Experimental {
namespace Physics {

struct Friction__float2;

struct Friction__float2__uType : ::uClassType
{
    ::app::Experimental::Physics::MotionSimulation__float2 __interface_0;
    ::app::Experimental::Physics::Simulation __interface_1;
};

Friction__float2__uType* Friction__float2__typeof();

float Friction__float2__get_SpeedDropout(Friction__float2* __this);
void Friction__float2__set_SpeedDropout(Friction__float2* __this, float value);
float Friction__float2__get_KineticDeceleration(Friction__float2* __this);
void Friction__float2__set_KineticDeceleration(Friction__float2* __this, float value);
float Friction__float2__get_LowFluidDeceleration(Friction__float2* __this);
void Friction__float2__set_LowFluidDeceleration(Friction__float2* __this, float value);
float Friction__float2__get_HighFluidDeceleration(Friction__float2* __this);
void Friction__float2__set_HighFluidDeceleration(Friction__float2* __this, float value);
::app::Uno::Float2 Friction__float2__get_Velocity(Friction__float2* __this);
void Friction__float2__set_Velocity(Friction__float2* __this, ::app::Uno::Float2 value);
::app::Uno::Float2 Friction__float2__get_Position(Friction__float2* __this);
void Friction__float2__set_Position(Friction__float2* __this, ::app::Uno::Float2 value);
bool Friction__float2__get_IsStatic(Friction__float2* __this);
Friction__float2* Friction__float2__CreatePixelFlat(::uStatic* __this);
void Friction__float2__Update(Friction__float2* __this, double elapsed);
void Friction__float2___ObjInit(Friction__float2* __this);
Friction__float2* Friction__float2__New_1(::uStatic* __this);

struct Friction__float2 : ::uObject
{
    ::uStrong< ::app::Fuse::Internal::Blender__float2*> _blender;
    float _speedDropout;
    float _kineticDeceleration;
    float _lowFluidDeceleration;
    float _highFluidDeceleration;
    ::app::Uno::Float2 _velocity;
    ::app::Uno::Float2 _position;
    bool _isStatic;

    void Update(double elapsed) { Friction__float2__Update(this, elapsed); }
    void _ObjInit() { Friction__float2___ObjInit(this); }
    float SpeedDropout() { return Friction__float2__get_SpeedDropout(this); }
    void SpeedDropout(float value) { Friction__float2__set_SpeedDropout(this, value); }
    float KineticDeceleration() { return Friction__float2__get_KineticDeceleration(this); }
    void KineticDeceleration(float value) { Friction__float2__set_KineticDeceleration(this, value); }
    float LowFluidDeceleration() { return Friction__float2__get_LowFluidDeceleration(this); }
    void LowFluidDeceleration(float value) { Friction__float2__set_LowFluidDeceleration(this, value); }
    float HighFluidDeceleration() { return Friction__float2__get_HighFluidDeceleration(this); }
    void HighFluidDeceleration(float value) { Friction__float2__set_HighFluidDeceleration(this, value); }
    ::app::Uno::Float2 Velocity();
    void Velocity(::app::Uno::Float2 value);
    ::app::Uno::Float2 Position();
    void Position(::app::Uno::Float2 value);
    bool IsStatic() { return Friction__float2__get_IsStatic(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Experimental {
namespace Physics {

inline ::app::Uno::Float2 Friction__float2::Velocity() { return Friction__float2__get_Velocity(this); }
inline void Friction__float2::Velocity(::app::Uno::Float2 value) { Friction__float2__set_Velocity(this, value); }
inline ::app::Uno::Float2 Friction__float2::Position() { return Friction__float2__get_Position(this); }
inline void Friction__float2::Position(::app::Uno::Float2 value) { Friction__float2__set_Position(this, value); }

}}}


#endif
