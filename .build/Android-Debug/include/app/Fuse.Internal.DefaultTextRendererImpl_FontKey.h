// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_DEFAULT_TEXT_RENDERER_IMPL_FONT_KEY_H__
#define __APP_FUSE_INTERNAL_DEFAULT_TEXT_RENDERER_IMPL_FONT_KEY_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFace; } } } }

namespace app {
namespace Fuse {
namespace Internal {

struct DefaultTextRendererImpl_FontKey;

struct DefaultTextRendererImpl_FontKey__uType : ::uClassType
{
};

DefaultTextRendererImpl_FontKey__uType* DefaultTextRendererImpl_FontKey__typeof();

int DefaultTextRendererImpl_FontKey__GetHashCode(DefaultTextRendererImpl_FontKey* __this);
bool DefaultTextRendererImpl_FontKey__Equals(DefaultTextRendererImpl_FontKey* __this, ::uObject* obj);
void DefaultTextRendererImpl_FontKey___ObjInit(DefaultTextRendererImpl_FontKey* __this, ::app::Uno::Content::Fonts::FontFace* fontFace, int size);
DefaultTextRendererImpl_FontKey* DefaultTextRendererImpl_FontKey__New_1(::uStatic* __this, ::app::Uno::Content::Fonts::FontFace* fontFace, int size);

struct DefaultTextRendererImpl_FontKey : ::uObject
{
    ::uStrong< ::app::Uno::Content::Fonts::FontFace*> FontFace;
    int Size;

    void _ObjInit(::app::Uno::Content::Fonts::FontFace* fontFace, int size) { DefaultTextRendererImpl_FontKey___ObjInit(this, fontFace, size); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Internal {

}}}


#endif
