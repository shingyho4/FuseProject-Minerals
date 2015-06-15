// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_POINTER_VELOCITY__FLOAT_H__
#define __APP_EXPERIMENTAL_PHYSICS_POINTER_VELOCITY__FLOAT_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__float; } } }

namespace app {
namespace Experimental {
namespace Physics {

struct PointerVelocity__float;

struct PointerVelocity__float__uType : ::uClassType
{
};

PointerVelocity__float__uType* PointerVelocity__float__typeof();

float PointerVelocity__float__get_CurrentVelocity(PointerVelocity__float* __this);
void PointerVelocity__float__set_CurrentVelocity(PointerVelocity__float* __this, float value);
void PointerVelocity__float__Reset(PointerVelocity__float* __this, float location0);
void PointerVelocity__float__Reset_1(PointerVelocity__float* __this, float location0, float velocity0);
void PointerVelocity__float__AddSample(PointerVelocity__float* __this, float location, float elapsed, bool tentative);

struct PointerVelocity__float : ::uObject
{
    ::uStrong< ::app::Fuse::Internal::Blender__float*> _blender;
    float _period;
    float _velocity;
    float _currentLocation;
    float _startLocation;
    float _accelThreshold;
    float _accelLimit;
    float _accelFactor;
    float _inSpeedLimit;
    float _speedDistanceThreshold;
    double _totalTime;
    double _totalDistance;

    void Reset(float location0) { PointerVelocity__float__Reset(this, location0); }
    void Reset_1(float location0, float velocity0) { PointerVelocity__float__Reset_1(this, location0, velocity0); }
    void AddSample(float location, float elapsed, bool tentative) { PointerVelocity__float__AddSample(this, location, elapsed, tentative); }
    float CurrentVelocity() { return PointerVelocity__float__get_CurrentVelocity(this); }
    void CurrentVelocity(float value) { PointerVelocity__float__set_CurrentVelocity(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Experimental {
namespace Physics {

}}}


#endif
