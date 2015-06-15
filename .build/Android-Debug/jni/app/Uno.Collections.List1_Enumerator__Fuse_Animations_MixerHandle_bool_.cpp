// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType* List1_Enumerator__Fuse_Animations_MixerHandle_bool___typeof()
{
    static List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType*)::uAllocValueType(sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType), "Uno.Collections.List1_Enumerator<Fuse.Animations.MixerHandle<bool>>", sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_bool_), 2, 2);
        type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_bool___Dispose;
        type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_bool___MoveNext;

        type->Implements[0] = ::app::Uno::IDisposable__typeof();
        type->Implements[1] = ::app::Uno::Collections::IEnumerator__typeof();

        type->InterfaceOffsets[0] = offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType, __interface_0);
        type->InterfaceOffsets[1] = offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType, __interface_1);

        type->StrongRefOffsets[0] = offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_bool_, _source);
        type->StrongRefOffsets[1] = offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_bool_, _current);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_source";
        type->StrongRefNames[1] = "_current";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Animations::MixerHandle__bool* List1_Enumerator__Fuse_Animations_MixerHandle_bool___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_bool_* __this)
{
    return __this->_current;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_bool___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_bool_* __this)
{
}

bool List1_Enumerator__Fuse_Animations_MixerHandle_bool___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_bool_* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->_source)->_data)->Item< ::app::Fuse::Animations::MixerHandle__bool*>(__this->_iterator);
        return true;
    }

    return false;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_bool____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_bool_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(source)->_version;
    __this->_iterator = -1;
}

List1_Enumerator__Fuse_Animations_MixerHandle_bool_ List1_Enumerator__Fuse_Animations_MixerHandle_bool___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_* source)
{
    List1_Enumerator__Fuse_Animations_MixerHandle_bool_ inst = ::uDefault< List1_Enumerator__Fuse_Animations_MixerHandle_bool_>();
    inst._ObjInit(source);
    return inst;
}

}}}
