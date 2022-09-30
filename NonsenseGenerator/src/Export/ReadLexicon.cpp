#include "ReadLexicon.h"
#include "../CFunction/Func.h"
#include <deque>
ReadLexicon &ReadLexicon::GetInstance() {
    static auto instance(new ReadLexicon);
    return *instance;
}
void ReadLexicon::Dispose(string &Original) {
    AnalyseData(Original);
    FactorizeWord(Original);
    if(Original.find("“")!=-1)Original.append("”");
}

void ReadLexicon::FactorizeWord(string &Data) {
    vector<string> Ense = lysis(Data,(char*)":");
    Data.clear();
    for(auto &Elem : Ense){
        vector<string> random = lysis(Elem,(char*)"|");
        Data.append(GetRandomStr(random));
    }
}

void ReadLexicon::AnalyseData(string &Sentence) {
    auto WordLib = FinalLib::MainLib();
    auto replace
    = [&](KeyInfo &Material,string &Data) -> void {
        Material.Reloading(Data);
        if(Material.Address != -1){
            Data.replace(Material.Address,Material.Key.size(),Material.Value);
        }
    };
    auto filter
    = [&](KeyInfo &Material,deque<KeyInfo> &Materials) -> void {
        if(Material.Address!=-1)
            Materials.push_back(Material);
        Materials.pop_front();
    };
    deque<KeyInfo> Materials;
    for(auto Pos:WordLib){
        KeyInfo Material(Pos,Sentence);
        Materials.push_back(Material);
    }
    while(!Materials.empty()){
        auto Material = Materials.at(0);
        replace(Material,Sentence);
        filter(Material,Materials);
        ;
    }
}


