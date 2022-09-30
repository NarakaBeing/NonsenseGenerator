#include "Func.h"
#include <random>
#include <iostream>
static random_device Seed;
static mt19937 MT19937(Seed());
vector<string>lysis(string &Sentence,char Symbol) {
    string Data(Sentence);
    auto range
    = [&](int &LIndex, int &length) -> void {
        LIndex = (int) Data.find(Symbol);
        Data.erase(LIndex, 1);
        int RIndex = (int) Data.find(Symbol);
        length = RIndex - LIndex;
    };
    auto load
    = [&](int &LIndex, int &length, vector<string> &result) -> void {
        string Word = Data.substr(LIndex, length);
        result.push_back(Word);
        Data.erase(LIndex, length);
    };
    vector<string> result;
    int LIndex, length;
    while (Data.find(Symbol) != -1) {
        range(LIndex, length);
        load(LIndex, length, result);
    }
    if(result.empty())result.push_back(Data);
    return result;
}
string GetRandomStr(vector<string>& Values){
    uniform_int_distribution<int> rd(0, (int)Values.size() - 1);
    if((int)Values.size()!=0)
        return Values[rd(MT19937)];
    else
        return "";
}