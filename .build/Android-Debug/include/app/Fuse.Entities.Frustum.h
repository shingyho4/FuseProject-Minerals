// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_FRUSTUM_H__
#define __APP_FUSE_ENTITIES_FRUSTUM_H__

#include <app/Fuse.Entities.Component.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Entities {

struct Frustum;

struct Frustum__uType : ::app::Fuse::Entities::Component__uType
{
};

Frustum__uType* Frustum__typeof();

float Frustum__get_FovRadians(Frustum* __this);
void Frustum__set_FovRadians(Frustum* __this, float value);
float Frustum__get_ZNear(Frustum* __this);
void Frustum__set_ZNear(Frustum* __this, float value);
float Frustum__get_ZFar(Frustum* __this);
void Frustum__set_ZFar(Frustum* __this, float value);
bool Frustum__get_HasExplicitAspect(Frustum* __this);
float Frustum__get_ExplicitAspect(Frustum* __this);
void Frustum__set_ExplicitAspect(Frustum* __this, float value);
::app::Uno::Float4x4 Frustum__get_View(Frustum* __this);
void Frustum__OnAdded(Frustum* __this, ::app::Fuse::Entities::Entity* e);
void Frustum__OnRemoved(Frustum* __this, ::app::Fuse::Entities::Entity* e);
::app::Uno::Float4x4 Frustum__GetProjection(Frustum* __this, float aspect);
::app::Uno::Float4x4 Frustum__GetViewProjection(Frustum* __this, float aspect);
::app::Uno::Float4x4 Frustum__GetView(Frustum* __this, float aspect);
void Frustum___ObjInit_2(Frustum* __this);
Frustum* Frustum__New_2(::uStatic* __this);

struct Frustum : ::app::Fuse::Entities::Component
{
    float fovRadians;
    float zNear;
    float zFar;
    bool _hasExplicitAspect;
    float _aspect;

    ::app::Uno::Float4x4 GetProjection(float aspect);
    ::app::Uno::Float4x4 GetViewProjection(float aspect);
    ::app::Uno::Float4x4 GetView(float aspect);
    void _ObjInit_2() { Frustum___ObjInit_2(this); }
    float FovRadians() { return Frustum__get_FovRadians(this); }
    void FovRadians(float value) { Frustum__set_FovRadians(this, value); }
    float ZNear() { return Frustum__get_ZNear(this); }
    void ZNear(float value) { Frustum__set_ZNear(this, value); }
    float ZFar() { return Frustum__get_ZFar(this); }
    void ZFar(float value) { Frustum__set_ZFar(this, value); }
    bool HasExplicitAspect() { return Frustum__get_HasExplicitAspect(this); }
    float ExplicitAspect() { return Frustum__get_ExplicitAspect(this); }
    void ExplicitAspect(float value) { Frustum__set_ExplicitAspect(this, value); }
    ::app::Uno::Float4x4 View();
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {
namespace Entities {

inline ::app::Uno::Float4x4 Frustum::GetProjection(float aspect) { return Frustum__GetProjection(this, aspect); }
inline ::app::Uno::Float4x4 Frustum::GetViewProjection(float aspect) { return Frustum__GetViewProjection(this, aspect); }
inline ::app::Uno::Float4x4 Frustum::GetView(float aspect) { return Frustum__GetView(this, aspect); }
inline ::app::Uno::Float4x4 Frustum::View() { return Frustum__get_View(this); }

}}}


#endif
