// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_HTTP_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_HTTP_IMAGE_SOURCE_H__

#include <app/Fuse.Resources.ImageSource.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Resources { struct ProxyImageSource; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct HttpImageSource;

struct HttpImageSource__uType : ::app::Fuse::Resources::ImageSource__uType
{
};

HttpImageSource__uType* HttpImageSource__typeof();

::app::Uno::Float2 HttpImageSource__get_Size(HttpImageSource* __this);
::app::Uno::Int2 HttpImageSource__get_PixelSize(HttpImageSource* __this);
float HttpImageSource__get_SizeDensity(HttpImageSource* __this);
float HttpImageSource__get_Density(HttpImageSource* __this);
void HttpImageSource__set_Density(HttpImageSource* __this, float value);
void HttpImageSource__OnPinChanged(HttpImageSource* __this);
::app::Uno::Graphics::Texture2D* HttpImageSource__GetTexture(HttpImageSource* __this);

struct HttpImageSource : ::app::Fuse::Resources::ImageSource
{
    ::uStrong< ::app::Fuse::Resources::ProxyImageSource*> _proxy;

    float Density() { return HttpImageSource__get_Density(this); }
    void Density(float value) { HttpImageSource__set_Density(this, value); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {
namespace Resources {

}}}


#endif
