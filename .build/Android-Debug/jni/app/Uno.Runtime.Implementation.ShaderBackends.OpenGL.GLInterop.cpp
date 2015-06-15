// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\ShaderBackends\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace ShaderBackends {
namespace OpenGL {

GLInterop__uType* GLInterop__typeof()
{
    static GLInterop__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GLInterop__uType*)::uAllocClassType(sizeof(GLInterop__uType), "Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int GLInterop__ToGLFrontFaceDirection(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 2304;
        }
        case 1:
        {
            return 2305;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported polygon winding")));
        }
    }
}

int GLInterop__ToUnoGraphicsPolygonWinding(::uStatic* __this, int x)
{
    switch (x)
    {
        case 2304:
        {
            return 0;
        }
        case 2305:
        {
            return 1;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported polygon winding")));
        }
    }
}

int GLInterop__ToGLCullFaceMode(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 0;
        }
        case 1:
        {
            return 1028;
        }
        case 2:
        {
            return 1029;
        }
        case 3:
        {
            return 1032;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported polygon face")));
        }
    }
}

int GLInterop__ToUnoGraphicsPolygonFace(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 0;
        }
        case 1028:
        {
            return 1;
        }
        case 1029:
        {
            return 2;
        }
        case 1032:
        {
            return 3;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported polygon face")));
        }
    }
}

int GLInterop__ToGLDepthFunction(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 519;
        }
        case 1:
        {
            return 513;
        }
        case 2:
        {
            return 515;
        }
        case 3:
        {
            return 514;
        }
        case 4:
        {
            return 517;
        }
        case 5:
        {
            return 518;
        }
        case 6:
        {
            return 516;
        }
        case 7:
        {
            return 512;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported compare func")));
        }
    }
}

int GLInterop__ToUnoGraphicsCompareFunc(::uStatic* __this, int x)
{
    switch (x)
    {
        case 519:
        {
            return 0;
        }
        case 513:
        {
            return 1;
        }
        case 515:
        {
            return 2;
        }
        case 514:
        {
            return 3;
        }
        case 517:
        {
            return 4;
        }
        case 518:
        {
            return 5;
        }
        case 516:
        {
            return 6;
        }
        case 512:
        {
            return 7;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported compare func")));
        }
    }
}

int GLInterop__ToGLPrimitiveType(::uStatic* __this, int x)
{
    switch (x)
    {
        case 1:
        {
            return 4;
        }
        case 2:
        {
            return 1;
        }
        case 3:
        {
            return 0;
        }
        case 4:
        {
            return 5;
        }
        case 5:
        {
            return 3;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported primitive type")));
        }
    }
}

int GLInterop__ToUnoGraphicsPrimitiveType(::uStatic* __this, int x)
{
    switch (x)
    {
        case 4:
        {
            return 1;
        }
        case 1:
        {
            return 2;
        }
        case 0:
        {
            return 3;
        }
        case 5:
        {
            return 4;
        }
        case 3:
        {
            return 5;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Unsupported primitive type")));
        }
    }
}

int GLInterop__ToGLBlendingFactor(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 0;
        }
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 770;
        }
        case 3:
        {
            return 771;
        }
        case 4:
        {
            return 768;
        }
        case 5:
        {
            return 769;
        }
        case 6:
        {
            return 772;
        }
        case 7:
        {
            return 773;
        }
        case 8:
        {
            return 774;
        }
        case 9:
        {
            return 775;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported blend operand")));
        }
    }
}

int GLInterop__ToUnoGraphicsBlendOperand(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 0;
        }
        case 1:
        {
            return 1;
        }
        case 770:
        {
            return 2;
        }
        case 771:
        {
            return 3;
        }
        case 768:
        {
            return 4;
        }
        case 769:
        {
            return 5;
        }
        case 772:
        {
            return 6;
        }
        case 773:
        {
            return 7;
        }
        case 774:
        {
            return 8;
        }
        case 775:
        {
            return 9;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported blend operand")));
        }
    }
}

int GLInterop__ToGLBlendEquation(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 32774;
        }
        case 1:
        {
            return 32778;
        }
        case 2:
        {
            return 32779;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported blend equation")));
        }
    }
}

int GLInterop__ToUnoGraphicsBlendEquation(::uStatic* __this, int x)
{
    switch (x)
    {
        case 32774:
        {
            return 0;
        }
        case 32778:
        {
            return 1;
        }
        case 32779:
        {
            return 2;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported blend equation")));
        }
    }
}

int GLInterop__ToGLBufferUsage(::uStatic* __this, int x)
{
    switch (x)
    {
        case 0:
        {
            return 35044;
        }
        case 1:
        {
            return 35048;
        }
        case 2:
        {
            return 35040;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported buffer usage")));
        }
    }
}

int GLInterop__ToGLIndexType(::uStatic* __this, int x)
{
    switch (x)
    {
        case 1:
        {
            return 5121;
        }
        case 2:
        {
            return 5123;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported index type")));
        }
    }
}

void GLInterop__ToGLVertexAttributeType(::uStatic* __this, int x, int* componentCount, int* componentType, bool* normalized)
{
    switch (x)
    {
        case 1:
        {
            *componentType = 5126;
            *componentCount = 1;
            *normalized = false;
            break;
        }
        case 2:
        {
            *componentType = 5126;
            *componentCount = 2;
            *normalized = false;
            break;
        }
        case 3:
        {
            *componentType = 5126;
            *componentCount = 3;
            *normalized = false;
            break;
        }
        case 4:
        {
            *componentType = 5126;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 5:
        {
            *componentType = 5122;
            *componentCount = 1;
            *normalized = false;
            break;
        }
        case 6:
        {
            *componentType = 5122;
            *componentCount = 1;
            *normalized = true;
            break;
        }
        case 7:
        {
            *componentType = 5122;
            *componentCount = 2;
            *normalized = false;
            break;
        }
        case 8:
        {
            *componentType = 5122;
            *componentCount = 2;
            *normalized = true;
            break;
        }
        case 9:
        {
            *componentType = 5122;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 10:
        {
            *componentType = 5122;
            *componentCount = 4;
            *normalized = true;
            break;
        }
        case 11:
        {
            *componentType = 5123;
            *componentCount = 1;
            *normalized = false;
            break;
        }
        case 12:
        {
            *componentType = 5123;
            *componentCount = 1;
            *normalized = true;
            break;
        }
        case 13:
        {
            *componentType = 5123;
            *componentCount = 2;
            *normalized = false;
            break;
        }
        case 14:
        {
            *componentType = 5123;
            *componentCount = 2;
            *normalized = true;
            break;
        }
        case 15:
        {
            *componentType = 5123;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 16:
        {
            *componentType = 5123;
            *componentCount = 4;
            *normalized = true;
            break;
        }
        case 17:
        {
            *componentType = 5120;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 18:
        {
            *componentType = 5120;
            *componentCount = 4;
            *normalized = true;
            break;
        }
        case 19:
        {
            *componentType = 5121;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 20:
        {
            *componentType = 5121;
            *componentCount = 4;
            *normalized = true;
            break;
        }
        default:
        {
            U_THROW(::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__New_3(NULL, ::uGetConstString("Unsupported vertex attribute type")));
        }
    }
}

}}}}}}
