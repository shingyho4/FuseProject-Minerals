// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__FUSE_INPUT_POINTER_99C36562_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__FUSE_INPUT_POINTER_99C36562_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Input_Pointer_PointerRecord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord;

struct Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__typeof();

::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__get_Current(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this);
void Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Dispose(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this);
bool Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__MoveNext(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this);
void Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord___ObjInit(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source);
Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source);

struct Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*> _source;
    ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord _current;
    int _iterator;
    int _version;

    void Dispose() { Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Dispose(this); }
    bool MoveNext() { return Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source) { Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord___ObjInit(this, source); }
    ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord Current();

    Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord& operator =(const Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord& copy)
    {
        ::uCopyValue(this, Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord::Current() { return Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__get_Current(this); }

}}}


#endif
