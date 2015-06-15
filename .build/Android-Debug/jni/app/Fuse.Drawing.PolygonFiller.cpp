// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\Rendering\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.Polygon.h>
#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Fuse.Drawing.RendererContext.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.Func__Fuse_Drawing_Border__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Contour__Fuse_Drawing_Border.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawing_Border.h>

namespace app {
namespace Fuse {
namespace Drawing {

PolygonFiller__uType* PolygonFiller__typeof()
{
    static PolygonFiller__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PolygonFiller__uType*)::uAllocClassType(sizeof(PolygonFiller__uType), "Fuse.Drawing.PolygonFiller", ::uObject__typeof(), 1, 2);
        type->__interface_0.__fp_Dispose = (void(*)(void*))PolygonFiller__Dispose;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(PolygonFiller__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(PolygonFiller, _fills);
        type->StrongRefOffsets[1] = offsetof(PolygonFiller, _antialiasingBorders);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_fills";
        type->StrongRefNames[1] = "_antialiasingBorders";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Rect PolygonFiller__get_Bounds(PolygonFiller* __this)
{
    if (__this->_hasBounds)
    {
        return __this->_bounds;
    }

    __this->_bounds = __this->CalcBounds();
    __this->_hasBounds = true;
    return __this->_bounds;
}

::app::Fuse::Drawing::Contour* PolygonFiller__Contour(PolygonFiller* __this, ::app::Fuse::Drawing::Border* border)
{
    return ::uPtr< ::app::Fuse::Drawing::Border*>(border)->Contour();
}

::app::Fuse::Drawing::Border* PolygonFiller__CreateBorder(PolygonFiller* __this, ::app::Fuse::Drawing::Contour* contour)
{
    return ::app::Fuse::Drawing::Border__New_1(NULL, ::app::Uno::Collections::EnumerableExtensions__ToArray__float2(NULL, ::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->Vertices()), __this->_px * 0.5f, -__this->_px);
}

::app::Uno::Rect PolygonFiller__CalcBounds(PolygonFiller* __this)
{
    if (::uPtr< ::uArray*>(__this->_fills)->Length() == 0)
    {
        return ::app::Uno::Rect__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f);
    }

    ::app::Uno::Rect r = ::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(::uPtr< ::uArray*>(__this->_fills)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(0))->CalcBounds();

    for (int i = 1; i < ::uPtr< ::uArray*>(__this->_fills)->Length(); ++i)
    {
        r = ::app::Uno::Rect__Union(NULL, r, ::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(::uPtr< ::uArray*>(__this->_fills)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(i))->CalcBounds());
    }

    return r;
}

void PolygonFiller__Draw_1(PolygonFiller* __this, ::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::uArray* array_126;
    int index_127 = int();
    int length_128 = int();

    for (array_123 = __this->_antialiasingBorders, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Fuse::Drawing::Border* aa = ::uPtr< ::uArray*>(array_123)->Item< ::app::Fuse::Drawing::Border*>(index_124);
        ::uPtr< ::app::Fuse::Drawing::Border*>(aa)->Draw(f, ctx);
    }

    for (array_126 = __this->_fills, index_127 = 0, length_128 = ::uPtr< ::uArray*>(array_126)->Length(); index_127 < length_128; ++index_127)
    {
        ::app::Fuse::Drawing::PolygonDrawable* fill = ::uPtr< ::uArray*>(array_126)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(index_127);
        ::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(fill)->Draw(f, ctx);
    }
}

void PolygonFiller__Dispose(PolygonFiller* __this)
{
    ::uArray* array_129;
    int index_130 = int();
    int length_131 = int();
    ::uArray* array_132;
    int index_133 = int();
    int length_134 = int();

    for (array_129 = __this->_antialiasingBorders, index_130 = 0, length_131 = ::uPtr< ::uArray*>(array_129)->Length(); index_130 < length_131; ++index_130)
    {
        ::app::Fuse::Drawing::Border* border = ::uPtr< ::uArray*>(array_129)->Item< ::app::Fuse::Drawing::Border*>(index_130);
        ::uPtr< ::app::Fuse::Drawing::Border*>(border)->Dispose();
    }

    for (array_132 = __this->_fills, index_133 = 0, length_134 = ::uPtr< ::uArray*>(array_132)->Length(); index_133 < length_134; ++index_133)
    {
        ::app::Fuse::Drawing::PolygonDrawable* fill = ::uPtr< ::uArray*>(array_132)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(index_133);
        ::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(fill)->Dispose();
    }
}

bool PolygonFiller__Intersects(PolygonFiller* __this, ::app::Uno::Float2 p)
{
    ::uArray* array_135;
    int index_136 = int();
    int length_137 = int();

    for (array_135 = __this->_fills, index_136 = 0, length_137 = ::uPtr< ::uArray*>(array_135)->Length(); index_136 < length_137; ++index_136)
    {
        ::app::Fuse::Drawing::PolygonDrawable* fill = ::uPtr< ::uArray*>(array_135)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(index_136);

        if (::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(fill)->Intersects(p))
        {
            return true;
        }
    }

    return false;
}

void PolygonFiller___ObjInit(PolygonFiller* __this, ::app::Fuse::Drawing::Polygon* polygon, int antialiasing, float density)
{
    __this->_density = density;

    if (antialiasing == 1)
    {
        __this->_px = 1.0f / density;
        ::uObject* boundaries = ::uPtr< ::app::Fuse::Drawing::Polygon*>(polygon)->GetBoundaryContours();
        __this->_antialiasingBorders = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_Border(NULL, ::app::Uno::Collections::EnumerableExtensions__Select__Fuse_Drawing_Contour__Fuse_Drawing_Border(NULL, boundaries, ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof(), (const void*)::app::Fuse::Drawing::PolygonFiller__CreateBorder, __this)));
        __this->_fills = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_PolygonDrawable(NULL, ::uPtr< ::app::Fuse::Drawing::Polygon*>(::app::Fuse::Drawing::Polygon__New_1(NULL, ::app::Uno::Collections::EnumerableExtensions__Select__Fuse_Drawing_Border__Fuse_Drawing_Contour(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Border__New_1(NULL, __this->_antialiasingBorders), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof(), (const void*)::app::Fuse::Drawing::PolygonFiller__Contour, __this))))->Triangulate());
    }
    else
    {
        __this->_fills = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_PolygonDrawable(NULL, ::uPtr< ::app::Fuse::Drawing::Polygon*>(polygon)->Triangulate());
        __this->_antialiasingBorders = ::uNewArray(::app::Fuse::Drawing::Border__typeof(), 0);
    }
}

PolygonFiller* PolygonFiller__New_1(::uStatic* __this, ::app::Fuse::Drawing::Polygon* polygon, int antialiasing, float density)
{
    PolygonFiller* inst = (::app::Fuse::Drawing::PolygonFiller*)::uAllocObject(sizeof(::app::Fuse::Drawing::PolygonFiller), ::app::Fuse::Drawing::PolygonFiller__typeof());
    inst->_ObjInit(polygon, antialiasing, density);
    return inst;
}

}}}
