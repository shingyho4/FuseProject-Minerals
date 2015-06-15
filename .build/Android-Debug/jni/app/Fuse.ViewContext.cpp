// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.ICamera.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Matrix.h>

namespace app {
namespace Fuse {

ViewContext__uType* ViewContext__typeof()
{
    static ViewContext__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ViewContext__uType*)::uAllocClassType(sizeof(ViewContext__uType), "Fuse.ViewContext", ::app::Fuse::ViewProvider__typeof(), 0, 1);
        type->__fp_Flush = ViewContext__Flush;

        type->StrongRefOffsets[0] = offsetof(ViewContext, _camera);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_camera";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* ViewContext__get_Camera(ViewContext* __this)
{
    return __this->_camera;
}

void ViewContext__Flush(ViewContext* __this)
{
}

::uObject* ViewContext__PushCamera(ViewContext* __this, ::uObject* c)
{
    __this->Flush();
    ::uObject* old = __this->_camera;
    __this->_camera = c;
    return old;
}

void ViewContext__PopCamera(ViewContext* __this, ::uObject* old)
{
    __this->Flush();
    __this->_camera = old;
}

::app::Uno::Float4x4 ViewContext__GetLocalToClipTransform(ViewContext* __this, ::app::Fuse::Node* n)
{
    ::app::Uno::Float4x4 m = ::uPtr< ::app::Fuse::Node*>(n)->WorldTransform();
    ::app::Uno::Float4x4 p = ::app::Uno::Matrix__Mul_11(NULL, m, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(__this->Camera())));
    return p;
}

void ViewContext___ObjInit_1(ViewContext* __this, ::uObject* defaultCamera)
{
    ::app::Fuse::ViewProvider___ObjInit(__this);
    __this->_camera = defaultCamera;
}

}}
