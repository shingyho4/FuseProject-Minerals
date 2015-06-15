// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.StringCache.h>
#include <app/Fuse.StringCache_Cache.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {

StringCache__uType* StringCache__typeof()
{
    static StringCache__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (StringCache__uType*)::uAllocClassType(sizeof(StringCache__uType), "Fuse.StringCache", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(StringCache, _cache);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_cache";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

bool StringCache__IsStringCached(StringCache* __this, ::uString* s)
{
    int hash = ::uPtr< ::uString*>(s)->GetHashCode();

    for (::uByte b = (::uByte)(::uPtr< ::uArray*>(__this->_cache)->Length() - 1); b != 0; b--)
    {
        ::app::Fuse::StringCache_Cache* c = ::uPtr< ::uArray*>(__this->_cache)->Item< ::app::Fuse::StringCache_Cache*>((int)b);

        if ((c != NULL) && (::uPtr< ::app::Fuse::StringCache_Cache*>(c)->StringHash() == hash))
        {
            return true;
        }
    }

    return false;
}

::uByte StringCache__CacheString(StringCache* __this, ::uString* s)
{
    int stringHash = ::uPtr< ::uString*>(s)->GetHashCode();
    ::uShort leastUsedIndex = -1;
    ::uShort availableIndex = -1;
    double maxIdle = 0.0;

    for (::uByte b = 0; (int)b < ::uPtr< ::uArray*>(__this->_cache)->Length(); b++)
    {
        ::app::Fuse::StringCache_Cache* c = ::uPtr< ::uArray*>(__this->_cache)->Item< ::app::Fuse::StringCache_Cache*>((int)b);

        if (c == NULL)
        {
            availableIndex = (::uShort)b;
        }
        else if (::uPtr< ::app::Fuse::StringCache_Cache*>(c)->StringHash() == stringHash)
        {
            ::uPtr< ::app::Fuse::StringCache_Cache*>(c)->UpdateLastTimeUsed();
            return b;
        }
        else
        {
            double idleTime = ::uPtr< ::app::Fuse::StringCache_Cache*>(c)->IdleTime();

            if (maxIdle < idleTime)
            {
                maxIdle = idleTime;
                leastUsedIndex = (::uShort)b;
            }
        }
    }

    if (availableIndex != -1)
    {
        ::uPtr< ::uArray*>(__this->_cache)->ItemStrong< ::app::Fuse::StringCache_Cache*>((int)availableIndex) = ::app::Fuse::StringCache_Cache__New_1(NULL, s);
        return (::uByte)availableIndex;
    }
    else if (leastUsedIndex != -1)
    {
        ::uPtr< ::uArray*>(__this->_cache)->ItemStrong< ::app::Fuse::StringCache_Cache*>((int)leastUsedIndex) = ::app::Fuse::StringCache_Cache__New_1(NULL, s);
        return (::uByte)leastUsedIndex;
    }

    U_THROW(::app::Uno::Exception__New_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("String cache error, leastUsedIndex="), ::uBox< ::uShort>(::app::Uno::Short__typeof(), leastUsedIndex)), ::uGetConstString(", availableIndex=")), ::uBox< ::uShort>(::app::Uno::Short__typeof(), availableIndex))));
}

void StringCache___ObjInit(StringCache* __this)
{
    __this->_cache = ::uNewArray(::app::Fuse::StringCache_Cache__typeof(), 255);
}

StringCache* StringCache__New_1(::uStatic* __this)
{
    StringCache* inst = (::app::Fuse::StringCache*)::uAllocObject(sizeof(::app::Fuse::StringCache), ::app::Fuse::StringCache__typeof());
    inst->_ObjInit();
    return inst;
}

}}
