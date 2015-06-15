// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Util.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {

Util__uType* Util__typeof()
{
    static Util__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Util__uType*)::uAllocClassType(sizeof(Util__uType), "Fuse.Drawing.Util", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Util__ValidateFloat(::uStatic* __this, float v)
{
    if (v != v)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("NaN in path data!")));
    }

    if (v >= 1e+18f)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Too large path coordinate!")));
    }
}

void Util__ValidateFloat2(::uStatic* __this, ::app::Uno::Float2 v)
{
    Util__ValidateFloat(NULL, v.X);
    Util__ValidateFloat(NULL, v.Y);
}

}}}
