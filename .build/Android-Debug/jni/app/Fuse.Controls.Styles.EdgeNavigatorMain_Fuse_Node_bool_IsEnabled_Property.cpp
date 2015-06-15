// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\.cache\GeneratedCode\Styles\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Styles.EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Styles {

EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__uType* EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__typeof()
{
    static EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__uType*)::uAllocClassType(sizeof(EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__uType), "Fuse.Controls.Styles.EdgeNavigatorMain.Fuse_Node_bool_IsEnabled_Property", ::app::Uno::UX::Property__bool__typeof(), 0, 1);
        type->__fp_OnGet = (bool(*)(::app::Uno::UX::Property__bool*))EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__OnGet;
        type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__bool*, bool))EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__OnSet;

        type->StrongRefOffsets[0] = offsetof(EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property, _obj);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_obj";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__OnGet(EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property* __this)
{
    return ::uPtr< ::app::Fuse::Node*>(__this->_obj)->IsEnabled();
}

void EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__OnSet(EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property* __this, bool v)
{
    ::uPtr< ::app::Fuse::Node*>(__this->_obj)->IsEnabled(v);
}

void EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property___ObjInit_2(EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property* __this, ::app::Fuse::Node* obj)
{
    ::app::Uno::UX::Property__bool___ObjInit_1(__this, 0);
    __this->_obj = obj;
}

EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property* EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__New_1(::uStatic* __this, ::app::Fuse::Node* obj)
{
    EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property* inst = (::app::Fuse::Controls::Styles::EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property*)::uAllocObject(sizeof(::app::Fuse::Controls::Styles::EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property), ::app::Fuse::Controls::Styles::EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__typeof());
    inst->_ObjInit_2(obj);
    return inst;
}

}}}}
