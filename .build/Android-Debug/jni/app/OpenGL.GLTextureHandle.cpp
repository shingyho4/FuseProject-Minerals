// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GLTextureHandle.h>

namespace app {
namespace OpenGL {

::uUInt GLTextureHandle__Zero;

GLTextureHandle__uType* GLTextureHandle__typeof()
{
    static GLTextureHandle__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GLTextureHandle__uType*)::uAllocValueType(sizeof(GLTextureHandle__uType), "OpenGL.GLTextureHandle", sizeof(::uUInt));
        type->__fp_GetHashCode_value = (int(*)(void*))GLTextureHandle__GetHashCode;
        type->__fp_Equals_value = (bool(*)(void*, ::uObject*))GLTextureHandle__Equals;
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int GLTextureHandle__GetHashCode(::uUInt* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(GLTextureHandle__typeof(), *__this));
}

bool GLTextureHandle__Equals(::uUInt* __this, ::uObject* obj)
{
    return ::app::Uno::Object__Equals(::uBox(GLTextureHandle__typeof(), *__this), obj);
}

}}
