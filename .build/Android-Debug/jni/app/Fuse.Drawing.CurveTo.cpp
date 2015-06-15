// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.App.h>
#include <app/Fuse.Drawing.BezierOp.h>
#include <app/Fuse.Drawing.CurveTo.h>
#include <app/Fuse.Drawing.Util.h>
#include <app/Fuse.IWindow.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Float.h>
#include <app/Uno.Geometry.CubicBezier.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {

CurveTo__uType* CurveTo__typeof()
{
    static CurveTo__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CurveTo__uType*)::uAllocClassType(sizeof(CurveTo__uType), "Fuse.Drawing.CurveTo", ::app::Fuse::Drawing::PathGeometry__typeof());
        type->__fp_get_EndTangent = (::app::Uno::Float2(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__get_EndTangent;
        type->__fp_get_HasLastBounds = (bool(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__get_HasLastBounds;
        type->__fp_get_LastBounds = (::app::Uno::Rect(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__get_LastBounds;
        type->__fp_EvaluateLast = (::uObject*(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__EvaluateLast;
        type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__Serialize;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float2 CurveTo__get_EndTangent(CurveTo* __this)
{
    return ::app::Uno::Float2__op_Subtraction(NULL, __this->EndPosition(), __this->ControlPointEnd());
}

bool CurveTo__get_HasLastBounds(CurveTo* __this)
{
    return true;
}

::app::Uno::Rect CurveTo__get_LastBounds(CurveTo* __this)
{
    return ::app::Fuse::Drawing::BezierOp__GetRect(NULL, __this->_lastPosition, __this->_controlPointStart, __this->_controlPointEnd, __this->EndPosition());
}

::app::Uno::Float2 CurveTo__get_ControlPointEnd(CurveTo* __this)
{
    return __this->_controlPointEnd;
}

void CurveTo__CurveToCtor(CurveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    __this->PathGeometryCtor(prev, position);
    __this->_lastPosition = lastPosition;
    __this->_controlPointStart = controlPointStart;
    __this->_controlPointEnd = controlPointEnd;
}

::uObject* CurveTo__EvaluateLast(CurveTo* __this)
{
    ::uObject* w = ::app::Fuse::App__get_CurrentWindow(NULL);
    float maxError = 0.5f / ((w == NULL) ? 1.0f : ::app::Fuse::IWindow::PPIZoomMultiplier(::uPtr< ::uObject*>(w)));
    return ::app::Uno::Geometry::CubicBezier__Subdivide(NULL, __this->_lastPosition, __this->_controlPointStart, __this->_controlPointEnd, __this->EndPosition(), maxError);
}

::uString* CurveTo__Serialize(CurveTo* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("C "), ::uBox(::app::Uno::Float__typeof(), __this->_controlPointStart.X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->_controlPointStart.Y)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->_controlPointEnd.X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->_controlPointEnd.Y)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().Y));
}

void CurveTo___ObjInit_1(CurveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, controlPointStart);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, controlPointEnd);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, position);
    __this->CurveToCtor(prev, lastPosition, controlPointStart, controlPointEnd, position);
}

CurveTo* CurveTo__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    CurveTo* inst = (::app::Fuse::Drawing::CurveTo*)::uAllocObject(sizeof(::app::Fuse::Drawing::CurveTo), ::app::Fuse::Drawing::CurveTo__typeof());
    inst->_ObjInit_1(prev, lastPosition, controlPointStart, controlPointEnd, position);
    return inst;
}

void CurveTo___ObjInit_2(CurveTo* __this)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
}

}}}
