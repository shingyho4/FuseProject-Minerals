// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.HorizontalLineTo.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.Util.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {

HorizontalLineTo__uType* HorizontalLineTo__typeof()
{
    static HorizontalLineTo__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HorizontalLineTo__uType*)::uAllocClassType(sizeof(HorizontalLineTo__uType), "Fuse.Drawing.HorizontalLineTo", ::app::Fuse::Drawing::LineTo__typeof());
        type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))HorizontalLineTo__Serialize;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* HorizontalLineTo__Serialize(HorizontalLineTo* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("H "), ::uBox(::app::Uno::Float__typeof(), __this->_x));
}

void HorizontalLineTo___ObjInit_3(HorizontalLineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float x)
{
    ::app::Fuse::Drawing::LineTo___ObjInit_2(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat(NULL, x);
    __this->LineToCtor(prev, lastPosition, ::app::Uno::Float2__New_2(NULL, x, lastPosition.Y));
    __this->_x = x;
}

HorizontalLineTo* HorizontalLineTo__New_4(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float x)
{
    HorizontalLineTo* inst = (::app::Fuse::Drawing::HorizontalLineTo*)::uAllocObject(sizeof(::app::Fuse::Drawing::HorizontalLineTo), ::app::Fuse::Drawing::HorizontalLineTo__typeof());
    inst->_ObjInit_3(prev, lastPosition, x);
    return inst;
}

}}}
