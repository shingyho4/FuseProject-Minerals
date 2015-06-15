// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing-40811987.h>

namespace app {
namespace Uno {
namespace Collections {

KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()
{
    static KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*)::uAllocValueType(sizeof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType), "Uno.Collections.KeyValuePair<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>", sizeof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller), 0, 2);
        type->StrongRefOffsets[0] = offsetof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _key);
        type->StrongRefOffsets[1] = offsetof(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _value);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_key";
        type->StrongRefNames[1] = "_value";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Drawing::Stroke* KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Key(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    return __this->_key;
}

::app::Fuse::Drawing::PolygonFiller* KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Value(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    return __this->_value;
}

void KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value)
{
    __this->_key = key;
    __this->_value = value;
}

KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value)
{
    KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller inst = ::uDefault< KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>();
    inst._ObjInit(key, value);
    return inst;
}

}}}
