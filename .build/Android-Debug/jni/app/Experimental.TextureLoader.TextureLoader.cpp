// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.TextureLoader.Callback.h>
#include <app/Experimental.TextureLoader.InvalidContentTypeException.h>
#include <app/Experimental.TextureLoader.TextureLoader.h>
#include <app/Experimental.TextureLoader.TextureLoaderImpl.h>
#include <app/Uno.Action__texture2D.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Char.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace TextureLoader {

TextureLoader__uType* TextureLoader__typeof()
{
    static TextureLoader__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextureLoader__uType*)::uAllocClassType(sizeof(TextureLoader__uType), "Experimental.TextureLoader.TextureLoader");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void TextureLoader__JpegByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* arr, ::uDelegate* callback)
{
    ::app::Experimental::TextureLoader::TextureLoaderImpl__JpegByteArrayToTexture2D(NULL, arr, ::app::Experimental::TextureLoader::Callback__New_1(NULL, callback));
}

void TextureLoader__PngByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* arr, ::uDelegate* callback)
{
    ::app::Experimental::TextureLoader::TextureLoaderImpl__PngByteArrayToTexture2D(NULL, arr, ::app::Experimental::TextureLoader::Callback__New_1(NULL, callback));
}

void TextureLoader__ByteArrayToTexture2DFilename(::uStatic* __this, ::app::Uno::Buffer* arr, ::uString* filename, ::uDelegate* callback)
{
    filename = ::app::Uno::String::ToLower(::uPtr< ::uString*>(filename));

    if (TextureLoader__EndsWith(NULL, filename, ::uGetConstString(".png")))
    {
        TextureLoader__PngByteArrayToTexture2D(NULL, arr, callback);
    }
    else if (TextureLoader__EndsWith(NULL, filename, ::uGetConstString(".jpg")) || TextureLoader__EndsWith(NULL, filename, ::uGetConstString(".jpeg")))
    {
        TextureLoader__JpegByteArrayToTexture2D(NULL, arr, callback);
    }
    else
    {
        U_THROW(::app::Experimental::TextureLoader::InvalidContentTypeException__New_3(NULL, filename));
    }
}

bool TextureLoader__EndsWith(::uStatic* __this, ::uString* str, ::uString* suffix)
{
    int strAt = ::uPtr< ::uString*>(str)->Length() - 1;
    int suffixAt = ::uPtr< ::uString*>(suffix)->Length() - 1;

    while ((strAt >= 0) && (suffixAt >= 0))
    {
        if (::uPtr< ::uString*>(str)->Item(strAt) != ::uPtr< ::uString*>(suffix)->Item(suffixAt))
        {
            return false;
        }

        strAt--;
        suffixAt--;
    }

    return suffixAt < 0;
}

void TextureLoader__ByteArrayToTexture2DContentType(::uStatic* __this, ::app::Uno::Buffer* arr, ::uString* contentType, ::uDelegate* callback)
{
    if (::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(contentType), ::uGetConstString("image/jpeg"), 0) != -1)
    {
        TextureLoader__JpegByteArrayToTexture2D(NULL, arr, callback);
    }
    else if (::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(contentType), ::uGetConstString("image/png"), 0) != -1)
    {
        TextureLoader__PngByteArrayToTexture2D(NULL, arr, callback);
    }
    else
    {
        U_THROW(::app::Experimental::TextureLoader::InvalidContentTypeException__New_3(NULL, contentType));
    }
}

}}}
