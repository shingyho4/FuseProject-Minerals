// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ORTHOGRAPHIC_CAMERA_H__
#define __APP_FUSE_ORTHOGRAPHIC_CAMERA_H__

#include <app/Fuse.ICamera.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {

struct OrthographicCamera;

struct OrthographicCamera__uType : ::uClassType
{
    ::app::Fuse::ICamera __interface_0;
};

OrthographicCamera__uType* OrthographicCamera__typeof();

::app::Uno::Float4x4 OrthographicCamera__get_ProjectionTransform(OrthographicCamera* __this);
::app::Uno::Float4x4 OrthographicCamera__get_ViewTransform(OrthographicCamera* __this);
::app::Uno::Float4x4 OrthographicCamera__get_ViewProjectionTransform(OrthographicCamera* __this);
::app::Uno::Float3 OrthographicCamera__get_WorldPosition(OrthographicCamera* __this);
::app::Uno::Float4x4 OrthographicCamera__MatrixView(OrthographicCamera* __this, ::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize, ::app::Uno::Float4x4 localFromWorld);
::app::Uno::Float4x4 OrthographicCamera__MatrixProjection(OrthographicCamera* __this, ::app::Uno::Float2 viewSize);
void OrthographicCamera___ObjInit(OrthographicCamera* __this, ::app::Uno::Float2 Origin, ::app::Uno::Float2 Size, ::app::Uno::Float4x4 LocalFromWorld);
OrthographicCamera* OrthographicCamera__New_1(::uStatic* __this, ::app::Uno::Float2 Origin, ::app::Uno::Float2 Size, ::app::Uno::Float4x4 LocalFromWorld);

struct OrthographicCamera : ::uObject
{
    ::app::Uno::Float4x4 _projectionTransformInverse;
    ::app::Uno::Float4x4 _projectionTransform;
    ::app::Uno::Float4x4 _viewTransform;
    ::app::Uno::Float4x4 _viewProjectionTransform;
    ::app::Uno::Float2 Size;

    ::app::Uno::Float4x4 MatrixView(::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize, ::app::Uno::Float4x4 localFromWorld);
    ::app::Uno::Float4x4 MatrixProjection(::app::Uno::Float2 viewSize);
    void _ObjInit(::app::Uno::Float2 Origin, ::app::Uno::Float2 Size, ::app::Uno::Float4x4 LocalFromWorld);
    ::app::Uno::Float4x4 ProjectionTransform();
    ::app::Uno::Float4x4 ViewTransform();
    ::app::Uno::Float4x4 ViewProjectionTransform();
    ::app::Uno::Float3 WorldPosition();
};

}}

#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float4x4 OrthographicCamera::MatrixView(::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize, ::app::Uno::Float4x4 localFromWorld) { return OrthographicCamera__MatrixView(this, origin, viewSize, localFromWorld); }
inline ::app::Uno::Float4x4 OrthographicCamera::MatrixProjection(::app::Uno::Float2 viewSize) { return OrthographicCamera__MatrixProjection(this, viewSize); }
inline void OrthographicCamera::_ObjInit(::app::Uno::Float2 Origin, ::app::Uno::Float2 Size, ::app::Uno::Float4x4 LocalFromWorld) { OrthographicCamera___ObjInit(this, Origin, Size, LocalFromWorld); }
inline ::app::Uno::Float4x4 OrthographicCamera::ProjectionTransform() { return OrthographicCamera__get_ProjectionTransform(this); }
inline ::app::Uno::Float4x4 OrthographicCamera::ViewTransform() { return OrthographicCamera__get_ViewTransform(this); }
inline ::app::Uno::Float4x4 OrthographicCamera::ViewProjectionTransform() { return OrthographicCamera__get_ViewProjectionTransform(this); }
inline ::app::Uno::Float3 OrthographicCamera::WorldPosition() { return OrthographicCamera__get_WorldPosition(this); }

}}


#endif
