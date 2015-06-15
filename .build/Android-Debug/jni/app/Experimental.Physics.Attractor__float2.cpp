// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Physics.Attractor__float2.h>
#include <app/Fuse.Internal.Blender__float2.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Uno.Math.h>

namespace app {
namespace Experimental {
namespace Physics {

Attractor__float2__uType* Attractor__float2__typeof()
{
    static Attractor__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Attractor__float2__uType*)::uAllocClassType(sizeof(Attractor__float2__uType), "Experimental.Physics.Attractor<float2>", ::uObject__typeof(), 3, 1);
        type->__interface_0.__fp_get_Destination = (::app::Uno::Float2(*)(void*))Attractor__float2__get_Destination;
        type->__interface_0.__fp_set_Destination = (void(*)(void*, ::app::Uno::Float2))Attractor__float2__set_Destination;
        type->__interface_1.__fp_get_Position = (::app::Uno::Float2(*)(void*))Attractor__float2__get_Position;
        type->__interface_1.__fp_set_Position = (void(*)(void*, ::app::Uno::Float2))Attractor__float2__set_Position;
        type->__interface_1.__fp_get_Velocity = (::app::Uno::Float2(*)(void*))Attractor__float2__get_Velocity;
        type->__interface_1.__fp_set_Velocity = (void(*)(void*, ::app::Uno::Float2))Attractor__float2__set_Velocity;
        type->__interface_2.__fp_Update = (void(*)(void*, double))Attractor__float2__Update;
        type->__interface_2.__fp_get_IsStatic = (bool(*)(void*))Attractor__float2__get_IsStatic;

        type->Implements[0] = ::app::Experimental::Physics::DestinationSimulation__float2__typeof();
        type->Implements[1] = ::app::Experimental::Physics::MotionSimulation__float2__typeof();
        type->Implements[2] = ::app::Experimental::Physics::Simulation__typeof();

        type->InterfaceOffsets[0] = offsetof(Attractor__float2__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Attractor__float2__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(Attractor__float2__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(Attractor__float2, _blender);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_blender";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Attractor__float2__get_IsLocked(Attractor__float2* __this)
{
    return __this->_IsLocked;
}

void Attractor__float2__set_IsLocked(Attractor__float2* __this, bool value)
{
    __this->_IsLocked = value;
}

::app::Uno::Float2 Attractor__float2__get_Position(Attractor__float2* __this)
{
    return __this->_Position;
}

void Attractor__float2__set_Position(Attractor__float2* __this, ::app::Uno::Float2 value)
{
    __this->_Position = value;
}

::app::Uno::Float2 Attractor__float2__get_Velocity(Attractor__float2* __this)
{
    return __this->_velocity;
}

void Attractor__float2__set_Velocity(Attractor__float2* __this, ::app::Uno::Float2 value)
{
    __this->_velocity = value;
    __this->_isStatic = false;
}

::app::Uno::Float2 Attractor__float2__get_Destination(Attractor__float2* __this)
{
    return __this->_attractionDestination;
}

void Attractor__float2__set_Destination(Attractor__float2* __this, ::app::Uno::Float2 value)
{
    __this->_attractionDestination = value;
    __this->_isStatic = false;
}

float Attractor__float2__get_AttractionForce(Attractor__float2* __this)
{
    return __this->_attractionForce;
}

void Attractor__float2__set_AttractionForce(Attractor__float2* __this, float value)
{
    __this->_attractionForce = value;
}

float Attractor__float2__get_AttractionCurve(Attractor__float2* __this)
{
    return __this->_attractionCurve;
}

void Attractor__float2__set_AttractionCurve(Attractor__float2* __this, float value)
{
    __this->_attractionCurve = value;
}

float Attractor__float2__get_Damping(Attractor__float2* __this)
{
    return __this->_damping;
}

void Attractor__float2__set_Damping(Attractor__float2* __this, float value)
{
    __this->_damping = value;
}

float Attractor__float2__get_EnergyEps(Attractor__float2* __this)
{
    return __this->_energyEps;
}

void Attractor__float2__set_EnergyEps(Attractor__float2* __this, float value)
{
    __this->_energyEps = value;
}

bool Attractor__float2__get_IsStatic(Attractor__float2* __this)
{
    return __this->_isStatic;
}

void Attractor__float2__set_IsStatic(Attractor__float2* __this, bool value)
{
    if (__this->_isStatic != value)
    {
        __this->_isStatic = value;
    }
}

::app::Uno::Float2 Attractor__float2__get_Attraction(Attractor__float2* __this)
{
    ::app::Uno::Float2 v = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Sub(__this->Destination(), __this->Position());
    float length = float();
    ::app::Uno::Float2 unit = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->ToUnit(v, &length);

    if (length < __this->_scale)
    {
        return ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero();
    }

    float p = ::app::Uno::Math__Pow_1(NULL, length, __this->AttractionCurve());
    return ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(unit, p);
}

float Attractor__float2__get_Energy(Attractor__float2* __this)
{
    return ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Length(__this->Attraction()) + ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Length(__this->Velocity());
}

void Attractor__float2__Update(Attractor__float2* __this, double elapsed)
{
    ::app::Uno::Float2 p = __this->Position();
    __this->_remainTime = __this->_remainTime + elapsed;

    while (__this->_remainTime > 0.0)
    {
        __this->Iterate();
        __this->_remainTime = __this->_remainTime - __this->timeStep;
    }

    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(__this->Velocity(), (float)(1.0 - ::app::Uno::Math__Min(NULL, 1.0, (double)__this->Damping() * elapsed))));
}

void Attractor__float2__Iterate(Attractor__float2* __this)
{
    ::app::Uno::Float2 acc = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(__this->Attraction(), (float)((double)__this->AttractionForce() * __this->timeStep));
    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Add(__this->Velocity(), acc));

    if (__this->_hasMaxSpeed)
    {
        float length = float();
        ::app::Uno::Float2 unit = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->ToUnit(__this->Velocity(), &length);

        if (length > __this->_maxSpeed)
        {
            __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(unit, __this->_maxSpeed));
        }
    }

    if (!__this->IsLocked())
    {
        ::app::Uno::Float2 step = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(__this->Velocity(), (float)__this->timeStep);
        __this->Position(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Add(__this->Position(), step));

        if (__this->Energy() < __this->EnergyEps())
        {
            __this->Position(__this->Destination());
            __this->IsStatic(true);
        }
    }
}

void Attractor__float2___ObjInit(Attractor__float2* __this, float scale)
{
    __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float2(NULL);
    __this->_attractionForce = 500.0f;
    __this->_attractionCurve = 0.65f;
    __this->_damping = 10.0f;
    __this->_energyEps = 0.01f;
    __this->timeStep = 0.001;
    __this->_remainTime = 0.0;
    __this->_scale = scale;
}

Attractor__float2* Attractor__float2__New_1(::uStatic* __this, float scale)
{
    Attractor__float2* inst = (::app::Experimental::Physics::Attractor__float2*)::uAllocObject(sizeof(::app::Experimental::Physics::Attractor__float2), ::app::Experimental::Physics::Attractor__float2__typeof());
    inst->_ObjInit(scale);
    return inst;
}

}}}
