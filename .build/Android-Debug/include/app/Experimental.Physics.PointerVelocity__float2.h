// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Physics\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_PHYSICS_POINTER_VELOCITY__FLOAT2_H__
#define __APP_EXPERIMENTAL_PHYSICS_POINTER_VELOCITY__FLOAT2_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct Blender__float2; } } }

namespace app {
namespace Experimental {
namespace Physics {

struct PointerVelocity__float2;

struct PointerVelocity__float2__uType : ::uClassType
{
};

PointerVelocity__float2__uType* PointerVelocity__float2__typeof();

::app::Uno::Float2 PointerVelocity__float2__get_CurrentVelocity(PointerVelocity__float2* __this);
void PointerVelocity__float2__set_CurrentVelocity(PointerVelocity__float2* __this, ::app::Uno::Float2 value);
void PointerVelocity__float2__Reset_1(PointerVelocity__float2* __this, ::app::Uno::Float2 location0, ::app::Uno::Float2 velocity0);
void PointerVelocity__float2__AddSample(PointerVelocity__float2* __this, ::app::Uno::Float2 location, float elapsed, bool tentative);
void PointerVelocity__float2___ObjInit(PointerVelocity__float2* __this);
PointerVelocity__float2* PointerVelocity__float2__New_1(::uStatic* __this);

struct PointerVelocity__float2 : ::uObject
{
    ::uStrong< ::app::Fuse::Internal::Blender__float2*> _blender;
    float _period;
    ::app::Uno::Float2 _velocity;
    ::app::Uno::Float2 _currentLocation;
    ::app::Uno::Float2 _startLocation;
    float _accelThreshold;
    float _accelLimit;
    float _accelFactor;
    float _inSpeedLimit;
    float _speedDistanceThreshold;
    double _totalTime;
    double _totalDistance;

    void Reset_1(::app::Uno::Float2 location0, ::app::Uno::Float2 velocity0);
    void AddSample(::app::Uno::Float2 location, float elapsed, bool tentative);
    void _ObjInit() { PointerVelocity__float2___ObjInit(this); }
    ::app::Uno::Float2 CurrentVelocity();
    void CurrentVelocity(::app::Uno::Float2 value);
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Experimental {
namespace Physics {

inline void PointerVelocity__float2::Reset_1(::app::Uno::Float2 location0, ::app::Uno::Float2 velocity0) { PointerVelocity__float2__Reset_1(this, location0, velocity0); }
inline void PointerVelocity__float2::AddSample(::app::Uno::Float2 location, float elapsed, bool tentative) { PointerVelocity__float2__AddSample(this, location, elapsed, tentative); }
inline ::app::Uno::Float2 PointerVelocity__float2::CurrentVelocity() { return PointerVelocity__float2__get_CurrentVelocity(this); }
inline void PointerVelocity__float2::CurrentVelocity(::app::Uno::Float2 value) { PointerVelocity__float2__set_CurrentVelocity(this, value); }

}}}


#endif
