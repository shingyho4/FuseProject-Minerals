// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.App.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Internal.WindowViewport.h>
#include <app/Fuse.IWindow.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Profiling.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.Theme.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Uno_UX_Resource.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Fuse {

App__uType* App__typeof()
{
    static App__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (App__uType*)::uAllocClassType(sizeof(App__uType), "Fuse.App", ::app::Uno::Application__typeof(), 1, 2);
        type->__fp_Draw = (void(*)(::app::Uno::Application*))App__Draw;
        type->__fp_Update = (void(*)(::app::Uno::Application*))App__Update;

        type->__interface_0.__fp_GetResource = (::uObject*(*)(void*, ::uString*, ::uDelegate*))App__Fuse_IResourceParent_GetResource;
        type->__interface_0.__fp_ApplyStyle = (void(*)(void*, ::uObject*))App__Fuse_IResourceParent_ApplyStyle;

        type->Implements[0] = ::app::Fuse::IResourceParent__typeof();

        type->InterfaceOffsets[0] = offsetof(App__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(App, _theme);
        type->StrongRefOffsets[1] = offsetof(App, WindowViewport);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_theme";
        type->StrongRefNames[1] = "WindowViewport";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* App__get_CurrentWindow(::uStatic* __this)
{
    App* t = ::uAs< App*>(::app::Uno::Application__get_Current(NULL), App__typeof());

    if (t == NULL)
    {
        return NULL;
    }

    return (::uObject*)::uPtr< ::app::Fuse::App*>(t)->WindowViewport;
}

::app::Fuse::Theme* App__get_Theme(App* __this)
{
    return __this->_theme;
}

void App__set_Theme(App* __this, ::app::Fuse::Theme* value)
{
    if (__this->_theme != value)
    {
        __this->_theme = value;

        if (__this->RootNode() != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->RootNode())->ResetStyle();
        }
    }
}

::app::Fuse::Node* App__get_RootNode(App* __this)
{
    return ::uPtr< ::app::Fuse::Internal::WindowViewport*>(__this->WindowViewport)->RootNode();
}

void App__set_RootNode(App* __this, ::app::Fuse::Node* value)
{
    ::uPtr< ::app::Fuse::Internal::WindowViewport*>(__this->WindowViewport)->RootNode(value);
}

::uObject* App__Fuse_IResourceParent_GetResource(App* __this, ::uString* key, ::uDelegate* acceptor)
{
    if ((__this->_theme != NULL) && ::uPtr< ::app::Fuse::Theme*>(__this->_theme)->HasResources())
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Uno_UX_Resource::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Theme*>(__this->_theme)->Resources())); i++)
        {
            ::app::Uno::UX::Resource* r = ::app::Uno::Collections::IList__Uno_UX_Resource::Item(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Theme*>(__this->_theme)->Resources()), i);

            if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::app::Uno::UX::Resource*>(r)->Key(), key) && (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)acceptor, NULL) || ::uPtr< ::uDelegate*>(acceptor)->Invoke< bool, ::uObject*>(::uPtr< ::app::Uno::UX::Resource*>(r)->Value())))
            {
                return ::uPtr< ::app::Uno::UX::Resource*>(r)->Value();
            }
        }
    }

    return NULL;
}

void App__Fuse_IResourceParent_ApplyStyle(App* __this, ::uObject* target)
{
    if (__this->_theme != NULL)
    {
        ::uPtr< ::app::Fuse::Theme*>(__this->_theme)->Apply(target);
    }
}

void App__OnNeedsInvalidate(App* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->_forceDrawNextFrame = true;
}

void App__Draw(App* __this)
{
    double t = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
    ::app::Fuse::Profiling__BeginDraw(NULL);
    __this->OnDraw();
    ::app::Fuse::DrawContext* dc = ::app::Fuse::DrawContext__New_1(NULL);
    ::uPtr< ::app::Fuse::DrawContext*>(dc)->MakeCurrent();
    ::uPtr< ::app::Fuse::Internal::WindowViewport*>(__this->WindowViewport)->Draw(dc);
    dc->Flush();
    ::app::Fuse::UpdateManager__IncreaseFrameIndex(NULL);
    ::app::Fuse::Profiling__EndDraw(NULL, ::app::Uno::Diagnostics::Clock__GetSeconds(NULL) - t);
}

void App__OnDraw(App* __this)
{
}

void App__Update(App* __this)
{
    __this->OnUpdate();
    ::app::Fuse::UpdateManager__Update(NULL);

    if (::uPtr< ::app::Fuse::Internal::WindowViewport*>(__this->WindowViewport)->RootNode() == NULL)
    {
        return;
    }

    bool d = ::uPtr< ::app::Fuse::Node*>(__this->RootNode())->DrawNextFrame() || __this->_forceDrawNextFrame;

    if (::app::Uno::Int2__op_Inequality(NULL, __this->windowSizeCache, ::uPtr< ::app::Uno::Platform::Window*>(__this->Window())->ClientSize()))
    {
        d = true;
        __this->windowSizeCache = ::uPtr< ::app::Uno::Platform::Window*>(__this->Window())->ClientSize();
    }

    if (__this->DrawNextFrame() != d)
    {
        __this->DrawNextFrame(d);
    }

    __this->_forceDrawNextFrame = false;
}

void App__OnUpdate(App* __this)
{
}

void App___ObjInit_1(App* __this)
{
    ::app::Uno::Application___ObjInit(__this);
    __this->ClearColor(::app::Uno::Float4__New_1(NULL, 1.0f));
    __this->WindowViewport = ::app::Fuse::Internal::WindowViewport__New_1(NULL, (::uObject*)__this, __this->Window());
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window())->add_AppEnteredForeground(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::App__OnNeedsInvalidate, __this));
    ::uPtr< ::app::Uno::Platform::Window*>(__this->Window())->add_Resized(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)::app::Fuse::App__OnNeedsInvalidate, __this));
}

}}
