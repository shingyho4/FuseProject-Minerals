// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Transform.h>
#include <app/Uno.Collections.List__Fuse_Transform.h>
#include <app/Uno.Generic.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Transform__uType* List__Fuse_Transform__typeof()
{
    static List__Fuse_Transform__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Transform__uType*)::uAllocClassType(sizeof(List__Fuse_Transform__uType), "Uno.Collections.List<Fuse.Transform>", ::uObject__typeof(), 2, 1);
        type->__interface_0.__fp_get_Item = (::app::Fuse::Transform*(*)(void*, int))List__Fuse_Transform__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Transform*))List__Fuse_Transform__Add;
        type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Transform*))List__Fuse_Transform__Remove;
        type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Transform__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Transform__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Transform__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Transform__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Transform__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Transform, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Transform__get_Count(List__Fuse_Transform* __this)
{
    return __this->_used;
}

::app::Fuse::Transform* List__Fuse_Transform__get_Item(List__Fuse_Transform* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Transform*>(index);
}

void List__Fuse_Transform__set_Item(List__Fuse_Transform* __this, int index, ::app::Fuse::Transform* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Transform*>(index) = value;
    __this->_version++;
}

void List__Fuse_Transform__BoundsCheck(List__Fuse_Transform* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Transform__EnsureCapacity(List__Fuse_Transform* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Transform__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Transform__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Transform*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Transform*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Transform__Add(List__Fuse_Transform* __this, ::app::Fuse::Transform* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Transform*>(__this->_used++) = item;
    __this->_version++;
}

bool List__Fuse_Transform__Remove(List__Fuse_Transform* __this, ::app::Fuse::Transform* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Transform(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Transform*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Transform__RemoveAt(List__Fuse_Transform* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Transform*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Transform*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Transform*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Transform___ObjInit(List__Fuse_Transform* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Transform* List__Fuse_Transform__New_1(::uStatic* __this)
{
    List__Fuse_Transform* inst = (::app::Uno::Collections::List__Fuse_Transform*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Transform), ::app::Uno::Collections::List__Fuse_Transform__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
