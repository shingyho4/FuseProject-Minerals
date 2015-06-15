// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__FUSE_ENTITIES_MATERIAL__A8403DC6_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__FUSE_ENTITIES_MATERIAL__A8403DC6_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Entities_Material__Uno_Colle-b20df26b.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_;

struct Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof();

::app::Uno::Collections::KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Current(Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
void Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Dispose(Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
bool Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___MoveNext(Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
void Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source);
Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source);

struct Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*> _source;
    ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ _current;
    int _iterator;
    int _version;

    void Dispose() { Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Dispose(this); }
    bool MoveNext() { return Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source) { Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(this, source); }
    ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Current();

    Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_& operator =(const Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_& copy)
    {
        ::uCopyValue(this, Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_::Current() { return Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Current(this); }

}}}


#endif
