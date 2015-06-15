// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.CommandBuffer.h>
#include <app/Fuse.IProfileClient.h>
#include <app/Fuse.Profiling.h>
#include <app/Fuse.StringCache.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Double.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.Utf8.h>

namespace app {
namespace Fuse {

double Profiling___startTime;
::uStaticStrong< ::app::Fuse::CommandBuffer*> Profiling___commandBuffer;
::uStaticStrong< ::app::Fuse::StringCache*> Profiling___stringCache;
::uStaticStrong< ::uObject*> Profiling___ProfileClient;

Profiling__uType* Profiling__typeof()
{
    static Profiling__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Profiling__uType*)::uAllocClassType(sizeof(Profiling__uType), "Fuse.Profiling");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* Profiling__get_ProfileClient(::uStatic* __this)
{
    return Profiling___ProfileClient;
}

void Profiling__set_ProfileClient(::uStatic* __this, ::uObject* value)
{
    Profiling___ProfileClient = value;
}

::app::Fuse::CommandBuffer* Profiling__get_CommandBuffer(::uStatic* __this)
{
    return Profiling___commandBuffer;
}

void Profiling__set_CommandBuffer(::uStatic* __this, ::app::Fuse::CommandBuffer* value)
{
    if ((Profiling___commandBuffer != NULL) && (Profiling__get_ProfileClient(NULL) != NULL))
    {
        ::app::Fuse::IProfileClient::Write(::uPtr< ::uObject*>(Profiling__get_ProfileClient(NULL)), ::uPtr< ::app::Fuse::CommandBuffer*>(Profiling___commandBuffer)->GetBuffer(), ::uPtr< ::app::Fuse::CommandBuffer*>(Profiling___commandBuffer)->Offset());
    }

    Profiling___commandBuffer = value;
}

void Profiling__CheckBuffer(::uStatic* __this, int requiredSize)
{
    int newSize = ::uPtr< ::app::Fuse::CommandBuffer*>(Profiling__get_CommandBuffer(NULL))->Offset() + requiredSize;

    if (newSize > ::uPtr< ::app::Fuse::CommandBuffer*>(Profiling__get_CommandBuffer(NULL))->Size())
    {
        Profiling__set_CommandBuffer(NULL, ::app::Fuse::CommandBuffer__New_1(NULL, 512));
    }
}

void Profiling__NewFramebuffer(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* fb, double duration)
{
    if (Profiling__get_ProfileClient(NULL) == NULL)
    {
        return;
    }

    int ms100 = (int)(duration * 100000.0);

    if ((double)ms100 < 255.0)
    {
        Profiling__Write(NULL, 9);
        Profiling__Write_1(NULL, (::uByte)ms100);
    }
    else
    {
        Profiling__Write(NULL, 10);
        Profiling__Write_4(NULL, ms100);
    }

    Profiling__Write_4(NULL, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->Size().X);
    Profiling__Write_4(NULL, fb->Size().Y);
}

void Profiling__BeginDraw(::uStatic* __this)
{
    if (Profiling__get_ProfileClient(NULL) == NULL)
    {
        return;
    }

    Profiling__Write(NULL, 4);
    Profiling__Write_4(NULL, ::app::Fuse::UpdateManager__get_FrameIndex(NULL));
}

void Profiling__EndDraw(::uStatic* __this, double duration)
{
    if (Profiling__get_ProfileClient(NULL) == NULL)
    {
        return;
    }

    int ms100 = (int)(duration * 100000.0);

    if ((double)ms100 < 255.0)
    {
        Profiling__Write(NULL, 5);
        Profiling__Write_1(NULL, (::uByte)ms100);
    }
    else
    {
        Profiling__Write(NULL, 6);
        Profiling__Write_4(NULL, ms100);
    }
}

void Profiling__BeginDrawNode(::uStatic* __this, ::uObject* obj)
{
    if (Profiling__get_ProfileClient(NULL) == NULL)
    {
        return;
    }

    ::uString* str = ::app::Uno::Object::ToString(::uPtr< ::uObject*>(obj));
    ::uByte id = Profiling__CacheString(NULL, str);
    Profiling__Write(NULL, 1);
    Profiling__Write_1(NULL, id);
}

::uByte Profiling__CacheString(::uStatic* __this, ::uString* str)
{
    if (Profiling__get_ProfileClient(NULL) == NULL)
    {
        return 0;
    }

    bool isCached = ::uPtr< ::app::Fuse::StringCache*>(Profiling___stringCache)->IsStringCached(str);
    ::uByte id = ::uPtr< ::app::Fuse::StringCache*>(Profiling___stringCache)->CacheString(str);

    if (isCached)
    {
        return id;
    }

    ::app::Uno::Diagnostics::Debug__Log(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Caching string to remote: "), str), 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.1.0\\$.uno"), 2532);
    Profiling__Write(NULL, 11);
    Profiling__Write_1(NULL, id);
    Profiling__Write_8(NULL, str);
    return id;
}

void Profiling__EndDrawNode(::uStatic* __this, double duration)
{
    if (Profiling__get_ProfileClient(NULL) == NULL)
    {
        return;
    }

    int ms100 = (int)(duration * 100000.0);

    if ((double)ms100 < 255.0)
    {
        Profiling__Write(NULL, 2);
        Profiling__Write_1(NULL, (::uByte)ms100);
    }
    else
    {
        Profiling__Write(NULL, 3);
        Profiling__Write_4(NULL, ms100);
    }
}

void Profiling__Write(::uStatic* __this, int command)
{
    Profiling__CheckBuffer(NULL, Profiling__GetSize(NULL, command));
    ::uPtr< ::app::Fuse::CommandBuffer*>(Profiling__get_CommandBuffer(NULL))->Write(command);
}

void Profiling__Write_1(::uStatic* __this, ::uByte b)
{
    Profiling__CheckBuffer(NULL, Profiling__GetSize_1(NULL, b));
    ::uPtr< ::app::Fuse::CommandBuffer*>(Profiling__get_CommandBuffer(NULL))->Write_1(b);
}

void Profiling__Write_2(::uStatic* __this, ::uArray* data)
{
    Profiling__CheckBuffer(NULL, ::uPtr< ::uArray*>(data)->Length());
    ::uPtr< ::app::Fuse::CommandBuffer*>(Profiling__get_CommandBuffer(NULL))->Write_7(data);
}

void Profiling__Write_4(::uStatic* __this, int i)
{
    Profiling__CheckBuffer(NULL, Profiling__GetSize_3(NULL, i));
    ::uPtr< ::app::Fuse::CommandBuffer*>(Profiling__get_CommandBuffer(NULL))->Write_3(i);
}

void Profiling__Write_8(::uStatic* __this, ::uString* str)
{
    ::uArray* bytes = ::app::Uno::Text::Utf8__GetBytes(NULL, str);
    int length = ::uPtr< ::uArray*>(bytes)->Length();
    Profiling__Write_4(NULL, length);
    Profiling__Write_2(NULL, bytes);
}

int Profiling__GetSize(::uStatic* __this, int c)
{
    return 1;
}

int Profiling__GetSize_1(::uStatic* __this, ::uByte b)
{
    return 1;
}

int Profiling__GetSize_3(::uStatic* __this, int i)
{
    return 4;
}

void Profiling___TypeInit(::uStatic* __this)
{
    Profiling___commandBuffer = ::app::Fuse::CommandBuffer__New_1(NULL, 512);
    Profiling___stringCache = ::app::Fuse::StringCache__New_1(NULL);
    Profiling___startTime = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
}

}}
