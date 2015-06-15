// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Entities.DefaultMaterial.h>
#include <app/Uno.Graphics.Texture2D.h>

namespace app {
namespace Fuse {
namespace Entities {

DefaultMaterial__uType* DefaultMaterial__typeof()
{
    static DefaultMaterial__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (DefaultMaterial__uType*)::uAllocClassType(sizeof(DefaultMaterial__uType), "Fuse.Entities.DefaultMaterial", ::app::Fuse::Entities::Material__typeof(), 0, 3);
        type->StrongRefOffsets[0] = offsetof(DefaultMaterial, _DiffuseMap);
        type->StrongRefOffsets[1] = offsetof(DefaultMaterial, _NormalMap);
        type->StrongRefOffsets[2] = offsetof(DefaultMaterial, _SpecularMap);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_DiffuseMap";
        type->StrongRefNames[1] = "_NormalMap";
        type->StrongRefNames[2] = "_SpecularMap";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Float3 DefaultMaterial__get_DiffuseColor(DefaultMaterial* __this)
{
    return __this->_DiffuseColor;
}

void DefaultMaterial__set_DiffuseColor(DefaultMaterial* __this, ::app::Uno::Float3 value)
{
    __this->_DiffuseColor = value;
}

::app::Uno::Float3 DefaultMaterial__get_SpecularColor(DefaultMaterial* __this)
{
    return __this->_SpecularColor;
}

void DefaultMaterial__set_SpecularColor(DefaultMaterial* __this, ::app::Uno::Float3 value)
{
    __this->_SpecularColor = value;
}

float DefaultMaterial__get_Shininess(DefaultMaterial* __this)
{
    return __this->_Shininess;
}

void DefaultMaterial__set_Shininess(DefaultMaterial* __this, float value)
{
    __this->_Shininess = value;
}

::app::Uno::Float2 DefaultMaterial__get_Tiling(DefaultMaterial* __this)
{
    return __this->_Tiling;
}

void DefaultMaterial__set_Tiling(DefaultMaterial* __this, ::app::Uno::Float2 value)
{
    __this->_Tiling = value;
}

::app::Uno::Float2 DefaultMaterial__get_Offset(DefaultMaterial* __this)
{
    return __this->_Offset;
}

void DefaultMaterial__set_Offset(DefaultMaterial* __this, ::app::Uno::Float2 value)
{
    __this->_Offset = value;
}

::app::Uno::Graphics::Texture2D* DefaultMaterial__get_DiffuseMap(DefaultMaterial* __this)
{
    return __this->_DiffuseMap;
}

void DefaultMaterial__set_DiffuseMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value)
{
    __this->_DiffuseMap = value;
}

::app::Uno::Graphics::Texture2D* DefaultMaterial__get_NormalMap(DefaultMaterial* __this)
{
    return __this->_NormalMap;
}

void DefaultMaterial__set_NormalMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value)
{
    __this->_NormalMap = value;
}

::app::Uno::Graphics::Texture2D* DefaultMaterial__get_SpecularMap(DefaultMaterial* __this)
{
    return __this->_SpecularMap;
}

void DefaultMaterial__set_SpecularMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value)
{
    __this->_SpecularMap = value;
}

}}}
