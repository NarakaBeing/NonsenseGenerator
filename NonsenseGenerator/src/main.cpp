
#include <iostream>
#include "Export/ReadLexicon.h"
using namespace std;

auto Read = ReadLexicon::GetInstance();
int main() {
    for(int i = 0;i< 20;i++){
        string str = R"(/Sentence)";
        Read.Dispose(str);cout << str;
    }
    return 0;
}