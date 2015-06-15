// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringLiteral.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

FormatStringLiteral__uType* FormatStringLiteral__typeof()
{
    static FormatStringLiteral__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FormatStringLiteral__uType*)::uAllocClassType(sizeof(FormatStringLiteral__uType), "Uno.Runtime.Implementation.Internal.FormatStringLiteral", ::app::Uno::Runtime::Implementation::Internal::FormatStringToken__typeof());
        type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))FormatStringLiteral__Equals;
        type->__fp_GetHashCode = (int(*)(::uObject*))FormatStringLiteral__GetHashCode;
        type->__fp_ToString_1 = (::uString*(*)(::app::Uno::Runtime::Implementation::Internal::FormatStringToken*, ::uArray*))FormatStringLiteral__ToString_1;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool FormatStringLiteral__Equals(FormatStringLiteral* __this, ::uObject* obj)
{
    if (obj == NULL)
    {
        return false;
    }

    FormatStringLiteral* token = ::uAs< FormatStringLiteral*>(obj, FormatStringLiteral__typeof());

    if (token == NULL)
    {
        return false;
    }

    return ::app::Uno::String__op_Equality(NULL, __this->Lexeme(), ::uPtr< ::app::Uno::Runtime::Implementation::Internal::FormatStringLiteral*>(token)->Lexeme());
}

int FormatStringLiteral__GetHashCode(FormatStringLiteral* __this)
{
    return ::uPtr< ::uString*>(__this->Lexeme())->GetHashCode();
}

::uString* FormatStringLiteral__ToString_1(FormatStringLiteral* __this, ::uArray* objs)
{
    return __this->Lexeme();
}

void FormatStringLiteral___ObjInit_1(FormatStringLiteral* __this, ::uString* lexeme)
{
    ::app::Uno::Runtime::Implementation::Internal::FormatStringToken___ObjInit(__this, lexeme);
}

FormatStringLiteral* FormatStringLiteral__New_1(::uStatic* __this, ::uString* lexeme)
{
    FormatStringLiteral* inst = (::app::Uno::Runtime::Implementation::Internal::FormatStringLiteral*)::uAllocObject(sizeof(::app::Uno::Runtime::Implementation::Internal::FormatStringLiteral), ::app::Uno::Runtime::Implementation::Internal::FormatStringLiteral__typeof());
    inst->_ObjInit_1(lexeme);
    return inst;
}

}}}}}
