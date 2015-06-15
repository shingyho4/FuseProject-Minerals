// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Face-ad236a2a.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Face-d806112e.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour.h>

namespace app {
namespace Uno {
namespace Collections {

SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof()
{
    static SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType), "Uno.Collections.SelectEnumerable<Fuse.Drawing.Tesselation.Face,Fuse.Drawing.Contour>", ::uObject__typeof(), 1, 2);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof();

        type->InterfaceOffsets[0] = offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour, _source);
        type->StrongRefOffsets[1] = offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour, _select);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_select";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__GetEnumerator(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

void SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour___ObjInit(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* inst = (::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour*)::uAllocObject(sizeof(::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour), ::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

}}}
