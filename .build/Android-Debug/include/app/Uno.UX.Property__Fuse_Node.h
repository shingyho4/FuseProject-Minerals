// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_X_PROPERTY__FUSE_NODE_H__
#define __APP_UNO_U_X_PROPERTY__FUSE_NODE_H__

#include <app/Uno.UX.Property.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Uno {
namespace UX {

struct Property__Fuse_Node;

struct Property__Fuse_Node__uType : ::app::Uno::UX::Property__uType
{
};

Property__Fuse_Node__uType* Property__Fuse_Node__typeof();

void Property__Fuse_Node__RetainRestState(Property__Fuse_Node* __this);
void Property__Fuse_Node__Set(Property__Fuse_Node* __this, ::app::Fuse::Node* value);
void Property__Fuse_Node__OnSet(Property__Fuse_Node* __this, ::app::Fuse::Node* value);
::app::Fuse::Node* Property__Fuse_Node__OnGet(Property__Fuse_Node* __this);

struct Property__Fuse_Node : ::app::Uno::UX::Property
{
    bool _hasRestState;
    ::uStrong< ::app::Fuse::Node*> _restState;

    void RetainRestState() { Property__Fuse_Node__RetainRestState(this); }
    void Set(::app::Fuse::Node* value) { Property__Fuse_Node__Set(this, value); }
    void OnSet(::app::Fuse::Node* value) { Property__Fuse_Node__OnSet(this, value); }
    ::app::Fuse::Node* OnGet() { return Property__Fuse_Node__OnGet(this); }
};

}}}


#endif
