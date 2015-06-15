// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Entities.Frustum.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Matrix.h>

namespace app {
namespace Fuse {
namespace Entities {

Frustum__uType* Frustum__typeof()
{
    static Frustum__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Frustum__uType*)::uAllocClassType(sizeof(Frustum__uType), "Fuse.Entities.Frustum", ::app::Fuse::Entities::Component__typeof());
        type->__fp_OnAdded = (void(*)(::app::Fuse::Entities::Component*, ::app::Fuse::Entities::Entity*))Frustum__OnAdded;
        type->__fp_OnRemoved = (void(*)(::app::Fuse::Entities::Component*, ::app::Fuse::Entities::Entity*))Frustum__OnRemoved;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float Frustum__get_FovRadians(Frustum* __this)
{
    return __this->fovRadians;
}

void Frustum__set_FovRadians(Frustum* __this, float value)
{
    __this->fovRadians = value;
}

float Frustum__get_ZNear(Frustum* __this)
{
    return __this->zNear;
}

void Frustum__set_ZNear(Frustum* __this, float value)
{
    __this->zNear = value;
}

float Frustum__get_ZFar(Frustum* __this)
{
    return __this->zFar;
}

void Frustum__set_ZFar(Frustum* __this, float value)
{
    __this->zFar = value;
}

bool Frustum__get_HasExplicitAspect(Frustum* __this)
{
    return __this->_hasExplicitAspect;
}

float Frustum__get_ExplicitAspect(Frustum* __this)
{
    return __this->_aspect;
}

void Frustum__set_ExplicitAspect(Frustum* __this, float value)
{
    __this->_aspect = value;
    __this->_hasExplicitAspect = true;
}

::app::Uno::Float4x4 Frustum__get_View(Frustum* __this)
{
    return ::uPtr< ::app::Fuse::Entities::Entity*>(__this->Entity())->WorldTransformInverse();
}

void Frustum__OnAdded(Frustum* __this, ::app::Fuse::Entities::Entity* e)
{
}

void Frustum__OnRemoved(Frustum* __this, ::app::Fuse::Entities::Entity* e)
{
}

::app::Uno::Float4x4 Frustum__GetProjection(Frustum* __this, float aspect)
{
    return ::app::Uno::Matrix__PerspectiveRH(NULL, __this->FovRadians(), aspect, __this->ZNear(), __this->ZFar());
}

::app::Uno::Float4x4 Frustum__GetViewProjection(Frustum* __this, float aspect)
{
    return ::app::Uno::Matrix__Mul_11(NULL, __this->View(), __this->GetProjection(aspect));
}

::app::Uno::Float4x4 Frustum__GetView(Frustum* __this, float aspect)
{
    return __this->View();
}

void Frustum___ObjInit_2(Frustum* __this)
{
    __this->_aspect = 1.0f;
    ::app::Fuse::Entities::Component___ObjInit(__this);
    __this->FovRadians(0.7853982f);
    __this->ZNear(1.0f);
    __this->ZFar(1000.0f);
}

Frustum* Frustum__New_2(::uStatic* __this)
{
    Frustum* inst = (::app::Fuse::Entities::Frustum*)::uAllocObject(sizeof(::app::Fuse::Entities::Frustum), ::app::Fuse::Entities::Frustum__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}}
