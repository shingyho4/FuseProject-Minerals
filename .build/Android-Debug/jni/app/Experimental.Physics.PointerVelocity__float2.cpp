// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Physics.PointerVelocity__float2.h>
#include <app/Fuse.Internal.Blender__float2.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Fuse.Internal.Statistics.h>
#include <app/Uno.Double.h>
#include <app/Uno.Math.h>

namespace app {
namespace Experimental {
namespace Physics {

PointerVelocity__float2__uType* PointerVelocity__float2__typeof()
{
    static PointerVelocity__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerVelocity__float2__uType*)::uAllocClassType(sizeof(PointerVelocity__float2__uType), "Experimental.Physics.PointerVelocity<float2>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(PointerVelocity__float2, _blender);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_blender";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 PointerVelocity__float2__get_CurrentVelocity(PointerVelocity__float2* __this)
{
    return __this->_velocity;
}

void PointerVelocity__float2__set_CurrentVelocity(PointerVelocity__float2* __this, ::app::Uno::Float2 value)
{
    __this->_velocity = value;
}

void PointerVelocity__float2__Reset_1(PointerVelocity__float2* __this, ::app::Uno::Float2 location0, ::app::Uno::Float2 velocity0)
{
    __this->_velocity = velocity0;
    __this->_totalTime = 0.0;
    __this->_startLocation = __this->_currentLocation = location0;
    __this->_totalDistance = 0.0;
}

void PointerVelocity__float2__AddSample(PointerVelocity__float2* __this, ::app::Uno::Float2 location, float elapsed, bool tentative)
{
    ::app::Uno::Float2 diff = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Sub(location, __this->_currentLocation);
    float length = float();
    ::app::Uno::Float2 unit = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->ToUnit(diff, &length);

    if (length < 1e-05f)
    {
        unit = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero();
    }

    __this->_totalDistance = __this->_totalDistance + (double)length;
    __this->_currentLocation = location;

    if (elapsed < 1e-05f)
    {
        return;
    }

    float speed = length / elapsed;
    double tdP = ::app::Uno::Math__Clamp(NULL, __this->_totalDistance / (double)__this->_speedDistanceThreshold, 0.0, 1.0);
    speed = ::app::Uno::Math__Min_1(NULL, (float)((double)__this->_inSpeedLimit * tdP), speed);

    if (tdP >= 1.0)
    {
        float accelRange = ::app::Uno::Math__Clamp_1(NULL, speed, __this->_accelThreshold, __this->_accelLimit) / (__this->_accelLimit - __this->_accelThreshold);
        float accel = accelRange * __this->_accelFactor;
        speed = speed * accel;
    }

    ::app::Uno::Float2 sample = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(unit, speed);

    if (__this->_totalTime < 9.9999997473787516e-06)
    {
        __this->_velocity = sample;
    }
    else
    {
        float alpha = ::app::Fuse::Internal::Statistics__ContinuousFilterAlpha(NULL, elapsed, __this->_period);
        __this->_velocity = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Lerp(__this->_velocity, sample, alpha);
    }

    __this->_totalTime = __this->_totalTime + (double)elapsed;
}

void PointerVelocity__float2___ObjInit(PointerVelocity__float2* __this)
{
    __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float2(NULL);
    __this->_period = 0.1f;
    __this->_accelThreshold = 1000.0f;
    __this->_accelLimit = 2000.0f;
    __this->_accelFactor = 1.5f;
    __this->_inSpeedLimit = 2000.0f;
    __this->_speedDistanceThreshold = 50.0f;
}

PointerVelocity__float2* PointerVelocity__float2__New_1(::uStatic* __this)
{
    PointerVelocity__float2* inst = (::app::Experimental::Physics::PointerVelocity__float2*)::uAllocObject(sizeof(::app::Experimental::Physics::PointerVelocity__float2), ::app::Experimental::Physics::PointerVelocity__float2__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
