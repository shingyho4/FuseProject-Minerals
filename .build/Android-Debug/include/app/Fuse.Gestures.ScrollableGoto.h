// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_SCROLLABLE_GOTO_H__
#define __APP_FUSE_GESTURES_SCROLLABLE_GOTO_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Uno.Float2.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct ScrollableGoto;

struct ScrollableGoto__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

ScrollableGoto__uType* ScrollableGoto__typeof();

::uObject* ScrollableGoto__get_Target(ScrollableGoto* __this);
void ScrollableGoto__set_Target(ScrollableGoto* __this, ::uObject* value);
void ScrollableGoto__Perform(ScrollableGoto* __this, ::app::Fuse::Node* target);

struct ScrollableGoto : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::app::Uno::Float2 _position;
    bool _hasPosition;
    ::app::Uno::Float2 _relativePosition;
    bool _hasRelativePosition;
    ::uStrong< ::uObject*> _Target;

    ::uObject* Target() { return ScrollableGoto__get_Target(this); }
    void Target(::uObject* value) { ScrollableGoto__set_Target(this, value); }
};

}}}


#endif
