// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Physics.Friction__float2.h>
#include <app/Fuse.Internal.Blender__float2.h>
#include <app/Fuse.Internal.BlenderMap.h>

namespace app {
namespace Experimental {
namespace Physics {

Friction__float2__uType* Friction__float2__typeof()
{
    static Friction__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Friction__float2__uType*)::uAllocClassType(sizeof(Friction__float2__uType), "Experimental.Physics.Friction<float2>", ::uObject__typeof(), 2, 1);
        type->__interface_0.__fp_get_Position = (::app::Uno::Float2(*)(void*))Friction__float2__get_Position;
        type->__interface_0.__fp_set_Position = (void(*)(void*, ::app::Uno::Float2))Friction__float2__set_Position;
        type->__interface_0.__fp_get_Velocity = (::app::Uno::Float2(*)(void*))Friction__float2__get_Velocity;
        type->__interface_0.__fp_set_Velocity = (void(*)(void*, ::app::Uno::Float2))Friction__float2__set_Velocity;
        type->__interface_1.__fp_Update = (void(*)(void*, double))Friction__float2__Update;
        type->__interface_1.__fp_get_IsStatic = (bool(*)(void*))Friction__float2__get_IsStatic;

        type->Implements[0] = ::app::Experimental::Physics::MotionSimulation__float2__typeof();
        type->Implements[1] = ::app::Experimental::Physics::Simulation__typeof();

        type->InterfaceOffsets[0] = offsetof(Friction__float2__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(Friction__float2__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(Friction__float2, _blender);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_blender";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Friction__float2__get_SpeedDropout(Friction__float2* __this)
{
    return __this->_speedDropout;
}

void Friction__float2__set_SpeedDropout(Friction__float2* __this, float value)
{
    __this->_speedDropout = value;
}

float Friction__float2__get_KineticDeceleration(Friction__float2* __this)
{
    return __this->_kineticDeceleration;
}

void Friction__float2__set_KineticDeceleration(Friction__float2* __this, float value)
{
    __this->_kineticDeceleration = value;
}

float Friction__float2__get_LowFluidDeceleration(Friction__float2* __this)
{
    return __this->_lowFluidDeceleration;
}

void Friction__float2__set_LowFluidDeceleration(Friction__float2* __this, float value)
{
    __this->_lowFluidDeceleration = value;
}

float Friction__float2__get_HighFluidDeceleration(Friction__float2* __this)
{
    return __this->_highFluidDeceleration;
}

void Friction__float2__set_HighFluidDeceleration(Friction__float2* __this, float value)
{
    __this->_highFluidDeceleration = value;
}

::app::Uno::Float2 Friction__float2__get_Velocity(Friction__float2* __this)
{
    return __this->_velocity;
}

void Friction__float2__set_Velocity(Friction__float2* __this, ::app::Uno::Float2 value)
{
    __this->_velocity = value;
    __this->_isStatic = false;
}

::app::Uno::Float2 Friction__float2__get_Position(Friction__float2* __this)
{
    return __this->_position;
}

void Friction__float2__set_Position(Friction__float2* __this, ::app::Uno::Float2 value)
{
    __this->_position = value;
}

bool Friction__float2__get_IsStatic(Friction__float2* __this)
{
    return __this->_isStatic;
}

Friction__float2* Friction__float2__CreatePixelFlat(::uStatic* __this)
{
    Friction__float2* n = Friction__float2__New_1(NULL);
    ::uPtr< ::app::Experimental::Physics::Friction__float2*>(n)->SpeedDropout(25.0f);
    n->KineticDeceleration(60.0f);
    n->LowFluidDeceleration(1.5f);
    n->HighFluidDeceleration(0.0f);
    return n;
}

void Friction__float2__Update(Friction__float2* __this, double elapsed)
{
    ::app::Uno::Float2 step = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(__this->_velocity, (float)elapsed);
    __this->_position = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Add(__this->_position, step);
    float linear = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Length(__this->_velocity);

    if (linear < __this->_speedDropout)
    {
        __this->_velocity = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero();
        __this->_isStatic = true;
        return;
    }

    float fluid = __this->_kineticDeceleration + (linear * __this->_lowFluidDeceleration);
    linear = linear + (-fluid * (float)elapsed);

    if (linear < __this->_speedDropout)
    {
        __this->_velocity = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero();
        __this->_isStatic = true;
        return;
    }

    __this->_velocity = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->UnitWeight(__this->_velocity, linear);
}

void Friction__float2___ObjInit(Friction__float2* __this)
{
    __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float2(NULL);
    __this->_speedDropout = 25.0f;
    __this->_kineticDeceleration = 60.0f;
    __this->_lowFluidDeceleration = 1.5f;
}

Friction__float2* Friction__float2__New_1(::uStatic* __this)
{
    Friction__float2* inst = (::app::Experimental::Physics::Friction__float2*)::uAllocObject(sizeof(::app::Experimental::Physics::Friction__float2), ::app::Experimental::Physics::Friction__float2__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
