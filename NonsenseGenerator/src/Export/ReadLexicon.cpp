#include "ReadLexicon.h"
string
ReadLexicon::AssemblyModel(const string &Mold) {
    deque<Material> MaterialLib;
    Initialize(MaterialLib, Mold);
    string Model(Mold);
    while(!MaterialLib.empty()){
        Material Material = MaterialLib.at(0);
        FillModel(Material,Model);
        ExcludeMaterial(Material,MaterialLib);
    }
    FactorizeModel(Model);
    return Model;
}
void ReadLexicon::Initialize (deque<Material> &Materials,const string &Mold) {
    auto WordLib = FinalLib::MainLib();
    for(auto Words:WordLib){
        Material Material(Words,Mold);
        Materials.push_back(Material);
    }
}
void ReadLexicon::FillModel(Material &Material, string &Model) {
    Material.Reloading(Model);
    if(Material.PendingPlace != -1)Model.replace(
                Material.PendingPlace,
                Material.key.size(),
                Material.value);
    Material.Reloading(Model);
}
void ReadLexicon::ExcludeMaterial(Material &Material, deque<class Material> &Materials) {
    if(Material.PendingPlace == -1)Materials.pop_front();
}
void ReadLexicon::FactorizeModel(string &Model) {
    auto ReassemblyModel
    = [&](vector<string> ModelBlocks) -> void {
        for(auto &Block : ModelBlocks){
            vector<string> choices = lysis(Block,'|');
            Model.append(choose(choices));
        }
    };
    vector<string> ModelBlocks = lysis(Model,':');
    Model.clear();
    ReassemblyModel(ModelBlocks);
}