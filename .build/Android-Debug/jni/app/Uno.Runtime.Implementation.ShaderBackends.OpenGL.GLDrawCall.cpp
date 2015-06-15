// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLBufferHandle.h>
#include <app/OpenGL.GLProgramHandle.h>
#include <app/Uno.Collections.List__int.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

::uStaticStrong< ::app::Uno::Collections::List__int*> GLDrawCall___boundAttributes;
int GLDrawCall___currentTextureUnit;

GLDrawCall__uType* GLDrawCall__typeof()
{
    static GLDrawCall__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GLDrawCall__uType*)::uAllocValueType(sizeof(GLDrawCall__uType), "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall", sizeof(GLDrawCall), 0, 3);
        type->StrongRefOffsets[0] = offsetof(GLDrawCall, _constValues);
        type->StrongRefOffsets[1] = offsetof(GLDrawCall, _compiledProgram);
        type->StrongRefOffsets[2] = offsetof(GLDrawCall, _Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_constValues";
        type->StrongRefNames[1] = "_compiledProgram";
        type->StrongRefNames[2] = "_Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* GLDrawCall__get_Program(GLDrawCall* __this)
{
    return __this->_Program;
}

void GLDrawCall__set_Program(GLDrawCall* __this, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* value)
{
    __this->_Program = value;
}

bool GLDrawCall__get_BlendEnabled(GLDrawCall* __this)
{
    return __this->_BlendEnabled;
}

void GLDrawCall__set_BlendEnabled(GLDrawCall* __this, bool value)
{
    __this->_BlendEnabled = value;
}

int GLDrawCall__get_BlendEquationRgb(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsBlendEquation(NULL, __this->_blendEqRgb);
}

void GLDrawCall__set_BlendEquationRgb(GLDrawCall* __this, int value)
{
    __this->_blendEqRgb = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBlendEquation(NULL, value);
}

int GLDrawCall__get_BlendEquationAlpha(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsBlendEquation(NULL, __this->_blendEqAlpha);
}

void GLDrawCall__set_BlendEquationAlpha(GLDrawCall* __this, int value)
{
    __this->_blendEqAlpha = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBlendEquation(NULL, value);
}

int GLDrawCall__get_BlendSrcRgb(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsBlendOperand(NULL, __this->_blendSrcRgb);
}

void GLDrawCall__set_BlendSrcRgb(GLDrawCall* __this, int value)
{
    __this->_blendSrcRgb = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBlendingFactor(NULL, value);
}

int GLDrawCall__get_BlendSrcAlpha(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsBlendOperand(NULL, __this->_blendSrcAlpha);
}

void GLDrawCall__set_BlendSrcAlpha(GLDrawCall* __this, int value)
{
    __this->_blendSrcAlpha = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBlendingFactor(NULL, value);
}

int GLDrawCall__get_BlendDstRgb(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsBlendOperand(NULL, __this->_blendDstRgb);
}

void GLDrawCall__set_BlendDstRgb(GLDrawCall* __this, int value)
{
    __this->_blendDstRgb = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBlendingFactor(NULL, value);
}

int GLDrawCall__get_BlendDstAlpha(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsBlendOperand(NULL, __this->_blendDstAlpha);
}

void GLDrawCall__set_BlendDstAlpha(GLDrawCall* __this, int value)
{
    __this->_blendDstAlpha = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBlendingFactor(NULL, value);
}

bool GLDrawCall__get_DepthTestEnabled(GLDrawCall* __this)
{
    return __this->_DepthTestEnabled;
}

void GLDrawCall__set_DepthTestEnabled(GLDrawCall* __this, bool value)
{
    __this->_DepthTestEnabled = value;
}

int GLDrawCall__get_DepthFunc(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsCompareFunc(NULL, __this->_depthFunc);
}

void GLDrawCall__set_DepthFunc(GLDrawCall* __this, int value)
{
    __this->_depthFunc = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLDepthFunction(NULL, value);
}

int GLDrawCall__get_CullFace(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsPolygonFace(NULL, __this->_cullFace);
}

void GLDrawCall__set_CullFace(GLDrawCall* __this, int value)
{
    __this->_cullFace = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLCullFaceMode(NULL, value);
}

int GLDrawCall__get_PolygonWinding(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsPolygonWinding(NULL, __this->_frontFace);
}

void GLDrawCall__set_PolygonWinding(GLDrawCall* __this, int value)
{
    __this->_frontFace = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLFrontFaceDirection(NULL, value);
}

int GLDrawCall__get_PrimitiveType(GLDrawCall* __this)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToUnoGraphicsPrimitiveType(NULL, __this->_primitiveType);
}

void GLDrawCall__set_PrimitiveType(GLDrawCall* __this, int value)
{
    __this->_primitiveType = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLPrimitiveType(NULL, value);
}

bool GLDrawCall__get_WriteRed(GLDrawCall* __this)
{
    return __this->_WriteRed;
}

void GLDrawCall__set_WriteRed(GLDrawCall* __this, bool value)
{
    __this->_WriteRed = value;
}

bool GLDrawCall__get_WriteGreen(GLDrawCall* __this)
{
    return __this->_WriteGreen;
}

void GLDrawCall__set_WriteGreen(GLDrawCall* __this, bool value)
{
    __this->_WriteGreen = value;
}

bool GLDrawCall__get_WriteBlue(GLDrawCall* __this)
{
    return __this->_WriteBlue;
}

void GLDrawCall__set_WriteBlue(GLDrawCall* __this, bool value)
{
    __this->_WriteBlue = value;
}

bool GLDrawCall__get_WriteAlpha(GLDrawCall* __this)
{
    return __this->_WriteAlpha;
}

void GLDrawCall__set_WriteAlpha(GLDrawCall* __this, bool value)
{
    __this->_WriteAlpha = value;
}

bool GLDrawCall__get_WriteDepth(GLDrawCall* __this)
{
    return __this->_WriteDepth;
}

void GLDrawCall__set_WriteDepth(GLDrawCall* __this, bool value)
{
    __this->_WriteDepth = value;
}

int GLDrawCall__get_BaseVertex(GLDrawCall* __this)
{
    return __this->_BaseVertex;
}

void GLDrawCall__set_BaseVertex(GLDrawCall* __this, int value)
{
    __this->_BaseVertex = value;
}

float GLDrawCall__get_LineWidth(GLDrawCall* __this)
{
    return __this->_LineWidth;
}

void GLDrawCall__set_LineWidth(GLDrawCall* __this, float value)
{
    __this->_LineWidth = value;
}

void GLDrawCall__ConstInternal(GLDrawCall* __this, int index, ::uString* value)
{
    if ((__this->_constValues != NULL) && ::app::Uno::String__op_Inequality(NULL, ::uPtr< ::uArray*>(__this->_constValues)->Item< ::uString*>(index), value))
    {
        ::uPtr< ::uArray*>(__this->_constValues)->ItemStrong< ::uString*>(index) = value;
        __this->_compiledProgramDirty = true;
    }
}

void GLDrawCall__Const(GLDrawCall* __this, int index, bool value)
{
    __this->ConstInternal(index, value ? ::uGetConstString("true") : ::uGetConstString("false"));
}

void GLDrawCall__Const_1(GLDrawCall* __this, int index, int value)
{
    __this->ConstInternal(index, ::app::Uno::Int::ToString(value));
}

void GLDrawCall__Use(GLDrawCall* __this)
{
    if (__this->Program() == NULL)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Draw statements may not be used from the constructor of the containing class.")));
    }

    if (__this->_compiledProgramDirty || (__this->_compiledProgram == NULL))
    {
        __this->_compiledProgram = ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(__this->Program())->GetCompiledProgram(__this->_constValues);
        __this->_compiledProgramDirty = false;
    }

    ::app::OpenGL::GL__UseProgram(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GLProgramHandle());
}

void GLDrawCall__Attrib(GLDrawCall* __this, int index, int componentCount, int componentType, bool normalized, ::app::Uno::Graphics::VertexBuffer* buf, int stride, int offset)
{
    if (buf == NULL)
    {
        return;
    }

    int location = ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index);

    if (location < 0)
    {
        return;
    }

    ::app::OpenGL::GL__EnableVertexAttribArray(NULL, location);
    ::app::OpenGL::GL__BindBuffer(NULL, 34962, ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(buf)->GLBufferHandle());
    ::app::OpenGL::GL__VertexAttribPointer(NULL, location, componentCount, componentType, normalized, stride, offset);
    ::app::OpenGL::GL__BindBuffer(NULL, 34962, ::app::OpenGL::GLBufferHandle__Zero);
    ::uPtr< ::app::Uno::Collections::List__int*>(GLDrawCall___boundAttributes)->Add(location);
}

void GLDrawCall__Attrib_1(GLDrawCall* __this, int index, int type, ::app::Uno::Graphics::VertexBuffer* buf, int stride, int offset)
{
    int componentCount = int();
    int componentType;
    bool normalized = bool();
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLVertexAttributeType(NULL, type, &componentCount, &componentType, &normalized);
    __this->Attrib(index, componentCount, componentType, normalized, buf, stride, offset);
}

void GLDrawCall__Sampler(GLDrawCall* __this, int index, int target, ::uUInt handle, bool supportsMipmap)
{
    int location = ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index);
    ::app::OpenGL::GL__ActiveTexture(NULL, 33984 + GLDrawCall___currentTextureUnit);
    ::app::OpenGL::GL__BindTexture(NULL, target, handle);
    ::app::OpenGL::GL__TexParameteri(NULL, target, 10240, 9729);

    if (supportsMipmap)
    {
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10241, 9987);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10242, 10497);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10243, 10497);
    }
    else
    {
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10241, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10242, 33071);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10243, 33071);
    }

    ::app::OpenGL::GL__Uniform1i(NULL, location, GLDrawCall___currentTextureUnit++);
}

void GLDrawCall__Sampler_1(GLDrawCall* __this, int index, int target, ::uUInt handle, ::app::Uno::Graphics::SamplerState state, bool supportsMipmap)
{
    int location = ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index);
    ::app::OpenGL::GL__ActiveTexture(NULL, 33984 + GLDrawCall___currentTextureUnit);
    ::app::OpenGL::GL__BindTexture(NULL, target, handle);
    ::app::OpenGL::GL__TexParameteri(NULL, target, 10240, state.MagFilter);

    if (supportsMipmap)
    {
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10241, state.MinFilter);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10242, state.AddressU);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10243, state.AddressV);
    }
    else
    {
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10241, state.MinFilterNoMipmap());
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10242, 33071);
        ::app::OpenGL::GL__TexParameteri(NULL, target, 10243, 33071);
    }

    ::app::OpenGL::GL__Uniform1i(NULL, location, GLDrawCall___currentTextureUnit++);
}

void GLDrawCall__DisableSampler(GLDrawCall* __this, int index, int target)
{
    ::app::OpenGL::GL__ActiveTexture(NULL, 33984 + GLDrawCall___currentTextureUnit);
    ::app::OpenGL::GL__BindTexture(NULL, target, ::app::OpenGL::GLTextureHandle__Zero);
    GLDrawCall___currentTextureUnit++;
}

void GLDrawCall__Sampler_2(GLDrawCall* __this, int index, ::app::Uno::Graphics::Texture2D* value)
{
    if (value != NULL)
    {
        __this->Sampler(index, 3553, ::uPtr< ::app::Uno::Graphics::Texture2D*>(value)->GLTextureHandle(), ::uPtr< ::app::Uno::Graphics::Texture2D*>(value)->SupportsMipmap());
    }
    else
    {
        __this->DisableSampler(index, 3553);
    }
}

void GLDrawCall__Sampler_3(GLDrawCall* __this, int index, ::app::Uno::Graphics::Texture2D* value, ::app::Uno::Graphics::SamplerState state)
{
    if (value != NULL)
    {
        __this->Sampler_1(index, 3553, ::uPtr< ::app::Uno::Graphics::Texture2D*>(value)->GLTextureHandle(), state, ::uPtr< ::app::Uno::Graphics::Texture2D*>(value)->SupportsMipmap());
    }
    else
    {
        __this->DisableSampler(index, 3553);
    }
}

void GLDrawCall__Uniform_8(GLDrawCall* __this, int index, float value)
{
    ::app::OpenGL::GL__Uniform1f(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), value);
}

void GLDrawCall__Uniform_9(GLDrawCall* __this, int index, ::app::Uno::Float2 value)
{
    ::app::OpenGL::GL__Uniform2f(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), value);
}

void GLDrawCall__Uniform_10(GLDrawCall* __this, int index, ::app::Uno::Float3 value)
{
    ::app::OpenGL::GL__Uniform3f(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), value);
}

void GLDrawCall__Uniform_11(GLDrawCall* __this, int index, ::app::Uno::Float4 value)
{
    ::app::OpenGL::GL__Uniform4f(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), value);
}

void GLDrawCall__Uniform_14(GLDrawCall* __this, int index, ::app::Uno::Float4x4 value)
{
    ::app::OpenGL::GL__UniformMatrix4f(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), false, value);
}

void GLDrawCall__Uniform_15(GLDrawCall* __this, int index, ::uArray* value)
{
    ::app::OpenGL::GL__Uniform1fv(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), value);
}

void GLDrawCall__Uniform_18(GLDrawCall* __this, int index, ::uArray* value)
{
    ::app::OpenGL::GL__Uniform4fv(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), value);
}

void GLDrawCall__Uniform_21(GLDrawCall* __this, int index, ::uArray* value)
{
    ::app::OpenGL::GL__UniformMatrix4fv(NULL, ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*>(__this->_compiledProgram)->GetLocation(index), false, value);
}

void GLDrawCall__Begin(GLDrawCall* __this)
{
    if (__this->BlendEnabled())
    {
        ::app::OpenGL::GL__Enable(NULL, 3042);
        ::app::OpenGL::GL__BlendFuncSeparate(NULL, __this->_blendSrcRgb, __this->_blendDstRgb, __this->_blendSrcAlpha, __this->_blendDstAlpha);
    }
    else
    {
        ::app::OpenGL::GL__Disable(NULL, 3042);
    }

    if (__this->LineWidth() != 1.0f)
    {
        ::app::OpenGL::GL__LineWidth(NULL, __this->LineWidth());
    }

    if (__this->DepthTestEnabled())
    {
        ::app::OpenGL::GL__Enable(NULL, 2929);
        ::app::OpenGL::GL__DepthFunc(NULL, __this->_depthFunc);
    }
    else
    {
        ::app::OpenGL::GL__Disable(NULL, 2929);
    }

    if (__this->_cullFace != 0)
    {
        ::app::OpenGL::GL__Enable(NULL, 2884);
        ::app::OpenGL::GL__CullFace(NULL, __this->_cullFace);
        ::app::OpenGL::GL__FrontFace(NULL, __this->_frontFace);
    }
    else
    {
        ::app::OpenGL::GL__Disable(NULL, 2884);
    }

    ::app::OpenGL::GL__DepthMask(NULL, __this->WriteDepth());
    ::app::OpenGL::GL__ColorMask(NULL, __this->WriteRed(), __this->WriteGreen(), __this->WriteBlue(), __this->WriteAlpha());
}

void GLDrawCall__End(GLDrawCall* __this)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__int*>(GLDrawCall___boundAttributes)->Count(); i++)
    {
        ::app::OpenGL::GL__DisableVertexAttribArray(NULL, ::uPtr< ::app::Uno::Collections::List__int*>(GLDrawCall___boundAttributes)->Item(i));
    }

    for (int i = 0; i < GLDrawCall___currentTextureUnit; i++)
    {
        ::app::OpenGL::GL__ActiveTexture(NULL, 33984 + i);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, ::app::OpenGL::GLTextureHandle__Zero);
    }

    if (__this->LineWidth() != 1.0f)
    {
        ::app::OpenGL::GL__LineWidth(NULL, 1.0f);
    }

    ::app::OpenGL::GL__DepthMask(NULL, true);
    ::app::OpenGL::GL__ColorMask(NULL, true, true, true, true);
    ::uPtr< ::app::Uno::Collections::List__int*>(GLDrawCall___boundAttributes)->Clear();
    GLDrawCall___currentTextureUnit = 0;
}

void GLDrawCall__DrawArrays(GLDrawCall* __this, int count)
{
    __this->Begin();
    ::app::OpenGL::GL__DrawArrays(NULL, __this->_primitiveType, __this->BaseVertex(), count);
    __this->End();
}

void GLDrawCall__DrawElements(GLDrawCall* __this, int count, int type, ::app::Uno::Graphics::IndexBuffer* buf)
{
    __this->Begin();
    ::app::OpenGL::GL__BindBuffer(NULL, 34963, ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(buf)->GLBufferHandle());
    ::app::OpenGL::GL__DrawElements(NULL, __this->_primitiveType, count, type, __this->BaseVertex());
    ::app::OpenGL::GL__BindBuffer(NULL, 34963, ::app::OpenGL::GLBufferHandle__Zero);
    __this->End();
}

void GLDrawCall__Draw(GLDrawCall* __this, int count, int type, ::app::Uno::Graphics::IndexBuffer* buf)
{
    if (type == 0)
    {
        __this->DrawArrays(count);
    }
    else
    {
        __this->DrawElements(count, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLIndexType(NULL, type), buf);
    }
}

void GLDrawCall___ObjInit(GLDrawCall* __this, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program)
{
    int ind_123;
    int ind_124;
    bool ind_125 = bool();
    bool ind_126 = bool();
    bool ind_127 = bool();
    bool ind_128 = bool();
    *__this = ::uDefault< GLDrawCall>();

    if (GLDrawCall___boundAttributes == NULL)
    {
        GLDrawCall___boundAttributes = ::app::Uno::Collections::List__int__New_1(NULL);
    }

    __this->_constValues = ::uNewArray(::app::Uno::String__typeof(), ::uPtr< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(program)->ConstantCount());
    __this->Program(program);
    __this->BlendEnabled(false);
    __this->BlendEquationRgb((__this->BlendEquationAlpha(0), 0));
    __this->BlendSrcRgb((ind_123 = (ind_124 = (__this->BlendDstAlpha(1), 1), __this->BlendDstRgb(ind_124), ind_124), __this->BlendSrcAlpha(ind_123), ind_123));
    __this->WriteRed((ind_125 = (ind_126 = (ind_127 = (ind_128 = (__this->DepthTestEnabled(true), true), __this->WriteDepth(ind_128), ind_128), __this->WriteAlpha(ind_127), ind_127), __this->WriteBlue(ind_126), ind_126), __this->WriteGreen(ind_125), ind_125));
    __this->LineWidth(1.0f);
    __this->DepthFunc(2);
    __this->CullFace(2);
    __this->PolygonWinding(1);
    __this->PrimitiveType(1);
    __this->BaseVertex(0);
}

GLDrawCall GLDrawCall__New_1(::uStatic* __this, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program)
{
    GLDrawCall inst = ::uDefault< GLDrawCall>();
    inst._ObjInit(program);
    return inst;
}

}}}}}}
