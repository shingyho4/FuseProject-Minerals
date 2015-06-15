// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_FLOAT__H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ANIMATIONS_MIXER_HANDLE_FLOAT__H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_float_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Animations_MixerHandle_float_;

struct List1_Enumerator__Fuse_Animations_MixerHandle_float___uType : ::uValueType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Fuse_Animations_MixerHandle_float___uType* List1_Enumerator__Fuse_Animations_MixerHandle_float___typeof();

::app::Fuse::Animations::MixerHandle__float* List1_Enumerator__Fuse_Animations_MixerHandle_float___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_float_* __this);
void List1_Enumerator__Fuse_Animations_MixerHandle_float___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_float_* __this);
bool List1_Enumerator__Fuse_Animations_MixerHandle_float___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_float_* __this);
void List1_Enumerator__Fuse_Animations_MixerHandle_float____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_float_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_* source);
List1_Enumerator__Fuse_Animations_MixerHandle_float_ List1_Enumerator__Fuse_Animations_MixerHandle_float___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_* source);

struct List1_Enumerator__Fuse_Animations_MixerHandle_float_
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Animations::MixerHandle__float*> _current;

    void Dispose() { List1_Enumerator__Fuse_Animations_MixerHandle_float___Dispose(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Animations_MixerHandle_float___MoveNext(this); }
    void _ObjInit(::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_* source) { List1_Enumerator__Fuse_Animations_MixerHandle_float____ObjInit(this, source); }
    ::app::Fuse::Animations::MixerHandle__float* Current() { return List1_Enumerator__Fuse_Animations_MixerHandle_float___get_Current(this); }

    List1_Enumerator__Fuse_Animations_MixerHandle_float_& operator =(const List1_Enumerator__Fuse_Animations_MixerHandle_float_& copy)
    {
        ::uCopyValue(this, List1_Enumerator__Fuse_Animations_MixerHandle_float___typeof(), &copy);
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
