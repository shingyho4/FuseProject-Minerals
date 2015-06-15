// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_BUNDLE_FILE_IMAGE_SOURCE_CACHE_H__
#define __APP_FUSE_RESOURCES_BUNDLE_FILE_IMAGE_SOURCE_CACHE_H__

#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Resources { struct BundleFileImageSourceImpl; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_; } } }
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Fuse {
namespace Resources {

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_BundleFile__Uno_WeakReference_Fuse_Resources_BundleFileImageSourceImpl_*> BundleFileImageSourceCache___cache;

struct BundleFileImageSourceCache__uType : ::uClassType
{
};

BundleFileImageSourceCache__uType* BundleFileImageSourceCache__typeof();

::app::Fuse::Resources::BundleFileImageSourceImpl* BundleFileImageSourceCache__GetBundleFile(::uStatic* __this, ::app::Uno::BundleFile* bf);
void BundleFileImageSourceCache___TypeInit(::uStatic* __this);

}}}


#endif
