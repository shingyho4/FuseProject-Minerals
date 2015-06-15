// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_TEXTURE_LOADER_TEXTURE_LOADER_IMPL_H__
#define __APP_EXPERIMENTAL_TEXTURE_LOADER_TEXTURE_LOADER_IMPL_H__

#include <Uno/Uno.h>
namespace app { namespace Experimental { namespace TextureLoader { struct Callback; } } }
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Experimental {
namespace TextureLoader {

struct TextureLoaderImpl__uType : ::uClassType
{
};

TextureLoaderImpl__uType* TextureLoaderImpl__typeof();

void TextureLoaderImpl__JpegByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* __arr, ::app::Experimental::TextureLoader::Callback* __callback);
void TextureLoaderImpl__PngByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* __arr, ::app::Experimental::TextureLoader::Callback* __callback);

}}}


#endif
