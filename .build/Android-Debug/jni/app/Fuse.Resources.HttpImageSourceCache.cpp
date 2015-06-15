// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.HttpImageSourceCache.h>
#include <app/Uno.Collections.Dictionary__string__Uno_WeakReference_Fuse_Reso-8e46f7e2.h>

namespace app {
namespace Fuse {
namespace Resources {

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_*> HttpImageSourceCache___cache;

HttpImageSourceCache__uType* HttpImageSourceCache__typeof()
{
    static HttpImageSourceCache__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HttpImageSourceCache__uType*)::uAllocClassType(sizeof(HttpImageSourceCache__uType), "Fuse.Resources.HttpImageSourceCache");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void HttpImageSourceCache___TypeInit(::uStatic* __this)
{
    HttpImageSourceCache___cache = ::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___New_1(NULL);
}

}}}
