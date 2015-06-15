// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.BasicTheme.BasicTheme_Template.h>
#include <app/Fuse.Controls.BackButton.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.DockPanel.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Shapes.Path.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.ICollection__Fuse_Elements_Element.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Elements_Element.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace BasicTheme {

BasicTheme_Template__uType* BasicTheme_Template__typeof()
{
    static BasicTheme_Template__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BasicTheme_Template__uType*)::uAllocClassType(sizeof(BasicTheme_Template__uType), "Fuse.BasicTheme.BasicTheme.Template", ::app::Uno::UX::Template__Fuse_Controls_BackButton__typeof(), 1, 1);
        type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_BackButton*, ::app::Fuse::Controls::BackButton*))BasicTheme_Template__OnApply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(BasicTheme_Template__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(BasicTheme_Template, __parent);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "__parent";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void BasicTheme_Template__OnApply(BasicTheme_Template* __this, ::app::Fuse::Controls::BackButton* self)
{
    ::app::Fuse::Controls::DockPanel* temp = ::app::Fuse::Controls::DockPanel__New_2(NULL);
    ::app::Fuse::Shapes::Path* temp1 = ::app::Fuse::Shapes::Path__New_1(NULL);
    ::app::Fuse::Drawing::Stroke* temp2 = ::app::Fuse::Drawing::Stroke__New_1(NULL);
    ::app::Fuse::Drawing::SolidColor* temp3 = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    ::app::Fuse::Controls::Text* temp4 = ::app::Fuse::Controls::Text__New_1(NULL);
    ::app::Fuse::Shapes::Rectangle* temp5 = ::app::Fuse::Shapes::Rectangle__New_1(NULL);
    ::uPtr< ::app::Fuse::Controls::BackButton*>(self)->SetStyleMinWidth(88.0f);
    self->SetStyleMinHeight(36.0f);
    self->SetStyleMargin(::app::Uno::Float4__New_2(NULL, 4.0f, 4.0f, 4.0f, 4.0f));
    self->SetStylePadding(::app::Uno::Float4__New_2(NULL, 8.0f, 0.0f, 8.0f, 0.0f));
    self->SetStyleTextColor(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    self->SetStyleTextAlignment(1);
    ::app::Fuse::Input::Focus__SetIsFocusable(NULL, (::app::Fuse::Node*)self, true);
    ::uPtr< ::app::Fuse::Controls::DockPanel*>(temp)->Alignment(9);
    ::app::Fuse::Controls::DockPanel__SetDock(NULL, (::app::Fuse::Elements::Element*)temp, 0);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp->Children()), (::app::Fuse::Elements::Element*)temp1);
    ::app::Uno::Collections::ICollection__Fuse_Elements_Element::Add(::uPtr< ::uObject*>(temp->Children()), (::app::Fuse::Elements::Element*)temp4);
    ::uPtr< ::app::Fuse::Shapes::Path*>(temp1)->Data(::uGetConstString("m 0 10 l 10 10 m 0 -20 l -10 10"));
    temp1->FillRule(0);
    temp1->Width(10.0f);
    temp1->Height(20.0f);
    temp1->Margin(::app::Uno::Float4__New_2(NULL, 5.0f, 0.0f, 2.0f, 0.0f));
    ::app::Fuse::Controls::DockPanel__SetDock(NULL, (::app::Fuse::Elements::Element*)temp1, 0);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(temp1->Strokes()), temp2);
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(temp2)->Width(1.0f);
    temp2->Brush((::app::Fuse::Drawing::Brush*)temp3);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(temp3)->Color(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::Text*>(temp4)->Content(::uGetConstString("BACK"));
    temp4->Alignment(9);
    temp4->Margin(::app::Uno::Float4__New_2(NULL, 5.0f, 0.0f, 5.0f, 0.0f));
    temp4->FontSize(18.0f);
    temp4->TextAlignment(1);
    self->SetStyleAppearance((::app::Fuse::Elements::Element*)temp5);
    self->SetStyleFont(::app::Fuse::BasicTheme::BasicTheme__RobotoLight);
    self->AddStyleChild((::app::Fuse::Elements::Element*)temp);
}

void BasicTheme_Template___ObjInit_1(BasicTheme_Template* __this, ::app::Fuse::BasicTheme::BasicTheme* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_BackButton___ObjInit(__this);
    __this->__parent = parent;
}

BasicTheme_Template* BasicTheme_Template__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicTheme* parent)
{
    BasicTheme_Template* inst = (::app::Fuse::BasicTheme::BasicTheme_Template*)::uAllocObject(sizeof(::app::Fuse::BasicTheme::BasicTheme_Template), ::app::Fuse::BasicTheme::BasicTheme_Template__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

}}}
