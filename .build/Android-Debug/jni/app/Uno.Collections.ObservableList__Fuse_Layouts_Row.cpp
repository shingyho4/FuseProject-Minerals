// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Layouts.Row.h>
#include <app/Uno.Action__Fuse_Layouts_Row.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Collections.List__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.ObservableList__Fuse_Layouts_Row.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

ObservableList__Fuse_Layouts_Row__uType* ObservableList__Fuse_Layouts_Row__typeof()
{
    static ObservableList__Fuse_Layouts_Row__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ObservableList__Fuse_Layouts_Row__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Layouts_Row__uType), "Uno.Collections.ObservableList<Fuse.Layouts.Row>", ::uObject__typeof(), 2, 3);
        type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))ObservableList__Fuse_Layouts_Row__RemoveAt;
        type->__interface_0.__fp_get_Item = (::app::Fuse::Layouts::Row*(*)(void*, int))ObservableList__Fuse_Layouts_Row__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Layouts::Row*))ObservableList__Fuse_Layouts_Row__Add;
        type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Layouts_Row__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Layouts_Row__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Layouts_Row__typeof();

        type->InterfaceOffsets[0] = offsetof(ObservableList__Fuse_Layouts_Row__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ObservableList__Fuse_Layouts_Row__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(ObservableList__Fuse_Layouts_Row, items);
        type->StrongRefOffsets[1] = offsetof(ObservableList__Fuse_Layouts_Row, added);
        type->StrongRefOffsets[2] = offsetof(ObservableList__Fuse_Layouts_Row, removed);
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

int ObservableList__Fuse_Layouts_Row__get_Count(ObservableList__Fuse_Layouts_Row* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Count() : 0;
}

::app::Fuse::Layouts::Row* ObservableList__Fuse_Layouts_Row__get_Item(ObservableList__Fuse_Layouts_Row* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Item(index);
}

void ObservableList__Fuse_Layouts_Row__Add(ObservableList__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Layouts_Row__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Layouts::Row*>(item);
}

void ObservableList__Fuse_Layouts_Row__RemoveAt(ObservableList__Fuse_Layouts_Row* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Item(index));
}

bool ObservableList__Fuse_Layouts_Row__Remove(ObservableList__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Layouts::Row*>(item);
    }

    return res;
}

void ObservableList__Fuse_Layouts_Row___ObjInit(ObservableList__Fuse_Layouts_Row* __this, ::uDelegate* added, ::uDelegate* removed)
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

ObservableList__Fuse_Layouts_Row* ObservableList__Fuse_Layouts_Row__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Layouts_Row* inst = (::app::Uno::Collections::ObservableList__Fuse_Layouts_Row*)::uAllocObject(sizeof(::app::Uno::Collections::ObservableList__Fuse_Layouts_Row), ::app::Uno::Collections::ObservableList__Fuse_Layouts_Row__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

}}}
