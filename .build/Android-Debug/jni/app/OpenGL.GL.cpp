// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLBufferHandle.h>
#include <app/OpenGL.GLFramebufferHandle.h>
#include <app/OpenGL.GLProgramHandle.h>
#include <app/OpenGL.GLRenderbufferHandle.h>
#include <app/OpenGL.GLShaderHandle.h>
#include <app/OpenGL.GLTextureHandle.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <Uno/XliInterop.h>
#include <XliGL/GL.h>

namespace app {
namespace OpenGL {

GL__uType* GL__typeof()
{
    static GL__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GL__uType*)::uAllocClassType(sizeof(GL__uType), "OpenGL.GL");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int GL__GetInteger(::uStatic* __this, int __pname)
{
    GLuint result;
    glGetIntegerv(__pname, (GLint*)&result);
    return result;
}

void GL__Disable(::uStatic* __this, int __cap)
{
    glDisable(__cap);
}

void GL__Enable(::uStatic* __this, int __cap)
{
    glEnable(__cap);
}

int GL__GetError(::uStatic* __this)
{
    return glGetError();
}

void GL__Clear(::uStatic* __this, int __mask)
{
    glClear(__mask);
}

void GL__ClearColor(::uStatic* __this, float __red, float __green, float __blue, float __alpha)
{
    glClearColor(__red, __green, __blue, __alpha);
}

void GL__ClearDepth(::uStatic* __this, float __depth)
{
    #ifdef XLI_GL_DESKTOP
                    glClearDepth((double)__depth);
    #else
                    glClearDepthf(__depth);
    #endif
}

void GL__ColorMask(::uStatic* __this, bool __red, bool __green, bool __blue, bool __alpha)
{
    glColorMask(__red, __green, __blue, __alpha);
}

void GL__DepthMask(::uStatic* __this, bool __flag)
{
    glDepthMask(__flag);
}

void GL__BlendFuncSeparate(::uStatic* __this, int __srcRGB, int __dstRGB, int __srcAlpha, int __dstAlpha)
{
    glBlendFuncSeparate(__srcRGB, __dstRGB, __srcAlpha, __dstAlpha);
}

void GL__DepthFunc(::uStatic* __this, int __func)
{
    glDepthFunc(__func);
}

void GL__CullFace(::uStatic* __this, int __mode)
{
    glCullFace(__mode);
}

void GL__FrontFace(::uStatic* __this, int __mode)
{
    glFrontFace(__mode);
}

void GL__LineWidth(::uStatic* __this, float __width)
{
    glLineWidth(__width);
}

void GL__Scissor(::uStatic* __this, int __x, int __y, int __width, int __height)
{
    glScissor(__x, __y, __width, __height);
}

void GL__Viewport(::uStatic* __this, int __x, int __y, int __width, int __height)
{
    glViewport(__x, __y, __width, __height);
}

void GL__BindBuffer(::uStatic* __this, int __target, ::uUInt __buffer)
{
    glBindBuffer(__target, __buffer);
}

void GL__BufferDatai(::uStatic* __this, int __target, int __sizeInBytes, int __usage)
{
    glBufferData(__target, __sizeInBytes, NULL, __usage);
}

void GL__BufferData_1(::uStatic* __this, int __target, ::app::Uno::Buffer* __data, int __usage)
{
    glBufferData(__target, U_BUFFER_SIZE(__data), U_BUFFER_PTR(__data), __usage);
}

void GL__BufferSubData(::uStatic* __this, int __target, int __offset, ::app::Uno::Buffer* __data)
{
    glBufferSubData(__target, __offset, U_BUFFER_SIZE(__data), U_BUFFER_PTR(__data));
}

::uUInt GL__CreateBuffer(::uStatic* __this)
{
    GLuint handle;
    glGenBuffers(1, &handle);
    return handle;
}

void GL__DeleteBuffer(::uStatic* __this, ::uUInt __buffer)
{
    glDeleteBuffers(1, &__buffer);
}

void GL__BindFramebuffer(::uStatic* __this, int __target, ::uUInt __fb)
{
    glBindFramebuffer(__target, __fb);
}

int GL__CheckFramebufferStatus(::uStatic* __this, int __target)
{
    return glCheckFramebufferStatus(__target);
}

::uUInt GL__CreateFramebuffer(::uStatic* __this)
{
    GLuint handle;
    glGenFramebuffers(1, &handle);
    return handle;
}

void GL__DeleteFramebuffer(::uStatic* __this, ::uUInt __fb)
{
    glDeleteFramebuffers(1, &__fb);
}

void GL__FramebufferTexture2D(::uStatic* __this, int __target, int __attachment, int __textarget, ::uUInt __texture, int __level)
{
    glFramebufferTexture2D(__target, __attachment, __textarget, __texture, __level);
}

void GL__FramebufferRenderbuffer(::uStatic* __this, int __target, int __attachment, int __renderbuffertarget, ::uUInt __renderbuffer)
{
    glFramebufferRenderbuffer(__target, __attachment, __renderbuffertarget, __renderbuffer);
}

::uUInt GL__GetFramebufferBinding(::uStatic* __this)
{
    GLuint result;
    glGetIntegerv(GL_FRAMEBUFFER_BINDING, (GLint*)&result);
    return result;
}

void GL__BindRenderbuffer(::uStatic* __this, int __target, ::uUInt __renderbuffer)
{
    glBindRenderbuffer(__target, __renderbuffer);
}

::uUInt GL__CreateRenderbuffer(::uStatic* __this)
{
    GLuint handle;
    glGenRenderbuffers(1, &handle);
    return handle;
}

void GL__DeleteRenderbuffer(::uStatic* __this, ::uUInt __renderbuffer)
{
    glDeleteRenderbuffers(1, &__renderbuffer);
}

void GL__RenderbufferStorage(::uStatic* __this, int __target, int __internalFormat, int __width, int __height)
{
    glRenderbufferStorage(__target, __internalFormat, __width, __height);
}

::uUInt GL__GetRenderbufferBinding(::uStatic* __this)
{
    GLuint result;
    glGetIntegerv(GL_RENDERBUFFER_BINDING, (GLint*)&result);
    return result;
}

void GL__ActiveTexture(::uStatic* __this, int __texture)
{
    glActiveTexture(__texture);
}

void GL__BindTexture(::uStatic* __this, int __target, ::uUInt __texture)
{
    glBindTexture(__target, __texture);
}

::uUInt GL__CreateTexture(::uStatic* __this)
{
    GLuint handle;
    glGenTextures(1, &handle);
    return handle;
}

void GL__DeleteTexture(::uStatic* __this, ::uUInt __texture)
{
    glDeleteTextures(1, &__texture);
}

void GL__GenerateMipmap(::uStatic* __this, int __target)
{
    glGenerateMipmap(__target);
}

void GL__TexImage2D(::uStatic* __this, int __target, int __level, int __internalFormat, int __width, int __height, int __border, int __format, int __type, ::app::Uno::Buffer* __data)
{
    glTexImage2D(__target, __level, __internalFormat, __width, __height, __border, __format, __type, __data ? U_BUFFER_PTR(__data) : NULL);
}

void GL__TexParameteri(::uStatic* __this, int __target, int __pname, int __param)
{
    glTexParameteri(__target, __pname, __param);
}

void GL__AttachShader(::uStatic* __this, ::uUInt __program, ::uUInt __shader)
{
    glAttachShader(__program, __shader);
}

void GL__CompileShader(::uStatic* __this, ::uUInt __shader)
{
    glCompileShader(__shader);
}

::uUInt GL__CreateProgram(::uStatic* __this)
{
    return glCreateProgram();
}

::uUInt GL__CreateShader(::uStatic* __this, int __type)
{
    return glCreateShader(__type);
}

void GL__DeleteProgram(::uStatic* __this, ::uUInt __program)
{
    glDeleteProgram(__program);
}

void GL__DeleteShader(::uStatic* __this, ::uUInt __shader)
{
    glDeleteShader(__shader);
}

void GL__DetachShader(::uStatic* __this, ::uUInt __program, ::uUInt __shader)
{
    glDetachShader(__program, __shader);
}

int GL__GetProgramParameter(::uStatic* __this, ::uUInt __program, int __pname)
{
    GLint result;
    glGetProgramiv(__program, __pname, &result);
    return result;
}

::uString* GL__GetProgramInfoLog(::uStatic* __this, ::uUInt __program)
{
    int len = 0;
    const int bufSize = 4096;
    char buf[bufSize];
    glGetProgramInfoLog(__program, bufSize, &len, buf);
    return uNewStringAnsi(buf, len);
}

int GL__GetShaderParameter(::uStatic* __this, ::uUInt __shader, int __pname)
{
    GLint result;
    glGetShaderiv(__shader, __pname, &result);
    return result;
}

::uString* GL__GetShaderInfoLog(::uStatic* __this, ::uUInt __shader)
{
    int len = 0;
    const int bufSize = 4096;
    char buf[bufSize];
    glGetShaderInfoLog(__shader, bufSize, &len, buf);
    return uNewStringAnsi(buf, len);
}

void GL__LinkProgram(::uStatic* __this, ::uUInt __program)
{
    glLinkProgram(__program);
}

void GL__ShaderSource(::uStatic* __this, ::uUInt __shader, ::uString* __source)
{
    Xli::String source = uStringToXliString(__source);
    
    const char* code[] =
    {
    #ifdef XLI_GL_DESKTOP
        "#version 120\n",
    #else
        "",
    #endif
        source.Ptr(),
    };
    
    GLint len[] =
    {
        (GLint)strlen(code[0]),
        source.Length(),
    };
    
    glShaderSource(__shader, 2, code, len);
}

void GL__UseProgram(::uStatic* __this, ::uUInt __program)
{
    glUseProgram(__program);
}

void GL__DisableVertexAttribArray(::uStatic* __this, int __index)
{
    glDisableVertexAttribArray(__index);
}

void GL__EnableVertexAttribArray(::uStatic* __this, int __index)
{
    glEnableVertexAttribArray(__index);
}

int GL__GetAttribLocation(::uStatic* __this, ::uUInt __program, ::uString* __name)
{
    return glGetAttribLocation(__program, uStringToXliString(__name).Ptr());
}

int GL__GetUniformLocation(::uStatic* __this, ::uUInt __program, ::uString* __name)
{
    return glGetUniformLocation(__program, uStringToXliString(__name).Ptr());
}

void GL__Uniform1i(::uStatic* __this, int __location, int __value)
{
    glUniform1i(__location, __value);
}

void GL__Uniform1f(::uStatic* __this, int __location, float __value)
{
    glUniform1f(__location, __value);
}

void GL__Uniform2f(::uStatic* __this, int __location, ::app::Uno::Float2 __value)
{
    glUniform2fv(__location, 1, (const GLfloat*)&__value);
}

void GL__Uniform3f(::uStatic* __this, int __location, ::app::Uno::Float3 __value)
{
    glUniform3fv(__location, 1, (const GLfloat*)&__value);
}

void GL__Uniform4f(::uStatic* __this, int __location, ::app::Uno::Float4 __value)
{
    glUniform4fv(__location, 1, (const GLfloat*)&__value);
}

void GL__UniformMatrix4f(::uStatic* __this, int __location, bool __transpose, ::app::Uno::Float4x4 __value)
{
    glUniformMatrix4fv(__location, 1, __transpose, (const GLfloat*)&__value);
}

void GL__Uniform1fv(::uStatic* __this, int __location, ::uArray* __value)
{
    glUniform1fv(__location, __value->Length(), (const GLfloat*)__value->Ptr());
}

void GL__Uniform4fv(::uStatic* __this, int __location, ::uArray* __value)
{
    glUniform4fv(__location, __value->Length(), (const GLfloat*)__value->Ptr());
}

void GL__UniformMatrix4fv(::uStatic* __this, int __location, bool __transpose, ::uArray* __value)
{
    glUniformMatrix4fv(__location, __value->Length(), __transpose, (const GLfloat*)__value->Ptr());
}

void GL__VertexAttribPointer(::uStatic* __this, int __index, int __size, int __type, bool __normalized, int __stride, int __offset)
{
    glVertexAttribPointer(__index, __size, __type, __normalized, __stride, (const GLvoid*)(size_t)__offset);
}

void GL__DrawArrays(::uStatic* __this, int __mode, int __first, int __count)
{
    glDrawArrays(__mode, __first, __count);
}

void GL__DrawElements(::uStatic* __this, int __mode, int __count, int __type, int __offset)
{
    glDrawElements(__mode, __count, __type, (const GLvoid*)(size_t)__offset);
}

}}
