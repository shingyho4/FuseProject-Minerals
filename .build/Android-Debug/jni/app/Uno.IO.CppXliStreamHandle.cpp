// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.IO.CppXliStreamHandle.h>

namespace app {
namespace Uno {
namespace IO {

CppXliStreamHandle__uType* CppXliStreamHandle__typeof()
{
    static CppXliStreamHandle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CppXliStreamHandle__uType*)::uAllocValueType(sizeof(CppXliStreamHandle__uType), "Uno.IO.CppXliStreamHandle", sizeof(::Xli::Stream*));
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

}}}
