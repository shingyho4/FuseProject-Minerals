// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Brush.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Brush.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Drawing_Brush__uType* List__Fuse_Drawing_Brush__typeof()
{
    static List__Fuse_Drawing_Brush__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(List__Fuse_Drawing_Brush__uType), "Uno.Collections.List<Fuse.Drawing.Brush>", ::uObject__typeof(), 3, 1);
        type->__interface_1.__fp_Clear = (void(*)(void*))List__Fuse_Drawing_Brush__Clear;
        type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Drawing::Brush*))List__Fuse_Drawing_Brush__Add;
        type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Drawing_Brush__GetEnumerator_boxed;

        type->Implements[0] = ::app::Uno::Collections::IList__Fuse_Drawing_Brush__typeof();
        type->Implements[1] = ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Drawing_Brush__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List__Fuse_Drawing_Brush__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(List__Fuse_Drawing_Brush__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Drawing_Brush, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Drawing_Brush__get_Count(List__Fuse_Drawing_Brush* __this)
{
    return __this->_used;
}

::app::Fuse::Drawing::Brush* List__Fuse_Drawing_Brush__get_Item(List__Fuse_Drawing_Brush* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Brush*>(index);
}

void List__Fuse_Drawing_Brush__set_Item(List__Fuse_Drawing_Brush* __this, int index, ::app::Fuse::Drawing::Brush* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Brush*>(index) = value;
    __this->_version++;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush List__Fuse_Drawing_Brush__GetEnumerator(List__Fuse_Drawing_Brush* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush__New_1(NULL, __this);
}

void List__Fuse_Drawing_Brush__BoundsCheck(List__Fuse_Drawing_Brush* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Drawing_Brush__EnsureCapacity(List__Fuse_Drawing_Brush* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Drawing::Brush__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Drawing::Brush__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Drawing::Brush*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Brush*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Drawing_Brush__Add(List__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Brush*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Drawing_Brush__Clear(List__Fuse_Drawing_Brush* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Fuse_Drawing_Brush___ObjInit(List__Fuse_Drawing_Brush* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Drawing_Brush* List__Fuse_Drawing_Brush__New_1(::uStatic* __this)
{
    List__Fuse_Drawing_Brush* inst = (::app::Uno::Collections::List__Fuse_Drawing_Brush*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Drawing_Brush), ::app::Uno::Collections::List__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit();
    return inst;
}

::uObject* List__Fuse_Drawing_Brush__GetEnumerator_boxed(List__Fuse_Drawing_Brush* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush__typeof(), __this->GetEnumerator());
}

}}}
