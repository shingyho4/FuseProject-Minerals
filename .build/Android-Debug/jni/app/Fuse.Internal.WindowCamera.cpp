// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.WindowCamera.h>
#include <app/Fuse.IWindow.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Matrix.h>

namespace app {
namespace Fuse {
namespace Internal {

WindowCamera__uType* WindowCamera__typeof()
{
    static WindowCamera__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (WindowCamera__uType*)::uAllocClassType(sizeof(WindowCamera__uType), "Fuse.Internal.WindowCamera", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_get_ProjectionTransform = (::app::Uno::Float4x4(*)(void*))WindowCamera__get_ProjectionTransform;
        type->__interface_0.__fp_get_ViewProjectionTransform = (::app::Uno::Float4x4(*)(void*))WindowCamera__get_ViewProjectionTransform;
        type->__interface_0.__fp_get_ViewTransform = (::app::Uno::Float4x4(*)(void*))WindowCamera__get_ViewTransform;
        type->__interface_0.__fp_get_WorldPosition = (::app::Uno::Float3(*)(void*))WindowCamera__get_WorldPosition;

        type->Implements[0] = ::app::Fuse::ICamera__typeof();

        type->InterfaceOffsets[0] = offsetof(WindowCamera__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(WindowCamera, Window);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Window";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4x4 WindowCamera__get_ProjectionTransform(WindowCamera* __this)
{
    __this->UpdateCache();
    return __this->_cacheProjectionTransform;
}

::app::Uno::Float4x4 WindowCamera__get_ViewTransform(WindowCamera* __this)
{
    __this->UpdateCache();
    return __this->_cacheViewTransform;
}

::app::Uno::Float4x4 WindowCamera__get_ViewProjectionTransform(WindowCamera* __this)
{
    __this->UpdateCache();
    return __this->_cacheViewProjectionTransform;
}

::app::Uno::Float3 WindowCamera__get_WorldPosition(WindowCamera* __this)
{
    return ::app::Uno::Float3__New_3(NULL, ::app::Uno::Float2__op_Division_1(NULL, ::app::Fuse::IWindow::Size(::uPtr< ::uObject*>(__this->Window)), 2.0f), -__this->Perspective);
}

void WindowCamera__UpdateCache(WindowCamera* __this)
{
    if (::app::Uno::Float2__op_Equality(NULL, ::app::Fuse::IWindow::Size(::uPtr< ::uObject*>(__this->Window)), __this->_cacheWindowSize) && (__this->Perspective == __this->_cachePerspective))
    {
        return;
    }

    __this->_cacheViewTransform = WindowCamera__MatrixPerspectiveView(NULL, ::app::Fuse::IWindow::Size(::uPtr< ::uObject*>(__this->Window)), __this->Perspective, ::app::Uno::Float2__New_2(NULL, 0.5f, 0.5f));
    __this->_cacheProjectionTransform = WindowCamera__MatrixPerspectiveProjection(NULL, ::app::Fuse::IWindow::Size(::uPtr< ::uObject*>(__this->Window)), __this->Perspective, ::app::Uno::Float2__New_2(NULL, 0.5f, 0.5f));
    __this->_cacheViewProjectionTransform = ::app::Uno::Matrix__Mul_11(NULL, __this->_cacheViewTransform, __this->_cacheProjectionTransform);
    __this->_cacheProjectionTransformInverse = ::app::Uno::Matrix__Invert(NULL, __this->_cacheProjectionTransform);
    __this->_cacheWindowSize = ::app::Fuse::IWindow::Size(::uPtr< ::uObject*>(__this->Window));
    __this->_cachePerspective = __this->Perspective;
}

::app::Uno::Float4x4 WindowCamera__MatrixPerspectiveView(::uStatic* __this, ::app::Uno::Float2 viewSize, float perspective, ::app::Uno::Float2 relOrigin)
{
    ::app::Uno::Float4x4 t = ::app::Uno::Matrix__Translation_1(NULL, -relOrigin.X * viewSize.X, -relOrigin.Y * viewSize.Y, perspective);
    ::app::Uno::Float4x4 s = ::app::Uno::Matrix__Scaling_1(NULL, 1.0f, -1.0f, 1.0f);
    return ::app::Uno::Matrix__Mul_11(NULL, t, s);
}

::app::Uno::Float4x4 WindowCamera__MatrixPerspectiveProjection(::uStatic* __this, ::app::Uno::Float2 viewSize, float perspective, ::app::Uno::Float2 relOrigin)
{
    ::app::Uno::Float4x4 o = ::app::Uno::Matrix__OrthoLH(NULL, viewSize.X, viewSize.Y, 1.0f, 1000.0f + perspective);

    if (perspective <= 1.0f)
    {
        return o;
    }

    ::app::Uno::Float4x4 t0 = ::app::Uno::Matrix__Translation_1(NULL, 0.0f, 0.0f, -perspective);
    ::app::Uno::Float4x4 p0 = ::app::Uno::Matrix__Scaling_2(NULL, 1.0f);
    p0.M34 = 1.0f / perspective;
    ::app::Uno::Float4x4 t1 = ::app::Uno::Matrix__Translation_1(NULL, 0.0f, 0.0f, perspective);
    ::app::Uno::Float4x4 pr = ::app::Uno::Matrix__Mul_11(NULL, t0, ::app::Uno::Matrix__Mul_11(NULL, p0, t1));
    return ::app::Uno::Matrix__Mul_11(NULL, pr, o);
}

void WindowCamera___ObjInit(WindowCamera* __this)
{
    __this->Perspective = 0.0f;
}

WindowCamera* WindowCamera__New_1(::uStatic* __this)
{
    WindowCamera* inst = (::app::Fuse::Internal::WindowCamera*)::uAllocObject(sizeof(::app::Fuse::Internal::WindowCamera), ::app::Fuse::Internal::WindowCamera__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
