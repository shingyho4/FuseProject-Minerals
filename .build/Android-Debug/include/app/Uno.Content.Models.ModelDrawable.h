// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_DRAWABLE_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_DRAWABLE_H__

#include <app/Uno.Object.h>
#include <Uno/Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelDrawable;

struct ModelDrawable__uType : ::uClassType
{
};

ModelDrawable__uType* ModelDrawable__typeof();

::app::Uno::Content::Models::ModelMesh* ModelDrawable__get_Mesh(ModelDrawable* __this);

struct ModelDrawable : ::uObject
{
    ::uStrong< ::app::Uno::Content::Models::ModelMesh*> _mesh;

    ::app::Uno::Content::Models::ModelMesh* Mesh() { return ModelDrawable__get_Mesh(this); }
};

}}}}


#endif
