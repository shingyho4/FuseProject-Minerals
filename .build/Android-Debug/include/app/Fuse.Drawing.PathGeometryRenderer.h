// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_PATH_GEOMETRY_RENDERER_H__
#define __APP_FUSE_DRAWING_PATH_GEOMETRY_RENDERER_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <app/Uno.Rect.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Fuse { namespace Drawing { struct PolygonFiller; } } }
namespace app { namespace Fuse { namespace Drawing { struct RendererContext; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Drawing_Brush; } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Drawing_Stroke; } } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct PathGeometryRenderer;

struct PathGeometryRenderer__uType : ::uClassType
{
};

PathGeometryRenderer__uType* PathGeometryRenderer__typeof();

::app::Fuse::Drawing::Brush* PathGeometryRenderer__get_Fill(PathGeometryRenderer* __this);
void PathGeometryRenderer__set_Fill(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* value);
::uObject* PathGeometryRenderer__get_Fills(PathGeometryRenderer* __this);
bool PathGeometryRenderer__get_HasFills(PathGeometryRenderer* __this);
::uObject* PathGeometryRenderer__get_Strokes(PathGeometryRenderer* __this);
bool PathGeometryRenderer__get_HasStrokes(PathGeometryRenderer* __this);
::app::Fuse::Drawing::PathGeometry* PathGeometryRenderer__get_Geometry(PathGeometryRenderer* __this);
void PathGeometryRenderer__set_Geometry(PathGeometryRenderer* __this, ::app::Fuse::Drawing::PathGeometry* value);
::app::Uno::Rect PathGeometryRenderer__get_Bounds(PathGeometryRenderer* __this);
::app::Uno::Rect PathGeometryRenderer__get_InnerBounds(PathGeometryRenderer* __this);
::app::Uno::Float4 PathGeometryRenderer__get_StrokePadding(PathGeometryRenderer* __this);
float PathGeometryRenderer__get_Density(PathGeometryRenderer* __this);
void PathGeometryRenderer__set_Density(PathGeometryRenderer* __this, float value);
int PathGeometryRenderer__get_Antialiasing(PathGeometryRenderer* __this);
void PathGeometryRenderer__set_Antialiasing(PathGeometryRenderer* __this, int value);
::uDelegate* PathGeometryRenderer__get_FillRule(PathGeometryRenderer* __this);
void PathGeometryRenderer__set_FillRule(PathGeometryRenderer* __this, ::uDelegate* value);
::app::Uno::Float2 PathGeometryRenderer__get_PreScale(PathGeometryRenderer* __this);
void PathGeometryRenderer__set_PreScale(PathGeometryRenderer* __this, ::app::Uno::Float2 value);
void PathGeometryRenderer__OnFillAdded(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* f);
void PathGeometryRenderer__OnFillRemoved(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* f);
void PathGeometryRenderer__DrawFills(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx);
void PathGeometryRenderer__EnsureFillRenderer(PathGeometryRenderer* __this, float density);
void PathGeometryRenderer__OnStrokeAdded(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s);
void PathGeometryRenderer__OnStrokeRemoved(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s);
void PathGeometryRenderer__EnsureStrokeRenderers(PathGeometryRenderer* __this);
void PathGeometryRenderer__OnStrokeChanged(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s);
void PathGeometryRenderer__DrawStrokes(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx);
void PathGeometryRenderer__CompleteStrokeRenderers(PathGeometryRenderer* __this, float density);
void PathGeometryRenderer__CalcBounds(PathGeometryRenderer* __this);
void PathGeometryRenderer__GeometryChanged(PathGeometryRenderer* __this, ::app::Fuse::Drawing::PathGeometry* geom);
void PathGeometryRenderer__OnShadingChanged(PathGeometryRenderer* __this);
void PathGeometryRenderer__UpdateAa(PathGeometryRenderer* __this);
void PathGeometryRenderer__InvalidateStrokeAndFill(PathGeometryRenderer* __this);
void PathGeometryRenderer__InvalidateVisual(PathGeometryRenderer* __this);
::uObject* PathGeometryRenderer__GetHitPart(PathGeometryRenderer* __this, ::app::Uno::Float2 p);
void PathGeometryRenderer__Draw(PathGeometryRenderer* __this, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize);
void PathGeometryRenderer__Draw_1(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx);
void PathGeometryRenderer__SoftDispose(PathGeometryRenderer* __this);
void PathGeometryRenderer___ObjInit(PathGeometryRenderer* __this);
PathGeometryRenderer* PathGeometryRenderer__New_1(::uStatic* __this);
void PathGeometryRenderer__add_VisualInvalidated(PathGeometryRenderer* __this, ::uDelegate* value);

struct PathGeometryRenderer : ::uObject
{
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*> _fills;
    ::uStrong< ::app::Fuse::Drawing::PolygonFiller*> _fillRenderer;
    float _fillDensity;
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*> _strokes;
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*> _strokeRenderers;
    int _strokeAdjustment;
    int _strokeAlignment;
    float _strokeDensity;
    ::uStrong< ::app::Fuse::Drawing::PathGeometry*> _geometry;
    bool _hasBoundsCache;
    ::app::Uno::Rect _bounds;
    ::app::Uno::Rect _innerBounds;
    ::app::Uno::Float4 _strokePadding;
    float _density;
    int _cachedAntialiasing;
    int _antialiasing;
    ::uStrong< ::uDelegate*> _fillRule;
    ::app::Uno::Float2 _preScale;
    ::uStrong< ::uDelegate*> VisualInvalidated;

    void OnFillAdded(::app::Fuse::Drawing::Brush* f) { PathGeometryRenderer__OnFillAdded(this, f); }
    void OnFillRemoved(::app::Fuse::Drawing::Brush* f) { PathGeometryRenderer__OnFillRemoved(this, f); }
    void DrawFills(::app::Fuse::Drawing::RendererContext* ctx) { PathGeometryRenderer__DrawFills(this, ctx); }
    void EnsureFillRenderer(float density) { PathGeometryRenderer__EnsureFillRenderer(this, density); }
    void OnStrokeAdded(::app::Fuse::Drawing::Stroke* s) { PathGeometryRenderer__OnStrokeAdded(this, s); }
    void OnStrokeRemoved(::app::Fuse::Drawing::Stroke* s) { PathGeometryRenderer__OnStrokeRemoved(this, s); }
    void EnsureStrokeRenderers() { PathGeometryRenderer__EnsureStrokeRenderers(this); }
    void OnStrokeChanged(::app::Fuse::Drawing::Stroke* s) { PathGeometryRenderer__OnStrokeChanged(this, s); }
    void DrawStrokes(::app::Fuse::Drawing::RendererContext* ctx) { PathGeometryRenderer__DrawStrokes(this, ctx); }
    void CompleteStrokeRenderers(float density) { PathGeometryRenderer__CompleteStrokeRenderers(this, density); }
    void CalcBounds() { PathGeometryRenderer__CalcBounds(this); }
    void GeometryChanged(::app::Fuse::Drawing::PathGeometry* geom) { PathGeometryRenderer__GeometryChanged(this, geom); }
    void OnShadingChanged() { PathGeometryRenderer__OnShadingChanged(this); }
    void UpdateAa() { PathGeometryRenderer__UpdateAa(this); }
    void InvalidateStrokeAndFill() { PathGeometryRenderer__InvalidateStrokeAndFill(this); }
    void InvalidateVisual() { PathGeometryRenderer__InvalidateVisual(this); }
    ::uObject* GetHitPart(::app::Uno::Float2 p);
    void Draw(::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize);
    void Draw_1(::app::Fuse::Drawing::RendererContext* ctx) { PathGeometryRenderer__Draw_1(this, ctx); }
    void SoftDispose() { PathGeometryRenderer__SoftDispose(this); }
    void _ObjInit() { PathGeometryRenderer___ObjInit(this); }
    void add_VisualInvalidated(::uDelegate* value) { PathGeometryRenderer__add_VisualInvalidated(this, value); }
    ::app::Fuse::Drawing::Brush* Fill() { return PathGeometryRenderer__get_Fill(this); }
    void Fill(::app::Fuse::Drawing::Brush* value) { PathGeometryRenderer__set_Fill(this, value); }
    ::uObject* Fills() { return PathGeometryRenderer__get_Fills(this); }
    bool HasFills() { return PathGeometryRenderer__get_HasFills(this); }
    ::uObject* Strokes() { return PathGeometryRenderer__get_Strokes(this); }
    bool HasStrokes() { return PathGeometryRenderer__get_HasStrokes(this); }
    ::app::Fuse::Drawing::PathGeometry* Geometry() { return PathGeometryRenderer__get_Geometry(this); }
    void Geometry(::app::Fuse::Drawing::PathGeometry* value) { PathGeometryRenderer__set_Geometry(this, value); }
    ::app::Uno::Rect Bounds();
    ::app::Uno::Rect InnerBounds();
    ::app::Uno::Float4 StrokePadding();
    float Density() { return PathGeometryRenderer__get_Density(this); }
    void Density(float value) { PathGeometryRenderer__set_Density(this, value); }
    int Antialiasing() { return PathGeometryRenderer__get_Antialiasing(this); }
    void Antialiasing(int value) { PathGeometryRenderer__set_Antialiasing(this, value); }
    ::uDelegate* FillRule() { return PathGeometryRenderer__get_FillRule(this); }
    void FillRule(::uDelegate* value) { PathGeometryRenderer__set_FillRule(this, value); }
    ::app::Uno::Float2 PreScale();
    void PreScale(::app::Uno::Float2 value);
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::uObject* PathGeometryRenderer::GetHitPart(::app::Uno::Float2 p) { return PathGeometryRenderer__GetHitPart(this, p); }
inline void PathGeometryRenderer::Draw(::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize) { PathGeometryRenderer__Draw(this, transform, elementSize); }
inline ::app::Uno::Rect PathGeometryRenderer::Bounds() { return PathGeometryRenderer__get_Bounds(this); }
inline ::app::Uno::Rect PathGeometryRenderer::InnerBounds() { return PathGeometryRenderer__get_InnerBounds(this); }
inline ::app::Uno::Float4 PathGeometryRenderer::StrokePadding() { return PathGeometryRenderer__get_StrokePadding(this); }
inline ::app::Uno::Float2 PathGeometryRenderer::PreScale() { return PathGeometryRenderer__get_PreScale(this); }
inline void PathGeometryRenderer::PreScale(::app::Uno::Float2 value) { PathGeometryRenderer__set_PreScale(this, value); }

}}}


#endif
