// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.ArgumentException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Color.h>
#include <app/Uno.ColorHelper.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3x3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int4.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>

namespace app {
namespace Uno {

::app::Uno::Float3x3 Color__ToYCbCrMat;
::app::Uno::Float3x3 Color__ToYCbCrMatInv;

Color__uType* Color__typeof()
{
    static Color__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Color__uType*)::uAllocClassType(sizeof(Color__uType), "Uno.Color");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4 Color__FromRgba32(::uStatic* __this, ::app::Uno::Int4 rgba)
{
    return ::app::Uno::Float4__New_2(NULL, (float)rgba.X / 255.0f, (float)rgba.Y / 255.0f, (float)rgba.Z / 255.0f, (float)rgba.W / 255.0f);
}

::app::Uno::Float4 Color__FromRgba32_1(::uStatic* __this, ::uUInt rgba)
{
    return ::app::Uno::Float4__New_2(NULL, (float)((rgba >> 24) & 255u) / 255.0f, (float)((rgba >> 16) & 255u) / 255.0f, (float)((rgba >> 8) & 255u) / 255.0f, (float)((rgba >> 0) & 255u) / 255.0f);
}

::app::Uno::Int4 Color__Rgba32FromHex(::uStatic* __this, ::uString* hex)
{
    if ((::uPtr< ::uString*>(hex)->Length() > 0) && (::uPtr< ::uString*>(hex)->Item(0) == '#'))
    {
        hex = ::app::Uno::String::Substring_1(::uPtr< ::uString*>(hex), 1);
    }

    if (hex->Length() == 6)
    {
        int r = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(hex), 0, 2), 16);
        int g = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 2, 2), 16);
        int b = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 4, 2), 16);
        int a = 255;
        return ::app::Uno::Int4__New_1(NULL, r, g, b, a);
    }
    else if (hex->Length() == 8)
    {
        int r = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(hex), 0, 2), 16);
        int g = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 2, 2), 16);
        int b = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 4, 2), 16);
        int a = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 6, 2), 16);
        return ::app::Uno::Int4__New_1(NULL, r, g, b, a);
    }
    else
    {
        U_THROW(::app::Uno::ArgumentException__New_4(NULL, hex, ::uGetConstString("hex")));
    }
}

::app::Uno::Float4 Color__FromHex(::uStatic* __this, ::uString* hex)
{
    return Color__FromRgba32(NULL, Color__Rgba32FromHex(NULL, hex));
}

void Color___TypeInit(::uStatic* __this)
{
    Color__ToYCbCrMat = ::app::Uno::Float3x3__New_1(NULL, 0.299f, -0.168736f, 0.5f, 0.587f, -0.331264f, -0.418688f, 0.114f, 0.5f, -0.081312f);
    Color__ToYCbCrMatInv = ::app::Uno::Float3x3__New_1(NULL, 1.0f, 1.0f, 1.0f, 0.0f, -0.344136f, 1.772f, 1.402f, -0.714136f, 0.0f);
}

}}
