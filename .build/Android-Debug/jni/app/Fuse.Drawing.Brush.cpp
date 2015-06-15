// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Brush.h>

namespace app {
namespace Fuse {
namespace Drawing {

Brush__uType* Brush__typeof()
{
    static Brush__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Brush__uType*)::uAllocClassType(sizeof(Brush__uType), "Fuse.Drawing.Brush", ::uObject__typeof());
        type->__fp_get_IsCompletelyTransparent = Brush__get_IsCompletelyTransparent;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Brush__get_IsCompletelyTransparent(Brush* __this)
{
    return false;
}

void Brush___ObjInit(Brush* __this)
{
}

}}}
