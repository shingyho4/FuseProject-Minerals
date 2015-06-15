// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Elements_Element_float_Width_Property.h>
#include <app/Fuse.BasicTheme.BasicTheme_Template3.h>
#include <app/Fuse.BasicTheme.SliderTrigger.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.Primitives.Track.h>
#include <app/Fuse.Controls.Slider.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ResourceBinding__float4.h>
#include <app/Fuse.Shapes.Circle.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileDisabled.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {
namespace Fuse {
namespace BasicTheme {

BasicTheme_Template3__uType* BasicTheme_Template3__typeof()
{
    static BasicTheme_Template3__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BasicTheme_Template3__uType*)::uAllocClassType(sizeof(BasicTheme_Template3__uType), "Fuse.BasicTheme.BasicTheme.Template3", ::app::Uno::UX::Template__Fuse_Controls_Slider__typeof(), 1, 5);
        type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Slider*, ::app::Fuse::Controls::Slider*))BasicTheme_Template3__OnApply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(BasicTheme_Template3__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(BasicTheme_Template3, __parent);
        type->StrongRefOffsets[1] = offsetof(BasicTheme_Template3, _progressTrack_Width_inst);
        type->StrongRefOffsets[2] = offsetof(BasicTheme_Template3, _sliderThumbFill_Color_inst);
        type->StrongRefOffsets[3] = offsetof(BasicTheme_Template3, _sliderTrackFill_Color_inst);
        type->StrongRefOffsets[4] = offsetof(BasicTheme_Template3, _sliderThumbFill2_Color_inst);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "__parent";
        type->StrongRefNames[1] = "_progressTrack_Width_inst";
        type->StrongRefNames[2] = "_sliderThumbFill_Color_inst";
        type->StrongRefNames[3] = "_sliderTrackFill_Color_inst";
        type->StrongRefNames[4] = "_sliderThumbFill2_Color_inst";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void BasicTheme_Template3__OnApply(BasicTheme_Template3* __this, ::app::Fuse::Controls::Slider* self)
{
    ::app::Fuse::Shapes::Rectangle* _progressTrack = ::app::Fuse::Shapes::Rectangle__New_1(NULL);
    __this->_progressTrack_Width_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Elements_Element_float_Width_Property__New_1(NULL, (::app::Fuse::Elements::Element*)_progressTrack);
    ::app::Fuse::Drawing::SolidColor* _sliderThumbFill = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_sliderThumbFill_Color_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _sliderThumbFill);
    ::app::Fuse::Drawing::SolidColor* _sliderTrackFill = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_sliderTrackFill_Color_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _sliderTrackFill);
    ::app::Fuse::Drawing::SolidColor* _sliderThumbFill2 = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_sliderThumbFill2_Color_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _sliderThumbFill2);
    ::app::Fuse::Controls::Panel* temp = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Shapes::Circle* _thumb = ::app::Fuse::Shapes::Circle__New_1(NULL);
    ::app::Fuse::Shapes::Circle* _focusedThumb = ::app::Fuse::Shapes::Circle__New_1(NULL);
    ::app::Fuse::Controls::Panel* temp1 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Shapes::Rectangle* temp2 = ::app::Fuse::Shapes::Rectangle__New_1(NULL);
    ::app::Fuse::Drawing::SolidColor* temp3 = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    ::app::Fuse::Shapes::Rectangle* temp4 = ::app::Fuse::Shapes::Rectangle__New_1(NULL);
    ::app::Fuse::BasicTheme::SliderTrigger* temp5 = ::app::Fuse::BasicTheme::SliderTrigger__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp6 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->_progressTrack_Width_inst);
    ::app::Fuse::Triggers::WhileDisabled* temp7 = ::app::Fuse::Triggers::WhileDisabled__New_1(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp8 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_sliderThumbFill_Color_inst, ::uGetConstString("C500"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp9 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_sliderTrackFill_Color_inst, ::uGetConstString("C500"));
    ::app::Fuse::Resources::ResourceBinding__float4* temp10 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_sliderThumbFill2_Color_inst, ::uGetConstString("C500"));
    ::uPtr< ::app::Fuse::Controls::Slider*>(self)->SetStyleMinHeight(36.0f);
    self->SetStyleMargin(::app::Uno::Float4__New_2(NULL, 4.0f, 4.0f, 4.0f, 4.0f));
    ::app::Fuse::Input::Focus__SetIsFocusable(NULL, (::app::Fuse::Node*)self, true);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp)->Width(36.0f);
    temp->Height(36.0f);
    temp->Alignment(1);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp->Children()), (::app::Fuse::Elements::Element*)_thumb);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp->Children()), (::app::Fuse::Elements::Element*)_focusedThumb);
    ::uPtr< ::app::Fuse::Shapes::Circle*>(_thumb)->Width(12.0f);
    _thumb->Height(12.0f);
    _thumb->Alignment(8);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(_thumb->Fills()), (::app::Fuse::Drawing::Brush*)_sliderThumbFill);
    ::uPtr< ::app::Fuse::Shapes::Circle*>(_focusedThumb)->Width(32.0f);
    _focusedThumb->Height(32.0f);
    _focusedThumb->Alignment(8);
    _focusedThumb->Opacity(0.0f);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(_focusedThumb->Fills()), (::app::Fuse::Drawing::Brush*)_sliderThumbFill2);
    ::uPtr< ::app::Fuse::Controls::Panel*>(temp1)->Appearance((::app::Fuse::Elements::Element*)temp4);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp1->Children()), (::app::Fuse::Elements::Element*)_progressTrack);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp1->Children()), (::app::Fuse::Elements::Element*)temp2);
    ::uPtr< ::app::Fuse::Shapes::Rectangle*>(_progressTrack)->Width(0.0f);
    _progressTrack->WidthUnit(1);
    _progressTrack->Height(2.0f);
    _progressTrack->Alignment(9);
    _progressTrack->Margin(::app::Uno::Float4__New_2(NULL, 18.0f, 0.0f, 18.0f, 0.0f));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(_progressTrack->Fills()), (::app::Fuse::Drawing::Brush*)_sliderTrackFill);
    ::uPtr< ::app::Fuse::Shapes::Rectangle*>(temp2)->Height(2.0f);
    temp2->Alignment(8);
    temp2->Margin(::app::Uno::Float4__New_2(NULL, 18.0f, 0.0f, 18.0f, 0.0f));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(temp2->Fills()), (::app::Fuse::Drawing::Brush*)temp3);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(temp3)->Color(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 0.2588235f));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::BasicTheme::SliderTrigger*>(temp5)->Animators()), (::app::Fuse::Animations::Animator*)temp6);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp6)->Value(100.0f);
    self->Thumb((::app::Fuse::Elements::Element*)temp);
    self->SetStyleAppearance((::app::Fuse::Elements::Element*)temp1);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp5);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp7);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp8);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp9);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp10);
}

void BasicTheme_Template3___ObjInit_1(BasicTheme_Template3* __this, ::app::Fuse::BasicTheme::BasicTheme* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Slider___ObjInit(__this);
    __this->__parent = parent;
}

BasicTheme_Template3* BasicTheme_Template3__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicTheme* parent)
{
    BasicTheme_Template3* inst = (::app::Fuse::BasicTheme::BasicTheme_Template3*)::uAllocObject(sizeof(::app::Fuse::BasicTheme::BasicTheme_Template3), ::app::Fuse::BasicTheme::BasicTheme_Template3__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

}}}
