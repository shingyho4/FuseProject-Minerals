// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusPredictStrategy.h>
#include <app/Fuse.Input.TraverseNodeExtensions.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Predicate__Fuse_Node.h>

namespace app {
namespace Fuse {
namespace Input {

FocusPredictStrategy__uType* FocusPredictStrategy__typeof()
{
    static FocusPredictStrategy__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FocusPredictStrategy__uType*)::uAllocClassType(sizeof(FocusPredictStrategy__uType), "Fuse.Input.FocusPredictStrategy");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Node* FocusPredictStrategy__Predict(::uStatic* __this, ::app::Fuse::Node* n, int direction)
{
    if (n != NULL)
    {
        if (direction == 1)
        {
            return ::app::Fuse::Input::TraverseNodeExtensions__FindNextChild(NULL, n, ::uNewDelegateNonVirt(::app::Uno::Predicate__Fuse_Node__typeof(), (const void*)::app::Fuse::Input::Focus__CanSetFocus));
        }
        else if (direction == 0)
        {
            return ::app::Fuse::Input::TraverseNodeExtensions__FindPreviousChild(NULL, n, ::uNewDelegateNonVirt(::app::Uno::Predicate__Fuse_Node__typeof(), (const void*)::app::Fuse::Input::Focus__CanSetFocus));
        }
    }

    return NULL;
}

}}}
