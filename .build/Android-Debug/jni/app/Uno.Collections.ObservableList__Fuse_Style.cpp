// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Style.h>
#include <app/Uno.Action__Fuse_Style.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Style.h>
#include <app/Uno.Collections.ObservableList__Fuse_Style.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

ObservableList__Fuse_Style__uType* ObservableList__Fuse_Style__typeof()
{
    static ObservableList__Fuse_Style__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ObservableList__Fuse_Style__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Style__uType), "Uno.Collections.ObservableList<Fuse.Style>", ::uObject__typeof(), 2, 3);
        type->__interface_0.__fp_get_Item = (::app::Fuse::Style*(*)(void*, int))ObservableList__Fuse_Style__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Style*))ObservableList__Fuse_Style__Add;
        type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Style__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Style__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Style__typeof();

        type->InterfaceOffsets[0] = offsetof(ObservableList__Fuse_Style__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ObservableList__Fuse_Style__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(ObservableList__Fuse_Style, items);
        type->StrongRefOffsets[1] = offsetof(ObservableList__Fuse_Style, added);
        type->StrongRefOffsets[2] = offsetof(ObservableList__Fuse_Style, removed);
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

int ObservableList__Fuse_Style__get_Count(ObservableList__Fuse_Style* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Count() : 0;
}

::app::Fuse::Style* ObservableList__Fuse_Style__get_Item(ObservableList__Fuse_Style* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Item(index);
}

void ObservableList__Fuse_Style__Add(ObservableList__Fuse_Style* __this, ::app::Fuse::Style* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Style__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Style*>(item);
}

void ObservableList__Fuse_Style___ObjInit(ObservableList__Fuse_Style* __this, ::uDelegate* added, ::uDelegate* removed)
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

ObservableList__Fuse_Style* ObservableList__Fuse_Style__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Style* inst = (::app::Uno::Collections::ObservableList__Fuse_Style*)::uAllocObject(sizeof(::app::Uno::Collections::ObservableList__Fuse_Style), ::app::Uno::Collections::ObservableList__Fuse_Style__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

}}}
