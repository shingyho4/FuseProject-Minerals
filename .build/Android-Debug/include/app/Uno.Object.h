// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_OBJECT_H__
#define __APP_UNO_OBJECT_H__

#include <Uno/Uno.h>

namespace app {
namespace Uno {

::uType* Object__GetType(::uObject* __this);
int Object__GetHashCode(::uObject* __this);
bool Object__Equals(::uObject* __this, ::uObject* __o);
::uString* Object__ToString(::uObject* __this);
bool Object__Equals_1(::uStatic* __this, ::uObject* left, ::uObject* right);
bool Object__ReferenceEquals(::uStatic* __this, ::uObject* left, ::uObject* right);
::uObject* Object__New(::uStatic* __this);

struct Object
{
    static ::uType* GetType(::uObject* __this) { return Object__GetType(__this); }
    static int GetHashCode(::uObject* __this) { return (((::uClassType*)__this->__obj_type)->__fp_GetHashCode)(__this); }
    static bool Equals(::uObject* __this, ::uObject* __o) { return (((::uClassType*)__this->__obj_type)->__fp_Equals)(__this, __o); }
    static ::uString* ToString(::uObject* __this) { return (((::uClassType*)__this->__obj_type)->__fp_ToString)(__this); }
};

}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {

}}


#endif
