// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_NODE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_SET__FUSE_NODE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Node; } } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Set__Fuse_Node;

struct Set__Fuse_Node__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Set__Fuse_Node__uType* Set__Fuse_Node__typeof();

::app::Uno::UX::Property__Fuse_Node* Set__Fuse_Node__get_Target(Set__Fuse_Node* __this);
void Set__Fuse_Node__set_Target(Set__Fuse_Node* __this, ::app::Uno::UX::Property__Fuse_Node* value);
::app::Fuse::Node* Set__Fuse_Node__get_Value(Set__Fuse_Node* __this);
void Set__Fuse_Node__set_Value(Set__Fuse_Node* __this, ::app::Fuse::Node* value);
void Set__Fuse_Node__Perform(Set__Fuse_Node* __this, ::app::Fuse::Node* target);

struct Set__Fuse_Node : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Node*> _Target;
    ::uStrong< ::app::Fuse::Node*> _Value;

    ::app::Uno::UX::Property__Fuse_Node* Target() { return Set__Fuse_Node__get_Target(this); }
    void Target(::app::Uno::UX::Property__Fuse_Node* value) { Set__Fuse_Node__set_Target(this, value); }
    ::app::Fuse::Node* Value() { return Set__Fuse_Node__get_Value(this); }
    void Value(::app::Fuse::Node* value) { Set__Fuse_Node__set_Value(this, value); }
};

}}}}


#endif
