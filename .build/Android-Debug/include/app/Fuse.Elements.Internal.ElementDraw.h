// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Drawing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_INTERNAL_ELEMENT_DRAW_H__
#define __APP_FUSE_ELEMENTS_INTERNAL_ELEMENT_DRAW_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Elements {
namespace Internal {

struct ElementDraw;

extern ::uStaticStrong< ElementDraw*> ElementDraw__Impl;

struct ElementDraw__uType : ::uClassType
{
};

ElementDraw__uType* ElementDraw__typeof();

void ElementDraw__Rectangle(ElementDraw* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 offset, ::app::Uno::Float2 size, ::app::Uno::Float4 color);
void ElementDraw__init_DrawCalls(ElementDraw* __this);
void ElementDraw___TypeInit(::uStatic* __this);
void ElementDraw___ObjInit(ElementDraw* __this);
ElementDraw* ElementDraw__New_1(::uStatic* __this);

struct ElementDraw : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Rectangle_VertexData_ecf1769_6_2_1;
    ::app::Uno::Float4x4 Rectangle_LocalTransform_ecf1769_3_8_2;
    ::app::Uno::Float4x4 Rectangle_LocalTransform_ecf1769_3_8_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_ecf1769;

    void Rectangle(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 offset, ::app::Uno::Float2 size, ::app::Uno::Float4 color);
    void init_DrawCalls() { ElementDraw__init_DrawCalls(this); }
    void _ObjInit() { ElementDraw___ObjInit(this); }
};

}}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Internal {

inline void ElementDraw::Rectangle(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 offset, ::app::Uno::Float2 size, ::app::Uno::Float4 color) { ElementDraw__Rectangle(this, dc, element, offset, size, color); }

}}}}


#endif
