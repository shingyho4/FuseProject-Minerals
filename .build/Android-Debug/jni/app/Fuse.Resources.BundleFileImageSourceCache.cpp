// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.BundleFileImageSourceCache.h>
#include <app/Fuse.Resources.BundleFileImageSourceImpl.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Collections.Dictionary__Uno_BundleFile__Uno_WeakReference_F-3d45da76.h>
#include <app/Uno.WeakReference__Fuse_Resources_BundleFileImageSourceImpl.h>

namespace app {
namespace Fuse {
namespace Resources {

::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_*> BundleFileImageSourceCache___cache;

BundleFileImageSourceCache__uType* BundleFileImageSourceCache__typeof()
{
    static BundleFileImageSourceCache__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BundleFileImageSourceCache__uType*)::uAllocClassType(sizeof(BundleFileImageSourceCache__uType), "Fuse.Resources.BundleFileImageSourceCache");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Resources::BundleFileImageSourceImpl* BundleFileImageSourceCache__GetBundleFile(::uStatic* __this, ::app::Uno::BundleFile* bf)
{
    ::app::Uno::WeakReference__Fuse_Resources_BundleFileImageSourceImpl* value = NULL;

    if (::uPtr< ::app::Uno::Collections::Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_*>(BundleFileImageSourceCache___cache)->TryGetValue(bf, &value))
    {
        ::app::Fuse::Resources::BundleFileImageSourceImpl* his;

        if (::uPtr< ::app::Uno::WeakReference__Fuse_Resources_BundleFileImageSourceImpl*>(value)->TryGetTarget(&his))
        {
            return his;
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_*>(BundleFileImageSourceCache___cache)->Remove(bf);
    }

    ::app::Fuse::Resources::BundleFileImageSourceImpl* nv = ::app::Fuse::Resources::BundleFileImageSourceImpl__New_1(NULL, bf);
    ::uPtr< ::app::Uno::Collections::Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_*>(BundleFileImageSourceCache___cache)->Add(bf, ::app::Uno::WeakReference__Fuse_Resources_BundleFileImageSourceImpl__New_1(NULL, nv));
    return nv;
}

void BundleFileImageSourceCache___TypeInit(::uStatic* __this)
{
    BundleFileImageSourceCache___cache = ::app::Uno::Collections::Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl___New_1(NULL);
}

}}}
