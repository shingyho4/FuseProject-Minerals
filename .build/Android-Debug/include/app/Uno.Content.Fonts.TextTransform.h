// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_TEXT_TRANSFORM_H__
#define __APP_UNO_CONTENT_FONTS_TEXT_TRANSFORM_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct TextTransform;

struct TextTransform__uType : ::uClassType
{
    ::app::Uno::Float4x4(*__fp_ResolveClipSpaceMatrix)(TextTransform*);
    ::app::Uno::Float4x4(*__fp_get_Matrix)(TextTransform*);
    void(*__fp_set_Matrix)(TextTransform*, ::app::Uno::Float4x4);
};

TextTransform__uType* TextTransform__typeof();

void TextTransform___ObjInit(TextTransform* __this);

struct TextTransform : ::uObject
{
    ::app::Uno::Float4x4 ResolveClipSpaceMatrix();
    void _ObjInit() { TextTransform___ObjInit(this); }
    ::app::Uno::Float4x4 Matrix();
    void Matrix(::app::Uno::Float4x4 value);
};

}}}}

#include <app/Uno.Float4x4.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

inline ::app::Uno::Float4x4 TextTransform::ResolveClipSpaceMatrix() { return (((TextTransform__uType*)this->__obj_type)->__fp_ResolveClipSpaceMatrix)(this); }
inline ::app::Uno::Float4x4 TextTransform::Matrix() { return (((TextTransform__uType*)this->__obj_type)->__fp_get_Matrix)(this); }
inline void TextTransform::Matrix(::app::Uno::Float4x4 value) { (((TextTransform__uType*)this->__obj_type)->__fp_set_Matrix)(this, value); }

}}}}


#endif
