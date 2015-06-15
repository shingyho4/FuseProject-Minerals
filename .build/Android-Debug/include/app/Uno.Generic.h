// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GENERIC_H__
#define __APP_UNO_GENERIC_H__

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

struct Generic__uType : ::uClassType
{
};

Generic__uType* Generic__typeof();

bool Generic__Equals__float2(::uStatic* __this, ::app::Uno::Float2 left, ::app::Uno::Float2 right);
bool Generic__Equals__float3(::uStatic* __this, ::app::Uno::Float3 left, ::app::Uno::Float3 right);
bool Generic__Equals__float4(::uStatic* __this, ::app::Uno::Float4 left, ::app::Uno::Float4 right);
bool Generic__Equals__int2(::uStatic* __this, ::app::Uno::Int2 left, ::app::Uno::Int2 right);
bool Generic__Equals__char(::uStatic* __this, ::uChar left, ::uChar right);
bool Generic__Equals__string(::uStatic* __this, ::uString* left, ::uString* right);
bool Generic__Equals__framebuffer(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* left, ::app::Uno::Graphics::Framebuffer* right);
bool Generic__Equals__int(::uStatic* __this, int left, int right);
bool Generic__Equals__Uno_Type(::uStatic* __this, ::uType* left, ::uType* right);
bool Generic__Equals__Uno_BundleFile(::uStatic* __this, ::app::Uno::BundleFile* left, ::app::Uno::BundleFile* right);
bool Generic__Equals__object(::uStatic* __this, ::uObject* left, ::uObject* right);
bool Generic__Equals__Fuse_Drawing_Stroke(::uStatic* __this, ::app::Fuse::Drawing::Stroke* left, ::app::Fuse::Drawing::Stroke* right);
bool Generic__Equals__Fuse_Font(::uStatic* __this, ::app::Fuse::Font* left, ::app::Fuse::Font* right);
bool Generic__Equals__Fuse_Entities_Material(::uStatic* __this, ::app::Fuse::Entities::Material* left, ::app::Fuse::Entities::Material* right);
bool Generic__Equals__Fuse_Entities_Mesh(::uStatic* __this, ::app::Fuse::Entities::Mesh* left, ::app::Fuse::Entities::Mesh* right);
bool Generic__Equals__Fuse_Navigation_NavigationEdge(::uStatic* __this, int left, int right);
bool Generic__Equals__Fuse_IFlush(::uStatic* __this, ::uObject* left, ::uObject* right);
bool Generic__Equals__Uno_Content_Fonts_BitmapFont_CharPair(::uStatic* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair left, ::app::Uno::Content::Fonts::BitmapFont_CharPair right);
bool Generic__Equals__Fuse_Internal_DefaultTextRendererImpl_FontKey(::uStatic* __this, ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* left, ::app::Fuse::Internal::DefaultTextRendererImpl_FontKey* right);
bool Generic__Equals__Uno_EventHandler(::uStatic* __this, ::uDelegate* left, ::uDelegate* right);
bool Generic__Equals__Fuse_CacheFramebuffer(::uStatic* __this, ::app::Fuse::CacheFramebuffer* left, ::app::Fuse::CacheFramebuffer* right);
bool Generic__Equals__Uno_Action(::uStatic* __this, ::uDelegate* left, ::uDelegate* right);
bool Generic__Equals__Fuse_Resources_IAutoDisposable(::uStatic* __this, ::uObject* left, ::uObject* right);
bool Generic__Equals__Fuse_Animations_MixerHandle_Fuse_Transform_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* left, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* right);
bool Generic__Equals__Fuse_Elements_Element(::uStatic* __this, ::app::Fuse::Elements::Element* left, ::app::Fuse::Elements::Element* right);
bool Generic__Equals__Experimental_Net_Http_HttpMessageHandlerRequest(::uStatic* __this, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* left, ::app::Experimental::Net::Http::HttpMessageHandlerRequest* right);
bool Generic__Equals__Fuse_Animations_IMixerMaster(::uStatic* __this, ::uObject* left, ::uObject* right);
bool Generic__Equals__Fuse_Behavior(::uStatic* __this, ::app::Fuse::Behavior* left, ::app::Fuse::Behavior* right);
bool Generic__Equals__Fuse_Transform(::uStatic* __this, ::app::Fuse::Transform* left, ::app::Fuse::Transform* right);
bool Generic__Equals__Fuse_Effects_Effect(::uStatic* __this, ::app::Fuse::Effects::Effect* left, ::app::Fuse::Effects::Effect* right);
bool Generic__Equals__Fuse_Layouts_Row(::uStatic* __this, ::app::Fuse::Layouts::Row* left, ::app::Fuse::Layouts::Row* right);
bool Generic__Equals__Fuse_Layouts_Column(::uStatic* __this, ::app::Fuse::Layouts::Column* left, ::app::Fuse::Layouts::Column* right);
bool Generic__Equals__Uno_UX_Resource(::uStatic* __this, ::app::Uno::UX::Resource* left, ::app::Uno::UX::Resource* right);
bool Generic__Equals__Fuse_Animations_MixerHandle_float4_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float4* left, ::app::Fuse::Animations::MixerHandle__float4* right);
bool Generic__Equals__Fuse_Animations_MixerHandle_float_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float* left, ::app::Fuse::Animations::MixerHandle__float* right);
bool Generic__Equals__Fuse_Animations_MixerHandle_bool_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__bool* left, ::app::Fuse::Animations::MixerHandle__bool* right);

}}


#endif
