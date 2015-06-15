// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Animations.Change__float4.h>
#include <app/Fuse.Animations.Move.h>
#include <app/Fuse.Animations.ProgressAnimator.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Translation.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Animations_Change___float4_Valu-5d5607c3.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Elements_Element_float_Opacity_Property.h>
#include <app/Fuse.BasicTheme.BasicTheme_Template4.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.DefaultSwitchBehavior.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.Switch.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Effects.DropShadow.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Gestures.Pressing.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ResourceBinding__float4.h>
#include <app/Fuse.Shapes.Circle.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Triggers.Focusing.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileDisabled.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
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

BasicTheme_Template4__uType* BasicTheme_Template4__typeof()
{
    static BasicTheme_Template4__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BasicTheme_Template4__uType*)::uAllocClassType(sizeof(BasicTheme_Template4__uType), "Fuse.BasicTheme.BasicTheme.Template4", ::app::Uno::UX::Template__Fuse_Controls_Switch__typeof(), 1, 8);
        type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Switch*, ::app::Fuse::Controls::Switch*))BasicTheme_Template4__OnApply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(BasicTheme_Template4__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(BasicTheme_Template4, __parent);
        type->StrongRefOffsets[1] = offsetof(BasicTheme_Template4, _thumbFill_Color_inst);
        type->StrongRefOffsets[2] = offsetof(BasicTheme_Template4, _trackFill_Color_inst);
        type->StrongRefOffsets[3] = offsetof(BasicTheme_Template4, _thumbFill2_Color_inst);
        type->StrongRefOffsets[4] = offsetof(BasicTheme_Template4, _switchThumb2_Opacity_inst);
        type->StrongRefOffsets[5] = offsetof(BasicTheme_Template4, _trackFillAnim_Value_inst);
        type->StrongRefOffsets[6] = offsetof(BasicTheme_Template4, _thumbFill1Anim_Value_inst);
        type->StrongRefOffsets[7] = offsetof(BasicTheme_Template4, _thumbFill2Anim_Value_inst);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "__parent";
        type->StrongRefNames[1] = "_thumbFill_Color_inst";
        type->StrongRefNames[2] = "_trackFill_Color_inst";
        type->StrongRefNames[3] = "_thumbFill2_Color_inst";
        type->StrongRefNames[4] = "_switchThumb2_Opacity_inst";
        type->StrongRefNames[5] = "_trackFillAnim_Value_inst";
        type->StrongRefNames[6] = "_thumbFill1Anim_Value_inst";
        type->StrongRefNames[7] = "_thumbFill2Anim_Value_inst";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void BasicTheme_Template4__OnApply(BasicTheme_Template4* __this, ::app::Fuse::Controls::Switch* self)
{
    ::app::Fuse::Drawing::SolidColor* _thumbFill = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_thumbFill_Color_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _thumbFill);
    ::app::Fuse::Drawing::SolidColor* _trackFill = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_trackFill_Color_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _trackFill);
    ::app::Fuse::Drawing::SolidColor* _thumbFill2 = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_thumbFill2_Color_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _thumbFill2);
    ::app::Fuse::Shapes::Circle* _switchThumb2 = ::app::Fuse::Shapes::Circle__New_1(NULL);
    __this->_switchThumb2_Opacity_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)_switchThumb2);
    ::app::Fuse::Animations::Change__float4* _trackFillAnim = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_trackFill_Color_inst);
    __this->_trackFillAnim_Value_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, _trackFillAnim);
    ::app::Fuse::Animations::Change__float4* _thumbFill1Anim = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_thumbFill_Color_inst);
    __this->_thumbFill1Anim_Value_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, _thumbFill1Anim);
    ::app::Fuse::Animations::Change__float4* _thumbFill2Anim = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_thumbFill2_Color_inst);
    __this->_thumbFill2Anim_Value_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Animations_Change___float4_Value_Property__New_1(NULL, _thumbFill2Anim);
    ::app::Fuse::Controls::Panel* temp = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Shapes::Circle* _switchThumb = ::app::Fuse::Shapes::Circle__New_1(NULL);
    ::app::Fuse::Effects::DropShadow* temp1 = ::app::Fuse::Effects::DropShadow__New_1(NULL);
    ::app::Fuse::Effects::DropShadow* temp2 = ::app::Fuse::Effects::DropShadow__New_1(NULL);
    ::app::Fuse::Shapes::Rectangle* _bounds = ::app::Fuse::Shapes::Rectangle__New_1(NULL);
    ::app::Fuse::Shapes::Rectangle* temp3 = ::app::Fuse::Shapes::Rectangle__New_1(NULL);
    ::app::Fuse::Triggers::WhileDisabled* temp4 = ::app::Fuse::Triggers::WhileDisabled__New_1(NULL);
    ::app::Fuse::Animations::Change__float4* temp5 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_thumbFill_Color_inst);
    ::app::Fuse::Animations::Change__float4* temp6 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_trackFill_Color_inst);
    ::app::Fuse::Controls::DefaultSwitchBehavior* temp7 = ::app::Fuse::Controls::DefaultSwitchBehavior__New_1(NULL);
    ::app::Fuse::Animations::Move* temp8 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Fuse::Animations::Move* temp9 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Fuse::Gestures::Pressing* temp10 = ::app::Fuse::Gestures::Pressing__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp11 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->_switchThumb2_Opacity_inst);
    ::app::Fuse::Triggers::Focusing* temp12 = ::app::Fuse::Triggers::Focusing__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp13 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->_switchThumb2_Opacity_inst);
    ::app::Fuse::Resources::ResourceBinding__float4* temp14 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_trackFillAnim_Value_inst, ::uGetConstString("C200"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp15 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_thumbFill1Anim_Value_inst, ::uGetConstString("C500"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp16 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_thumbFill2Anim_Value_inst, ::uGetConstString("C500"));
    ::uPtr< ::app::Fuse::Controls::Switch*>(self)->SetStyleWidth(70.0f);
    self->SetStyleHeight(48.0f);
    self->SetStyleMargin(::app::Uno::Float4__New_2(NULL, 4.0f, 4.0f, 4.0f, 4.0f));
    ::app::Fuse::Input::Focus__SetIsFocusable(NULL, (::app::Fuse::Node*)self, true);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp)->Appearance((::app::Fuse::Elements::Element*)temp3);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp->Children()), (::app::Fuse::Elements::Element*)_switchThumb);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp->Children()), (::app::Fuse::Elements::Element*)_switchThumb2);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp->Children()), (::app::Fuse::Elements::Element*)_bounds);
    ::uPtr< ::app::Fuse::Shapes::Circle*>(_switchThumb)->Width(20.0f);
    _switchThumb->Height(20.0f);
    _switchThumb->Alignment(9);
    _switchThumb->Margin(::app::Uno::Float4__New_2(NULL, 14.0f, 0.0f, 14.0f, 0.0f));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(_switchThumb->Fills()), (::app::Fuse::Drawing::Brush*)_thumbFill);
    ::app::Uno::Collections::ICollection__Fuse_Effects_Effect::Add(::uPtr< ::uObject*>(_switchThumb->Effects()), (::app::Fuse::Effects::Effect*)temp1);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(_thumbFill)->Color(::app::Uno::Float4__New_2(NULL, 0.9803922f, 0.9803922f, 0.9803922f, 1.0f));
    ::uPtr< ::app::Fuse::Effects::DropShadow*>(temp1)->Softness(5.0f);
    temp1->Offset(::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f));
    temp1->Multiplier(0.35f);
    ::uPtr< ::app::Fuse::Shapes::Circle*>(_switchThumb2)->Width(48.0f);
    _switchThumb2->Height(48.0f);
    _switchThumb2->Alignment(5);
    _switchThumb2->Opacity(0.0f);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(_switchThumb2->Fills()), (::app::Fuse::Drawing::Brush*)_thumbFill2);
    ::app::Uno::Collections::ICollection__Fuse_Effects_Effect::Add(::uPtr< ::uObject*>(_switchThumb2->Effects()), (::app::Fuse::Effects::Effect*)temp2);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(_thumbFill2)->Color(::app::Uno::Float4__New_2(NULL, 0.9803922f, 0.9803922f, 0.9803922f, 1.0f));
    ::uPtr< ::app::Fuse::Effects::DropShadow*>(temp2)->Softness(5.0f);
    temp2->Offset(::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f));
    temp2->Multiplier(0.35f);
    ::uPtr< ::app::Fuse::Shapes::Rectangle*>(_bounds)->CornerRadius(::app::Uno::Float4__New_2(NULL, 7.0f, 7.0f, 7.0f, 7.0f));
    _bounds->Width(32.0f);
    _bounds->Height(14.0f);
    _bounds->Alignment(10);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(_bounds->Fills()), (::app::Fuse::Drawing::Brush*)_trackFill);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(_trackFill)->Color(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 0.2588235f));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileDisabled*>(temp4)->Animators()), (::app::Fuse::Animations::Animator*)temp5);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp4->Animators()), (::app::Fuse::Animations::Animator*)temp6);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp5)->Value(::app::Uno::Float4__New_2(NULL, 0.7411765f, 0.7411765f, 0.7411765f, 1.0f));
    temp5->Easing(3);
    temp5->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp6)->Value(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 0.1176471f));
    temp6->Easing(3);
    temp6->Duration(0.25);
    ::uPtr< ::app::Fuse::Controls::DefaultSwitchBehavior*>(temp7)->Bounds((::app::Fuse::Elements::Element*)_bounds);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp7->Animators()), (::app::Fuse::Animations::Animator*)_thumbFill1Anim);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp7->Animators()), (::app::Fuse::Animations::Animator*)_thumbFill2Anim);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp7->Animators()), (::app::Fuse::Animations::Animator*)_trackFillAnim);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp7->Animators()), (::app::Fuse::Animations::Animator*)temp8);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp7->Animators()), (::app::Fuse::Animations::Animator*)temp9);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(_thumbFill1Anim)->Value(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    _thumbFill1Anim->Easing(3);
    _thumbFill1Anim->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(_thumbFill2Anim)->Value(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    _thumbFill2Anim->Easing(3);
    _thumbFill2Anim->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(_trackFillAnim)->Value(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    _trackFillAnim->Easing(3);
    _trackFillAnim->Duration(0.25);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp8)->X(22.0f);
    temp8->Easing(3);
    temp8->Duration(0.25);
    temp8->Target((::app::Fuse::Node*)_switchThumb);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp9)->X(22.0f);
    temp9->Easing(3);
    temp9->Duration(0.25);
    temp9->Target((::app::Fuse::Node*)_switchThumb2);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Pressing*>(temp10)->Animators()), (::app::Fuse::Animations::Animator*)temp11);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp11)->Value(0.3f);
    temp11->Easing(11);
    temp11->EasingBack(10);
    temp11->Duration(0.25);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::Focusing*>(temp12)->Animators()), (::app::Fuse::Animations::Animator*)temp13);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp13)->Value(0.3f);
    temp13->Easing(11);
    temp13->EasingBack(10);
    temp13->Duration(0.25);
    self->SetStyleAppearance((::app::Fuse::Elements::Element*)temp);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp4);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp7);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp10);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp12);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp14);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp15);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp16);
}

void BasicTheme_Template4___ObjInit_1(BasicTheme_Template4* __this, ::app::Fuse::BasicTheme::BasicTheme* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Switch___ObjInit(__this);
    __this->__parent = parent;
}

BasicTheme_Template4* BasicTheme_Template4__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicTheme* parent)
{
    BasicTheme_Template4* inst = (::app::Fuse::BasicTheme::BasicTheme_Template4*)::uAllocObject(sizeof(::app::Fuse::BasicTheme::BasicTheme_Template4), ::app::Fuse::BasicTheme::BasicTheme_Template4__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

}}}
