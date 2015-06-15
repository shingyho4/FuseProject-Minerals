// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Stroke.h>
#include <app/Uno.Action__Fuse_Drawing_Stroke.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

ObservableList__Fuse_Drawing_Stroke__uType* ObservableList__Fuse_Drawing_Stroke__typeof()
{
    static ObservableList__Fuse_Drawing_Stroke__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ObservableList__Fuse_Drawing_Stroke__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Drawing_Stroke__uType), "Uno.Collections.ObservableList<Fuse.Drawing.Stroke>", ::uObject__typeof(), 3, 3);
        type->__interface_0.__fp_get_Item = (::app::Fuse::Drawing::Stroke*(*)(void*, int))ObservableList__Fuse_Drawing_Stroke__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Drawing::Stroke*))ObservableList__Fuse_Drawing_Stroke__Add;
        type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Drawing_Stroke__get_Count;
        type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Drawing_Stroke__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Drawing_Stroke__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke__typeof();

        type->InterfaceOffsets[0] = offsetof(ObservableList__Fuse_Drawing_Stroke__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ObservableList__Fuse_Drawing_Stroke__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(ObservableList__Fuse_Drawing_Stroke__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(ObservableList__Fuse_Drawing_Stroke, items);
        type->StrongRefOffsets[1] = offsetof(ObservableList__Fuse_Drawing_Stroke, added);
        type->StrongRefOffsets[2] = offsetof(ObservableList__Fuse_Drawing_Stroke, removed);
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

int ObservableList__Fuse_Drawing_Stroke__get_Count(ObservableList__Fuse_Drawing_Stroke* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Count() : 0;
}

::app::Fuse::Drawing::Stroke* ObservableList__Fuse_Drawing_Stroke__get_Item(ObservableList__Fuse_Drawing_Stroke* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Item(index);
}

void ObservableList__Fuse_Drawing_Stroke__Add(ObservableList__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Stroke__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Drawing::Stroke*>(item);
}

::uObject* ObservableList__Fuse_Drawing_Stroke__GetEnumerator(ObservableList__Fuse_Drawing_Stroke* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Stroke__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Drawing_Stroke___ObjInit(ObservableList__Fuse_Drawing_Stroke* __this, ::uDelegate* added, ::uDelegate* removed)
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

ObservableList__Fuse_Drawing_Stroke* ObservableList__Fuse_Drawing_Stroke__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Drawing_Stroke* inst = (::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*)::uAllocObject(sizeof(::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke), ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

}}}
