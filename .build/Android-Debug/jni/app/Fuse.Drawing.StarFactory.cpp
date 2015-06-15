// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.StarFactory.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Drawing {

StarFactory__uType* StarFactory__typeof()
{
    static StarFactory__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (StarFactory__uType*)::uAllocClassType(sizeof(StarFactory__uType), "Fuse.Drawing.StarFactory");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::PathGeometry* StarFactory__AppendTo(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Points, float Radius, float spokeRadius, float cornerRatio, float rotation)
{
    float t = -6.28318548f / (float)(Points * 2);
    ::app::Uno::Float2 c = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self)->EndPosition();
    ::app::Fuse::Drawing::PathGeometry* g = self;

    for (int i = 0; i < (Points * 2); i++)
    {
        ::app::Uno::Float2 radius = ((i % 2) == 0) ? ::app::Uno::Float2__New_2(NULL, Radius, spokeRadius) : ::app::Uno::Float2__New_2(NULL, spokeRadius, Radius);
        ::app::Uno::Float2 pa = ::app::Uno::Float2__New_2(NULL, c.X + (::app::Uno::Math__Sin_1(NULL, (t * (float)i) + rotation) * radius.Item(0)), c.Y - (::app::Uno::Math__Cos_1(NULL, (t * (float)i) + rotation) * radius.Item(0)));
        ::app::Uno::Float2 pb = ::app::Uno::Float2__New_2(NULL, c.X + (::app::Uno::Math__Sin_1(NULL, (t * (float)(i + 1)) + rotation) * radius.Item(1)), c.Y - (::app::Uno::Math__Cos_1(NULL, (t * (float)(i + 1)) + rotation) * radius.Item(1)));

        if (i == 0)
        {
            g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->MoveTo_1(pa);
        }

        if (cornerRatio > 1e-05f)
        {
            ::app::Uno::Float2 na = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, (t * (float)i) + rotation), ::app::Uno::Math__Sin_1(NULL, (t * (float)i) + rotation));
            ::app::Uno::Float2 nb = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, (t * (float)(i + 1)) + rotation), ::app::Uno::Math__Sin_1(NULL, (t * (float)(i + 1)) + rotation));
            g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->CurveTo(::app::Uno::Float2__op_Subtraction(NULL, pa, ::app::Uno::Float2__op_Multiply(NULL, ::app::Uno::Float2__op_Multiply(NULL, na, cornerRatio), radius.Item(0))), ::app::Uno::Float2__op_Addition(NULL, pb, ::app::Uno::Float2__op_Multiply(NULL, ::app::Uno::Float2__op_Multiply(NULL, nb, cornerRatio), radius.Item(1))), pb);
        }
        else
        {
            g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->LineTo_1(pb);
        }
    }

    g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->ClosePath();
    return g;
}

}}}
