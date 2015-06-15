// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.FastMatrix.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Matrix.h>

namespace app {
namespace Fuse {

FastMatrix__uType* FastMatrix__typeof()
{
    static FastMatrix__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FastMatrix__uType*)::uAllocClassType(sizeof(FastMatrix__uType), "Fuse.FastMatrix", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float4x4 FastMatrix__get_Matrix(FastMatrix* __this)
{
    return __this->_matrix;
}

FastMatrix* FastMatrix__Identity(::uStatic* __this)
{
    return FastMatrix__New_1(NULL);
}

void FastMatrix__ResetIdentity(FastMatrix* __this)
{
    __this->_matrix = ::app::Uno::Float4x4__get_Identity(NULL);
}

FastMatrix* FastMatrix__FromFloat4x4(::uStatic* __this, ::app::Uno::Float4x4 m)
{
    FastMatrix* k = FastMatrix__New_1(NULL);
    ::uPtr< ::app::Fuse::FastMatrix*>(k)->_matrix = m;
    k->_hasNonTranslation = true;
    return k;
}

void FastMatrix__AppendTranslation(FastMatrix* __this, float x, float y, float z)
{
    if (!__this->_hasNonTranslation)
    {
        __this->SimpleTranslation(x, y, z);
    }
    else
    {
        __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, __this->_matrix, ::app::Uno::Matrix__Translation(NULL, ::app::Uno::Float3__New_2(NULL, x, y, z)));
    }
}

void FastMatrix__PrependTranslation(FastMatrix* __this, float x, float y, float z)
{
    if (!__this->_hasNonTranslation)
    {
        __this->SimpleTranslation(x, y, z);
    }
    else
    {
        __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, ::app::Uno::Matrix__Translation(NULL, ::app::Uno::Float3__New_2(NULL, x, y, z)), __this->_matrix);
    }
}

void FastMatrix__AppendRotation(FastMatrix* __this, float zRadians)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, __this->_matrix, ::app::Uno::Matrix__RotationZ(NULL, zRadians));
    __this->_hasNonTranslation = true;
}

void FastMatrix__PrependRotation(FastMatrix* __this, float zRadians)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, ::app::Uno::Matrix__RotationZ(NULL, zRadians), __this->_matrix);
    __this->_hasNonTranslation = true;
}

void FastMatrix__AppendScale(FastMatrix* __this, float factor)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, __this->_matrix, ::app::Uno::Matrix__Scaling(NULL, ::app::Uno::Float3__New_2(NULL, factor, factor, factor)));
    __this->_hasNonTranslation = true;
}

void FastMatrix__PrependScale(FastMatrix* __this, float factor)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, ::app::Uno::Matrix__Scaling(NULL, ::app::Uno::Float3__New_2(NULL, factor, factor, factor)), __this->_matrix);
    __this->_hasNonTranslation = true;
}

void FastMatrix__PrependShear(FastMatrix* __this, float xRadians, float yRadians)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, ::app::Uno::Matrix__Shear(NULL, ::app::Uno::Float2__New_2(NULL, xRadians, yRadians)), __this->_matrix);
    __this->_hasNonTranslation = true;
}

void FastMatrix__AppendShear(FastMatrix* __this, float xRadians, float yRadians)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, __this->_matrix, ::app::Uno::Matrix__Shear(NULL, ::app::Uno::Float2__New_2(NULL, xRadians, yRadians)));
    __this->_hasNonTranslation = true;
}

void FastMatrix__SimpleTranslation(FastMatrix* __this, float x, float y, float z)
{
    __this->_matrix.M41 = __this->_matrix.M41 + x;
    __this->_matrix.M42 = __this->_matrix.M42 + y;
    __this->_matrix.M43 = __this->_matrix.M43 + z;
}

FastMatrix* FastMatrix__Mul(FastMatrix* __this, FastMatrix* m)
{
    FastMatrix* res = FastMatrix__New_1(NULL);
    ::uPtr< ::app::Fuse::FastMatrix*>(res)->_matrix = ::app::Uno::Matrix__Mul_11(NULL, __this->_matrix, ::uPtr< ::app::Fuse::FastMatrix*>(m)->_matrix);
    res->_hasNonTranslation = __this->_hasNonTranslation || m->_hasNonTranslation;
    return res;
}

void FastMatrix__Invert(FastMatrix* __this)
{
    if (!__this->_hasNonTranslation)
    {
        __this->_matrix.M41 = -__this->_matrix.M41;
        __this->_matrix.M42 = -__this->_matrix.M42;
        __this->_matrix.M43 = -__this->_matrix.M43;
    }
    else
    {
        __this->_matrix = ::app::Uno::Matrix__Invert(NULL, __this->_matrix);
    }
}

void FastMatrix__AppendScale_1(FastMatrix* __this, ::app::Uno::Float3 scale)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, __this->_matrix, ::app::Uno::Matrix__Scaling(NULL, scale));
    __this->_hasNonTranslation = true;
}

void FastMatrix__AppendRotationQuaternion(FastMatrix* __this, ::app::Uno::Float4 q)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, __this->_matrix, ::app::Uno::Matrix__RotationQuaternion(NULL, q));
    __this->_hasNonTranslation = true;
}

void FastMatrix__AppendTranslation_1(FastMatrix* __this, ::app::Uno::Float3 offset)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, __this->_matrix, ::app::Uno::Matrix__Translation(NULL, offset));
}

void FastMatrix__PrependScale_1(FastMatrix* __this, ::app::Uno::Float3 scale)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, ::app::Uno::Matrix__Scaling(NULL, scale), __this->_matrix);
    __this->_hasNonTranslation = true;
}

void FastMatrix__PrependRotationQuaternion(FastMatrix* __this, ::app::Uno::Float4 q)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, ::app::Uno::Matrix__RotationQuaternion(NULL, q), __this->_matrix);
    __this->_hasNonTranslation = true;
}

void FastMatrix__PrependTranslation_1(FastMatrix* __this, ::app::Uno::Float3 offset)
{
    __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, ::app::Uno::Matrix__Translation(NULL, offset), __this->_matrix);
}

void FastMatrix__PrependFastMatrix(FastMatrix* __this, FastMatrix* fm)
{
    if (__this->_hasNonTranslation || ::uPtr< ::app::Fuse::FastMatrix*>(fm)->_hasNonTranslation)
    {
        __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, ::uPtr< ::app::Fuse::FastMatrix*>(fm)->Matrix(), __this->_matrix);
        __this->_hasNonTranslation = true;
    }
    else
    {
        __this->_matrix.M41 = __this->_matrix.M41 + ::uPtr< ::app::Fuse::FastMatrix*>(fm)->_matrix.M41;
        __this->_matrix.M42 = __this->_matrix.M42 + fm->_matrix.M42;
        __this->_matrix.M43 = __this->_matrix.M43 + fm->_matrix.M43;
    }
}

void FastMatrix__AppendFastMatrix(FastMatrix* __this, FastMatrix* fm)
{
    if (__this->_hasNonTranslation || ::uPtr< ::app::Fuse::FastMatrix*>(fm)->_hasNonTranslation)
    {
        __this->_matrix = ::app::Uno::Matrix__Mul_11(NULL, __this->_matrix, ::uPtr< ::app::Fuse::FastMatrix*>(fm)->Matrix());
        __this->_hasNonTranslation = true;
    }
    else
    {
        __this->_matrix.M41 = __this->_matrix.M41 + ::uPtr< ::app::Fuse::FastMatrix*>(fm)->_matrix.M41;
        __this->_matrix.M42 = __this->_matrix.M42 + fm->_matrix.M42;
        __this->_matrix.M43 = __this->_matrix.M43 + fm->_matrix.M43;
    }
}

void FastMatrix___ObjInit(FastMatrix* __this)
{
    __this->_matrix = ::app::Uno::Float4x4__get_Identity(NULL);
}

FastMatrix* FastMatrix__New_1(::uStatic* __this)
{
    FastMatrix* inst = (::app::Fuse::FastMatrix*)::uAllocObject(sizeof(::app::Fuse::FastMatrix), ::app::Fuse::FastMatrix__typeof());
    inst->_ObjInit();
    return inst;
}

}}
