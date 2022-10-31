#include <iostream>
#include "Export/ReadLexicon.h"
using namespace std;
void Generator(int NumberOfSentence){
    ReadLexicon reader;
    for(int i = 0; i < NumberOfSentence; i++){
        cout << reader("/Sentence");
    }
}
int main() {
    clock_t start = clock();
    Generator(20);
    clock_t end = clock();
    cout << endl << (double)(end-start)/CLOCKS_PER_SEC << endl;
    return 0;
}