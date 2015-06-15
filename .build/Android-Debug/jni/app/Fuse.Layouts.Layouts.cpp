// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Layouts.DefaultLayout.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.Layouts.h>

namespace app {
namespace Fuse {
namespace Layouts {

::uStaticStrong< ::app::Fuse::Layouts::Layout*> Layouts__Default;

Layouts__uType* Layouts__typeof()
{
    static Layouts__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Layouts__uType*)::uAllocClassType(sizeof(Layouts__uType), "Fuse.Layouts.Layouts");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Layouts___TypeInit(::uStatic* __this)
{
    Layouts__Default = (::app::Fuse::Layouts::Layout*)::app::Fuse::Layouts::DefaultLayout__New_1(NULL);
}

}}}
