// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_BASIC_BOUNDED_REGION2_D_H__
#define __APP_EXPERIMENTAL_PHYSICS_BASIC_BOUNDED_REGION2_D_H__

#include <app/Experimental.Physics.BoundedRegion2D.h>
#include <app/Experimental.Physics.MotionSimulation__float2.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Experimental { namespace Physics { struct Friction__float2; } } }

namespace app {
namespace Experimental {
namespace Physics {

struct BasicBoundedRegion2D;

struct BasicBoundedRegion2D__uType : ::uClassType
{
    ::app::Experimental::Physics::BoundedRegion2D __interface_0;
    ::app::Experimental::Physics::MotionSimulation__float2 __interface_1;
    ::app::Experimental::Physics::Simulation __interface_2;
};

BasicBoundedRegion2D__uType* BasicBoundedRegion2D__typeof();

::app::Uno::Float2 BasicBoundedRegion2D__get_MaxPosition(BasicBoundedRegion2D* __this);
void BasicBoundedRegion2D__set_MaxPosition(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value);
::app::Uno::Float2 BasicBoundedRegion2D__get_MinPosition(BasicBoundedRegion2D* __this);
void BasicBoundedRegion2D__set_MinPosition(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value);
bool BasicBoundedRegion2D__get_IsUser(BasicBoundedRegion2D* __this);
::app::Uno::Float2 BasicBoundedRegion2D__get_Position(BasicBoundedRegion2D* __this);
void BasicBoundedRegion2D__set_Position(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value);
bool BasicBoundedRegion2D__get_IsStatic(BasicBoundedRegion2D* __this);
::app::Uno::Float2 BasicBoundedRegion2D__get_Velocity(BasicBoundedRegion2D* __this);
void BasicBoundedRegion2D__set_Velocity(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value);
BasicBoundedRegion2D* BasicBoundedRegion2D__CreatePixelFlat(::uStatic* __this);
void BasicBoundedRegion2D__StartUser(BasicBoundedRegion2D* __this);
void BasicBoundedRegion2D__StepUser(BasicBoundedRegion2D* __this, ::app::Uno::Float2 offset);
void BasicBoundedRegion2D__EndUser(BasicBoundedRegion2D* __this, ::app::Uno::Float2 velocity);
void BasicBoundedRegion2D__MoveTo(BasicBoundedRegion2D* __this, ::app::Uno::Float2 target);
void BasicBoundedRegion2D__Update(BasicBoundedRegion2D* __this, double elapsed);
void BasicBoundedRegion2D__MoveFriction(BasicBoundedRegion2D* __this, double elapsed);
::app::Uno::Float2 BasicBoundedRegion2D__SnapValue(BasicBoundedRegion2D* __this, ::app::Uno::Float2 p, ::app::Uno::Float2 v);
bool BasicBoundedRegion2D__MoveSnap(BasicBoundedRegion2D* __this, double elapsed, bool X, bool Y);
void BasicBoundedRegion2D__MoveDestination(BasicBoundedRegion2D* __this, double elapsed);
::app::Uno::Float2 BasicBoundedRegion2D__CalcOver(BasicBoundedRegion2D* __this, ::app::Uno::Float2 sp);
void BasicBoundedRegion2D___ObjInit(BasicBoundedRegion2D* __this);
BasicBoundedRegion2D* BasicBoundedRegion2D__New_1(::uStatic* __this);

struct BasicBoundedRegion2D : ::uObject
{
    int _moveMode;
    ::uStrong< ::uObject*> _destination;
    ::app::Uno::Float2 _velocity;
    ::uStrong< ::app::Experimental::Physics::Friction__float2*> _friction;
    ::uStrong< ::uObject*> _snap;
    ::app::Uno::Float2 _MaxPosition;
    ::app::Uno::Float2 _MinPosition;
    ::app::Uno::Float2 _Position;

    void StartUser() { BasicBoundedRegion2D__StartUser(this); }
    void StepUser(::app::Uno::Float2 offset);
    void EndUser(::app::Uno::Float2 velocity);
    void MoveTo(::app::Uno::Float2 target);
    void Update(double elapsed) { BasicBoundedRegion2D__Update(this, elapsed); }
    void MoveFriction(double elapsed) { BasicBoundedRegion2D__MoveFriction(this, elapsed); }
    ::app::Uno::Float2 SnapValue(::app::Uno::Float2 p, ::app::Uno::Float2 v);
    bool MoveSnap(double elapsed, bool X, bool Y) { return BasicBoundedRegion2D__MoveSnap(this, elapsed, X, Y); }
    void MoveDestination(double elapsed) { BasicBoundedRegion2D__MoveDestination(this, elapsed); }
    ::app::Uno::Float2 CalcOver(::app::Uno::Float2 sp);
    void _ObjInit() { BasicBoundedRegion2D___ObjInit(this); }
    ::app::Uno::Float2 MaxPosition();
    void MaxPosition(::app::Uno::Float2 value);
    ::app::Uno::Float2 MinPosition();
    void MinPosition(::app::Uno::Float2 value);
    bool IsUser() { return BasicBoundedRegion2D__get_IsUser(this); }
    ::app::Uno::Float2 Position();
    void Position(::app::Uno::Float2 value);
    bool IsStatic() { return BasicBoundedRegion2D__get_IsStatic(this); }
    ::app::Uno::Float2 Velocity();
    void Velocity(::app::Uno::Float2 value);
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>

namespace app {
namespace Experimental {
namespace Physics {

inline void BasicBoundedRegion2D::StepUser(::app::Uno::Float2 offset) { BasicBoundedRegion2D__StepUser(this, offset); }
inline void BasicBoundedRegion2D::EndUser(::app::Uno::Float2 velocity) { BasicBoundedRegion2D__EndUser(this, velocity); }
inline void BasicBoundedRegion2D::MoveTo(::app::Uno::Float2 target) { BasicBoundedRegion2D__MoveTo(this, target); }
inline ::app::Uno::Float2 BasicBoundedRegion2D::SnapValue(::app::Uno::Float2 p, ::app::Uno::Float2 v) { return BasicBoundedRegion2D__SnapValue(this, p, v); }
inline ::app::Uno::Float2 BasicBoundedRegion2D::CalcOver(::app::Uno::Float2 sp) { return BasicBoundedRegion2D__CalcOver(this, sp); }
inline ::app::Uno::Float2 BasicBoundedRegion2D::MaxPosition() { return BasicBoundedRegion2D__get_MaxPosition(this); }
inline void BasicBoundedRegion2D::MaxPosition(::app::Uno::Float2 value) { BasicBoundedRegion2D__set_MaxPosition(this, value); }
inline ::app::Uno::Float2 BasicBoundedRegion2D::MinPosition() { return BasicBoundedRegion2D__get_MinPosition(this); }
inline void BasicBoundedRegion2D::MinPosition(::app::Uno::Float2 value) { BasicBoundedRegion2D__set_MinPosition(this, value); }
inline ::app::Uno::Float2 BasicBoundedRegion2D::Position() { return BasicBoundedRegion2D__get_Position(this); }
inline void BasicBoundedRegion2D::Position(::app::Uno::Float2 value) { BasicBoundedRegion2D__set_Position(this, value); }
inline ::app::Uno::Float2 BasicBoundedRegion2D::Velocity() { return BasicBoundedRegion2D__get_Velocity(this); }
inline void BasicBoundedRegion2D::Velocity(::app::Uno::Float2 value) { BasicBoundedRegion2D__set_Velocity(this, value); }

}}}


#endif
