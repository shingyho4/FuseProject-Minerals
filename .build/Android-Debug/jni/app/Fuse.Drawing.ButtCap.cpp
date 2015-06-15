// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.ButtCap.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

ButtCap__uType* ButtCap__typeof()
{
    static ButtCap__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ButtCap__uType*)::uAllocClassType(sizeof(ButtCap__uType), "Fuse.Drawing.ButtCap", ::app::Fuse::Drawing::LineCapImpl__typeof());
        type->__fp_Create = (::uObject*(*)(::app::Fuse::Drawing::LineCapImpl*, ::app::Uno::Float2, ::app::Uno::Float2))ButtCap__Create;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* ButtCap__Create(ButtCap* __this, ::app::Uno::Float2 from, ::app::Uno::Float2 to)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, ::uNewArray(::app::Uno::Float2__typeof(), 0));
}

void ButtCap___ObjInit_1(ButtCap* __this)
{
    ::app::Fuse::Drawing::LineCapImpl___ObjInit(__this);
}

ButtCap* ButtCap__New_1(::uStatic* __this)
{
    ButtCap* inst = (::app::Fuse::Drawing::ButtCap*)::uAllocObject(sizeof(::app::Fuse::Drawing::ButtCap), ::app::Fuse::Drawing::ButtCap__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}
