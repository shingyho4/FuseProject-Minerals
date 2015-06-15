// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.UX.Property.h>

namespace app {
namespace Uno {
namespace UX {

Property__uType* Property__typeof()
{
    static Property__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Property__uType*)::uAllocClassType(sizeof(Property__uType), "Uno.UX.Property", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Property___ObjInit(Property* __this, int stage)
{
    __this->Stage = stage;
}

}}}
