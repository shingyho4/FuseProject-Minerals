// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Collections.Dictionary__string__Uno_Content_Models_VertexAt-f3a424ef.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-712665e8.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

Dictionary__string__Uno_Content_Models_VertexAttributeArray__uType* Dictionary__string__Uno_Content_Models_VertexAttributeArray__typeof()
{
    static Dictionary__string__Uno_Content_Models_VertexAttributeArray__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (Dictionary__string__Uno_Content_Models_VertexAttributeArray__uType*)::uAllocClassType(sizeof(Dictionary__string__Uno_Content_Models_VertexAttributeArray__uType), "Uno.Collections.Dictionary<string,Uno.Content.Models.VertexAttributeArray>", ::uObject__typeof(), 1, 1);
        type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Dictionary__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator_boxed;

        type->Implements[0] = ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray___typeof();

        type->InterfaceOffsets[0] = offsetof(Dictionary__string__Uno_Content_Models_VertexAttributeArray__uType, __interface_0);

        type->StrongRefOffsets[0] = offsetof(Dictionary__string__Uno_Content_Models_VertexAttributeArray, _buckets);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_buckets";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Content::Models::VertexAttributeArray* Dictionary__string__Uno_Content_Models_VertexAttributeArray__get_Item(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).Key, key))
            {
                return ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).Value;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).State == 0)
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

void Dictionary__string__Uno_Content_Models_VertexAttributeArray__set_Item(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).Key, key))
            {
                ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).Value = value;
                __this->_version++;
                return;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).State == 0)
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

::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray Dictionary__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    return ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__New_1(NULL, __this);
}

void Dictionary__string__Uno_Content_Models_VertexAttributeArray__Rehash(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    ::uArray* oldBuckets = __this->_buckets;
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray__typeof(), ::uPtr< ::uArray*>(oldBuckets)->Length() * 2);
    __this->_count = 0;
    __this->_dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
    {
        if (oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(i).State == 1)
        {
            __this->Add(oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(i).Key, oldBuckets->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(i).Value);
        }
    }
}

void Dictionary__string__Uno_Content_Models_VertexAttributeArray__Add(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value)
{
    if ((__this->_count + __this->_dummies) > (::uPtr< ::uArray*>(__this->_buckets)->Length() / 2))
    {
        __this->Rehash();
    }

    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).State == 0)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).Key = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).State == 2)
        {
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).State = 1;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).Value = value;
            ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).Key = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).Key, key))
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

bool Dictionary__string__Uno_Content_Models_VertexAttributeArray__TryGetValue(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray** value)
{
    int x = ::app::Uno::Math__Abs_5(NULL, ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(key))) & (::uPtr< ::uArray*>(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).State == 1)
        {
            if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).Key, key))
            {
                *value = ::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).Value;
                return true;
            }
        }
        else if (::uPtr< ::uArray*>(__this->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray>(x).State == 0)
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

void Dictionary__string__Uno_Content_Models_VertexAttributeArray___ObjInit(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    __this->_buckets = ::uNewArray(::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Content_Models_VertexAttributeArray__typeof(), 8);
    __this->_count = 0;
    __this->_dummies = 0;
}

Dictionary__string__Uno_Content_Models_VertexAttributeArray* Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_1(::uStatic* __this)
{
    Dictionary__string__Uno_Content_Models_VertexAttributeArray* inst = (::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*)::uAllocObject(sizeof(::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray), ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__typeof());
    inst->_ObjInit();
    return inst;
}

::uObject* Dictionary__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator_boxed(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this)
{
    return ::uBox(::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray__typeof(), __this->GetEnumerator());
}

}}}
