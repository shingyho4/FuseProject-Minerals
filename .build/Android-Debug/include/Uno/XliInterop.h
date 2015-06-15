// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Targets\CPlusPlus\Source\Uno\XliInterop.h'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __UNO_XLI_INTEROP_H__
#define __UNO_XLI_INTEROP_H__

#include <Uno/Uno.h>

/**
    \addtogroup XliStrings
    @{
*/

#include <Xli/String.h>

Xli::String uStringToXliString(uString* ustr);
uString* uStringFromXliString(const Xli::String& str);

/** @} */

/**
    \addtogroup XliVectors
    @{
*/

#include <Xli/Vector2.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Float2.h>

::app::Uno::Int2 uInt2FromXliVector2i(const Xli::Vector2i& vec);
Xli::Vector2i uInt2ToXliVector2i(const ::app::Uno::Int2& vec);

::app::Uno::Float2 uFloat2FromXliVector2(const Xli::Vector2& vec);
Xli::Vector2 uFloat2ToXliVector2(const ::app::Uno::Float2& vec);

/** @} */

/**
    \addtogroup XliBuffers
    @{
*/

namespace app { namespace Uno { struct Buffer; } }
namespace Xli { class DataAccessor; }

::app::Uno::Buffer* uBufferFromXliDataAccessor(const Xli::DataAccessor* data);

/** @} */

/**
    \addtogroup XliTextures
    @{
*/

struct uGLTextureInfo
{
    unsigned int GLTarget;
    int Width;
    int Height;
    int Depth;
    int MipCount;
};

namespace Xli { class Texture; }
namespace Xli { class Stream; }

Xli::Texture* uLoadXliTexture(const Xli::String& filename, Xli::Stream* stream);
unsigned int uCreateGLTexture(Xli::Texture* texData, bool generateMipmap = true, uGLTextureInfo* outInfo = 0);

/** @} */

#endif
