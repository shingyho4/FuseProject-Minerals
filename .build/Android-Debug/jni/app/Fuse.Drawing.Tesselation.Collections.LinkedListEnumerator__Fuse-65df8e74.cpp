// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-d70cd244.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator__Fuse-65df8e74.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType* LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__typeof()
{
    static LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType*)::uAllocClassType(sizeof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType), "Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator<Fuse.Drawing.Tesselation.Face>", ::uObject__typeof(), 3, 3);
        type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Tesselation::Face*(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face, _enumerable);
        type->StrongRefOffsets[1] = offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face, _next);
        type->StrongRefOffsets[2] = offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face, _current);
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

::app::Fuse::Drawing::Tesselation::Face* LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__get_Current(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* __this)
{
    return __this->_current;
}

void LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__Dispose(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* __this)
{
}

bool LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__MoveNext(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* __this)
{
    if ((::uObject*)__this->_next == NULL)
    {
        return false;
    }

    __this->_current = __this->_next;
    __this->_next = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face*>(__this->_enumerable)->GetNext(__this->_current);
    return true;
}

void LinkedListEnumerator__Fuse_Drawing_Tesselation_Face___ObjInit(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* __this, ::app::Fuse::Drawing::Tesselation::Face* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face* enumerable)
{
    __this->_enumerable = enumerable;
    __this->_current = NULL;
    __this->_next = first;
}

LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Face* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face* enumerable)
{
    LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* inst = (::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__Fuse_Drawing_Tesselation_Face*)::uAllocObject(sizeof(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__Fuse_Drawing_Tesselation_Face), ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__typeof());
    inst->_ObjInit(first, enumerable);
    return inst;
}

}}}}}
