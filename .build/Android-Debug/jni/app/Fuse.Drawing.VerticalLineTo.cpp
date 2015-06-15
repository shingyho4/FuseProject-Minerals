// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.Util.h>
#include <app/Fuse.Drawing.VerticalLineTo.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {

VerticalLineTo__uType* VerticalLineTo__typeof()
{
    static VerticalLineTo__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (VerticalLineTo__uType*)::uAllocClassType(sizeof(VerticalLineTo__uType), "Fuse.Drawing.VerticalLineTo", ::app::Fuse::Drawing::LineTo__typeof());
        type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))VerticalLineTo__Serialize;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* VerticalLineTo__Serialize(VerticalLineTo* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("V "), ::uBox(::app::Uno::Float__typeof(), __this->_y));
}

void VerticalLineTo___ObjInit_3(VerticalLineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float y)
{
    ::app::Fuse::Drawing::LineTo___ObjInit_2(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat(NULL, y);
    __this->LineToCtor(prev, lastPosition, ::app::Uno::Float2__New_2(NULL, lastPosition.X, y));
    __this->_y = y;
}

VerticalLineTo* VerticalLineTo__New_4(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float y)
{
    VerticalLineTo* inst = (::app::Fuse::Drawing::VerticalLineTo*)::uAllocObject(sizeof(::app::Fuse::Drawing::VerticalLineTo), ::app::Fuse::Drawing::VerticalLineTo__typeof());
    inst->_ObjInit_3(prev, lastPosition, y);
    return inst;
}

}}}
