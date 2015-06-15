// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_STATE_GROUP_H__
#define __APP_FUSE_TRIGGERS_STATE_GROUP_H__

#include <app/Fuse.Behavior.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Fuse { namespace Triggers { struct Trigger; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct StateGroup;

struct StateGroup__uType : ::app::Fuse::Behavior__uType
{
};

StateGroup__uType* StateGroup__typeof();

int StateGroup__get_Transition(StateGroup* __this);
void StateGroup__set_Transition(StateGroup* __this, int value);
void StateGroup__OnUnrooted(StateGroup* __this, ::app::Fuse::Node* elm);
void StateGroup__OnRooted(StateGroup* __this, ::app::Fuse::Node* elm);
void StateGroup__OnPlaybackDone(StateGroup* __this, ::app::Fuse::Triggers::Trigger* which);
void StateGroup__CheckAllDone(StateGroup* __this);

struct StateGroup : ::app::Fuse::Behavior
{
    ::uStrong< ::uObject*> _states;
    ::uStrong< ::app::Fuse::Triggers::State*> _active;
    int _transition;

    void OnPlaybackDone(::app::Fuse::Triggers::Trigger* which) { StateGroup__OnPlaybackDone(this, which); }
    void CheckAllDone() { StateGroup__CheckAllDone(this); }
    int Transition() { return StateGroup__get_Transition(this); }
    void Transition(int value) { StateGroup__set_Transition(this, value); }
};

}}}


#endif
