// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Resources.DisposalManager.h>
#include <app/Fuse.Resources.IAutoDisposable.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Resources_IAutoDisposable.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Resources {

::uStaticStrong< ::app::Uno::Collections::List__Fuse_Resources_IAutoDisposable*> DisposalManager___items;
bool DisposalManager___actionAdded;

DisposalManager__uType* DisposalManager__typeof()
{
    static DisposalManager__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DisposalManager__uType*)::uAllocClassType(sizeof(DisposalManager__uType), "Fuse.Resources.DisposalManager");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void DisposalManager__Add(::uStatic* __this, ::uObject* item)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IAutoDisposable*>(DisposalManager___items)->Add(item);
    DisposalManager__VerifyAttach(NULL);
}

void DisposalManager__Remove(::uStatic* __this, ::uObject* item)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IAutoDisposable*>(DisposalManager___items)->Remove(item);
    DisposalManager__VerifyAttach(NULL);
}

void DisposalManager__VerifyAttach(::uStatic* __this)
{
    bool on = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IAutoDisposable*>(DisposalManager___items)->Count() > 0;

    if (on == DisposalManager___actionAdded)
    {
        return;
    }

    if (on)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Resources::DisposalManager__Update), 0);
    }
    else
    {
        ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Resources::DisposalManager__Update), 0);
    }

    DisposalManager___actionAdded = on;
}

void DisposalManager__Update(::uStatic* __this)
{
    for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IAutoDisposable*>(DisposalManager___items)->Count() - 1; i >= 0; --i)
    {
        ::uObject* item = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IAutoDisposable*>(DisposalManager___items)->Item(i);

        if (!::app::Fuse::Resources::IAutoDisposable::ShouldDispose(::uPtr< ::uObject*>(item)))
        {
            continue;
        }

        ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_IAutoDisposable*>(DisposalManager___items)->RemoveAt(i);
        ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(item));
        break;
    }
}

void DisposalManager___TypeInit(::uStatic* __this)
{
    DisposalManager___items = ::app::Uno::Collections::List__Fuse_Resources_IAutoDisposable__New_1(NULL);
}

}}}
