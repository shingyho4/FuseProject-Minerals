// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_SDF_FONT_SHADER_H__
#define __APP_UNO_CONTENT_FONTS_SDF_FONT_SHADER_H__

#include <app/Uno.Content.Fonts.TextShader.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct TextShaderData; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct SdfFontShader;

struct SdfFontShader__uType : ::app::Uno::Content::Fonts::TextShader__uType
{
};

SdfFontShader__uType* SdfFontShader__typeof();

void SdfFontShader__Draw(SdfFontShader* __this, ::app::Uno::Content::Fonts::TextShaderData* data);

struct SdfFontShader : ::app::Uno::Content::Fonts::TextShader
{
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_379fdedc;
};

}}}}


#endif
