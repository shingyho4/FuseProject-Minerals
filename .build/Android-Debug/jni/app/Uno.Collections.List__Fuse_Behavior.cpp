// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Behavior.h>
#include <app/Uno.Collections.List__Fuse_Behavior.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Behavior__uType* List__Fuse_Behavior__typeof()
{
    static List__Fuse_Behavior__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Behavior__uType*)::uAllocClassType(sizeof(List__Fuse_Behavior__uType), "Uno.Collections.List<Fuse.Behavior>", ::uObject__typeof(), 2, 1);
        type->__interface_0.__fp_get_Item = (::app::Fuse::Behavior*(*)(void*, int))List__Fuse_Behavior__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Behavior*))List__Fuse_Behavior__Add;
        type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Behavior*))List__Fuse_Behavior__Remove;
        type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Behavior__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Behavior__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Behavior__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Behavior__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Behavior__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Behavior, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Behavior__get_Count(List__Fuse_Behavior* __this)
{
    return __this->_used;
}

::app::Fuse::Behavior* List__Fuse_Behavior__get_Item(List__Fuse_Behavior* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Behavior*>(index);
}

void List__Fuse_Behavior__set_Item(List__Fuse_Behavior* __this, int index, ::app::Fuse::Behavior* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Behavior*>(index) = value;
    __this->_version++;
}

void List__Fuse_Behavior__BoundsCheck(List__Fuse_Behavior* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Behavior__EnsureCapacity(List__Fuse_Behavior* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Behavior__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Behavior__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Behavior*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Behavior*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Behavior__Add(List__Fuse_Behavior* __this, ::app::Fuse::Behavior* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Behavior*>(__this->_used++) = item;
    __this->_version++;
}

bool List__Fuse_Behavior__Remove(List__Fuse_Behavior* __this, ::app::Fuse::Behavior* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Behavior(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Behavior*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Behavior__RemoveAt(List__Fuse_Behavior* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Behavior*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Behavior*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Behavior*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Behavior___ObjInit(List__Fuse_Behavior* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Behavior* List__Fuse_Behavior__New_1(::uStatic* __this)
{
    List__Fuse_Behavior* inst = (::app::Uno::Collections::List__Fuse_Behavior*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Behavior), ::app::Uno::Collections::List__Fuse_Behavior__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
