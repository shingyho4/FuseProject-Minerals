// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.RenderTargetEntry.h>
#include <app/Uno.Graphics.RenderTarget.h>

namespace app {
namespace Fuse {

RenderTargetEntry__uType* RenderTargetEntry__typeof()
{
    static RenderTargetEntry__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (RenderTargetEntry__uType*)::uAllocClassType(sizeof(RenderTargetEntry__uType), "Fuse.RenderTargetEntry", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(RenderTargetEntry, RenderTarget);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "RenderTarget";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void RenderTargetEntry___ObjInit_1(RenderTargetEntry* __this, ::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportSize, ::app::Uno::Recti scissor)
{
    __this->RenderTarget = rt;
    __this->ViewportSize = viewportSize;
    __this->Scissor = scissor;
}

RenderTargetEntry* RenderTargetEntry__New_2(::uStatic* __this, ::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportSize, ::app::Uno::Recti scissor)
{
    RenderTargetEntry* inst = (::app::Fuse::RenderTargetEntry*)::uAllocObject(sizeof(::app::Fuse::RenderTargetEntry), ::app::Fuse::RenderTargetEntry__typeof());
    inst->_ObjInit_1(rt, viewportSize, scissor);
    return inst;
}

}}
