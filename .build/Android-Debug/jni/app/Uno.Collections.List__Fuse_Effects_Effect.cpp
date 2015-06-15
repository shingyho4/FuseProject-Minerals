// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Effects.Effect.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.List__Fuse_Effects_Effect.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Effects_Effect__uType* List__Fuse_Effects_Effect__typeof()
{
    static List__Fuse_Effects_Effect__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Effects_Effect__uType*)::uAllocClassType(sizeof(List__Fuse_Effects_Effect__uType), "Uno.Collections.List<Fuse.Effects.Effect>", ::uObject__typeof(), 3, 1);
        type->__interface_0.__fp_get_Item = (::app::Fuse::Effects::Effect*(*)(void*, int))List__Fuse_Effects_Effect__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Effects::Effect*))List__Fuse_Effects_Effect__Add;
        type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Effects_Effect__get_Count;
        type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Effects_Effect__GetEnumerator_boxed;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Effects_Effect__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Effects_Effect__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerable__Fuse_Effects_Effect__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Effects_Effect__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Effects_Effect__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(List__Fuse_Effects_Effect__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Effects_Effect, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Effects_Effect__get_Count(List__Fuse_Effects_Effect* __this)
{
    return __this->_used;
}

::app::Fuse::Effects::Effect* List__Fuse_Effects_Effect__get_Item(List__Fuse_Effects_Effect* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Effects::Effect*>(index);
}

void List__Fuse_Effects_Effect__set_Item(List__Fuse_Effects_Effect* __this, int index, ::app::Fuse::Effects::Effect* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Effects::Effect*>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Effects_Effect List__Fuse_Effects_Effect__GetEnumerator(List__Fuse_Effects_Effect* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Effects_Effect__New_1(NULL, __this);
}

void List__Fuse_Effects_Effect__BoundsCheck(List__Fuse_Effects_Effect* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Effects_Effect__EnsureCapacity(List__Fuse_Effects_Effect* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Effects::Effect__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Effects::Effect__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Effects::Effect*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Effects::Effect*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Effects_Effect__Add(List__Fuse_Effects_Effect* __this, ::app::Fuse::Effects::Effect* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Effects::Effect*>(__this->_used++) = item;
    __this->_version++;
}

bool List__Fuse_Effects_Effect__Remove(List__Fuse_Effects_Effect* __this, ::app::Fuse::Effects::Effect* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Effects_Effect(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Effects::Effect*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Effects_Effect__RemoveAt(List__Fuse_Effects_Effect* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Effects::Effect*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Effects::Effect*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Effects::Effect*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Effects_Effect___ObjInit(List__Fuse_Effects_Effect* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Effects_Effect* List__Fuse_Effects_Effect__New_1(::uStatic* __this)
{
    List__Fuse_Effects_Effect* inst = (::app::Uno::Collections::List__Fuse_Effects_Effect*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Effects_Effect), ::app::Uno::Collections::List__Fuse_Effects_Effect__typeof());
    inst->_ObjInit();
    return inst;
}

::uObject* List__Fuse_Effects_Effect__GetEnumerator_boxed(List__Fuse_Effects_Effect* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Effects_Effect__typeof(), __this->GetEnumerator());
}

}}}
