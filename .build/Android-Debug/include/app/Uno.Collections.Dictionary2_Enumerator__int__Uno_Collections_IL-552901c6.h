// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__UNO_COLLECTIONS_I_L_552901C6_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__UNO_COLLECTIONS_I_L_552901C6_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.KeyValuePair__int__Uno_Collections_IList_Fuse_I-6c4f2be3.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_;

struct Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof();

::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Current(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
void Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Dispose(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
bool Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___MoveNext(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
void Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source);
Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source);

struct Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*> _source;
    ::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ _current;
    int _iterator;
    int _version;

    void Dispose() { Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Dispose(this); }
    bool MoveNext() { return Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source) { Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(this, source); }
    ::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ Current();

    Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_& operator =(const Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_& copy)
    {
        ::uCopyValue(this, Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_::Current() { return Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___get_Current(this); }

}}}


#endif
