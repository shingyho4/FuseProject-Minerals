// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.ClosePath.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.Util.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {

ClosePath__uType* ClosePath__typeof()
{
    static ClosePath__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ClosePath__uType*)::uAllocClassType(sizeof(ClosePath__uType), "Fuse.Drawing.ClosePath", ::app::Fuse::Drawing::ContourTerminator__typeof());
        type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))ClosePath__Serialize;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* ClosePath__Serialize(ClosePath* __this)
{
    return ::uGetConstString("Z");
}

void ClosePath___ObjInit_3(ClosePath* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition)
{
    ::app::Fuse::Drawing::ContourTerminator___ObjInit_2(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    __this->ContourTerminatorCtor(prev, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(prev)->FindStartOfLastContour());
    __this->_lastPosition = lastPosition;
}

ClosePath* ClosePath__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition)
{
    ClosePath* inst = (::app::Fuse::Drawing::ClosePath*)::uAllocObject(sizeof(::app::Fuse::Drawing::ClosePath), ::app::Fuse::Drawing::ClosePath__typeof());
    inst->_ObjInit_3(prev, lastPosition);
    return inst;
}

}}}
