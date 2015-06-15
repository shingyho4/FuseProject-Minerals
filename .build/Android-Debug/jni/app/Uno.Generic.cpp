// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Entities.Material.h>
#include <app/Fuse.Entities.Mesh.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.IFlush.h>
#include <app/Fuse.Internal.DefaultTextRendererImpl_FontKey.h>
#include <app/Fuse.Layouts.Column.h>
#include <app/Fuse.Layouts.Row.h>
#include <app/Fuse.Resources.IAutoDisposable.h>
#include <app/Fuse.Transform.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Char.h>
#include <app/Uno.Content.Fonts.BitmapFont_CharPair.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.GenericEqualsImpl.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Uno {

Generic__uType* Generic__typeof()
{
    static Generic__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Generic__uType*)::uAllocClassType(sizeof(Generic__uType), "Uno.Generic");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool Generic__Equals__float2(::uStatic* __this, ::app::Uno::Float2 left, ::app::Uno::Float2 right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__float2(NULL, left, right);
}

bool Generic__Equals__float3(::uStatic* __this, ::app::Uno::Float3 left, ::app::Uno::Float3 right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__float3(NULL, left, right);
}

bool Generic__Equals__float4(::uStatic* __this, ::app::Uno::Float4 left, ::app::Uno::Float4 right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__float4(NULL, left, right);
}

bool Generic__Equals__int2(::uStatic* __this, ::app::Uno::Int2 left, ::app::Uno::Int2 right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__int2(NULL, left, right);
}

bool Generic__Equals__char(::uStatic* __this, ::uChar left, ::uChar right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__char(NULL, left, right);
}

bool Generic__Equals__string(::uStatic* __this, ::uString* left, ::uString* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__string(NULL, left, right);
}

bool Generic__Equals__framebuffer(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* left, ::app::Uno::Graphics::Framebuffer* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__framebuffer(NULL, left, right);
}

bool Generic__Equals__int(::uStatic* __this, int left, int right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__int(NULL, left, right);
}

bool Generic__Equals__Uno_Type(::uStatic* __this, ::uType* left, ::uType* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Uno_Type(NULL, left, right);
}

bool Generic__Equals__Uno_BundleFile(::uStatic* __this, ::app::Uno::BundleFile* left, ::app::Uno::BundleFile* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Uno_BundleFile(NULL, left, right);
}

bool Generic__Equals__object(::uStatic* __this, ::uObject* left, ::uObject* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__object(NULL, left, right);
}

bool Generic__Equals__Fuse_Drawing_Stroke(::uStatic* __this, ::app::Fuse::Drawing::Stroke* left, ::app::Fuse::Drawing::Stroke* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Drawing_Stroke(NULL, left, right);
}

bool Generic__Equals__Fuse_Font(::uStatic* __this, ::app::Fuse::Font* left, ::app::Fuse::Font* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Font(NULL, left, right);
}

bool Generic__Equals__Fuse_Entities_Material(::uStatic* __this, ::app::Fuse::Entities::Material* left, ::app::Fuse::Entities::Material* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Entities_Material(NULL, left, right);
}

bool Generic__Equals__Fuse_Entities_Mesh(::uStatic* __this, ::app::Fuse::Entities::Mesh* left, ::app::Fuse::Entities::Mesh* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Entities_Mesh(NULL, left, right);
}

bool Generic__Equals__Fuse_Navigation_NavigationEdge(::uStatic* __this, int left, int right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Navigation_NavigationEdge(NULL, left, right);
}

bool Generic__Equals__Fuse_IFlush(::uStatic* __this, ::uObject* left, ::uObject* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_IFlush(NULL, left, right);
}

bool Generic__Equals__Uno_Content_Fonts_BitmapFont_CharPair(::uStatic* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair left, ::app::Uno::Content::Fonts::BitmapFont_CharPair right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Uno_Content_Fonts_BitmapFont_CharPair(NULL, left, right);
}

bool Generic__Equals__Fuse_Internal_DefaultTextRendererImpl_FontKey(::uStatic* __this, ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* left, ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Internal_DefaultTextRendererImpl_FontKey(NULL, left, right);
}

bool Generic__Equals__Uno_EventHandler(::uStatic* __this, ::uDelegate* left, ::uDelegate* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Uno_EventHandler(NULL, left, right);
}

bool Generic__Equals__Fuse_CacheFramebuffer(::uStatic* __this, ::app::Fuse::CacheFramebuffer* left, ::app::Fuse::CacheFramebuffer* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_CacheFramebuffer(NULL, left, right);
}

bool Generic__Equals__Uno_Action(::uStatic* __this, ::uDelegate* left, ::uDelegate* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Uno_Action(NULL, left, right);
}

bool Generic__Equals__Fuse_Resources_IAutoDisposable(::uStatic* __this, ::uObject* left, ::uObject* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Resources_IAutoDisposable(NULL, left, right);
}

bool Generic__Equals__Fuse_Animations_MixerHandle_Fuse_Transform_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* left, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Transform_(NULL, left, right);
}

bool Generic__Equals__Fuse_Elements_Element(::uStatic* __this, ::app::Fuse::Elements::Element* left, ::app::Fuse::Elements::Element* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Elements_Element(NULL, left, right);
}

bool Generic__Equals__Experimental_Net_Http_HttpMessageHandlerRequest(::uStatic* __this, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* left, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Experimental_Net_Http_HttpMessageHandlerRequest(NULL, left, right);
}

bool Generic__Equals__Fuse_Animations_IMixerMaster(::uStatic* __this, ::uObject* left, ::uObject* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Animations_IMixerMaster(NULL, left, right);
}

bool Generic__Equals__Fuse_Behavior(::uStatic* __this, ::app::Fuse::Behavior* left, ::app::Fuse::Behavior* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Behavior(NULL, left, right);
}

bool Generic__Equals__Fuse_Transform(::uStatic* __this, ::app::Fuse::Transform* left, ::app::Fuse::Transform* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Transform(NULL, left, right);
}

bool Generic__Equals__Fuse_Effects_Effect(::uStatic* __this, ::app::Fuse::Effects::Effect* left, ::app::Fuse::Effects::Effect* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Effects_Effect(NULL, left, right);
}

bool Generic__Equals__Fuse_Layouts_Row(::uStatic* __this, ::app::Fuse::Layouts::Row* left, ::app::Fuse::Layouts::Row* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Layouts_Row(NULL, left, right);
}

bool Generic__Equals__Fuse_Layouts_Column(::uStatic* __this, ::app::Fuse::Layouts::Column* left, ::app::Fuse::Layouts::Column* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Layouts_Column(NULL, left, right);
}

bool Generic__Equals__Uno_UX_Resource(::uStatic* __this, ::app::Uno::UX::Resource* left, ::app::Uno::UX::Resource* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Uno_UX_Resource(NULL, left, right);
}

bool Generic__Equals__Fuse_Animations_MixerHandle_float4_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float4* left, ::app::Fuse::Animations::MixerHandle__float4* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float4_(NULL, left, right);
}

bool Generic__Equals__Fuse_Animations_MixerHandle_float_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float* left, ::app::Fuse::Animations::MixerHandle__float* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float_(NULL, left, right);
}

bool Generic__Equals__Fuse_Animations_MixerHandle_bool_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__bool* left, ::app::Fuse::Animations::MixerHandle__bool* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_bool_(NULL, left, right);
}

}}
