// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OPEN_G_L_G_L_H__
#define __APP_OPEN_G_L_G_L_H__

#include <Uno/Uno.h>
namespace app { namespace Uno { struct Buffer; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace OpenGL {

struct GL__uType : ::uClassType
{
};

GL__uType* GL__typeof();

int GL__GetInteger(::uStatic* __this, int __pname);
void GL__Disable(::uStatic* __this, int __cap);
void GL__Enable(::uStatic* __this, int __cap);
int GL__GetError(::uStatic* __this);
void GL__Clear(::uStatic* __this, int __mask);
void GL__ClearColor(::uStatic* __this, float __red, float __green, float __blue, float __alpha);
void GL__ClearDepth(::uStatic* __this, float __depth);
void GL__ColorMask(::uStatic* __this, bool __red, bool __green, bool __blue, bool __alpha);
void GL__DepthMask(::uStatic* __this, bool __flag);
void GL__BlendFuncSeparate(::uStatic* __this, int __srcRGB, int __dstRGB, int __srcAlpha, int __dstAlpha);
void GL__DepthFunc(::uStatic* __this, int __func);
void GL__CullFace(::uStatic* __this, int __mode);
void GL__FrontFace(::uStatic* __this, int __mode);
void GL__LineWidth(::uStatic* __this, float __width);
void GL__Scissor(::uStatic* __this, int __x, int __y, int __width, int __height);
void GL__Viewport(::uStatic* __this, int __x, int __y, int __width, int __height);
void GL__BindBuffer(::uStatic* __this, int __target, ::uUInt __buffer);
void GL__BufferDatai(::uStatic* __this, int __target, int __sizeInBytes, int __usage);
void GL__BufferData_1(::uStatic* __this, int __target, ::app::Uno::Buffer* __data, int __usage);
void GL__BufferSubData(::uStatic* __this, int __target, int __offset, ::app::Uno::Buffer* __data);
::uUInt GL__CreateBuffer(::uStatic* __this);
void GL__DeleteBuffer(::uStatic* __this, ::uUInt __buffer);
void GL__BindFramebuffer(::uStatic* __this, int __target, ::uUInt __fb);
int GL__CheckFramebufferStatus(::uStatic* __this, int __target);
::uUInt GL__CreateFramebuffer(::uStatic* __this);
void GL__DeleteFramebuffer(::uStatic* __this, ::uUInt __fb);
void GL__FramebufferTexture2D(::uStatic* __this, int __target, int __attachment, int __textarget, ::uUInt __texture, int __level);
void GL__FramebufferRenderbuffer(::uStatic* __this, int __target, int __attachment, int __renderbuffertarget, ::uUInt __renderbuffer);
::uUInt GL__GetFramebufferBinding(::uStatic* __this);
void GL__BindRenderbuffer(::uStatic* __this, int __target, ::uUInt __renderbuffer);
::uUInt GL__CreateRenderbuffer(::uStatic* __this);
void GL__DeleteRenderbuffer(::uStatic* __this, ::uUInt __renderbuffer);
void GL__RenderbufferStorage(::uStatic* __this, int __target, int __internalFormat, int __width, int __height);
::uUInt GL__GetRenderbufferBinding(::uStatic* __this);
void GL__ActiveTexture(::uStatic* __this, int __texture);
void GL__BindTexture(::uStatic* __this, int __target, ::uUInt __texture);
::uUInt GL__CreateTexture(::uStatic* __this);
void GL__DeleteTexture(::uStatic* __this, ::uUInt __texture);
void GL__GenerateMipmap(::uStatic* __this, int __target);
void GL__TexImage2D(::uStatic* __this, int __target, int __level, int __internalFormat, int __width, int __height, int __border, int __format, int __type, ::app::Uno::Buffer* __data);
void GL__TexParameteri(::uStatic* __this, int __target, int __pname, int __param);
void GL__AttachShader(::uStatic* __this, ::uUInt __program, ::uUInt __shader);
void GL__CompileShader(::uStatic* __this, ::uUInt __shader);
::uUInt GL__CreateProgram(::uStatic* __this);
::uUInt GL__CreateShader(::uStatic* __this, int __type);
void GL__DeleteProgram(::uStatic* __this, ::uUInt __program);
void GL__DeleteShader(::uStatic* __this, ::uUInt __shader);
void GL__DetachShader(::uStatic* __this, ::uUInt __program, ::uUInt __shader);
int GL__GetProgramParameter(::uStatic* __this, ::uUInt __program, int __pname);
::uString* GL__GetProgramInfoLog(::uStatic* __this, ::uUInt __program);
int GL__GetShaderParameter(::uStatic* __this, ::uUInt __shader, int __pname);
::uString* GL__GetShaderInfoLog(::uStatic* __this, ::uUInt __shader);
void GL__LinkProgram(::uStatic* __this, ::uUInt __program);
void GL__ShaderSource(::uStatic* __this, ::uUInt __shader, ::uString* __source);
void GL__UseProgram(::uStatic* __this, ::uUInt __program);
void GL__DisableVertexAttribArray(::uStatic* __this, int __index);
void GL__EnableVertexAttribArray(::uStatic* __this, int __index);
int GL__GetAttribLocation(::uStatic* __this, ::uUInt __program, ::uString* __name);
int GL__GetUniformLocation(::uStatic* __this, ::uUInt __program, ::uString* __name);
void GL__Uniform1i(::uStatic* __this, int __location, int __value);
void GL__Uniform1f(::uStatic* __this, int __location, float __value);
void GL__Uniform2f(::uStatic* __this, int __location, ::app::Uno::Float2 __value);
void GL__Uniform3f(::uStatic* __this, int __location, ::app::Uno::Float3 __value);
void GL__Uniform4f(::uStatic* __this, int __location, ::app::Uno::Float4 __value);
void GL__UniformMatrix4f(::uStatic* __this, int __location, bool __transpose, ::app::Uno::Float4x4 __value);
void GL__Uniform1fv(::uStatic* __this, int __location, ::uArray* __value);
void GL__Uniform4fv(::uStatic* __this, int __location, ::uArray* __value);
void GL__UniformMatrix4fv(::uStatic* __this, int __location, bool __transpose, ::uArray* __value);
void GL__VertexAttribPointer(::uStatic* __this, int __index, int __size, int __type, bool __normalized, int __stride, int __offset);
void GL__DrawArrays(::uStatic* __this, int __mode, int __first, int __count);
void GL__DrawElements(::uStatic* __this, int __mode, int __count, int __type, int __offset);

}}


#endif
