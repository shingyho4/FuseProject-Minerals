// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Elements.PlacedArgs.h>

namespace app {
namespace Fuse {
namespace Elements {

PlacedArgs__uType* PlacedArgs__typeof()
{
    static PlacedArgs__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (PlacedArgs__uType*)::uAllocClassType(sizeof(PlacedArgs__uType), "Fuse.Elements.PlacedArgs", ::app::Uno::EventArgs__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool PlacedArgs__get_HasOldPosition(PlacedArgs* __this)
{
    return __this->_HasOldPosition;
}

void PlacedArgs__set_HasOldPosition(PlacedArgs* __this, bool value)
{
    __this->_HasOldPosition = value;
}

::app::Uno::Float2 PlacedArgs__get_OldPosition(PlacedArgs* __this)
{
    return __this->_OldPosition;
}

void PlacedArgs__set_OldPosition(PlacedArgs* __this, ::app::Uno::Float2 value)
{
    __this->_OldPosition = value;
}

::app::Uno::Float2 PlacedArgs__get_NewPosition(PlacedArgs* __this)
{
    return __this->_NewPosition;
}

void PlacedArgs__set_NewPosition(PlacedArgs* __this, ::app::Uno::Float2 value)
{
    __this->_NewPosition = value;
}

void PlacedArgs___ObjInit_1(PlacedArgs* __this, bool hasOldPosition, ::app::Uno::Float2 oldPos, ::app::Uno::Float2 newPos)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->HasOldPosition(hasOldPosition);
    __this->OldPosition(oldPos);
    __this->NewPosition(newPos);
}

PlacedArgs* PlacedArgs__New_2(::uStatic* __this, bool hasOldPosition, ::app::Uno::Float2 oldPos, ::app::Uno::Float2 newPos)
{
    PlacedArgs* inst = (::app::Fuse::Elements::PlacedArgs*)::uAllocObject(sizeof(::app::Fuse::Elements::PlacedArgs), ::app::Fuse::Elements::PlacedArgs__typeof());
    inst->_ObjInit_1(hasOldPosition, oldPos, newPos);
    return inst;
}

}}}
