// This file was generated based on 'C:\ProgramData\Uno\Packages\Experimental.Http\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Experimental.Http.HttpResponseHeader.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__string.h>
#include <app/Uno.Collections.KeyValuePair__string__string.h>
#include <app/Uno.IO.BinaryReader.h>
#include <app/Uno.IO.BinaryWriter.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Http {

HttpResponseHeader__uType* HttpResponseHeader__typeof()
{
    static HttpResponseHeader__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (HttpResponseHeader__uType*)::uAllocClassType(sizeof(HttpResponseHeader__uType), "Experimental.Http.HttpResponseHeader", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(HttpResponseHeader, _ReasonPhrase);
        type->StrongRefOffsets[1] = offsetof(HttpResponseHeader, _Headers);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_ReasonPhrase";
        type->StrongRefNames[1] = "_Headers";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

int HttpResponseHeader__get_StatusCode(HttpResponseHeader* __this)
{
    return __this->_StatusCode;
}

void HttpResponseHeader__set_StatusCode(HttpResponseHeader* __this, int value)
{
    __this->_StatusCode = value;
}

::uString* HttpResponseHeader__get_ReasonPhrase(HttpResponseHeader* __this)
{
    return __this->_ReasonPhrase;
}

void HttpResponseHeader__set_ReasonPhrase(HttpResponseHeader* __this, ::uString* value)
{
    __this->_ReasonPhrase = value;
}

::app::Uno::Collections::Dictionary__string__string* HttpResponseHeader__get_Headers(HttpResponseHeader* __this)
{
    return __this->_Headers;
}

void HttpResponseHeader__set_Headers(HttpResponseHeader* __this, ::app::Uno::Collections::Dictionary__string__string* value)
{
    __this->_Headers = value;
}

void HttpResponseHeader__WriteSafe(HttpResponseHeader* __this, ::app::Uno::IO::BinaryWriter* w, ::uString* s)
{
    if (::app::Uno::String__op_Equality(NULL, s, NULL) || (::uPtr< ::uString*>(s)->Length() == 0))
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(w)->Write_27(::uGetConstString("!"));
    }
    else
    {
        w->Write_27(s);
    }
}

void HttpResponseHeader__Write(HttpResponseHeader* __this, ::app::Uno::IO::BinaryWriter* w)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(w)->Write_5(__this->StatusCode());
    __this->WriteSafe(w, __this->ReasonPhrase());
    int c = ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->Headers())->Count();
    w->Write_5(c);

    for (::app::Uno::Collections::Dictionary2_Enumerator__string__string enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->Headers())->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__string__string h = enum_123.Current();
        __this->WriteSafe(w, h.Key());
        __this->WriteSafe(w, h.Value());
    }
}

HttpResponseHeader* HttpResponseHeader__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* r)
{
    HttpResponseHeader* h = HttpResponseHeader__New_1(NULL);
    ::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(h)->StatusCode(::uPtr< ::app::Uno::IO::BinaryReader*>(r)->ReadInt());
    h->ReasonPhrase(r->ReadString());
    int c = r->ReadInt();
    h->Headers(::app::Uno::Collections::Dictionary__string__string__New_1(NULL));

    for (int i = 0; i < c; ++i)
    {
        ::uString* k = ::uPtr< ::app::Uno::IO::BinaryReader*>(r)->ReadString();
        ::uString* v = r->ReadString();
        ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(h)->Headers())->Item(k, v);
    }

    return h;
}

void HttpResponseHeader___ObjInit(HttpResponseHeader* __this)
{
}

HttpResponseHeader* HttpResponseHeader__New_1(::uStatic* __this)
{
    HttpResponseHeader* inst = (::app::Experimental::Http::HttpResponseHeader*)::uAllocObject(sizeof(::app::Experimental::Http::HttpResponseHeader), ::app::Experimental::Http::HttpResponseHeader__typeof());
    inst->_ObjInit();
    return inst;
}

}}}
