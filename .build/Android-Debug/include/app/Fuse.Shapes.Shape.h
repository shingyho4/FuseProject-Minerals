// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_SHAPE_H__
#define __APP_FUSE_SHAPES_SHAPE_H__

#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometryRenderer; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Shapes {

struct Shape;

struct Shape__uType : ::app::Fuse::Elements::Element__uType
{
    void(*__fp_UpdatePath)(Shape*);
};

Shape__uType* Shape__typeof();

::app::Fuse::Drawing::PathGeometryRenderer* Shape__get_Renderer(Shape* __this);
::uObject* Shape__get_Fills(Shape* __this);
::uObject* Shape__get_Strokes(Shape* __this);
void Shape__OnRooted(Shape* __this);
void Shape__Invalidated(Shape* __this);
::app::Uno::Rect Shape__CalcRenderBounds(Shape* __this);
void Shape__OnDraw(Shape* __this, ::app::Fuse::DrawContext* dc);
void Shape__OnHitTestLocalVisual(Shape* __this, ::app::Fuse::HitTestContext* htc);
::uObject* Shape__GetHitPart(Shape* __this, ::app::Uno::Float2 localCoords);
void Shape__SoftDispose(Shape* __this);
void Shape___ObjInit_2(Shape* __this);

struct Shape : ::app::Fuse::Elements::Element
{
    ::uStrong< ::app::Fuse::Drawing::PathGeometryRenderer*> _renderer;

    void Invalidated() { Shape__Invalidated(this); }
    void UpdatePath() { (((Shape__uType*)this->__obj_type)->__fp_UpdatePath)(this); }
    ::uObject* GetHitPart(::app::Uno::Float2 localCoords);
    void _ObjInit_2() { Shape___ObjInit_2(this); }
    ::app::Fuse::Drawing::PathGeometryRenderer* Renderer() { return Shape__get_Renderer(this); }
    ::uObject* Fills() { return Shape__get_Fills(this); }
    ::uObject* Strokes() { return Shape__get_Strokes(this); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Shapes {

inline ::uObject* Shape::GetHitPart(::app::Uno::Float2 localCoords) { return Shape__GetHitPart(this, localCoords); }

}}}


#endif
