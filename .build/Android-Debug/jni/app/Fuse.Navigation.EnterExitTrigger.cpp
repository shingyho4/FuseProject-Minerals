// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.EnterExitTrigger.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationArgs.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {
namespace Navigation {

EnterExitTrigger__uType* EnterExitTrigger__typeof()
{
    static EnterExitTrigger__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EnterExitTrigger__uType*)::uAllocClassType(sizeof(EnterExitTrigger__uType), "Fuse.Navigation.EnterExitTrigger", ::app::Fuse::Navigation::NavigationTrigger__typeof());
        type->__fp_ForceUpdate = (void(*)(::app::Fuse::Navigation::NavigationTrigger*))EnterExitTrigger__ForceUpdate;
        type->__fp_OnNavigationStateChanged = (void(*)(::app::Fuse::Navigation::NavigationTrigger*, ::uObject*, ::app::Fuse::Navigation::NavigationArgs*))EnterExitTrigger__OnNavigationStateChanged;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void EnterExitTrigger__ForceUpdate(EnterExitTrigger* __this)
{
    double p = ::app::Fuse::Navigation::Navigation__GetProgress(NULL, __this->PageContext());

    if (__this->IsMatch(p))
    {
        __this->BypassSeek(::app::Uno::Math__Abs(NULL, p), 0);
    }
}

bool EnterExitTrigger__IsMatch(EnterExitTrigger* __this, double progress)
{
    return (__this->PositiveProgress && (progress >= 0.0)) || (__this->NegativeProgress && (progress <= 0.0));
}

void EnterExitTrigger__OnNavigationStateChanged(EnterExitTrigger* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state)
{
    int d = (::app::Uno::Math__Abs(NULL, ::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->PreviousProgress()) < ::app::Uno::Math__Abs(NULL, ::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->Progress())) ? 0 : 1;

    if (!__this->IsMatch(state->Progress()))
    {
        __this->Seek_1(0.0, d);
        return;
    }

    double p = ::app::Uno::Math__Abs(NULL, state->Progress());

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

void EnterExitTrigger___ObjInit_3(EnterExitTrigger* __this)
{
    ::app::Fuse::Navigation::NavigationTrigger___ObjInit_2(__this);
}

}}}
