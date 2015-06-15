// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Uno.Action.h>

namespace app {
namespace Fuse {
namespace Triggers {

State__uType* State__typeof()
{
    static State__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (State__uType*)::uAllocClassType(sizeof(State__uType), "Fuse.Triggers.State", ::app::Fuse::Triggers::Trigger__typeof());
        type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))State__OnRooted;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool State__get_On(State* __this)
{
    return __this->_on;
}

void State__set_On(State* __this, bool value)
{
    if (__this->_on == value)
    {
        return;
    }

    __this->_on = value;

    if (__this->Node() != NULL)
    {
        if (__this->_on)
        {
            __this->Activate(NULL);
        }
        else
        {
            __this->Deactivate();
        }
    }
}

double State__get_Progress_1(State* __this)
{
    return ::app::Fuse::Triggers::Trigger__get_Progress(__this);
}

void State__OnRooted(State* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);

    if (__this->_on)
    {
        __this->BypassActivate();
    }
}

}}}
