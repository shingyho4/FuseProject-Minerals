// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.RectangleFactory.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Drawing {

RectangleFactory__uType* RectangleFactory__typeof()
{
    static RectangleFactory__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (RectangleFactory__uType*)::uAllocClassType(sizeof(RectangleFactory__uType), "Fuse.Drawing.RectangleFactory");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::PathGeometry* RectangleFactory__AppendTo(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius)
{
    ::app::Uno::Float2 o = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self)->EndPosition();
    float t = o.Y;
    float b = t + Size.Y;
    float l = o.X;
    float r = l + Size.X;

    if (::app::Uno::Float4__op_Equality(NULL, CornerRadius, ::app::Uno::Float4__New_1(NULL, 0.0f)))
    {
        return ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self)->MoveTo_1(o))->LineTo(l, b))->LineTo(r, b))->LineTo(r, t))->ClosePath();
    }

    ::app::Uno::Float4 cornerRadius = CornerRadius;

    if ((cornerRadius.X + cornerRadius.Y) > Size.X)
    {
        float f = Size.X / (cornerRadius.X + cornerRadius.Y);
        cornerRadius.X = cornerRadius.X * f;
        cornerRadius.Y = cornerRadius.Y * f;
    }

    if ((cornerRadius.Y + cornerRadius.Z) > Size.Y)
    {
        float f = Size.Y / (cornerRadius.Y + cornerRadius.Z);
        cornerRadius.Y = cornerRadius.Y * f;
        cornerRadius.Z = cornerRadius.Z * f;
    }

    if ((cornerRadius.Z + cornerRadius.W) > Size.X)
    {
        float f = Size.X / (cornerRadius.Z + cornerRadius.W);
        cornerRadius.Z = cornerRadius.Z * f;
        cornerRadius.W = cornerRadius.W * f;
    }

    if ((cornerRadius.W + cornerRadius.X) > Size.Y)
    {
        float f = Size.Y / (cornerRadius.W + cornerRadius.X);
        cornerRadius.W = cornerRadius.W * f;
        cornerRadius.X = cornerRadius.X * f;
    }

    ::app::Uno::Float2 rtlx = ::app::Uno::Float2__New_2(NULL, cornerRadius.X, 0.0f);
    ::app::Uno::Float2 rtly = ::app::Uno::Float2__New_2(NULL, 0.0f, cornerRadius.X);
    ::app::Uno::Float2 rtrx = ::app::Uno::Float2__New_2(NULL, cornerRadius.Y, 0.0f);
    ::app::Uno::Float2 rtry = ::app::Uno::Float2__New_2(NULL, 0.0f, cornerRadius.Y);
    ::app::Uno::Float2 rbrx = ::app::Uno::Float2__New_2(NULL, cornerRadius.Z, 0.0f);
    ::app::Uno::Float2 rbry = ::app::Uno::Float2__New_2(NULL, 0.0f, cornerRadius.Z);
    ::app::Uno::Float2 rblx = ::app::Uno::Float2__New_2(NULL, cornerRadius.W, 0.0f);
    ::app::Uno::Float2 rbly = ::app::Uno::Float2__New_2(NULL, 0.0f, cornerRadius.W);
    ::app::Uno::Float2 tl = ::app::Uno::Float2__New_2(NULL, l, t);
    ::app::Uno::Float2 tr = ::app::Uno::Float2__New_2(NULL, r, t);
    ::app::Uno::Float2 bl = ::app::Uno::Float2__New_2(NULL, l, b);
    ::app::Uno::Float2 br = ::app::Uno::Float2__New_2(NULL, r, b);
    float p = 0.45f;
    return ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self->MoveTo_1(::app::Uno::Float2__op_Subtraction(NULL, bl, rbly)))->CurveTo(::app::Uno::Float2__op_Subtraction(NULL, bl, ::app::Uno::Float2__op_Multiply(NULL, rbly, p)), ::app::Uno::Float2__op_Addition(NULL, bl, ::app::Uno::Float2__op_Multiply(NULL, rblx, p)), ::app::Uno::Float2__op_Addition(NULL, bl, rblx)))->LineTo_1(::app::Uno::Float2__op_Subtraction(NULL, br, rbrx)))->CurveTo(::app::Uno::Float2__op_Subtraction(NULL, br, ::app::Uno::Float2__op_Multiply(NULL, rbrx, p)), ::app::Uno::Float2__op_Subtraction(NULL, br, ::app::Uno::Float2__op_Multiply(NULL, rbry, p)), ::app::Uno::Float2__op_Subtraction(NULL, br, rbry)))->LineTo_1(::app::Uno::Float2__op_Addition(NULL, tr, rtry)))->CurveTo(::app::Uno::Float2__op_Addition(NULL, tr, ::app::Uno::Float2__op_Multiply(NULL, rtry, p)), ::app::Uno::Float2__op_Subtraction(NULL, tr, ::app::Uno::Float2__op_Multiply(NULL, rtrx, p)), ::app::Uno::Float2__op_Subtraction(NULL, tr, rtrx)))->LineTo_1(::app::Uno::Float2__op_Addition(NULL, tl, rtlx)))->CurveTo(::app::Uno::Float2__op_Addition(NULL, tl, ::app::Uno::Float2__op_Multiply(NULL, rtlx, p)), ::app::Uno::Float2__op_Addition(NULL, tl, ::app::Uno::Float2__op_Multiply(NULL, rtly, p)), ::app::Uno::Float2__op_Addition(NULL, tl, rtly)))->ClosePath())->MoveTo_1(o);
}

}}}
