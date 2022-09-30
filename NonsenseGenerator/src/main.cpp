
#include <iostream>
#include "Imported/Word/Lib.h"
#include "Export/ReadLexicon.h"
using namespace std;

auto Read = ReadLexicon::GetInstance();
int main(void) {
    for(int index = 0;index < 3;index++){
        string str = R"(/noun:和:/noun:/vebi|/verb/noun:/punc)";
        Read.Dispose(str);cout << str;
    }
    return 0;
}