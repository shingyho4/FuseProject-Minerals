// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.RoundCap.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2x2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__float2.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Drawing {

RoundCap__uType* RoundCap__typeof()
{
    static RoundCap__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (RoundCap__uType*)::uAllocClassType(sizeof(RoundCap__uType), "Fuse.Drawing.RoundCap", ::app::Fuse::Drawing::LineCapImpl__typeof());
        type->__fp_Create = (::uObject*(*)(::app::Fuse::Drawing::LineCapImpl*, ::app::Uno::Float2, ::app::Uno::Float2))RoundCap__Create;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* RoundCap__Create(RoundCap* __this, ::app::Uno::Float2 from, ::app::Uno::Float2 to)
{
    int steps = 20;
    ::uArray* verts = ::uNewArray(::app::Uno::Float2__typeof(), 18);
    ::app::Uno::Float2 center = ::app::Uno::Math__Lerp_2(NULL, from, to, 0.5f);
    ::app::Uno::Float2 u = ::app::Uno::Float2__op_Subtraction(NULL, from, center);
    ::app::Uno::Float2 v = ::app::Uno::Float2__New_2(NULL, u.Y, -u.X);
    ::app::Uno::Float2x2 matrix = ::app::Uno::Float2x2__New_2(NULL, u, v);

    for (int i = 1; i < 19; i++)
    {
        float f = (float)i / 20.0f;
        float r = (float)((double)f * 3.1415926535897931);
        ::app::Uno::Float2 rainbow = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, r), ::app::Uno::Math__Sin_1(NULL, r));
        ::uPtr< ::uArray*>(verts)->Item< ::app::Uno::Float2>(i - 1) = ::app::Uno::Float2__op_Addition(NULL, center, ::app::Uno::Vector__Transform_2(NULL, rainbow, matrix));
    }

    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, verts);
}

void RoundCap___ObjInit_1(RoundCap* __this)
{
    ::app::Fuse::Drawing::LineCapImpl___ObjInit(__this);
}

RoundCap* RoundCap__New_1(::uStatic* __this)
{
    RoundCap* inst = (::app::Fuse::Drawing::RoundCap*)::uAllocObject(sizeof(::app::Fuse::Drawing::RoundCap), ::app::Fuse::Drawing::RoundCap__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
