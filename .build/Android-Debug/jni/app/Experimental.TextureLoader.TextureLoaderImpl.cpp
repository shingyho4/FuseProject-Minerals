// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.TextureLoader\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.TextureLoader.Callback.h>
#include <app/Experimental.TextureLoader.TextureLoaderImpl.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <Uno/XliInterop.h>
#include <Xli.h>
#include <XliGL.h>
#include <XliImage.h>

namespace app {
namespace Experimental {
namespace TextureLoader {

TextureLoaderImpl__uType* TextureLoaderImpl__typeof()
{
    static TextureLoaderImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (TextureLoaderImpl__uType*)::uAllocClassType(sizeof(TextureLoaderImpl__uType), "Experimental.TextureLoader.TextureLoaderImpl");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void TextureLoaderImpl__JpegByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* __arr, ::app::Experimental::TextureLoader::Callback* __callback)
{
    try
    {
        Xli::Managed<Xli::BufferPtr> bp = new Xli::BufferPtr(U_BUFFER_PTR(__arr), U_BUFFER_SIZE(__arr), false);
        Xli::Managed<Xli::BufferStream> bs = new Xli::BufferStream(bp, true, false);
        Xli::Managed<Xli::ImageReader> ir = Xli::Jpeg::CreateReader(bs);
        Xli::Managed<Xli::Bitmap> bmp = ir->ReadBitmap();
        Xli::Managed<Xli::Texture> tex = Xli::Texture::Create(bmp);
        uGLTextureInfo info;
        GLuint handle = uCreateGLTexture(tex, true, &info);
    
        __callback->Execute(::app::Uno::Graphics::Texture2D__New_1(NULL, handle, ::app::Uno::Int2__New_2(NULL, info.Width, info.Height), info.MipCount, 0));
    }
    catch (const Xli::Exception &e)
    {
        throw uThrowable(::app::Uno::Exception__New_1(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void TextureLoaderImpl__PngByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* __arr, ::app::Experimental::TextureLoader::Callback* __callback)
{
    try
    {
        Xli::Managed<Xli::BufferPtr> bp = new Xli::BufferPtr(U_BUFFER_PTR(__arr), U_BUFFER_SIZE(__arr), false);
        Xli::Managed<Xli::BufferStream> bs = new Xli::BufferStream(bp, true, false);
        Xli::Managed<Xli::ImageReader> ir = Xli::Png::CreateReader(bs);
        Xli::Managed<Xli::Bitmap> bmp = ir->ReadBitmap();
        Xli::Managed<Xli::Texture> tex = Xli::Texture::Create(bmp);
        uGLTextureInfo info;
        GLuint handle = uCreateGLTexture(tex, true, &info);
    
        __callback->Execute(::app::Uno::Graphics::Texture2D__New_1(NULL, handle, ::app::Uno::Int2__New_2(NULL, info.Width, info.Height), info.MipCount, 0));
    }
    catch (const Xli::Exception &e)
    {
        throw uThrowable(::app::Uno::Exception__New_1(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

}}}
