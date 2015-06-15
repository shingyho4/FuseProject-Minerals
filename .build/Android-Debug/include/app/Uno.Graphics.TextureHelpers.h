// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_TEXTURE_HELPERS_H__
#define __APP_UNO_GRAPHICS_TEXTURE_HELPERS_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Uno {
namespace Graphics {

struct TextureHelpers__uType : ::uClassType
{
};

TextureHelpers__uType* TextureHelpers__typeof();

::app::Uno::Int2 TextureHelpers__GetMipSize(::uStatic* __this, ::app::Uno::Graphics::Texture2D* texture, int mip);
int TextureHelpers__GetMipCount(::uStatic* __this, ::app::Uno::Int2 size);

}}}


#endif
