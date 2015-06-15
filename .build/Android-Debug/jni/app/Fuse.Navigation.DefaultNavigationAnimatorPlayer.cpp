// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.DefaultNavigationAnimatorPlayer.h>
#include <app/Fuse.Navigation.INavigationAnimator.h>
#include <app/Fuse.Navigation.ProgressSpan.h>
#include <app/Fuse.Navigation.ProgressTimer.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__double.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.IList__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>

namespace app {
namespace Fuse {
namespace Navigation {

DefaultNavigationAnimatorPlayer__uType* DefaultNavigationAnimatorPlayer__typeof()
{
    static DefaultNavigationAnimatorPlayer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DefaultNavigationAnimatorPlayer__uType*)::uAllocClassType(sizeof(DefaultNavigationAnimatorPlayer__uType), "Fuse.Navigation.DefaultNavigationAnimatorPlayer", ::uObject__typeof(), 1, 4);
        type->__interface_0.__fp_Update = (void(*)(void*))DefaultNavigationAnimatorPlayer__Update;
        type->__interface_0.__fp_EnsureAtEnd = (void(*)(void*))DefaultNavigationAnimatorPlayer__EnsureAtEnd;

        type->Implements[0] = ::app::Fuse::Navigation::INavigationAnimatorPlayer__typeof();

        type->InterfaceOffsets[0] = offsetof(DefaultNavigationAnimatorPlayer__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(DefaultNavigationAnimatorPlayer, _progressTimer);
        type->StrongRefOffsets[1] = offsetof(DefaultNavigationAnimatorPlayer, _animators);
        type->StrongRefOffsets[2] = offsetof(DefaultNavigationAnimatorPlayer, _progressSetCallback);
        type->StrongRefOffsets[3] = offsetof(DefaultNavigationAnimatorPlayer, _doneCallback);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_progressTimer";
        type->StrongRefNames[1] = "_animators";
        type->StrongRefNames[2] = "_progressSetCallback";
        type->StrongRefNames[3] = "_doneCallback";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void DefaultNavigationAnimatorPlayer__Update(DefaultNavigationAnimatorPlayer* __this)
{
    double prevProgress = ::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->EasedProgress();
    ::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->Update();
    double curProgress = ::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->EasedProgress();
    ::uPtr< ::uDelegate*>(__this->_progressSetCallback)->InvokeVoid< double>(curProgress);

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Navigation_INavigationAnimator::Count(::uPtr< ::uObject*>(__this->_animators)); i++)
    {
        ::app::Fuse::Navigation::INavigationAnimator::Update(::uPtr< ::uObject*>(::app::Uno::Collections::IList__Fuse_Navigation_INavigationAnimator::Item(::uPtr< ::uObject*>(__this->_animators), i)), curProgress, prevProgress);
    }

    if (::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->TimeLeft() == 0.0)
    {
        ::uPtr< ::uDelegate*>(__this->_doneCallback)->InvokeVoid();
    }
}

void DefaultNavigationAnimatorPlayer__EnsureAtEnd(DefaultNavigationAnimatorPlayer* __this)
{
    double endProgress = (::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->Variant() == 0) ? ::uPtr< ::app::Fuse::Navigation::ProgressSpan*>(::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->ProgressSpan())->To() : ::uPtr< ::app::Fuse::Navigation::ProgressSpan*>(::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->ProgressSpan())->From();

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Navigation_INavigationAnimator::Count(::uPtr< ::uObject*>(__this->_animators)); i++)
    {
        ::app::Fuse::Navigation::INavigationAnimator::Update(::uPtr< ::uObject*>(::app::Uno::Collections::IList__Fuse_Navigation_INavigationAnimator::Item(::uPtr< ::uObject*>(__this->_animators), i)), endProgress, endProgress);
    }
}

void DefaultNavigationAnimatorPlayer___ObjInit(DefaultNavigationAnimatorPlayer* __this, ::app::Fuse::Navigation::ProgressTimer* progressTimer, ::uObject* animators, ::uDelegate* progressSetCallback, ::uDelegate* doneCallback)
{
    __this->_progressTimer = progressTimer;
    __this->_animators = animators;
    __this->_progressSetCallback = progressSetCallback;
    __this->_doneCallback = doneCallback;
}

DefaultNavigationAnimatorPlayer* DefaultNavigationAnimatorPlayer__New_1(::uStatic* __this, ::app::Fuse::Navigation::ProgressTimer* progressTimer, ::uObject* animators, ::uDelegate* progressSetCallback, ::uDelegate* doneCallback)
{
    DefaultNavigationAnimatorPlayer* inst = (::app::Fuse::Navigation::DefaultNavigationAnimatorPlayer*)::uAllocObject(sizeof(::app::Fuse::Navigation::DefaultNavigationAnimatorPlayer), ::app::Fuse::Navigation::DefaultNavigationAnimatorPlayer__typeof());
    inst->_ObjInit(progressTimer, animators, progressSetCallback, doneCallback);
    return inst;
}

}}}
