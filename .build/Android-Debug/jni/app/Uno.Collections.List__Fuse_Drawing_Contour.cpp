// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Contour.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Contour.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Drawing_Contour__uType* List__Fuse_Drawing_Contour__typeof()
{
    static List__Fuse_Drawing_Contour__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(List__Fuse_Drawing_Contour__uType), "Uno.Collections.List<Fuse.Drawing.Contour>", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Drawing_Contour__GetEnumerator_boxed;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Drawing_Contour__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Drawing_Contour, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Contour List__Fuse_Drawing_Contour__GetEnumerator(List__Fuse_Drawing_Contour* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Contour__New_1(NULL, __this);
}

void List__Fuse_Drawing_Contour__EnsureCapacity(List__Fuse_Drawing_Contour* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Drawing::Contour__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Drawing::Contour__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Drawing::Contour*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Contour*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Drawing_Contour__Add(List__Fuse_Drawing_Contour* __this, ::app::Fuse::Drawing::Contour* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Contour*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Drawing_Contour___ObjInit(List__Fuse_Drawing_Contour* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Drawing_Contour* List__Fuse_Drawing_Contour__New_1(::uStatic* __this)
{
    List__Fuse_Drawing_Contour* inst = (::app::Uno::Collections::List__Fuse_Drawing_Contour*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Drawing_Contour), ::app::Uno::Collections::List__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit();
    return inst;
}

::uObject* List__Fuse_Drawing_Contour__GetEnumerator_boxed(List__Fuse_Drawing_Contour* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Contour__typeof(), __this->GetEnumerator());
}

}}}
