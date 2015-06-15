// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.Exit.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Navigation {

Exit__uType* Exit__typeof()
{
    static Exit__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Exit__uType*)::uAllocClassType(sizeof(Exit__uType), "Fuse.Navigation.Exit", ::app::Fuse::Navigation::EnterExitTrigger__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Exit___ObjInit_4(Exit* __this)
{
    ::app::Fuse::Navigation::EnterExitTrigger___ObjInit_3(__this);
    __this->NegativeProgress = true;
}

Exit* Exit__New_1(::uStatic* __this)
{
    Exit* inst = (::app::Fuse::Navigation::Exit*)::uAllocObject(sizeof(::app::Fuse::Navigation::Exit), ::app::Fuse::Navigation::Exit__typeof());
    inst->_ObjInit_4();
    return inst;
}

}}}
