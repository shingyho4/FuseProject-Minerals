// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\.cache\GeneratedCode\Styles\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_STYLES_EDGE_NAVIGATOR_MAIN_FUSE_NODE_BOOL_IS_ENABLED_PROPERTY_H__
#define __APP_FUSE_CONTROLS_STYLES_EDGE_NAVIGATOR_MAIN_FUSE_NODE_BOOL_IS_ENABLED_PROPERTY_H__

#include <app/Uno.UX.Property__bool.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Styles {

struct EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property;

struct EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__uType : ::app::Uno::UX::Property__bool__uType
{
};

EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__uType* EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__typeof();

bool EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__OnGet(EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property* __this);
void EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__OnSet(EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property* __this, bool v);
void EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property___ObjInit_2(EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property* __this, ::app::Fuse::Node* obj);
EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property* EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__New_1(::uStatic* __this, ::app::Fuse::Node* obj);

struct EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property : ::app::Uno::UX::Property__bool
{
    ::uStrong< ::app::Fuse::Node*> _obj;

    void _ObjInit_2(::app::Fuse::Node* obj) { EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property___ObjInit_2(this, obj); }
};

}}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Styles {

}}}}


#endif
