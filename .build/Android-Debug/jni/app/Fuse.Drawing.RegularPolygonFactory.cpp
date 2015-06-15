// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.RegularPolygonFactory.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Drawing {

RegularPolygonFactory__uType* RegularPolygonFactory__typeof()
{
    static RegularPolygonFactory__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (RegularPolygonFactory__uType*)::uAllocClassType(sizeof(RegularPolygonFactory__uType), "Fuse.Drawing.RegularPolygonFactory");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::PathGeometry* RegularPolygonFactory__AppendTo(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Sides, float Radius)
{
    float t = -6.28318548f / (float)Sides;
    ::app::Uno::Float2 c = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self)->EndPosition();
    ::app::Fuse::Drawing::PathGeometry* g = self->MoveTo(c.X, c.Y - Radius);

    for (int i = 1; i < Sides; i++)
    {
        g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->LineTo(c.X + (::app::Uno::Math__Sin_1(NULL, t * (float)i) * Radius), c.Y - (::app::Uno::Math__Cos_1(NULL, t * (float)i) * Radius));
    }

    g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->ClosePath();
    return g;
}

}}}
