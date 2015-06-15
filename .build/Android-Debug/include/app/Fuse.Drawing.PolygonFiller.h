// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Rendering\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_POLYGON_FILLER_H__
#define __APP_FUSE_DRAWING_POLYGON_FILLER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <app/Uno.Rect.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Border; } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }
namespace app { namespace Fuse { namespace Drawing { struct Polygon; } } }
namespace app { namespace Fuse { namespace Drawing { struct PolygonDrawable; } } }
namespace app { namespace Fuse { namespace Drawing { struct RendererContext; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct PolygonFiller;

struct PolygonFiller__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

PolygonFiller__uType* PolygonFiller__typeof();

::app::Uno::Rect PolygonFiller__get_Bounds(PolygonFiller* __this);
::app::Fuse::Drawing::Contour* PolygonFiller__Contour(PolygonFiller* __this, ::app::Fuse::Drawing::Border* border);
::app::Fuse::Drawing::Border* PolygonFiller__CreateBorder(PolygonFiller* __this, ::app::Fuse::Drawing::Contour* contour);
::app::Uno::Rect PolygonFiller__CalcBounds(PolygonFiller* __this);
void PolygonFiller__Draw_1(PolygonFiller* __this, ::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx);
void PolygonFiller__Dispose(PolygonFiller* __this);
bool PolygonFiller__Intersects(PolygonFiller* __this, ::app::Uno::Float2 p);
void PolygonFiller___ObjInit(PolygonFiller* __this, ::app::Fuse::Drawing::Polygon* polygon, int antialiasing, float density);
PolygonFiller* PolygonFiller__New_1(::uStatic* __this, ::app::Fuse::Drawing::Polygon* polygon, int antialiasing, float density);

struct PolygonFiller : ::uObject
{
    ::uStrong< ::uArray*> _fills;
    ::uStrong< ::uArray*> _antialiasingBorders;
    float _px;
    float _density;
    bool _hasBounds;
    ::app::Uno::Rect _bounds;

    ::app::Fuse::Drawing::Contour* Contour(::app::Fuse::Drawing::Border* border) { return PolygonFiller__Contour(this, border); }
    ::app::Fuse::Drawing::Border* CreateBorder(::app::Fuse::Drawing::Contour* contour) { return PolygonFiller__CreateBorder(this, contour); }
    ::app::Uno::Rect CalcBounds();
    void Draw_1(::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx) { PolygonFiller__Draw_1(this, f, ctx); }
    void Dispose() { PolygonFiller__Dispose(this); }
    bool Intersects(::app::Uno::Float2 p);
    void _ObjInit(::app::Fuse::Drawing::Polygon* polygon, int antialiasing, float density) { PolygonFiller___ObjInit(this, polygon, antialiasing, density); }
    ::app::Uno::Rect Bounds();
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::app::Uno::Rect PolygonFiller::CalcBounds() { return PolygonFiller__CalcBounds(this); }
inline bool PolygonFiller::Intersects(::app::Uno::Float2 p) { return PolygonFiller__Intersects(this, p); }
inline ::app::Uno::Rect PolygonFiller::Bounds() { return PolygonFiller__get_Bounds(this); }

}}}


#endif
