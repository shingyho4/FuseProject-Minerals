// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_WRAP_LAYOUT_H__
#define __APP_FUSE_LAYOUTS_WRAP_LAYOUT_H__

#include <app/Fuse.Layouts.Layout.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Layouts {

struct WrapLayout;

struct WrapLayout__uType : ::app::Fuse::Layouts::Layout__uType
{
};

WrapLayout__uType* WrapLayout__typeof();

float WrapLayout__get_ItemHeight(WrapLayout* __this);
void WrapLayout__set_ItemHeight(WrapLayout* __this, float value);
float WrapLayout__get_ItemWidth(WrapLayout* __this);
void WrapLayout__set_ItemWidth(WrapLayout* __this, float value);
int WrapLayout__get_Orientation(WrapLayout* __this);
void WrapLayout__set_Orientation(WrapLayout* __this, int value);
int WrapLayout__get_FlowDirection(WrapLayout* __this);
void WrapLayout__set_FlowDirection(WrapLayout* __this, int value);
::app::Uno::Float2 WrapLayout__GetContentSize(WrapLayout* __this, ::uObject* elements, ::app::Uno::Float2 fillSize, int fillSet);
void WrapLayout__ArrangePaddingBox(WrapLayout* __this, ::uObject* elements, ::app::Uno::Float4 padding, ::app::Uno::Float2 availableSize);

struct WrapLayout : ::app::Fuse::Layouts::Layout
{
    bool _hasItemHeight;
    float _itemHeight;
    bool _hasItemWidth;
    float _itemWidth;
    bool _hasOrientation;
    int _orientation;
    bool _hasFlowDirection;
    int _flowDirection;

    float ItemHeight() { return WrapLayout__get_ItemHeight(this); }
    void ItemHeight(float value) { WrapLayout__set_ItemHeight(this, value); }
    float ItemWidth() { return WrapLayout__get_ItemWidth(this); }
    void ItemWidth(float value) { WrapLayout__set_ItemWidth(this, value); }
    int Orientation() { return WrapLayout__get_Orientation(this); }
    void Orientation(int value) { WrapLayout__set_Orientation(this, value); }
    int FlowDirection() { return WrapLayout__get_FlowDirection(this); }
    void FlowDirection(int value) { WrapLayout__set_FlowDirection(this, value); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Layouts {

}}}


#endif
