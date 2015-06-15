// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.EllipseFactory.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryExtensions.h>
#include <app/Fuse.Drawing.RectangleFactory.h>
#include <app/Fuse.Drawing.RegularPolygonFactory.h>
#include <app/Fuse.Drawing.StarFactory.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Drawing {

PathGeometryExtensions__uType* PathGeometryExtensions__typeof()
{
    static PathGeometryExtensions__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PathGeometryExtensions__uType*)::uAllocClassType(sizeof(PathGeometryExtensions__uType), "Fuse.Drawing.PathGeometryExtensions");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__RegularPolygon(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Sides, float Radius)
{
    return ::app::Fuse::Drawing::RegularPolygonFactory__AppendTo(NULL, self, Sides, Radius);
}

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Star(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Corners, float Radius, float SpokeRadius, float CornerRatio, float rotation)
{
    return ::app::Fuse::Drawing::StarFactory__AppendTo(NULL, self, Corners, Radius, SpokeRadius, CornerRatio, rotation);
}

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Circle(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, float Radius)
{
    return ::app::Fuse::Drawing::EllipseFactory__AppendTo(NULL, self, ::app::Uno::Float2__New_1(NULL, Radius));
}

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Ellipse(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, ::app::Uno::Float2 Radius)
{
    return ::app::Fuse::Drawing::EllipseFactory__AppendTo(NULL, self, Radius);
}

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Rectangle(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius)
{
    return ::app::Fuse::Drawing::RectangleFactory__AppendTo(NULL, self, Size, CornerRadius);
}

}}}
