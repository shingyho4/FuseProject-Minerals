// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Physics.SmoothSnap__float2.h>
#include <app/Fuse.Internal.Blender__float2.h>
#include <app/Fuse.Internal.BlenderMap.h>

namespace app {
namespace Experimental {
namespace Physics {

SmoothSnap__float2__uType* SmoothSnap__float2__typeof()
{
    static SmoothSnap__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SmoothSnap__float2__uType*)::uAllocClassType(sizeof(SmoothSnap__float2__uType), "Experimental.Physics.SmoothSnap<float2>", ::uObject__typeof(), 3, 1);
        type->__interface_0.__fp_get_Destination = (::app::Uno::Float2(*)(void*))SmoothSnap__float2__get_Destination;
        type->__interface_0.__fp_set_Destination = (void(*)(void*, ::app::Uno::Float2))SmoothSnap__float2__set_Destination;
        type->__interface_1.__fp_get_Position = (::app::Uno::Float2(*)(void*))SmoothSnap__float2__get_Position;
        type->__interface_1.__fp_set_Position = (void(*)(void*, ::app::Uno::Float2))SmoothSnap__float2__set_Position;
        type->__interface_1.__fp_get_Velocity = (::app::Uno::Float2(*)(void*))SmoothSnap__float2__get_Velocity;
        type->__interface_1.__fp_set_Velocity = (void(*)(void*, ::app::Uno::Float2))SmoothSnap__float2__set_Velocity;
        type->__interface_2.__fp_Update = (void(*)(void*, double))SmoothSnap__float2__Update;
        type->__interface_2.__fp_get_IsStatic = (bool(*)(void*))SmoothSnap__float2__get_IsStatic;

        type->Implements[0] = ::app::Experimental::Physics::DestinationSimulation__float2__typeof();
        type->Implements[1] = ::app::Experimental::Physics::MotionSimulation__float2__typeof();
        type->Implements[2] = ::app::Experimental::Physics::Simulation__typeof();

        type->InterfaceOffsets[0] = offsetof(SmoothSnap__float2__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(SmoothSnap__float2__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(SmoothSnap__float2__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(SmoothSnap__float2, _blender);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_blender";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 SmoothSnap__float2__get_Position(SmoothSnap__float2* __this)
{
    return __this->_Position;
}

void SmoothSnap__float2__set_Position(SmoothSnap__float2* __this, ::app::Uno::Float2 value)
{
    __this->_Position = value;
}

::app::Uno::Float2 SmoothSnap__float2__get_Velocity(SmoothSnap__float2* __this)
{
    return __this->_Velocity;
}

void SmoothSnap__float2__set_Velocity(SmoothSnap__float2* __this, ::app::Uno::Float2 value)
{
    __this->_Velocity = value;
}

::app::Uno::Float2 SmoothSnap__float2__get_Destination(SmoothSnap__float2* __this)
{
    return __this->_Destination;
}

void SmoothSnap__float2__set_Destination(SmoothSnap__float2* __this, ::app::Uno::Float2 value)
{
    __this->_Destination = value;
}

float SmoothSnap__float2__get_Speed(SmoothSnap__float2* __this)
{
    return __this->_speed;
}

void SmoothSnap__float2__set_Speed(SmoothSnap__float2* __this, float value)
{
    __this->_speed = value;
}

bool SmoothSnap__float2__get_IsStatic(SmoothSnap__float2* __this)
{
    return ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Length(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Sub(__this->Destination(), __this->Position())) < __this->_scale;
}

void SmoothSnap__float2__Update(SmoothSnap__float2* __this, double elapsed)
{
    ::app::Uno::Float2 off = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Sub(__this->Destination(), __this->Position());
    float offLen = float();
    ::app::Uno::Float2 offUnit = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->ToUnit(off, &offLen);
    float useSpeed = __this->Speed();

    if (offLen < __this->_speedDropoutDistance)
    {
        useSpeed = ((offLen / __this->_speedDropoutDistance) * (__this->Speed() - __this->_speedMin)) + __this->_speedMin;
    }

    if ((double)offLen < ((double)useSpeed * elapsed))
    {
        __this->Position(__this->Destination());
        __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero());
        return;
    }

    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(offUnit, useSpeed));
    __this->Position(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Add(__this->Position(), ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(__this->Velocity(), (float)elapsed)));
}

void SmoothSnap__float2___ObjInit(SmoothSnap__float2* __this, float scale)
{
    __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float2(NULL);
    __this->_scale = 1.0f;
    __this->_speedMin = 25.0f;
    __this->_speedDropoutDistance = 100.0f;
    __this->_speed = 600.0f;
    __this->_scale = scale;
}

SmoothSnap__float2* SmoothSnap__float2__New_1(::uStatic* __this, float scale)
{
    SmoothSnap__float2* inst = (::app::Experimental::Physics::SmoothSnap__float2*)::uAllocObject(sizeof(::app::Experimental::Physics::SmoothSnap__float2), ::app::Experimental::Physics::SmoothSnap__float2__typeof());
    inst->_ObjInit(scale);
    return inst;
}

}}}
