// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\UX\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.UX.Property__Fuse_Node.h>

namespace app {
namespace Uno {
namespace UX {

Property__Fuse_Node__uType* Property__Fuse_Node__typeof()
{
    static Property__Fuse_Node__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Property__Fuse_Node__uType*)::uAllocClassType(sizeof(Property__Fuse_Node__uType), "Uno.UX.Property<Fuse.Node>", ::app::Uno::UX::Property__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Property__Fuse_Node, _restState);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_restState";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Property__Fuse_Node__RetainRestState(Property__Fuse_Node* __this)
{
    if (!__this->_hasRestState)
    {
        ::app::Fuse::Node* v = __this->OnGet();
        __this->_restState = v;
        __this->_hasRestState = true;
    }
}

void Property__Fuse_Node__Set(Property__Fuse_Node* __this, ::app::Fuse::Node* value)
{
    __this->RetainRestState();
    __this->OnSet(value);
}

void Property__Fuse_Node__OnSet(Property__Fuse_Node* __this, ::app::Fuse::Node* value)
{
    U_THROW(::app::Uno::Exception__New_2(NULL));
}

::app::Fuse::Node* Property__Fuse_Node__OnGet(Property__Fuse_Node* __this)
{
    U_THROW(::app::Uno::Exception__New_2(NULL));
}

}}}
