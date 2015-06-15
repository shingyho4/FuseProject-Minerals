// This file was generated based on 'D:\Shing\work\OCIO\FuseProject\MyMineral\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/_.MainView.h>
#include <app/_.MainView_Fuse_Drawing_SolidColor_float4_Color_Property.h>
#include <app/_.MainView_Template1.h>
#include <app/_.NavButton.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__float4.h>
#include <app/Fuse.Animations.ProgressAnimator.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Gestures.Pressing.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {

MainView_Template1__uType* MainView_Template1__typeof()
{
    static MainView_Template1__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MainView_Template1__uType*)::uAllocClassType(sizeof(MainView_Template1__uType), "MainView.Template1", ::app::Uno::UX::Template__NavButton__typeof(), 1, 2);
        type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__NavButton*, ::app::NavButton*))MainView_Template1__OnApply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(MainView_Template1__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(MainView_Template1, __parent);
        type->StrongRefOffsets[1] = offsetof(MainView_Template1, _buttonColor_Color_inst);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "__parent";
        type->StrongRefNames[1] = "_buttonColor_Color_inst";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void MainView_Template1__OnApply(MainView_Template1* __this, ::app::NavButton* self)
{
    ::app::Fuse::Drawing::SolidColor* _buttonColor = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_buttonColor_Color_inst = ::app::MainView_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _buttonColor);
    ::app::Fuse::Shapes::Rectangle* temp = ::app::Fuse::Shapes::Rectangle__New_1(NULL);
    ::app::Fuse::Gestures::Pressing* temp1 = ::app::Fuse::Gestures::Pressing__New_1(NULL);
    ::app::Fuse::Animations::Change__float4* _buttonColorPressing = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_buttonColor_Color_inst);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Shapes::Rectangle*>(temp)->Fills()), (::app::Fuse::Drawing::Brush*)_buttonColor);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(_buttonColor)->Color(::app::Uno::Float4__New_2(NULL, 0.3647059f, 0.3254902f, 0.3215686f, 1.0f));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Pressing*>(temp1)->Animators()), (::app::Fuse::Animations::Animator*)_buttonColorPressing);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(_buttonColorPressing)->Value(::app::Uno::Float4__New_2(NULL, 0.2392157f, 0.2156863f, 0.2117647f, 1.0f));
    _buttonColorPressing->Duration(0.1);
    ::uPtr< ::app::NavButton*>(self)->SetStyleAppearance((::app::Fuse::Elements::Element*)temp);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp1);
}

void MainView_Template1___ObjInit_1(MainView_Template1* __this, ::app::MainView* parent)
{
    ::app::Uno::UX::Template__NavButton___ObjInit(__this);
    __this->__parent = parent;
}

MainView_Template1* MainView_Template1__New_1(::uStatic* __this, ::app::MainView* parent)
{
    MainView_Template1* inst = (::app::MainView_Template1*)::uAllocObject(sizeof(::app::MainView_Template1), ::app::MainView_Template1__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

}
