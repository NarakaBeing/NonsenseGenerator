#include "ReadLexicon.h"
string ReadLexicon::AssemblyModel(const string &Mold) {
    static queue<Material> MaterialLib;
    Initialize(MaterialLib, Mold);
    string Model{Mold};
    while(!MaterialLib.empty()) {
        Material Material{MaterialLib.front()};
        FillModel(Material,Model);
        ExcludeMaterial(Material,MaterialLib);
    }
    FactorizeModel(Model);
    return Model;
}
void ReadLexicon::Initialize (queue<Material> &Materials,const string &Mold) {
    auto WordLib = FinalLib::MainLib();
    for(auto Words:WordLib){
        Material Material{Words,Mold};
        Materials.push(Material);
    }
}
void ReadLexicon::FillModel(Material &Material, string &Model){
    Material.Reloading(Model);
    auto detail {Material.Detail()};
    if(detail.PendingPlace != string::npos){
        Model.replace(detail.PendingPlace,
                        detail.key.size(),
                       detail.value);
        Material.Reloading(Model);
    }
}
void ReadLexicon::ExcludeMaterial(Material &Material, queue<class Material> &MaterialLib) {
    auto detail {Material.Detail()};
    if(detail.PendingPlace == string::npos){
        MaterialLib.pop();
    }
}
void ReadLexicon::FactorizeModel(string &Model) {
    auto ReassemblyModel
    = [&](vector<string> ModelBlocks) -> void {
        for(auto &Block : ModelBlocks){
            vector<string> choices{lysis(Block,'|')};
            Model.append(choose(choices));
        }
    };
    auto ModelBlocks = lysis(Model,':');
    Model.clear();
    ReassemblyModel(ModelBlocks);
}