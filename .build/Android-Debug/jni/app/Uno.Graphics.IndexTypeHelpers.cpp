// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.FormatException.h>
#include <app/Uno.Graphics.IndexTypeHelpers.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Graphics {

IndexTypeHelpers__uType* IndexTypeHelpers__typeof()
{
    static IndexTypeHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (IndexTypeHelpers__uType*)::uAllocClassType(sizeof(IndexTypeHelpers__uType), "Uno.Graphics.IndexTypeHelpers");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int IndexTypeHelpers__GetStrideInBytes(::uStatic* __this, int type)
{
    switch (type)
    {
        case 1:
        case 2:
        case 4:
        {
            return type;
        }
        default:
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Invalid IndexType <"), ::uBox< int>(::app::Uno::Int__typeof(), type)), ::uGetConstString(">"))));
        }
    }
}

}}}
