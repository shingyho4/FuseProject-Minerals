// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.UpdateListener.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_UpdateListener.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_UpdateListener.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {

::uStaticStrong< ::app::Uno::Collections::List__Fuse_UpdateListener*> UpdateManager__listeners;
bool UpdateManager__hasListenersRemoved;
::uStaticStrong< ::app::Uno::Collections::List__Fuse_UpdateListener*> UpdateManager__onces;
::uStaticStrong< ::app::Uno::Collections::List__Fuse_UpdateListener*> UpdateManager__oncesPending;
int UpdateManager___frameIndex;

UpdateManager__uType* UpdateManager__typeof()
{
    static UpdateManager__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (UpdateManager__uType*)::uAllocClassType(sizeof(UpdateManager__uType), "Fuse.UpdateManager");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int UpdateManager__get_FrameIndex(::uStatic* __this)
{
    return UpdateManager___frameIndex;
}

void UpdateManager__AddAction(::uStatic* __this, ::uDelegate* pu, int stage)
{
    ::app::Fuse::UpdateListener* us = ::app::Fuse::UpdateListener__New_1(NULL);
    ::uPtr< ::app::Fuse::UpdateListener*>(us)->action = pu;
    us->stage = stage;
    ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(UpdateManager__listeners)->Add(us);
}

bool UpdateManager__RemoveFrom(::uStatic* __this, ::app::Uno::Collections::List__Fuse_UpdateListener* list, ::uDelegate* action, int stage)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(list)->Count(); ++i)
    {
        if (((stage == ::uPtr< ::app::Fuse::UpdateListener*>(::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(list)->Item(i))->stage) && ::app::Uno::Object__Equals_1(NULL, (::uObject*)action, (::uObject*)::uPtr< ::app::Fuse::UpdateListener*>(::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(list)->Item(i))->action)) && !::uPtr< ::app::Fuse::UpdateListener*>(::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(list)->Item(i))->removed)
        {
            ::uPtr< ::app::Fuse::UpdateListener*>(::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(list)->Item(i))->removed = true;
            return true;
        }
    }

    return false;
}

void UpdateManager__RemoveAction(::uStatic* __this, ::uDelegate* pu, int stage)
{
    if (!UpdateManager__RemoveFrom(NULL, UpdateManager__listeners, pu, stage))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("no Action found to remove")));
    }

    UpdateManager__hasListenersRemoved = true;
}

void UpdateManager__AddOnceAction(::uStatic* __this, ::uDelegate* pu, int stage)
{
    ::app::Fuse::UpdateListener* us = ::app::Fuse::UpdateListener__New_1(NULL);
    ::uPtr< ::app::Fuse::UpdateListener*>(us)->action = pu;
    us->stage = stage;
    ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(UpdateManager__oncesPending)->Add(us);
}

void UpdateManager__PerformNextFrame(::uStatic* __this, ::uDelegate* pu, int stage)
{
    ::app::Fuse::UpdateListener* us = ::app::Fuse::UpdateListener__New_1(NULL);
    ::uPtr< ::app::Fuse::UpdateListener*>(us)->action = pu;
    us->stage = stage;
    us->defer = true;
    ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(UpdateManager__oncesPending)->Add(us);
}

void UpdateManager__IncreaseFrameIndex(::uStatic* __this)
{
    UpdateManager___frameIndex++;
}

void UpdateManager__Update(::uStatic* __this)
{
    UpdateManager__Update_1(NULL, 0);
    UpdateManager__Update_1(NULL, 1);
    UpdateManager__Update_1(NULL, 2);
    UpdateManager__Update_1(NULL, 3);
    ::app::Uno::Collections::List__Fuse_UpdateListener* t = UpdateManager__onces;
    UpdateManager__onces = UpdateManager__oncesPending;
    UpdateManager__oncesPending = t;
    ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(UpdateManager__oncesPending)->Clear();

    if (UpdateManager__hasListenersRemoved)
    {
        for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(UpdateManager__listeners)->Count() - 1; i >= 0; --i)
        {
            if (::uPtr< ::app::Fuse::UpdateListener*>(::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(UpdateManager__listeners)->Item(i))->removed)
            {
                ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(UpdateManager__listeners)->RemoveAt(i);
            }
        }
    }
}

void UpdateManager__Update_1(::uStatic* __this, int stage)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(UpdateManager__onces)->Count() > 0)
    {
        for (::app::Uno::Collections::List1_Enumerator__Fuse_UpdateListener enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(UpdateManager__onces)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::UpdateListener* ul = enum_123.Current();

            if (::uPtr< ::app::Fuse::UpdateListener*>(ul)->defer)
            {
                ::uPtr< ::app::Fuse::UpdateListener*>(ul)->defer = false;
                ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(UpdateManager__oncesPending)->Add(ul);
            }
            else if (::uPtr< ::app::Fuse::UpdateListener*>(ul)->stage == stage)
            {
                ::uPtr< ::app::Fuse::UpdateListener*>(ul)->Invoke();
            }
        }
    }

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(UpdateManager__listeners)->Count(); ++i)
    {
        ::app::Fuse::UpdateListener* ul = ::uPtr< ::app::Uno::Collections::List__Fuse_UpdateListener*>(UpdateManager__listeners)->Item(i);

        if (::uPtr< ::app::Fuse::UpdateListener*>(ul)->stage == stage)
        {
            ::uPtr< ::app::Fuse::UpdateListener*>(ul)->Invoke();
        }
    }
}

void UpdateManager___TypeInit(::uStatic* __this)
{
    UpdateManager__listeners = ::app::Uno::Collections::List__Fuse_UpdateListener__New_1(NULL);
    UpdateManager__onces = ::app::Uno::Collections::List__Fuse_UpdateListener__New_1(NULL);
    UpdateManager__oncesPending = ::app::Uno::Collections::List__Fuse_UpdateListener__New_1(NULL);
}

}}
