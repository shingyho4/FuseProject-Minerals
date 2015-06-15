// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.SByte4.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {

SByte4__uType* SByte4__typeof()
{
    static SByte4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SByte4__uType*)::uAllocValueType(sizeof(SByte4__uType), "Uno.SByte4", sizeof(SByte4));
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))SByte4__Equals;
        type->__fp_GetHashCode_value = (int(*)(void*))SByte4__GetHashCode;
        type->__fp_ToString_value = (::uString*(*)(void*))SByte4__ToString;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool SByte4__Equals(SByte4* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(SByte4__typeof(), *__this), o);
}

int SByte4__GetHashCode(SByte4* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(SByte4__typeof(), *__this));
}

::uString* SByte4__ToString(SByte4* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::SByte::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::SByte::ToString(__this->Y)), ::uGetConstString(", ")), ::app::Uno::SByte::ToString(__this->Z)), ::uGetConstString(", ")), ::app::Uno::SByte::ToString(__this->W));
}

void SByte4___ObjInit_1(SByte4* __this, ::uSByte x, ::uSByte y, ::uSByte z, ::uSByte w)
{
    __this->X = x;
    __this->Y = y;
    __this->Z = z;
    __this->W = w;
}

SByte4 SByte4__New_2(::uStatic* __this, ::uSByte x, ::uSByte y, ::uSByte z, ::uSByte w)
{
    SByte4 inst = ::uDefault< SByte4>();
    inst._ObjInit_1(x, y, z, w);
    return inst;
}

}}
