// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Graphics {

Framebuffer__uType* Framebuffer__typeof()
{
    static Framebuffer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Framebuffer__uType*)::uAllocClassType(sizeof(Framebuffer__uType), "framebuffer", ::uObject__typeof(), 1, 2);
        type->__interface_0.__fp_Dispose = (void(*)(void*))Framebuffer__Dispose;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(Framebuffer__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(Framebuffer, _ColorBuffer);
        type->StrongRefOffsets[1] = offsetof(Framebuffer, _RenderTarget);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_ColorBuffer";
        type->StrongRefNames[1] = "_RenderTarget";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Graphics::Texture2D* Framebuffer__get_ColorBuffer(Framebuffer* __this)
{
    return __this->_ColorBuffer;
}

void Framebuffer__set_ColorBuffer(Framebuffer* __this, ::app::Uno::Graphics::Texture2D* value)
{
    __this->_ColorBuffer = value;
}

::app::Uno::Graphics::RenderTarget* Framebuffer__get_RenderTarget(Framebuffer* __this)
{
    return __this->_RenderTarget;
}

void Framebuffer__set_RenderTarget(Framebuffer* __this, ::app::Uno::Graphics::RenderTarget* value)
{
    __this->_RenderTarget = value;
}

::app::Uno::Int2 Framebuffer__get_Size(Framebuffer* __this)
{
    return ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->RenderTarget())->Size();
}

bool Framebuffer__get_HasDepth(Framebuffer* __this)
{
    return ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->RenderTarget())->HasDepth();
}

bool Framebuffer__get_SupportsMipmap(Framebuffer* __this)
{
    return ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->ColorBuffer())->SupportsMipmap();
}

int Framebuffer__get_Format(Framebuffer* __this)
{
    return ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->ColorBuffer())->Format();
}

void Framebuffer__Dispose(Framebuffer* __this)
{
    ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->ColorBuffer())->Dispose();
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->RenderTarget())->Dispose();
}

void Framebuffer___ObjInit(Framebuffer* __this, ::app::Uno::Int2 size, int format, int flags)
{
    __this->ColorBuffer(::app::Uno::Graphics::Texture2D__New_2(NULL, size, format, (flags & 2) == 2));
    __this->RenderTarget(::app::Uno::Graphics::RenderTarget__CreateFromTexture2D(NULL, __this->ColorBuffer(), 0, (flags & 1) == 1));
}

Framebuffer* Framebuffer__New_1(::uStatic* __this, ::app::Uno::Int2 size, int format, int flags)
{
    Framebuffer* inst = (::app::Uno::Graphics::Framebuffer*)::uAllocObject(sizeof(::app::Uno::Graphics::Framebuffer), ::app::Uno::Graphics::Framebuffer__typeof());
    inst->_ObjInit(size, format, flags);
    return inst;
}

}}}
