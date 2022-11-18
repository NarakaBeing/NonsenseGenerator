#import "Purser.h"
#import <iostream>
Purser &Purser::getInstance() {
    static shared_ptr<Purser> instance{new class Purser};
    return *instance;
}
string Purser::operator()(const string &MOLD){
    string Model{MOLD};
    factorize(Model);
    vector<Material> MaterialLib;
    init(MaterialLib);
    for(auto &Material:MaterialLib)
        fill(Material,Model);

    return Model;
}
void Purser::init (vector<Material> &materials) {
    for(auto Words:FinalLib::MainLib())
        materials.push_back(Material::instance(Words));
}
void Purser::fill(Material &material, string &model){
    auto Detail{material.reloading(model)};
    while(Detail.PendingPlace != string::npos){
        model.replace(Detail.PendingPlace,
                        Detail.key.size(),
                       Detail.value);
        Detail = material.reloading(model);
    }
}
void Purser::factorize(string &model) {
    auto ModelBlocks{lysis(model,':')};
    auto ReassemblyModel = [&](const vector<string> &MODEL_BLOCKS) -> void {
        model.clear();
        for(auto &Block : MODEL_BLOCKS){
            vector<string> Words{lysis(Block,'|')};
            model.append(choose(Words));
        }
    };ReassemblyModel(ModelBlocks);
}
