// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.ContourEnumerable.h>
#include <app/Fuse.Drawing.ContourEnumerator.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>

namespace app {
namespace Fuse {
namespace Drawing {

ContourEnumerable__uType* ContourEnumerable__typeof()
{
    static ContourEnumerable__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ContourEnumerable__uType*)::uAllocClassType(sizeof(ContourEnumerable__uType), "Fuse.Drawing.ContourEnumerable", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ContourEnumerable__GetEnumerator;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof();

        type->InterfaceOffsets[0] = offsetof(ContourEnumerable__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(ContourEnumerable, _head);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_head";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* ContourEnumerable__GetEnumerator(ContourEnumerable* __this)
{
    return (::uObject*)::app::Fuse::Drawing::ContourEnumerator__New_1(NULL, __this->_head, __this->_scale);
}

void ContourEnumerable___ObjInit(ContourEnumerable* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale)
{
    __this->_head = head;
    __this->_scale = scale;
}

ContourEnumerable* ContourEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale)
{
    ContourEnumerable* inst = (::app::Fuse::Drawing::ContourEnumerable*)::uAllocObject(sizeof(::app::Fuse::Drawing::ContourEnumerable), ::app::Fuse::Drawing::ContourEnumerable__typeof());
    inst->_ObjInit(head, scale);
    return inst;
}

}}}
