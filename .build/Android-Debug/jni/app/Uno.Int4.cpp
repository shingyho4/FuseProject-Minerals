// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Int4.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

Int4__uType* Int4__typeof()
{
    static Int4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Int4__uType*)::uAllocValueType(sizeof(Int4__uType), "Uno.Int4", sizeof(Int4));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Int4__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Int4__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Int4__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Int4__Equals(Int4* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Int4__typeof(), *__this), o);
}

int Int4__GetHashCode(Int4* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Int4__typeof(), *__this));
}

::uString* Int4__ToString(Int4* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::Int::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->Y)), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->Z)), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->W));
}

void Int4___ObjInit(Int4* __this, int x, int y, int z, int w)
{
    __this->X = x;
    __this->Y = y;
    __this->Z = z;
    __this->W = w;
}

Int4 Int4__New_1(::uStatic* __this, int x, int y, int z, int w)
{
    Int4 inst = ::uDefault< Int4>();
    inst._ObjInit(x, y, z, w);
    return inst;
}

}}
