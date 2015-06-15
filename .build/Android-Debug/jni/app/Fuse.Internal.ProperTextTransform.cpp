// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.ProperTextTransform.h>
#include <app/Uno.Matrix.h>

namespace app {
namespace Fuse {
namespace Internal {

ProperTextTransform__uType* ProperTextTransform__typeof()
{
    static ProperTextTransform__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ProperTextTransform__uType*)::uAllocClassType(sizeof(ProperTextTransform__uType), "Fuse.Internal.ProperTextTransform", ::app::Uno::Content::Fonts::TextTransform__typeof());
        type->__fp_get_Matrix = (::app::Uno::Float4x4(*)(::app::Uno::Content::Fonts::TextTransform*))ProperTextTransform__get_Matrix;
        type->__fp_set_Matrix = (void(*)(::app::Uno::Content::Fonts::TextTransform*, ::app::Uno::Float4x4))ProperTextTransform__set_Matrix;
        type->__fp_ResolveClipSpaceMatrix = (::app::Uno::Float4x4(*)(::app::Uno::Content::Fonts::TextTransform*))ProperTextTransform__ResolveClipSpaceMatrix;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4x4 ProperTextTransform__get_Matrix(ProperTextTransform* __this)
{
    return __this->_matrix;
}

void ProperTextTransform__set_Matrix(ProperTextTransform* __this, ::app::Uno::Float4x4 value)
{
    __this->_matrix = value;
}

::app::Uno::Float4x4 ProperTextTransform__ResolveClipSpaceMatrix(ProperTextTransform* __this)
{
    return ::app::Uno::Matrix__Mul_11(NULL, __this->Matrix(), __this->ViewProjectionTransform);
}

void ProperTextTransform___ObjInit_1(ProperTextTransform* __this)
{
    __this->_matrix = ::app::Uno::Float4x4__get_Identity(NULL);
    ::app::Uno::Content::Fonts::TextTransform___ObjInit(__this);
}

ProperTextTransform* ProperTextTransform__New_1(::uStatic* __this)
{
    ProperTextTransform* inst = (::app::Fuse::Internal::ProperTextTransform*)::uAllocObject(sizeof(::app::Fuse::Internal::ProperTextTransform), ::app::Fuse::Internal::ProperTextTransform__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
