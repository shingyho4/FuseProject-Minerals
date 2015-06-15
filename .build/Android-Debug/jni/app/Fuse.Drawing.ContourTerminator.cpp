// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.ContourTerminator.h>
#include <app/Uno.Collections.EmptyEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

ContourTerminator__uType* ContourTerminator__typeof()
{
    static ContourTerminator__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ContourTerminator__uType*)::uAllocClassType(sizeof(ContourTerminator__uType), "Fuse.Drawing.ContourTerminator", ::app::Fuse::Drawing::PathGeometry__typeof());
        type->__fp_get_EndsContour = (bool(*)(::app::Fuse::Drawing::PathGeometry*))ContourTerminator__get_EndsContour;
        type->__fp_FindStartOfLastContour = (::app::Uno::Float2(*)(::app::Fuse::Drawing::PathGeometry*))ContourTerminator__FindStartOfLastContour;
        type->__fp_EvaluateLast = (::uObject*(*)(::app::Fuse::Drawing::PathGeometry*))ContourTerminator__EvaluateLast;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool ContourTerminator__get_EndsContour(ContourTerminator* __this)
{
    return true;
}

void ContourTerminator__ContourTerminatorCtor(ContourTerminator* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position)
{
    __this->PathGeometryCtor(prev, position);
}

::app::Uno::Float2 ContourTerminator__FindStartOfLastContour(ContourTerminator* __this)
{
    return __this->EndPosition();
}

::uObject* ContourTerminator__EvaluateLast(ContourTerminator* __this)
{
    return (::uObject*)::app::Uno::Collections::EmptyEnumerable__float2__New_1(NULL);
}

void ContourTerminator___ObjInit_2(ContourTerminator* __this)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
}

}}}
