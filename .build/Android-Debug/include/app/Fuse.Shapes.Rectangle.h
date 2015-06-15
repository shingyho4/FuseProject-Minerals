// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_RECTANGLE_H__
#define __APP_FUSE_SHAPES_RECTANGLE_H__

#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct HitTestContext; } }

namespace app {
namespace Fuse {
namespace Shapes {

struct Rectangle;

struct Rectangle__uType : ::app::Fuse::Shapes::Shape__uType
{
};

Rectangle__uType* Rectangle__typeof();

::app::Uno::Float4 Rectangle__get_CornerRadius(Rectangle* __this);
void Rectangle__set_CornerRadius(Rectangle* __this, ::app::Uno::Float4 value);
void Rectangle__OnHitTestLocalVisual(Rectangle* __this, ::app::Fuse::HitTestContext* htc);
void Rectangle__UpdatePath(Rectangle* __this);
void Rectangle___ObjInit_3(Rectangle* __this);
Rectangle* Rectangle__New_1(::uStatic* __this);

struct Rectangle : ::app::Fuse::Shapes::Shape
{
    float _maxRadius;
    ::app::Uno::Float4 _cornerRadius;
    ::app::Uno::Float4 _cachedRadius;
    ::app::Uno::Float2 _cachedPosition;
    ::app::Uno::Float2 _cachedSize;

    void _ObjInit_3() { Rectangle___ObjInit_3(this); }
    ::app::Uno::Float4 CornerRadius() { return Rectangle__get_CornerRadius(this); }
    void CornerRadius(::app::Uno::Float4 value) { Rectangle__set_CornerRadius(this, value); }
};

}}}


#endif
