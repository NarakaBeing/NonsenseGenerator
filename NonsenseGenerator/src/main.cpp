#include <unistd.h>
#include <iostream>
#include "Export/ReadLexicon.h"
using namespace std;

int main() {
    clock_t  start = clock();
    string Sentence;
    for(int i = 0; i < 20; i++){
        Sentence = ReadLexicon::AssemblyModel("/Sentence");
        cout << Sentence;
    }
    clock_t  end = clock();
    cout << endl << "use" << static_cast<double>(end - start)/CLOCKS_PER_SEC << 's' << endl;
    return 0;
}