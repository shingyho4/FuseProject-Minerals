// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

GLException__uType* GLException__typeof()
{
    static GLException__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GLException__uType*)::uAllocClassType(sizeof(GLException__uType), "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException", ::app::Uno::Exception__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void GLException___ObjInit_2(GLException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit(__this, message);
}

GLException* GLException__New_3(::uStatic* __this, ::uString* message)
{
    GLException* inst = (::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException*)::uAllocObject(sizeof(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

}}}}}}
