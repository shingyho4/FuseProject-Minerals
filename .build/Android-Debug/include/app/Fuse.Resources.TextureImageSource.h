// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_TEXTURE_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_TEXTURE_IMAGE_SOURCE_H__

#include <app/Fuse.Resources.ImageSource.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct TextureImageSource;

struct TextureImageSource__uType : ::app::Fuse::Resources::ImageSource__uType
{
};

TextureImageSource__uType* TextureImageSource__typeof();

float TextureImageSource__get_Density(TextureImageSource* __this);
void TextureImageSource__set_Density(TextureImageSource* __this, float value);
float TextureImageSource__get_SizeDensity(TextureImageSource* __this);
::app::Uno::Float2 TextureImageSource__get_Size(TextureImageSource* __this);
::app::Uno::Int2 TextureImageSource__get_PixelSize(TextureImageSource* __this);
::app::Uno::Graphics::Texture2D* TextureImageSource__GetTexture(TextureImageSource* __this);

struct TextureImageSource : ::app::Fuse::Resources::ImageSource
{
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _texture;
    float _density;

    float Density() { return TextureImageSource__get_Density(this); }
    void Density(float value) { TextureImageSource__set_Density(this, value); }
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
