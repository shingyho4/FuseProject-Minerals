// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_TEXT_ENTERED_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_TEXT_ENTERED_HANDLER_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Input_TextEnteredHandler;

struct List__Fuse_Input_TextEnteredHandler__uType : ::uClassType
{
};

List__Fuse_Input_TextEnteredHandler__uType* List__Fuse_Input_TextEnteredHandler__typeof();

int List__Fuse_Input_TextEnteredHandler__get_Count(List__Fuse_Input_TextEnteredHandler* __this);
::uDelegate* List__Fuse_Input_TextEnteredHandler__get_Item(List__Fuse_Input_TextEnteredHandler* __this, int index);
void List__Fuse_Input_TextEnteredHandler__set_Item(List__Fuse_Input_TextEnteredHandler* __this, int index, ::uDelegate* value);
void List__Fuse_Input_TextEnteredHandler__BoundsCheck(List__Fuse_Input_TextEnteredHandler* __this, int index);
void List__Fuse_Input_TextEnteredHandler___ObjInit(List__Fuse_Input_TextEnteredHandler* __this);
List__Fuse_Input_TextEnteredHandler* List__Fuse_Input_TextEnteredHandler__New_1(::uStatic* __this);

struct List__Fuse_Input_TextEnteredHandler : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void BoundsCheck(int index) { List__Fuse_Input_TextEnteredHandler__BoundsCheck(this, index); }
    void _ObjInit() { List__Fuse_Input_TextEnteredHandler___ObjInit(this); }
    int Count() { return List__Fuse_Input_TextEnteredHandler__get_Count(this); }
    ::uDelegate* Item(int index) { return List__Fuse_Input_TextEnteredHandler__get_Item(this, index); }
    void Item(int index, ::uDelegate* value) { List__Fuse_Input_TextEnteredHandler__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Collections {

}}}


#endif
