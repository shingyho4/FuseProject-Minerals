// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_ANIMATOR_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_ANIMATOR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Animator; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_Animator; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_Animator;

struct List1_Enumerator__Fuse_Animations_Animator__uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Fuse_Animations_Animator__uType* List1_Enumerator__Fuse_Animations_Animator__typeof();

::app::Fuse::Animations::Animator* List1_Enumerator__Fuse_Animations_Animator__get_Current(List1_Enumerator__Fuse_Animations_Animator* __this);
void List1_Enumerator__Fuse_Animations_Animator__Dispose(List1_Enumerator__Fuse_Animations_Animator* __this);
bool List1_Enumerator__Fuse_Animations_Animator__MoveNext(List1_Enumerator__Fuse_Animations_Animator* __this);
void List1_Enumerator__Fuse_Animations_Animator___ObjInit(List1_Enumerator__Fuse_Animations_Animator* __this, ::app::Uno::Collections::List__Fuse_Animations_Animator* source);
List1_Enumerator__Fuse_Animations_Animator List1_Enumerator__Fuse_Animations_Animator__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_Animator* source);

struct List1_Enumerator__Fuse_Animations_Animator
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_Animator*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::Animator*> _current;

    void Dispose() { List1_Enumerator__Fuse_Animations_Animator__Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_Animator__MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_Animator* source) { List1_Enumerator__Fuse_Animations_Animator___ObjInit(this, source); }
    ::app::Fuse::Animations::Animator* Current() { return List1_Enumerator__Fuse_Animations_Animator__get_Current(this); }

    List1_Enumerator__Fuse_Animations_Animator& operator =(const List1_Enumerator__Fuse_Animations_Animator& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Fuse_Animations_Animator__typeof(), &copy);
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
