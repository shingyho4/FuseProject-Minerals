// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Face-d806112e.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour.h>

namespace app {
namespace Uno {
namespace Collections {

SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof()
{
    static SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Tesselation.Face,Fuse.Drawing.Contour>", ::uObject__typeof(), 3, 2);
        type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Contour*(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour, _source);
        type->StrongRefOffsets[1] = offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour, _select);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_select";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Contour* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__get_Current(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Fuse::Drawing::Contour*, ::app::Fuse::Drawing::Tesselation::Face*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(__this->_source)));
}

void SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__Dispose(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this)
{
}

bool SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__MoveNext(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

void SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour___ObjInit(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* inst = (::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour*)::uAllocObject(sizeof(::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour), ::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

}}}
