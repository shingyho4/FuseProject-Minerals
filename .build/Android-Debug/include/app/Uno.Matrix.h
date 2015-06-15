// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_MATRIX_H__
#define __APP_UNO_MATRIX_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Uno {

struct Matrix__uType : ::uClassType
{
};

Matrix__uType* Matrix__typeof();

::app::Uno::Float4x4 Matrix__OrthoLH(::uStatic* __this, float width, float height, float zNear, float zFar);
::app::Uno::Float4x4 Matrix__OrthoRH(::uStatic* __this, float width, float height, float zNear, float zFar);
::app::Uno::Float4x4 Matrix__PerspectiveRH(::uStatic* __this, float fovRadians, float aspect, float znear, float zfar);
::app::Uno::Float4x4 Matrix__Scaling(::uStatic* __this, ::app::Uno::Float3 scale);
::app::Uno::Float4x4 Matrix__Scaling_1(::uStatic* __this, float x, float y, float z);
::app::Uno::Float4x4 Matrix__Scaling_2(::uStatic* __this, float scale);
::app::Uno::Float4x4 Matrix__Shear(::uStatic* __this, ::app::Uno::Float2 angle);
::app::Uno::Float4x4 Matrix__RotationAxis(::uStatic* __this, ::app::Uno::Float3 axisNormalized, float angleRadians);
::app::Uno::Float4x4 Matrix__RotationZ(::uStatic* __this, float angleRadians);
::app::Uno::Float4x4 Matrix__RotationQuaternion(::uStatic* __this, ::app::Uno::Float4 rotation);
::app::Uno::Float4x4 Matrix__Transpose_2(::uStatic* __this, ::app::Uno::Float4x4 m);
::app::Uno::Float4x4 Matrix__Translation(::uStatic* __this, ::app::Uno::Float3 offset);
::app::Uno::Float4x4 Matrix__Translation_1(::uStatic* __this, float x, float y, float z);
::app::Uno::Float4x4 Matrix__Mul_7(::uStatic* __this, ::app::Uno::Float4x4 a, ::app::Uno::Float4x4 b, ::app::Uno::Float4x4 c, ::app::Uno::Float4x4 d);
::app::Uno::Float4x4 Matrix__Mul_8(::uStatic* __this, ::app::Uno::Float4x4 a, ::app::Uno::Float4x4 b, ::app::Uno::Float4x4 c);
::app::Uno::Float4x4 Matrix__Mul_11(::uStatic* __this, ::app::Uno::Float4x4 left, ::app::Uno::Float4x4 right);
::app::Uno::Float4x4 Matrix__Invert(::uStatic* __this, ::app::Uno::Float4x4 value);
bool Matrix__Decompose(::uStatic* __this, ::app::Uno::Float4x4 value, ::app::Uno::Float3* scale, ::app::Uno::Float4* rotationQuaternion, ::app::Uno::Float3* translation);
::app::Uno::Float3 Matrix__GetTranslation(::uStatic* __this, ::app::Uno::Float4x4 value);

}}


#endif
