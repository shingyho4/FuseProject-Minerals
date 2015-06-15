// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary__string__string__uType* Dictionary__string__string__typeof()
{
    static Dictionary__string__string__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary__string__string__uType*)::uAllocClassType(sizeof(Dictionary__string__string__uType), "Uno.Collections.Dictionary<string,string>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary__string__string, _buckets);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buckets";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int Dictionary__string__string__get_Count(Dictionary__string__string* __this)
{
    return __this->_count;
}

::uString* Dictionary__string__string__get_Item(Dictionary__string__string* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 0)
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Dictionary did not contain the given key")));
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__string__string__set_Item(Dictionary__string__string* __this, ::uString* key, ::uString* value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 0)
        {
            __this->Add(key, value);
            return;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

::app::Uno::Collections::Dictionary2_Enumerator__string__string Dictionary__string__string__GetEnumerator(Dictionary__string__string* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__string__string__New_1(NULL, __this);
}

void Dictionary__string__string__Rehash(Dictionary__string__string* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__string__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(i).Value);
        }
    }
}

void Dictionary__string__string__Add(Dictionary__string__string* __this, ::uString* key, ::uString* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key, key))
            {
                U_THROW(::app::Uno::Exception__New_1(NULL, ::uGetConstString("Dictionary already contains the given key")));
            }
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__string__string__TryGetValue(Dictionary__string__string* __this, ::uString* key, ::uString** value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 0)
        {
            *value = NULL;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

bool Dictionary__string__string__ContainsKey(Dictionary__string__string* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).Key, key))
            {
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(x).State == 0)
        {
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__string__string___ObjInit(Dictionary__string__string* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__string__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

Dictionary__string__string* Dictionary__string__string__New_1(::uStatic* __this)
{
    Dictionary__string__string* inst = (::app::Uno::Collections::Dictionary__string__string*)::uAllocObject(sizeof(::app::Uno::Collections::Dictionary__string__string), ::app::Uno::Collections::Dictionary__string__string__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
