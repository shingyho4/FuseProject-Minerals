// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.ClosePath.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.ContourEnumerator.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.List__float2.h>
#include <app/Uno.Collections.List__Fuse_Drawing_PathGeometry.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Drawing {

ContourEnumerator__uType* ContourEnumerator__typeof()
{
    static ContourEnumerator__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ContourEnumerator__uType*)::uAllocClassType(sizeof(ContourEnumerator__uType), "Fuse.Drawing.ContourEnumerator", ::uObject__typeof(), 3, 2);
        type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Contour*(*)(void*))ContourEnumerator__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))ContourEnumerator__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))ContourEnumerator__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(ContourEnumerator__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(ContourEnumerator__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(ContourEnumerator__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(ContourEnumerator, _currentHead);
        type->StrongRefOffsets[1] = offsetof(ContourEnumerator, _current);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_currentHead";
        type->StrongRefNames[1] = "_current";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Contour* ContourEnumerator__get_Current(ContourEnumerator* __this)
{
    return __this->_current;
}

bool ContourEnumerator__MoveNext(ContourEnumerator* __this)
{
    if (__this->_currentHead == NULL)
    {
        return false;
    }

    bool isClosed = ::uIs(__this->_currentHead, ::app::Fuse::Drawing::ClosePath__typeof());
    ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry* revPath = ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry__New_1(NULL);

    do
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(revPath)->Add(__this->_currentHead);
        __this->_currentHead = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_currentHead)->RemoveLast();
    }
    while ((__this->_currentHead != NULL) && !::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_currentHead)->EndsContour());

    ::app::Uno::Collections::List__float2* vertices = ::app::Uno::Collections::List__float2__New_1(NULL);

    for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(revPath)->Count() - 1; i >= 0; --i)
    {
        ::uObject* headVertices = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(revPath)->Item(i))->EvaluateLast();

        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(headVertices)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Uno::Float2 v = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(enum_123));
            ::uPtr< ::app::Uno::Collections::List__float2*>(vertices)->Add(::app::Uno::Float2__op_Multiply_1(NULL, v, __this->_scale));
        }
    }

    __this->_current = ::app::Fuse::Drawing::Contour__New_2(NULL, isClosed, (::uObject*)vertices);
    return true;
}

void ContourEnumerator__Dispose(ContourEnumerator* __this)
{
}

void ContourEnumerator___ObjInit(ContourEnumerator* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale)
{
    __this->_currentHead = head;
    __this->_scale = scale;
}

ContourEnumerator* ContourEnumerator__New_1(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale)
{
    ContourEnumerator* inst = (::app::Fuse::Drawing::ContourEnumerator*)::uAllocObject(sizeof(::app::Fuse::Drawing::ContourEnumerator), ::app::Fuse::Drawing::ContourEnumerator__typeof());
    inst->_ObjInit(head, scale);
    return inst;
}

}}}
