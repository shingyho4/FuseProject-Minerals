// This file was generated based on 'D:\Shing\work\OCIO\FuseProject\MyMineral\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/_.MainView.h>
#include <app/_.MainView_Template3.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>

namespace app {

MainView_Template3__uType* MainView_Template3__typeof()
{
    static MainView_Template3__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (MainView_Template3__uType*)::uAllocClassType(sizeof(MainView_Template3__uType), "MainView.Template3", ::app::Uno::UX::Template__Fuse_Controls_Image__typeof(), 1, 1);
        type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Image*, ::app::Fuse::Controls::Image*))MainView_Template3__OnApply;

        type->Implements[0] = ::app::Uno::UX::ITemplate__typeof();

        type->InterfaceOffsets[0] = offsetof(MainView_Template3__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(MainView_Template3, __parent);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "__parent";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void MainView_Template3__OnApply(MainView_Template3* __this, ::app::Fuse::Controls::Image* self)
{
    ::uPtr< ::app::Fuse::Controls::Image*>(self)->SetStyleMargin(::app::Uno::Float4__New_2(NULL, 0.0f, 5.0f, 0.0f, 5.0f));
}

void MainView_Template3___ObjInit_1(MainView_Template3* __this, ::app::MainView* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Image___ObjInit(__this);
    __this->__parent = parent;
}

MainView_Template3* MainView_Template3__New_1(::uStatic* __this, ::app::MainView* parent)
{
    MainView_Template3* inst = (::app::MainView_Template3*)::uAllocObject(sizeof(::app::MainView_Template3), ::app::MainView_Template3__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

}
