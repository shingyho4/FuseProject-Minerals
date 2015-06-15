// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Uno.Collections.WhereEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_Face.h>

namespace app {
namespace Uno {
namespace Collections {

WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType* WhereEnumerator__Fuse_Drawing_Tesselation_Face__typeof()
{
    static WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType*)::uAllocClassType(sizeof(WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType), "Uno.Collections.WhereEnumerator<Fuse.Drawing.Tesselation.Face>", ::uObject__typeof(), 3, 3);
        type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Tesselation::Face*(*)(void*))WhereEnumerator__Fuse_Drawing_Tesselation_Face__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))WhereEnumerator__Fuse_Drawing_Tesselation_Face__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))WhereEnumerator__Fuse_Drawing_Tesselation_Face__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(WhereEnumerator__Fuse_Drawing_Tesselation_Face, _source);
        type->StrongRefOffsets[1] = offsetof(WhereEnumerator__Fuse_Drawing_Tesselation_Face, _predicate);
        type->StrongRefOffsets[2] = offsetof(WhereEnumerator__Fuse_Drawing_Tesselation_Face, _current);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_predicate";
        type->StrongRefNames[2] = "_current";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Tesselation::Face* WhereEnumerator__Fuse_Drawing_Tesselation_Face__get_Current(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this)
{
    return __this->_current;
}

void WhereEnumerator__Fuse_Drawing_Tesselation_Face__Dispose(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this)
{
}

bool WhereEnumerator__Fuse_Drawing_Tesselation_Face__MoveNext(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this)
{
    while (true)
    {
        if (!::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source)))
        {
            return false;
        }

        if (::uPtr< ::uDelegate*>(__this->_predicate)->Invoke< bool, ::app::Fuse::Drawing::Tesselation::Face*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(__this->_source))))
        {
            __this->_current = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(__this->_source));
            return true;
        }
    }

    return false;
}

void WhereEnumerator__Fuse_Drawing_Tesselation_Face___ObjInit(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this, ::uObject* source, ::uDelegate* predicate)
{
    __this->_source = source;
    __this->_predicate = predicate;
}

WhereEnumerator__Fuse_Drawing_Tesselation_Face* WhereEnumerator__Fuse_Drawing_Tesselation_Face__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* predicate)
{
    WhereEnumerator__Fuse_Drawing_Tesselation_Face* inst = (::app::Uno::Collections::WhereEnumerator__Fuse_Drawing_Tesselation_Face*)::uAllocObject(sizeof(::app::Uno::Collections::WhereEnumerator__Fuse_Drawing_Tesselation_Face), ::app::Uno::Collections::WhereEnumerator__Fuse_Drawing_Tesselation_Face__typeof());
    inst->_ObjInit(source, predicate);
    return inst;
}

}}}
