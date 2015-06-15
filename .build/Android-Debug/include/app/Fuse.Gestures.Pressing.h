// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_PRESSING_H__
#define __APP_FUSE_GESTURES_PRESSING_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct Pressing;

struct Pressing__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

Pressing__uType* Pressing__typeof();

int Pressing__get_PointerType(Pressing* __this);
void Pressing__set_PointerType(Pressing* __this, int value);
void Pressing__OnRooted(Pressing* __this, ::app::Fuse::Node* elm);
void Pressing__OnUnrooted(Pressing* __this, ::app::Fuse::Node* elm);
void Pressing__OnPointerPressed(Pressing* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args);
void Pressing__OnPointerReleased(Pressing* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args);
void Pressing___ObjInit_2(Pressing* __this);
Pressing* Pressing__New_1(::uStatic* __this);

struct Pressing : ::app::Fuse::Triggers::Trigger
{
    int _pointerType;

    void OnPointerPressed(::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args) { Pressing__OnPointerPressed(this, sender, args); }
    void OnPointerReleased(::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args) { Pressing__OnPointerReleased(this, sender, args); }
    void _ObjInit_2() { Pressing___ObjInit_2(this); }
    int PointerType() { return Pressing__get_PointerType(this); }
    void PointerType(int value) { Pressing__set_PointerType(this, value); }
};

}}}


#endif
