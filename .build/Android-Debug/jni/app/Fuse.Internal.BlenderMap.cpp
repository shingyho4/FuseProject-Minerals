// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Fuse.Internal.Blender__bool.h>
#include <app/Fuse.Internal.Blender__float.h>
#include <app/Fuse.Internal.Blender__float2.h>
#include <app/Fuse.Internal.Blender__float4.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Fuse.Internal.Float2Blender.h>
#include <app/Fuse.Internal.Float3Blender.h>
#include <app/Fuse.Internal.Float4Blender.h>
#include <app/Fuse.Internal.FloatBlender.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__Uno_Type__object.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>

namespace app {
namespace Fuse {
namespace Internal {

::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_Type__object*> BlenderMap___blenders;

BlenderMap__uType* BlenderMap__typeof()
{
    static BlenderMap__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (BlenderMap__uType*)::uAllocClassType(sizeof(BlenderMap__uType), "Fuse.Internal.BlenderMap", ::uObject__typeof());
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Fuse::Internal::Blender__float4* BlenderMap__Get__float4(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Float4__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float4__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Float4__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Float4__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__float4*>(blender, ::app::Fuse::Internal::Blender__float4__typeof());
}

::app::Fuse::Internal::Blender__float2* BlenderMap__Get__float2(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Float2__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float2__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Float2__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Float2__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__float2*>(blender, ::app::Fuse::Internal::Blender__float2__typeof());
}

::app::Fuse::Internal::Blender__float* BlenderMap__Get__float(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Float__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Float__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Float__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Float__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__float*>(blender, ::app::Fuse::Internal::Blender__float__typeof());
}

::app::Fuse::Internal::Blender__bool* BlenderMap__Get__bool(::uStatic* __this)
{
    ::uObject* blender;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->TryGetValue(::app::Uno::Bool__typeof(), &blender))
    {
        if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::FloatBlender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float2__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float2Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float3__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float3Blender__New_1(NULL);
        }
        else if ((::uType*)::app::Uno::Bool__typeof() == (::uType*)::app::Uno::Float4__typeof())
        {
            blender = (::uObject*)::app::Fuse::Internal::Float4Blender__New_1(NULL);
        }
        else
        {
            U_THROW(::app::Uno::Exception__New_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unsupported blender type: "), (::uObject*)(::uType*)::app::Uno::Bool__typeof())));
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Uno_Type__object*>(BlenderMap___blenders)->Add(::app::Uno::Bool__typeof(), blender);
    }

    return ::uCast< ::app::Fuse::Internal::Blender__bool*>(blender, ::app::Fuse::Internal::Blender__bool__typeof());
}

void BlenderMap___TypeInit(::uStatic* __this)
{
    BlenderMap___blenders = ::app::Uno::Collections::Dictionary__Uno_Type__object__New_1(NULL);
}

}}}
