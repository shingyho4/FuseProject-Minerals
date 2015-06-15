// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Platform2.Display_PrivateState.h>

namespace app {
namespace Uno {
namespace Platform2 {

Display_PrivateState__uType* Display_PrivateState__typeof()
{
    static Display_PrivateState__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Display_PrivateState__uType*)::uAllocValueType(sizeof(Display_PrivateState__uType), "Uno.Platform2.Display.PrivateState", sizeof(uPlatform2::Display));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
