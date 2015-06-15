// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_BUNDLE_FILE_IMAGE_SOURCE_IMPL_H__
#define __APP_FUSE_RESOURCES_BUNDLE_FILE_IMAGE_SOURCE_IMPL_H__

#include <app/Fuse.Resources.LoadingImageSource.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Fuse {
namespace Resources {

struct BundleFileImageSourceImpl;

struct BundleFileImageSourceImpl__uType : ::app::Fuse::Resources::LoadingImageSource__uType
{
};

BundleFileImageSourceImpl__uType* BundleFileImageSourceImpl__typeof();

::app::Uno::BundleFile* BundleFileImageSourceImpl__get_BundleFile(BundleFileImageSourceImpl* __this);
void BundleFileImageSourceImpl__SyncLoad(BundleFileImageSourceImpl* __this);
void BundleFileImageSourceImpl__AttemptLoad(BundleFileImageSourceImpl* __this);
void BundleFileImageSourceImpl___ObjInit_2(BundleFileImageSourceImpl* __this, ::app::Uno::BundleFile* bundleFile);
BundleFileImageSourceImpl* BundleFileImageSourceImpl__New_1(::uStatic* __this, ::app::Uno::BundleFile* bundleFile);

struct BundleFileImageSourceImpl : ::app::Fuse::Resources::LoadingImageSource
{
    ::uStrong< ::app::Uno::BundleFile*> _bundleFile;

    void SyncLoad() { BundleFileImageSourceImpl__SyncLoad(this); }
    void _ObjInit_2(::app::Uno::BundleFile* bundleFile) { BundleFileImageSourceImpl___ObjInit_2(this, bundleFile); }
    ::app::Uno::BundleFile* BundleFile() { return BundleFileImageSourceImpl__get_BundleFile(this); }
};

}}}


#endif
