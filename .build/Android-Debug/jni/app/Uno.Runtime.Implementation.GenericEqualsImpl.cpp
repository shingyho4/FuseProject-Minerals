// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
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
namespace Runtime {
namespace Implementation {

GenericEqualsImpl__uType* GenericEqualsImpl__typeof()
{
    static GenericEqualsImpl__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (GenericEqualsImpl__uType*)::uAllocClassType(sizeof(GenericEqualsImpl__uType), "Uno.Runtime.Implementation.GenericEqualsImpl");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool GenericEqualsImpl__Equals__float2(::uStatic* __this, ::app::Uno::Float2 __left, ::app::Uno::Float2 __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__float3(::uStatic* __this, ::app::Uno::Float3 __left, ::app::Uno::Float3 __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__float4(::uStatic* __this, ::app::Uno::Float4 __left, ::app::Uno::Float4 __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__int2(::uStatic* __this, ::app::Uno::Int2 __left, ::app::Uno::Int2 __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__char(::uStatic* __this, ::uChar __left, ::uChar __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__string(::uStatic* __this, ::uString* __left, ::uString* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__framebuffer(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* __left, ::app::Uno::Graphics::Framebuffer* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__int(::uStatic* __this, int __left, int __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Uno_Type(::uStatic* __this, ::uType* __left, ::uType* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Uno_BundleFile(::uStatic* __this, ::app::Uno::BundleFile* __left, ::app::Uno::BundleFile* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__object(::uStatic* __this, ::uObject* __left, ::uObject* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Drawing_Stroke(::uStatic* __this, ::app::Fuse::Drawing::Stroke* __left, ::app::Fuse::Drawing::Stroke* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Font(::uStatic* __this, ::app::Fuse::Font* __left, ::app::Fuse::Font* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Entities_Material(::uStatic* __this, ::app::Fuse::Entities::Material* __left, ::app::Fuse::Entities::Material* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Entities_Mesh(::uStatic* __this, ::app::Fuse::Entities::Mesh* __left, ::app::Fuse::Entities::Mesh* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Navigation_NavigationEdge(::uStatic* __this, int __left, int __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_IFlush(::uStatic* __this, ::uObject* __left, ::uObject* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Uno_Content_Fonts_BitmapFont_CharPair(::uStatic* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair __left, ::app::Uno::Content::Fonts::BitmapFont_CharPair __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Internal_DefaultTextRendererImpl_FontKey(::uStatic* __this, ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* __left, ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Uno_EventHandler(::uStatic* __this, ::uDelegate* __left, ::uDelegate* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_CacheFramebuffer(::uStatic* __this, ::app::Fuse::CacheFramebuffer* __left, ::app::Fuse::CacheFramebuffer* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Uno_Action(::uStatic* __this, ::uDelegate* __left, ::uDelegate* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Resources_IAutoDisposable(::uStatic* __this, ::uObject* __left, ::uObject* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Transform_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* __left, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Elements_Element(::uStatic* __this, ::app::Fuse::Elements::Element* __left, ::app::Fuse::Elements::Element* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Experimental_Net_Http_HttpMessageHandlerRequest(::uStatic* __this, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* __left, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Animations_IMixerMaster(::uStatic* __this, ::uObject* __left, ::uObject* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Behavior(::uStatic* __this, ::app::Fuse::Behavior* __left, ::app::Fuse::Behavior* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Transform(::uStatic* __this, ::app::Fuse::Transform* __left, ::app::Fuse::Transform* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Effects_Effect(::uStatic* __this, ::app::Fuse::Effects::Effect* __left, ::app::Fuse::Effects::Effect* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Layouts_Row(::uStatic* __this, ::app::Fuse::Layouts::Row* __left, ::app::Fuse::Layouts::Row* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Layouts_Column(::uStatic* __this, ::app::Fuse::Layouts::Column* __left, ::app::Fuse::Layouts::Column* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Uno_UX_Resource(::uStatic* __this, ::app::Uno::UX::Resource* __left, ::app::Uno::UX::Resource* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float4_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float4* __left, ::app::Fuse::Animations::MixerHandle__float4* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float* __left, ::app::Fuse::Animations::MixerHandle__float* __right)
{
    return ::uGenericEquals(__left, __right);
}

bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_bool_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__bool* __left, ::app::Fuse::Animations::MixerHandle__bool* __right)
{
    return ::uGenericEquals(__left, __right);
}

}}}}
