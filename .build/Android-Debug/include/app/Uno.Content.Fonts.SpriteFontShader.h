// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_SPRITE_FONT_SHADER_H__
#define __APP_UNO_CONTENT_FONTS_SPRITE_FONT_SHADER_H__

#include <app/Uno.Content.Fonts.TextShader.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct TextShaderData; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct SpriteFontShader;

struct SpriteFontShader__uType : ::app::Uno::Content::Fonts::TextShader__uType
{
};

SpriteFontShader__uType* SpriteFontShader__typeof();

void SpriteFontShader__Draw(SpriteFontShader* __this, ::app::Uno::Content::Fonts::TextShaderData* data);
void SpriteFontShader__init_DrawCalls(SpriteFontShader* __this);
void SpriteFontShader___ObjInit_1(SpriteFontShader* __this);
SpriteFontShader* SpriteFontShader__New_1(::uStatic* __this);

struct SpriteFontShader : ::app::Uno::Content::Fonts::TextShader
{
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_6b7396b4;

    void init_DrawCalls() { SpriteFontShader__init_DrawCalls(this); }
    void _ObjInit_1() { SpriteFontShader___ObjInit_1(this); }
};

}}}}


#endif
