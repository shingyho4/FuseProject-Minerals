// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_DOCK_LAYOUT_H__
#define __APP_FUSE_LAYOUTS_DOCK_LAYOUT_H__

#include <app/Fuse.Layouts.Layout.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Layouts {

struct DockLayout;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> DockLayout___dockProperty;

struct DockLayout__uType : ::app::Fuse::Layouts::Layout__uType
{
};

DockLayout__uType* DockLayout__typeof();

void DockLayout__SetDock(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int dock);
int DockLayout__GetDock(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void DockLayout__AddSubscriber(DockLayout* __this, ::app::Fuse::Elements::Element* element);
void DockLayout__RemoveSubscriber(DockLayout* __this, ::app::Fuse::Elements::Element* element);
::app::Uno::Float2 DockLayout__GetContentSize(DockLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 DockLayout__MeasureSubtree(DockLayout* __this, ::uObject* elements, int childIndex, ::app::Uno::Float2 fillSize, int fillSet);
void DockLayout__ArrangePaddingBox(DockLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 finalSize);
void DockLayout___TypeInit(::uStatic* __this);
void DockLayout___ObjInit_1(DockLayout* __this);
DockLayout* DockLayout__New_1(::uStatic* __this);

struct DockLayout : ::app::Fuse::Layouts::Layout
{
    ::uStrong< ::app::Fuse::Elements::Element*> _subscriber;

    ::app::Uno::Float2 MeasureSubtree(::uObject* elements, int childIndex, ::app::Uno::Float2 fillSize, int fillSet);
    void _ObjInit_1() { DockLayout___ObjInit_1(this); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Layouts {

inline ::app::Uno::Float2 DockLayout::MeasureSubtree(::uObject* elements, int childIndex, ::app::Uno::Float2 fillSize, int fillSet) { return DockLayout__MeasureSubtree(this, elements, childIndex, fillSize, fillSet); }

}}}


#endif
