// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_STACK_LAYOUT_H__
#define __APP_FUSE_LAYOUTS_STACK_LAYOUT_H__

#include <app/Fuse.Layouts.Layout.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Layouts {

struct StackLayout;

struct StackLayout__uType : ::app::Fuse::Layouts::Layout__uType
{
};

StackLayout__uType* StackLayout__typeof();

int StackLayout__get_Orientation(StackLayout* __this);
void StackLayout__set_Orientation(StackLayout* __this, int value);
void StackLayout__OnOrientationChanged(StackLayout* __this);
void StackLayout__AddSubscriber(StackLayout* __this, ::app::Fuse::Elements::Element* element);
void StackLayout__RemoveSubscriber(StackLayout* __this, ::app::Fuse::Elements::Element* element);
::app::Uno::Float2 StackLayout__GetContentSize(StackLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 StackLayout__GetElementsSize(StackLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
void StackLayout__ArrangePaddingBox(StackLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize);
void StackLayout___ObjInit_1(StackLayout* __this);
StackLayout* StackLayout__New_1(::uStatic* __this);

struct StackLayout : ::app::Fuse::Layouts::Layout
{
    int _orientation;
    ::uStrong< ::app::Fuse::Elements::Element*> _subscriber;

    void OnOrientationChanged() { StackLayout__OnOrientationChanged(this); }
    ::app::Uno::Float2 GetElementsSize(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
    void _ObjInit_1() { StackLayout___ObjInit_1(this); }
    int Orientation() { return StackLayout__get_Orientation(this); }
    void Orientation(int value) { StackLayout__set_Orientation(this, value); }
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Layouts {

inline ::app::Uno::Float2 StackLayout::GetElementsSize(::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet) { return StackLayout__GetElementsSize(this, elements, fillSize, fillSet); }

}}}


#endif
