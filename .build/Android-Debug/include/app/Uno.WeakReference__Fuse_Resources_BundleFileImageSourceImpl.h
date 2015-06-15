// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_WEAK_REFERENCE__FUSE_RESOURCES_BUNDLE_FILE_IMAGE_SOURCE_IMPL_H__
#define __APP_UNO_WEAK_REFERENCE__FUSE_RESOURCES_BUNDLE_FILE_IMAGE_SOURCE_IMPL_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Resources { struct BundleFileImageSourceImpl; } } }

namespace app {
namespace Uno {

struct WeakReference__Fuse_Resources_BundleFileImageSourceImpl;

struct WeakReference__Fuse_Resources_BundleFileImageSourceImpl__uType : ::uClassType
{
};

WeakReference__Fuse_Resources_BundleFileImageSourceImpl__uType* WeakReference__Fuse_Resources_BundleFileImageSourceImpl__typeof();

bool WeakReference__Fuse_Resources_BundleFileImageSourceImpl__TryGetTarget(WeakReference__Fuse_Resources_BundleFileImageSourceImpl* __this, ::app::Fuse::Resources::BundleFileImageSourceImpl** target);
void WeakReference__Fuse_Resources_BundleFileImageSourceImpl___ObjInit(WeakReference__Fuse_Resources_BundleFileImageSourceImpl* __this, ::app::Fuse::Resources::BundleFileImageSourceImpl* target);
WeakReference__Fuse_Resources_BundleFileImageSourceImpl* WeakReference__Fuse_Resources_BundleFileImageSourceImpl__New_1(::uStatic* __this, ::app::Fuse::Resources::BundleFileImageSourceImpl* target);

struct WeakReference__Fuse_Resources_BundleFileImageSourceImpl : ::uObject
{
    ::uStrong< ::app::Fuse::Resources::BundleFileImageSourceImpl*> _target;

    bool TryGetTarget(::app::Fuse::Resources::BundleFileImageSourceImpl** target) { return WeakReference__Fuse_Resources_BundleFileImageSourceImpl__TryGetTarget(this, target); }
    void _ObjInit(::app::Fuse::Resources::BundleFileImageSourceImpl* target) { WeakReference__Fuse_Resources_BundleFileImageSourceImpl___ObjInit(this, target); }
};

}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {

}}


#endif
