// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.DefaultNavigationAnimatorPlayer.h>
#include <app/Fuse.Navigation.INavigationAnimatorPlayer.h>
#include <app/Fuse.Navigation.NavigationTween.h>
#include <app/Fuse.Navigation.PlayerFactory.h>
#include <app/Fuse.Navigation.ProgressSpan.h>
#include <app/Fuse.Navigation.ProgressTimer.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__double.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IList__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Navigation {

PlayerFactory__uType* PlayerFactory__typeof()
{
    static PlayerFactory__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PlayerFactory__uType*)::uAllocClassType(sizeof(PlayerFactory__uType), "Fuse.Navigation.PlayerFactory");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* PlayerFactory__Start(::uStatic* __this, double targetProgress, double startProgress, ::uObject* animators, ::uDelegate* doneCallback, ::uDelegate* progressSetterCallback, ::app::Fuse::Navigation::NavigationTween* navigationTween)
{
    double duration = (targetProgress > startProgress) ? ::uPtr< ::app::Fuse::Navigation::NavigationTween*>(navigationTween)->Duration() : ::uPtr< ::app::Fuse::Navigation::NavigationTween*>(navigationTween)->DurationBack();
    int easing = (targetProgress > startProgress) ? navigationTween->Easing() : navigationTween->EasingBack();
    int playDirection = (targetProgress > startProgress) ? 0 : 1;
    double actualStartProgress = (playDirection == 0) ? startProgress : targetProgress;
    double actualTargetProgress = (playDirection == 0) ? targetProgress : startProgress;
    ::app::Fuse::Navigation::ProgressSpan* progressSpan = ::app::Fuse::Navigation::ProgressSpan__New_1(NULL, actualStartProgress, actualTargetProgress);
    ::app::Fuse::Navigation::ProgressTimer* progressTimer = ::app::Fuse::Navigation::ProgressTimer__Start(NULL, duration, progressSpan, easing, playDirection);
    return (::uObject*)::app::Fuse::Navigation::DefaultNavigationAnimatorPlayer__New_1(NULL, progressTimer, animators, progressSetterCallback, doneCallback);
}

}}}
