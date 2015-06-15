// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_BINDING__FLOAT4_H__
#define __APP_FUSE_RESOURCES_RESOURCE_BINDING__FLOAT4_H__

#include <app/Fuse.Behavior.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__float4; } } }

namespace app {
namespace Fuse {
namespace Resources {

struct ResourceBinding__float4;

struct ResourceBinding__float4__uType : ::app::Fuse::Behavior__uType
{
};

ResourceBinding__float4__uType* ResourceBinding__float4__typeof();

::app::Uno::UX::Property__float4* ResourceBinding__float4__get_Target(ResourceBinding__float4* __this);
void ResourceBinding__float4__set_Target(ResourceBinding__float4* __this, ::app::Uno::UX::Property__float4* value);
::uString* ResourceBinding__float4__get_Key(ResourceBinding__float4* __this);
void ResourceBinding__float4__set_Key(ResourceBinding__float4* __this, ::uString* value);
void ResourceBinding__float4__OnRooted(ResourceBinding__float4* __this, ::app::Fuse::Node* n);
void ResourceBinding__float4__OnUnrooted(ResourceBinding__float4* __this, ::app::Fuse::Node* n);
void ResourceBinding__float4__OnChanged(ResourceBinding__float4* __this);
bool ResourceBinding__float4__Acceptor(ResourceBinding__float4* __this, ::uObject* obj);
void ResourceBinding__float4___ObjInit_1(ResourceBinding__float4* __this, ::app::Uno::UX::Property__float4* target, ::uString* key);
ResourceBinding__float4* ResourceBinding__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* target, ::uString* key);

struct ResourceBinding__float4 : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Node*> _n;
    ::uStrong< ::app::Uno::UX::Property__float4*> _Target;
    ::uStrong< ::uString*> _Key;

    void OnChanged() { ResourceBinding__float4__OnChanged(this); }
    bool Acceptor(::uObject* obj) { return ResourceBinding__float4__Acceptor(this, obj); }
    void _ObjInit_1(::app::Uno::UX::Property__float4* target, ::uString* key) { ResourceBinding__float4___ObjInit_1(this, target, key); }
    ::app::Uno::UX::Property__float4* Target() { return ResourceBinding__float4__get_Target(this); }
    void Target(::app::Uno::UX::Property__float4* value) { ResourceBinding__float4__set_Target(this, value); }
    ::uString* Key() { return ResourceBinding__float4__get_Key(this); }
    void Key(::uString* value) { ResourceBinding__float4__set_Key(this, value); }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Resources {

}}}


#endif
