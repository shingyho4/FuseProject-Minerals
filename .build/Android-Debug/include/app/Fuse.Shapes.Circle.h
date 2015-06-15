// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_CIRCLE_H__
#define __APP_FUSE_SHAPES_CIRCLE_H__

#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Shapes {

struct Circle;

struct Circle__uType : ::app::Fuse::Shapes::Shape__uType
{
};

Circle__uType* Circle__typeof();

::app::Uno::Float2 Circle__get_CenterOffset(Circle* __this);
float Circle__get_Radius(Circle* __this);
void Circle__UpdatePath(Circle* __this);
void Circle___ObjInit_3(Circle* __this);
Circle* Circle__New_1(::uStatic* __this);

struct Circle : ::app::Fuse::Shapes::Shape
{
    float _cachedRadius;

    void _ObjInit_3() { Circle___ObjInit_3(this); }
    ::app::Uno::Float2 CenterOffset();
    float Radius() { return Circle__get_Radius(this); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Shapes {

inline ::app::Uno::Float2 Circle::CenterOffset() { return Circle__get_CenterOffset(this); }

}}}


#endif
