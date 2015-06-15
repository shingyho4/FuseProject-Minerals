// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_ENABLED_DISABLED_TRIGGER_H__
#define __APP_FUSE_TRIGGERS_WHILE_ENABLED_DISABLED_TRIGGER_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileEnabledDisabledTrigger;

struct WhileEnabledDisabledTrigger__uType : ::app::Fuse::Triggers::Trigger__uType
{
    bool(*__fp_get_IsActive)(WhileEnabledDisabledTrigger*);
};

WhileEnabledDisabledTrigger__uType* WhileEnabledDisabledTrigger__typeof();

void WhileEnabledDisabledTrigger__OnRooted(WhileEnabledDisabledTrigger* __this, ::app::Fuse::Node* elm);
void WhileEnabledDisabledTrigger__OnUnrooted(WhileEnabledDisabledTrigger* __this, ::app::Fuse::Node* elm);
void WhileEnabledDisabledTrigger__OnIsEnabledChanged(WhileEnabledDisabledTrigger* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void WhileEnabledDisabledTrigger___ObjInit_2(WhileEnabledDisabledTrigger* __this);

struct WhileEnabledDisabledTrigger : ::app::Fuse::Triggers::Trigger
{
    void OnIsEnabledChanged(::uObject* sender, ::app::Uno::EventArgs* args) { WhileEnabledDisabledTrigger__OnIsEnabledChanged(this, sender, args); }
    void _ObjInit_2() { WhileEnabledDisabledTrigger___ObjInit_2(this); }
    bool IsActive() { return (((WhileEnabledDisabledTrigger__uType*)this->__obj_type)->__fp_get_IsActive)(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Triggers {

}}}


#endif
