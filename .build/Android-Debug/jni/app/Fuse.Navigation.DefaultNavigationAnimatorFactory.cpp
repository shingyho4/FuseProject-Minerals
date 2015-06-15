// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.DefaultNavigationAnimator.h>
#include <app/Fuse.Navigation.DefaultNavigationAnimatorFactory.h>
#include <app/Fuse.Navigation.INavigationAnimator.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IList__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.List__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Navigation {

DefaultNavigationAnimatorFactory__uType* DefaultNavigationAnimatorFactory__typeof()
{
    static DefaultNavigationAnimatorFactory__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DefaultNavigationAnimatorFactory__uType*)::uAllocClassType(sizeof(DefaultNavigationAnimatorFactory__uType), "Fuse.Navigation.DefaultNavigationAnimatorFactory");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* DefaultNavigationAnimatorFactory__GetAnimators(::uStatic* __this, ::uObject* panel)
{
    ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator* animators = ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator__New_2(NULL, ::app::Fuse::Navigation::INavigationPanel::ChildCount(::uPtr< ::uObject*>(panel)));

    for (int i = 0; i < ::app::Fuse::Navigation::INavigationPanel::ChildCount(panel); i++)
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator*>(animators)->Add((::uObject*)::app::Fuse::Navigation::DefaultNavigationAnimator__New_1(NULL, i, ::app::Fuse::Navigation::INavigationPanel::GetChild(panel, i)));
    }

    return (::uObject*)animators;
}

}}}
