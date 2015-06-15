// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_PROPER_TEXT_TRANSFORM_H__
#define __APP_FUSE_INTERNAL_PROPER_TEXT_TRANSFORM_H__

#include <app/Uno.Content.Fonts.TextTransform.h>
#include <app/Uno.Float4x4.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct ProperTextTransform;

struct ProperTextTransform__uType : ::app::Uno::Content::Fonts::TextTransform__uType
{
};

ProperTextTransform__uType* ProperTextTransform__typeof();

::app::Uno::Float4x4 ProperTextTransform__get_Matrix(ProperTextTransform* __this);
void ProperTextTransform__set_Matrix(ProperTextTransform* __this, ::app::Uno::Float4x4 value);
::app::Uno::Float4x4 ProperTextTransform__ResolveClipSpaceMatrix(ProperTextTransform* __this);
void ProperTextTransform___ObjInit_1(ProperTextTransform* __this);
ProperTextTransform* ProperTextTransform__New_1(::uStatic* __this);

struct ProperTextTransform : ::app::Uno::Content::Fonts::TextTransform
{
    ::app::Uno::Float4x4 _matrix;
    ::app::Uno::Float4x4 ViewProjectionTransform;

    void _ObjInit_1() { ProperTextTransform___ObjInit_1(this); }
};

}}}


#endif
