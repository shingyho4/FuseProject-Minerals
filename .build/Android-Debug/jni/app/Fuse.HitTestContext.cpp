// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.HitTestCallback.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.HitTestResult.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>

namespace app {
namespace Fuse {

HitTestContext__uType* HitTestContext__typeof()
{
    static HitTestContext__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HitTestContext__uType*)::uAllocClassType(sizeof(HitTestContext__uType), "Fuse.HitTestContext", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(HitTestContext, _callback);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_callback";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 HitTestContext__get_WindowPoint(HitTestContext* __this)
{
    return __this->_WindowPoint;
}

void HitTestContext__set_WindowPoint(HitTestContext* __this, ::app::Uno::Float2 value)
{
    __this->_WindowPoint = value;
}

::app::Uno::Float2 HitTestContext__get_LocalPoint(HitTestContext* __this)
{
    return __this->_localPoint;
}

::app::Uno::Geometry::Ray HitTestContext__get_WorldRay(HitTestContext* __this)
{
    return __this->_worldRay;
}

::uDelegate* HitTestContext__get_Callback(HitTestContext* __this)
{
    return __this->_callback;
}

::app::Uno::Float2 HitTestContext__PushLocalPoint(HitTestContext* __this, ::app::Uno::Float2 lp)
{
    ::app::Uno::Float2 r = __this->_localPoint;
    __this->_localPoint = lp;
    return r;
}

void HitTestContext__PopLocalPoint(HitTestContext* __this, ::app::Uno::Float2 lp)
{
    __this->_localPoint = lp;
}

void HitTestContext__Hit(HitTestContext* __this, ::app::Fuse::Node* obj)
{
    ::app::Fuse::HitTestResult* collection_123;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Callback(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Callback())->InvokeVoid< ::app::Fuse::HitTestResult*>((collection_123 = ::app::Fuse::HitTestResult__New_1(NULL), ::uPtr< ::app::Fuse::HitTestResult*>(collection_123)->HitObject(obj), obj, collection_123));
    }
}

void HitTestContext__Hit_1(HitTestContext* __this, ::app::Fuse::Node* obj, float hitDistance)
{
    ::app::Fuse::HitTestResult* collection_124;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Callback(), NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Callback())->InvokeVoid< ::app::Fuse::HitTestResult*>((collection_124 = ::app::Fuse::HitTestResult__New_1(NULL), ::uPtr< ::app::Fuse::HitTestResult*>(collection_124)->HitObject(obj), obj, ::uPtr< ::app::Fuse::HitTestResult*>(collection_124)->HasHitDistance(true), true, ::uPtr< ::app::Fuse::HitTestResult*>(collection_124)->HitDistance(hitDistance), hitDistance, collection_124));
    }
}

void HitTestContext__Dispose(HitTestContext* __this)
{
    __this->_callback = NULL;
}

void HitTestContext___ObjInit(HitTestContext* __this, ::app::Uno::Float2 windowPoint, ::uDelegate* callback)
{
    __this->WindowPoint(windowPoint);
    __this->_localPoint = windowPoint;
    __this->_callback = callback;
}

HitTestContext* HitTestContext__New_1(::uStatic* __this, ::app::Uno::Float2 windowPoint, ::uDelegate* callback)
{
    HitTestContext* inst = (::app::Fuse::HitTestContext*)::uAllocObject(sizeof(::app::Fuse::HitTestContext), ::app::Fuse::HitTestContext__typeof());
    inst->_ObjInit(windowPoint, callback);
    return inst;
}

}}
