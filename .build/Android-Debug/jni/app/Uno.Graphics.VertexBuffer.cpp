// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Buffer.h>
#include <app/Uno.Graphics.VertexBuffer.h>

namespace app {
namespace Uno {
namespace Graphics {

VertexBuffer__uType* VertexBuffer__typeof()
{
    static VertexBuffer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (VertexBuffer__uType*)::uAllocClassType(sizeof(VertexBuffer__uType), "Uno.Graphics.VertexBuffer", ::app::Uno::Graphics::DeviceBuffer__typeof(), 1);
        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(VertexBuffer__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void VertexBuffer___ObjInit_1(VertexBuffer* __this, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit(34962);
}

VertexBuffer* VertexBuffer__New_1(::uStatic* __this, int usage)
{
    VertexBuffer* inst = (::app::Uno::Graphics::VertexBuffer*)::uAllocObject(sizeof(::app::Uno::Graphics::VertexBuffer), ::app::Uno::Graphics::VertexBuffer__typeof());
    inst->_ObjInit_1(usage);
    return inst;
}

void VertexBuffer___ObjInit_2(VertexBuffer* __this, int sizeInBytes, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit_1(34962, sizeInBytes);
}

VertexBuffer* VertexBuffer__New_2(::uStatic* __this, int sizeInBytes, int usage)
{
    VertexBuffer* inst = (::app::Uno::Graphics::VertexBuffer*)::uAllocObject(sizeof(::app::Uno::Graphics::VertexBuffer), ::app::Uno::Graphics::VertexBuffer__typeof());
    inst->_ObjInit_2(sizeInBytes, usage);
    return inst;
}

void VertexBuffer___ObjInit_3(VertexBuffer* __this, ::app::Uno::Buffer* data, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit_2(34962, data);
}

VertexBuffer* VertexBuffer__New_3(::uStatic* __this, ::app::Uno::Buffer* data, int usage)
{
    VertexBuffer* inst = (::app::Uno::Graphics::VertexBuffer*)::uAllocObject(sizeof(::app::Uno::Graphics::VertexBuffer), ::app::Uno::Graphics::VertexBuffer__typeof());
    inst->_ObjInit_3(data, usage);
    return inst;
}

}}}
