// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Drawing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Internal.ElementDraw.h>
#include <app/Fuse.ICamera.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Internal {

::uStaticStrong< ElementDraw*> ElementDraw__Impl;

ElementDraw__uType* ElementDraw__typeof()
{
    static ElementDraw__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ElementDraw__uType*)::uAllocClassType(sizeof(ElementDraw__uType), "Fuse.Elements.Internal.ElementDraw", ::uObject__typeof(), 0, 4);
        type->StrongRefOffsets[0] = offsetof(ElementDraw, Rectangle_VertexData_ecf1769_6_2_1);
        type->StrongRefOffsets[1] = offsetof(ElementDraw, _draw_ecf1769._constValues);
        type->StrongRefOffsets[2] = offsetof(ElementDraw, _draw_ecf1769._compiledProgram);
        type->StrongRefOffsets[3] = offsetof(ElementDraw, _draw_ecf1769._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Rectangle_VertexData_ecf1769_6_2_1";
        type->StrongRefNames[1] = "_draw_ecf1769._constValues";
        type->StrongRefNames[2] = "_draw_ecf1769._compiledProgram";
        type->StrongRefNames[3] = "_draw_ecf1769._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ElementDraw__Rectangle(ElementDraw* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 offset, ::app::Uno::Float2 size, ::app::Uno::Float4 color)
{
    ::app::Uno::Float4x4 LocalTransform_ecf1769_3_8_4 = ::app::Uno::Matrix__Mul_7(NULL, __this->Rectangle_LocalTransform_ecf1769_3_8_2, ::app::Uno::Matrix__Scaling_1(NULL, size.X, size.Y, 1.0f), __this->Rectangle_LocalTransform_ecf1769_3_8_3, ::app::Uno::Matrix__Translation_1(NULL, offset.X, offset.Y, 0.0f));
    {
        __this->_draw_ecf1769.BlendEnabled(true);
        __this->_draw_ecf1769.BlendSrcRgb(2);
        __this->_draw_ecf1769.BlendDstRgb(3);
        __this->_draw_ecf1769.BlendDstAlpha(3);
        __this->_draw_ecf1769.DepthTestEnabled(false);
        __this->_draw_ecf1769.CullFace(0);
        __this->_draw_ecf1769.Use();
        __this->_draw_ecf1769.Attrib_1(0, 2, __this->Rectangle_VertexData_ecf1769_6_2_1, 8, 0);
        __this->_draw_ecf1769.Uniform_14(1, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->Camera())));
        __this->_draw_ecf1769.Uniform_11(2, color);
        __this->_draw_ecf1769.Uniform_14(3, ((::app::Fuse::Node*)element != NULL) ? ::app::Uno::Matrix__Mul_11(NULL, LocalTransform_ecf1769_3_8_4, ::uPtr< ::app::Fuse::Node*>((::app::Fuse::Node*)element)->WorldTransform()) : LocalTransform_ecf1769_3_8_4);
        __this->_draw_ecf1769.DrawArrays(6);
    }
}

void ElementDraw__init_DrawCalls(ElementDraw* __this)
{
    ::uArray* array_123;
    __this->Rectangle_VertexData_ecf1769_6_2_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, (array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 6), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), array_123)), 0);
    __this->Rectangle_LocalTransform_ecf1769_3_8_2 = ::app::Uno::Matrix__Translation_1(NULL, -::app::Uno::Float2__New_1(NULL, 0.0f).X, -::app::Uno::Float2__New_1(NULL, 0.0f).Y, 0.0f);
    __this->Rectangle_LocalTransform_ecf1769_3_8_3 = ::app::Uno::Matrix__RotationZ(NULL, 0.0f);
    __this->_draw_ecf1769 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 122), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

void ElementDraw___TypeInit(::uStatic* __this)
{
    ElementDraw__Impl = ElementDraw__New_1(NULL);
}

void ElementDraw___ObjInit(ElementDraw* __this)
{
    __this->init_DrawCalls();
}

ElementDraw* ElementDraw__New_1(::uStatic* __this)
{
    ElementDraw* inst = (::app::Fuse::Elements::Internal::ElementDraw*)::uAllocObject(sizeof(::app::Fuse::Elements::Internal::ElementDraw), ::app::Fuse::Elements::Internal::ElementDraw__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
