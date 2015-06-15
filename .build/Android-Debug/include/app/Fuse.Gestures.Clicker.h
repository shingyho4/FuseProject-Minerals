// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_CLICKER_H__
#define __APP_FUSE_GESTURES_CLICKER_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct Clicker;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Clicker___clickerProperty;

struct Clicker__uType : ::uClassType
{
};

Clicker__uType* Clicker__typeof();

Clicker* Clicker__AttachClicker(::uStatic* __this, ::app::Fuse::Node* elm);
void Clicker__Detach(Clicker* __this);
void Clicker__OnRooted(Clicker* __this);
void Clicker__OnUnrooted(Clicker* __this);
void Clicker__OnPointerPressed(Clicker* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args);
void Clicker__OnPointerMoved(Clicker* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args);
bool Clicker__NeedCapture(Clicker* __this);
void Clicker__OnPointerReleased(Clicker* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args);
void Clicker__OnUpdate(Clicker* __this, ::uObject* s, ::uObject* a);
void Clicker__DoneCapture(Clicker* __this);
void Clicker__ReleaseUpdate(Clicker* __this);
void Clicker__OnLostCapture(Clicker* __this);
void Clicker___TypeInit(::uStatic* __this);
void Clicker___ObjInit(Clicker* __this, ::app::Fuse::Node* node);
Clicker* Clicker__New_1(::uStatic* __this, ::app::Fuse::Node* node);
void Clicker__add_TappedEvent(Clicker* __this, ::uDelegate* value);
void Clicker__remove_TappedEvent(Clicker* __this, ::uDelegate* value);

struct Clicker : ::uObject
{
    float _maxTapDistanceMoved;
    float _maxTapTimeHeld;
    float _maxDoubleInterval;
    float _longPressTimeout;
    int _attachCount;
    ::uStrong< ::app::Fuse::Node*> _node;
    ::app::Uno::Float2 _startCoord;
    double _startTime;
    int _down;
    int _tapCount;
    int _clickCount;
    double _lastUpTime;
    bool _maybeTap;
    bool _hasUpdate;
    ::uStrong< ::app::Fuse::Input::PointerEventArgs*> _lastArgs;
    ::uStrong< ::uDelegate*> ClickedEvent;
    ::uStrong< ::uDelegate*> LongPressedEvent;
    ::uStrong< ::uDelegate*> TappedEvent;

    void Detach() { Clicker__Detach(this); }
    void OnRooted() { Clicker__OnRooted(this); }
    void OnUnrooted() { Clicker__OnUnrooted(this); }
    void OnPointerPressed(::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args) { Clicker__OnPointerPressed(this, sender, args); }
    void OnPointerMoved(::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args) { Clicker__OnPointerMoved(this, sender, args); }
    bool NeedCapture() { return Clicker__NeedCapture(this); }
    void OnPointerReleased(::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args) { Clicker__OnPointerReleased(this, sender, args); }
    void OnUpdate(::uObject* s, ::uObject* a) { Clicker__OnUpdate(this, s, a); }
    void DoneCapture() { Clicker__DoneCapture(this); }
    void ReleaseUpdate() { Clicker__ReleaseUpdate(this); }
    void OnLostCapture() { Clicker__OnLostCapture(this); }
    void _ObjInit(::app::Fuse::Node* node) { Clicker___ObjInit(this, node); }
    void add_TappedEvent(::uDelegate* value) { Clicker__add_TappedEvent(this, value); }
    void remove_TappedEvent(::uDelegate* value) { Clicker__remove_TappedEvent(this, value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Gestures {

}}}


#endif
