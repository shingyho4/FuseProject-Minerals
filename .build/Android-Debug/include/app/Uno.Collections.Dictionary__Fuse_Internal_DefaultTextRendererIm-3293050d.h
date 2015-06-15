// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_INTERNAL_DEFAULT_TEXT_RENDERER_IM_3293050D_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_INTERNAL_DEFAULT_TEXT_RENDERER_IM_3293050D_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Internal_DefaultTextRe-ff874b32.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct DefaultTextRendererImpl_FontKey; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont;

struct Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__uType : ::uClassType
{
};

Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__uType* Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__typeof();

void Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__Rehash(Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont* __this);
void Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__Add(Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont* __this, ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* key, ::app::Uno::Content::Fonts::BitmapFont* value);
bool Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__TryGetValue(Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont* __this, ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* key, ::app::Uno::Content::Fonts::BitmapFont** value);
void Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont___ObjInit(Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont* __this);
Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont* Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__New_1(::uStatic* __this);

struct Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void Rehash() { Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__Rehash(this); }
    void Add(::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* key, ::app::Uno::Content::Fonts::BitmapFont* value) { Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__Add(this, key, value); }
    bool TryGetValue(::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* key, ::app::Uno::Content::Fonts::BitmapFont** value) { return Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont__TryGetValue(this, key, value); }
    void _ObjInit() { Dictionary__Fuse_Internal_DefaultTextRendererImpl_FontKey__Uno_Content_Fonts_BitmapFont___ObjInit(this); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
