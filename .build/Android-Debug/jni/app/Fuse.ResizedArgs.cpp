// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.ResizedArgs.h>

namespace app {
namespace Fuse {

ResizedArgs__uType* ResizedArgs__typeof()
{
    static ResizedArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ResizedArgs__uType*)::uAllocClassType(sizeof(ResizedArgs__uType), "Fuse.ResizedArgs", ::app::Uno::EventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool ResizedArgs__get_HasOldSize(ResizedArgs* __this)
{
    return __this->_HasOldSize;
}

void ResizedArgs__set_HasOldSize(ResizedArgs* __this, bool value)
{
    __this->_HasOldSize = value;
}

::app::Uno::Float2 ResizedArgs__get_OldSize(ResizedArgs* __this)
{
    return __this->_OldSize;
}

void ResizedArgs__set_OldSize(ResizedArgs* __this, ::app::Uno::Float2 value)
{
    __this->_OldSize = value;
}

::app::Uno::Float2 ResizedArgs__get_NewSize(ResizedArgs* __this)
{
    return __this->_NewSize;
}

void ResizedArgs__set_NewSize(ResizedArgs* __this, ::app::Uno::Float2 value)
{
    __this->_NewSize = value;
}

void ResizedArgs___ObjInit_1(ResizedArgs* __this, bool hasOldSize, ::app::Uno::Float2 newSize, ::app::Uno::Float2 oldSize)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->HasOldSize(hasOldSize);
    __this->OldSize(oldSize);
    __this->NewSize(newSize);
}

ResizedArgs* ResizedArgs__New_2(::uStatic* __this, bool hasOldSize, ::app::Uno::Float2 newSize, ::app::Uno::Float2 oldSize)
{
    ResizedArgs* inst = (::app::Fuse::ResizedArgs*)::uAllocObject(sizeof(::app::Fuse::ResizedArgs), ::app::Fuse::ResizedArgs__typeof());
    inst->_ObjInit_1(hasOldSize, newSize, oldSize);
    return inst;
}

}}
