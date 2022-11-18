#import <iostream>
#import "Export/Purser.h"
using namespace std;
void Generator(int numberOfSentence){
    auto Purser = Purser::getInstance();
    string Mold;
    for(int i = 0; i < numberOfSentence; i++)
        Mold.append("/Sentence");
    Mold = Purser(Mold);
    cout << Mold;
}
void init(vector<ExtractAgent*>&initList){
    for(auto &Interface:initList)
        Interface->load();
}
int main() {
    vector<ExtractAgent*>InitList{new Sentence,new Word};
    init(InitList);
    Generator(10);
    return 0;
}