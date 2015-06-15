// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Brushes.h>
#include <app/Fuse.Drawing.Colors.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Drawing {

::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Transparent;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Black;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Silver;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Gray;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__White;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Maroon;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Red;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Purple;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Fuchsia;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Green;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Lime;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Olive;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Yellow;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Navy;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Blue;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Teal;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Aqua;

Brushes__uType* Brushes__typeof()
{
    static Brushes__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Brushes__uType*)::uAllocClassType(sizeof(Brushes__uType), "Fuse.Drawing.Brushes");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Brushes___TypeInit(::uStatic* __this)
{
    Brushes__Transparent = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Black);
    Brushes__Black = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Black);
    Brushes__Silver = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Silver);
    Brushes__Gray = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Gray);
    Brushes__White = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__White);
    Brushes__Maroon = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Maroon);
    Brushes__Red = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Red);
    Brushes__Purple = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Purple);
    Brushes__Fuchsia = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Fuchsia);
    Brushes__Green = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Green);
    Brushes__Lime = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Lime);
    Brushes__Olive = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Olive);
    Brushes__Yellow = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Yellow);
    Brushes__Navy = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Navy);
    Brushes__Blue = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Blue);
    Brushes__Teal = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Teal);
    Brushes__Aqua = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Aqua);
}

}}}
