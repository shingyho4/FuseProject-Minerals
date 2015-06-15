// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Content.Fonts.TextShaderData.h>
#include <app/Uno.Float.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

TextShaderData__uType* TextShaderData__typeof()
{
    static TextShaderData__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextShaderData__uType*)::uAllocClassType(sizeof(TextShaderData__uType), "Uno.Content.Fonts.TextShaderData", ::uObject__typeof(), 0, 5);
        type->StrongRefOffsets[0] = offsetof(TextShaderData, FontTexture);
        type->StrongRefOffsets[1] = offsetof(TextShaderData, IndexBuffer);
        type->StrongRefOffsets[2] = offsetof(TextShaderData, PositionInfo.Buffer);
        type->StrongRefOffsets[3] = offsetof(TextShaderData, TexCoordInfo.Buffer);
        type->StrongRefOffsets[4] = offsetof(TextShaderData, ColorInfo.Buffer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "FontTexture";
        type->StrongRefNames[1] = "IndexBuffer";
        type->StrongRefNames[2] = "PositionInfo.Buffer";
        type->StrongRefNames[3] = "TexCoordInfo.Buffer";
        type->StrongRefNames[4] = "ColorInfo.Buffer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void TextShaderData___ObjInit(TextShaderData* __this, ::app::Uno::Graphics::IndexBuffer* ibo, ::app::Uno::Graphics::VertexBuffer* vbo)
{
    __this->FontScale = 1.0f;
    __this->ClipSpaceMatrix = ::app::Uno::Float4x4__get_Identity(NULL);
    __this->IndexType = 2;
    __this->IndexBuffer = ibo;
    __this->PositionInfo.Buffer = vbo;
    __this->PositionInfo.BufferOffset = 0;
    __this->PositionInfo.BufferStride = 16;
    __this->PositionInfo.Type = 2;
    __this->TexCoordInfo.Buffer = vbo;
    __this->TexCoordInfo.BufferOffset = 8;
    __this->TexCoordInfo.BufferStride = 16;
    __this->TexCoordInfo.Type = 14;
    __this->ColorInfo.Buffer = vbo;
    __this->ColorInfo.BufferOffset = 12;
    __this->ColorInfo.BufferStride = 16;
    __this->ColorInfo.Type = 20;
}

TextShaderData* TextShaderData__New_1(::uStatic* __this, ::app::Uno::Graphics::IndexBuffer* ibo, ::app::Uno::Graphics::VertexBuffer* vbo)
{
    TextShaderData* inst = (::app::Uno::Content::Fonts::TextShaderData*)::uAllocObject(sizeof(::app::Uno::Content::Fonts::TextShaderData), ::app::Uno::Content::Fonts::TextShaderData__typeof());
    inst->_ObjInit(ibo, vbo);
    return inst;
}

}}}}
