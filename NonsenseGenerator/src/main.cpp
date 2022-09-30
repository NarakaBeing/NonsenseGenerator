
#include <iostream>
#include "Export/ReadLexicon.h"
using namespace std;

auto Read = ReadLexicon::GetInstance();
int main(void) {
    string str = R"(/noun/noun)";
    Read.Dispose(str);cout << str;
    return 0;
}