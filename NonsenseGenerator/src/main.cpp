#include <iostream>
#include "Export/ReadLexicon.h"
using namespace std;
void* Generator(int NumberOfSentence){
    for(int i = 0; i < NumberOfSentence; i++){
        string Model = ReadLexicon::AssemblyModel("/Sentence");
        cout << Model;
    }
}
int main() {
    Generator(20);
    return 0;
}