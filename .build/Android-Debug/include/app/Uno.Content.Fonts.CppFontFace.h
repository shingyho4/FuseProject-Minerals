// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_CPP_FONT_FACE_H__
#define __APP_UNO_CONTENT_FONTS_CPP_FONT_FACE_H__

#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.IDisposable.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct RenderedGlyph; } } } }
namespace app { namespace Uno { struct BundleFile; } }
namespace app { namespace Uno { struct Float2; } }
namespace Xli { class FontFace; }

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct CppFontFace;

struct CppFontFace__uType : ::app::Uno::Content::Fonts::FontFace__uType
{
};

CppFontFace__uType* CppFontFace__typeof();

::uString* CppFontFace__get_FamilyName(CppFontFace* __this);
::uString* CppFontFace__get_StyleName(CppFontFace* __this);
::Xli::FontFace* CppFontFace__LoadFontFaceHandle(::uStatic* __this, ::uString* __filename);
void CppFontFace__Dispose(CppFontFace* __this);
float CppFontFace__GetAscender(CppFontFace* __this, float __size);
float CppFontFace__GetDescender(CppFontFace* __this, float __size);
float CppFontFace__GetLineHeight(CppFontFace* __this, float __size);
bool CppFontFace__ContainsGlyph(CppFontFace* __this, float __size, ::uChar __glyph);
::app::Uno::Content::Fonts::RenderedGlyph CppFontFace__RenderGlyph(CppFontFace* __this, float __size, ::uChar __glyph);
bool CppFontFace__TryGetKerning(CppFontFace* __this, float __size, ::uChar __left, ::uChar __right, ::app::Uno::Float2* __result);
void CppFontFace___ObjInit_1(CppFontFace* __this, ::app::Uno::BundleFile* file);
CppFontFace* CppFontFace__New_1(::uStatic* __this, ::app::Uno::BundleFile* file);

struct CppFontFace : ::app::Uno::Content::Fonts::FontFace
{
    ::Xli::FontFace* _handle;

    void _ObjInit_1(::app::Uno::BundleFile* file) { CppFontFace___ObjInit_1(this, file); }
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

}}}}


#endif
