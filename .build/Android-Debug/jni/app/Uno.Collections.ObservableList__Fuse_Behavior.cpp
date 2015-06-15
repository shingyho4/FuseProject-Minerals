// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Behavior.h>
#include <app/Uno.Action__Fuse_Behavior.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Collections.List__Fuse_Behavior.h>
#include <app/Uno.Collections.ObservableList__Fuse_Behavior.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

ObservableList__Fuse_Behavior__uType* ObservableList__Fuse_Behavior__typeof()
{
    static ObservableList__Fuse_Behavior__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ObservableList__Fuse_Behavior__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Behavior__uType), "Uno.Collections.ObservableList<Fuse.Behavior>", ::uObject__typeof(), 2, 3);
        type->__interface_0.__fp_get_Item = (::app::Fuse::Behavior*(*)(void*, int))ObservableList__Fuse_Behavior__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Behavior*))ObservableList__Fuse_Behavior__Add;
        type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Behavior*))ObservableList__Fuse_Behavior__Remove;
        type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Behavior__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Behavior__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Behavior__typeof();

        type->InterfaceOffsets[0] = offsetof(ObservableList__Fuse_Behavior__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ObservableList__Fuse_Behavior__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(ObservableList__Fuse_Behavior, items);
        type->StrongRefOffsets[1] = offsetof(ObservableList__Fuse_Behavior, added);
        type->StrongRefOffsets[2] = offsetof(ObservableList__Fuse_Behavior, removed);
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

int ObservableList__Fuse_Behavior__get_Count(ObservableList__Fuse_Behavior* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Count() : 0;
}

::app::Fuse::Behavior* ObservableList__Fuse_Behavior__get_Item(ObservableList__Fuse_Behavior* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Item(index);
}

void ObservableList__Fuse_Behavior__Add(ObservableList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Behavior__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Behavior*>(item);
}

void ObservableList__Fuse_Behavior__RemoveAt(ObservableList__Fuse_Behavior* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Item(index));
}

bool ObservableList__Fuse_Behavior__Remove(ObservableList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Behavior*>(item);
    }

    return res;
}

void ObservableList__Fuse_Behavior___ObjInit(ObservableList__Fuse_Behavior* __this, ::uDelegate* added, ::uDelegate* removed)
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

ObservableList__Fuse_Behavior* ObservableList__Fuse_Behavior__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Behavior* inst = (::app::Uno::Collections::ObservableList__Fuse_Behavior*)::uAllocObject(sizeof(::app::Uno::Collections::ObservableList__Fuse_Behavior), ::app::Uno::Collections::ObservableList__Fuse_Behavior__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

}}}
