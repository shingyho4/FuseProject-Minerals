// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FUSE_INTERNAL_DEFAULT_TEXT_RE_FF874B32_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__FUSE_INTERNAL_DEFAULT_TEXT_RE_FF874B32_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct DefaultTextRendererImpl_FontKey; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont;

struct Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__uType : ::uValueType
{
};

Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__uType* Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__typeof();

struct Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont
{
    ::uStrong< ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey*> Key;
    ::uStrong< ::app::Uno::Content::Fonts::BitmapFont*> Value;
    int State;

    Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont& operator =(const Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont& copy)
    {
        ::uCopyValue(this, Dictionary2_Bucket__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__typeof(), &copy);
        return *this;
    }
};

}}}


#endif
