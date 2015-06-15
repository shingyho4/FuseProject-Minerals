// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary__int__int.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary__int__int__uType* Dictionary__int__int__typeof()
{
    static Dictionary__int__int__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary__int__int__uType*)::uAllocClassType(sizeof(Dictionary__int__int__uType), "Uno.Collections.Dictionary<int,int>", ::uObject__typeof(), 0, 1);
        type->StrongRefOffsets[0] = offsetof(Dictionary__int__int, _buckets);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buckets";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

void Dictionary__int__int__Rehash(Dictionary__int__int* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__int__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(i).Value);
        }
    }
}

void Dictionary__int__int__Add(Dictionary__int__int* __this, int key, int value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).Key, key))
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

bool Dictionary__int__int__TryGetValue(Dictionary__int__int* __this, int key, int* value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uBox< int>(::app::Uno::Int__typeof(), key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__int(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__int>(x).State == 0)
        {
            *value = 0;
            return false;
        }

        x++;

        if (x >= ::uPtr< ::uArray*>(__this->_buckets)->Length())
        {
            x = 0;
        }
    }
}

void Dictionary__int__int___ObjInit(Dictionary__int__int* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__int__int__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

Dictionary__int__int* Dictionary__int__int__New_1(::uStatic* __this)
{
    Dictionary__int__int* inst = (::app::Uno::Collections::Dictionary__int__int*)::uAllocObject(sizeof(::app::Uno::Collections::Dictionary__int__int), ::app::Uno::Collections::Dictionary__int__int__typeof());
    inst->_ObjInit();
    return inst;
}

}}}