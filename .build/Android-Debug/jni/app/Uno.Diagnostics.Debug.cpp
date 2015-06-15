// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.AssertionHandler.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.DebugImpl.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Diagnostics {

::uStaticStrong< ::uDelegate*> Debug___assertionHandler;
::uStaticStrong< ::uString*> Debug___indentStr;

Debug__uType* Debug__typeof()
{
    static Debug__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Debug__uType*)::uAllocClassType(sizeof(Debug__uType), "Uno.Diagnostics.Debug");
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Debug__Assert(::uStatic* __this, bool value, ::uString* expression, ::uString* filename, int line, ::uArray* operands)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)Debug___assertionHandler, NULL))
    {
        ::uPtr< ::uDelegate*>(Debug___assertionHandler)->InvokeVoid< bool, ::uString*, ::uString*, int, ::uArray*>(value, expression, filename, line, operands);
    }

    if (!value)
    {
        Debug__EmitLog(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Assertion Failed: '"), expression), ::uGetConstString("' in ")), filename), ::uGetConstString("(")), ::uBox< int>(::app::Uno::Int__typeof(), line)), ::uGetConstString(")")), 3);
    }
}

void Debug__Log(::uStatic* __this, ::uString* message, int type, ::uString* filename, int line)
{
    Debug__EmitLog(NULL, message, type);
}

void Debug__Log_1(::uStatic* __this, ::uObject* message, int type, ::uString* filename, int line)
{
    Debug__EmitLog(NULL, ::app::Uno::Object::ToString(::uPtr< ::uObject*>((message != NULL) ? message : (::uObject*)::app::Uno::String__Empty)), type);
}

void Debug__Log_2(::uStatic* __this, ::uString* message, int type)
{
    Debug__EmitLog(NULL, message, type);
}

void Debug__EmitLog(::uStatic* __this, ::uString* message, int type)
{
    ::app::Uno::Runtime::Implementation::DebugImpl__Log(NULL, ::app::Uno::String__op_Addition(NULL, Debug___indentStr, message), type);
}

void Debug___TypeInit(::uStatic* __this)
{
    Debug___indentStr = ::uGetConstString("");
}

}}}
