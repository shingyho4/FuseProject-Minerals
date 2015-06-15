// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Brush.h>
#include <app/Uno.Action__Fuse_Drawing_Brush.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Brush.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

ObservableList__Fuse_Drawing_Brush__uType* ObservableList__Fuse_Drawing_Brush__typeof()
{
    static ObservableList__Fuse_Drawing_Brush__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ObservableList__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Drawing_Brush__uType), "Uno.Collections.ObservableList<Fuse.Drawing.Brush>", ::uObject__typeof(), 3, 3);
        type->__interface_1.__fp_Clear = (void(*)(void*))ObservableList__Fuse_Drawing_Brush__Clear;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Drawing::Brush*))ObservableList__Fuse_Drawing_Brush__Add;
        type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Drawing_Brush__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Drawing_Brush__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush__typeof();

        type->InterfaceOffsets[0] = offsetof(ObservableList__Fuse_Drawing_Brush__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ObservableList__Fuse_Drawing_Brush__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(ObservableList__Fuse_Drawing_Brush__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(ObservableList__Fuse_Drawing_Brush, items);
        type->StrongRefOffsets[1] = offsetof(ObservableList__Fuse_Drawing_Brush, added);
        type->StrongRefOffsets[2] = offsetof(ObservableList__Fuse_Drawing_Brush, removed);
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

int ObservableList__Fuse_Drawing_Brush__get_Count(ObservableList__Fuse_Drawing_Brush* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Count() : 0;
}

::app::Fuse::Drawing::Brush* ObservableList__Fuse_Drawing_Brush__get_Item(ObservableList__Fuse_Drawing_Brush* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Item(index);
}

void ObservableList__Fuse_Drawing_Brush__Clear(ObservableList__Fuse_Drawing_Brush* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Drawing_Brush* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Drawing::Brush* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::Brush*>(i);
        }
    }
}

void ObservableList__Fuse_Drawing_Brush__Add(ObservableList__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Brush__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Drawing::Brush*>(item);
}

::uObject* ObservableList__Fuse_Drawing_Brush__GetEnumerator(ObservableList__Fuse_Drawing_Brush* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Brush__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Drawing_Brush___ObjInit(ObservableList__Fuse_Drawing_Brush* __this, ::uDelegate* added, ::uDelegate* removed)
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

ObservableList__Fuse_Drawing_Brush* ObservableList__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Drawing_Brush* inst = (::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*)::uAllocObject(sizeof(::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush), ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

}}}
