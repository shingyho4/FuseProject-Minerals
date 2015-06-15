// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.BasicTheme\0.1.0\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.BasicTheme.BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property.h>
#include <app/Fuse.BasicTheme.BasicTheme_Template5.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.NavigationBar.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ResourceBinding__float4.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Float.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Property__float4.h>

namespace app {
namespace Fuse {
namespace BasicTheme {

BasicTheme_Template5__uType* BasicTheme_Template5__typeof()
{
    static BasicTheme_Template5__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BasicTheme_Template5__uType*)::uAllocClassType(sizeof(BasicTheme_Template5__uType), "Fuse.BasicTheme.BasicTheme.Template5", ::app::Uno::UX::Template__Fuse_Controls_NavigationBar__typeof(), 1, 2);
        type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_NavigationBar*, ::app::Fuse::Controls::NavigationBar*))BasicTheme_Template5__OnApply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(BasicTheme_Template5__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(BasicTheme_Template5, __parent);
        type->StrongRefOffsets[1] = offsetof(BasicTheme_Template5, _navigationBarFill_Color_inst);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "__parent";
        type->StrongRefNames[1] = "_navigationBarFill_Color_inst";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void BasicTheme_Template5__OnApply(BasicTheme_Template5* __this, ::app::Fuse::Controls::NavigationBar* self)
{
    ::app::Fuse::Drawing::SolidColor* _navigationBarFill = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_navigationBarFill_Color_inst = ::app::Fuse::BasicTheme::BasicTheme_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, _navigationBarFill);
    ::app::Fuse::Shapes::Rectangle* temp = ::app::Fuse::Shapes::Rectangle__New_1(NULL);
    ::app::Fuse::Resources::ResourceBinding__float4* temp1 = ::app::Fuse::Resources::ResourceBinding__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->_navigationBarFill_Color_inst, ::uGetConstString("C500"));
    ::uPtr< ::app::Fuse::Controls::NavigationBar*>(self)->SetStyleHeight(48.0f);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Shapes::Rectangle*>(temp)->Fills()), (::app::Fuse::Drawing::Brush*)_navigationBarFill);
    self->SetStyleAppearance((::app::Fuse::Elements::Element*)temp);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp1);
}

void BasicTheme_Template5___ObjInit_1(BasicTheme_Template5* __this, ::app::Fuse::BasicTheme::BasicTheme* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_NavigationBar___ObjInit(__this);
    __this->__parent = parent;
}

BasicTheme_Template5* BasicTheme_Template5__New_1(::uStatic* __this, ::app::Fuse::BasicTheme::BasicTheme* parent)
{
    BasicTheme_Template5* inst = (::app::Fuse::BasicTheme::BasicTheme_Template5*)::uAllocObject(sizeof(::app::Fuse::BasicTheme::BasicTheme_Template5), ::app::Fuse::BasicTheme::BasicTheme_Template5__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

}}}
