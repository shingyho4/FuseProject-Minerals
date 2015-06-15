// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.Component.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Entities_Component.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Entities_Component__uType* List__Fuse_Entities_Component__typeof()
{
    static List__Fuse_Entities_Component__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Entities_Component__uType*)::uAllocClassType(sizeof(List__Fuse_Entities_Component__uType), "Uno.Collections.List<Fuse.Entities.Component>", ::uObject__typeof(), 2, 1);
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Entities::Component*))List__Fuse_Entities_Component__Add;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Entities_Component__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Entities_Component__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Entities_Component__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Entities_Component__uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Entities_Component, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Entities_Component__get_Count(List__Fuse_Entities_Component* __this)
{
    return __this->_used;
}

::app::Fuse::Entities::Component* List__Fuse_Entities_Component__get_Item(List__Fuse_Entities_Component* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Entities::Component*>(index);
}

void List__Fuse_Entities_Component__set_Item(List__Fuse_Entities_Component* __this, int index, ::app::Fuse::Entities::Component* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Entities::Component*>(index) = value;
    __this->_version++;
}

void List__Fuse_Entities_Component__BoundsCheck(List__Fuse_Entities_Component* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Entities_Component__EnsureCapacity(List__Fuse_Entities_Component* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Entities::Component__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Entities::Component__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Entities::Component*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Entities::Component*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Entities_Component__Add(List__Fuse_Entities_Component* __this, ::app::Fuse::Entities::Component* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Entities::Component*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Entities_Component___ObjInit(List__Fuse_Entities_Component* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Entities_Component* List__Fuse_Entities_Component__New_1(::uStatic* __this)
{
    List__Fuse_Entities_Component* inst = (::app::Uno::Collections::List__Fuse_Entities_Component*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Entities_Component), ::app::Uno::Collections::List__Fuse_Entities_Component__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
