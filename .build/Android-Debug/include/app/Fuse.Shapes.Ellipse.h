// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_ELLIPSE_H__
#define __APP_FUSE_SHAPES_ELLIPSE_H__

#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Shapes {

struct Ellipse;

struct Ellipse__uType : ::app::Fuse::Shapes::Shape__uType
{
};

Ellipse__uType* Ellipse__typeof();

void Ellipse__UpdatePath(Ellipse* __this);

struct Ellipse : ::app::Fuse::Shapes::Shape
{
    ::app::Uno::Float2 _cachedRadius;
};

}}}


#endif
