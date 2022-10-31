#include "ReadLexicon.h"
Material &ReadLexicon::instance() {
    static shared_ptr<Material> instance{new class Material};
    return *instance;
}
string ReadLexicon::operator()(const string &Mold){
    static vector<Material> MaterialLib;
    string Model{Mold};
    Initialize(MaterialLib, Mold);
    for(auto &Material:MaterialLib)
        FillModel(Material,Model);
    FactorizeModel(Model);
    return Model;
}
void ReadLexicon::Initialize (vector<Material> &Materials,const string &Mold) {
    for(auto Words:FinalLib::MainLib())
        Materials.push_back(Material::Cre(Words));
}
void ReadLexicon::FillModel(Material &Material, string &Model){
    auto detail{Material.Reloading(Model)};
    while(detail.PendingPlace != string::npos){
        Model.replace(detail.PendingPlace,
                        detail.key.size(),
                       detail.value);
        detail = Material.Reloading(Model);
    }
}
void ReadLexicon::FactorizeModel(string &Model) {
    auto ReassemblyModel = [&](vector<string> ModelBlocks) -> void {
        Model.clear();
        for(auto &Block : ModelBlocks){
            vector<string> words{lysis(Block,'|')};
            Model.append(choose(words));
        }
    };
    auto ModelBlocks{lysis(Model,':')};
    ReassemblyModel(ModelBlocks);
}