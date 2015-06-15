// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Physics.Attractor__float2.h>
#include <app/Experimental.Physics.BasicBoundedRegion2D.h>
#include <app/Experimental.Physics.DestinationSimulation__float2.h>
#include <app/Experimental.Physics.Friction__float2.h>
#include <app/Experimental.Physics.SmoothSnap__float2.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Experimental {
namespace Physics {

BasicBoundedRegion2D__uType* BasicBoundedRegion2D__typeof()
{
    static BasicBoundedRegion2D__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BasicBoundedRegion2D__uType*)::uAllocClassType(sizeof(BasicBoundedRegion2D__uType), "Experimental.Physics.BasicBoundedRegion2D", ::uObject__typeof(), 3, 3);
        type->__interface_0.__fp_StartUser = (void(*)(void*))BasicBoundedRegion2D__StartUser;
        type->__interface_0.__fp_StepUser = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__StepUser;
        type->__interface_0.__fp_EndUser = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__EndUser;
        type->__interface_0.__fp_MoveTo = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__MoveTo;
        type->__interface_0.__fp_get_MaxPosition = (::app::Uno::Float2(*)(void*))BasicBoundedRegion2D__get_MaxPosition;
        type->__interface_0.__fp_set_MaxPosition = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__set_MaxPosition;
        type->__interface_0.__fp_get_MinPosition = (::app::Uno::Float2(*)(void*))BasicBoundedRegion2D__get_MinPosition;
        type->__interface_0.__fp_set_MinPosition = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__set_MinPosition;
        type->__interface_0.__fp_get_IsUser = (bool(*)(void*))BasicBoundedRegion2D__get_IsUser;
        type->__interface_1.__fp_get_Position = (::app::Uno::Float2(*)(void*))BasicBoundedRegion2D__get_Position;
        type->__interface_1.__fp_set_Position = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__set_Position;
        type->__interface_1.__fp_get_Velocity = (::app::Uno::Float2(*)(void*))BasicBoundedRegion2D__get_Velocity;
        type->__interface_1.__fp_set_Velocity = (void(*)(void*, ::app::Uno::Float2))BasicBoundedRegion2D__set_Velocity;
        type->__interface_2.__fp_Update = (void(*)(void*, double))BasicBoundedRegion2D__Update;
        type->__interface_2.__fp_get_IsStatic = (bool(*)(void*))BasicBoundedRegion2D__get_IsStatic;

        type->Implements[0] = ::app::Experimental::Physics::BoundedRegion2D__typeof();
        type->Implements[1] = ::app::Experimental::Physics::MotionSimulation__float2__typeof();
        type->Implements[2] = ::app::Experimental::Physics::Simulation__typeof();

        type->InterfaceOffsets[0] = offsetof(BasicBoundedRegion2D__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(BasicBoundedRegion2D__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(BasicBoundedRegion2D__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(BasicBoundedRegion2D, _destination);
        type->StrongRefOffsets[1] = offsetof(BasicBoundedRegion2D, _friction);
        type->StrongRefOffsets[2] = offsetof(BasicBoundedRegion2D, _snap);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_destination";
        type->StrongRefNames[1] = "_friction";
        type->StrongRefNames[2] = "_snap";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 BasicBoundedRegion2D__get_MaxPosition(BasicBoundedRegion2D* __this)
{
    return __this->_MaxPosition;
}

void BasicBoundedRegion2D__set_MaxPosition(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value)
{
    __this->_MaxPosition = value;
}

::app::Uno::Float2 BasicBoundedRegion2D__get_MinPosition(BasicBoundedRegion2D* __this)
{
    return __this->_MinPosition;
}

void BasicBoundedRegion2D__set_MinPosition(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value)
{
    __this->_MinPosition = value;
}

bool BasicBoundedRegion2D__get_IsUser(BasicBoundedRegion2D* __this)
{
    return __this->_moveMode == 1;
}

::app::Uno::Float2 BasicBoundedRegion2D__get_Position(BasicBoundedRegion2D* __this)
{
    return __this->_Position;
}

void BasicBoundedRegion2D__set_Position(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value)
{
    __this->_Position = value;
}

bool BasicBoundedRegion2D__get_IsStatic(BasicBoundedRegion2D* __this)
{
    return __this->_moveMode == 0;
}

::app::Uno::Float2 BasicBoundedRegion2D__get_Velocity(BasicBoundedRegion2D* __this)
{
    return __this->_velocity;
}

void BasicBoundedRegion2D__set_Velocity(BasicBoundedRegion2D* __this, ::app::Uno::Float2 value)
{
    __this->_velocity = value;

    if (__this->_moveMode == 0)
    {
        __this->_moveMode = 2;
    }
}

BasicBoundedRegion2D* BasicBoundedRegion2D__CreatePixelFlat(::uStatic* __this)
{
    BasicBoundedRegion2D* region = BasicBoundedRegion2D__New_1(NULL);
    ::app::Experimental::Physics::Attractor__float2* dest = ::app::Experimental::Physics::Attractor__float2__New_1(NULL, 0.1f);
    ::uPtr< ::app::Experimental::Physics::BasicBoundedRegion2D*>(region)->_destination = (::uObject*)dest;
    return region;
}

void BasicBoundedRegion2D__StartUser(BasicBoundedRegion2D* __this)
{
    __this->_moveMode = 1;
}

void BasicBoundedRegion2D__StepUser(BasicBoundedRegion2D* __this, ::app::Uno::Float2 offset)
{
    offset = __this->SnapValue(::app::Uno::Float2__op_Addition(NULL, offset, __this->Position()), offset);
    __this->Position(::app::Uno::Float2__op_Addition(NULL, __this->Position(), offset));
}

void BasicBoundedRegion2D__EndUser(BasicBoundedRegion2D* __this, ::app::Uno::Float2 velocity)
{
    __this->_velocity = velocity;
    __this->_moveMode = 2;
}

void BasicBoundedRegion2D__MoveTo(BasicBoundedRegion2D* __this, ::app::Uno::Float2 target)
{
    ::app::Experimental::Physics::DestinationSimulation__float2::Destination(::uPtr< ::uObject*>(__this->_destination), ::app::Uno::Math__Clamp_3(NULL, target, __this->MinPosition(), __this->MaxPosition()));
    ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_destination), __this->Position());
    ::app::Experimental::Physics::MotionSimulation__float2::Velocity(::uPtr< ::uObject*>(__this->_destination), __this->Velocity());
    __this->_moveMode = 4;
}

void BasicBoundedRegion2D__Update(BasicBoundedRegion2D* __this, double elapsed)
{
    switch (__this->_moveMode)
    {
        case 0:
        case 1:
        {
            return;
        }
        case 2:
        {
            __this->MoveFriction(elapsed);
            break;
        }
        case 3:
        {
            if (__this->MoveSnap(elapsed, true, true))
            {
                __this->_moveMode = 0;
            }

            break;
        }
        case 4:
        {
            __this->MoveDestination(elapsed);
            break;
        }
    }
}

void BasicBoundedRegion2D__MoveFriction(BasicBoundedRegion2D* __this, double elapsed)
{
    ::uPtr< ::app::Experimental::Physics::Friction__float2*>(__this->_friction)->Velocity(__this->SnapValue(__this->Position(), __this->_velocity));
    ::uPtr< ::app::Experimental::Physics::Friction__float2*>(__this->_friction)->Position(__this->Position());
    ::uPtr< ::app::Experimental::Physics::Friction__float2*>(__this->_friction)->Update(elapsed);

    if (::uPtr< ::app::Experimental::Physics::Friction__float2*>(__this->_friction)->IsStatic())
    {
        __this->_moveMode = 3;
        return;
    }

    __this->_velocity = ::uPtr< ::app::Experimental::Physics::Friction__float2*>(__this->_friction)->Velocity();
    __this->Position(::uPtr< ::app::Experimental::Physics::Friction__float2*>(__this->_friction)->Position());
    __this->MoveSnap(elapsed, ::app::Uno::Math__Abs_1(NULL, __this->_velocity.X) < 1e-05f, ::app::Uno::Math__Abs_1(NULL, __this->_velocity.Y) < 1e-05f);
}

::app::Uno::Float2 BasicBoundedRegion2D__SnapValue(BasicBoundedRegion2D* __this, ::app::Uno::Float2 p, ::app::Uno::Float2 v)
{
    ::app::Uno::Float2 over = __this->CalcOver(p);

    if ((::app::Uno::Math__Abs_1(NULL, over.X) + ::app::Uno::Math__Abs_1(NULL, over.Y)) > 1e-05f)
    {
        ::app::Uno::Float2 f = ::app::Uno::Math__Clamp_3(NULL, ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__New_1(NULL, 1.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Math__Abs_2(NULL, over), 150.0f)), ::app::Uno::Float2__New_1(NULL, 0.0f), ::app::Uno::Float2__New_1(NULL, 1.0f));
        v = ::app::Uno::Float2__op_Multiply_1(NULL, v, f);
    }

    return v;
}

bool BasicBoundedRegion2D__MoveSnap(BasicBoundedRegion2D* __this, double elapsed, bool X, bool Y)
{
    ::app::Uno::Float2 over = __this->CalcOver(__this->Position());
    float off = ::app::Uno::Vector__Length(NULL, over);

    if (off <= 0.0f)
    {
        return true;
    }

    ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_snap), __this->Position());
    ::app::Experimental::Physics::MotionSimulation__float2::Velocity(::uPtr< ::uObject*>(__this->_snap), __this->Velocity());
    ::app::Experimental::Physics::DestinationSimulation__float2::Destination(::uPtr< ::uObject*>(__this->_snap), ::app::Uno::Float2__op_Subtraction(NULL, __this->Position(), over));
    ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_snap), elapsed);
    __this->Position(::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_snap)));
    ::app::Uno::Float2 nv = __this->Velocity();
    ::app::Uno::Float2 np = __this->Position();

    if (X)
    {
        nv.X = ::app::Experimental::Physics::MotionSimulation__float2::Velocity(::uPtr< ::uObject*>(__this->_snap)).X;
        np.X = ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_snap)).X;
    }

    if (Y)
    {
        nv.Y = ::app::Experimental::Physics::MotionSimulation__float2::Velocity(::uPtr< ::uObject*>(__this->_snap)).Y;
        np.Y = ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_snap)).Y;
    }

    __this->Velocity(nv);
    __this->Position(np);
    return ::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_snap));
}

void BasicBoundedRegion2D__MoveDestination(BasicBoundedRegion2D* __this, double elapsed)
{
    ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_destination), elapsed);

    if (::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_destination)))
    {
        __this->_moveMode = 0;
    }

    __this->Velocity(::app::Experimental::Physics::MotionSimulation__float2::Velocity(::uPtr< ::uObject*>(__this->_destination)));
    __this->Position(::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_destination)));
}

::app::Uno::Float2 BasicBoundedRegion2D__CalcOver(BasicBoundedRegion2D* __this, ::app::Uno::Float2 sp)
{
    ::app::Uno::Float2 min = __this->MinPosition();
    ::app::Uno::Float2 max = __this->MaxPosition();
    ::app::Uno::Float2 over = ::app::Uno::Float2__New_1(NULL, 0.0f);

    if (sp.X < min.X)
    {
        over.X = sp.X - min.X;
    }
    else if (sp.X > max.X)
    {
        over.X = sp.X - max.X;
    }

    if (sp.Y < min.Y)
    {
        over.Y = sp.Y - min.Y;
    }
    else if (sp.Y > max.Y)
    {
        over.Y = sp.Y - max.Y;
    }

    return over;
}

void BasicBoundedRegion2D___ObjInit(BasicBoundedRegion2D* __this)
{
    __this->_friction = ::app::Experimental::Physics::Friction__float2__CreatePixelFlat(NULL);
    __this->_snap = (::uObject*)::app::Experimental::Physics::SmoothSnap__float2__New_1(NULL, 1e-05f);
}

BasicBoundedRegion2D* BasicBoundedRegion2D__New_1(::uStatic* __this)
{
    BasicBoundedRegion2D* inst = (::app::Experimental::Physics::BasicBoundedRegion2D*)::uAllocObject(sizeof(::app::Experimental::Physics::BasicBoundedRegion2D), ::app::Experimental::Physics::BasicBoundedRegion2D__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
