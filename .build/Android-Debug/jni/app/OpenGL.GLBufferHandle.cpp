// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GLBufferHandle.h>

namespace app {
namespace OpenGL {

::uUInt GLBufferHandle__Zero;

GLBufferHandle__uType* GLBufferHandle__typeof()
{
    static GLBufferHandle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GLBufferHandle__uType*)::uAllocValueType(sizeof(GLBufferHandle__uType), "OpenGL.GLBufferHandle", sizeof(::uUInt));
        type->__fp_GetHashCode_value = (int(*)(void*))GLBufferHandle__GetHashCode;
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))GLBufferHandle__Equals;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int GLBufferHandle__GetHashCode(::uUInt* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(GLBufferHandle__typeof(), *__this));
}

bool GLBufferHandle__Equals(::uUInt* __this, ::uObject* obj)
{
    return ::app::Uno::Object__Equals(::uBox(GLBufferHandle__typeof(), *__this), obj);
}

}}
