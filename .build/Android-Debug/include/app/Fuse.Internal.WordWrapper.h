// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.1.0\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_WORD_WRAPPER_H__
#define __APP_FUSE_INTERNAL_WORD_WRAPPER_H__

#include <Uno/Uno.h>
namespace app { namespace Fuse { namespace Internal { struct WordWrapInfo; } } }
namespace app { namespace Fuse { namespace Internal { struct WordWrapperWord; } } }
namespace app { namespace Fuse { namespace Internal { struct WrappedLine; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Internal_WordWrapperWord; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Internal_WrappedLine; } } }

namespace app {
namespace Fuse {
namespace Internal {

struct WordWrapper__uType : ::uClassType
{
};

WordWrapper__uType* WordWrapper__typeof();

::uArray* WordWrapper__WrapLine(::uStatic* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, ::uString* text);
::app::Uno::Collections::List__Fuse_Internal_WordWrapperWord* WordWrapper__GetWords(::uStatic* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, ::uString* text);
::app::Fuse::Internal::WordWrapperWord* WordWrapper__SplitWord(::uStatic* __this, ::app::Fuse::Internal::WordWrapInfo* wrapInfo, ::app::Uno::Collections::List__Fuse_Internal_WrappedLine* wrappedLines, ::app::Fuse::Internal::WordWrapperWord* word, int* lineStartIndex);

}}}


#endif
