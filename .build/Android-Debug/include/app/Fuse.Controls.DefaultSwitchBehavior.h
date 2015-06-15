// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_DEFAULT_SWITCH_BEHAVIOR_H__
#define __APP_FUSE_CONTROLS_DEFAULT_SWITCH_BEHAVIOR_H__

#include <app/Fuse.Triggers.ElementTrigger.h>
#include <app/Uno.Float2.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Switch; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Gestures { struct Clicker; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { struct ResizedArgs; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Controls {

struct DefaultSwitchBehavior;

struct DefaultSwitchBehavior__uType : ::app::Fuse::Triggers::ElementTrigger__uType
{
};

DefaultSwitchBehavior__uType* DefaultSwitchBehavior__typeof();

::app::Fuse::Elements::Element* DefaultSwitchBehavior__get_Bounds(DefaultSwitchBehavior* __this);
void DefaultSwitchBehavior__set_Bounds(DefaultSwitchBehavior* __this, ::app::Fuse::Elements::Element* value);
::app::Uno::Float2 DefaultSwitchBehavior__get_Size(DefaultSwitchBehavior* __this);
void DefaultSwitchBehavior__OnRooted_1(DefaultSwitchBehavior* __this, ::app::Fuse::Elements::Element* elm);
void DefaultSwitchBehavior__OnUnrooted_1(DefaultSwitchBehavior* __this, ::app::Fuse::Elements::Element* elm);
void DefaultSwitchBehavior__OnResized(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::ResizedArgs* args);
void DefaultSwitchBehavior__OnPointerPressed(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args);
void DefaultSwitchBehavior__OnCaptureLost(DefaultSwitchBehavior* __this);
void DefaultSwitchBehavior__OnPointerMoved(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args);
bool DefaultSwitchBehavior__ReleaseCapture(DefaultSwitchBehavior* __this);
void DefaultSwitchBehavior__OnPointerReleased(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args);
void DefaultSwitchBehavior__OnPointerTapped(DefaultSwitchBehavior* __this, ::uObject* a, int tapCount);
void DefaultSwitchBehavior__OnToggledChanged(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void DefaultSwitchBehavior___ObjInit_3(DefaultSwitchBehavior* __this);
DefaultSwitchBehavior* DefaultSwitchBehavior__New_1(::uStatic* __this);

struct DefaultSwitchBehavior : ::app::Fuse::Triggers::ElementTrigger
{
    ::uStrong< ::app::Fuse::Controls::Switch*> _switch;
    ::uStrong< ::app::Fuse::Elements::Element*> _bounds;
    ::uStrong< ::app::Fuse::Gestures::Clicker*> _clicker;
    ::app::Uno::Float2 _prevCoord;
    ::app::Uno::Float2 _currentCoord;
    ::app::Uno::Float2 _originalP;
    bool _captured;
    int _capturedIndex;

    void OnResized(::uObject* sender, ::app::Fuse::ResizedArgs* args) { DefaultSwitchBehavior__OnResized(this, sender, args); }
    void OnPointerPressed(::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args) { DefaultSwitchBehavior__OnPointerPressed(this, sender, args); }
    void OnCaptureLost() { DefaultSwitchBehavior__OnCaptureLost(this); }
    void OnPointerMoved(::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args) { DefaultSwitchBehavior__OnPointerMoved(this, sender, args); }
    bool ReleaseCapture() { return DefaultSwitchBehavior__ReleaseCapture(this); }
    void OnPointerReleased(::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args) { DefaultSwitchBehavior__OnPointerReleased(this, sender, args); }
    void OnPointerTapped(::uObject* a, int tapCount) { DefaultSwitchBehavior__OnPointerTapped(this, a, tapCount); }
    void OnToggledChanged(::uObject* sender, ::app::Uno::EventArgs* args) { DefaultSwitchBehavior__OnToggledChanged(this, sender, args); }
    void _ObjInit_3() { DefaultSwitchBehavior___ObjInit_3(this); }
    ::app::Fuse::Elements::Element* Bounds() { return DefaultSwitchBehavior__get_Bounds(this); }
    void Bounds(::app::Fuse::Elements::Element* value) { DefaultSwitchBehavior__set_Bounds(this, value); }
    ::app::Uno::Float2 Size();
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Controls {

inline ::app::Uno::Float2 DefaultSwitchBehavior::Size() { return DefaultSwitchBehavior__get_Size(this); }

}}}


#endif
