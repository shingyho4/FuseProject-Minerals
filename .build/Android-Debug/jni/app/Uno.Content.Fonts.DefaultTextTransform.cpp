// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Application.h>
#include <app/Uno.Content.Fonts.DefaultTextTransform.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Graphics.GraphicsContext.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Recti.h>

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

DefaultTextTransform__uType* DefaultTextTransform__typeof()
{
    static DefaultTextTransform__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DefaultTextTransform__uType*)::uAllocClassType(sizeof(DefaultTextTransform__uType), "Uno.Content.Fonts.DefaultTextTransform", ::app::Uno::Content::Fonts::TextTransform__typeof());
        type->__fp_get_Matrix = (::app::Uno::Float4x4(*)(::app::Uno::Content::Fonts::TextTransform*))DefaultTextTransform__get_Matrix;
        type->__fp_set_Matrix = (void(*)(::app::Uno::Content::Fonts::TextTransform*, ::app::Uno::Float4x4))DefaultTextTransform__set_Matrix;
        type->__fp_ResolveClipSpaceMatrix = (::app::Uno::Float4x4(*)(::app::Uno::Content::Fonts::TextTransform*))DefaultTextTransform__ResolveClipSpaceMatrix;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4x4 DefaultTextTransform__get_Matrix(DefaultTextTransform* __this)
{
    return __this->_matrix;
}

void DefaultTextTransform__set_Matrix(DefaultTextTransform* __this, ::app::Uno::Float4x4 value)
{
    __this->_matrix = value;
}

::app::Uno::Float4x4 DefaultTextTransform__ResolveClipSpaceMatrix(DefaultTextTransform* __this)
{
    ::app::Uno::Float2 csScale = ::app::Uno::Float2__op_Division(NULL, ::app::Uno::Float2__New_2(NULL, 2.0f, -2.0f), ::app::Uno::Float2__op_Implicit(NULL, ::uPtr< ::app::Uno::Graphics::GraphicsContext*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->GraphicsContext())->Viewport().Size()));
    ::app::Uno::Float2 csOffset = ::app::Uno::Float2__New_2(NULL, -1.0f, 1.0f);
    ::app::Uno::Float4x4 csMatrix = ::app::Uno::Matrix__Mul_11(NULL, ::app::Uno::Matrix__Scaling(NULL, ::app::Uno::Float3__New_3(NULL, csScale, 1.0f)), ::app::Uno::Matrix__Translation(NULL, ::app::Uno::Float3__New_3(NULL, csOffset, 0.0f)));
    return ::app::Uno::Matrix__Mul_11(NULL, __this->Matrix(), csMatrix);
}

void DefaultTextTransform___ObjInit_1(DefaultTextTransform* __this)
{
    __this->_matrix = ::app::Uno::Float4x4__get_Identity(NULL);
    ::app::Uno::Content::Fonts::TextTransform___ObjInit(__this);
}

DefaultTextTransform* DefaultTextTransform__New_1(::uStatic* __this)
{
    DefaultTextTransform* inst = (::app::Uno::Content::Fonts::DefaultTextTransform*)::uAllocObject(sizeof(::app::Uno::Content::Fonts::DefaultTextTransform), ::app::Uno::Content::Fonts::DefaultTextTransform__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}}
