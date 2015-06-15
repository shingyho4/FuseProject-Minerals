// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Targets\CPlusPlus\Source\Uno\XliInterop.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

/**
    \defgroup Xli Xli interop
    \brief Interoperation with platform abstraction layer

    \defgroup XliStrings String conversion
    \brief Xli <=> Uno string conversion functions
    \ingroup Xli

    \defgroup XliVectors Vector conversion
    \brief Xli <=> Uno vector conversion functions
    \ingroup Xli

    \defgroup XliBuffers Buffer conversion
    \brief Xli => Uno Buffer conversion functions
    \ingroup Xli

    \defgroup XliTextures Texture loader
    \brief Texture loader with GL support
    \ingroup Xli
*/

#include <app/Uno.Byte.h>
#include <app/Uno.Buffer.h>
#include <Uno/XliInterop.h>
#include <Xli/Buffer.h>
#include <Xli/Path.h>
#include <Xli/Unicode.h>
#include <XliImage.h>
#include <XliGL.h>
#include <XliZip.h>

Xli::String uStringToXliString(uString* ustr)
{
    return ustr ? Xli::Unicode::Utf16To8(ustr->_ptr, ustr->_len) : "";
}

uString* uStringFromXliString(const Xli::String& str)
{
    return uNewStringUtf8(str.Ptr(), str.Length());
}

::app::Uno::Int2 uInt2FromXliVector2i(const Xli::Vector2i& vec)
{
    return *(::app::Uno::Int2*)&vec;
}

Xli::Vector2i uInt2ToXliVector2i(const ::app::Uno::Int2& vec)
{
    return *(Xli::Vector2i*)&vec;
}

::app::Uno::Float2 uFloat2FromXliVector2(const Xli::Vector2& vec)
{
    return *(::app::Uno::Float2*)&vec;
}

Xli::Vector2 uFloat2ToXliVector2(const ::app::Uno::Float2& vec)
{
    return *(Xli::Vector2*)&vec;
}

::app::Uno::Buffer* uBufferFromXliDataAccessor(const Xli::DataAccessor* data)
{
    if (!data)
    {
        uThrowable::ThrowNullReference(XLI_FUNCTION, XLI_LINE);
        return NULL;
    }

    uArray* arr = uNewArray(::app::Uno::Byte__typeof(), data->GetSizeInBytes(), data->GetPtr());
    return ::app::Uno::Buffer__New_1(NULL, arr, 0, arr->_len, true);
}

Xli::Texture* uLoadXliTexture(const Xli::String& filename, Xli::Stream* stream)
{
    Xli::String fnUpper = filename.ToUpper();

    if (fnUpper.EndsWith(".GZ"))
    {
        Xli::Managed<Xli::Stream> gz = Xli::GZip::CreateReader(stream);
        return uLoadXliTexture(filename.Substring(0, filename.Length() - 3), gz);
    }

    if (fnUpper.EndsWith(".KTX"))
    {
        return Xli::Ktx::Load(stream);
    }

    Xli::Managed<Xli::ImageReader> ir;

    if (fnUpper.EndsWith(".PNG"))
        ir = Xli::Png::CreateReader(stream);
    else if (fnUpper.EndsWith(".JPG") || fnUpper.EndsWith(".JPEG"))
        ir = Xli::Jpeg::CreateReader(stream);
    else
        XLI_THROW("Unsupported texture extension '" + Xli::Path::GetExtension(filename) + "'");

    Xli::Managed<Xli::Bitmap> bmp = ir->ReadBitmap();
    return Xli::Texture::Create(bmp);
}

static bool TryGetGLFormat(Xli::Format format, GLenum& glFormat, GLenum& glType)
{
    switch (format)
    {
    case Xli::FormatRGBA_8_8_8_8_UInt_Normalize:
        glFormat = GL_RGBA;
        glType = GL_UNSIGNED_BYTE;
        return true;

    case Xli::FormatRGB_8_8_8_UInt_Normalize:
        glFormat = GL_RGB;
        glType = GL_UNSIGNED_BYTE;
        return true;

    case Xli::FormatR_8_UInt_Normalize:
    case Xli::FormatL_8_UInt_Normalize:
        glFormat = GL_LUMINANCE;
        glType = GL_UNSIGNED_BYTE;
        return true;

    case Xli::FormatRG_8_8_UInt_Normalize:
    case Xli::FormatLA_8_8_UInt_Normalize:
        glFormat = GL_LUMINANCE_ALPHA;
        glType = GL_UNSIGNED_BYTE;
        return true;

    default:
        return false;
    }
}

unsigned int uCreateGLTexture(Xli::Texture* texData, bool generateMips, uGLTextureInfo* outInfo)
{
    GLuint texHandle;
    glGenTextures(1, &texHandle);

    int width = texData->Faces[0].MipLevels[0]->GetWidth();
    int height = texData->Faces[0].MipLevels[0]->GetHeight();
    int mipCount = texData->Faces[0].MipLevels.Length();
    int depth = 1;

    GLenum texTarget =
        texData->Type == Xli::TextureTypeCube ?
            GL_TEXTURE_CUBE_MAP :
            GL_TEXTURE_2D;

    glBindTexture(texTarget, texHandle);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glPixelStorei(GL_PACK_ALIGNMENT, 1);

    bool compressed = false;

    for (int i = 0; i < texData->Faces.Length(); i++)
    {
        GLenum texFace =
            texTarget == GL_TEXTURE_CUBE_MAP ?
                GL_TEXTURE_CUBE_MAP_POSITIVE_X + i :
                GL_TEXTURE_2D;

        for (int j = 0; j < texData->Faces[i].MipLevels.Length(); j++)
        {
            Xli::Image* mip = texData->Faces[i].MipLevels[j];

            switch (mip->GetFormat())
            {
#ifdef GL_ETC1_RGB8_OES

            case Xli::FormatCompressedRGB_ETC1:
                glCompressedTexImage2D(texFace, j, GL_ETC1_RGB8_OES, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif
#ifdef GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG

            case Xli::FormatCompressedRGB_PVRTC_4BPP:
                glCompressedTexImage2D(texFace, j, GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif
#ifdef GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG

            case Xli::FormatCompressedRGB_PVRTC_2BPP:
                glCompressedTexImage2D(texFace, j, GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif
#ifdef GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG

            case Xli::FormatCompressedRGBA_PVRTC_4BPP:
                glCompressedTexImage2D(texFace, j, GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif
#ifdef GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG

            case Xli::FormatCompressedRGBA_PVRTC_2BPP:
                glCompressedTexImage2D(texFace, j, GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif

            default:
                {
                    Xli::Managed<Xli::Bitmap> bmp = mip->ToBitmap();

                    GLenum glFormat, glType;
                    if (!TryGetGLFormat(bmp->GetFormat(), glFormat, glType))
                        XLI_THROW("Unsupported texture format: " + Xli::FormatInfo::ToString(bmp->GetFormat()));

                    glTexImage2D(texFace, j, glFormat, bmp->GetWidth(), bmp->GetHeight(), 0, glFormat, glType, bmp->GetPtr());
                }

                break;

            // Silence 'switch has default but no cases' warning
            case Xli::FormatUnspecified:
                break;
            }
        }
    }

    if (generateMips && !compressed)
    {
        glGenerateMipmap(texTarget);
        GLenum err = glGetError();

        if (err == GL_NO_ERROR)
        {
            int w = width, h = height;

            while (w > 1 || h > 1)
            {
                w /= 2;
                h /= 2;
                mipCount++;
            }
        }
    }

    if (outInfo)
    {
        outInfo->GLTarget = texTarget;
        outInfo->Width = width;
        outInfo->Height = height;
        outInfo->Depth = depth;
        outInfo->MipCount = mipCount;
    }

    //XLI_GL_CHECK_ERROR;
    return texHandle;
}
