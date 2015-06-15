// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Animations.Change__float4.h>
#include <app/Fuse.Animations.ProgressAnimator.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Animations_Change___float4_Valu-5d5607c3.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Elements_Element_float_Opacity_Property.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Elements_Element_float4_TextCol-60124f9c.h>
#include <app/Fuse.BasicTheme.BasicTheme_Template1.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Effects.DropShadow.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.Pressing.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ResourceBinding__float4.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileDisabled.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {
namespace Fuse {
namespace BasicTheme {

BasicTheme_Template1__uType* BasicTheme_Template1__typeof()
{
    static BasicTheme_Template1__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BasicTheme_Template1__uType*)::uAllocClassType(sizeof(BasicTheme_Template1__uType), "Fuse.BasicTheme.BasicTheme.Template1", ::app::Uno::UX::Template__Fuse_Controls_Button__typeof(), 1, 5);
        type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Button*, ::app::Fuse::Controls::Button*))BasicTheme_Template1__OnApply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(BasicTheme_Template1__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(BasicTheme_Template1, __parent);
        type->StrongRefOffsets[1] = offsetof(BasicTheme_Template1, _buttonBackground_Color_inst);
        type->StrongRefOffsets[2] = offsetof(BasicTheme_Template1, _pressed_Value_inst);
        type->StrongRefOffsets[3] = offsetof(BasicTheme_Template1, self_Opacity_inst);
        type->StrongRefOffsets[4] = offsetof(BasicTheme_Template1, self_TextColor_inst);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "__parent";
        type->StrongRefNames[1] = "_buttonBackground_Color_inst";
        type->StrongRefNames[2] = "_pressed_Value_inst";
        type->StrongRefNames[3] = "self_Opacity_inst";
        type->StrongRefNames[4] = "self_TextColor_inst";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void BasicTheme_Template1__OnApply(BasicTheme_Template1* __this, ::app::Fuse::Controls::Button* self)
{
    ::app::Fuse::Drawing::SolidColor* _buttonBackground = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_buttonBackground_Color_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _buttonBackground);
    ::app::Fuse::Animations::Change__float4* _pressed = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_buttonBackground_Color_inst);
    __this->_pressed_Value_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, _pressed);
    __this->self_Opacity_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)self);
    __this->self_TextColor_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float4_TextColor_Property__New_1(NULL, (::app::Fuse::Elements::Element*)self);
    ::app::Fuse::Effects::DropShadow* temp = ::app::Fuse::Effects::DropShadow__New_1(NULL);
    ::app::Fuse::Shapes::Rectangle* temp1 = ::app::Fuse::Shapes::Rectangle__New_1(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp2 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_buttonBackground_Color_inst, ::uGetConstString("C500"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp3 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_pressed_Value_inst, ::uGetConstString("C700"));
    ::app::Fuse::Gestures::Pressing* temp4 = ::app::Fuse::Gestures::Pressing__New_1(NULL);
    ::app::Fuse::Triggers::WhileDisabled* temp5 = ::app::Fuse::Triggers::WhileDisabled__New_1(NULL);
    ::app::Fuse::Animations::Change__float4* temp6 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_buttonBackground_Color_inst);
    ::app::Fuse::Animations::Change__float* temp7 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->self_Opacity_inst);
    ::app::Fuse::Animations::Change__float4* temp8 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->self_TextColor_inst);
    ::uPtr< ::app::Fuse::Controls::Button*>(self)->SetStyleText(::uGetConstString("BUTTON"));
    self->SetStyleMinWidth(88.0f);
    self->SetStyleMinHeight(36.0f);
    self->SetStyleMargin(::app::Uno::Float4__New_2(NULL, 4.0f, 4.0f, 4.0f, 4.0f));
    self->SetStylePadding(::app::Uno::Float4__New_2(NULL, 8.0f, 0.0f, 8.0f, 0.0f));
    self->SetStyleTextColor(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    self->SetStyleTextAlignment(1);
    ::app::Fuse::Input::Focus__SetIsFocusable(NULL, (::app::Fuse::Node*)self, true);
    ::uPtr< ::app::Fuse::Effects::DropShadow*>(temp)->Softness(5.0f);
    temp->Offset(::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f));
    temp->Multiplier(0.35f);
    ::uPtr< ::app::Fuse::Shapes::Rectangle*>(temp1)->CornerRadius(::app::Uno::Float4__New_2(NULL, 2.0f, 2.0f, 2.0f, 2.0f));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(temp1->Fills()), (::app::Fuse::Drawing::Brush*)_buttonBackground);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Pressing*>(temp4)->Animators()), (::app::Fuse::Animations::Animator*)_pressed);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(_pressed)->Value(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    _pressed->Duration(0.25);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileDisabled*>(temp5)->Animators()), (::app::Fuse::Animations::Animator*)temp6);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp5->Animators()), (::app::Fuse::Animations::Animator*)temp7);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp5->Animators()), (::app::Fuse::Animations::Animator*)temp8);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp6)->Value(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    temp6->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp7)->Value(0.12f);
    temp7->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp8)->Value(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.3f));
    self->SetStyleAppearance((::app::Fuse::Elements::Element*)temp1);
    self->SetStyleFont(::app::Fuse::BasicTheme::BasicTheme__RobotoMedium);
    self->AddStyleEffect((::app::Fuse::Effects::Effect*)temp);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp2);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp3);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp4);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp5);
}

void BasicTheme_Template1___ObjInit_1(BasicTheme_Template1* __this, ::app::Fuse::BasicTheme::BasicTheme* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Button___ObjInit(__this);
    __this->__parent = parent;
}

BasicTheme_Template1* BasicTheme_Template1__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicTheme* parent)
{
    BasicTheme_Template1* inst = (::app::Fuse::BasicTheme::BasicTheme_Template1*)::uAllocObject(sizeof(::app::Fuse::BasicTheme::BasicTheme_Template1), ::app::Fuse::BasicTheme::BasicTheme_Template1__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

}}}
