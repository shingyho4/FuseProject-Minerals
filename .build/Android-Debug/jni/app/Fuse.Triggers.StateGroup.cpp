// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Fuse.Triggers.StateGroup.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Action__Fuse_Triggers_Trigger.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_State.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Triggers {

StateGroup__uType* StateGroup__typeof()
{
    static StateGroup__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (StateGroup__uType*)::uAllocClassType(sizeof(StateGroup__uType), "Fuse.Triggers.StateGroup", ::app::Fuse::Behavior__typeof(), 0, 2);
        type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StateGroup__OnUnrooted;
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StateGroup__OnRooted;

        type->StrongRefOffsets[0] = offsetof(StateGroup, _states);
        type->StrongRefOffsets[1] = offsetof(StateGroup, _active);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_states";
        type->StrongRefNames[1] = "_active";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int StateGroup__get_Transition(StateGroup* __this)
{
    return __this->_transition;
}

void StateGroup__set_Transition(StateGroup* __this, int value)
{
    __this->_transition = value;
}

void StateGroup__OnUnrooted(StateGroup* __this, ::app::Fuse::Node* elm)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State::GetEnumerator(::uPtr< ::uObject*>(__this->_states)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Triggers::State* state = ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::app::Fuse::Triggers::State*>(state)->remove_PlaybackDone(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Triggers_Trigger__typeof(), (const void*)::app::Fuse::Triggers::StateGroup__OnPlaybackDone, __this));
        state->Unrooted(elm);
    }
}

void StateGroup__OnRooted(StateGroup* __this, ::app::Fuse::Node* elm)
{
    if ((__this->_active == NULL) && (::app::Uno::Collections::ICollection__Fuse_Triggers_State::Count(::uPtr< ::uObject*>(__this->_states)) > 0))
    {
        __this->_active = ::app::Uno::Collections::IList__Fuse_Triggers_State::Item(::uPtr< ::uObject*>(__this->_states), 0);
    }

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State::GetEnumerator(::uPtr< ::uObject*>(__this->_states)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Triggers::State* state = ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State::Current(::uPtr< ::uObject*>(enum_124));
        ::uPtr< ::app::Fuse::Triggers::State*>(state)->On(state == __this->_active);
        state->add_PlaybackDone(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Triggers_Trigger__typeof(), (const void*)::app::Fuse::Triggers::StateGroup__OnPlaybackDone, __this));
        state->Rooted(elm);
    }
}

void StateGroup__OnPlaybackDone(StateGroup* __this, ::app::Fuse::Triggers::Trigger* which)
{
    if (__this->Transition() == 1)
    {
        __this->CheckAllDone();
    }
}

void StateGroup__CheckAllDone(StateGroup* __this)
{
    bool all = true;

    for (::uObject* enum_127 = ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State::GetEnumerator(::uPtr< ::uObject*>(__this->_states)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_127)); )
    {
        ::app::Fuse::Triggers::State* state = ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State::Current(::uPtr< ::uObject*>(enum_127));

        if (::uPtr< ::app::Fuse::Triggers::State*>(state)->Progress_1() > 0.0)
        {
            all = false;
        }
    }

    if (all && (__this->_active != NULL))
    {
        ::uPtr< ::app::Fuse::Triggers::State*>(__this->_active)->On(true);
    }
}

}}}
