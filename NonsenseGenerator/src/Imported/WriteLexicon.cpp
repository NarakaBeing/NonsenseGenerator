#include "WriteLexicon.h"
#include <iostream>
WriteLexicon& WriteLexicon::GetInstance() {
    static auto instance(new WriteLexicon);
    return *instance;
}
Word &WriteLexicon::Register(Word& Type) {
    Lexicon::SetLexicon(Type.Information.Key,Type);
    return Type;
}