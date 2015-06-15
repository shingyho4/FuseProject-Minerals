// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Physics.PointerVelocity__float.h>
#include <app/Fuse.Internal.Blender__float.h>
#include <app/Fuse.Internal.Statistics.h>
#include <app/Uno.Double.h>
#include <app/Uno.Math.h>

namespace app {
namespace Experimental {
namespace Physics {

PointerVelocity__float__uType* PointerVelocity__float__typeof()
{
    static PointerVelocity__float__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerVelocity__float__uType*)::uAllocClassType(sizeof(PointerVelocity__float__uType), "Experimental.Physics.PointerVelocity<float>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(PointerVelocity__float, _blender);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_blender";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float PointerVelocity__float__get_CurrentVelocity(PointerVelocity__float* __this)
{
    return __this->_velocity;
}

void PointerVelocity__float__set_CurrentVelocity(PointerVelocity__float* __this, float value)
{
    __this->_velocity = value;
}

void PointerVelocity__float__Reset(PointerVelocity__float* __this, float location0)
{
    __this->Reset_1(location0, ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Zero());
}

void PointerVelocity__float__Reset_1(PointerVelocity__float* __this, float location0, float velocity0)
{
    __this->_velocity = velocity0;
    __this->_totalTime = 0.0;
    __this->_startLocation = __this->_currentLocation = location0;
    __this->_totalDistance = 0.0;
}

void PointerVelocity__float__AddSample(PointerVelocity__float* __this, float location, float elapsed, bool tentative)
{
    float diff = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Sub(location, __this->_currentLocation);
    float length = float();
    float unit = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->ToUnit(diff, &length);

    if (length < 1e-05f)
    {
        unit = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Zero();
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

    float sample = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Weight(unit, speed);

    if (__this->_totalTime < 9.9999997473787516e-06)
    {
        __this->_velocity = sample;
    }
    else
    {
        float alpha = ::app::Fuse::Internal::Statistics__ContinuousFilterAlpha(NULL, elapsed, __this->_period);
        __this->_velocity = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Lerp(__this->_velocity, sample, alpha);
    }

    __this->_totalTime = __this->_totalTime + (double)elapsed;
}

}}}
