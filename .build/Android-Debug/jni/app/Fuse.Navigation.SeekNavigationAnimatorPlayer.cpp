// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Navigation.INavigationAnimator.h>
#include <app/Fuse.Navigation.SeekNavigationAnimatorPlayer.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.IList__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Double.h>
#include <app/Uno.Func__double.h>
#include <app/Uno.Int.h>
#include <app/Uno.NotImplementedException.h>

namespace app {
namespace Fuse {
namespace Navigation {

SeekNavigationAnimatorPlayer__uType* SeekNavigationAnimatorPlayer__typeof()
{
    static SeekNavigationAnimatorPlayer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (SeekNavigationAnimatorPlayer__uType*)::uAllocClassType(sizeof(SeekNavigationAnimatorPlayer__uType), "Fuse.Navigation.SeekNavigationAnimatorPlayer", ::uObject__typeof(), 1, 2);
        type->__interface_0.__fp_Update = (void(*)(void*))SeekNavigationAnimatorPlayer__Update;
        type->__interface_0.__fp_EnsureAtEnd = (void(*)(void*))SeekNavigationAnimatorPlayer__EnsureAtEnd;

        type->Implements[0] = ::app::Fuse::Navigation::INavigationAnimatorPlayer__typeof();

        type->InterfaceOffsets[0] = offsetof(SeekNavigationAnimatorPlayer__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(SeekNavigationAnimatorPlayer, _animators);
        type->StrongRefOffsets[1] = offsetof(SeekNavigationAnimatorPlayer, _getProgress);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_animators";
        type->StrongRefNames[1] = "_getProgress";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void SeekNavigationAnimatorPlayer__Update(SeekNavigationAnimatorPlayer* __this)
{
    double progress = ::uPtr< ::uDelegate*>(__this->_getProgress)->Invoke< double>();

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Navigation_INavigationAnimator::Count(::uPtr< ::uObject*>(__this->_animators)); ++i)
    {
        ::app::Fuse::Navigation::INavigationAnimator::Update(::uPtr< ::uObject*>(::app::Uno::Collections::IList__Fuse_Navigation_INavigationAnimator::Item(::uPtr< ::uObject*>(__this->_animators), i)), progress, __this->_prevProgress);
    }

    __this->_prevProgress = progress;
}

void SeekNavigationAnimatorPlayer__EnsureAtEnd(SeekNavigationAnimatorPlayer* __this)
{
    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

void SeekNavigationAnimatorPlayer___ObjInit(SeekNavigationAnimatorPlayer* __this, ::uObject* animators, ::uDelegate* getProgress)
{
    __this->_animators = animators;
    __this->_getProgress = getProgress;
    __this->_prevProgress = ::uPtr< ::uDelegate*>(__this->_getProgress)->Invoke< double>();
}

SeekNavigationAnimatorPlayer* SeekNavigationAnimatorPlayer__New_1(::uStatic* __this, ::uObject* animators, ::uDelegate* getProgress)
{
    SeekNavigationAnimatorPlayer* inst = (::app::Fuse::Navigation::SeekNavigationAnimatorPlayer*)::uAllocObject(sizeof(::app::Fuse::Navigation::SeekNavigationAnimatorPlayer), ::app::Fuse::Navigation::SeekNavigationAnimatorPlayer__typeof());
    inst->_ObjInit(animators, getProgress);
    return inst;
}

}}}
