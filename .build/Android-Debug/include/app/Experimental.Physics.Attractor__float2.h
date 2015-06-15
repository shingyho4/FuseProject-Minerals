// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_ATTRACTOR__FLOAT2_H__
#define __APP_EXPERIMENTAL_PHYSICS_ATTRACTOR__FLOAT2_H__

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

struct Attractor__float2;

struct Attractor__float2__uType : ::uClassType
{
    ::app::Experimental::Physics::DestinationSimulation__float2 __interface_0;
    ::app::Experimental::Physics::MotionSimulation__float2 __interface_1;
    ::app::Experimental::Physics::Simulation __interface_2;
};

Attractor__float2__uType* Attractor__float2__typeof();

bool Attractor__float2__get_IsLocked(Attractor__float2* __this);
void Attractor__float2__set_IsLocked(Attractor__float2* __this, bool value);
::app::Uno::Float2 Attractor__float2__get_Position(Attractor__float2* __this);
void Attractor__float2__set_Position(Attractor__float2* __this, ::app::Uno::Float2 value);
::app::Uno::Float2 Attractor__float2__get_Velocity(Attractor__float2* __this);
void Attractor__float2__set_Velocity(Attractor__float2* __this, ::app::Uno::Float2 value);
::app::Uno::Float2 Attractor__float2__get_Destination(Attractor__float2* __this);
void Attractor__float2__set_Destination(Attractor__float2* __this, ::app::Uno::Float2 value);
float Attractor__float2__get_AttractionForce(Attractor__float2* __this);
void Attractor__float2__set_AttractionForce(Attractor__float2* __this, float value);
float Attractor__float2__get_AttractionCurve(Attractor__float2* __this);
void Attractor__float2__set_AttractionCurve(Attractor__float2* __this, float value);
float Attractor__float2__get_Damping(Attractor__float2* __this);
void Attractor__float2__set_Damping(Attractor__float2* __this, float value);
float Attractor__float2__get_EnergyEps(Attractor__float2* __this);
void Attractor__float2__set_EnergyEps(Attractor__float2* __this, float value);
bool Attractor__float2__get_IsStatic(Attractor__float2* __this);
void Attractor__float2__set_IsStatic(Attractor__float2* __this, bool value);
::app::Uno::Float2 Attractor__float2__get_Attraction(Attractor__float2* __this);
float Attractor__float2__get_Energy(Attractor__float2* __this);
void Attractor__float2__Update(Attractor__float2* __this, double elapsed);
void Attractor__float2__Iterate(Attractor__float2* __this);
void Attractor__float2___ObjInit(Attractor__float2* __this, float scale);
Attractor__float2* Attractor__float2__New_1(::uStatic* __this, float scale);

struct Attractor__float2 : ::uObject
{
    ::uStrong< ::app::Fuse::Internal::Blender__float2*> _blender;
    float _scale;
    ::app::Uno::Float2 _velocity;
    ::app::Uno::Float2 _attractionDestination;
    float _attractionForce;
    float _attractionCurve;
    float _damping;
    float _energyEps;
    float _maxSpeed;
    bool _hasMaxSpeed;
    bool _isStatic;
    double timeStep;
    double _remainTime;
    bool _IsLocked;
    ::app::Uno::Float2 _Position;

    void Update(double elapsed) { Attractor__float2__Update(this, elapsed); }
    void Iterate() { Attractor__float2__Iterate(this); }
    void _ObjInit(float scale) { Attractor__float2___ObjInit(this, scale); }
    bool IsLocked() { return Attractor__float2__get_IsLocked(this); }
    void IsLocked(bool value) { Attractor__float2__set_IsLocked(this, value); }
    ::app::Uno::Float2 Position();
    void Position(::app::Uno::Float2 value);
    ::app::Uno::Float2 Velocity();
    void Velocity(::app::Uno::Float2 value);
    ::app::Uno::Float2 Destination();
    void Destination(::app::Uno::Float2 value);
    float AttractionForce() { return Attractor__float2__get_AttractionForce(this); }
    void AttractionForce(float value) { Attractor__float2__set_AttractionForce(this, value); }
    float AttractionCurve() { return Attractor__float2__get_AttractionCurve(this); }
    void AttractionCurve(float value) { Attractor__float2__set_AttractionCurve(this, value); }
    float Damping() { return Attractor__float2__get_Damping(this); }
    void Damping(float value) { Attractor__float2__set_Damping(this, value); }
    float EnergyEps() { return Attractor__float2__get_EnergyEps(this); }
    void EnergyEps(float value) { Attractor__float2__set_EnergyEps(this, value); }
    bool IsStatic() { return Attractor__float2__get_IsStatic(this); }
    void IsStatic(bool value) { Attractor__float2__set_IsStatic(this, value); }
    ::app::Uno::Float2 Attraction();
    float Energy() { return Attractor__float2__get_Energy(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Experimental {
namespace Physics {

inline ::app::Uno::Float2 Attractor__float2::Position() { return Attractor__float2__get_Position(this); }
inline void Attractor__float2::Position(::app::Uno::Float2 value) { Attractor__float2__set_Position(this, value); }
inline ::app::Uno::Float2 Attractor__float2::Velocity() { return Attractor__float2__get_Velocity(this); }
inline void Attractor__float2::Velocity(::app::Uno::Float2 value) { Attractor__float2__set_Velocity(this, value); }
inline ::app::Uno::Float2 Attractor__float2::Destination() { return Attractor__float2__get_Destination(this); }
inline void Attractor__float2::Destination(::app::Uno::Float2 value) { Attractor__float2__set_Destination(this, value); }
inline ::app::Uno::Float2 Attractor__float2::Attraction() { return Attractor__float2__get_Attraction(this); }

}}}


#endif
