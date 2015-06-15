// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

List__Fuse_Drawing_Batching_Batch__uType* List__Fuse_Drawing_Batching_Batch__typeof()
{
    static List__Fuse_Drawing_Batching_Batch__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List__Fuse_Drawing_Batching_Batch__uType*)::uAllocClassType(sizeof(List__Fuse_Drawing_Batching_Batch__uType), "Uno.Collections.List<Fuse.Drawing.Batching.Batch>", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Drawing_Batching_Batch__GetEnumerator_boxed;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch__typeof();

        type->InterfaceOffsets[0] = offsetof(List__Fuse_Drawing_Batching_Batch__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(List__Fuse_Drawing_Batching_Batch, _data);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_data";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Batching_Batch List__Fuse_Drawing_Batching_Batch__GetEnumerator(List__Fuse_Drawing_Batching_Batch* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Batching_Batch__New_1(NULL, __this);
}

::uArray* List__Fuse_Drawing_Batching_Batch__ToArray(List__Fuse_Drawing_Batching_Batch* __this)
{
    ::uArray* t = ::uNewArray(::app::Fuse::Drawing::Batching::Batch__typeof(), __this->_used);

    for (int i = 0; i < __this->_used; i++)
    {
        t->ItemStrong< ::app::Fuse::Drawing::Batching::Batch*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Batching::Batch*>(i);
    }

    return t;
}

void List__Fuse_Drawing_Batching_Batch__EnsureCapacity(List__Fuse_Drawing_Batching_Batch* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Drawing::Batching::Batch__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Drawing::Batching::Batch__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Drawing::Batching::Batch*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Batching::Batch*>(i);
        }

        __this->_data = newData;
    }
}

void List__Fuse_Drawing_Batching_Batch__Add(List__Fuse_Drawing_Batching_Batch* __this, ::app::Fuse::Drawing::Batching::Batch* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Batching::Batch*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Drawing_Batching_Batch___ObjInit(List__Fuse_Drawing_Batching_Batch* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Drawing_Batching_Batch* List__Fuse_Drawing_Batching_Batch__New_1(::uStatic* __this)
{
    List__Fuse_Drawing_Batching_Batch* inst = (::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch*)::uAllocObject(sizeof(::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch), ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch__typeof());
    inst->_ObjInit();
    return inst;
}

::uObject* List__Fuse_Drawing_Batching_Batch__GetEnumerator_boxed(List__Fuse_Drawing_Batching_Batch* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Batching_Batch__typeof(), __this->GetEnumerator());
}

}}}
