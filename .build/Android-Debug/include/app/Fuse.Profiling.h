// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PROFILING_H__
#define __APP_FUSE_PROFILING_H__

#include <Uno/Uno.h>
namespace app { namespace Fuse { struct CommandBuffer; } }
namespace app { namespace Fuse { struct StringCache; } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Fuse {

extern double Profiling___startTime;
extern ::uStaticStrong< ::app::Fuse::CommandBuffer*> Profiling___commandBuffer;
extern ::uStaticStrong< ::app::Fuse::StringCache*> Profiling___stringCache;
extern ::uStaticStrong< ::uObject*> Profiling___ProfileClient;

struct Profiling__uType : ::uClassType
{
};

Profiling__uType* Profiling__typeof();

::uObject* Profiling__get_ProfileClient(::uStatic* __this);
void Profiling__set_ProfileClient(::uStatic* __this, ::uObject* value);
::app::Fuse::CommandBuffer* Profiling__get_CommandBuffer(::uStatic* __this);
void Profiling__set_CommandBuffer(::uStatic* __this, ::app::Fuse::CommandBuffer* value);
void Profiling__CheckBuffer(::uStatic* __this, int requiredSize);
void Profiling__NewFramebuffer(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* fb, double duration);
void Profiling__BeginDraw(::uStatic* __this);
void Profiling__EndDraw(::uStatic* __this, double duration);
void Profiling__BeginDrawNode(::uStatic* __this, ::uObject* obj);
::uByte Profiling__CacheString(::uStatic* __this, ::uString* str);
void Profiling__EndDrawNode(::uStatic* __this, double duration);
void Profiling__Write(::uStatic* __this, int command);
void Profiling__Write_1(::uStatic* __this, ::uByte b);
void Profiling__Write_2(::uStatic* __this, ::uArray* data);
void Profiling__Write_4(::uStatic* __this, int i);
void Profiling__Write_8(::uStatic* __this, ::uString* str);
int Profiling__GetSize(::uStatic* __this, int c);
int Profiling__GetSize_1(::uStatic* __this, ::uByte b);
int Profiling__GetSize_3(::uStatic* __this, int i);
void Profiling___TypeInit(::uStatic* __this);

}}


#endif
