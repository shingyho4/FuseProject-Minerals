// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

BufferConverters__uType* BufferConverters__typeof()
{
    static BufferConverters__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BufferConverters__uType*)::uAllocClassType(sizeof(BufferConverters__uType), "Uno.Runtime.Implementation.Internal.BufferConverters");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_1(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 8);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetFloat2(i * 8, data->Item< ::app::Uno::Float2>(i), true);
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_2(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 12);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetFloat3(i * 12, data->Item< ::app::Uno::Float3>(i), true);
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_3(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 16);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetFloat4(i * 16, data->Item< ::app::Uno::Float4>(i), true);
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_6(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 2);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetUShort(i * 2, data->Item< ::uUShort>(i), true);
    }

    return result;
}

::app::Uno::Buffer* BufferConverters__ToBuffer_7(::uStatic* __this, ::uArray* data)
{
    ::app::Uno::Buffer* result = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::uArray*>(data)->Length() * 4);

    for (int i = 0; i < data->Length(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(result)->SetUInt(i * 4, data->Item< ::uUInt>(i), true);
    }

    return result;
}

}}}}}
