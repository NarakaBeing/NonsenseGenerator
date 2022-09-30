
#ifndef 废话生成器_READLEXICON_H
#define 废话生成器_READLEXICON_H
#include "../Imported/Word/Interface.hpp"
#include <string>
#include <random>
#include <vector>
using namespace std;
class ReadLexicon{
public:
    static ReadLexicon &GetInstance();
    void Dispose(string& Original);
private:
    static void FactorizeWord(string& Data);
    static void AnalyseData(string &Data);
    ReadLexicon(){};

    class KeyInfo{
    public:
        KeyInfo(pair<const string,class Word>&Pos,const string &Data){
            this->Pos = Pos;
            this->Key =this->Pos.first;
            Reloading(Data);
        }
        void Reloading(const string &Data){
            this->Address = (int)Data.find(Key);
            this->Value = GetRandomStr(Pos.second.Information.WordLib);
        }
        pair<string,class Word>Pos;
        string Key;
        string Value;
        int Address;
    };
};
#endif //废话生成器_READLEXICON_H
