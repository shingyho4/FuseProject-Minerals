// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.LineTo.h>
#include <app/Fuse.Drawing.Util.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__float2.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {

LineTo__uType* LineTo__typeof()
{
    static LineTo__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (LineTo__uType*)::uAllocClassType(sizeof(LineTo__uType), "Fuse.Drawing.LineTo", ::app::Fuse::Drawing::PathGeometry__typeof());
        type->__fp_get_HasLastBounds = (bool(*)(::app::Fuse::Drawing::PathGeometry*))LineTo__get_HasLastBounds;
        type->__fp_get_LastBounds = (::app::Uno::Rect(*)(::app::Fuse::Drawing::PathGeometry*))LineTo__get_LastBounds;
        type->__fp_EvaluateLast = (::uObject*(*)(::app::Fuse::Drawing::PathGeometry*))LineTo__EvaluateLast;
        type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))LineTo__Serialize;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool LineTo__get_HasLastBounds(LineTo* __this)
{
    return true;
}

::app::Uno::Rect LineTo__get_LastBounds(LineTo* __this)
{
    return ::app::Uno::Rect__ContainingPoints(NULL, __this->_lastPosition, __this->EndPosition());
}

void LineTo__LineToCtor(LineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position)
{
    __this->PathGeometryCtor(prev, position);
    __this->_lastPosition = lastPosition;
}

::uObject* LineTo__EvaluateLast(LineTo* __this)
{
    ::uArray* array_123;
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, (array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 2), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = __this->_lastPosition, ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = __this->EndPosition(), array_123));
}

::uString* LineTo__Serialize(LineTo* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("L "), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().Y));
}

void LineTo___ObjInit_1(LineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, position);
    __this->LineToCtor(prev, lastPosition, position);
}

LineTo* LineTo__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position)
{
    LineTo* inst = (::app::Fuse::Drawing::LineTo*)::uAllocObject(sizeof(::app::Fuse::Drawing::LineTo), ::app::Fuse::Drawing::LineTo__typeof());
    inst->_ObjInit_1(prev, lastPosition, position);
    return inst;
}

void LineTo___ObjInit_2(LineTo* __this)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
}

}}}
