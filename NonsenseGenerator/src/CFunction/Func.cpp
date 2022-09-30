#include "Func.h"
#include <random>
static random_device Seed;
static mt19937 MT19937(Seed());
vector<string>lysis(string &Data,char* Symbol) {
    char Temp[Data.size()];
    strcpy(Temp, Data.c_str());
    char *Word = strtok(Temp, Symbol);
    vector<string> result;
    while (Word != nullptr) {
        string StrWord = Word;
        result.push_back(StrWord);
        Word = strtok(nullptr, Symbol);
    }
    return result;
}
string GetRandomStr(vector<string>& Values){
    uniform_int_distribution<int> rd(0, (int)Values.size() - 1);
    if((int)Values.size()!=0)
        return Values[rd(MT19937)];
    else
        return "";
}