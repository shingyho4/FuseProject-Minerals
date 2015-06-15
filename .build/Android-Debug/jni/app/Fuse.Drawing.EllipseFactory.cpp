// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.EllipseFactory.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

EllipseFactory__uType* EllipseFactory__typeof()
{
    static EllipseFactory__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EllipseFactory__uType*)::uAllocClassType(sizeof(EllipseFactory__uType), "Fuse.Drawing.EllipseFactory");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::PathGeometry* EllipseFactory__AppendTo(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, ::app::Uno::Float2 Radius)
{
    ::app::Uno::Float2 o = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self)->EndPosition();
    ::app::Uno::Float2 n = ::app::Uno::Float2__New_2(NULL, 0.0f, -Radius.Y);
    ::app::Uno::Float2 s = ::app::Uno::Float2__New_2(NULL, 0.0f, Radius.Y);
    ::app::Uno::Float2 w = ::app::Uno::Float2__New_2(NULL, -Radius.X, 0.0f);
    ::app::Uno::Float2 e = ::app::Uno::Float2__New_2(NULL, Radius.X, 0.0f);
    float p = 0.55f;
    return ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self->MoveTo_1(::app::Uno::Float2__op_Addition(NULL, o, w)))->CurveTo(::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__op_Addition(NULL, o, w), ::app::Uno::Float2__op_Multiply(NULL, s, p)), ::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__op_Addition(NULL, o, s), ::app::Uno::Float2__op_Multiply(NULL, w, p)), ::app::Uno::Float2__op_Addition(NULL, o, s)))->CurveTo(::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__op_Addition(NULL, o, s), ::app::Uno::Float2__op_Multiply(NULL, e, p)), ::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__op_Addition(NULL, o, e), ::app::Uno::Float2__op_Multiply(NULL, s, p)), ::app::Uno::Float2__op_Addition(NULL, o, e)))->CurveTo(::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__op_Addition(NULL, o, e), ::app::Uno::Float2__op_Multiply(NULL, n, p)), ::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__op_Addition(NULL, o, n), ::app::Uno::Float2__op_Multiply(NULL, e, p)), ::app::Uno::Float2__op_Addition(NULL, o, n)))->CurveTo(::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__op_Addition(NULL, o, n), ::app::Uno::Float2__op_Multiply(NULL, w, p)), ::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__op_Addition(NULL, o, w), ::app::Uno::Float2__op_Multiply(NULL, n, p)), ::app::Uno::Float2__op_Addition(NULL, o, w)))->ClosePath())->MoveTo_1(o);
}

}}}
