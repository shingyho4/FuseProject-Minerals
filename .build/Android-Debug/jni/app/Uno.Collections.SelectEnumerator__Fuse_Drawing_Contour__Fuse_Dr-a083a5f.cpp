// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.1.0\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Contour__Fuse_Dr-a083a5f.h>
#include <app/Uno.Func__Fuse_Drawing_Contour__Fuse_Drawing_Border.h>

namespace app {
namespace Uno {
namespace Collections {

SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType* SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof()
{
    static SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Contour,Fuse.Drawing.Border>", ::uObject__typeof(), 3, 2);
        type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Border*(*)(void*))SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__get_Current;
        type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__Dispose;
        type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__MoveNext;

        type->Implements[0] = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Border__typeof();
        type->Implements[1] = ::app::Uno::IDisposable__typeof();
        type->Implements[2] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType, __interface_2);

        type->StrongRefOffsets[0] = offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border, _source);
        type->StrongRefOffsets[1] = offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border, _select);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_select";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Border* SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__get_Current(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Fuse::Drawing::Border*, ::app::Fuse::Drawing::Contour*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour::Current(::uPtr< ::uObject*>(__this->_source)));
}

void SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__Dispose(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this)
{
}

bool SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__MoveNext(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

void SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border___ObjInit(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* inst = (::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border*)::uAllocObject(sizeof(::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border), ::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

}}}
