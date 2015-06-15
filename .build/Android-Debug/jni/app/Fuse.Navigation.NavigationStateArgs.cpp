// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.NavigationStateArgs.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Navigation {

NavigationStateArgs__uType* NavigationStateArgs__typeof()
{
    static NavigationStateArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (NavigationStateArgs__uType*)::uAllocClassType(sizeof(NavigationStateArgs__uType), "Fuse.Navigation.NavigationStateArgs", ::app::Uno::EventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int NavigationStateArgs__get_State(NavigationStateArgs* __this)
{
    return __this->_State;
}

void NavigationStateArgs__set_State(NavigationStateArgs* __this, int value)
{
    __this->_State = value;
}

void NavigationStateArgs___ObjInit_1(NavigationStateArgs* __this)
{
    ::app::Uno::EventArgs___ObjInit(__this);
}

NavigationStateArgs* NavigationStateArgs__New_2(::uStatic* __this)
{
    NavigationStateArgs* inst = (::app::Fuse::Navigation::NavigationStateArgs*)::uAllocObject(sizeof(::app::Fuse::Navigation::NavigationStateArgs), ::app::Fuse::Navigation::NavigationStateArgs__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
