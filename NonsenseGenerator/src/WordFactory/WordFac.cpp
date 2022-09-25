#include "WordFac.h"
#include "../Interpreter/EnhanAddon.h"
using namespace std;
static random_device RD;
static mt19937 Seed(RD());
Recorder &Recorder::GetRecorder() {
    static auto instance(new Recorder);
    return *instance;
}
map<string, Part> &Recorder::GetLexi() {
    static auto Lexicon(new map<string,Part>);
    return *Lexicon;
}
void Recorder::Regist(string& Key,Part& instance) {
    Build.GetLexi().insert(make_pair(Key,instance));
}
Part &Recorder::operator()(string Key, string&& Words) {
    Part* instance = &Builder(Words);
    Recorder::Regist(Key,*instance);
    return *instance;
}
PartFac &PartFac::GetBuilder() {
    static auto Factory(new PartFac);
    return *Factory;
}
Part &PartFac::operator()(string Words) {
    instance = new Part;
    PartFac::input(Words,*instance);
    return *instance;
}
void PartFac::input(string &Ense,Part& instance) {
    char Comps[Ense.size()];
    strcpy(Comps,Ense.c_str());
    string word;
    char *p = strtok(Comps, "|");
    while (p != nullptr) {
        word.assign(p);
        instance.WordLib.push_back(word);
        p = strtok(nullptr, "|");
    }
}
string Part::Random() {
    uniform_int_distribution<int> rd(0,(int)WordLib.size() - 1);
    return WordLib[rd(Seed)];
}
