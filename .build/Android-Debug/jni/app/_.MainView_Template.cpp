// This file was generated based on 'D:\Shing\work\OCIO\FuseProject\MyMineral\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/_.MainView.h>
#include <app/_.MainView_Template.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Font.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>

namespace app {

MainView_Template__uType* MainView_Template__typeof()
{
    static MainView_Template__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MainView_Template__uType*)::uAllocClassType(sizeof(MainView_Template__uType), "MainView.Template", ::app::Uno::UX::Template__Fuse_Controls_Text__typeof(), 1, 1);
        type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Text*, ::app::Fuse::Controls::Text*))MainView_Template__OnApply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(MainView_Template__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(MainView_Template, __parent);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "__parent";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void MainView_Template__OnApply(MainView_Template* __this, ::app::Fuse::Controls::Text* self)
{
    ::uPtr< ::app::Fuse::Controls::Text*>(self)->SetStyleAlignment(10);
    self->SetStyleTextColor(::app::Uno::Float4__New_2(NULL, 1.0f, 1.0f, 1.0f, 1.0f));
    self->SetStyleFontSize(20.0f);
    self->SetStyleFont(::app::Fuse::BasicTheme::BasicTheme__RobotoRegular);
}

void MainView_Template___ObjInit_1(MainView_Template* __this, ::app::MainView* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Text___ObjInit(__this);
    __this->__parent = parent;
}

MainView_Template* MainView_Template__New_1(::uStatic* __this, ::app::MainView* parent)
{
    MainView_Template* inst = (::app::MainView_Template*)::uAllocObject(sizeof(::app::MainView_Template), ::app::MainView_Template__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

}
