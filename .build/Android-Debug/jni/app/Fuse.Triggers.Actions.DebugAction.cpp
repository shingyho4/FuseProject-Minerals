// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.DebugAction.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Double.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

DebugAction__uType* DebugAction__typeof()
{
    static DebugAction__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DebugAction__uType*)::uAllocClassType(sizeof(DebugAction__uType), "Fuse.Triggers.Actions.DebugAction", ::app::Fuse::Triggers::Actions::TriggerAction__typeof(), 0, 1);
        type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))DebugAction__Perform;

        type->StrongRefOffsets[0] = offsetof(DebugAction, _Message);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Message";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* DebugAction__get_Message(DebugAction* __this)
{
    return __this->_Message;
}

void DebugAction__set_Message(DebugAction* __this, ::uString* value)
{
    __this->_Message = value;
}

void DebugAction__Perform(DebugAction* __this, ::app::Fuse::Node* target)
{
    ::uArray* array_123;
    ::uString* msg = ::app::Uno::String__Format(NULL, ::uGetConstString("#{0:D} T{1:F} "), (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), ::app::Fuse::UpdateManager__get_FrameIndex(NULL)), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = ::uBox(::app::Uno::Double__typeof(), ::app::Uno::Time__get_FrameTime(NULL)), array_123));

    if (::app::Uno::String__op_Inequality(NULL, __this->Message(), NULL))
    {
        msg = ::app::Uno::String__op_Addition(NULL, msg, __this->Message());
    }

    ::app::Uno::Diagnostics::Debug__Log(NULL, msg, 1, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Triggers\\0.1.0\\$.uno"), 124);
}

}}}}
