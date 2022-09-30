#ifndef 废话生成器_WORD_HPP
#define 废话生成器_WORD_HPP
#include <string>
#include <vector>
#include <random>
#include "../../CFunction/Func.h"
using namespace std;
class Word {
protected:
    struct Info {
        string Words;
        string Key;
        bool ESL;
        vector<string>WordLib;
    };
public:
    static Word &Cre(string&& Key,string&& Words,bool ESL){
        Word* WordType(new Word);
        WordType->Information.Key = Key;
        WordType->Information.Words = Words;
        if(ESL)WordType->Information.WordLib = lysis(Words,(char*)"|");
        return *WordType;
    };
    Info Information;
};
#endif //废话生成器_WORD_HPP
