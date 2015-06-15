// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GL.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.TextureHelpers.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Math.h>
#include <app/Uno.ObjectDisposedException.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h>
#include <app/Uno.String.h>
#include <Uno/XliInterop.h>
#include <Xli.h>
#include <XliGL.h>
#include <XliImage.h>
#include <XliPlatform.h>

namespace app {
namespace Uno {
namespace Graphics {

int Texture2D___maxSize;

Texture2D__uType* Texture2D__typeof()
{
    static Texture2D__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Texture2D__uType*)::uAllocClassType(sizeof(Texture2D__uType), "Uno.Graphics.Texture2D", ::uObject__typeof(), 1);
        type->__interface_0.__fp_Dispose = (void(*)(void*))Texture2D__Dispose;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(Texture2D__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Int2 Texture2D__get_Size(Texture2D* __this)
{
    return __this->_Size;
}

void Texture2D__set_Size(Texture2D* __this, ::app::Uno::Int2 value)
{
    __this->_Size = value;
}

int Texture2D__get_MaxSize(::uStatic* __this)
{
    if (Texture2D___maxSize == 0)
    {
        Texture2D___maxSize = ::app::OpenGL::GL__GetInteger(NULL, 3379);
    }

    return Texture2D___maxSize;
}

int Texture2D__get_MipCount(Texture2D* __this)
{
    return __this->_MipCount;
}

void Texture2D__set_MipCount(Texture2D* __this, int value)
{
    __this->_MipCount = value;
}

int Texture2D__get_Format(Texture2D* __this)
{
    return __this->_Format;
}

void Texture2D__set_Format(Texture2D* __this, int value)
{
    __this->_Format = value;
}

::uUInt Texture2D__get_GLTextureHandle(Texture2D* __this)
{
    return __this->_GLTextureHandle;
}

void Texture2D__set_GLTextureHandle(Texture2D* __this, ::uUInt value)
{
    __this->_GLTextureHandle = value;
}

bool Texture2D__get_IsDisposed(Texture2D* __this)
{
    return __this->_IsDisposed;
}

void Texture2D__set_IsDisposed(Texture2D* __this, bool value)
{
    __this->_IsDisposed = value;
}

bool Texture2D__get_SupportsMipmap(Texture2D* __this)
{
    return ((__this->MipCount() > 1) && ::app::Uno::Math__IsPow2(NULL, __this->Size().X)) && ::app::Uno::Math__IsPow2(NULL, __this->Size().Y);
}

void Texture2D__Dispose(Texture2D* __this)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("Texture2D")));
    }
    else
    {
        ::app::OpenGL::GL__DeleteTexture(NULL, __this->GLTextureHandle());
    }

    __this->IsDisposed(true);
}

void Texture2D__Update_1(Texture2D* __this, ::app::Uno::Buffer* mip0)
{
    if (__this->Format() == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Texture is immutable and cannot be updated")));
    }
    else
    {
        ::app::OpenGL::GL__ActiveTexture(NULL, 33984);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, __this->GLTextureHandle());
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10240, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10241, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10242, 33071);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10243, 33071);
        ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__TexImage2DFromBuffer(NULL, 3553, __this->Size().X, __this->Size().Y, 0, __this->Format(), mip0);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, ::app::OpenGL::GLTextureHandle__Zero);
    }
}

void Texture2D__GenerateMipmap(Texture2D* __this)
{
    if (!__this->SupportsMipmap())
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Texture does not support mipmap")));
    }
    else
    {
        ::app::OpenGL::GL__BindTexture(NULL, 3553, __this->GLTextureHandle());
        ::app::OpenGL::GL__GenerateMipmap(NULL, 3553);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, ::app::OpenGL::GLTextureHandle__Zero);
    }
}

void Texture2D___ObjInit(Texture2D* __this, ::uUInt handle, ::app::Uno::Int2 size, int mipCount, int format)
{
    __this->GLTextureHandle(handle);
    __this->Size(size);
    __this->MipCount(mipCount);
    __this->Format(format);
}

Texture2D* Texture2D__New_1(::uStatic* __this, ::uUInt handle, ::app::Uno::Int2 size, int mipCount, int format)
{
    Texture2D* inst = (::app::Uno::Graphics::Texture2D*)::uAllocObject(sizeof(::app::Uno::Graphics::Texture2D), ::app::Uno::Graphics::Texture2D__typeof());
    inst->_ObjInit(handle, size, mipCount, format);
    return inst;
}

void Texture2D___ObjInit_1(Texture2D* __this, ::app::Uno::Int2 size, int format, bool mipmap)
{
    __this->GLTextureHandle(::app::OpenGL::GL__CreateTexture(NULL));
    __this->Size(size);
    __this->Format(format);
    __this->MipCount(mipmap ? ::app::Uno::Graphics::TextureHelpers__GetMipCount(NULL, size) : 1);
    __this->Update_1(NULL);
}

Texture2D* Texture2D__New_2(::uStatic* __this, ::app::Uno::Int2 size, int format, bool mipmap)
{
    Texture2D* inst = (::app::Uno::Graphics::Texture2D*)::uAllocObject(sizeof(::app::Uno::Graphics::Texture2D), ::app::Uno::Graphics::Texture2D__typeof());
    inst->_ObjInit_1(size, format, mipmap);
    return inst;
}

}}}
