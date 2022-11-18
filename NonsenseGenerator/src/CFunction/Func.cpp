#import "Func.h"
#import <random>
static random_device Seed;
static mt19937 MT19937(Seed());
vector<string>lysis(const string &SENTENCE,const char &SYMBOL) {
    string Data(SENTENCE);
    auto range = [&](int &lIndex, int &length) -> void {
        lIndex = (int) Data.find(SYMBOL);
        Data.erase(lIndex, 1);
        int RIndex{(int) Data.find(SYMBOL)};
        length = RIndex - lIndex;
    };
    auto load = [&](const int &L_INDEX, const int &LENGTH, vector<string> &result) -> void {
        const string Word {Data.substr(L_INDEX, LENGTH)};
        result.push_back(Word);
        Data.erase(L_INDEX, LENGTH);
    };
    vector<string>Result;
    int LIndex, Length;
    while (Data.find(SYMBOL) != string::npos) {
        range(LIndex, Length);
        load(LIndex, Length, Result);
    } Result.push_back(Data);
    return Result;
}
string choose(const vector<string>& CHOICES){
    uniform_int_distribution<int>rd(0, (int)CHOICES.size()-1);
    return CHOICES[rd(MT19937)];
}