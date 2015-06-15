// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_I_TEXT_RENDERER_H__
#define __APP_FUSE_INTERNAL_I_TEXT_RENDERER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Internal {

::uInterfaceType* ITextRenderer__typeof();

struct ITextRenderer
{
    float(*__fp_GetLineHeight)(void*, float);
    ::app::Uno::Float2(*__fp_MeasureStringVirtual)(void*, float, float, ::uString*);
    void(*__fp_BeginRendering)(void*, float, float, ::app::Uno::Float4x4, ::app::Uno::Float2, ::app::Uno::Float4, int);
    void(*__fp_DrawLine)(void*, ::app::Fuse::DrawContext*, float, float, ::uString*);
    void(*__fp_EndRendering)(void*, ::app::Fuse::DrawContext*);

    static float GetLineHeight(::uObject* __this, float fontSize) { return ((ITextRenderer*)uGetInterfacePtr(__this, ITextRenderer__typeof()))->__fp_GetLineHeight((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), fontSize); }
    static ::app::Uno::Float2 MeasureStringVirtual(::uObject* __this, float fontSize, float absoluteZoom, ::uString* s);
    static void BeginRendering(::uObject* __this, float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength);
    static void DrawLine(::uObject* __this, ::app::Fuse::DrawContext* dc, float x, float y, ::uString* line) { ((ITextRenderer*)uGetInterfacePtr(__this, ITextRenderer__typeof()))->__fp_DrawLine((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), dc, x, y, line); }
    static void EndRendering(::uObject* __this, ::app::Fuse::DrawContext* dc) { ((ITextRenderer*)uGetInterfacePtr(__this, ITextRenderer__typeof()))->__fp_EndRendering((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), dc); }
};

}}}

#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Float2 ITextRenderer::MeasureStringVirtual(::uObject* __this, float fontSize, float absoluteZoom, ::uString* s) { return ((ITextRenderer*)uGetInterfacePtr(__this, ITextRenderer__typeof()))->__fp_MeasureStringVirtual((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), fontSize, absoluteZoom, s); }
inline void ITextRenderer::BeginRendering(::uObject* __this, float fontSize, float absoluteZoom, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 bounds, ::app::Uno::Float4 textColor, int maxTextLength) { ((ITextRenderer*)uGetInterfacePtr(__this, ITextRenderer__typeof()))->__fp_BeginRendering((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeValue ? sizeof(::uObject) : 0), fontSize, absoluteZoom, transform, bounds, textColor, maxTextLength); }

}}}


#endif
