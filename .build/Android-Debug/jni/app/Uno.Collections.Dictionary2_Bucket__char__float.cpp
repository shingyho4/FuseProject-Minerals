// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary2_Bucket__char__float.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary2_Bucket__char__float__uType* Dictionary2_Bucket__char__float__typeof()
{
    static Dictionary2_Bucket__char__float__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary2_Bucket__char__float__uType*)::uAllocValueType(sizeof(Dictionary2_Bucket__char__float__uType), "Uno.Collections.Dictionary2_Bucket<char,float>", sizeof(Dictionary2_Bucket__char__float));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
