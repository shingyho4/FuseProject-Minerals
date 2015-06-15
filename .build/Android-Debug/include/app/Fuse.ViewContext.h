// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_VIEW_CONTEXT_H__
#define __APP_FUSE_VIEW_CONTEXT_H__

#include <app/Fuse.ViewProvider.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {

struct ViewContext;

struct ViewContext__uType : ::app::Fuse::ViewProvider__uType
{
    void(*__fp_Flush)(ViewContext*);
};

ViewContext__uType* ViewContext__typeof();

::uObject* ViewContext__get_Camera(ViewContext* __this);
void ViewContext__Flush(ViewContext* __this);
::uObject* ViewContext__PushCamera(ViewContext* __this, ::uObject* c);
void ViewContext__PopCamera(ViewContext* __this, ::uObject* old);
::app::Uno::Float4x4 ViewContext__GetLocalToClipTransform(ViewContext* __this, ::app::Fuse::Node* n);
void ViewContext___ObjInit_1(ViewContext* __this, ::uObject* defaultCamera);

struct ViewContext : ::app::Fuse::ViewProvider
{
    ::uStrong< ::uObject*> _camera;

    void Flush() { (((ViewContext__uType*)this->__obj_type)->__fp_Flush)(this); }
    ::uObject* PushCamera(::uObject* c) { return ViewContext__PushCamera(this, c); }
    void PopCamera(::uObject* old) { ViewContext__PopCamera(this, old); }
    ::app::Uno::Float4x4 GetLocalToClipTransform(::app::Fuse::Node* n);
    void _ObjInit_1(::uObject* defaultCamera) { ViewContext___ObjInit_1(this, defaultCamera); }
    ::uObject* Camera() { return ViewContext__get_Camera(this); }
};

}}

#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float4x4 ViewContext::GetLocalToClipTransform(::app::Fuse::Node* n) { return ViewContext__GetLocalToClipTransform(this, n); }

}}


#endif
