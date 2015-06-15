// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.BundleFile.h>
#include <app/Uno.Content.Fonts.CppFontFace.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.Float2.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

FontFace__uType* FontFace__typeof()
{
    static FontFace__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FontFace__uType*)::uAllocClassType(sizeof(FontFace__uType), "Uno.Content.Fonts.FontFace", ::uObject__typeof(), 1);
        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(FontFace__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

FontFace* FontFace__Load(::uStatic* __this, ::app::Uno::BundleFile* file)
{
    return (FontFace*)::app::Uno::Content::Fonts::CppFontFace__New_1(NULL, file);
}

void FontFace___ObjInit(FontFace* __this)
{
}

}}}}
