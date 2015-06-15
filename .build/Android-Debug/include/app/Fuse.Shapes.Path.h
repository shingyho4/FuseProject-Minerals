// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_PATH_H__
#define __APP_FUSE_SHAPES_PATH_H__

#include <app/Fuse.IActualSize.h>
#include <app/Fuse.INodeParent.h>
#include <app/Fuse.IResourceParent.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct SizingContainer; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Shapes {

struct Path;

struct Path__uType : ::app::Fuse::Shapes::Shape__uType
{
};

Path__uType* Path__typeof();

::uString* Path__get_Data(Path* __this);
void Path__set_Data(Path* __this, ::uString* value);
int Path__get_FillRule(Path* __this);
void Path__set_FillRule(Path* __this, int value);
void Path__UpdatePath(Path* __this);
::app::Uno::Float2 Path__GetNaturalContentSize(Path* __this);
::app::Uno::Float2 Path__GetContentSize(Path* __this, ::app::Uno::Float2 fillSize, int fillSet);
void Path__ArrangePaddingBox(Path* __this, ::app::Uno::Float2 size);
void Path__OnDraw(Path* __this, ::app::Fuse::DrawContext* dc);
::app::Uno::Float4x4 Path__AlignMatrix(Path* __this, ::app::Uno::Float4x4 b);
::app::Uno::Rect Path__CalcRenderBounds(Path* __this);
void Path___ObjInit_3(Path* __this);
Path* Path__New_1(::uStatic* __this);

struct Path : ::app::Fuse::Shapes::Shape
{
    ::uStrong< ::app::Fuse::Internal::SizingContainer*> sizing;
    int _fitMode;
    int _scaleMode;
    int _fillRule;
    ::app::Uno::Float2 _postScale;
    ::app::Uno::Float2 _origin;

    ::app::Uno::Float2 GetNaturalContentSize();
    ::app::Uno::Float4x4 AlignMatrix(::app::Uno::Float4x4 b);
    void _ObjInit_3() { Path___ObjInit_3(this); }
    ::uString* Data() { return Path__get_Data(this); }
    void Data(::uString* value) { Path__set_Data(this, value); }
    int FillRule() { return Path__get_FillRule(this); }
    void FillRule(int value) { Path__set_FillRule(this, value); }
};

}}}

#include <app/Uno.Float4x4.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Shapes {

inline ::app::Uno::Float2 Path::GetNaturalContentSize() { return Path__GetNaturalContentSize(this); }
inline ::app::Uno::Float4x4 Path::AlignMatrix(::app::Uno::Float4x4 b) { return Path__AlignMatrix(this, b); }

}}}


#endif
