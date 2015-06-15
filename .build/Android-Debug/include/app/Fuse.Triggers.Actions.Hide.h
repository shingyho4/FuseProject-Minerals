// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_HIDE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_HIDE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Hide;

struct Hide__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Hide__uType* Hide__typeof();

void Hide__Perform(Hide* __this, ::app::Fuse::Node* target);

struct Hide : ::app::Fuse::Triggers::Actions::TriggerAction
{
};

}}}}


#endif
