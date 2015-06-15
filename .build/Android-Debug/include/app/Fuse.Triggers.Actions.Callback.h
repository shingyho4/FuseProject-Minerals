// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_CALLBACK_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_CALLBACK_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Callback;

struct Callback__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Callback__uType* Callback__typeof();

::uDelegate* Callback__get_Action(Callback* __this);
void Callback__set_Action(Callback* __this, ::uDelegate* value);
void Callback__Perform(Callback* __this, ::app::Fuse::Node* target);

struct Callback : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uDelegate*> _Action;

    ::uDelegate* Action() { return Callback__get_Action(this); }
    void Action(::uDelegate* value) { Callback__set_Action(this, value); }
};

}}}}


#endif
