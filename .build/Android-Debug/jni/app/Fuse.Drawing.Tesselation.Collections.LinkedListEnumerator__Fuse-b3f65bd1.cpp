// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-e3d55017.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator__Fuse-b3f65bd1.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType* LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__typeof()
{
    static LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType*)::uAllocClassType(sizeof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType), "Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator<Fuse.Drawing.Tesselation.Vertex>", ::uObject__typeof(), 3, 3);
        type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Tesselation::Vertex*(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Vertex__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex, _enumerable);
        type->StrongRefOffsets[1] = offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex, _next);
        type->StrongRefOffsets[2] = offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex, _current);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_enumerable";
        type->StrongRefNames[1] = "_next";
        type->StrongRefNames[2] = "_current";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Tesselation::Vertex* LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__get_Current(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* __this)
{
    return __this->_current;
}

void LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__Dispose(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* __this)
{
}

bool LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__MoveNext(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* __this)
{
    if ((::uObject*)__this->_next == NULL)
    {
        return false;
    }

    __this->_current = __this->_next;
    __this->_next = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex*>(__this->_enumerable)->GetNext(__this->_current);
    return true;
}

void LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex___ObjInit(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* __this, ::app::Fuse::Drawing::Tesselation::Vertex* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex* enumerable)
{
    __this->_enumerable = enumerable;
    __this->_current = NULL;
    __this->_next = first;
}

LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex* enumerable)
{
    LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* inst = (::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex), ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__typeof());
    inst->_ObjInit(first, enumerable);
    return inst;
}

}}}}}
