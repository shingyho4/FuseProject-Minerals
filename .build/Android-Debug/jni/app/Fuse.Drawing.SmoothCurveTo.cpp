// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.SmoothCurveTo.h>
#include <app/Fuse.Drawing.Util.h>
#include <app/Uno.Float.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {

SmoothCurveTo__uType* SmoothCurveTo__typeof()
{
    static SmoothCurveTo__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SmoothCurveTo__uType*)::uAllocClassType(sizeof(SmoothCurveTo__uType), "Fuse.Drawing.SmoothCurveTo", ::app::Fuse::Drawing::CurveTo__typeof());
        type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))SmoothCurveTo__Serialize;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* SmoothCurveTo__Serialize(SmoothCurveTo* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("S "), ::uBox(::app::Uno::Float__typeof(), __this->ControlPointEnd().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->ControlPointEnd().Y)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().Y));
}

void SmoothCurveTo___ObjInit_3(SmoothCurveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 lastTangent, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    ::app::Fuse::Drawing::CurveTo___ObjInit_2(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastTangent);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, controlPointEnd);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, position);
    __this->CurveToCtor(prev, ::app::Uno::Float2__New_2(NULL, lastPosition.X, lastPosition.Y), ::app::Uno::Float2__op_Addition(NULL, lastPosition, lastTangent), ::app::Uno::Float2__New_2(NULL, controlPointEnd.X, controlPointEnd.Y), ::app::Uno::Float2__New_2(NULL, position.X, position.Y));
}

SmoothCurveTo* SmoothCurveTo__New_4(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 lastTangent, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    SmoothCurveTo* inst = (::app::Fuse::Drawing::SmoothCurveTo*)::uAllocObject(sizeof(::app::Fuse::Drawing::SmoothCurveTo), ::app::Fuse::Drawing::SmoothCurveTo__typeof());
    inst->_ObjInit_3(prev, lastPosition, lastTangent, controlPointEnd, position);
    return inst;
}

}}}
