// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Content.Fonts.SdfFontShader.h>
#include <app/Uno.Content.Fonts.TextShaderData.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.SamplerState.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeInfo.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

SdfFontShader__uType* SdfFontShader__typeof()
{
    static SdfFontShader__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SdfFontShader__uType*)::uAllocClassType(sizeof(SdfFontShader__uType), "Uno.Content.Fonts.SdfFontShader", ::app::Uno::Content::Fonts::TextShader__typeof(), 0, 3);
        type->__fp_Draw = (void(*)(::app::Uno::Content::Fonts::TextShader*, ::app::Uno::Content::Fonts::TextShaderData*))SdfFontShader__Draw;

        type->StrongRefOffsets[0] = offsetof(SdfFontShader, _draw_379fdedc._constValues);
        type->StrongRefOffsets[1] = offsetof(SdfFontShader, _draw_379fdedc._compiledProgram);
        type->StrongRefOffsets[2] = offsetof(SdfFontShader, _draw_379fdedc._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_draw_379fdedc._constValues";
        type->StrongRefNames[1] = "_draw_379fdedc._compiledProgram";
        type->StrongRefNames[2] = "_draw_379fdedc._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void SdfFontShader__Draw(SdfFontShader* __this, ::app::Uno::Content::Fonts::TextShaderData* data)
{
    float FontSmoothing_379fdedc_12_0_1 = 0.25f / ::app::Uno::Math__Max_1(NULL, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->FontSpread * ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->FontScale, 0.5f);
    {
        __this->_draw_379fdedc.BlendEnabled(true);
        __this->_draw_379fdedc.BlendSrcRgb(2);
        __this->_draw_379fdedc.BlendDstRgb(3);
        __this->_draw_379fdedc.DepthTestEnabled(false);
        __this->_draw_379fdedc.CullFace(0);
        __this->_draw_379fdedc.Use();
        __this->_draw_379fdedc.Attrib_1(0, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->PositionInfo.Type, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->PositionInfo.Buffer, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->PositionInfo.BufferStride, ::uPtr< ::app::Uno::Content::Fonts::TextShaderData*>(data)->PositionInfo.BufferOffset);
        __this->_draw_379fdedc.Attrib_1(1, data->TexCoordInfo.Type, data->TexCoordInfo.Buffer, data->TexCoordInfo.BufferStride, data->TexCoordInfo.BufferOffset);
        __this->_draw_379fdedc.Attrib_1(2, data->ColorInfo.Type, data->ColorInfo.Buffer, data->ColorInfo.BufferStride, data->ColorInfo.BufferOffset);
        __this->_draw_379fdedc.Uniform_14(3, data->ClipSpaceMatrix);
        __this->_draw_379fdedc.Uniform_8(4, 0.5f - FontSmoothing_379fdedc_12_0_1);
        __this->_draw_379fdedc.Uniform_8(5, 0.5f + FontSmoothing_379fdedc_12_0_1);
        __this->_draw_379fdedc.Sampler_3(6, data->FontTexture, ::app::Uno::Graphics::SamplerState__get_TrilinearClamp(NULL));
        __this->_draw_379fdedc.Draw(data->CharCount * 6, data->IndexType, data->IndexBuffer);
    }
}

}}}}
