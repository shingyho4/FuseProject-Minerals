// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.Entity.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entity.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Entities_Entity__uType* List__Fuse_Entities_Entity__typeof()
{
    static List__Fuse_Entities_Entity__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Entities_Entity__uType*)::uAllocClassType(sizeof(List__Fuse_Entities_Entity__uType), "Uno.Collections.List<Fuse.Entities.Entity>", ::uObject__typeof(), 2, 1);
        type->__interface_0.__fp_get_Item = (::app::Fuse::Entities::Entity*(*)(void*, int))List__Fuse_Entities_Entity__get_Item;
        type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Entities_Entity__get_Count;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Entities_Entity__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Entities_Entity__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Entities_Entity__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Entities_Entity__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Entities_Entity, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Entities_Entity__get_Count(List__Fuse_Entities_Entity* __this)
{
    return __this->_used;
}

::app::Fuse::Entities::Entity* List__Fuse_Entities_Entity__get_Item(List__Fuse_Entities_Entity* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Entities::Entity*>(index);
}

void List__Fuse_Entities_Entity__set_Item(List__Fuse_Entities_Entity* __this, int index, ::app::Fuse::Entities::Entity* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Entities::Entity*>(index) = value;
    __this->_version++;
}

void List__Fuse_Entities_Entity__BoundsCheck(List__Fuse_Entities_Entity* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

}}}
