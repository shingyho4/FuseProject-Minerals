// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.NavigationTween.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Navigation {

NavigationTween__uType* NavigationTween__typeof()
{
    static NavigationTween__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NavigationTween__uType*)::uAllocClassType(sizeof(NavigationTween__uType), "Fuse.Navigation.NavigationTween", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int NavigationTween__get_Easing(NavigationTween* __this)
{
    return __this->_easing;
}

void NavigationTween__set_Easing(NavigationTween* __this, int value)
{
    __this->_easing = value;
}

double NavigationTween__get_Duration(NavigationTween* __this)
{
    return __this->_duration;
}

void NavigationTween__set_Duration(NavigationTween* __this, double value)
{
    __this->_duration = value;
}

int NavigationTween__get_EasingBack(NavigationTween* __this)
{
    if (__this->_hasEasingBack)
    {
        return __this->_easingBack;
    }

    return __this->Easing();
}

void NavigationTween__set_EasingBack(NavigationTween* __this, int value)
{
    __this->_easingBack = value;
    __this->_hasEasingBack = true;
}

double NavigationTween__get_DurationBack(NavigationTween* __this)
{
    if (__this->_hasDurationBack)
    {
        return __this->_durationBack;
    }

    return __this->Duration();
}

void NavigationTween__set_DurationBack(NavigationTween* __this, double value)
{
    __this->_durationBack = value;
    __this->_hasDurationBack = true;
}

}}}
