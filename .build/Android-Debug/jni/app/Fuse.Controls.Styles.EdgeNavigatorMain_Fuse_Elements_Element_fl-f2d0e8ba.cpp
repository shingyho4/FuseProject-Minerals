// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\.cache\GeneratedCode\Styles\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Controls.Styles.EdgeNavigatorMain_Fuse_Elements_Element_fl-f2d0e8ba.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Styles {

EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property__uType* EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property__typeof()
{
    static EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property__uType*)::uAllocClassType(sizeof(EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property__uType), "Fuse.Controls.Styles.EdgeNavigatorMain.Fuse_Elements_Element_float_Opacity_Property", ::app::Uno::UX::Property__float__typeof(), 0, 1);
        type->__fp_OnGet = (float(*)(::app::Uno::UX::Property__float*))EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property__OnGet;
        type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float*, float))EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property__OnSet;

        type->StrongRefOffsets[0] = offsetof(EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property, _obj);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_obj";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property__OnGet(EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property* __this)
{
    return ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->Opacity();
}

void EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property__OnSet(EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property* __this, float v)
{
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->Opacity(v);
}

void EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property___ObjInit_2(EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property* __this, ::app::Fuse::Elements::Element* obj)
{
    ::app::Uno::UX::Property__float___ObjInit_1(__this, 0);
    __this->_obj = obj;
}

EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property* EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* obj)
{
    EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property* inst = (::app::Fuse::Controls::Styles::EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property*)::uAllocObject(sizeof(::app::Fuse::Controls::Styles::EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property), ::app::Fuse::Controls::Styles::EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property__typeof());
    inst->_ObjInit_2(obj);
    return inst;
}

}}}}
