#include <unistd.h>
#include <iostream>
#include "Export/ReadLexicon.h"
using namespace std;
void test(int times){
    for(int i = 0; i < 20 ; i++){
        string str("/Sentence");
        ReadLexicon::Dispose(str);
        cout << str;
    }
}
int main() {
    srand(time(nullptr));
    test(0);
    return 0;
}