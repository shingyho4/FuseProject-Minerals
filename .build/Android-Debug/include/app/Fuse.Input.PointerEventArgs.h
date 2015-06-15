// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_EVENT_ARGS_H__
#define __APP_FUSE_INPUT_POINTER_EVENT_ARGS_H__

#include <app/Fuse.Input.InputEventArgs.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventData; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Input {

struct PointerEventArgs;

struct PointerEventArgs__uType : ::app::Fuse::Input::InputEventArgs__uType
{
};

PointerEventArgs__uType* PointerEventArgs__typeof();

::app::Fuse::Input::PointerEventData* PointerEventArgs__get_Data(PointerEventArgs* __this);
::app::Uno::Float2 PointerEventArgs__get_WindowPoint(PointerEventArgs* __this);
int PointerEventArgs__get_PointIndex(PointerEventArgs* __this);
int PointerEventArgs__get_PointerType(PointerEventArgs* __this);
bool PointerEventArgs__get_IsPrimary(PointerEventArgs* __this);
bool PointerEventArgs__get_IsHardCaptured(PointerEventArgs* __this);
bool PointerEventArgs__TryHardCapture(PointerEventArgs* __this, ::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode);
bool PointerEventArgs__TrySoftCapture(PointerEventArgs* __this, ::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode);
void PointerEventArgs__ReleaseSoftCapture(PointerEventArgs* __this, ::uObject* behavior);
void PointerEventArgs__ReleaseHardCapture(PointerEventArgs* __this, ::uObject* behavior);
bool PointerEventArgs__IsSoftCapturedTo(PointerEventArgs* __this, ::uObject* behavior);
bool PointerEventArgs__IsHardCapturedTo(PointerEventArgs* __this, ::uObject* behavior);
void PointerEventArgs___ObjInit_2(PointerEventArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node);

struct PointerEventArgs : ::app::Fuse::Input::InputEventArgs
{
    ::uStrong< ::app::Fuse::Input::PointerEventData*> _data;

    bool TryHardCapture(::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode) { return PointerEventArgs__TryHardCapture(this, identity, lostCallback, captureNode); }
    bool TrySoftCapture(::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode) { return PointerEventArgs__TrySoftCapture(this, identity, lostCallback, captureNode); }
    void ReleaseSoftCapture(::uObject* behavior) { PointerEventArgs__ReleaseSoftCapture(this, behavior); }
    void ReleaseHardCapture(::uObject* behavior) { PointerEventArgs__ReleaseHardCapture(this, behavior); }
    bool IsSoftCapturedTo(::uObject* behavior) { return PointerEventArgs__IsSoftCapturedTo(this, behavior); }
    bool IsHardCapturedTo(::uObject* behavior) { return PointerEventArgs__IsHardCapturedTo(this, behavior); }
    void _ObjInit_2(::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node) { PointerEventArgs___ObjInit_2(this, data, node); }
    ::app::Fuse::Input::PointerEventData* Data() { return PointerEventArgs__get_Data(this); }
    ::app::Uno::Float2 WindowPoint();
    int PointIndex() { return PointerEventArgs__get_PointIndex(this); }
    int PointerType() { return PointerEventArgs__get_PointerType(this); }
    bool IsPrimary() { return PointerEventArgs__get_IsPrimary(this); }
    bool IsHardCaptured() { return PointerEventArgs__get_IsHardCaptured(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Input {

inline ::app::Uno::Float2 PointerEventArgs::WindowPoint() { return PointerEventArgs__get_WindowPoint(this); }

}}}


#endif
