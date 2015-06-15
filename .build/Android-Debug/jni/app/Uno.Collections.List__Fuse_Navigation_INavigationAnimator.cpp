// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.INavigationAnimator.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Navigation_INavigationAnimator__uType* List__Fuse_Navigation_INavigationAnimator__typeof()
{
    static List__Fuse_Navigation_INavigationAnimator__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Navigation_INavigationAnimator__uType*)::uAllocClassType(sizeof(List__Fuse_Navigation_INavigationAnimator__uType), "Uno.Collections.List<Fuse.Navigation.INavigationAnimator>", ::uObject__typeof(), 2, 1);
        type->__interface_0.__fp_get_Item = (::uObject*(*)(void*, int))List__Fuse_Navigation_INavigationAnimator__get_Item;
        type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Navigation_INavigationAnimator__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Navigation_INavigationAnimator__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Navigation_INavigationAnimator__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Navigation_INavigationAnimator__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Navigation_INavigationAnimator__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Navigation_INavigationAnimator, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Navigation_INavigationAnimator__get_Count(List__Fuse_Navigation_INavigationAnimator* __this)
{
    return __this->_used;
}

::uObject* List__Fuse_Navigation_INavigationAnimator__get_Item(List__Fuse_Navigation_INavigationAnimator* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(index);
}

void List__Fuse_Navigation_INavigationAnimator__set_Item(List__Fuse_Navigation_INavigationAnimator* __this, int index, ::uObject* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(index) = value;
    __this->_version++;
}

void List__Fuse_Navigation_INavigationAnimator__BoundsCheck(List__Fuse_Navigation_INavigationAnimator* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Navigation_INavigationAnimator__EnsureCapacity(List__Fuse_Navigation_INavigationAnimator* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Navigation::INavigationAnimator__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Navigation::INavigationAnimator__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Navigation_INavigationAnimator__Add(List__Fuse_Navigation_INavigationAnimator* __this, ::uObject* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Navigation_INavigationAnimator___ObjInit_1(List__Fuse_Navigation_INavigationAnimator* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Fuse::Navigation::INavigationAnimator__typeof(), capacity);
    __this->_used = 0;
}

List__Fuse_Navigation_INavigationAnimator* List__Fuse_Navigation_INavigationAnimator__New_2(::uStatic* __this, int capacity)
{
    List__Fuse_Navigation_INavigationAnimator* inst = (::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator), ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator__typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

}}}
