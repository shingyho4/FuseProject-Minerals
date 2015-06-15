// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Half-3d4ca6da.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_HalfEdge__float2.h>

namespace app {
namespace Uno {
namespace Collections {

SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType* SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof()
{
    static SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Tesselation.HalfEdge,float2>", ::uObject__typeof(), 3, 2);
        type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__float2__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2, _source);
        type->StrongRefOffsets[1] = offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2, _select);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_select";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__get_Current(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Uno::Float2, ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(__this->_source)));
}

void SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__Dispose(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this)
{
}

bool SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__MoveNext(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

void SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2___ObjInit(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* inst = (::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2*)::uAllocObject(sizeof(::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2), ::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

}}}
