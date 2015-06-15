// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GLProgramHandle.h>

namespace app {
namespace OpenGL {

::uUInt GLProgramHandle__Zero;

GLProgramHandle__uType* GLProgramHandle__typeof()
{
    static GLProgramHandle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GLProgramHandle__uType*)::uAllocValueType(sizeof(GLProgramHandle__uType), "OpenGL.GLProgramHandle", sizeof(::uUInt));
        type->__fp_GetHashCode_value = (int(*)(void*))GLProgramHandle__GetHashCode;
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))GLProgramHandle__Equals;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int GLProgramHandle__GetHashCode(::uUInt* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(GLProgramHandle__typeof(), *__this));
}

bool GLProgramHandle__Equals(::uUInt* __this, ::uObject* obj)
{
    return ::app::Uno::Object__Equals(::uBox(GLProgramHandle__typeof(), *__this), obj);
}

}}
