// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\.cache\GeneratedCode\Styles\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_STYLES_EDGE_NAVIGATOR_MAIN_H__
#define __APP_FUSE_CONTROLS_STYLES_EDGE_NAVIGATOR_MAIN_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Elements_Element.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Styles { struct EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property; } } } }
namespace app { namespace Fuse { namespace Controls { namespace Styles { struct EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property; } } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Styles {

struct EdgeNavigatorMain;

struct EdgeNavigatorMain__uType : ::app::Uno::UX::Template__Fuse_Elements_Element__uType
{
};

EdgeNavigatorMain__uType* EdgeNavigatorMain__typeof();

void EdgeNavigatorMain__OnApply(EdgeNavigatorMain* __this, ::app::Fuse::Elements::Element* self);
void EdgeNavigatorMain___ObjInit_1(EdgeNavigatorMain* __this);
EdgeNavigatorMain* EdgeNavigatorMain__New_1(::uStatic* __this);

struct EdgeNavigatorMain : ::app::Uno::UX::Template__Fuse_Elements_Element
{
    ::uStrong< ::app::Fuse::Controls::Styles::EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property*> self_Opacity_inst;
    ::uStrong< ::app::Fuse::Controls::Styles::EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property*> self_IsEnabled_inst;

    void _ObjInit_1() { EdgeNavigatorMain___ObjInit_1(this); }
};

}}}}


#endif
