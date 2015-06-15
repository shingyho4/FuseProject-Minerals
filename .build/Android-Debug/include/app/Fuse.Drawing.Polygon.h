// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_POLYGON_H__
#define __APP_FUSE_DRAWING_POLYGON_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Cache__Fuse_Drawing_Contour; } } }
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct Polygon;

struct Polygon__uType : ::uClassType
{
};

Polygon__uType* Polygon__typeof();

::uObject* Polygon__get_Contours(Polygon* __this);
bool Polygon__get_IsDegenerate(Polygon* __this);
Polygon* Polygon__Stroke(Polygon* __this, float Width, float Offset, int StartCap, int EndCap);
::uObject* Polygon__Triangulate(Polygon* __this);
::uArray* Polygon__GetTriangleVertices(Polygon* __this);
::uObject* Polygon__GetBoundaryContours(Polygon* __this);
void Polygon___ObjInit(Polygon* __this, ::uObject* contours);
Polygon* Polygon__New_1(::uStatic* __this, ::uObject* contours);
void Polygon___ObjInit_1(Polygon* __this, ::uDelegate* windingRule, ::uObject* contours);
Polygon* Polygon__New_2(::uStatic* __this, ::uDelegate* windingRule, ::uObject* contours);

struct Polygon : ::uObject
{
    ::uStrong< ::uDelegate*> _windingRule;
    ::uStrong< ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour*> _contours;
    ::uStrong< ::uArray*> _boundaryContours;

    Polygon* Stroke(float Width, float Offset, int StartCap, int EndCap) { return Polygon__Stroke(this, Width, Offset, StartCap, EndCap); }
    ::uObject* Triangulate() { return Polygon__Triangulate(this); }
    ::uArray* GetTriangleVertices() { return Polygon__GetTriangleVertices(this); }
    ::uObject* GetBoundaryContours() { return Polygon__GetBoundaryContours(this); }
    void _ObjInit(::uObject* contours) { Polygon___ObjInit(this, contours); }
    void _ObjInit_1(::uDelegate* windingRule, ::uObject* contours) { Polygon___ObjInit_1(this, windingRule, contours); }
    ::uObject* Contours() { return Polygon__get_Contours(this); }
    bool IsDegenerate() { return Polygon__get_IsDegenerate(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Drawing {

}}}


#endif
