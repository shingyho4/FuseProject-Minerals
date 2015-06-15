// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.OrthographicCamera.h>
#include <app/Uno.Float.h>
#include <app/Uno.Matrix.h>

namespace app {
namespace Fuse {

OrthographicCamera__uType* OrthographicCamera__typeof()
{
    static OrthographicCamera__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (OrthographicCamera__uType*)::uAllocClassType(sizeof(OrthographicCamera__uType), "Fuse.OrthographicCamera", ::uObject__typeof(), 1);
        type->__interface_0.__fp_get_ProjectionTransform = (::app::Uno::Float4x4(*)(void*))OrthographicCamera__get_ProjectionTransform;
        type->__interface_0.__fp_get_ViewProjectionTransform = (::app::Uno::Float4x4(*)(void*))OrthographicCamera__get_ViewProjectionTransform;
        type->__interface_0.__fp_get_ViewTransform = (::app::Uno::Float4x4(*)(void*))OrthographicCamera__get_ViewTransform;
        type->__interface_0.__fp_get_WorldPosition = (::app::Uno::Float3(*)(void*))OrthographicCamera__get_WorldPosition;

        type->Implements[0] = ::app::Fuse::ICamera__typeof();

        type->InterfaceOffsets[0] = offsetof(OrthographicCamera__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4x4 OrthographicCamera__get_ProjectionTransform(OrthographicCamera* __this)
{
    return __this->_projectionTransform;
}

::app::Uno::Float4x4 OrthographicCamera__get_ViewTransform(OrthographicCamera* __this)
{
    return __this->_viewTransform;
}

::app::Uno::Float4x4 OrthographicCamera__get_ViewProjectionTransform(OrthographicCamera* __this)
{
    return __this->_viewProjectionTransform;
}

::app::Uno::Float3 OrthographicCamera__get_WorldPosition(OrthographicCamera* __this)
{
    return ::app::Uno::Float3__New_3(NULL, ::app::Uno::Float2__op_Division_1(NULL, __this->Size, 2.0f), 2.0f);
}

::app::Uno::Float4x4 OrthographicCamera__MatrixView(OrthographicCamera* __this, ::app::Uno::Float2 origin, ::app::Uno::Float2 viewSize, ::app::Uno::Float4x4 localFromWorld)
{
    ::app::Uno::Float4x4 t = ::app::Uno::Matrix__Translation_1(NULL, (-viewSize.X / 2.0f) - origin.X, (-viewSize.Y / 2.0f) - origin.Y, -2.0f);
    ::app::Uno::Float4x4 s = ::app::Uno::Matrix__Scaling_1(NULL, 1.0f, -1.0f, 1.0f);
    ::app::Uno::Float4x4 ts = ::app::Uno::Matrix__Mul_11(NULL, t, s);
    return ::app::Uno::Matrix__Mul_11(NULL, localFromWorld, ts);
}

::app::Uno::Float4x4 OrthographicCamera__MatrixProjection(OrthographicCamera* __this, ::app::Uno::Float2 viewSize)
{
    return ::app::Uno::Matrix__OrthoRH(NULL, viewSize.X, viewSize.Y, 1.0f, 1000.0f);
}

void OrthographicCamera___ObjInit(OrthographicCamera* __this, ::app::Uno::Float2 Origin, ::app::Uno::Float2 Size, ::app::Uno::Float4x4 LocalFromWorld)
{
    __this->Size = Size;
    __this->_projectionTransform = __this->MatrixProjection(Size);
    __this->_viewTransform = __this->MatrixView(Origin, Size, LocalFromWorld);
    __this->_viewProjectionTransform = ::app::Uno::Matrix__Mul_11(NULL, __this->_viewTransform, __this->_projectionTransform);
    __this->_projectionTransformInverse = ::app::Uno::Matrix__Invert(NULL, __this->_projectionTransform);
}

OrthographicCamera* OrthographicCamera__New_1(::uStatic* __this, ::app::Uno::Float2 Origin, ::app::Uno::Float2 Size, ::app::Uno::Float4x4 LocalFromWorld)
{
    OrthographicCamera* inst = (::app::Fuse::OrthographicCamera*)::uAllocObject(sizeof(::app::Fuse::OrthographicCamera), ::app::Fuse::OrthographicCamera__typeof());
    inst->_ObjInit(Origin, Size, LocalFromWorld);
    return inst;
}

}}
