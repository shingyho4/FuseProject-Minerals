// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_STATE_H__
#define __APP_FUSE_TRIGGERS_STATE_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct State;

struct State__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

State__uType* State__typeof();

bool State__get_On(State* __this);
void State__set_On(State* __this, bool value);
double State__get_Progress_1(State* __this);
void State__OnRooted(State* __this, ::app::Fuse::Node* elm);

struct State : ::app::Fuse::Triggers::Trigger
{
    bool _on;

    bool On() { return State__get_On(this); }
    void On(bool value) { State__set_On(this, value); }
    double Progress_1() { return State__get_Progress_1(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>

namespace app {
namespace Fuse {
namespace Triggers {

}}}


#endif
