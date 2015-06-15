// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_BUNDLE_FILE_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_BUNDLE_FILE_IMAGE_SOURCE_H__

#include <app/Fuse.Resources.ImageSource.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ProxyImageSource; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct BundleFile; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct BundleFileImageSource;

struct BundleFileImageSource__uType : ::app::Fuse::Resources::ImageSource__uType
{
};

BundleFileImageSource__uType* BundleFileImageSource__typeof();

::app::Uno::BundleFile* BundleFileImageSource__get_BundleFile(BundleFileImageSource* __this);
void BundleFileImageSource__set_BundleFile(BundleFileImageSource* __this, ::app::Uno::BundleFile* value);
bool BundleFileImageSource__get_Preload(BundleFileImageSource* __this);
void BundleFileImageSource__set_Preload(BundleFileImageSource* __this, bool value);
::app::Uno::Float2 BundleFileImageSource__get_Size(BundleFileImageSource* __this);
::app::Uno::Int2 BundleFileImageSource__get_PixelSize(BundleFileImageSource* __this);
float BundleFileImageSource__get_SizeDensity(BundleFileImageSource* __this);
float BundleFileImageSource__get_Density(BundleFileImageSource* __this);
void BundleFileImageSource__set_Density(BundleFileImageSource* __this, float value);
void BundleFileImageSource__OnPinChanged(BundleFileImageSource* __this);
::app::Uno::Graphics::Texture2D* BundleFileImageSource__GetTexture(BundleFileImageSource* __this);
void BundleFileImageSource___ObjInit_1(BundleFileImageSource* __this, ::app::Uno::BundleFile* file);
BundleFileImageSource* BundleFileImageSource__New_1(::uStatic* __this, ::app::Uno::BundleFile* file);
void BundleFileImageSource___ObjInit_2(BundleFileImageSource* __this);
BundleFileImageSource* BundleFileImageSource__New_2(::uStatic* __this);

struct BundleFileImageSource : ::app::Fuse::Resources::ImageSource
{
    bool _preload;
    ::uStrong< ::app::Fuse::Resources::ProxyImageSource*> _proxy;

    void _ObjInit_1(::app::Uno::BundleFile* file) { BundleFileImageSource___ObjInit_1(this, file); }
    void _ObjInit_2() { BundleFileImageSource___ObjInit_2(this); }
    ::app::Uno::BundleFile* BundleFile() { return BundleFileImageSource__get_BundleFile(this); }
    void BundleFile(::app::Uno::BundleFile* value) { BundleFileImageSource__set_BundleFile(this, value); }
    bool Preload() { return BundleFileImageSource__get_Preload(this); }
    void Preload(bool value) { BundleFileImageSource__set_Preload(this, value); }
    float Density() { return BundleFileImageSource__get_Density(this); }
    void Density(float value) { BundleFileImageSource__set_Density(this, value); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {
namespace Resources {

}}}


#endif
