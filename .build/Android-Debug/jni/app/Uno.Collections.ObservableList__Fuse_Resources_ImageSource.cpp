// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.ImageSource.h>
#include <app/Uno.Action__Fuse_Resources_ImageSource.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.List__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.ObservableList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

ObservableList__Fuse_Resources_ImageSource__uType* ObservableList__Fuse_Resources_ImageSource__typeof()
{
    static ObservableList__Fuse_Resources_ImageSource__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ObservableList__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Resources_ImageSource__uType), "Uno.Collections.ObservableList<Fuse.Resources.ImageSource>", ::uObject__typeof(), 3, 3);
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Resources::ImageSource*))ObservableList__Fuse_Resources_ImageSource__Add;
        type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Resources_ImageSource__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Resources_ImageSource__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Resources_ImageSource__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerable__Fuse_Resources_ImageSource__typeof();

        type->InterfaceOffsets[0] = offsetof(ObservableList__Fuse_Resources_ImageSource__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ObservableList__Fuse_Resources_ImageSource__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(ObservableList__Fuse_Resources_ImageSource__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(ObservableList__Fuse_Resources_ImageSource, items);
        type->StrongRefOffsets[1] = offsetof(ObservableList__Fuse_Resources_ImageSource, added);
        type->StrongRefOffsets[2] = offsetof(ObservableList__Fuse_Resources_ImageSource, removed);
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

void ObservableList__Fuse_Resources_ImageSource__Add(ObservableList__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Resources_ImageSource__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Resources::ImageSource*>(item);
}

::uObject* ObservableList__Fuse_Resources_ImageSource__GetEnumerator(ObservableList__Fuse_Resources_ImageSource* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Resources_ImageSource__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Resources_ImageSource___ObjInit(ObservableList__Fuse_Resources_ImageSource* __this, ::uDelegate* added, ::uDelegate* removed)
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

ObservableList__Fuse_Resources_ImageSource* ObservableList__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Resources_ImageSource* inst = (::app::Uno::Collections::ObservableList__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(::app::Uno::Collections::ObservableList__Fuse_Resources_ImageSource), ::app::Uno::Collections::ObservableList__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

}}}
