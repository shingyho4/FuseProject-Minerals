// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Runtime_Implementation_-c43bf4d0.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

GLProgram__uType* GLProgram__typeof()
{
    static GLProgram__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GLProgram__uType*)::uAllocClassType(sizeof(GLProgram__uType), "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram", ::uObject__typeof(), 0, 5);
        type->StrongRefOffsets[0] = offsetof(GLProgram, _cachedPrograms);
        type->StrongRefOffsets[1] = offsetof(GLProgram, _singleProgram);
        type->StrongRefOffsets[2] = offsetof(GLProgram, _vsSource);
        type->StrongRefOffsets[3] = offsetof(GLProgram, _fsSource);
        type->StrongRefOffsets[4] = offsetof(GLProgram, _constAttribAndUniformNames);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_cachedPrograms";
        type->StrongRefNames[1] = "_singleProgram";
        type->StrongRefNames[2] = "_vsSource";
        type->StrongRefNames[3] = "_fsSource";
        type->StrongRefNames[4] = "_constAttribAndUniformNames";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int GLProgram__get_ConstantCount(GLProgram* __this)
{
    return __this->_constCount;
}

GLProgram* GLProgram__Create(::uStatic* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames)
{
    return GLProgram__New_1(NULL, vsSource, fsSource, constCount, attribCount, constAttribAndUniformNames);
}

::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* GLProgram__GetCompiledProgramInternal(GLProgram* __this, ::uArray* constStrings)
{
    ::uString* vsPrefix = ::uGetConstString("#ifdef GL_ES\nprecision highp float;\n#endif\n");
    ::uString* fsPrefix = ::uGetConstString("#ifdef GL_ES\n#extension GL_OES_standard_derivatives : enable\n");
    fsPrefix = ::app::Uno::String__op_Addition(NULL, fsPrefix, ::uGetConstString("#extension GL_OES_EGL_image_external : enable\n"));
    fsPrefix = ::app::Uno::String__op_Addition(NULL, fsPrefix, ::uGetConstString("# ifdef GL_FRAGMENT_PRECISION_HIGH\nprecision highp float;\n# else\nprecision mediump float;\n# endif\n#endif\n"));
    ::uString* defines = ::uGetConstString("");

    for (int i = 0; i < ::uPtr< ::uArray*>(constStrings)->Length(); i++)
    {
        defines = ::app::Uno::String__op_Addition(NULL, defines, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("#define "), ::uPtr< ::uArray*>(__this->_constAttribAndUniformNames)->Item< ::uString*>(i)), ::uGetConstString(" ")), ::uPtr< ::uArray*>(constStrings)->Item< ::uString*>(i)), ::uGetConstString("\n")));
    }

    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram__New_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, vsPrefix, defines), __this->_vsSource), ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, fsPrefix, defines), __this->_fsSource), __this->_constCount, __this->_attribCount, __this->_constAttribAndUniformNames);
}

::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* GLProgram__GetCompiledProgram(GLProgram* __this, ::uArray* constStrings)
{
    if (::uPtr< ::uArray*>(constStrings)->Length() == 0)
    {
        if (__this->_singleProgram == NULL)
        {
            __this->_singleProgram = __this->GetCompiledProgramInternal(constStrings);
        }

        return __this->_singleProgram;
    }

    ::uString* key = ::app::Uno::String__Join(NULL, ::uGetConstString(":"), constStrings);

    if (__this->_cachedPrograms == NULL)
    {
        __this->_cachedPrograms = ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__New_1(NULL);
    }

    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* result;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*>(__this->_cachedPrograms)->TryGetValue(key, &result))
    {
        result = __this->GetCompiledProgramInternal(constStrings);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram*>(__this->_cachedPrograms)->Add(key, result);
    }

    return result;
}

void GLProgram___ObjInit(GLProgram* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames)
{
    __this->_vsSource = vsSource;
    __this->_fsSource = fsSource;
    __this->_constCount = constCount;
    __this->_attribCount = attribCount;
    __this->_constAttribAndUniformNames = constAttribAndUniformNames;
}

GLProgram* GLProgram__New_1(::uStatic* __this, ::uString* vsSource, ::uString* fsSource, int constCount, int attribCount, ::uArray* constAttribAndUniformNames)
{
    GLProgram* inst = (::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*)::uAllocObject(sizeof(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof());
    inst->_ObjInit(vsSource, fsSource, constCount, attribCount, constAttribAndUniformNames);
    return inst;
}

}}}}}}
