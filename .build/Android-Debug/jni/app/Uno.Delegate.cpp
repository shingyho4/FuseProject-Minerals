// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Delegate.h>

namespace app {
namespace Uno {

Delegate__uType* Delegate__typeof()
{
    static Delegate__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Delegate__uType*)::uAllocClassType(sizeof(Delegate__uType), "Uno.Delegate", ::uObject__typeof());
        type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))Delegate__Equals;
        type->__fp_GetHashCode = (int(*)(::uObject*))Delegate__GetHashCode;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uDelegate* Delegate__Combine(::uStatic* __this, ::uDelegate* __source, ::uDelegate* __value)
{
    if (!__value)
        return __source;
    if (!__source)
        return __value;
    
    if (__source->__obj_type != __value->__obj_type)
        uThrowable::ThrowInvalidCast(XLI_FUNCTION, XLI_LINE);
    
    uDelegate clone;
    uDelegate *prev = &clone;
    
    for (uDelegate* d = __value; d != NULL; d = d->_prev)
    {
        prev = prev->_prev = ::uNewDelegateNonVirt(
            (::uDelegateType *)d->__obj_type, d->_func, d->_obj, d->_offset);
    }
    
    prev->_prev = __source;
    return clone._prev;
}

::uDelegate* Delegate__Remove(::uStatic* __this, ::uDelegate* __source, ::uDelegate* __value)
{
    if (__source == NULL || __value == NULL)
        return __source;
    
    if (__value->__obj_type != __source->__obj_type)
        uThrowable::ThrowInvalidCast(XLI_FUNCTION, XLI_LINE);
    
    for (uDelegate *first = __source; first != NULL; first = first->_prev)
    {
        bool match = true;
        uDelegate *last = first;
    
        for (uDelegate *d = __value; d != NULL; d = d->_prev, last = last->_prev)
        {
            if (last == NULL ||
                    d->_func != last->_func ||
                    d->_obj != last->_obj ||
                    d->_offset != last->_offset)
            {
                match = false;
                break;
            }
        }
    
        if (match)
        {
            uDelegate temp;
            uDelegate *prev = &temp;
    
            for (uDelegate *e = __source; e != first; e = e->_prev)
            {
                prev = prev->_prev = ::uNewDelegateNonVirt(
                    (::uDelegateType *)e->__obj_type, e->_func, e->_obj, e->_offset);
            }
    
            prev->_prev = last;
            return temp._prev;
        }
    }
    
    return __source;
}

bool Delegate__EqualsImpl(::uStatic* __this, ::uDelegate* __left, ::uDelegate* __right)
{
    return
        (__left == __right) ||
        (__left != NULL &&
         __right != NULL &&
         __left->__obj_type == __right->__obj_type &&
         __left->_func == __right->_func &&
         __left->_obj == __right->_obj &&
         __left->_offset == __right->_offset &&
         ::app::Uno::Object__Equals_1(NULL, __left->_prev, __right->_prev));
}

bool Delegate__Equals(::uDelegate* __this, ::uObject* other)
{
    return ::uIs(other, Delegate__typeof()) && Delegate__EqualsImpl(NULL, __this, ::uAs< ::uDelegate*>(other, Delegate__typeof()));
}

int Delegate__GetHashCode(::uDelegate* __this)
{
    return 0;
}

bool Delegate__op_Inequality(::uStatic* __this, ::uDelegate* left, ::uDelegate* right)
{
    return !Delegate__EqualsImpl(NULL, left, right);
}

bool Delegate__op_Equality(::uStatic* __this, ::uDelegate* left, ::uDelegate* right)
{
    return Delegate__EqualsImpl(NULL, left, right);
}

}}
