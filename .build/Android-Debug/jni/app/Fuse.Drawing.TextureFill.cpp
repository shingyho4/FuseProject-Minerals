// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.1.0\Brushes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.TextureFill.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Drawing {

TextureFill__uType* TextureFill__typeof()
{
    static TextureFill__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextureFill__uType*)::uAllocClassType(sizeof(TextureFill__uType), "Fuse.Drawing.TextureFill", ::app::Fuse::Drawing::DynamicBrush__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(TextureFill, _texture);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_texture";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Graphics::Texture2D* TextureFill__get_Texture(TextureFill* __this)
{
    return __this->_texture;
}

void TextureFill__set_Texture(TextureFill* __this, ::app::Uno::Graphics::Texture2D* value)
{
    if (value == __this->_texture)
    {
        return;
    }

    __this->_texture = value;
    __this->OnShadingChanged();
}

int TextureFill__get_ResampleMode(TextureFill* __this)
{
    return __this->_resampleMode;
}

void TextureFill__set_ResampleMode(TextureFill* __this, int value)
{
    if (value == __this->_resampleMode)
    {
        return;
    }

    __this->_resampleMode = value;
    __this->OnShadingChanged();
}

::app::Uno::Float4 TextureFill__get_Color(TextureFill* __this)
{
    return __this->_color;
}

void TextureFill__set_Color(TextureFill* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Equality(NULL, value, __this->_color))
    {
        return;
    }

    __this->_color = value;
    __this->OnShadingChanged();
}

int TextureFill__get_Alignment(TextureFill* __this)
{
    return __this->_align;
}

void TextureFill__set_Alignment(TextureFill* __this, int value)
{
    if (value == __this->_align)
    {
        return;
    }

    __this->_align = value;
    __this->OnShadingChanged();
}

int TextureFill__get_HorizontalAlignment(TextureFill* __this)
{
    return __this->Alignment() & 3;
}

int TextureFill__get_VerticalAlignment(TextureFill* __this)
{
    return __this->Alignment() & 12;
}

int TextureFill__get_SizeMode(TextureFill* __this)
{
    return __this->_sizeMode;
}

void TextureFill__set_SizeMode(TextureFill* __this, int value)
{
    if (value == __this->_sizeMode)
    {
        return;
    }

    __this->_sizeMode = value;
    __this->OnShadingChanged();
}

int TextureFill__get_MinFilter(TextureFill* __this)
{
    switch (__this->ResampleMode())
    {
        case 1:
        default:
        {
            return 9729;
        }
        case 0:
        {
            return 9728;
        }
        case 2:
        {
            return 9987;
        }
    }
}

int TextureFill__get_MagFilter(TextureFill* __this)
{
    switch (__this->ResampleMode())
    {
        case 1:
        default:
        {
            return 9729;
        }
        case 0:
        {
            return 9728;
        }
        case 2:
        {
            return 9729;
        }
    }
}

void TextureFill___ObjInit_2(TextureFill* __this)
{
    __this->_resampleMode = 1;
    __this->_color = ::app::Uno::Float4__New_1(NULL, 1.0f);
    __this->_repeatHorizontally = true;
    __this->_repeatVertically = true;
    ::app::Fuse::Drawing::DynamicBrush___ObjInit_1(__this);
}

TextureFill* TextureFill__New_1(::uStatic* __this)
{
    TextureFill* inst = (::app::Fuse::Drawing::TextureFill*)::uAllocObject(sizeof(::app::Fuse::Drawing::TextureFill), ::app::Fuse::Drawing::TextureFill__typeof());
    inst->_ObjInit_2();
    return inst;
}

}}}
