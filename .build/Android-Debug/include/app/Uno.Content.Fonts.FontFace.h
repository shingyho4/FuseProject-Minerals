// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_FONT_FACE_H__
#define __APP_UNO_CONTENT_FONTS_FONT_FACE_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct RenderedGlyph; } } } }
namespace app { namespace Uno { struct BundleFile; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct FontFace;

struct FontFace__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
    void(*__fp_Dispose)(FontFace*);
    float(*__fp_GetAscender)(FontFace*, float);
    float(*__fp_GetDescender)(FontFace*, float);
    float(*__fp_GetLineHeight)(FontFace*, float);
    bool(*__fp_ContainsGlyph)(FontFace*, float, ::uChar);
    ::app::Uno::Content::Fonts::RenderedGlyph(*__fp_RenderGlyph)(FontFace*, float, ::uChar);
    bool(*__fp_TryGetKerning)(FontFace*, float, ::uChar, ::uChar, ::app::Uno::Float2*);
    ::uString*(*__fp_get_FamilyName)(FontFace*);
    ::uString*(*__fp_get_StyleName)(FontFace*);
};

FontFace__uType* FontFace__typeof();

FontFace* FontFace__Load(::uStatic* __this, ::app::Uno::BundleFile* file);
void FontFace___ObjInit(FontFace* __this);

struct FontFace : ::uObject
{
    void Dispose() { (((FontFace__uType*)this->__obj_type)->__fp_Dispose)(this); }
    float GetAscender(float size) { return (((FontFace__uType*)this->__obj_type)->__fp_GetAscender)(this, size); }
    float GetDescender(float size) { return (((FontFace__uType*)this->__obj_type)->__fp_GetDescender)(this, size); }
    float GetLineHeight(float size) { return (((FontFace__uType*)this->__obj_type)->__fp_GetLineHeight)(this, size); }
    bool ContainsGlyph(float size, ::uChar glyph) { return (((FontFace__uType*)this->__obj_type)->__fp_ContainsGlyph)(this, size, glyph); }
    ::app::Uno::Content::Fonts::RenderedGlyph RenderGlyph(float size, ::uChar glyph);
    bool TryGetKerning(float size, ::uChar left, ::uChar right, ::app::Uno::Float2* result) { return (((FontFace__uType*)this->__obj_type)->__fp_TryGetKerning)(this, size, left, right, result); }
    void _ObjInit() { FontFace___ObjInit(this); }
    ::uString* FamilyName() { return (((FontFace__uType*)this->__obj_type)->__fp_get_FamilyName)(this); }
    ::uString* StyleName() { return (((FontFace__uType*)this->__obj_type)->__fp_get_StyleName)(this); }
};

}}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Content.Fonts.RenderedGlyph.h>
#include <app/Uno.Float.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

inline ::app::Uno::Content::Fonts::RenderedGlyph FontFace::RenderGlyph(float size, ::uChar glyph) { return (((FontFace__uType*)this->__obj_type)->__fp_RenderGlyph)(this, size, glyph); }

}}}}


#endif
