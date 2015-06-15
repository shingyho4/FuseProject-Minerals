// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.Activating.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationArgs.h>
#include <app/Fuse.Navigation.NavTriggerUtil.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Navigation {

Activating__uType* Activating__typeof()
{
    static Activating__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Activating__uType*)::uAllocClassType(sizeof(Activating__uType), "Fuse.Navigation.Activating", ::app::Fuse::Navigation::NavigationTrigger__typeof());
        type->__fp_ForceUpdate = (void(*)(::app::Fuse::Navigation::NavigationTrigger*))Activating__ForceUpdate;
        type->__fp_OnNavigationStateChanged = (void(*)(::app::Fuse::Navigation::NavigationTrigger*, ::uObject*, ::app::Fuse::Navigation::NavigationArgs*))Activating__OnNavigationStateChanged;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Activating__ForceUpdate(Activating* __this)
{
    __this->BypassSeek(__this->InvertProgress(::app::Fuse::Navigation::Navigation__GetProgress(NULL, __this->PageContext())), 0);
}

double Activating__InvertProgress(Activating* __this, double p)
{
    return 1.0 - ::app::Uno::Math__Min(NULL, 1.0, ::app::Uno::Math__Abs(NULL, p));
}

void Activating__OnNavigationStateChanged(Activating* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state)
{
    int d = (::app::Uno::Math__Abs(NULL, ::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->Progress()) < ::app::Uno::Math__Abs(NULL, ::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->PreviousProgress())) ? 0 : 1;

    if ((state->Mode() != 1) && ::app::Fuse::Navigation::NavTriggerUtil__CrossesZero(NULL, state->Progress(), state->PreviousProgress()))
    {
        __this->Seek_1(1.0, ::app::Fuse::Navigation::NavTriggerUtil__Opposite(NULL, d));
    }

    double p = __this->InvertProgress(state->Progress());

    if (p == __this->Progress())
    {
        return;
    }

    if (state->Mode() == 0)
    {
        __this->PlayTo(p, d);
    }
    else if (state->Mode() == 2)
    {
        __this->Seek_1(p, d);
    }
    else
    {
        __this->BypassSeek(p, d);
    }
}

}}}
