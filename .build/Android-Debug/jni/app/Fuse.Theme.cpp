// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Theme.h>

namespace app {
namespace Fuse {

Theme__uType* Theme__typeof()
{
    static Theme__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Theme__uType*)::uAllocClassType(sizeof(Theme__uType), "Fuse.Theme", ::app::Fuse::Style__typeof(), 1);
        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(Theme__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Theme___ObjInit_1(Theme* __this)
{
    ::app::Fuse::Style___ObjInit(__this);
}

}}
