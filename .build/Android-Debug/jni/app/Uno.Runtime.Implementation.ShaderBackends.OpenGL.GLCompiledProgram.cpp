// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLShaderHandle.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

GLCompiledProgram__uType* GLCompiledProgram__typeof()
{
    static GLCompiledProgram__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GLCompiledProgram__uType*)::uAllocClassType(sizeof(GLCompiledProgram__uType), "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_Dispose = (void(*)(void*))GLCompiledProgram__Dispose;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(GLCompiledProgram__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(GLCompiledProgram, _locations);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_locations";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uUInt GLCompiledProgram__get_GLProgramHandle(GLCompiledProgram* __this)
{
    return __this->_GLProgramHandle;
}

void GLCompiledProgram__set_GLProgramHandle(GLCompiledProgram* __this, ::uUInt value)
{
    __this->_GLProgramHandle = value;
}

int GLCompiledProgram__GetLocation(GLCompiledProgram* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_locations)->Item< int>(index);
}

void GLCompiledProgram__Dispose(GLCompiledProgram* __this)
{
    ::app::OpenGL::GL__UseProgram(NULL, ::app::OpenGL::GLProgramHandle__Zero);
    ::app::OpenGL::GL__DetachShader(NULL, __this->GLProgramHandle(), __this->_vsHandle);
    ::app::OpenGL::GL__DetachShader(NULL, __this->GLProgramHandle(), __this->_fsHandle);
    ::app::OpenGL::GL__DeleteProgram(NULL, __this->GLProgramHandle());
    ::app::OpenGL::GL__DeleteShader(NULL, __this->_vsHandle);
    ::app::OpenGL::GL__DeleteShader(NULL, __this->_fsHandle);
}

void GLCompiledProgram___ObjInit(GLCompiledProgram* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames)
{
    __this->_vsHandle = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__CompileShader(NULL, 35633, vsSource);
    __this->_fsHandle = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__CompileShader(NULL, 35632, fsSource);
    __this->GLProgramHandle(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__LinkProgram(NULL, __this->_vsHandle, __this->_fsHandle));
    __this->_locations = ::uNewArray(::app::Uno::Int__typeof(), ::uPtr< ::uArray*>(constAttribAndUniformNames)->Length());

    for (int i = 0; i < constCount; i++)
    {
        ::uPtr< ::uArray*>(__this->_locations)->Item< int>(i) = -1;
    }

    for (int i = constCount; i < (constCount + attribCount); i++)
    {
        ::uPtr< ::uArray*>(__this->_locations)->Item< int>(i) = ::app::OpenGL::GL__GetAttribLocation(NULL, __this->GLProgramHandle(), constAttribAndUniformNames->Item< ::uString*>(i));
    }

    for (int i = constCount + attribCount; i < constAttribAndUniformNames->Length(); i++)
    {
        ::uPtr< ::uArray*>(__this->_locations)->Item< int>(i) = ::app::OpenGL::GL__GetUniformLocation(NULL, __this->GLProgramHandle(), constAttribAndUniformNames->Item< ::uString*>(i));
    }
}

GLCompiledProgram* GLCompiledProgram__New_1(::uStatic* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames)
{
    GLCompiledProgram* inst = (::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*)::uAllocObject(sizeof(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram__typeof());
    inst->_ObjInit(vsSource, fsSource, constCount, attribCount, constAttribAndUniformNames);
    return inst;
}

}}}}}}
