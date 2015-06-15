// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.Enter.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Navigation {

Enter__uType* Enter__typeof()
{
    static Enter__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Enter__uType*)::uAllocClassType(sizeof(Enter__uType), "Fuse.Navigation.Enter", ::app::Fuse::Navigation::EnterExitTrigger__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Enter___ObjInit_4(Enter* __this)
{
    ::app::Fuse::Navigation::EnterExitTrigger___ObjInit_3(__this);
    __this->PositiveProgress = true;
}

Enter* Enter__New_1(::uStatic* __this)
{
    Enter* inst = (::app::Fuse::Navigation::Enter*)::uAllocObject(sizeof(::app::Fuse::Navigation::Enter), ::app::Fuse::Navigation::Enter__typeof());
    inst->_ObjInit_4();
    return inst;
}

}}}
