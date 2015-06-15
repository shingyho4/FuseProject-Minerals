// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_WINDOW_CAMERA_H__
#define __APP_FUSE_INTERNAL_WINDOW_CAMERA_H__

#include <app/Fuse.ICamera.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Internal {

struct WindowCamera;

struct WindowCamera__uType : ::uClassType
{
    ::app::Fuse::ICamera __interface_0;
};

WindowCamera__uType* WindowCamera__typeof();

::app::Uno::Float4x4 WindowCamera__get_ProjectionTransform(WindowCamera* __this);
::app::Uno::Float4x4 WindowCamera__get_ViewTransform(WindowCamera* __this);
::app::Uno::Float4x4 WindowCamera__get_ViewProjectionTransform(WindowCamera* __this);
::app::Uno::Float3 WindowCamera__get_WorldPosition(WindowCamera* __this);
void WindowCamera__UpdateCache(WindowCamera* __this);
::app::Uno::Float4x4 WindowCamera__MatrixPerspectiveView(::uStatic* __this, ::app::Uno::Float2 viewSize, float perspective, ::app::Uno::Float2 relOrigin);
::app::Uno::Float4x4 WindowCamera__MatrixPerspectiveProjection(::uStatic* __this, ::app::Uno::Float2 viewSize, float perspective, ::app::Uno::Float2 relOrigin);
void WindowCamera___ObjInit(WindowCamera* __this);
WindowCamera* WindowCamera__New_1(::uStatic* __this);

struct WindowCamera : ::uObject
{
    ::uStrong< ::uObject*> Window;
    float Perspective;
    ::app::Uno::Float4x4 _cacheProjectionTransformInverse;
    ::app::Uno::Float4x4 _cacheProjectionTransform;
    ::app::Uno::Float4x4 _cacheViewTransform;
    ::app::Uno::Float4x4 _cacheViewProjectionTransform;
    ::app::Uno::Float2 _cacheWindowSize;
    float _cachePerspective;

    void UpdateCache() { WindowCamera__UpdateCache(this); }
    void _ObjInit() { WindowCamera___ObjInit(this); }
    ::app::Uno::Float4x4 ProjectionTransform();
    ::app::Uno::Float4x4 ViewTransform();
    ::app::Uno::Float4x4 ViewProjectionTransform();
    ::app::Uno::Float3 WorldPosition();
};

}}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Float4x4 WindowCamera::ProjectionTransform() { return WindowCamera__get_ProjectionTransform(this); }
inline ::app::Uno::Float4x4 WindowCamera::ViewTransform() { return WindowCamera__get_ViewTransform(this); }
inline ::app::Uno::Float4x4 WindowCamera::ViewProjectionTransform() { return WindowCamera__get_ViewProjectionTransform(this); }
inline ::app::Uno::Float3 WindowCamera::WorldPosition() { return WindowCamera__get_WorldPosition(this); }

}}}


#endif
