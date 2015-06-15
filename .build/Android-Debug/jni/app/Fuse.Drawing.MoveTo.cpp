// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.MoveTo.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.Util.h>
#include <app/Uno.Float.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {

MoveTo__uType* MoveTo__typeof()
{
    static MoveTo__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MoveTo__uType*)::uAllocClassType(sizeof(MoveTo__uType), "Fuse.Drawing.MoveTo", ::app::Fuse::Drawing::ContourTerminator__typeof());
        type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))MoveTo__Serialize;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* MoveTo__Serialize(MoveTo* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("M "), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().Y));
}

void MoveTo___ObjInit_3(MoveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position)
{
    ::app::Fuse::Drawing::ContourTerminator___ObjInit_2(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, position);
    __this->ContourTerminatorCtor(prev, position);
}

MoveTo* MoveTo__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position)
{
    MoveTo* inst = (::app::Fuse::Drawing::MoveTo*)::uAllocObject(sizeof(::app::Fuse::Drawing::MoveTo), ::app::Fuse::Drawing::MoveTo__typeof());
    inst->_ObjInit_3(prev, position);
    return inst;
}

}}}
