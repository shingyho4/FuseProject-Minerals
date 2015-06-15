// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.StringCache_Cache.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {

StringCache_Cache__uType* StringCache_Cache__typeof()
{
    static StringCache_Cache__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (StringCache_Cache__uType*)::uAllocClassType(sizeof(StringCache_Cache__uType), "Fuse.StringCache.Cache", ::uObject__typeof(), 0, 1);
        type->__fp_GetHashCode = (int(*)(::uObject*))StringCache_Cache__GetHashCode;

        type->StrongRefOffsets[0] = offsetof(StringCache_Cache, _Value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_Value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::uString* StringCache_Cache__get_Value(StringCache_Cache* __this)
{
    return __this->_Value;
}

void StringCache_Cache__set_Value(StringCache_Cache* __this, ::uString* value)
{
    __this->_Value = value;
}

double StringCache_Cache__get_LastTimeUsed(StringCache_Cache* __this)
{
    return __this->_LastTimeUsed;
}

void StringCache_Cache__set_LastTimeUsed(StringCache_Cache* __this, double value)
{
    __this->_LastTimeUsed = value;
}

int StringCache_Cache__get_StringHash(StringCache_Cache* __this)
{
    return __this->_StringHash;
}

void StringCache_Cache__set_StringHash(StringCache_Cache* __this, int value)
{
    __this->_StringHash = value;
}

double StringCache_Cache__get_IdleTime(StringCache_Cache* __this)
{
    return ::app::Uno::Diagnostics::Clock__GetSeconds(NULL) - __this->LastTimeUsed();
}

int StringCache_Cache__GetHashCode(StringCache_Cache* __this)
{
    return ::uPtr< ::uString*>(__this->Value())->GetHashCode();
}

void StringCache_Cache__UpdateLastTimeUsed(StringCache_Cache* __this)
{
    __this->LastTimeUsed(::app::Uno::Diagnostics::Clock__GetSeconds(NULL));
}

void StringCache_Cache___ObjInit(StringCache_Cache* __this, ::uString* s)
{
    __this->Value(s);
    __this->StringHash(::uPtr< ::uString*>(s)->GetHashCode());
    __this->UpdateLastTimeUsed();
}

StringCache_Cache* StringCache_Cache__New_1(::uStatic* __this, ::uString* s)
{
    StringCache_Cache* inst = (::app::Fuse::StringCache_Cache*)::uAllocObject(sizeof(::app::Fuse::StringCache_Cache), ::app::Fuse::StringCache_Cache__typeof());
    inst->_ObjInit(s);
    return inst;
}

}}
