// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Animations.Change__float4.h>
#include <app/Fuse.Animations.ProgressAnimator.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Animations_Change___float4_Valu-5d5607c3.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Elements_Element_float_Height_Property.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Elements_Element_float4_TextCol-60124f9c.h>
#include <app/Fuse.BasicTheme.BasicTheme_Template2.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.Pressing.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ResourceBinding__float4.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Triggers.Focusing.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileDisabled.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {
namespace Fuse {
namespace BasicTheme {

BasicTheme_Template2__uType* BasicTheme_Template2__typeof()
{
    static BasicTheme_Template2__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BasicTheme_Template2__uType*)::uAllocClassType(sizeof(BasicTheme_Template2__uType), "Fuse.BasicTheme.BasicTheme.Template2", ::app::Uno::UX::Template__Fuse_Controls_TextInput__typeof(), 1, 6);
        type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_TextInput*, ::app::Fuse::Controls::TextInput*))BasicTheme_Template2__OnApply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(BasicTheme_Template2__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(BasicTheme_Template2, __parent);
        type->StrongRefOffsets[1] = offsetof(BasicTheme_Template2, _changeTextInputDividerFill1_Value_inst);
        type->StrongRefOffsets[2] = offsetof(BasicTheme_Template2, _changeTextInputDividerFill2_Value_inst);
        type->StrongRefOffsets[3] = offsetof(BasicTheme_Template2, self_TextColor_inst);
        type->StrongRefOffsets[4] = offsetof(BasicTheme_Template2, _textInputDivider_Color_inst);
        type->StrongRefOffsets[5] = offsetof(BasicTheme_Template2, _dividerRect_Height_inst);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "__parent";
        type->StrongRefNames[1] = "_changeTextInputDividerFill1_Value_inst";
        type->StrongRefNames[2] = "_changeTextInputDividerFill2_Value_inst";
        type->StrongRefNames[3] = "self_TextColor_inst";
        type->StrongRefNames[4] = "_textInputDivider_Color_inst";
        type->StrongRefNames[5] = "_dividerRect_Height_inst";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void BasicTheme_Template2__OnApply(BasicTheme_Template2* __this, ::app::Fuse::Controls::TextInput* self)
{
    ::app::Fuse::Drawing::SolidColor* _textInputDivider = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_textInputDivider_Color_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _textInputDivider);
    ::app::Fuse::Animations::Change__float4* _changeTextInputDividerFill1 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_textInputDivider_Color_inst);
    __this->_changeTextInputDividerFill1_Value_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, _changeTextInputDividerFill1);
    ::app::Fuse::Animations::Change__float4* _changeTextInputDividerFill2 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_textInputDivider_Color_inst);
    __this->_changeTextInputDividerFill2_Value_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, _changeTextInputDividerFill2);
    __this->self_TextColor_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float4_TextColor_Property__New_1(NULL, (::app::Fuse::Elements::Element*)self);
    ::app::Fuse::Shapes::Rectangle* _dividerRect = ::app::Fuse::Shapes::Rectangle__New_1(NULL);
    __this->_dividerRect_Height_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float_Height_Property__New_1(NULL, (::app::Fuse::Elements::Element*)_dividerRect);
    ::app::Fuse::Controls::Panel* temp = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp1 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_changeTextInputDividerFill1_Value_inst, ::uGetConstString("C700"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp2 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_changeTextInputDividerFill2_Value_inst, ::uGetConstString("C700"));
    ::app::Fuse::Triggers::WhileDisabled* temp3 = ::app::Fuse::Triggers::WhileDisabled__New_1(NULL);
    ::app::Fuse::Animations::Change__float4* temp4 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->self_TextColor_inst);
    ::app::Fuse::Animations::Change__float4* temp5 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_textInputDivider_Color_inst);
    ::app::Fuse::Triggers::Focusing* temp6 = ::app::Fuse::Triggers::Focusing__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp7 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->_dividerRect_Height_inst);
    ::app::Fuse::Gestures::Pressing* temp8 = ::app::Fuse::Gestures::Pressing__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp9 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->_dividerRect_Height_inst);
    ::uPtr< ::app::Fuse::Controls::TextInput*>(self)->SetStyleMinHeight(48.0f);
    self->SetStyleMargin(::app::Uno::Float4__New_2(NULL, 8.0f, 8.0f, 8.0f, 8.0f));
    self->SetStylePadding(::app::Uno::Float4__New_2(NULL, 0.0f, 8.0f, 0.0f, 8.0f));
    self->SetStyleTextColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    self->SetStyleFontSize(16.0f);
    ::app::Fuse::Input::Focus__SetIsFocusable(NULL, (::app::Fuse::Node*)self, true);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(temp)->Children()), (::app::Fuse::Elements::Element*)_dividerRect);
    ::uPtr< ::app::Fuse::Shapes::Rectangle*>(_dividerRect)->Height(1.0f);
    _dividerRect->Alignment(12);
    _dividerRect->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 8.0f, 0.0f, 8.0f));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(_dividerRect->Fills()), (::app::Fuse::Drawing::Brush*)_textInputDivider);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(_textInputDivider)->Color(::app::Uno::Float4__New_2(NULL, 0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileDisabled*>(temp3)->Animators()), (::app::Fuse::Animations::Animator*)temp4);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp3->Animators()), (::app::Fuse::Animations::Animator*)temp5);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp4)->Value(::app::Uno::Float4__New_2(NULL, 0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    temp4->Easing(17);
    temp4->EasingBack(16);
    temp4->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp5)->Value(::app::Uno::Float4__New_2(NULL, 0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    temp5->Easing(17);
    temp5->EasingBack(16);
    temp5->Duration(0.25);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::Focusing*>(temp6)->Animators()), (::app::Fuse::Animations::Animator*)_changeTextInputDividerFill1);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp6->Animators()), (::app::Fuse::Animations::Animator*)temp7);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(_changeTextInputDividerFill1)->Value(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    _changeTextInputDividerFill1->Easing(17);
    _changeTextInputDividerFill1->EasingBack(16);
    _changeTextInputDividerFill1->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp7)->Value(2.0f);
    temp7->Easing(17);
    temp7->EasingBack(16);
    temp7->Duration(0.25);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Pressing*>(temp8)->Animators()), (::app::Fuse::Animations::Animator*)_changeTextInputDividerFill2);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp8->Animators()), (::app::Fuse::Animations::Animator*)temp9);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(_changeTextInputDividerFill2)->Value(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    _changeTextInputDividerFill2->Easing(17);
    _changeTextInputDividerFill2->EasingBack(16);
    _changeTextInputDividerFill2->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp9)->Value(2.0f);
    temp9->Easing(17);
    temp9->EasingBack(16);
    temp9->Duration(0.25);
    self->SetStyleAppearance((::app::Fuse::Elements::Element*)temp);
    self->SetStyleFont(::app::Fuse::BasicTheme::BasicTheme__RobotoRegular);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp1);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp2);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp3);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp6);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp8);
}

void BasicTheme_Template2___ObjInit_1(BasicTheme_Template2* __this, ::app::Fuse::BasicTheme::BasicTheme* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_TextInput___ObjInit(__this);
    __this->__parent = parent;
}

BasicTheme_Template2* BasicTheme_Template2__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicTheme* parent)
{
    BasicTheme_Template2* inst = (::app::Fuse::BasicTheme::BasicTheme_Template2*)::uAllocObject(sizeof(::app::Fuse::BasicTheme::BasicTheme_Template2), ::app::Fuse::BasicTheme::BasicTheme_Template2__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

}}}
