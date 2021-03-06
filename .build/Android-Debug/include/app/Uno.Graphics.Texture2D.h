// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_TEXTURE2_D_H__
#define __APP_UNO_GRAPHICS_TEXTURE2_D_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Uno {
namespace Graphics {

struct Texture2D;

extern int Texture2D___maxSize;

struct Texture2D__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

Texture2D__uType* Texture2D__typeof();

::app::Uno::Int2 Texture2D__get_Size(Texture2D* __this);
void Texture2D__set_Size(Texture2D* __this, ::app::Uno::Int2 value);
int Texture2D__get_MaxSize(::uStatic* __this);
int Texture2D__get_MipCount(Texture2D* __this);
void Texture2D__set_MipCount(Texture2D* __this, int value);
int Texture2D__get_Format(Texture2D* __this);
void Texture2D__set_Format(Texture2D* __this, int value);
::uUInt Texture2D__get_GLTextureHandle(Texture2D* __this);
void Texture2D__set_GLTextureHandle(Texture2D* __this, ::uUInt value);
bool Texture2D__get_IsDisposed(Texture2D* __this);
void Texture2D__set_IsDisposed(Texture2D* __this, bool value);
bool Texture2D__get_SupportsMipmap(Texture2D* __this);
void Texture2D__Dispose(Texture2D* __this);
void Texture2D__Update_1(Texture2D* __this, ::app::Uno::Buffer* mip0);
void Texture2D__GenerateMipmap(Texture2D* __this);
void Texture2D___ObjInit(Texture2D* __this, ::uUInt handle, ::app::Uno::Int2 size, int mipCount, int format);
Texture2D* Texture2D__New_1(::uStatic* __this, ::uUInt handle, ::app::Uno::Int2 size, int mipCount, int format);
void Texture2D___ObjInit_1(Texture2D* __this, ::app::Uno::Int2 size, int format, bool mipmap);
Texture2D* Texture2D__New_2(::uStatic* __this, ::app::Uno::Int2 size, int format, bool mipmap);

struct Texture2D : ::uObject
{
    ::app::Uno::Int2 _Size;
    int _MipCount;
    int _Format;
    ::uUInt _GLTextureHandle;
    bool _IsDisposed;

    void Dispose() { Texture2D__Dispose(this); }
    void Update_1(::app::Uno::Buffer* mip0) { Texture2D__Update_1(this, mip0); }
    void GenerateMipmap() { Texture2D__GenerateMipmap(this); }
    void _ObjInit(::uUInt handle, ::app::Uno::Int2 size, int mipCount, int format);
    void _ObjInit_1(::app::Uno::Int2 size, int format, bool mipmap);
    ::app::Uno::Int2 Size();
    void Size(::app::Uno::Int2 value);
    int MipCount() { return Texture2D__get_MipCount(this); }
    void MipCount(int value) { Texture2D__set_MipCount(this, value); }
    int Format() { return Texture2D__get_Format(this); }
    void Format(int value) { Texture2D__set_Format(this, value); }
    ::uUInt GLTextureHandle() { return Texture2D__get_GLTextureHandle(this); }
    void GLTextureHandle(::uUInt value) { Texture2D__set_GLTextureHandle(this, value); }
    bool IsDisposed() { return Texture2D__get_IsDisposed(this); }
    void IsDisposed(bool value) { Texture2D__set_IsDisposed(this, value); }
    bool SupportsMipmap() { return Texture2D__get_SupportsMipmap(this); }
};

}}}

#include <app/OpenGL.GLTextureHandle.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Graphics {

inline void Texture2D::_ObjInit(::uUInt handle, ::app::Uno::Int2 size, int mipCount, int format) { Texture2D___ObjInit(this, handle, size, mipCount, format); }
inline void Texture2D::_ObjInit_1(::app::Uno::Int2 size, int format, bool mipmap) { Texture2D___ObjInit_1(this, size, format, mipmap); }
inline ::app::Uno::Int2 Texture2D::Size() { return Texture2D__get_Size(this); }
inline void Texture2D::Size(::app::Uno::Int2 value) { Texture2D__set_Size(this, value); }

}}}


#endif
