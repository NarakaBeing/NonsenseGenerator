#include "EnhanAddon.h"
using namespace std;
static random_device RD;
static mt19937 Seed(RD());
AddonFRead &AddonFRead::GetInstance() {
    static unique_ptr<AddonFRead> instance(new AddonFRead);
    return *instance;
}
void AddonFRead::operator()(string &str) {
    char Sentence[str.size()];
    strcpy(Sentence,str.c_str());
    str.clear();
    vector<char*> Ense;
    Ense = AddonFRead::lysis(Sentence,(char*)":");
    for(char* &Elem : Ense){
        vector<char*> random;
        random = AddonFRead::lysis(Elem,(char*)"|");
        uniform_int_distribution<int> rd(0,(int)random.size() - 1);
        str += (int)random.size() != 0 ? random[rd(Seed)] : "";
    }
    Analyse(str);
}
vector<char *> AddonFRead::lysis(char *Sentence, char *Symbol) {
    vector<char*> Result;
    char* Word = strtok(Sentence,Symbol);
    while (Word != nullptr){
        Result.push_back(Word);
        Word = strtok(nullptr,Symbol);
    }
    return Result;
}
void AddonFRead::Analyse(std::string &Data) {
    for(auto Part :Build.GetLexi()){
        string Key = Part.first;
        auto Pos = Data.find(Key);
        if(Pos != -1){
            Data.replace(Pos,Key.size(),Part.second.Random());
            Analyse(Data);
        }
    }
}