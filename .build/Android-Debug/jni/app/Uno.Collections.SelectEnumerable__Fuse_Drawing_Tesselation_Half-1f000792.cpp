// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Half-1f000792.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Half-3d4ca6da.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_HalfEdge__float2.h>

namespace app {
namespace Uno {
namespace Collections {

SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType* SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof()
{
    static SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType*)::uAllocClassType(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType), "Uno.Collections.SelectEnumerable<Fuse.Drawing.Tesselation.HalfEdge,float2>", ::uObject__typeof(), 1, 2);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__float2__typeof();

        type->InterfaceOffsets[0] = offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2, _source);
        type->StrongRefOffsets[1] = offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2, _select);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_select";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__GetEnumerator(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

void SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2___ObjInit(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* inst = (::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2*)::uAllocObject(sizeof(::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2), ::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

}}}
