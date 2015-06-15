// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_TEXTURE_LOADER_TEXTURE_LOADER_H__
#define __APP_EXPERIMENTAL_TEXTURE_LOADER_TEXTURE_LOADER_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Experimental {
namespace TextureLoader {

struct TextureLoader__uType : ::uClassType
{
};

TextureLoader__uType* TextureLoader__typeof();

void TextureLoader__JpegByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* arr, ::uDelegate* callback);
void TextureLoader__PngByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* arr, ::uDelegate* callback);
void TextureLoader__ByteArrayToTexture2DFilename(::uStatic* __this, ::app::Uno::Buffer* arr, ::uString* filename, ::uDelegate* callback);
bool TextureLoader__EndsWith(::uStatic* __this, ::uString* str, ::uString* suffix);
void TextureLoader__ByteArrayToTexture2DContentType(::uStatic* __this, ::app::Uno::Buffer* arr, ::uString* contentType, ::uDelegate* callback);

}}}


#endif
