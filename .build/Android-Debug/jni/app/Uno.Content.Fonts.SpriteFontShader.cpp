// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Content.Fonts.SpriteFontShader.h>
#include <app/Uno.Content.Fonts.TextShaderData.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.SamplerState.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeInfo.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

SpriteFontShader__uType* SpriteFontShader__typeof()
{
    static SpriteFontShader__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SpriteFontShader__uType*)::uAllocClassType(sizeof(SpriteFontShader__uType), "Uno.Content.Fonts.SpriteFontShader", ::app::Uno::Content::Fonts::TextShader__typeof(), 0, 3);
        type->__fp_Draw = (void(*)(::app::Uno::Content::Fonts::TextShader*, ::app::Uno::Content::Fonts::TextShaderData*))SpriteFontShader__Draw;

        type->StrongRefOffsets[0] = offsetof(SpriteFontShader, _draw_6b7396b4._constValues);
        type->StrongRefOffsets[1] = offsetof(SpriteFontShader, _draw_6b7396b4._compiledProgram);
        type->StrongRefOffsets[2] = offsetof(SpriteFontShader, _draw_6b7396b4._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_draw_6b7396b4._constValues";
        type->StrongRefNames[1] = "_draw_6b7396b4._compiledProgram";
        type->StrongRefNames[2] = "_draw_6b7396b4._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void SpriteFontShader__Draw(SpriteFontShader* __this, ::app::Uno::Content::Fonts::TextShaderData* data)
{
    {
        __this->_draw_6b7396b4.BlendEnabled(true);
        __this->_draw_6b7396b4.BlendSrcRgb(2);
        __this->_draw_6b7396b4.BlendDstRgb(3);
        __this->_draw_6b7396b4.BlendDstAlpha(3);
        __this->_draw_6b7396b4.DepthTestEnabled(false);
        __this->_draw_6b7396b4.CullFace(0);
        __this->_draw_6b7396b4.Use();
        __this->_draw_6b7396b4.Attrib_1(0, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->PositionInfo.Type, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->PositionInfo.Buffer, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->PositionInfo.BufferStride, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->PositionInfo.BufferOffset);
        __this->_draw_6b7396b4.Attrib_1(1, data->ColorInfo.Type, data->ColorInfo.Buffer, data->ColorInfo.BufferStride, data->ColorInfo.BufferOffset);
        __this->_draw_6b7396b4.Attrib_1(2, data->TexCoordInfo.Type, data->TexCoordInfo.Buffer, data->TexCoordInfo.BufferStride, data->TexCoordInfo.BufferOffset);
        __this->_draw_6b7396b4.Uniform_14(3, data->ClipSpaceMatrix);
        __this->_draw_6b7396b4.Sampler_3(4, data->FontTexture, ::app::Uno::Graphics::SamplerState__get_TrilinearClamp(NULL));
        __this->_draw_6b7396b4.Draw(data->CharCount * 6, data->IndexType, data->IndexBuffer);
    }
}

void SpriteFontShader__init_DrawCalls(SpriteFontShader* __this)
{
    __this->_draw_6b7396b4 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 120), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

void SpriteFontShader___ObjInit_1(SpriteFontShader* __this)
{
    ::app::Uno::Content::Fonts::TextShader___ObjInit(__this);
    __this->init_DrawCalls();
}

SpriteFontShader* SpriteFontShader__New_1(::uStatic* __this)
{
    SpriteFontShader* inst = (::app::Uno::Content::Fonts::SpriteFontShader*)::uAllocObject(sizeof(::app::Uno::Content::Fonts::SpriteFontShader), ::app::Uno::Content::Fonts::SpriteFontShader__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}}
