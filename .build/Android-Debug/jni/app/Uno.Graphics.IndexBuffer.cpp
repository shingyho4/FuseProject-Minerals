// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Buffer.h>
#include <app/Uno.Graphics.IndexBuffer.h>

namespace app {
namespace Uno {
namespace Graphics {

IndexBuffer__uType* IndexBuffer__typeof()
{
    static IndexBuffer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (IndexBuffer__uType*)::uAllocClassType(sizeof(IndexBuffer__uType), "Uno.Graphics.IndexBuffer", ::app::Uno::Graphics::DeviceBuffer__typeof(), 1);
        type->Implements[0] = ::app::Uno::IDisposable__typeof();

        type->InterfaceOffsets[0] = offsetof(IndexBuffer__uType, __interface_0);
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void IndexBuffer___ObjInit_2(IndexBuffer* __this, int sizeInBytes, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit_1(34963, sizeInBytes);
}

IndexBuffer* IndexBuffer__New_2(::uStatic* __this, int sizeInBytes, int usage)
{
    IndexBuffer* inst = (::app::Uno::Graphics::IndexBuffer*)::uAllocObject(sizeof(::app::Uno::Graphics::IndexBuffer), ::app::Uno::Graphics::IndexBuffer__typeof());
    inst->_ObjInit_2(sizeInBytes, usage);
    return inst;
}

void IndexBuffer___ObjInit_3(IndexBuffer* __this, ::app::Uno::Buffer* data, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit_2(34963, data);
}

IndexBuffer* IndexBuffer__New_3(::uStatic* __this, ::app::Uno::Buffer* data, int usage)
{
    IndexBuffer* inst = (::app::Uno::Graphics::IndexBuffer*)::uAllocObject(sizeof(::app::Uno::Graphics::IndexBuffer), ::app::Uno::Graphics::IndexBuffer__typeof());
    inst->_ObjInit_3(data, usage);
    return inst;
}

}}}
