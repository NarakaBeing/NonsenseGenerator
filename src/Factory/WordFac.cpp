
#include "WordFac.h"
ostream &operator/(ostream &cout, WordType Type){
    cout << Type.Random();
    return cout;
}
ostream &operator/(ostream &cout, const string str){
    char Comps[str.size()];
    strcpy(Comps,str.c_str());
    vector<string> random;
    char *p = strtok(Comps, "|");
    while (p != nullptr) {
        string word(p,p + strlen(p));
        random.push_back(word);
        p = strtok(nullptr, "|");
    }
    cout << random[rand() % random.size()];
    return cout;
}
LibFac &LibFac::GetBuilder() {
    static LibFac *Factory = nullptr;
    if(Factory == nullptr){
        Factory = new LibFac();
    }
    return *Factory;
}
WordType &LibFac::Builder(string Words) {
    instance = new WordType;
    Input(Words);
    return *instance;
}
void LibFac::Input(string Ense) {
    char Comps[Ense.size()];
    strcpy(Comps,Ense.c_str());
    char *p = strtok(Comps, "|");
    while (p != nullptr) {
        string word(p,p + strlen(p));
        instance->WordLib.push_back(word);
        p = strtok(nullptr, "|");
    }
}
string WordType::Random() {
    if(WordLib.empty() != 1){
        return WordLib[rand() % WordLib.size()];
    }
    return "";
}
ChooseWords &ChooseWords::GetInstance() {
    static ChooseWords *instance = nullptr;
    if(instance == nullptr){
        instance = new ChooseWords;
    }
    return *instance;
}
WordType &ChooseWords::operator()(WordType &Type1, WordType &Type2) {
    if(rand() % 20 > 10){
        return Type1;
    } else {
        return Type2;
    }
}