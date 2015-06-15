// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_FRAMEBUFFER_H__
#define __APP_UNO_GRAPHICS_FRAMEBUFFER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct RenderTarget; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Uno {
namespace Graphics {

struct Framebuffer;

struct Framebuffer__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

Framebuffer__uType* Framebuffer__typeof();

::app::Uno::Graphics::Texture2D* Framebuffer__get_ColorBuffer(Framebuffer* __this);
void Framebuffer__set_ColorBuffer(Framebuffer* __this, ::app::Uno::Graphics::Texture2D* value);
::app::Uno::Graphics::RenderTarget* Framebuffer__get_RenderTarget(Framebuffer* __this);
void Framebuffer__set_RenderTarget(Framebuffer* __this, ::app::Uno::Graphics::RenderTarget* value);
::app::Uno::Int2 Framebuffer__get_Size(Framebuffer* __this);
bool Framebuffer__get_HasDepth(Framebuffer* __this);
bool Framebuffer__get_SupportsMipmap(Framebuffer* __this);
int Framebuffer__get_Format(Framebuffer* __this);
void Framebuffer__Dispose(Framebuffer* __this);
void Framebuffer___ObjInit(Framebuffer* __this, ::app::Uno::Int2 size, int format, int flags);
Framebuffer* Framebuffer__New_1(::uStatic* __this, ::app::Uno::Int2 size, int format, int flags);

struct Framebuffer : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _ColorBuffer;
    ::uStrong< ::app::Uno::Graphics::RenderTarget*> _RenderTarget;

    void Dispose() { Framebuffer__Dispose(this); }
    void _ObjInit(::app::Uno::Int2 size, int format, int flags);
    ::app::Uno::Graphics::Texture2D* ColorBuffer() { return Framebuffer__get_ColorBuffer(this); }
    void ColorBuffer(::app::Uno::Graphics::Texture2D* value) { Framebuffer__set_ColorBuffer(this, value); }
    ::app::Uno::Graphics::RenderTarget* RenderTarget() { return Framebuffer__get_RenderTarget(this); }
    void RenderTarget(::app::Uno::Graphics::RenderTarget* value) { Framebuffer__set_RenderTarget(this, value); }
    ::app::Uno::Int2 Size();
    bool HasDepth() { return Framebuffer__get_HasDepth(this); }
    bool SupportsMipmap() { return Framebuffer__get_SupportsMipmap(this); }
    int Format() { return Framebuffer__get_Format(this); }
};

}}}

#include <app/Uno.Bool.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Uno {
namespace Graphics {

inline void Framebuffer::_ObjInit(::app::Uno::Int2 size, int format, int flags) { Framebuffer___ObjInit(this, size, format, flags); }
inline ::app::Uno::Int2 Framebuffer::Size() { return Framebuffer__get_Size(this); }

}}}


#endif
