// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <Xli/Traits.h>

namespace app {
namespace Uno {

::uType* Object__GetType(::uObject* __this)
{
    return __this->__obj_type;
}

int Object__GetHashCode(::uObject* __this)
{
    switch (__this->__obj_type->TypeType)
    {
    case uTypeTypeValue:
        return (int)Xli::DefaultTraits::Hash((const Xli::UInt8*)__this + sizeof(uObject), (int)__this->__obj_type->ValueSize);
    
    default:
        return (int)Xli::DefaultTraits::Hash(__this);
    }
}

bool Object__Equals(::uObject* __this, ::uObject* __o)
{
    switch (__this->__obj_type->TypeType)
    {
    case uTypeTypeValue:
        return __this == __o ||
               (__o != NULL &&
                __o->__obj_type == __this->__obj_type &&
                !memcmp((const uByte*)__this + sizeof(uObject), (const uByte*)__o + sizeof(uObject), __this->__obj_type->ValueSize));
    
    default:
        return __this == __o;
    }
}

::uString* Object__ToString(::uObject* __this)
{
    return uNewStringUtf8(__this->__obj_type->TypeName);
}

bool Object__Equals_1(::uStatic* __this, ::uObject* left, ::uObject* right)
{
    if (left == right)
    {
        return true;
    }

    if ((left == NULL) || (right == NULL))
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::uObject*>(left), right);
}

bool Object__ReferenceEquals(::uStatic* __this, ::uObject* left, ::uObject* right)
{
    return left == right;
}

::uObject* Object__New(::uStatic* __this)
{
    ::uObject* inst = (::uObject*)::uAllocObject(sizeof(::uObject), ::uObject__typeof());
    return inst;
}

}}
