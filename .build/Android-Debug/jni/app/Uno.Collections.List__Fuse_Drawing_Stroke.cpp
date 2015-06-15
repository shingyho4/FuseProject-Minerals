// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Stroke.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Stroke.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Drawing_Stroke__uType* List__Fuse_Drawing_Stroke__typeof()
{
    static List__Fuse_Drawing_Stroke__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Drawing_Stroke__uType*)::uAllocClassType(sizeof(List__Fuse_Drawing_Stroke__uType), "Uno.Collections.List<Fuse.Drawing.Stroke>", ::uObject__typeof(), 3, 1);
        type->__interface_0.__fp_get_Item = (::app::Fuse::Drawing::Stroke*(*)(void*, int))List__Fuse_Drawing_Stroke__get_Item;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Drawing::Stroke*))List__Fuse_Drawing_Stroke__Add;
        type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Drawing_Stroke__get_Count;
        type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Drawing_Stroke__GetEnumerator_boxed;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Drawing_Stroke__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Drawing_Stroke__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Drawing_Stroke__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(List__Fuse_Drawing_Stroke__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Drawing_Stroke, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Drawing_Stroke__get_Count(List__Fuse_Drawing_Stroke* __this)
{
    return __this->_used;
}

::app::Fuse::Drawing::Stroke* List__Fuse_Drawing_Stroke__get_Item(List__Fuse_Drawing_Stroke* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Stroke*>(index);
}

void List__Fuse_Drawing_Stroke__set_Item(List__Fuse_Drawing_Stroke* __this, int index, ::app::Fuse::Drawing::Stroke* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Stroke*>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke List__Fuse_Drawing_Stroke__GetEnumerator(List__Fuse_Drawing_Stroke* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke__New_1(NULL, __this);
}

void List__Fuse_Drawing_Stroke__BoundsCheck(List__Fuse_Drawing_Stroke* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Drawing_Stroke__EnsureCapacity(List__Fuse_Drawing_Stroke* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Drawing::Stroke__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Drawing::Stroke__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Drawing::Stroke*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Stroke*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Drawing_Stroke__Add(List__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Stroke*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Drawing_Stroke___ObjInit(List__Fuse_Drawing_Stroke* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Drawing_Stroke* List__Fuse_Drawing_Stroke__New_1(::uStatic* __this)
{
    List__Fuse_Drawing_Stroke* inst = (::app::Uno::Collections::List__Fuse_Drawing_Stroke*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Drawing_Stroke), ::app::Uno::Collections::List__Fuse_Drawing_Stroke__typeof());
    inst->_ObjInit();
    return inst;
}

::uObject* List__Fuse_Drawing_Stroke__GetEnumerator_boxed(List__Fuse_Drawing_Stroke* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke__typeof(), __this->GetEnumerator());
}

}}}
