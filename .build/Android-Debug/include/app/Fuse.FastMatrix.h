// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_FAST_MATRIX_H__
#define __APP_FUSE_FAST_MATRIX_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {

struct FastMatrix;

struct FastMatrix__uType : ::uClassType
{
};

FastMatrix__uType* FastMatrix__typeof();

::app::Uno::Float4x4 FastMatrix__get_Matrix(FastMatrix* __this);
FastMatrix* FastMatrix__Identity(::uStatic* __this);
void FastMatrix__ResetIdentity(FastMatrix* __this);
FastMatrix* FastMatrix__FromFloat4x4(::uStatic* __this, ::app::Uno::Float4x4 m);
void FastMatrix__AppendTranslation(FastMatrix* __this, float x, float y, float z);
void FastMatrix__PrependTranslation(FastMatrix* __this, float x, float y, float z);
void FastMatrix__AppendRotation(FastMatrix* __this, float zRadians);
void FastMatrix__PrependRotation(FastMatrix* __this, float zRadians);
void FastMatrix__AppendScale(FastMatrix* __this, float factor);
void FastMatrix__PrependScale(FastMatrix* __this, float factor);
void FastMatrix__PrependShear(FastMatrix* __this, float xRadians, float yRadians);
void FastMatrix__AppendShear(FastMatrix* __this, float xRadians, float yRadians);
void FastMatrix__SimpleTranslation(FastMatrix* __this, float x, float y, float z);
FastMatrix* FastMatrix__Mul(FastMatrix* __this, FastMatrix* m);
void FastMatrix__Invert(FastMatrix* __this);
void FastMatrix__AppendScale_1(FastMatrix* __this, ::app::Uno::Float3 scale);
void FastMatrix__AppendRotationQuaternion(FastMatrix* __this, ::app::Uno::Float4 q);
void FastMatrix__AppendTranslation_1(FastMatrix* __this, ::app::Uno::Float3 offset);
void FastMatrix__PrependScale_1(FastMatrix* __this, ::app::Uno::Float3 scale);
void FastMatrix__PrependRotationQuaternion(FastMatrix* __this, ::app::Uno::Float4 q);
void FastMatrix__PrependTranslation_1(FastMatrix* __this, ::app::Uno::Float3 offset);
void FastMatrix__PrependFastMatrix(FastMatrix* __this, FastMatrix* fm);
void FastMatrix__AppendFastMatrix(FastMatrix* __this, FastMatrix* fm);
void FastMatrix___ObjInit(FastMatrix* __this);
FastMatrix* FastMatrix__New_1(::uStatic* __this);

struct FastMatrix : ::uObject
{
    ::app::Uno::Float4x4 _matrix;
    bool _hasNonTranslation;

    void ResetIdentity() { FastMatrix__ResetIdentity(this); }
    void AppendTranslation(float x, float y, float z) { FastMatrix__AppendTranslation(this, x, y, z); }
    void PrependTranslation(float x, float y, float z) { FastMatrix__PrependTranslation(this, x, y, z); }
    void AppendRotation(float zRadians) { FastMatrix__AppendRotation(this, zRadians); }
    void PrependRotation(float zRadians) { FastMatrix__PrependRotation(this, zRadians); }
    void AppendScale(float factor) { FastMatrix__AppendScale(this, factor); }
    void PrependScale(float factor) { FastMatrix__PrependScale(this, factor); }
    void PrependShear(float xRadians, float yRadians) { FastMatrix__PrependShear(this, xRadians, yRadians); }
    void AppendShear(float xRadians, float yRadians) { FastMatrix__AppendShear(this, xRadians, yRadians); }
    void SimpleTranslation(float x, float y, float z) { FastMatrix__SimpleTranslation(this, x, y, z); }
    FastMatrix* Mul(FastMatrix* m) { return FastMatrix__Mul(this, m); }
    void Invert() { FastMatrix__Invert(this); }
    void AppendScale_1(::app::Uno::Float3 scale);
    void AppendRotationQuaternion(::app::Uno::Float4 q);
    void AppendTranslation_1(::app::Uno::Float3 offset);
    void PrependScale_1(::app::Uno::Float3 scale);
    void PrependRotationQuaternion(::app::Uno::Float4 q);
    void PrependTranslation_1(::app::Uno::Float3 offset);
    void PrependFastMatrix(FastMatrix* fm) { FastMatrix__PrependFastMatrix(this, fm); }
    void AppendFastMatrix(FastMatrix* fm) { FastMatrix__AppendFastMatrix(this, fm); }
    void _ObjInit() { FastMatrix___ObjInit(this); }
    ::app::Uno::Float4x4 Matrix();
};

}}

#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {

inline void FastMatrix::AppendScale_1(::app::Uno::Float3 scale) { FastMatrix__AppendScale_1(this, scale); }
inline void FastMatrix::AppendRotationQuaternion(::app::Uno::Float4 q) { FastMatrix__AppendRotationQuaternion(this, q); }
inline void FastMatrix::AppendTranslation_1(::app::Uno::Float3 offset) { FastMatrix__AppendTranslation_1(this, offset); }
inline void FastMatrix::PrependScale_1(::app::Uno::Float3 scale) { FastMatrix__PrependScale_1(this, scale); }
inline void FastMatrix::PrependRotationQuaternion(::app::Uno::Float4 q) { FastMatrix__PrependRotationQuaternion(this, q); }
inline void FastMatrix::PrependTranslation_1(::app::Uno::Float3 offset) { FastMatrix__PrependTranslation_1(this, offset); }
inline ::app::Uno::Float4x4 FastMatrix::Matrix() { return FastMatrix__get_Matrix(this); }

}}


#endif
