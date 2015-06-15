// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_GENERIC_EQUALS_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_GENERIC_EQUALS_IMPL_H__

#include <Uno/Uno.h>
namespace app { namespace Experimental { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__bool; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float4; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Transform; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { namespace Effects { struct Effect; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Entities { struct Material; } } }
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }
namespace app { namespace Fuse { namespace Internal { struct DefaultTextRendererImpl_FontKey; } } }
namespace app { namespace Fuse { namespace Layouts { struct Column; } } }
namespace app { namespace Fuse { namespace Layouts { struct Row; } } }
namespace app { namespace Fuse { struct Behavior; } }
namespace app { namespace Fuse { struct CacheFramebuffer; } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont_CharPair; } } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { namespace UX { struct Resource; } } }
namespace app { namespace Uno { struct BundleFile; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct GenericEqualsImpl__uType : ::uClassType
{
};

GenericEqualsImpl__uType* GenericEqualsImpl__typeof();

bool GenericEqualsImpl__Equals__float2(::uStatic* __this, ::app::Uno::Float2 __left, ::app::Uno::Float2 __right);
bool GenericEqualsImpl__Equals__float3(::uStatic* __this, ::app::Uno::Float3 __left, ::app::Uno::Float3 __right);
bool GenericEqualsImpl__Equals__float4(::uStatic* __this, ::app::Uno::Float4 __left, ::app::Uno::Float4 __right);
bool GenericEqualsImpl__Equals__int2(::uStatic* __this, ::app::Uno::Int2 __left, ::app::Uno::Int2 __right);
bool GenericEqualsImpl__Equals__char(::uStatic* __this, ::uChar __left, ::uChar __right);
bool GenericEqualsImpl__Equals__string(::uStatic* __this, ::uString* __left, ::uString* __right);
bool GenericEqualsImpl__Equals__framebuffer(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* __left, ::app::Uno::Graphics::Framebuffer* __right);
bool GenericEqualsImpl__Equals__int(::uStatic* __this, int __left, int __right);
bool GenericEqualsImpl__Equals__Uno_Type(::uStatic* __this, ::uType* __left, ::uType* __right);
bool GenericEqualsImpl__Equals__Uno_BundleFile(::uStatic* __this, ::app::Uno::BundleFile* __left, ::app::Uno::BundleFile* __right);
bool GenericEqualsImpl__Equals__object(::uStatic* __this, ::uObject* __left, ::uObject* __right);
bool GenericEqualsImpl__Equals__Fuse_Drawing_Stroke(::uStatic* __this, ::app::Fuse::Drawing::Stroke* __left, ::app::Fuse::Drawing::Stroke* __right);
bool GenericEqualsImpl__Equals__Fuse_Font(::uStatic* __this, ::app::Fuse::Font* __left, ::app::Fuse::Font* __right);
bool GenericEqualsImpl__Equals__Fuse_Entities_Material(::uStatic* __this, ::app::Fuse::Entities::Material* __left, ::app::Fuse::Entities::Material* __right);
bool GenericEqualsImpl__Equals__Fuse_Entities_Mesh(::uStatic* __this, ::app::Fuse::Entities::Mesh* __left, ::app::Fuse::Entities::Mesh* __right);
bool GenericEqualsImpl__Equals__Fuse_Navigation_NavigationEdge(::uStatic* __this, int __left, int __right);
bool GenericEqualsImpl__Equals__Fuse_IFlush(::uStatic* __this, ::uObject* __left, ::uObject* __right);
bool GenericEqualsImpl__Equals__Uno_Content_Fonts_BitmapFont_CharPair(::uStatic* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair __left, ::app::Uno::Content::Fonts::BitmapFont_CharPair __right);
bool GenericEqualsImpl__Equals__Fuse_Internal_DefaultTextRendererImpl_FontKey(::uStatic* __this, ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* __left, ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* __right);
bool GenericEqualsImpl__Equals__Uno_EventHandler(::uStatic* __this, ::uDelegate* __left, ::uDelegate* __right);
bool GenericEqualsImpl__Equals__Fuse_CacheFramebuffer(::uStatic* __this, ::app::Fuse::CacheFramebuffer* __left, ::app::Fuse::CacheFramebuffer* __right);
bool GenericEqualsImpl__Equals__Uno_Action(::uStatic* __this, ::uDelegate* __left, ::uDelegate* __right);
bool GenericEqualsImpl__Equals__Fuse_Resources_IAutoDisposable(::uStatic* __this, ::uObject* __left, ::uObject* __right);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Transform_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* __left, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* __right);
bool GenericEqualsImpl__Equals__Fuse_Elements_Element(::uStatic* __this, ::app::Fuse::Elements::Element* __left, ::app::Fuse::Elements::Element* __right);
bool GenericEqualsImpl__Equals__Experimental_Net_Http_HttpMessageHandlerRequest(::uStatic* __this, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* __left, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* __right);
bool GenericEqualsImpl__Equals__Fuse_Animations_IMixerMaster(::uStatic* __this, ::uObject* __left, ::uObject* __right);
bool GenericEqualsImpl__Equals__Fuse_Behavior(::uStatic* __this, ::app::Fuse::Behavior* __left, ::app::Fuse::Behavior* __right);
bool GenericEqualsImpl__Equals__Fuse_Transform(::uStatic* __this, ::app::Fuse::Transform* __left, ::app::Fuse::Transform* __right);
bool GenericEqualsImpl__Equals__Fuse_Effects_Effect(::uStatic* __this, ::app::Fuse::Effects::Effect* __left, ::app::Fuse::Effects::Effect* __right);
bool GenericEqualsImpl__Equals__Fuse_Layouts_Row(::uStatic* __this, ::app::Fuse::Layouts::Row* __left, ::app::Fuse::Layouts::Row* __right);
bool GenericEqualsImpl__Equals__Fuse_Layouts_Column(::uStatic* __this, ::app::Fuse::Layouts::Column* __left, ::app::Fuse::Layouts::Column* __right);
bool GenericEqualsImpl__Equals__Uno_UX_Resource(::uStatic* __this, ::app::Uno::UX::Resource* __left, ::app::Uno::UX::Resource* __right);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float4_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float4* __left, ::app::Fuse::Animations::MixerHandle__float4* __right);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float* __left, ::app::Fuse::Animations::MixerHandle__float* __right);
bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_bool_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__bool* __left, ::app::Fuse::Animations::MixerHandle__bool* __right);

}}}}


#endif
