// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.NavigationArgs.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Navigation {

NavigationArgs__uType* NavigationArgs__typeof()
{
    static NavigationArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NavigationArgs__uType*)::uAllocClassType(sizeof(NavigationArgs__uType), "Fuse.Navigation.NavigationArgs", ::app::Uno::EventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int NavigationArgs__get_Mode(NavigationArgs* __this)
{
    return __this->_Mode;
}

void NavigationArgs__set_Mode(NavigationArgs* __this, int value)
{
    __this->_Mode = value;
}

double NavigationArgs__get_Progress(NavigationArgs* __this)
{
    return __this->_Progress;
}

void NavigationArgs__set_Progress(NavigationArgs* __this, double value)
{
    __this->_Progress = value;
}

double NavigationArgs__get_PreviousProgress(NavigationArgs* __this)
{
    return __this->_PreviousProgress;
}

void NavigationArgs__set_PreviousProgress(NavigationArgs* __this, double value)
{
    __this->_PreviousProgress = value;
}

void NavigationArgs___ObjInit_1(NavigationArgs* __this, double progress, double prevProgress, int mode)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Progress(progress);
    __this->PreviousProgress(prevProgress);
    __this->Mode(mode);
}

NavigationArgs* NavigationArgs__New_2(::uStatic* __this, double progress, double prevProgress, int mode)
{
    NavigationArgs* inst = (::app::Fuse::Navigation::NavigationArgs*)::uAllocObject(sizeof(::app::Fuse::Navigation::NavigationArgs), ::app::Fuse::Navigation::NavigationArgs__typeof());
    inst->_ObjInit_1(progress, prevProgress, mode);
    return inst;
}

}}}
