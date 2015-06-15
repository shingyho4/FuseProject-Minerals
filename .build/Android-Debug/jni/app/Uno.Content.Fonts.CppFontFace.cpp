// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.BundleFile.h>
#include <app/Uno.Content.Fonts.CppFontFace.h>
#include <app/Uno.Content.Fonts.CppFontFaceHandle.h>
#include <app/Uno.Content.Fonts.RenderedGlyph.h>
#include <app/Uno.Content.Images.Bitmap.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int2.h>
#include <app/Uno.String.h>
#include <Uno/XliInterop.h>
#include <XliPlatform/Bundle.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

CppFontFace__uType* CppFontFace__typeof()
{
    static CppFontFace__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CppFontFace__uType*)::uAllocClassType(sizeof(CppFontFace__uType), "Uno.Content.Fonts.CppFontFace", ::app::Uno::Content::Fonts::FontFace__typeof(), 1);
        type->__fp_get_FamilyName = (::uString*(*)(::app::Uno::Content::Fonts::FontFace*))CppFontFace__get_FamilyName;
        type->__fp_get_StyleName = (::uString*(*)(::app::Uno::Content::Fonts::FontFace*))CppFontFace__get_StyleName;
        type->__fp_Dispose = (void(*)(::app::Uno::Content::Fonts::FontFace*))CppFontFace__Dispose;
        type->__fp_GetAscender = (float(*)(::app::Uno::Content::Fonts::FontFace*, float))CppFontFace__GetAscender;
        type->__fp_GetDescender = (float(*)(::app::Uno::Content::Fonts::FontFace*, float))CppFontFace__GetDescender;
        type->__fp_GetLineHeight = (float(*)(::app::Uno::Content::Fonts::FontFace*, float))CppFontFace__GetLineHeight;
        type->__fp_ContainsGlyph = (bool(*)(::app::Uno::Content::Fonts::FontFace*, float, ::uChar))CppFontFace__ContainsGlyph;
        type->__fp_RenderGlyph = (::app::Uno::Content::Fonts::RenderedGlyph(*)(::app::Uno::Content::Fonts::FontFace*, float, ::uChar))CppFontFace__RenderGlyph;
        type->__fp_TryGetKerning = (bool(*)(::app::Uno::Content::Fonts::FontFace*, float, ::uChar, ::uChar, ::app::Uno::Float2*))CppFontFace__TryGetKerning;

        type->__interface_0.__fp_Dispose = (void(*)(void*))CppFontFace__Dispose;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(CppFontFace__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* CppFontFace__get_FamilyName(CppFontFace* __this)
{
    return ::uStringFromXliString(__this->_handle->GetFamilyName());
}

::uString* CppFontFace__get_StyleName(CppFontFace* __this)
{
    return ::uStringFromXliString(__this->_handle->GetStyleName());
}

::Xli::FontFace* CppFontFace__LoadFontFaceHandle(::uStatic* __this, ::uString* __filename)
{
    Xli::Managed<Xli::Stream> f = Xli::Bundle->OpenFile(::uStringToXliString(__filename));
    return Xli::FreeType::LoadFontFace(f);
}

void CppFontFace__Dispose(CppFontFace* __this)
{
    __this->_handle->Release();
    __this->_handle = 0;
}

float CppFontFace__GetAscender(CppFontFace* __this, float __size)
{
    return __this->_handle->GetAscender(__size);
}

float CppFontFace__GetDescender(CppFontFace* __this, float __size)
{
    return __this->_handle->GetDescender(__size);
}

float CppFontFace__GetLineHeight(CppFontFace* __this, float __size)
{
    return __this->_handle->GetLineHeight(__size);
}

bool CppFontFace__ContainsGlyph(CppFontFace* __this, float __size, ::uChar __glyph)
{
    return __this->_handle->ContainsGlyph(__size, __glyph);
}

::app::Uno::Content::Fonts::RenderedGlyph CppFontFace__RenderGlyph(CppFontFace* __this, float __size, ::uChar __glyph)
{
    Xli::Vector2 advance, bearing;
    Xli::Managed<Xli::Bitmap> bitmap = __this->_handle->RenderGlyph(__size, __glyph, Xli::FontRenderModeNormal, &advance, &bearing);
    
    ::app::Uno::Buffer* resultBuffer = ::uBufferFromXliDataAccessor(bitmap);
    ::app::Uno::Content::Images::Bitmap* resultBitmap = ::app::Uno::Content::Images::Bitmap__New_1(NULL, ::app::Uno::Int2__New_2(NULL, bitmap->GetWidth(), bitmap->GetHeight()), 1, resultBuffer);
    
    return ::app::Uno::Content::Fonts::RenderedGlyph__New_1(NULL, ::app::Uno::Float2__New_2(NULL, advance.X, advance.Y), ::app::Uno::Float2__New_2(NULL, bearing.X, bearing.Y), resultBitmap);
}

bool CppFontFace__TryGetKerning(CppFontFace* __this, float __size, ::uChar __left, ::uChar __right, ::app::Uno::Float2* __result)
{
    Xli::Vector2 kerning;
    if (__this->_handle->TryGetKerning(__size, __left, __right, &kerning))
    {
        __result->X = kerning.X;
        __result->Y = kerning.Y;
        return true;
    }
    
    __result->X = __result->Y = 0;
    return false;
}

void CppFontFace___ObjInit_1(CppFontFace* __this, ::app::Uno::BundleFile* file)
{
    ::app::Uno::Content::Fonts::FontFace___ObjInit(__this);
    __this->_handle = CppFontFace__LoadFontFaceHandle(NULL, ::uPtr< ::app::Uno::BundleFile*>(file)->Name());
}

CppFontFace* CppFontFace__New_1(::uStatic* __this, ::app::Uno::BundleFile* file)
{
    CppFontFace* inst = (::app::Uno::Content::Fonts::CppFontFace*)::uAllocObject(sizeof(::app::Uno::Content::Fonts::CppFontFace), ::app::Uno::Content::Fonts::CppFontFace__typeof());
    inst->_ObjInit_1(file);
    return inst;
}

}}}}
