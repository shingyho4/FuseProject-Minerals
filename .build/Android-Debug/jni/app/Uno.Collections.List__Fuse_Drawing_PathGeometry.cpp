// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Drawing_PathGeometry.h>
#include <app/Uno.IndexOutOfRangeException.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Drawing_PathGeometry__uType* List__Fuse_Drawing_PathGeometry__typeof()
{
    static List__Fuse_Drawing_PathGeometry__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Drawing_PathGeometry__uType*)::uAllocClassType(sizeof(List__Fuse_Drawing_PathGeometry__uType), "Uno.Collections.List<Fuse.Drawing.PathGeometry>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(List__Fuse_Drawing_PathGeometry, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int List__Fuse_Drawing_PathGeometry__get_Count(List__Fuse_Drawing_PathGeometry* __this)
{
    return __this->_used;
}

::app::Fuse::Drawing::PathGeometry* List__Fuse_Drawing_PathGeometry__get_Item(List__Fuse_Drawing_PathGeometry* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::PathGeometry*>(index);
}

void List__Fuse_Drawing_PathGeometry__set_Item(List__Fuse_Drawing_PathGeometry* __this, int index, ::app::Fuse::Drawing::PathGeometry* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::PathGeometry*>(index) = value;
    __this->_version++;
}

void List__Fuse_Drawing_PathGeometry__BoundsCheck(List__Fuse_Drawing_PathGeometry* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Drawing_PathGeometry__EnsureCapacity(List__Fuse_Drawing_PathGeometry* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Drawing::PathGeometry__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Drawing::PathGeometry__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Drawing::PathGeometry*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::PathGeometry*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Drawing_PathGeometry__Add(List__Fuse_Drawing_PathGeometry* __this, ::app::Fuse::Drawing::PathGeometry* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::PathGeometry*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Drawing_PathGeometry___ObjInit(List__Fuse_Drawing_PathGeometry* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Drawing_PathGeometry* List__Fuse_Drawing_PathGeometry__New_1(::uStatic* __this)
{
    List__Fuse_Drawing_PathGeometry* inst = (::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Drawing_PathGeometry), ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
