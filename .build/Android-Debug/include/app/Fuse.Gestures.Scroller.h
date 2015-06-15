// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_SCROLLER_H__
#define __APP_FUSE_GESTURES_SCROLLER_H__

#include <app/Fuse.Behavior.h>
#include <app/Uno.Float2.h>
#include <Uno/Uno.h>
namespace app { namespace Experimental { namespace Physics { struct PointerVelocity__float2; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Elements { struct RequestBringIntoViewArgs; } } }
namespace app { namespace Fuse { namespace Gestures { struct SwipeGestureHelper; } } }
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct Scroller;

extern ::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> Scroller___horizontalGesture;
extern ::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> Scroller___verticalGesture;

struct Scroller__uType : ::app::Fuse::Behavior__uType
{
};

Scroller__uType* Scroller__typeof();

void Scroller__OnRooted(Scroller* __this, ::app::Fuse::Node* elm);
void Scroller__OnUnrooted(Scroller* __this, ::app::Fuse::Node* elm);
void Scroller__CheckNeedUpdated(Scroller* __this, bool off);
void Scroller__OnPointerPressed(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args);
::app::Uno::Float2 Scroller__FromWindow(Scroller* __this, ::app::Uno::Float2 p);
void Scroller__OnLostCapture(Scroller* __this);
bool Scroller__HardCapture(Scroller* __this, ::app::Fuse::Input::PointerEventArgs* args);
void Scroller__OnPointerMoved(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args);
void Scroller__OnPointerReleased(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args);
void Scroller__OnRequestBringIntoView(Scroller* __this, ::uObject* sender, ::app::Fuse::Elements::RequestBringIntoViewArgs* args);
void Scroller__PerformBringIntoView(Scroller* __this);
void Scroller__Goto(Scroller* __this, ::app::Uno::Float2 position);
void Scroller__UpdateScrollMax(Scroller* __this);
void Scroller__OnUpdated(Scroller* __this);
void Scroller__MoveUser(Scroller* __this, bool started);
void Scroller___TypeInit(::uStatic* __this);
void Scroller___ObjInit_1(Scroller* __this);
Scroller* Scroller__New_1(::uStatic* __this);

struct Scroller : ::app::Fuse::Behavior
{
    ::uStrong< ::uObject*> _region;
    ::uStrong< ::app::Experimental::Physics::PointerVelocity__float2*> _velocity;
    bool _delayStart;
    ::uStrong< ::app::Fuse::Elements::Element*> _node;
    ::uStrong< ::uObject*> _scrollable;
    bool _hasUpdated;
    int _down;
    ::app::Uno::Float2 _pointerPos;
    ::app::Uno::Float2 _prevPos;
    ::app::Uno::Float2 _startPos;
    double _prevTime;
    ::app::Uno::Float2 _softCaptureStart;
    ::app::Uno::Float2 _softCaptureCurrent;
    bool _isHardCapture;
    ::uStrong< ::app::Fuse::Node*> _pendingBringIntoView;

    void CheckNeedUpdated(bool off) { Scroller__CheckNeedUpdated(this, off); }
    void OnPointerPressed(::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args) { Scroller__OnPointerPressed(this, sender, args); }
    ::app::Uno::Float2 FromWindow(::app::Uno::Float2 p);
    void OnLostCapture() { Scroller__OnLostCapture(this); }
    bool HardCapture(::app::Fuse::Input::PointerEventArgs* args) { return Scroller__HardCapture(this, args); }
    void OnPointerMoved(::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args) { Scroller__OnPointerMoved(this, sender, args); }
    void OnPointerReleased(::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args) { Scroller__OnPointerReleased(this, sender, args); }
    void OnRequestBringIntoView(::uObject* sender, ::app::Fuse::Elements::RequestBringIntoViewArgs* args) { Scroller__OnRequestBringIntoView(this, sender, args); }
    void PerformBringIntoView() { Scroller__PerformBringIntoView(this); }
    void Goto(::app::Uno::Float2 position);
    void UpdateScrollMax() { Scroller__UpdateScrollMax(this); }
    void OnUpdated() { Scroller__OnUpdated(this); }
    void MoveUser(bool started) { Scroller__MoveUser(this, started); }
    void _ObjInit_1() { Scroller___ObjInit_1(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Gestures {

inline ::app::Uno::Float2 Scroller::FromWindow(::app::Uno::Float2 p) { return Scroller__FromWindow(this, p); }
inline void Scroller::Goto(::app::Uno::Float2 position) { Scroller__Goto(this, position); }

}}}


#endif
