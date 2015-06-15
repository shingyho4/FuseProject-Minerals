// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.StaticBrush.h>

namespace app {
namespace Fuse {
namespace Drawing {

StaticBrush__uType* StaticBrush__typeof()
{
    static StaticBrush__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (StaticBrush__uType*)::uAllocClassType(sizeof(StaticBrush__uType), "Fuse.Drawing.StaticBrush", ::app::Fuse::Drawing::Brush__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void StaticBrush___ObjInit_1(StaticBrush* __this)
{
    ::app::Fuse::Drawing::Brush___ObjInit(__this);
}

}}}
