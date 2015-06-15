// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Images\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Content.Images.Bitmap.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Graphics.FormatHelpers.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Content {
namespace Images {

Bitmap__uType* Bitmap__typeof()
{
    static Bitmap__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Bitmap__uType*)::uAllocClassType(sizeof(Bitmap__uType), "Uno.Content.Images.Bitmap", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Bitmap, _Buffer);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Buffer";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Int2 Bitmap__get_Size(Bitmap* __this)
{
    return __this->_Size;
}

void Bitmap__set_Size(Bitmap* __this, ::app::Uno::Int2 value)
{
    __this->_Size = value;
}

int Bitmap__get_Format(Bitmap* __this)
{
    return __this->_Format;
}

void Bitmap__set_Format(Bitmap* __this, int value)
{
    __this->_Format = value;
}

::app::Uno::Buffer* Bitmap__get_Buffer(Bitmap* __this)
{
    return __this->_Buffer;
}

void Bitmap__set_Buffer(Bitmap* __this, ::app::Uno::Buffer* value)
{
    __this->_Buffer = value;
}

void Bitmap___ObjInit(Bitmap* __this, ::app::Uno::Int2 size, int format, ::app::Uno::Buffer* optionalBuffer)
{
    __this->Size(size);
    __this->Format(format);
    int bpp = ::app::Uno::Graphics::FormatHelpers__GetStrideInBytes(NULL, __this->Format());
    int byteCount = (__this->Size().X * __this->Size().Y) * bpp;

    if (byteCount < 0)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("size: Cannot be negative")));
    }

    if (optionalBuffer != NULL)
    {
        if (::uPtr< ::app::Uno::Buffer*>(optionalBuffer)->SizeInBytes() != byteCount)
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("optionalBuffer: Invalid buffer size")));
        }

        __this->Buffer(optionalBuffer);
    }
    else
    {
        __this->Buffer(::app::Uno::Buffer__New_3(NULL, byteCount));
    }
}

Bitmap* Bitmap__New_1(::uStatic* __this, ::app::Uno::Int2 size, int format, ::app::Uno::Buffer* optionalBuffer)
{
    Bitmap* inst = (::app::Uno::Content::Images::Bitmap*)::uAllocObject(sizeof(::app::Uno::Content::Images::Bitmap), ::app::Uno::Content::Images::Bitmap__typeof());
    inst->_ObjInit(size, format, optionalBuffer);
    return inst;
}

}}}}
