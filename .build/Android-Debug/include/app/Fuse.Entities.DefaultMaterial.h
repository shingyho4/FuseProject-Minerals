// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.2.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_DEFAULT_MATERIAL_H__
#define __APP_FUSE_ENTITIES_DEFAULT_MATERIAL_H__

#include <app/Fuse.Entities.Material.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct DefaultMaterial;

struct DefaultMaterial__uType : ::app::Fuse::Entities::Material__uType
{
};

DefaultMaterial__uType* DefaultMaterial__typeof();

::app::Uno::Float3 DefaultMaterial__get_DiffuseColor(DefaultMaterial* __this);
void DefaultMaterial__set_DiffuseColor(DefaultMaterial* __this, ::app::Uno::Float3 value);
::app::Uno::Float3 DefaultMaterial__get_SpecularColor(DefaultMaterial* __this);
void DefaultMaterial__set_SpecularColor(DefaultMaterial* __this, ::app::Uno::Float3 value);
float DefaultMaterial__get_Shininess(DefaultMaterial* __this);
void DefaultMaterial__set_Shininess(DefaultMaterial* __this, float value);
::app::Uno::Float2 DefaultMaterial__get_Tiling(DefaultMaterial* __this);
void DefaultMaterial__set_Tiling(DefaultMaterial* __this, ::app::Uno::Float2 value);
::app::Uno::Float2 DefaultMaterial__get_Offset(DefaultMaterial* __this);
void DefaultMaterial__set_Offset(DefaultMaterial* __this, ::app::Uno::Float2 value);
::app::Uno::Graphics::Texture2D* DefaultMaterial__get_DiffuseMap(DefaultMaterial* __this);
void DefaultMaterial__set_DiffuseMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value);
::app::Uno::Graphics::Texture2D* DefaultMaterial__get_NormalMap(DefaultMaterial* __this);
void DefaultMaterial__set_NormalMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value);
::app::Uno::Graphics::Texture2D* DefaultMaterial__get_SpecularMap(DefaultMaterial* __this);
void DefaultMaterial__set_SpecularMap(DefaultMaterial* __this, ::app::Uno::Graphics::Texture2D* value);

struct DefaultMaterial : ::app::Fuse::Entities::Material
{
    ::app::Uno::Float3 _DiffuseColor;
    ::app::Uno::Float3 _SpecularColor;
    float _Shininess;
    ::app::Uno::Float2 _Tiling;
    ::app::Uno::Float2 _Offset;
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _DiffuseMap;
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _NormalMap;
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _SpecularMap;

    ::app::Uno::Float3 DiffuseColor();
    void DiffuseColor(::app::Uno::Float3 value);
    ::app::Uno::Float3 SpecularColor();
    void SpecularColor(::app::Uno::Float3 value);
    float Shininess() { return DefaultMaterial__get_Shininess(this); }
    void Shininess(float value) { DefaultMaterial__set_Shininess(this, value); }
    ::app::Uno::Float2 Tiling();
    void Tiling(::app::Uno::Float2 value);
    ::app::Uno::Float2 Offset();
    void Offset(::app::Uno::Float2 value);
    ::app::Uno::Graphics::Texture2D* DiffuseMap() { return DefaultMaterial__get_DiffuseMap(this); }
    void DiffuseMap(::app::Uno::Graphics::Texture2D* value) { DefaultMaterial__set_DiffuseMap(this, value); }
    ::app::Uno::Graphics::Texture2D* NormalMap() { return DefaultMaterial__get_NormalMap(this); }
    void NormalMap(::app::Uno::Graphics::Texture2D* value) { DefaultMaterial__set_NormalMap(this, value); }
    ::app::Uno::Graphics::Texture2D* SpecularMap() { return DefaultMaterial__get_SpecularMap(this); }
    void SpecularMap(::app::Uno::Graphics::Texture2D* value) { DefaultMaterial__set_SpecularMap(this, value); }
};

}}}

#include <app/Uno.Float.h>

namespace app {
namespace Fuse {
namespace Entities {

inline ::app::Uno::Float3 DefaultMaterial::DiffuseColor() { return DefaultMaterial__get_DiffuseColor(this); }
inline void DefaultMaterial::DiffuseColor(::app::Uno::Float3 value) { DefaultMaterial__set_DiffuseColor(this, value); }
inline ::app::Uno::Float3 DefaultMaterial::SpecularColor() { return DefaultMaterial__get_SpecularColor(this); }
inline void DefaultMaterial::SpecularColor(::app::Uno::Float3 value) { DefaultMaterial__set_SpecularColor(this, value); }
inline ::app::Uno::Float2 DefaultMaterial::Tiling() { return DefaultMaterial__get_Tiling(this); }
inline void DefaultMaterial::Tiling(::app::Uno::Float2 value) { DefaultMaterial__set_Tiling(this, value); }
inline ::app::Uno::Float2 DefaultMaterial::Offset() { return DefaultMaterial__get_Offset(this); }
inline void DefaultMaterial::Offset(::app::Uno::Float2 value) { DefaultMaterial__set_Offset(this, value); }

}}}


#endif
