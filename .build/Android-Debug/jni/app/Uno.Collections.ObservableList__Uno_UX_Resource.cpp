// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Action__Uno_UX_Resource.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Collections.List__Uno_UX_Resource.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_Resource.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Uno {
namespace Collections {

ObservableList__Uno_UX_Resource__uType* ObservableList__Uno_UX_Resource__typeof()
{
    static ObservableList__Uno_UX_Resource__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ObservableList__Uno_UX_Resource__uType*)::uAllocClassType(sizeof(ObservableList__Uno_UX_Resource__uType), "Uno.Collections.ObservableList<Uno.UX.Resource>", ::uObject__typeof(), 2, 3);
        type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))ObservableList__Uno_UX_Resource__RemoveAt;
        type->__interface_0.__fp_get_Item = (::app::Uno::UX::Resource*(*)(void*, int))ObservableList__Uno_UX_Resource__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Uno::UX::Resource*))ObservableList__Uno_UX_Resource__Add;
        type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Uno_UX_Resource__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Uno_UX_Resource__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Uno_UX_Resource__typeof();

        type->InterfaceOffsets[0] = offsetof(ObservableList__Uno_UX_Resource__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ObservableList__Uno_UX_Resource__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(ObservableList__Uno_UX_Resource, items);
        type->StrongRefOffsets[1] = offsetof(ObservableList__Uno_UX_Resource, added);
        type->StrongRefOffsets[2] = offsetof(ObservableList__Uno_UX_Resource, removed);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "items";
        type->StrongRefNames[1] = "added";
        type->StrongRefNames[2] = "removed";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int ObservableList__Uno_UX_Resource__get_Count(ObservableList__Uno_UX_Resource* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Count() : 0;
}

::app::Uno::UX::Resource* ObservableList__Uno_UX_Resource__get_Item(ObservableList__Uno_UX_Resource* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Item(index);
}

void ObservableList__Uno_UX_Resource__Add(ObservableList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_Resource__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Uno::UX::Resource*>(item);
}

void ObservableList__Uno_UX_Resource__RemoveAt(ObservableList__Uno_UX_Resource* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Item(index));
}

bool ObservableList__Uno_UX_Resource__Remove(ObservableList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Uno::UX::Resource*>(item);
    }

    return res;
}

void ObservableList__Uno_UX_Resource___ObjInit(ObservableList__Uno_UX_Resource* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

ObservableList__Uno_UX_Resource* ObservableList__Uno_UX_Resource__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Uno_UX_Resource* inst = (::app::Uno::Collections::ObservableList__Uno_UX_Resource*)::uAllocObject(sizeof(::app::Uno::Collections::ObservableList__Uno_UX_Resource), ::app::Uno::Collections::ObservableList__Uno_UX_Resource__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

}}}
