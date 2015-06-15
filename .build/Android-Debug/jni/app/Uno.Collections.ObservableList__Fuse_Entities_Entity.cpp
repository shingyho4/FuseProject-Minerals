// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.Entity.h>
#include <app/Uno.Action__Fuse_Entities_Entity.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.ObservableList__Fuse_Entities_Entity.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

ObservableList__Fuse_Entities_Entity__uType* ObservableList__Fuse_Entities_Entity__typeof()
{
    static ObservableList__Fuse_Entities_Entity__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ObservableList__Fuse_Entities_Entity__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Entities_Entity__uType), "Uno.Collections.ObservableList<Fuse.Entities.Entity>", ::uObject__typeof(), 2, 3);
        type->__interface_0.__fp_get_Item = (::app::Fuse::Entities::Entity*(*)(void*, int))ObservableList__Fuse_Entities_Entity__get_Item;
        type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Entities_Entity__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Entities_Entity__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Entities_Entity__typeof();

        type->InterfaceOffsets[0] = offsetof(ObservableList__Fuse_Entities_Entity__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ObservableList__Fuse_Entities_Entity__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(ObservableList__Fuse_Entities_Entity, items);
        type->StrongRefOffsets[1] = offsetof(ObservableList__Fuse_Entities_Entity, added);
        type->StrongRefOffsets[2] = offsetof(ObservableList__Fuse_Entities_Entity, removed);
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

int ObservableList__Fuse_Entities_Entity__get_Count(ObservableList__Fuse_Entities_Entity* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->Count() : 0;
}

::app::Fuse::Entities::Entity* ObservableList__Fuse_Entities_Entity__get_Item(ObservableList__Fuse_Entities_Entity* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->Item(index);
}

void ObservableList__Fuse_Entities_Entity___ObjInit(ObservableList__Fuse_Entities_Entity* __this, ::uDelegate* added, ::uDelegate* removed)
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

ObservableList__Fuse_Entities_Entity* ObservableList__Fuse_Entities_Entity__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Entities_Entity* inst = (::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*)::uAllocObject(sizeof(::app::Uno::Collections::ObservableList__Fuse_Entities_Entity), ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

}}}
