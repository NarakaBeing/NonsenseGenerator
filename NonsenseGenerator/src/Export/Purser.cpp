#import "Purser.h"
Purser &Purser::form() {
    static shared_ptr<Purser> instance{new class Purser};
    return *instance;
}
string Purser::operator()(const string &MOLD){
    string Model{MOLD};
    vector<Material> MaterialLib;
    init(MaterialLib);
    for(auto &Material:MaterialLib)
        fill(Material,Model);
    factorize(Model);
    return Model;
}
void Purser::init (vector<Material> &materials) {
    for(auto Words:FinalLib::MainLib())
        materials.push_back(Material::form(Words));
}
void Purser::fill(Material &material, string &model){
    auto Detail{material.reloading(model)};
    while(Detail.PendingPlace != string::npos){
        model.replace(Detail.PendingPlace,
                        Detail.Key.size(),
                       Detail.Word);
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
