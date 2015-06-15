// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_INDEX_ARRAY_H__
#define __APP_UNO_CONTENT_MODELS_INDEX_ARRAY_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct IndexArray;

struct IndexArray__uType : ::uClassType
{
};

IndexArray__uType* IndexArray__typeof();

int IndexArray__get_Type(IndexArray* __this);
::app::Uno::Buffer* IndexArray__get_Buffer(IndexArray* __this);
int IndexArray__get_Count(IndexArray* __this);
int IndexArray__GetInt(IndexArray* __this, int index);
void IndexArray___ObjInit(IndexArray* __this, int type, ::app::Uno::Buffer* buffer);
void IndexArray___ObjInit_3(IndexArray* __this, ::uArray* data);
IndexArray* IndexArray__New_4(::uStatic* __this, ::uArray* data);

struct IndexArray : ::uObject
{
    ::uStrong< ::app::Uno::Buffer*> _buffer;
    int _type;

    int GetInt(int index) { return IndexArray__GetInt(this, index); }
    void _ObjInit(int type, ::app::Uno::Buffer* buffer) { IndexArray___ObjInit(this, type, buffer); }
    void _ObjInit_3(::uArray* data) { IndexArray___ObjInit_3(this, data); }
    int Type() { return IndexArray__get_Type(this); }
    ::app::Uno::Buffer* Buffer() { return IndexArray__get_Buffer(this); }
    int Count() { return IndexArray__get_Count(this); }
};

}}}}

#include <app/Uno.Int.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

}}}}


#endif
