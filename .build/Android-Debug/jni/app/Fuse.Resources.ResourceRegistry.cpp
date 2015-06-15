// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.ResourceRegistry.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_Uno_Action_.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Action.h>
#include <app/Uno.Exception.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Resources {

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*> ResourceRegistry___handlers;

ResourceRegistry__uType* ResourceRegistry__typeof()
{
    static ResourceRegistry__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (ResourceRegistry__uType*)::uAllocClassType(sizeof(ResourceRegistry__uType), "Fuse.Resources.ResourceRegistry");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void ResourceRegistry__AddResourceChangedHandler(::uStatic* __this, ::uString* key, ::uDelegate* handler)
{
    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(ResourceRegistry___handlers)->ContainsKey(key))
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(ResourceRegistry___handlers)->Add(key, ::app::Uno::Collections::List__Uno_Action__New_1(NULL));
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(ResourceRegistry___handlers)->Item(key))->Add(handler);
}

void ResourceRegistry__RemoveResourceChangedHandler(::uStatic* __this, ::uString* key, ::uDelegate* handler)
{
    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(ResourceRegistry___handlers)->ContainsKey(key))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL));
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(ResourceRegistry___handlers)->Item(key))->Remove(handler);
}

void ResourceRegistry__NotifyResourceChanged(::uStatic* __this, ::uString* key)
{
    ::app::Uno::Collections::List__Uno_Action* list;

    if (::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action_*>(ResourceRegistry___handlers)->TryGetValue(key, &list))
    {
        for (::app::Uno::Collections::List1_Enumerator__Uno_Action enum_123 = ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(list)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::uDelegate* h = enum_123.Current();
            ::uPtr< ::uDelegate*>(h)->InvokeVoid();
        }
    }
}

void ResourceRegistry___TypeInit(::uStatic* __this)
{
    ResourceRegistry___handlers = ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action___New_1(NULL);
}

}}}
