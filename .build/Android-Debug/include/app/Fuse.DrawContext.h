// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAW_CONTEXT_H__
#define __APP_FUSE_DRAW_CONTEXT_H__

#include <app/Fuse.ViewContext.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Pass; } }
namespace app { namespace Uno { namespace Collections { struct HashSet__Fuse_IFlush; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_RenderTargetEntry; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct RenderTarget; } } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Int2; } }
namespace app { namespace Uno { struct Recti; } }

namespace app {
namespace Fuse {

struct DrawContext;

extern ::uStaticStrong< DrawContext*> DrawContext___current;
extern ::uStaticStrong< ::app::Fuse::Pass*> DrawContext__DefaultPass;
extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*> DrawContext__renderTargets;

struct DrawContext__uType : ::app::Fuse::ViewContext__uType
{
};

DrawContext__uType* DrawContext__typeof();

DrawContext* DrawContext__get_Current(::uStatic* __this);
::app::Fuse::Pass* DrawContext__get_Pass(DrawContext* __this);
::app::Uno::Graphics::RenderTarget* DrawContext__get_RenderTarget(DrawContext* __this);
::app::Uno::Int2 DrawContext__get_ViewportSize(DrawContext* __this);
::app::Uno::Recti DrawContext__get_Scissor(DrawContext* __this);
float DrawContext__get_ResolutionMultiplier(DrawContext* __this);
void DrawContext__MakeCurrent(DrawContext* __this);
void DrawContext__AddFlushListener(DrawContext* __this, ::uObject* f);
void DrawContext__Flush(DrawContext* __this);
::app::Uno::Recti DrawContext__PushScissor(DrawContext* __this, ::app::Uno::Recti scissor);
void DrawContext__PopScissor(DrawContext* __this, ::app::Uno::Recti old);
void DrawContext__PushRenderTarget(DrawContext* __this, ::app::Uno::Graphics::Framebuffer* fb);
void DrawContext__PushRenderTarget_1(DrawContext* __this, ::app::Uno::Graphics::RenderTarget* fb);
::app::Uno::Graphics::RenderTarget* DrawContext__PopRenderTarget(DrawContext* __this);
void DrawContext__Clear(DrawContext* __this, ::app::Uno::Float4 color, float depth);
int DrawContext__PushDepthTest(DrawContext* __this, int depthTest);
void DrawContext__PopDepthTest(DrawContext* __this, int old);
void DrawContext___TypeInit(::uStatic* __this);
void DrawContext___ObjInit_2(DrawContext* __this);
DrawContext* DrawContext__New_1(::uStatic* __this);

struct DrawContext : ::app::Fuse::ViewContext
{
    ::uStrong< ::app::Uno::Collections::HashSet__Fuse_IFlush*> flushSet;
    ::uStrong< ::app::Fuse::Pass*> _currentPass;
    int _depthTest;

    void MakeCurrent() { DrawContext__MakeCurrent(this); }
    void AddFlushListener(::uObject* f) { DrawContext__AddFlushListener(this, f); }
    ::app::Uno::Recti PushScissor(::app::Uno::Recti scissor);
    void PopScissor(::app::Uno::Recti old);
    void PushRenderTarget(::app::Uno::Graphics::Framebuffer* fb) { DrawContext__PushRenderTarget(this, fb); }
    void PushRenderTarget_1(::app::Uno::Graphics::RenderTarget* fb) { DrawContext__PushRenderTarget_1(this, fb); }
    ::app::Uno::Graphics::RenderTarget* PopRenderTarget() { return DrawContext__PopRenderTarget(this); }
    void Clear(::app::Uno::Float4 color, float depth);
    int PushDepthTest(int depthTest) { return DrawContext__PushDepthTest(this, depthTest); }
    void PopDepthTest(int old) { DrawContext__PopDepthTest(this, old); }
    void _ObjInit_2() { DrawContext___ObjInit_2(this); }
    ::app::Fuse::Pass* Pass() { return DrawContext__get_Pass(this); }
    ::app::Uno::Graphics::RenderTarget* RenderTarget() { return DrawContext__get_RenderTarget(this); }
    ::app::Uno::Int2 ViewportSize();
    ::app::Uno::Recti Scissor();
    float ResolutionMultiplier() { return DrawContext__get_ResolutionMultiplier(this); }
};

}}

#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Recti.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Recti DrawContext::PushScissor(::app::Uno::Recti scissor) { return DrawContext__PushScissor(this, scissor); }
inline void DrawContext::PopScissor(::app::Uno::Recti old) { DrawContext__PopScissor(this, old); }
inline void DrawContext::Clear(::app::Uno::Float4 color, float depth) { DrawContext__Clear(this, color, depth); }
inline ::app::Uno::Int2 DrawContext::ViewportSize() { return DrawContext__get_ViewportSize(this); }
inline ::app::Uno::Recti DrawContext::Scissor() { return DrawContext__get_Scissor(this); }

}}


#endif
