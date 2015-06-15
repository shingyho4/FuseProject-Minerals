// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Elements.Cache.h>
#include <app/Fuse.Elements.CacheHelper.h>
#include <app/Fuse.Elements.CacheTile.h>
#include <app/Fuse.ICamera.h>
#include <app/Fuse.ViewContext.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>

namespace app {
namespace Fuse {
namespace Elements {

CacheHelper__uType* CacheHelper__typeof()
{
    static CacheHelper__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (CacheHelper__uType*)::uAllocClassType(sizeof(CacheHelper__uType), "Fuse.Elements.CacheHelper", ::uObject__typeof(), 0, 5);
        type->StrongRefOffsets[0] = offsetof(CacheHelper, Blit_Coord_be52273c_1_1_1);
        type->StrongRefOffsets[1] = offsetof(CacheHelper, Blit_Vertices_be52273c_1_0_7);
        type->StrongRefOffsets[2] = offsetof(CacheHelper, _draw_be52273c._constValues);
        type->StrongRefOffsets[3] = offsetof(CacheHelper, _draw_be52273c._compiledProgram);
        type->StrongRefOffsets[4] = offsetof(CacheHelper, _draw_be52273c._Program);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "Blit_Coord_be52273c_1_1_1";
        type->StrongRefNames[1] = "Blit_Vertices_be52273c_1_0_7";
        type->StrongRefNames[2] = "_draw_be52273c._constValues";
        type->StrongRefNames[3] = "_draw_be52273c._compiledProgram";
        type->StrongRefNames[4] = "_draw_be52273c._Program";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void CacheHelper__Blit(CacheHelper* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Cache* cache, float opacity)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();

    for (array_123 = ::uPtr< ::app::Fuse::Elements::Cache*>(cache)->CacheTiles(), index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Fuse::Elements::CacheTile tile = ::uPtr< ::uArray*>(array_123)->Item< ::app::Fuse::Elements::CacheTile>(index_124);
        {
            __this->_draw_be52273c.BlendEnabled(true);
            __this->_draw_be52273c.BlendDstRgb(3);
            __this->_draw_be52273c.BlendDstAlpha(3);
            __this->_draw_be52273c.DepthTestEnabled(false);
            __this->_draw_be52273c.CullFace(0);
            __this->_draw_be52273c.Use();
            __this->_draw_be52273c.Attrib_1(0, 2, __this->Blit_Coord_be52273c_1_1_1, 8, 0);
            __this->_draw_be52273c.Uniform_9(1, ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(tile.Texture())->Size().X, (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(tile.Texture())->Size().Y), ::uPtr< ::app::Fuse::DrawContext*>(dc)->ResolutionMultiplier()));
            __this->_draw_be52273c.Uniform_14(2, tile._compositMatrix);
            __this->_draw_be52273c.Uniform_14(3, ::app::Fuse::ICamera::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Camera())));
            __this->_draw_be52273c.Uniform_8(4, opacity);
            __this->_draw_be52273c.Sampler_2(5, tile.Texture());
            __this->_draw_be52273c.DrawArrays(::uPtr< ::uArray*>(__this->Blit_Vertices_be52273c_1_0_7)->Length());
        }
    }
}

void CacheHelper__init_DrawCalls(CacheHelper* __this)
{
    ::uArray* array_126;
    array_126 = ::uNewArray(::app::Uno::Float2__typeof(), 6);
    ::uPtr< ::uArray*>(array_126)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_126)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_126)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_126)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_126)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_126)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uArray* Vertices_be52273c_1_0_0 = array_126;
    __this->Blit_Coord_be52273c_1_1_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, Vertices_be52273c_1_0_0), 0);
    __this->Blit_Vertices_be52273c_1_0_7 = Vertices_be52273c_1_0_0;
    __this->_draw_be52273c = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 321), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

void CacheHelper___ObjInit(CacheHelper* __this)
{
    __this->init_DrawCalls();
}

CacheHelper* CacheHelper__New_1(::uStatic* __this)
{
    CacheHelper* inst = (::app::Fuse::Elements::CacheHelper*)::uAllocObject(sizeof(::app::Fuse::Elements::CacheHelper), ::app::Fuse::Elements::CacheHelper__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
