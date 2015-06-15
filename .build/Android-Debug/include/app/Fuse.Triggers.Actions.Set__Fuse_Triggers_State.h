// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_TRIGGERS_STATE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_TRIGGERS_STATE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_State; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Triggers_State;

struct Set__Fuse_Triggers_State__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Triggers_State__uType* Set__Fuse_Triggers_State__typeof();

::app::Uno::UX::Property__Fuse_Triggers_State* Set__Fuse_Triggers_State__get_Target(Set__Fuse_Triggers_State* __this);
void Set__Fuse_Triggers_State__set_Target(Set__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* value);
::app::Fuse::Triggers::State* Set__Fuse_Triggers_State__get_Value(Set__Fuse_Triggers_State* __this);
void Set__Fuse_Triggers_State__set_Value(Set__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value);
void Set__Fuse_Triggers_State__Perform(Set__Fuse_Triggers_State* __this, ::app::Fuse::Node* target);

struct Set__Fuse_Triggers_State : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Triggers_State*> _Target;
    ::uStrong< ::app::Fuse::Triggers::State*> _Value;

    ::app::Uno::UX::Property__Fuse_Triggers_State* Target() { return Set__Fuse_Triggers_State__get_Target(this); }
    void Target(::app::Uno::UX::Property__Fuse_Triggers_State* value) { Set__Fuse_Triggers_State__set_Target(this, value); }
    ::app::Fuse::Triggers::State* Value() { return Set__Fuse_Triggers_State__get_Value(this); }
    void Value(::app::Fuse::Triggers::State* value) { Set__Fuse_Triggers_State__set_Value(this, value); }
};

}}}}


#endif
