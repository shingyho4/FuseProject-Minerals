// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_DEVICE_BUFFER_H__
#define __APP_UNO_GRAPHICS_DEVICE_BUFFER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Uno {
namespace Graphics {

struct DeviceBuffer;

struct DeviceBuffer__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

DeviceBuffer__uType* DeviceBuffer__typeof();

int DeviceBuffer__get_SizeInBytes(DeviceBuffer* __this);
void DeviceBuffer__set_SizeInBytes(DeviceBuffer* __this, int value);
int DeviceBuffer__get_Usage(DeviceBuffer* __this);
void DeviceBuffer__set_Usage(DeviceBuffer* __this, int value);
int DeviceBuffer__get_GLBufferTarget(DeviceBuffer* __this);
void DeviceBuffer__set_GLBufferTarget(DeviceBuffer* __this, int value);
::uUInt DeviceBuffer__get_GLBufferHandle(DeviceBuffer* __this);
void DeviceBuffer__set_GLBufferHandle(DeviceBuffer* __this, ::uUInt value);
bool DeviceBuffer__get_IsDisposed(DeviceBuffer* __this);
void DeviceBuffer__set_IsDisposed(DeviceBuffer* __this, bool value);
void DeviceBuffer__GLInit(DeviceBuffer* __this, int target);
void DeviceBuffer__GLInit_1(DeviceBuffer* __this, int target, int sizeInBytes);
void DeviceBuffer__GLInit_2(DeviceBuffer* __this, int target, ::app::Uno::Buffer* data);
void DeviceBuffer__Dispose(DeviceBuffer* __this);
void DeviceBuffer__Update(DeviceBuffer* __this, ::app::Uno::Buffer* data);
void DeviceBuffer___ObjInit(DeviceBuffer* __this, int usage);

struct DeviceBuffer : ::uObject
{
    int _SizeInBytes;
    int _Usage;
    int _GLBufferTarget;
    ::uUInt _GLBufferHandle;
    bool _IsDisposed;

    void GLInit(int target) { DeviceBuffer__GLInit(this, target); }
    void GLInit_1(int target, int sizeInBytes) { DeviceBuffer__GLInit_1(this, target, sizeInBytes); }
    void GLInit_2(int target, ::app::Uno::Buffer* data) { DeviceBuffer__GLInit_2(this, target, data); }
    void Dispose() { DeviceBuffer__Dispose(this); }
    void Update(::app::Uno::Buffer* data) { DeviceBuffer__Update(this, data); }
    void _ObjInit(int usage) { DeviceBuffer___ObjInit(this, usage); }
    int SizeInBytes() { return DeviceBuffer__get_SizeInBytes(this); }
    void SizeInBytes(int value) { DeviceBuffer__set_SizeInBytes(this, value); }
    int Usage() { return DeviceBuffer__get_Usage(this); }
    void Usage(int value) { DeviceBuffer__set_Usage(this, value); }
    int GLBufferTarget() { return DeviceBuffer__get_GLBufferTarget(this); }
    void GLBufferTarget(int value) { DeviceBuffer__set_GLBufferTarget(this, value); }
    ::uUInt GLBufferHandle() { return DeviceBuffer__get_GLBufferHandle(this); }
    void GLBufferHandle(::uUInt value) { DeviceBuffer__set_GLBufferHandle(this, value); }
    bool IsDisposed() { return DeviceBuffer__get_IsDisposed(this); }
    void IsDisposed(bool value) { DeviceBuffer__set_IsDisposed(this, value); }
};

}}}

#include <app/OpenGL.GLBufferHandle.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Graphics {

}}}


#endif
