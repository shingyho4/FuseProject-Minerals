// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GLShaderHandle.h>

namespace app {
namespace OpenGL {

::uUInt GLShaderHandle__Zero;

GLShaderHandle__uType* GLShaderHandle__typeof()
{
    static GLShaderHandle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GLShaderHandle__uType*)::uAllocValueType(sizeof(GLShaderHandle__uType), "OpenGL.GLShaderHandle", sizeof(::uUInt));
        type->__fp_GetHashCode_value = (int(*)(void*))GLShaderHandle__GetHashCode;
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))GLShaderHandle__Equals;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int GLShaderHandle__GetHashCode(::uUInt* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(GLShaderHandle__typeof(), *__this));
}

bool GLShaderHandle__Equals(::uUInt* __this, ::uObject* obj)
{
    return ::app::Uno::Object__Equals(::uBox(GLShaderHandle__typeof(), *__this), obj);
}

}}
