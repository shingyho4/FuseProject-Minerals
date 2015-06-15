// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Byte4.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

Byte4__uType* Byte4__typeof()
{
    static Byte4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Byte4__uType*)::uAllocValueType(sizeof(Byte4__uType), "Uno.Byte4", sizeof(Byte4));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Byte4__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))Byte4__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))Byte4__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Byte4__Equals(Byte4* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Byte4__typeof(), *__this), o);
}

int Byte4__GetHashCode(Byte4* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Byte4__typeof(), *__this));
}

::uString* Byte4__ToString(Byte4* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::Byte::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Byte::ToString(__this->Y)), ::uGetConstString(", ")), ::app::Uno::Byte::ToString(__this->Z)), ::uGetConstString(", ")), ::app::Uno::Byte::ToString(__this->W));
}

void Byte4___ObjInit(Byte4* __this, ::uByte x, ::uByte y, ::uByte z, ::uByte w)
{
    __this->X = x;
    __this->Y = y;
    __this->Z = z;
    __this->W = w;
}

Byte4 Byte4__New_1(::uStatic* __this, ::uByte x, ::uByte y, ::uByte z, ::uByte w)
{
    Byte4 inst = ::uDefault< Byte4>();
    inst._ObjInit(x, y, z, w);
    return inst;
}

}}
