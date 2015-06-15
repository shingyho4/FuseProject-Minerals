// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GLRenderbufferHandle.h>

namespace app {
namespace OpenGL {

::uUInt GLRenderbufferHandle__Zero;

GLRenderbufferHandle__uType* GLRenderbufferHandle__typeof()
{
    static GLRenderbufferHandle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GLRenderbufferHandle__uType*)::uAllocValueType(sizeof(GLRenderbufferHandle__uType), "OpenGL.GLRenderbufferHandle", sizeof(::uUInt));
        type->__fp_GetHashCode_value = (int(*)(void*))GLRenderbufferHandle__GetHashCode;
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))GLRenderbufferHandle__Equals;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int GLRenderbufferHandle__GetHashCode(::uUInt* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(GLRenderbufferHandle__typeof(), *__this));
}

bool GLRenderbufferHandle__Equals(::uUInt* __this, ::uObject* obj)
{
    return ::app::Uno::Object__Equals(::uBox(GLRenderbufferHandle__typeof(), *__this), obj);
}

bool GLRenderbufferHandle__op_Inequality(::uStatic* __this, ::uUInt left, ::uUInt right)
{
    return left != right;
}

}}
