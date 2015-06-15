// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryRenderer.h>
#include <app/Fuse.Drawing.Polygon.h>
#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Fuse.Drawing.RendererContext.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Drawing.WindingRules.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Drawing_Stroke.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Collections.Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_P-21be5771.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fu-97ecb3f2.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Fuse_Drawing_Strok-9a918635.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__Fuse_Dr-390a808.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing-40811987.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Predicate__int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Drawing {

PathGeometryRenderer__uType* PathGeometryRenderer__typeof()
{
    static PathGeometryRenderer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PathGeometryRenderer__uType*)::uAllocClassType(sizeof(PathGeometryRenderer__uType), "Fuse.Drawing.PathGeometryRenderer", ::uObject__typeof(), 0, 7);
        type->StrongRefOffsets[0] = offsetof(PathGeometryRenderer, _fills);
        type->StrongRefOffsets[1] = offsetof(PathGeometryRenderer, _fillRenderer);
        type->StrongRefOffsets[2] = offsetof(PathGeometryRenderer, _strokes);
        type->StrongRefOffsets[3] = offsetof(PathGeometryRenderer, _strokeRenderers);
        type->StrongRefOffsets[4] = offsetof(PathGeometryRenderer, _geometry);
        type->StrongRefOffsets[5] = offsetof(PathGeometryRenderer, _fillRule);
        type->StrongRefOffsets[6] = offsetof(PathGeometryRenderer, VisualInvalidated);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_fills";
        type->StrongRefNames[1] = "_fillRenderer";
        type->StrongRefNames[2] = "_strokes";
        type->StrongRefNames[3] = "_strokeRenderers";
        type->StrongRefNames[4] = "_geometry";
        type->StrongRefNames[5] = "_fillRule";
        type->StrongRefNames[6] = "VisualInvalidated";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Brush* PathGeometryRenderer__get_Fill(PathGeometryRenderer* __this)
{
    return __this->HasFills() ? ::app::Uno::Collections::EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Brush_1(NULL, (::uObject*)__this->Fills()) : NULL;
}

void PathGeometryRenderer__set_Fill(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* value)
{
    if ((__this->HasFills() && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count() == 1)) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Item(0) == value))
    {
        return;
    }

    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Clear(::uPtr< ::uObject*>(__this->Fills()));

    if (value != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(__this->Fills()), value);
    }
}

::uObject* PathGeometryRenderer__get_Fills(PathGeometryRenderer* __this)
{
    ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush* ind_129;
    return (::uObject*)(ind_129 = __this->_fills, ((ind_129 != NULL) ? ind_129 : (__this->_fills = ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Brush__typeof(), (const void*)::app::Fuse::Drawing::PathGeometryRenderer__OnFillAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Brush__typeof(), (const void*)::app::Fuse::Drawing::PathGeometryRenderer__OnFillRemoved, __this)))));
}

bool PathGeometryRenderer__get_HasFills(PathGeometryRenderer* __this)
{
    return (__this->_fills != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count() > 0);
}

::uObject* PathGeometryRenderer__get_Strokes(PathGeometryRenderer* __this)
{
    ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke* ind_130;
    return (::uObject*)(ind_130 = __this->_strokes, ((ind_130 != NULL) ? ind_130 : (__this->_strokes = ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)::app::Fuse::Drawing::PathGeometryRenderer__OnStrokeAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)::app::Fuse::Drawing::PathGeometryRenderer__OnStrokeRemoved, __this)))));
}

bool PathGeometryRenderer__get_HasStrokes(PathGeometryRenderer* __this)
{
    return (__this->_strokes != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Count() > 0);
}

::app::Fuse::Drawing::PathGeometry* PathGeometryRenderer__get_Geometry(PathGeometryRenderer* __this)
{
    return __this->_geometry;
}

void PathGeometryRenderer__set_Geometry(PathGeometryRenderer* __this, ::app::Fuse::Drawing::PathGeometry* value)
{
    if (value == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("value")));
    }

    if (value == __this->_geometry)
    {
        return;
    }

    __this->_geometry = value;
    __this->GeometryChanged(__this->_geometry);
}

::app::Uno::Rect PathGeometryRenderer__get_Bounds(PathGeometryRenderer* __this)
{
    __this->CalcBounds();
    return __this->_bounds;
}

::app::Uno::Rect PathGeometryRenderer__get_InnerBounds(PathGeometryRenderer* __this)
{
    __this->CalcBounds();
    return __this->_innerBounds;
}

::app::Uno::Float4 PathGeometryRenderer__get_StrokePadding(PathGeometryRenderer* __this)
{
    __this->CalcBounds();
    return __this->_strokePadding;
}

float PathGeometryRenderer__get_Density(PathGeometryRenderer* __this)
{
    return __this->_density;
}

void PathGeometryRenderer__set_Density(PathGeometryRenderer* __this, float value)
{
    if (__this->_density != value)
    {
        __this->_density = value;
        __this->InvalidateStrokeAndFill();
    }
}

int PathGeometryRenderer__get_Antialiasing(PathGeometryRenderer* __this)
{
    return __this->_antialiasing;
}

void PathGeometryRenderer__set_Antialiasing(PathGeometryRenderer* __this, int value)
{
    if (value == __this->_antialiasing)
    {
        return;
    }

    __this->_antialiasing = value;
    __this->InvalidateVisual();
}

::uDelegate* PathGeometryRenderer__get_FillRule(PathGeometryRenderer* __this)
{
    return __this->_fillRule;
}

void PathGeometryRenderer__set_FillRule(PathGeometryRenderer* __this, ::uDelegate* value)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)value, (::uDelegate*)__this->_fillRule))
    {
        return;
    }

    __this->_fillRule = value;
    __this->InvalidateStrokeAndFill();
}

::app::Uno::Float2 PathGeometryRenderer__get_PreScale(PathGeometryRenderer* __this)
{
    return __this->_preScale;
}

void PathGeometryRenderer__set_PreScale(PathGeometryRenderer* __this, ::app::Uno::Float2 value)
{
    if (::app::Uno::Float2__op_Inequality(NULL, __this->_preScale, value))
    {
        __this->_preScale = value;
        __this->InvalidateStrokeAndFill();
    }
}

void PathGeometryRenderer__OnFillAdded(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* f)
{
    if (::uIs(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Drawing::PathGeometryRenderer__OnShadingChanged, __this));
    }

    __this->OnShadingChanged();
}

void PathGeometryRenderer__OnFillRemoved(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* f)
{
    if (::uIs(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Drawing::PathGeometryRenderer__OnShadingChanged, __this));
    }

    __this->OnShadingChanged();
}

void PathGeometryRenderer__DrawFills(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx)
{
    if (__this->HasFills())
    {
        __this->EnsureFillRenderer(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Density());

        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count(); i++)
        {
            if (!::uPtr< ::app::Fuse::Drawing::Brush*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Item(i))->IsCompletelyTransparent())
            {
                ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(__this->_fillRenderer)->Draw_1(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Item(i), ctx);
            }
        }
    }
}

void PathGeometryRenderer__EnsureFillRenderer(PathGeometryRenderer* __this, float density)
{
    ::app::Fuse::Drawing::PolygonFiller* ind_128;

    if ((__this->_fillDensity != density) || (__this->_fillRenderer == NULL))
    {
        __this->_fillRenderer = (ind_128 = __this->_fillRenderer, (ind_128 != NULL) ? ind_128 : ::app::Fuse::Drawing::PolygonFiller__New_1(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_geometry)->ToPolygon(__this->_fillRule, __this->_preScale), __this->_antialiasing, density));
        __this->_fillDensity = density;
    }
}

void PathGeometryRenderer__OnStrokeAdded(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s)
{
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Drawing::PathGeometryRenderer__OnShadingChanged, __this));
    s->add_StrokeChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)::app::Fuse::Drawing::PathGeometryRenderer__OnStrokeChanged, __this));
    __this->OnStrokeChanged(s);
}

void PathGeometryRenderer__OnStrokeRemoved(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s)
{
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Drawing::PathGeometryRenderer__OnShadingChanged, __this));
    s->remove_StrokeChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)::app::Fuse::Drawing::PathGeometryRenderer__OnStrokeChanged, __this));
    __this->OnStrokeChanged(s);
}

void PathGeometryRenderer__EnsureStrokeRenderers(PathGeometryRenderer* __this)
{
    if (__this->_strokeRenderers == NULL)
    {
        __this->_strokeRenderers = ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(NULL);
    }
}

void PathGeometryRenderer__OnStrokeChanged(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s)
{
    if (__this->_strokeRenderers != NULL)
    {
        ::app::Fuse::Drawing::PolygonFiller* strokeRenderer = NULL;

        if (::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->TryGetValue(s, &strokeRenderer))
        {
            ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(strokeRenderer)->Dispose();
            ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Remove(s);
        }
    }

    __this->InvalidateVisual();
}

void PathGeometryRenderer__DrawStrokes(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx)
{
    if (__this->HasStrokes())
    {
        __this->CompleteStrokeRenderers(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Density());

        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(__this->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Drawing::Stroke* s = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_123));

            if ((::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->Brush() != NULL) && !::uPtr< ::app::Fuse::Drawing::Brush*>(::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->Brush())->IsCompletelyTransparent())
            {
                ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Item(s))->Draw_1(::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->Brush(), ctx);
            }
        }
    }
}

void PathGeometryRenderer__CompleteStrokeRenderers(PathGeometryRenderer* __this, float density)
{
    if (!__this->HasStrokes())
    {
        return;
    }

    __this->EnsureStrokeRenderers();

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(__this->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Drawing::Stroke* s = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_124));
        ::app::Fuse::Drawing::PolygonFiller* strokeRenderer;

        if (!::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->TryGetValue(s, &strokeRenderer) || (__this->_strokeDensity != density))
        {
            ::app::Uno::Float2 widthOffset = ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->GetDeviceAdjusted(density, __this->_strokeAdjustment, __this->_strokeAlignment);
            ::app::Fuse::Drawing::Polygon* strokePolygon = ::uPtr< ::app::Fuse::Drawing::Polygon*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_geometry)->ToPolygon(__this->_fillRule, __this->_preScale))->Stroke(::app::Uno::Math__Max_1(NULL, 0.0f, widthOffset.Item(0)), widthOffset.Item(1), s->LineCap(), s->LineCap());
            ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Item(s, strokeRenderer = ::app::Fuse::Drawing::PolygonFiller__New_1(NULL, strokePolygon, __this->_antialiasing, density));
        }
    }

    __this->_strokeDensity = density;
}

void PathGeometryRenderer__CalcBounds(PathGeometryRenderer* __this)
{
    if (__this->_hasBoundsCache)
    {
        return;
    }

    __this->_innerBounds = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_geometry)->Bounds();
    ::app::Uno::Rect scaled = __this->_innerBounds;
    scaled.Left = scaled.Left * __this->_preScale.X;
    scaled.Top = scaled.Top * __this->_preScale.Y;
    scaled.Right = scaled.Right * __this->_preScale.X;
    scaled.Bottom = scaled.Bottom * __this->_preScale.Y;
    __this->_bounds = scaled;
    __this->_strokePadding = ::app::Uno::Float4__New_1(NULL, 0.0f);

    if (__this->HasStrokes())
    {
        __this->UpdateAa();
        __this->CompleteStrokeRenderers(__this->Density());
        ::app::Uno::Rect r = scaled;

        for (::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller enum_125 = ::uPtr< ::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Values())->GetEnumerator(); enum_125.MoveNext(); )
        {
            ::app::Fuse::Drawing::PolygonFiller* s = enum_125.Current();
            ::app::Uno::Rect c = ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(s)->Bounds();
            r = ::app::Uno::Rect__Union(NULL, r, c);
        }

        ::app::Uno::Float2 diffMin = ::app::Uno::Float2__op_Subtraction(NULL, __this->_bounds.Minimum(), r.Minimum());
        ::app::Uno::Float2 diffMax = ::app::Uno::Float2__op_Subtraction(NULL, r.Maximum(), __this->_bounds.Maximum());
        __this->_strokePadding = ::app::Uno::Float4__New_2(NULL, diffMin.X, diffMin.Y, diffMax.X, diffMax.Y);
        __this->_strokePadding = ::app::Uno::Math__Max_7(NULL, __this->_strokePadding, ::app::Uno::Float4__New_1(NULL, 0.0f));
        __this->_bounds = r;
    }

    __this->_hasBoundsCache = true;
}

void PathGeometryRenderer__GeometryChanged(PathGeometryRenderer* __this, ::app::Fuse::Drawing::PathGeometry* geom)
{
    __this->InvalidateStrokeAndFill();
}

void PathGeometryRenderer__OnShadingChanged(PathGeometryRenderer* __this)
{
    __this->InvalidateVisual();
}

void PathGeometryRenderer__UpdateAa(PathGeometryRenderer* __this)
{
    if (__this->_cachedAntialiasing == __this->Antialiasing())
    {
        return;
    }

    __this->_cachedAntialiasing = __this->Antialiasing();
    __this->InvalidateStrokeAndFill();
}

void PathGeometryRenderer__InvalidateStrokeAndFill(PathGeometryRenderer* __this)
{
    __this->_hasBoundsCache = false;

    if (__this->HasStrokes())
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(__this->Strokes())); i++)
        {
            __this->OnStrokeChanged(::app::Uno::Collections::IList__Fuse_Drawing_Stroke::Item(::uPtr< ::uObject*>(__this->Strokes()), i));
        }
    }

    if (__this->_fillRenderer != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(__this->_fillRenderer)->Dispose();
        __this->_fillRenderer = NULL;
    }

    __this->InvalidateVisual();
}

void PathGeometryRenderer__InvalidateVisual(PathGeometryRenderer* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->VisualInvalidated, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->VisualInvalidated)->InvokeVoid();
    }
}

::uObject* PathGeometryRenderer__GetHitPart(PathGeometryRenderer* __this, ::app::Uno::Float2 p)
{
    __this->UpdateAa();

    if (__this->HasStrokes())
    {
        __this->CompleteStrokeRenderers(__this->Density());

        for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller enum_126 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->GetEnumerator(); enum_126.MoveNext(); )
        {
            ::app::Uno::Collections::KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller stroke = enum_126.Current();

            if (::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(stroke.Value())->Intersects(p))
            {
                return (::uObject*)stroke.Key();
            }
        }
    }

    if (__this->HasFills())
    {
        __this->EnsureFillRenderer(__this->Density());

        if (::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(__this->_fillRenderer)->Intersects(p))
        {
            return (::uObject*)__this->Fill();
        }
    }

    return NULL;
}

void PathGeometryRenderer__Draw(PathGeometryRenderer* __this, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize)
{
    __this->Draw_1(::app::Fuse::Drawing::RendererContext__New_2(NULL, transform, elementSize, __this->Density()));
}

void PathGeometryRenderer__Draw_1(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx)
{
    __this->UpdateAa();
    __this->DrawFills(ctx);
    __this->DrawStrokes(ctx);
}

void PathGeometryRenderer__SoftDispose(PathGeometryRenderer* __this)
{
    if (__this->_fillRenderer != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(__this->_fillRenderer)->Dispose();
        __this->_fillRenderer = NULL;
    }

    if (__this->_strokeRenderers != NULL)
    {
        for (::uObject* enum_127 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(__this->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_127)); )
        {
            ::app::Fuse::Drawing::Stroke* s = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_127));
            ::app::Fuse::Drawing::PolygonFiller* strokeRenderer = NULL;

            if (::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->TryGetValue(s, &strokeRenderer))
            {
                ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(strokeRenderer)->Dispose();
            }
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Clear();
        __this->_strokeRenderers = NULL;
    }
}

void PathGeometryRenderer___ObjInit(PathGeometryRenderer* __this)
{
    __this->_strokeAdjustment = 2;
    __this->_strokeAlignment = 1;
    __this->_geometry = ::app::Fuse::Drawing::PathGeometry__New_1(NULL);
    __this->_density = 1.0f;
    __this->_antialiasing = 1;
    __this->_fillRule = ::uNewDelegateNonVirt(::app::Uno::Predicate__int__typeof(), (const void*)::app::Fuse::Drawing::WindingRules__NonZero);
    __this->_preScale = ::app::Uno::Float2__New_1(NULL, 1.0f);
}

PathGeometryRenderer* PathGeometryRenderer__New_1(::uStatic* __this)
{
    PathGeometryRenderer* inst = (::app::Fuse::Drawing::PathGeometryRenderer*)::uAllocObject(sizeof(::app::Fuse::Drawing::PathGeometryRenderer), ::app::Fuse::Drawing::PathGeometryRenderer__typeof());
    inst->_ObjInit();
    return inst;
}

void PathGeometryRenderer__add_VisualInvalidated(PathGeometryRenderer* __this, ::uDelegate* value)
{
    __this->VisualInvalidated = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->VisualInvalidated, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

}}}
