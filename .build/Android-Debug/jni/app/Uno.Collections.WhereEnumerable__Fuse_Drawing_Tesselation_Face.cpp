// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.WhereEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.WhereEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_Face.h>

namespace app {
namespace Uno {
namespace Collections {

WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType* WhereEnumerable__Fuse_Drawing_Tesselation_Face__typeof()
{
    static WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType*)::uAllocClassType(sizeof(WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType), "Uno.Collections.WhereEnumerable<Fuse.Drawing.Tesselation.Face>", ::uObject__typeof(), 1, 2);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))WhereEnumerable__Fuse_Drawing_Tesselation_Face__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face__typeof();

        type->InterfaceOffsets[0] = offsetof(WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(WhereEnumerable__Fuse_Drawing_Tesselation_Face, _source);
        type->StrongRefOffsets[1] = offsetof(WhereEnumerable__Fuse_Drawing_Tesselation_Face, _predicate);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_predicate";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* WhereEnumerable__Fuse_Drawing_Tesselation_Face__GetEnumerator(WhereEnumerable__Fuse_Drawing_Tesselation_Face* __this)
{
    return (::uObject*)::app::Uno::Collections::WhereEnumerator__Fuse_Drawing_Tesselation_Face__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_predicate);
}

void WhereEnumerable__Fuse_Drawing_Tesselation_Face___ObjInit(WhereEnumerable__Fuse_Drawing_Tesselation_Face* __this, ::uObject* source, ::uDelegate* predicate)
{
    __this->_source = source;
    __this->_predicate = predicate;
}

WhereEnumerable__Fuse_Drawing_Tesselation_Face* WhereEnumerable__Fuse_Drawing_Tesselation_Face__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* predicate)
{
    WhereEnumerable__Fuse_Drawing_Tesselation_Face* inst = (::app::Uno::Collections::WhereEnumerable__Fuse_Drawing_Tesselation_Face*)::uAllocObject(sizeof(::app::Uno::Collections::WhereEnumerable__Fuse_Drawing_Tesselation_Face), ::app::Uno::Collections::WhereEnumerable__Fuse_Drawing_Tesselation_Face__typeof());
    inst->_ObjInit(source, predicate);
    return inst;
}

}}}
