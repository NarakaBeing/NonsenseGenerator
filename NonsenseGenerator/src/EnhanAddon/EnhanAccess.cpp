#include "EnhanAccess.h"
#include <unistd.h>
using namespace std;
static random_device RD;
static mt19937 Seed(RD());
AddonFRead &AddonFRead::GetInstance() {
    static unique_ptr<AddonFRead> instance(new AddonFRead);
    return *instance;
}
void AddonFRead::operator()(string &str) {
    while(str.find('/')!=-1)Analyse(str);
    LysisStr(str);
}
void AddonFRead::LysisStr(string &str) {
    auto lysis =
            [&](char* Data,char* Symbol) -> vector<char*>{
        vector<char*> Result;
        char* Word = strtok(Data,Symbol);
        while (Word != nullptr){
            Result.push_back(Word);
            Word = strtok(nullptr,Symbol);
        }
        return Result;
    };
    char Sentence[str.size()];
    strcpy(Sentence,str.c_str());
    str.clear();
    vector<char*> Ense;
    Ense = lysis(Sentence,(char*)":");
    for(char* &Elem : Ense){
        cout << str << endl;
        vector<char*> random;
        random = lysis(Elem,(char*)"|");
        uniform_int_distribution<int> rd(0,(int)random.size() - 1);
        str += (int)random.size() != 0 ? random[rd(Seed)] : "";
    }
}
void AddonFRead::Analyse(string &Data) {
    LysisStr(Data);
    for (auto LexiPos: Recorder::GetLexi()) {
        string Key = LexiPos.first;
        int StrPos = (int) Data.find(Key);
        while (StrPos != -1) {
            cout << Data << endl;
            Data.replace(StrPos, Key.size(), LexiPos.second.Random());
            StrPos = (int) Data.find(Key);
        }
    }
}