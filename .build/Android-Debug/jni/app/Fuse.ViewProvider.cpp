// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.ViewProvider.h>

namespace app {
namespace Fuse {

ViewProvider__uType* ViewProvider__typeof()
{
    static ViewProvider__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ViewProvider__uType*)::uAllocClassType(sizeof(ViewProvider__uType), "Fuse.ViewProvider", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ViewProvider___ObjInit(ViewProvider* __this)
{
}

}}
