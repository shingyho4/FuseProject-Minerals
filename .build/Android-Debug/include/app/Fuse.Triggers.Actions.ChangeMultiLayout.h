// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_CHANGE_MULTI_LAYOUT_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_CHANGE_MULTI_LAYOUT_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct ChangeMultiLayout;

struct ChangeMultiLayout__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

ChangeMultiLayout__uType* ChangeMultiLayout__typeof();

::app::Fuse::Elements::Element* ChangeMultiLayout__get_Target(ChangeMultiLayout* __this);
void ChangeMultiLayout__set_Target(ChangeMultiLayout* __this, ::app::Fuse::Elements::Element* value);
void ChangeMultiLayout__Perform(ChangeMultiLayout* __this, ::app::Fuse::Node* n);

struct ChangeMultiLayout : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::app::Fuse::Elements::Element*> _Target;

    ::app::Fuse::Elements::Element* Target() { return ChangeMultiLayout__get_Target(this); }
    void Target(::app::Fuse::Elements::Element* value) { ChangeMultiLayout__set_Target(this, value); }
};

}}}}


#endif
