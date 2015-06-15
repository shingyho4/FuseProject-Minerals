// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TEXTURE_FILL_H__
#define __APP_FUSE_DRAWING_TEXTURE_FILL_H__

#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Uno.Float4.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }

namespace app {
namespace Fuse {
namespace Drawing {

struct TextureFill;

struct TextureFill__uType : ::app::Fuse::Drawing::DynamicBrush__uType
{
};

TextureFill__uType* TextureFill__typeof();

::app::Uno::Graphics::Texture2D* TextureFill__get_Texture(TextureFill* __this);
void TextureFill__set_Texture(TextureFill* __this, ::app::Uno::Graphics::Texture2D* value);
int TextureFill__get_ResampleMode(TextureFill* __this);
void TextureFill__set_ResampleMode(TextureFill* __this, int value);
::app::Uno::Float4 TextureFill__get_Color(TextureFill* __this);
void TextureFill__set_Color(TextureFill* __this, ::app::Uno::Float4 value);
int TextureFill__get_Alignment(TextureFill* __this);
void TextureFill__set_Alignment(TextureFill* __this, int value);
int TextureFill__get_HorizontalAlignment(TextureFill* __this);
int TextureFill__get_VerticalAlignment(TextureFill* __this);
int TextureFill__get_SizeMode(TextureFill* __this);
void TextureFill__set_SizeMode(TextureFill* __this, int value);
int TextureFill__get_MinFilter(TextureFill* __this);
int TextureFill__get_MagFilter(TextureFill* __this);
void TextureFill___ObjInit_2(TextureFill* __this);
TextureFill* TextureFill__New_1(::uStatic* __this);

struct TextureFill : ::app::Fuse::Drawing::DynamicBrush
{
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _texture;
    int _resampleMode;
    ::app::Uno::Float4 _color;
    bool _repeatHorizontally;
    bool _repeatVertically;
    int _align;
    int _sizeMode;

    void _ObjInit_2() { TextureFill___ObjInit_2(this); }
    ::app::Uno::Graphics::Texture2D* Texture() { return TextureFill__get_Texture(this); }
    void Texture(::app::Uno::Graphics::Texture2D* value) { TextureFill__set_Texture(this, value); }
    int ResampleMode() { return TextureFill__get_ResampleMode(this); }
    void ResampleMode(int value) { TextureFill__set_ResampleMode(this, value); }
    ::app::Uno::Float4 Color() { return TextureFill__get_Color(this); }
    void Color(::app::Uno::Float4 value) { TextureFill__set_Color(this, value); }
    int Alignment() { return TextureFill__get_Alignment(this); }
    void Alignment(int value) { TextureFill__set_Alignment(this, value); }
    int HorizontalAlignment() { return TextureFill__get_HorizontalAlignment(this); }
    int VerticalAlignment() { return TextureFill__get_VerticalAlignment(this); }
    int SizeMode() { return TextureFill__get_SizeMode(this); }
    void SizeMode(int value) { TextureFill__set_SizeMode(this, value); }
    int MinFilter() { return TextureFill__get_MinFilter(this); }
    int MagFilter() { return TextureFill__get_MagFilter(this); }
};

}}}


#endif
