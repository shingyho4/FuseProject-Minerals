// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_FOCUSING_H__
#define __APP_FUSE_TRIGGERS_FOCUSING_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct Focusing;

struct Focusing__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

Focusing__uType* Focusing__typeof();

void Focusing__OnRooted(Focusing* __this, ::app::Fuse::Node* elm);
void Focusing__OnUnrooted(Focusing* __this, ::app::Fuse::Node* elm);
void Focusing__OnGotFocus(Focusing* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void Focusing__OnLostFocus(Focusing* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void Focusing___ObjInit_2(Focusing* __this);
Focusing* Focusing__New_1(::uStatic* __this);

struct Focusing : ::app::Fuse::Triggers::Trigger
{
    void OnGotFocus(::uObject* sender, ::app::Uno::EventArgs* args) { Focusing__OnGotFocus(this, sender, args); }
    void OnLostFocus(::uObject* sender, ::app::Uno::EventArgs* args) { Focusing__OnLostFocus(this, sender, args); }
    void _ObjInit_2() { Focusing___ObjInit_2(this); }
};

}}}


#endif
