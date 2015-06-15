// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_I_MIXER_MASTER_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_I_MIXER_MASTER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_IMixerMaster; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_IMixerMaster;

struct List1_Enumerator__Fuse_Animations_IMixerMaster__uType : ::uValueType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Animations_IMixerMaster __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Animations_IMixerMaster__uType* List1_Enumerator__Fuse_Animations_IMixerMaster__typeof();

::uObject* List1_Enumerator__Fuse_Animations_IMixerMaster__get_Current(List1_Enumerator__Fuse_Animations_IMixerMaster* __this);
void List1_Enumerator__Fuse_Animations_IMixerMaster__Dispose(List1_Enumerator__Fuse_Animations_IMixerMaster* __this);
bool List1_Enumerator__Fuse_Animations_IMixerMaster__MoveNext(List1_Enumerator__Fuse_Animations_IMixerMaster* __this);
void List1_Enumerator__Fuse_Animations_IMixerMaster___ObjInit(List1_Enumerator__Fuse_Animations_IMixerMaster* __this, ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster* source);
List1_Enumerator__Fuse_Animations_IMixerMaster List1_Enumerator__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster* source);

struct List1_Enumerator__Fuse_Animations_IMixerMaster
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_IMixerMaster*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uObject*> _current;

    void Dispose() { List1_Enumerator__Fuse_Animations_IMixerMaster__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_IMixerMaster__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_IMixerMaster* source) { List1_Enumerator__Fuse_Animations_IMixerMaster___ObjInit(this, source); }
    ::uObject* Current() { return List1_Enumerator__Fuse_Animations_IMixerMaster__get_Current(this); }

    List1_Enumerator__Fuse_Animations_IMixerMaster& operator =(const List1_Enumerator__Fuse_Animations_IMixerMaster& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Fuse_Animations_IMixerMaster__typeof(), &copy);
        return *this;
    }
};

}}}

#include <app/Uno.Bool.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
