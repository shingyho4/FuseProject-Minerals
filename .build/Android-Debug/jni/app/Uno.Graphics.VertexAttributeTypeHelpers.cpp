// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.FormatException.h>
#include <app/Uno.Graphics.VertexAttributeTypeHelpers.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Graphics {

VertexAttributeTypeHelpers__uType* VertexAttributeTypeHelpers__typeof()
{
    static VertexAttributeTypeHelpers__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (VertexAttributeTypeHelpers__uType*)::uAllocClassType(sizeof(VertexAttributeTypeHelpers__uType), "Uno.Graphics.VertexAttributeTypeHelpers");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int VertexAttributeTypeHelpers__GetStrideInBytes(::uStatic* __this, int type)
{
    switch (type)
    {
        case 1:
        {
            return 4;
        }
        case 2:
        {
            return 8;
        }
        case 3:
        {
            return 12;
        }
        case 4:
        {
            return 16;
        }
        case 5:
        case 6:
        case 11:
        case 12:
        {
            return 2;
        }
        case 7:
        case 8:
        case 13:
        case 14:
        {
            return 4;
        }
        case 9:
        case 10:
        case 15:
        case 16:
        {
            return 8;
        }
        case 17:
        case 18:
        case 19:
        case 20:
        {
            return 4;
        }
        default:
        {
            U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Invalid VertexAttributeType <"), ::uBox< int>(::app::Uno::Int__typeof(), type)), ::uGetConstString(">"))));
        }
    }
}

}}}
