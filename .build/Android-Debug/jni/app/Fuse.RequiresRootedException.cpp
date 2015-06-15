// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.RequiresRootedException.h>

namespace app {
namespace Fuse {

RequiresRootedException__uType* RequiresRootedException__typeof()
{
    static RequiresRootedException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (RequiresRootedException__uType*)::uAllocClassType(sizeof(RequiresRootedException__uType), "Fuse.RequiresRootedException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void RequiresRootedException___ObjInit_2(RequiresRootedException* __this)
{
    ::app::Uno::Exception___ObjInit_1(__this);
}

RequiresRootedException* RequiresRootedException__New_3(::uStatic* __this)
{
    RequiresRootedException* inst = (::app::Fuse::RequiresRootedException*)::uAllocObject(sizeof(::app::Fuse::RequiresRootedException), ::app::Fuse::RequiresRootedException__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}
