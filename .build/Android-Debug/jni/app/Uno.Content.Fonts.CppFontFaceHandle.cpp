// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Content.Fonts.CppFontFaceHandle.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

CppFontFaceHandle__uType* CppFontFaceHandle__typeof()
{
    static CppFontFaceHandle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CppFontFaceHandle__uType*)::uAllocValueType(sizeof(CppFontFaceHandle__uType), "Uno.Content.Fonts.CppFontFaceHandle", sizeof(::Xli::FontFace*));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}}
