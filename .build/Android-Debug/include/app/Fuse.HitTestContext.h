// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_HIT_TEST_CONTEXT_H__
#define __APP_FUSE_HIT_TEST_CONTEXT_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {

struct HitTestContext;

struct HitTestContext__uType : ::uClassType
{
};

HitTestContext__uType* HitTestContext__typeof();

::app::Uno::Float2 HitTestContext__get_WindowPoint(HitTestContext* __this);
void HitTestContext__set_WindowPoint(HitTestContext* __this, ::app::Uno::Float2 value);
::app::Uno::Float2 HitTestContext__get_LocalPoint(HitTestContext* __this);
::app::Uno::Geometry::Ray HitTestContext__get_WorldRay(HitTestContext* __this);
::uDelegate* HitTestContext__get_Callback(HitTestContext* __this);
::app::Uno::Float2 HitTestContext__PushLocalPoint(HitTestContext* __this, ::app::Uno::Float2 lp);
void HitTestContext__PopLocalPoint(HitTestContext* __this, ::app::Uno::Float2 lp);
void HitTestContext__Hit(HitTestContext* __this, ::app::Fuse::Node* obj);
void HitTestContext__Hit_1(HitTestContext* __this, ::app::Fuse::Node* obj, float hitDistance);
void HitTestContext__Dispose(HitTestContext* __this);
void HitTestContext___ObjInit(HitTestContext* __this, ::app::Uno::Float2 windowPoint, ::uDelegate* callback);
HitTestContext* HitTestContext__New_1(::uStatic* __this, ::app::Uno::Float2 windowPoint, ::uDelegate* callback);

struct HitTestContext : ::uObject
{
    ::app::Uno::Float2 _localPoint;
    ::app::Uno::Geometry::Ray _worldRay;
    ::uStrong< ::uDelegate*> _callback;
    ::app::Uno::Float2 _WindowPoint;

    ::app::Uno::Float2 PushLocalPoint(::app::Uno::Float2 lp);
    void PopLocalPoint(::app::Uno::Float2 lp);
    void Hit(::app::Fuse::Node* obj) { HitTestContext__Hit(this, obj); }
    void Hit_1(::app::Fuse::Node* obj, float hitDistance) { HitTestContext__Hit_1(this, obj, hitDistance); }
    void Dispose() { HitTestContext__Dispose(this); }
    void _ObjInit(::app::Uno::Float2 windowPoint, ::uDelegate* callback);
    ::app::Uno::Float2 WindowPoint();
    void WindowPoint(::app::Uno::Float2 value);
    ::app::Uno::Float2 LocalPoint();
    ::app::Uno::Geometry::Ray WorldRay();
    ::uDelegate* Callback() { return HitTestContext__get_Callback(this); }
};

}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float2 HitTestContext::PushLocalPoint(::app::Uno::Float2 lp) { return HitTestContext__PushLocalPoint(this, lp); }
inline void HitTestContext::PopLocalPoint(::app::Uno::Float2 lp) { HitTestContext__PopLocalPoint(this, lp); }
inline void HitTestContext::_ObjInit(::app::Uno::Float2 windowPoint, ::uDelegate* callback) { HitTestContext___ObjInit(this, windowPoint, callback); }
inline ::app::Uno::Float2 HitTestContext::WindowPoint() { return HitTestContext__get_WindowPoint(this); }
inline void HitTestContext::WindowPoint(::app::Uno::Float2 value) { HitTestContext__set_WindowPoint(this, value); }
inline ::app::Uno::Float2 HitTestContext::LocalPoint() { return HitTestContext__get_LocalPoint(this); }
inline ::app::Uno::Geometry::Ray HitTestContext::WorldRay() { return HitTestContext__get_WorldRay(this); }

}}


#endif
