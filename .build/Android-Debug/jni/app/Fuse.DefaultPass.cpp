// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DefaultPass.h>

namespace app {
namespace Fuse {

DefaultPass__uType* DefaultPass__typeof()
{
    static DefaultPass__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DefaultPass__uType*)::uAllocClassType(sizeof(DefaultPass__uType), "Fuse.DefaultPass", ::app::Fuse::Pass__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void DefaultPass___ObjInit_1(DefaultPass* __this)
{
    ::app::Fuse::Pass___ObjInit(__this);
}

DefaultPass* DefaultPass__New_1(::uStatic* __this)
{
    DefaultPass* inst = (::app::Fuse::DefaultPass*)::uAllocObject(sizeof(::app::Fuse::DefaultPass), ::app::Fuse::DefaultPass__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}
