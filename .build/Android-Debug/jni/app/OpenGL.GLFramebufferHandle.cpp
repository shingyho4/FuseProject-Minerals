// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GLFramebufferHandle.h>

namespace app {
namespace OpenGL {

::uUInt GLFramebufferHandle__Zero;

GLFramebufferHandle__uType* GLFramebufferHandle__typeof()
{
    static GLFramebufferHandle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GLFramebufferHandle__uType*)::uAllocValueType(sizeof(GLFramebufferHandle__uType), "OpenGL.GLFramebufferHandle", sizeof(::uUInt));
        type->__fp_GetHashCode_value = (int(*)(void*))GLFramebufferHandle__GetHashCode;
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))GLFramebufferHandle__Equals;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int GLFramebufferHandle__GetHashCode(::uUInt* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(GLFramebufferHandle__typeof(), *__this));
}

bool GLFramebufferHandle__Equals(::uUInt* __this, ::uObject* obj)
{
    return ::app::Uno::Object__Equals(::uBox(GLFramebufferHandle__typeof(), *__this), obj);
}

bool GLFramebufferHandle__op_Inequality(::uStatic* __this, ::uUInt left, ::uUInt right)
{
    return left != right;
}

}}
