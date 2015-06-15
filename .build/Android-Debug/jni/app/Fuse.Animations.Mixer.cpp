// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.AverageMixer.h>
#include <app/Fuse.Animations.DiscreteMixer.h>
#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ConcurrentCollection__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Animations {

::uStaticStrong< ::uObject*> Mixer___default;
::uStaticStrong< ::uObject*> Mixer___defaultDiscrete;
::uStaticStrong< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*> Mixer__PreMasters;
::uStaticStrong< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*> Mixer__PostMasters;

Mixer__uType* Mixer__typeof()
{
    static Mixer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Mixer__uType*)::uAllocClassType(sizeof(Mixer__uType), "Fuse.Animations.Mixer", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uObject* Mixer__get_Default(::uStatic* __this)
{
    return Mixer___default;
}

::uObject* Mixer__get_DefaultDiscrete(::uStatic* __this)
{
    return Mixer___defaultDiscrete;
}

void Mixer__AddMaster(::uStatic* __this, ::uObject* master, bool postLayout)
{
    ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster* list = postLayout ? Mixer__PostMasters : Mixer__PreMasters;
    int stage = postLayout ? 3 : 1;
    ::uDelegate* act = postLayout ? ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Animations::Mixer__CompletePost) : ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Animations::Mixer__CompletePre);

    if (::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(list)->Count() == 0)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, act, stage);
    }

    ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(list)->Add(master);
}

void Mixer__RemoveMaster(::uStatic* __this, ::uObject* master, bool postLayout)
{
    ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster* list = postLayout ? Mixer__PostMasters : Mixer__PreMasters;
    int stage = postLayout ? 3 : 1;
    ::uDelegate* act = postLayout ? ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Animations::Mixer__CompletePost) : ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Animations::Mixer__CompletePre);
    ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(list)->Remove(master);

    if (list->Count() == 0)
    {
        ::app::Fuse::UpdateManager__RemoveAction(NULL, act, stage);
    }
}

void Mixer__CompletePre(::uStatic* __this)
{
    {
        ::uObject* l = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PreMasters)->DeferLock();

        try
        {
            {
                for (::uObject* enum_123 = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PreMasters)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
                {
                    ::uObject* master = ::app::Uno::Collections::IEnumerator__Fuse_Animations_IMixerMaster::Current(::uPtr< ::uObject*>(enum_123));
                    ::app::Fuse::Animations::IMixerMaster::Complete(::uPtr< ::uObject*>(master));
                }
            }
        }
        catch (const ::uThrowable& __t)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(l));
            throw __t;
        }
        // finally
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(l));
        }
    }
}

void Mixer__CompletePost(::uStatic* __this)
{
    {
        ::uObject* l = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PostMasters)->DeferLock();

        try
        {
            {
                for (::uObject* enum_124 = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PostMasters)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
                {
                    ::uObject* master = ::app::Uno::Collections::IEnumerator__Fuse_Animations_IMixerMaster::Current(::uPtr< ::uObject*>(enum_124));
                    ::app::Fuse::Animations::IMixerMaster::Complete(::uPtr< ::uObject*>(master));
                }
            }
        }
        catch (const ::uThrowable& __t)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(l));
            throw __t;
        }
        // finally
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(l));
        }
    }
}

void Mixer___TypeInit(::uStatic* __this)
{
    Mixer___default = (::uObject*)::app::Fuse::Animations::AverageMixer__New_1(NULL);
    Mixer___defaultDiscrete = (::uObject*)::app::Fuse::Animations::DiscreteMixer__New_1(NULL);
    Mixer__PreMasters = ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster__New_1(NULL);
    Mixer__PostMasters = ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster__New_1(NULL);
}

}}}
