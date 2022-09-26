#include "WordFac.h"
using namespace std;
static random_device RD;
static mt19937 Seed(RD());
Recorder &Recorder::GetRecorder() {
    static auto instance(new Recorder);
    return *instance;
}
map<string, Product> &Recorder::GetLexi() {
    static auto Lexicon(new map<string,Product>);
    return *Lexicon;
}
void Recorder::Regist(string& Key,Product& instance) {
    Build.GetLexi().insert(make_pair(Key,instance));
}
Product &Recorder::operator()(string Key, string&& Words, bool&& ESL) {
    Product* instance = &Builder(Words,ESL);
    Recorder::Regist(Key,*instance);
    return *instance;
}
ProductFac &ProductFac::GetBuilder() {
    static auto Factory(new ProductFac);
    return *Factory;
}
Product &ProductFac::operator()(string Words,bool ESU) {
    instance = new Product;
    ProductFac::input(Words,*instance,ESU);
    return *instance;
}
void ProductFac::input(string &Ense,Product& instance,bool ESL) {
    auto Encapsulate = [&]()  -> void {
        char Comps[Ense.size()];
        strcpy(Comps,Ense.c_str());
        string word;
        char *p = strtok(Comps, "|");
        while (p != nullptr) {
            word.assign(p);
            instance.WordLib.push_back(word);
            p = strtok(nullptr, "|");
        }
    };
    ESL ? Encapsulate() : instance.WordLib.push_back(Ense);
}
string Product::Random() {
    uniform_int_distribution<int> rd(0,(int)WordLib.size() - 1);
    if((int)WordLib.size() == 1)return WordLib[0];
    else return WordLib[rd(Seed)];
}
