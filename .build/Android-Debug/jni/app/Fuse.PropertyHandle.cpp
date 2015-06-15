// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.PropertyHandle.h>

namespace app {
namespace Fuse {

PropertyHandle__uType* PropertyHandle__typeof()
{
    static PropertyHandle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PropertyHandle__uType*)::uAllocClassType(sizeof(PropertyHandle__uType), "Fuse.PropertyHandle", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void PropertyHandle___ObjInit(PropertyHandle* __this)
{
}

PropertyHandle* PropertyHandle__New_1(::uStatic* __this)
{
    PropertyHandle* inst = (::app::Fuse::PropertyHandle*)::uAllocObject(sizeof(::app::Fuse::PropertyHandle), ::app::Fuse::PropertyHandle__typeof());
    inst->_ObjInit();
    return inst;
}

}}
