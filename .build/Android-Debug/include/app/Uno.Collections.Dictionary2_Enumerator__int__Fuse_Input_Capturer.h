// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__FUSE_INPUT_CAPTURER_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__FUSE_INPUT_CAPTURER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Capturer.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Input_Capturer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__int__Fuse_Input_Capturer;

struct Dictionary2_Enumerator__int__Fuse_Input_Capturer__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_Enumerator__int__Fuse_Input_Capturer__uType* Dictionary2_Enumerator__int__Fuse_Input_Capturer__typeof();

::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer Dictionary2_Enumerator__int__Fuse_Input_Capturer__get_Current(Dictionary2_Enumerator__int__Fuse_Input_Capturer* __this);
void Dictionary2_Enumerator__int__Fuse_Input_Capturer__Dispose(Dictionary2_Enumerator__int__Fuse_Input_Capturer* __this);
bool Dictionary2_Enumerator__int__Fuse_Input_Capturer__MoveNext(Dictionary2_Enumerator__int__Fuse_Input_Capturer* __this);
void Dictionary2_Enumerator__int__Fuse_Input_Capturer___ObjInit(Dictionary2_Enumerator__int__Fuse_Input_Capturer* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source);
Dictionary2_Enumerator__int__Fuse_Input_Capturer Dictionary2_Enumerator__int__Fuse_Input_Capturer__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source);

struct Dictionary2_Enumerator__int__Fuse_Input_Capturer
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*> _source;
    ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer _current;
    int _iterator;
    int _version;

    void Dispose() { Dictionary2_Enumerator__int__Fuse_Input_Capturer__Dispose(this); }
    bool MoveNext() { return Dictionary2_Enumerator__int__Fuse_Input_Capturer__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer* source) { Dictionary2_Enumerator__int__Fuse_Input_Capturer___ObjInit(this, source); }
    ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer Current();

    Dictionary2_Enumerator__int__Fuse_Input_Capturer& operator =(const Dictionary2_Enumerator__int__Fuse_Input_Capturer& copy)
    {
        ::uCopyValue(this, Dictionary2_Enumerator__int__Fuse_Input_Capturer__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer Dictionary2_Enumerator__int__Fuse_Input_Capturer::Current() { return Dictionary2_Enumerator__int__Fuse_Input_Capturer__get_Current(this); }

}}}


#endif
