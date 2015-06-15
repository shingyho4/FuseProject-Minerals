// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GL.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.ObjectDisposedException.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Graphics {

DeviceBuffer__uType* DeviceBuffer__typeof()
{
    static DeviceBuffer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DeviceBuffer__uType*)::uAllocClassType(sizeof(DeviceBuffer__uType), "Uno.Graphics.DeviceBuffer", ::uObject__typeof(), 1);
        type->__interface_0.__fp_Dispose = (void(*)(void*))DeviceBuffer__Dispose;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(DeviceBuffer__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int DeviceBuffer__get_SizeInBytes(DeviceBuffer* __this)
{
    return __this->_SizeInBytes;
}

void DeviceBuffer__set_SizeInBytes(DeviceBuffer* __this, int value)
{
    __this->_SizeInBytes = value;
}

int DeviceBuffer__get_Usage(DeviceBuffer* __this)
{
    return __this->_Usage;
}

void DeviceBuffer__set_Usage(DeviceBuffer* __this, int value)
{
    __this->_Usage = value;
}

int DeviceBuffer__get_GLBufferTarget(DeviceBuffer* __this)
{
    return __this->_GLBufferTarget;
}

void DeviceBuffer__set_GLBufferTarget(DeviceBuffer* __this, int value)
{
    __this->_GLBufferTarget = value;
}

::uUInt DeviceBuffer__get_GLBufferHandle(DeviceBuffer* __this)
{
    return __this->_GLBufferHandle;
}

void DeviceBuffer__set_GLBufferHandle(DeviceBuffer* __this, ::uUInt value)
{
    __this->_GLBufferHandle = value;
}

bool DeviceBuffer__get_IsDisposed(DeviceBuffer* __this)
{
    return __this->_IsDisposed;
}

void DeviceBuffer__set_IsDisposed(DeviceBuffer* __this, bool value)
{
    __this->_IsDisposed = value;
}

void DeviceBuffer__GLInit(DeviceBuffer* __this, int target)
{
    __this->GLBufferTarget(target);
    __this->GLBufferHandle(::app::OpenGL::GL__CreateBuffer(NULL));
}

void DeviceBuffer__GLInit_1(DeviceBuffer* __this, int target, int sizeInBytes)
{
    __this->GLBufferTarget(target);
    __this->GLBufferHandle(::app::OpenGL::GL__CreateBuffer(NULL));
    __this->SizeInBytes(sizeInBytes);
    ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), __this->GLBufferHandle());
    ::app::OpenGL::GL__BufferDatai(NULL, __this->GLBufferTarget(), sizeInBytes, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBufferUsage(NULL, __this->Usage()));
    ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), ::app::OpenGL::GLBufferHandle__Zero);
}

void DeviceBuffer__GLInit_2(DeviceBuffer* __this, int target, ::app::Uno::Buffer* data)
{
    __this->GLBufferTarget(target);
    __this->GLBufferHandle(::app::OpenGL::GL__CreateBuffer(NULL));
    __this->SizeInBytes(::uPtr< ::app::Uno::Buffer*>(data)->SizeInBytes());
    ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), __this->GLBufferHandle());
    ::app::OpenGL::GL__BufferData_1(NULL, __this->GLBufferTarget(), data, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBufferUsage(NULL, __this->Usage()));
    ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), ::app::OpenGL::GLBufferHandle__Zero);
}

void DeviceBuffer__Dispose(DeviceBuffer* __this)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("DeviceBuffer")));
    }
    else
    {
        ::app::OpenGL::GL__DeleteBuffer(NULL, __this->GLBufferHandle());
    }

    __this->IsDisposed(true);
}

void DeviceBuffer__Update(DeviceBuffer* __this, ::app::Uno::Buffer* data)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("DeviceBuffer")));
    }
    else
    {
        ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), __this->GLBufferHandle());

        if (::uPtr< ::app::Uno::Buffer*>(data)->SizeInBytes() <= __this->SizeInBytes())
        {
            ::app::OpenGL::GL__BufferSubData(NULL, __this->GLBufferTarget(), 0, data);
        }
        else
        {
            ::app::OpenGL::GL__BufferData_1(NULL, __this->GLBufferTarget(), data, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBufferUsage(NULL, __this->Usage()));
            __this->SizeInBytes(::uPtr< ::app::Uno::Buffer*>(data)->SizeInBytes());
        }

        ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), ::app::OpenGL::GLBufferHandle__Zero);
    }
}

void DeviceBuffer___ObjInit(DeviceBuffer* __this, int usage)
{
    __this->Usage(usage);
}

}}}
