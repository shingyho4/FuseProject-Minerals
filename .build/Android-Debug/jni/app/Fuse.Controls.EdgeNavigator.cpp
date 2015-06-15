// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Move.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.EdgeNavigator.h>
#include <app/Fuse.Controls.Styles.EdgeNavigatorMain.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Navigation.EdgeNavigation.h>
#include <app/Fuse.Navigation.Enter.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Elements_Element.h>

namespace app {
namespace Fuse {
namespace Controls {

::uStaticStrong< ::uObject*> EdgeNavigator___tplMain;

EdgeNavigator__uType* EdgeNavigator__typeof()
{
    static EdgeNavigator__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (EdgeNavigator__uType*)::uAllocClassType(sizeof(EdgeNavigator__uType), "Fuse.Controls.EdgeNavigator", ::app::Fuse::Controls::Panel__typeof(), 9);
        type->__fp_OnApplyStyle = (void(*)(::app::Fuse::Node*, ::uObject*))EdgeNavigator__OnApplyStyle;

        type->Implements[0] = ::app::Fuse::INodeParent__typeof();
        type->Implements[1] = ::app::Fuse::IResourceParent__typeof();
        type->Implements[2] = ::app::Fuse::Triggers::Actions::IShow__typeof();
        type->Implements[3] = ::app::Fuse::Triggers::Actions::IHide__typeof();
        type->Implements[4] = ::app::Fuse::Triggers::Actions::ICollapse__typeof();
        type->Implements[5] = ::app::Fuse::IActualSize__typeof();
        type->Implements[6] = ::app::Fuse::Controls::Internal::ICollectionParent__typeof();
        type->Implements[7] = ::app::Fuse::Navigation::INavigationPanel__typeof();
        type->Implements[8] = ::app::Fuse::Triggers::IAddRemoveChild__typeof();

        type->InterfaceOffsets[0] = offsetof(EdgeNavigator__uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(EdgeNavigator__uType, __interface_1);
        type->InterfaceOffsets[2] = offsetof(EdgeNavigator__uType, __interface_2);
        type->InterfaceOffsets[3] = offsetof(EdgeNavigator__uType, __interface_3);
        type->InterfaceOffsets[4] = offsetof(EdgeNavigator__uType, __interface_4);
        type->InterfaceOffsets[5] = offsetof(EdgeNavigator__uType, __interface_5);
        type->InterfaceOffsets[6] = offsetof(EdgeNavigator__uType, __interface_6);
        type->InterfaceOffsets[7] = offsetof(EdgeNavigator__uType, __interface_7);
        type->InterfaceOffsets[8] = offsetof(EdgeNavigator__uType, __interface_8);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void EdgeNavigator__OnApplyStyle(EdgeNavigator* __this, ::uObject* o)
{
    ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(o, ::app::Fuse::Elements::Element__typeof());

    if ((elm != NULL) && (::uPtr< ::app::Fuse::Elements::Element*>(elm)->Parent() == __this))
    {
        int e = ::app::Fuse::Navigation::EdgeNavigation__GetEdge(NULL, elm);

        switch (e)
        {
            case 0:
            {
                __this->SetupEdge(elm, ::app::Uno::Float2__New_2(NULL, -1.0f, 0.0f), 1);
                break;
            }
            case 1:
            {
                __this->SetupEdge(elm, ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), 3);
                break;
            }
            case 2:
            {
                __this->SetupEdge(elm, ::app::Uno::Float2__New_2(NULL, 0.0f, -1.0f), 4);
                break;
            }
            case 3:
            {
                __this->SetupEdge(elm, ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), 12);
                break;
            }
            case 4:
            {
                __this->SetupMain(elm);
                break;
            }
        }
    }

    ::app::Fuse::Node__OnApplyStyle(__this, (::uObject*)elm);
}

void EdgeNavigator__SetupEdge(EdgeNavigator* __this, ::app::Fuse::Elements::Element* elm, ::app::Uno::Float2 rel, int align)
{
    ::uPtr< ::app::Fuse::Elements::Element*>(elm)->SetStyleAlignment(align);
    ::app::Fuse::Navigation::Enter* enter = ::app::Fuse::Navigation::Enter__New_1(NULL);
    ::app::Fuse::Animations::Move* move = ::app::Fuse::Animations::Move__New_1(NULL);
    ::uPtr< ::app::Fuse::Animations::Move*>(move)->X(rel.X);
    move->Y(rel.Y);
    move->RelativeTo(1);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::Enter*>(enter)->Animators()), (::app::Fuse::Animations::Animator*)move);
    elm->AddStyleBehavior((::app::Fuse::Behavior*)enter);
}

void EdgeNavigator__SetupMain(EdgeNavigator* __this, ::app::Fuse::Elements::Element* elm)
{
    ::app::Uno::UX::ITemplate::Apply(::uPtr< ::uObject*>(EdgeNavigator___tplMain), (::uObject*)elm);
}

void EdgeNavigator___TypeInit_3(::uStatic* __this)
{
    ::app::Fuse::Controls::Styles::EdgeNavigatorMain* collection_123;
    EdgeNavigator___tplMain = (::uObject*)(collection_123 = ::app::Fuse::Controls::Styles::EdgeNavigatorMain__New_1(NULL), ::uPtr< ::app::Fuse::Controls::Styles::EdgeNavigatorMain*>(collection_123)->AffectSubtypes(true), true, collection_123);
}

}}}
