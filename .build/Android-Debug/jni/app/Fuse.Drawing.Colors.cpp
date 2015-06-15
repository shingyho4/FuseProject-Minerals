// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Colors.h>
#include <app/Uno.Color.h>
#include <app/Uno.Float4.h>
#include <app/Uno.UInt.h>

namespace app {
namespace Fuse {
namespace Drawing {

::app::Uno::Float4 Colors__Transparent;
::app::Uno::Float4 Colors__Black;
::app::Uno::Float4 Colors__Silver;
::app::Uno::Float4 Colors__Gray;
::app::Uno::Float4 Colors__White;
::app::Uno::Float4 Colors__Maroon;
::app::Uno::Float4 Colors__Red;
::app::Uno::Float4 Colors__Purple;
::app::Uno::Float4 Colors__Fuchsia;
::app::Uno::Float4 Colors__Green;
::app::Uno::Float4 Colors__Lime;
::app::Uno::Float4 Colors__Olive;
::app::Uno::Float4 Colors__Yellow;
::app::Uno::Float4 Colors__Navy;
::app::Uno::Float4 Colors__Blue;
::app::Uno::Float4 Colors__Teal;
::app::Uno::Float4 Colors__Aqua;

Colors__uType* Colors__typeof()
{
    static Colors__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Colors__uType*)::uAllocClassType(sizeof(Colors__uType), "Fuse.Drawing.Colors");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Colors___TypeInit(::uStatic* __this)
{
    Colors__Transparent = ::app::Uno::Color__FromRgba32_1(NULL, 0u);
    Colors__Black = ::app::Uno::Color__FromRgba32_1(NULL, 255u);
    Colors__Silver = ::app::Uno::Color__FromRgba32_1(NULL, 3233857791u);
    Colors__Gray = ::app::Uno::Color__FromRgba32_1(NULL, 2155905279u);
    Colors__White = ::app::Uno::Color__FromRgba32_1(NULL, 4294967295u);
    Colors__Maroon = ::app::Uno::Color__FromRgba32_1(NULL, 2147483903u);
    Colors__Red = ::app::Uno::Color__FromRgba32_1(NULL, 4278190335u);
    Colors__Purple = ::app::Uno::Color__FromRgba32_1(NULL, 2147516671u);
    Colors__Fuchsia = ::app::Uno::Color__FromRgba32_1(NULL, 4278255615u);
    Colors__Green = ::app::Uno::Color__FromRgba32_1(NULL, 8388863u);
    Colors__Lime = ::app::Uno::Color__FromRgba32_1(NULL, 16711935u);
    Colors__Olive = ::app::Uno::Color__FromRgba32_1(NULL, 2155872511u);
    Colors__Yellow = ::app::Uno::Color__FromRgba32_1(NULL, 4294902015u);
    Colors__Navy = ::app::Uno::Color__FromRgba32_1(NULL, 33023u);
    Colors__Blue = ::app::Uno::Color__FromRgba32_1(NULL, 65535u);
    Colors__Teal = ::app::Uno::Color__FromRgba32_1(NULL, 8421631u);
    Colors__Aqua = ::app::Uno::Color__FromRgba32_1(NULL, 16777215u);
}

}}}
