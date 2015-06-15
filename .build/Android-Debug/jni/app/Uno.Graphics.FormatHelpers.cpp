// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.FormatException.h>
#include <app/Uno.Graphics.FormatHelpers.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Graphics {

FormatHelpers__uType* FormatHelpers__typeof()
{
    static FormatHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FormatHelpers__uType*)::uAllocClassType(sizeof(FormatHelpers__uType), "Uno.Graphics.FormatHelpers");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int FormatHelpers__GetStrideInBytes(::uStatic* __this, int format)
{
    switch (format)
    {
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 2;
        }
        case 3:
        {
            return 4;
        }
        case 4:
        {
            return 2;
        }
        case 5:
        {
            return 2;
        }
        case 6:
        {
            return 2;
        }
    }

    U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Invalid format <"), ::uBox< int>(::app::Uno::Int__typeof(), format)), ::uGetConstString(">"))));
}

}}}
