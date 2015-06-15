// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.1.0\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Char.h>
#include <app/Uno.Collections.List__Uno_Runtime_Implementation_Internal_Forma-a0649357.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringItem.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringLiteral.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

FormatStringTokenizer__uType* FormatStringTokenizer__typeof()
{
    static FormatStringTokenizer__uType* type;

    if (::uEnterCriticalIfNull(&type))
    {
        type = (FormatStringTokenizer__uType*)::uAllocClassType(sizeof(FormatStringTokenizer__uType), "Uno.Runtime.Implementation.Internal.FormatStringTokenizer", ::uObject__typeof(), 0, 2);
        type->StrongRefOffsets[0] = offsetof(FormatStringTokenizer, _tokens);
        type->StrongRefOffsets[1] = offsetof(FormatStringTokenizer, _format);
#ifdef U_DEBUG_MEM
        type->StrongRefNames[0] = "_tokens";
        type->StrongRefNames[1] = "_format";
#endif
        ::uRetainObject(type);
        ::uExitCritical();
    }

    return type;
}

::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* FormatStringTokenizer__TokenizeFormatString(::uStatic* __this, ::uString* format)
{
    return ::uPtr< ::app::Uno::Runtime::Implementation::Internal::FormatStringTokenizer*>(FormatStringTokenizer__New_1(NULL, format))->TokenizeFormatStringInternal();
}

::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* FormatStringTokenizer__TokenizeFormatStringInternal(FormatStringTokenizer* __this)
{
    __this->_index = 0;
    __this->_prevIndex = 0;
    __this->_state = 0;
    __this->_tokens = ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken__New_1(NULL);

    while (__this->_index <= ::uPtr< ::uString*>(__this->_format)->Length())
    {
        switch (__this->_state)
        {
            case 0:
            {
                if (__this->AtEnd())
                {
                    __this->_state = 4;
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '{')
                {
                    __this->_state = 2;
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '}')
                {
                    __this->Throw();
                }
                else
                {
                    __this->_state = 1;
                }

                break;
            }
            case 2:
            {
                if (__this->AtEnd())
                {
                    __this->Throw();
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '{')
                {
                    __this->DiscardCharacterAndGoTo(1);
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '}')
                {
                    __this->Throw();
                }
                else
                {
                    __this->_state = 3;
                }

                break;
            }
            case 3:
            {
                if (__this->AtEnd())
                {
                    __this->Throw();
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '}')
                {
                    __this->AddFormatItemAndGoTo(0);
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '{')
                {
                    __this->Throw();
                }

                break;
            }
            case 1:
            {
                if (__this->AtEnd())
                {
                    __this->AddLiteralAndGoTo(4);
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '{')
                {
                    __this->AddLiteralAndGoTo(2);
                }
                else if (::uPtr< ::uString*>(__this->_format)->Item(__this->_index) == '}')
                {
                    __this->Throw();
                }

                break;
            }
        }

        __this->_index++;
    }

    return __this->_tokens;
}

void FormatStringTokenizer__AddFormatItemAndGoTo(FormatStringTokenizer* __this, int state)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(__this->_tokens)->Add((::app::Uno::Runtime::Implementation::Internal::FormatStringToken*)::app::Uno::Runtime::Implementation::Internal::FormatStringItem__New_1(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->_format), __this->_prevIndex, (__this->_index - __this->_prevIndex) + 1)));
    __this->_prevIndex = __this->_index + 1;
    __this->_state = state;
}

void FormatStringTokenizer__AddLiteralAndGoTo(FormatStringTokenizer* __this, int state)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(__this->_tokens)->Add((::app::Uno::Runtime::Implementation::Internal::FormatStringToken*)::app::Uno::Runtime::Implementation::Internal::FormatStringLiteral__New_1(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->_format), __this->_prevIndex, __this->_index - __this->_prevIndex)));
    __this->_prevIndex = __this->_index;
    __this->_state = state;
}

void FormatStringTokenizer__DiscardCharacterAndGoTo(FormatStringTokenizer* __this, int state)
{
    __this->_prevIndex++;
    __this->_state = state;
}

void FormatStringTokenizer__Throw(FormatStringTokenizer* __this)
{
    U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Input string was not in a correct format")));
}

bool FormatStringTokenizer__AtEnd(FormatStringTokenizer* __this)
{
    return __this->_index == ::uPtr< ::uString*>(__this->_format)->Length();
}

void FormatStringTokenizer___ObjInit(FormatStringTokenizer* __this, ::uString* format)
{
    __this->_format = format;
}

FormatStringTokenizer* FormatStringTokenizer__New_1(::uStatic* __this, ::uString* format)
{
    FormatStringTokenizer* inst = (::app::Uno::Runtime::Implementation::Internal::FormatStringTokenizer*)::uAllocObject(sizeof(::app::Uno::Runtime::Implementation::Internal::FormatStringTokenizer), ::app::Uno::Runtime::Implementation::Internal::FormatStringTokenizer__typeof());
    inst->_ObjInit(format);
    return inst;
}

}}}}}
