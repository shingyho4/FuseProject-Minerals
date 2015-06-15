// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_APP_H__
#define __APP_FUSE_APP_H__

#include <app/Fuse.IResourceParent.h>
#include <app/Uno.Application.h>
#include <app/Uno.Int2.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct WindowViewport; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Theme; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {

struct App;

struct App__uType : ::app::Uno::Application__uType
{
    ::app::Fuse::IResourceParent __interface_0;
};

App__uType* App__typeof();

::uObject* App__get_CurrentWindow(::uStatic* __this);
::app::Fuse::Theme* App__get_Theme(App* __this);
void App__set_Theme(App* __this, ::app::Fuse::Theme* value);
::app::Fuse::Node* App__get_RootNode(App* __this);
void App__set_RootNode(App* __this, ::app::Fuse::Node* value);
::uObject* App__Fuse_IResourceParent_GetResource(App* __this, ::uString* key, ::uDelegate* acceptor);
void App__Fuse_IResourceParent_ApplyStyle(App* __this, ::uObject* target);
void App__OnNeedsInvalidate(App* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void App__Draw(App* __this);
void App__OnDraw(App* __this);
void App__Update(App* __this);
void App__OnUpdate(App* __this);
void App___ObjInit_1(App* __this);

struct App : ::app::Uno::Application
{
    ::uStrong< ::app::Fuse::Theme*> _theme;
    ::uStrong< ::app::Fuse::Internal::WindowViewport*> WindowViewport;
    bool _forceDrawNextFrame;
    ::app::Uno::Int2 windowSizeCache;

    void OnNeedsInvalidate(::uObject* sender, ::app::Uno::EventArgs* args) { App__OnNeedsInvalidate(this, sender, args); }
    void OnDraw() { App__OnDraw(this); }
    void OnUpdate() { App__OnUpdate(this); }
    void _ObjInit_1() { App___ObjInit_1(this); }
    ::app::Fuse::Theme* Theme() { return App__get_Theme(this); }
    void Theme(::app::Fuse::Theme* value) { App__set_Theme(this, value); }
    ::app::Fuse::Node* RootNode() { return App__get_RootNode(this); }
    void RootNode(::app::Fuse::Node* value) { App__set_RootNode(this, value); }
};

}}


#endif
