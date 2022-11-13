#import <iostream>
#import "Export/ReadLexicon.h"
using namespace std;
void Generator(int NumberOfSentence){
    auto reader = ReadLexicon::instance();
    for(int i = 0; i < NumberOfSentence; i++)
        cout << reader("/Sentence");
}
int main(int argc, char *argv[]) {
    Sentence Sentence;
    Word Word;
    Sentence.load();
    Word.load();
    Generator(10);
    return 0;
}