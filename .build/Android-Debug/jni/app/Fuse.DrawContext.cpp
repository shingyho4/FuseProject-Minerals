// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.App.h>
#include <app/Fuse.DefaultPass.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.ICamera.h>
#include <app/Fuse.IFlush.h>
#include <app/Fuse.IWindow.h>
#include <app/Fuse.Pass.h>
#include <app/Fuse.RenderTargetEntry.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.HashSet__Fuse_IFlush.h>
#include <app/Uno.Collections.HashSet1_Enumerator__Fuse_IFlush.h>
#include <app/Uno.Collections.IList__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.IListExtensions.h>
#include <app/Uno.Collections.List__Fuse_RenderTargetEntry.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.GraphicsContext.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {

::uStaticStrong< DrawContext*> DrawContext___current;
::uStaticStrong< ::app::Fuse::Pass*> DrawContext__DefaultPass;
::uStaticStrong< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*> DrawContext__renderTargets;

DrawContext__uType* DrawContext__typeof()
{
    static DrawContext__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DrawContext__uType*)::uAllocClassType(sizeof(DrawContext__uType), "Fuse.DrawContext", ::app::Fuse::ViewContext__typeof(), 0, 2);
        type->__fp_Flush = (void(*)(::app::Fuse::ViewContext*))DrawContext__Flush;

        type->StrongRefOffsets[0] = offsetof(DrawContext, flushSet);
        type->StrongRefOffsets[1] = offsetof(DrawContext, _currentPass);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "flushSet";
        type->StrongRefNames[1] = "_currentPass";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

DrawContext* DrawContext__get_Current(::uStatic* __this)
{
    return DrawContext___current;
}

::app::Fuse::Pass* DrawContext__get_Pass(DrawContext* __this)
{
    ::app::Fuse::Pass* ind_124 = __this->_currentPass;
    return (ind_124 != NULL) ? ind_124 : DrawContext__DefaultPass;
}

::app::Uno::Graphics::RenderTarget* DrawContext__get_RenderTarget(DrawContext* __this)
{
    return ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->RenderTarget();
}

::app::Uno::Int2 DrawContext__get_ViewportSize(DrawContext* __this)
{
    return ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->Viewport().Size();
}

::app::Uno::Recti DrawContext__get_Scissor(DrawContext* __this)
{
    return ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->Scissor();
}

float DrawContext__get_ResolutionMultiplier(DrawContext* __this)
{
    ::uObject* w = ::app::Fuse::App__get_CurrentWindow(NULL);
    return (w == NULL) ? 1.0f : ::app::Fuse::IWindow::PPIZoomMultiplier(::uPtr< ::uObject*>(w));
}

void DrawContext__MakeCurrent(DrawContext* __this)
{
    DrawContext___current = __this;
}

void DrawContext__AddFlushListener(DrawContext* __this, ::uObject* f)
{
    if (__this->flushSet == NULL)
    {
        __this->flushSet = ::app::Uno::Collections::HashSet__Fuse_IFlush__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::HashSet__Fuse_IFlush*>(__this->flushSet)->Add(f);
}

void DrawContext__Flush(DrawContext* __this)
{
    if (__this->flushSet != NULL)
    {
        for (::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush enum_123 = ::uPtr< ::app::Uno::Collections::HashSet__Fuse_IFlush*>(__this->flushSet)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::uObject* f = enum_123.Current();
            ::app::Fuse::IFlush::Flush(::uPtr< ::uObject*>(f), __this);
        }

        ::uPtr< ::app::Uno::Collections::HashSet__Fuse_IFlush*>(__this->flushSet)->Clear();
        __this->flushSet = NULL;
    }
}

::app::Uno::Recti DrawContext__PushScissor(DrawContext* __this, ::app::Uno::Recti scissor)
{
    __this->Flush();
    ::app::Uno::Recti old = ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->Scissor();
    ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->Scissor(scissor);
    return old;
}

void DrawContext__PopScissor(DrawContext* __this, ::app::Uno::Recti old)
{
    ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->Scissor(old);
}

void DrawContext__PushRenderTarget(DrawContext* __this, ::app::Uno::Graphics::Framebuffer* fb)
{
    __this->PushRenderTarget_1(::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->RenderTarget());
}

void DrawContext__PushRenderTarget_1(DrawContext* __this, ::app::Uno::Graphics::RenderTarget* fb)
{
    __this->Flush();
    ::uPtr< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*>(DrawContext__renderTargets)->Add(::app::Fuse::RenderTargetEntry__New_2(NULL, ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->RenderTarget(), __this->ViewportSize(), __this->Scissor()));
    ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->SetRenderTarget(fb);
}

::app::Uno::Graphics::RenderTarget* DrawContext__PopRenderTarget(DrawContext* __this)
{
    __this->Flush();
    ::app::Uno::Graphics::RenderTarget* res = ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->RenderTarget();
    ::app::Fuse::RenderTargetEntry* k = ::app::Uno::Collections::IListExtensions__RemoveLast__Fuse_RenderTargetEntry(NULL, (::uObject*)DrawContext__renderTargets);
    ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->SetRenderTarget_1(::uPtr< ::app::Fuse::RenderTargetEntry*>(k)->RenderTarget, ::app::Uno::Recti__New_2(NULL, ::app::Uno::Int2__New_2(NULL, 0, 0), ::uPtr< ::app::Fuse::RenderTargetEntry*>(k)->ViewportSize), ::uPtr< ::app::Fuse::RenderTargetEntry*>(k)->Scissor);
    return res;
}

void DrawContext__Clear(DrawContext* __this, ::app::Uno::Float4 color, float depth)
{
    ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->Clear(color, depth);
}

int DrawContext__PushDepthTest(DrawContext* __this, int depthTest)
{
    int o = __this->_depthTest;
    __this->_depthTest = depthTest;
    return o;
}

void DrawContext__PopDepthTest(DrawContext* __this, int old)
{
    __this->_depthTest = old;
}

void DrawContext___TypeInit(::uStatic* __this)
{
    DrawContext___current = DrawContext__New_1(NULL);
    DrawContext__DefaultPass = (::app::Fuse::Pass*)::app::Fuse::DefaultPass__New_1(NULL);
    DrawContext__renderTargets = ::app::Uno::Collections::List__Fuse_RenderTargetEntry__New_1(NULL);
}

void DrawContext___ObjInit_2(DrawContext* __this)
{
    ::app::Fuse::ViewContext___ObjInit_1(__this, NULL);
}

DrawContext* DrawContext__New_1(::uStatic* __this)
{
    DrawContext* inst = (::app::Fuse::DrawContext*)::uAllocObject(sizeof(::app::Fuse::DrawContext), ::app::Fuse::DrawContext__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}
