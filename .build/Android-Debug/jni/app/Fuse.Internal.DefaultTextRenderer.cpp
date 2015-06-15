// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Internal.DefaultTextRenderer.h>
#include <app/Fuse.Internal.DefaultTextRendererImpl.h>
#include <app/Uno.Content.Fonts.FontFace.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Internal {

DefaultTextRenderer__uType* DefaultTextRenderer__typeof()
{
    static DefaultTextRenderer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DefaultTextRenderer__uType*)::uAllocClassType(sizeof(DefaultTextRenderer__uType), "Fuse.Internal.DefaultTextRenderer", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_GetLineHeight = (float(*)(void*, float))DefaultTextRenderer__GetLineHeight;
        type->__interface_0.__fp_MeasureStringVirtual = (::app::Uno::Float2(*)(void*, float, float, ::uString*))DefaultTextRenderer__MeasureStringVirtual;
        type->__interface_0.__fp_BeginRendering = (void(*)(void*, float, float, ::app::Uno::Float4x4, ::app::Uno::Float2, ::app::Uno::Float4, int))DefaultTextRenderer__BeginRendering;
        type->__interface_0.__fp_DrawLine = (void(*)(void*, ::app::Fuse::DrawContext*, float, float, ::uString*))DefaultTextRenderer__DrawLine;
        type->__interface_0.__fp_EndRendering = (void(*)(void*, ::app::Fuse::DrawContext*))DefaultTextRenderer__EndRendering;

        type->Implements[0] = ::app::Fuse::Internal::ITextRenderer__typeof();

        type->InterfaceOffsets[0] = offsetof(DefaultTextRenderer__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(DefaultTextRenderer, _impl);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_impl";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

float DefaultTextRenderer__GetLineHeight(DefaultTextRenderer* __this, float fontSize)
{
    return ::app::Fuse::Internal::ITextRenderer::GetLineHeight(::uPtr< ::uObject*>(__this->_impl), fontSize);
}

::app::Uno::Float2 DefaultTextRenderer__MeasureStringVirtual(DefaultTextRenderer* __this, float fontSize, float absoluteZoom, ::uString* s)
{
    return ::app::Fuse::Internal::ITextRenderer::MeasureStringVirtual(::uPtr< ::uObject*>(__this->_impl), fontSize, absoluteZoom, s);
}

void DefaultTextRenderer__BeginRendering(DefaultTextRenderer* __this, float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength)
{
    ::app::Fuse::Internal::ITextRenderer::BeginRendering(::uPtr< ::uObject*>(__this->_impl), fontSize, absoluteZoom, transform, bounds, textColor, maxTextLength);
}

void DefaultTextRenderer__DrawLine(DefaultTextRenderer* __this, ::app::Fuse::DrawContext* dc, float x, float y, ::uString* line)
{
    ::app::Fuse::Internal::ITextRenderer::DrawLine(::uPtr< ::uObject*>(__this->_impl), dc, x, y, line);
}

void DefaultTextRenderer__EndRendering(DefaultTextRenderer* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Fuse::Internal::ITextRenderer::EndRendering(::uPtr< ::uObject*>(__this->_impl), dc);
}

void DefaultTextRenderer___ObjInit_1(DefaultTextRenderer* __this, ::app::Uno::Content::Fonts::FontFace* fontFace)
{
    __this->_impl = (::uObject*)::app::Fuse::Internal::DefaultTextRendererImpl__New_1(NULL, fontFace);
}

DefaultTextRenderer* DefaultTextRenderer__New_2(::uStatic* __this, ::app::Uno::Content::Fonts::FontFace* fontFace)
{
    DefaultTextRenderer* inst = (::app::Fuse::Internal::DefaultTextRenderer*)::uAllocObject(sizeof(::app::Fuse::Internal::DefaultTextRenderer), ::app::Fuse::Internal::DefaultTextRenderer__typeof());
    inst->_ObjInit_1(fontFace);
    return inst;
}

}}}
