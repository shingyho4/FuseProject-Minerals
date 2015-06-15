// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Action.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Input {

PointerEventArgs__uType* PointerEventArgs__typeof()
{
    static PointerEventArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PointerEventArgs__uType*)::uAllocClassType(sizeof(PointerEventArgs__uType), "Fuse.Input.PointerEventArgs", ::app::Fuse::Input::InputEventArgs__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(PointerEventArgs, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Input::PointerEventData* PointerEventArgs__get_Data(PointerEventArgs* __this)
{
    return __this->_data;
}

::app::Uno::Float2 PointerEventArgs__get_WindowPoint(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->WindowPoint;
}

int PointerEventArgs__get_PointIndex(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->PointIndex;
}

int PointerEventArgs__get_PointerType(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->PointerType;
}

bool PointerEventArgs__get_IsPrimary(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->IsPrimary;
}

bool PointerEventArgs__get_IsHardCaptured(PointerEventArgs* __this)
{
    return ::app::Fuse::Input::Pointer__IsHardCaptured(NULL, __this->PointIndex());
}

bool PointerEventArgs__TryHardCapture(PointerEventArgs* __this, ::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode)
{
    if (!__this->IsHardCaptured())
    {
        return ::app::Fuse::Input::Pointer__HardCapture(NULL, __this->PointIndex(), (captureNode != NULL) ? captureNode : __this->Node(), identity, lostCallback);
    }

    return false;
}

bool PointerEventArgs__TrySoftCapture(PointerEventArgs* __this, ::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode)
{
    return ::app::Fuse::Input::Pointer__SoftCapture(NULL, __this->PointIndex(), (captureNode != NULL) ? captureNode : __this->Node(), identity, lostCallback);
}

void PointerEventArgs__ReleaseSoftCapture(PointerEventArgs* __this, ::uObject* behavior)
{
    ::app::Fuse::Input::Pointer__ReleaseSoftCapture(NULL, __this->PointIndex(), behavior);
}

void PointerEventArgs__ReleaseHardCapture(PointerEventArgs* __this, ::uObject* behavior)
{
    if (__this->IsHardCapturedTo(behavior))
    {
        ::app::Fuse::Input::Pointer__ReleaseHardCapture(NULL, __this->PointIndex());
    }
}

bool PointerEventArgs__IsSoftCapturedTo(PointerEventArgs* __this, ::uObject* behavior)
{
    return ::app::Fuse::Input::Pointer__IsSoftCaptured_1(NULL, __this->PointIndex(), behavior);
}

bool PointerEventArgs__IsHardCapturedTo(PointerEventArgs* __this, ::uObject* behavior)
{
    return ::app::Fuse::Input::Pointer__IsHardCaptured_1(NULL, __this->PointIndex(), behavior);
}

void PointerEventArgs___ObjInit_2(PointerEventArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::InputEventArgs___ObjInit_1(__this, node);
    __this->_data = data;
}

}}}
