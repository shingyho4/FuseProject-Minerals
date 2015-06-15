// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-6fa82efb.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator__Fuse-dfdd7e01.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType* LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof()
{
    static LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType*)::uAllocClassType(sizeof(LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType), "Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable<Fuse.Drawing.Tesselation.HalfEdge>", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof();

        type->InterfaceOffsets[0] = offsetof(LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge, _first);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_first";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__GetEnumerator(LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__New_1(NULL, __this->_first, __this);
}

void LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge___ObjInit(LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* first)
{
    __this->_first = first;
}

}}}}}
