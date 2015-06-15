// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\.cache\GeneratedCode\Styles\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__bool.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Styles.EdgeNavigatorMain.h>
#include <app/Fuse.Controls.Styles.EdgeNavigatorMain_Fuse_Elements_Element_fl-f2d0e8ba.h>
#include <app/Fuse.Controls.Styles.EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Navigation.Exit.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Float.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__float.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Styles {

EdgeNavigatorMain__uType* EdgeNavigatorMain__typeof()
{
    static EdgeNavigatorMain__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EdgeNavigatorMain__uType*)::uAllocClassType(sizeof(EdgeNavigatorMain__uType), "Fuse.Controls.Styles.EdgeNavigatorMain", ::app::Uno::UX::Template__Fuse_Elements_Element__typeof(), 1, 2);
        type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Elements_Element*, ::app::Fuse::Elements::Element*))EdgeNavigatorMain__OnApply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(EdgeNavigatorMain__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(EdgeNavigatorMain, self_Opacity_inst);
        type->StrongRefOffsets[1] = offsetof(EdgeNavigatorMain, self_IsEnabled_inst);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "self_Opacity_inst";
        type->StrongRefNames[1] = "self_IsEnabled_inst";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void EdgeNavigatorMain__OnApply(EdgeNavigatorMain* __this, ::app::Fuse::Elements::Element* self)
{
    __this->self_Opacity_inst = ::app::Fuse::Controls::Styles::EdgeNavigatorMain_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, self);
    __this->self_IsEnabled_inst = ::app::Fuse::Controls::Styles::EdgeNavigatorMain_Fuse_Node_bool_IsEnabled_Property__New_1(NULL, (::app::Fuse::Node*)self);
    ::app::Fuse::Navigation::Exit* temp = ::app::Fuse::Navigation::Exit__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp1 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->self_Opacity_inst);
    ::app::Fuse::Animations::Change__bool* temp2 = ::app::Fuse::Animations::Change__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->self_IsEnabled_inst);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::Exit*>(temp)->Animators()), (::app::Fuse::Animations::Animator*)temp1);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp->Animators()), (::app::Fuse::Animations::Animator*)temp2);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp1)->Value(0.6f);
    ::uPtr< ::app::Fuse::Animations::Change__bool*>(temp2)->Value(false);
    ::uPtr< ::app::Fuse::Elements::Element*>(self)->AddStyleBehavior((::app::Fuse::Behavior*)temp);
}

void EdgeNavigatorMain___ObjInit_1(EdgeNavigatorMain* __this)
{
    ::app::Uno::UX::Template__Fuse_Elements_Element___ObjInit(__this);
}

EdgeNavigatorMain* EdgeNavigatorMain__New_1(::uStatic* __this)
{
    EdgeNavigatorMain* inst = (::app::Fuse::Controls::Styles::EdgeNavigatorMain*)::uAllocObject(sizeof(::app::Fuse::Controls::Styles::EdgeNavigatorMain), ::app::Fuse::Controls::Styles::EdgeNavigatorMain__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}}
