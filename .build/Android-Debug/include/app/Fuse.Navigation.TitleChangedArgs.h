// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_TITLE_CHANGED_ARGS_H__
#define __APP_FUSE_NAVIGATION_TITLE_CHANGED_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno/Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct TitleChangedArgs;

struct TitleChangedArgs__uType : ::app::Uno::EventArgs__uType
{
};

TitleChangedArgs__uType* TitleChangedArgs__typeof();

::uObject* TitleChangedArgs__get_NewTitleNode(TitleChangedArgs* __this);
void TitleChangedArgs__set_NewTitleNode(TitleChangedArgs* __this, ::uObject* value);
void TitleChangedArgs___ObjInit_1(TitleChangedArgs* __this, ::uObject* newTitleNode);
TitleChangedArgs* TitleChangedArgs__New_2(::uStatic* __this, ::uObject* newTitleNode);

struct TitleChangedArgs : ::app::Uno::EventArgs
{
    ::uStrong< ::uObject*> _NewTitleNode;

    void _ObjInit_1(::uObject* newTitleNode) { TitleChangedArgs___ObjInit_1(this, newTitleNode); }
    ::uObject* NewTitleNode() { return TitleChangedArgs__get_NewTitleNode(this); }
    void NewTitleNode(::uObject* value) { TitleChangedArgs__set_NewTitleNode(this, value); }
};

}}}


#endif
