// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_TAPPED_H__
#define __APP_FUSE_GESTURES_TAPPED_H__

#include <app/Fuse.Gestures.ClickerTrigger.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct Tapped;

struct Tapped__uType : ::app::Fuse::Gestures::ClickerTrigger__uType
{
};

Tapped__uType* Tapped__typeof();

void Tapped__OnRooted(Tapped* __this, ::app::Fuse::Node* elm);
void Tapped__OnUnrooted(Tapped* __this, ::app::Fuse::Node* elm);
void Tapped__OnTapped(Tapped* __this, ::app::Fuse::Input::PointerEventArgs* args, int tapCount);
void Tapped___ObjInit_3(Tapped* __this);
Tapped* Tapped__New_2(::uStatic* __this);

struct Tapped : ::app::Fuse::Gestures::ClickerTrigger
{
    ::uStrong< ::uDelegate*> Handler;

    void OnTapped(::app::Fuse::Input::PointerEventArgs* args, int tapCount) { Tapped__OnTapped(this, args, tapCount); }
    void _ObjInit_3() { Tapped___ObjInit_3(this); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Gestures {

}}}


#endif
