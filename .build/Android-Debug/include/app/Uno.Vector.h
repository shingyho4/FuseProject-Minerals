// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_VECTOR_H__
#define __APP_UNO_VECTOR_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float2x2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Uno {

struct Vector__uType : ::uClassType
{
};

Vector__uType* Vector__typeof();

float Vector__LengthSquared(::uStatic* __this, ::app::Uno::Float2 v);
float Vector__LengthSquared_1(::uStatic* __this, ::app::Uno::Float3 v);
float Vector__LengthSquared_2(::uStatic* __this, ::app::Uno::Float4 v);
float Vector__Length(::uStatic* __this, ::app::Uno::Float2 v);
float Vector__Length_1(::uStatic* __this, ::app::Uno::Float3 v);
float Vector__Length_2(::uStatic* __this, ::app::Uno::Float4 v);
::app::Uno::Float2 Vector__Normalize(::uStatic* __this, ::app::Uno::Float2 v);
::app::Uno::Float3 Vector__Normalize_1(::uStatic* __this, ::app::Uno::Float3 v);
::app::Uno::Float4 Vector__Normalize_2(::uStatic* __this, ::app::Uno::Float4 v);
float Vector__Dot(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
float Vector__Dot_1(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b);
::app::Uno::Float3 Vector__Cross(::uStatic* __this, ::app::Uno::Float3 left, ::app::Uno::Float3 right);
::app::Uno::Float2 Vector__Transform_2(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float2x2 matrix);
::app::Uno::Float4 Vector__Transform_3(::uStatic* __this, ::app::Uno::Float4 vector, ::app::Uno::Float4x4 matrix);
::app::Uno::Float4 Vector__Transform_4(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float4x4 matrix);
::app::Uno::Float4 Vector__Transform_5(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4x4 matrix);
::app::Uno::Float3 Vector__TransformCoordinate(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4x4 matrix);
::app::Uno::Float3 Vector__TransformNormal(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4x4 matrix);
::app::Uno::Float2 Vector__TransformCoordinate_1(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float4x4 matrix);

}}


#endif
