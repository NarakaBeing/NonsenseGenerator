
#ifndef 废话生成器_READLEXICON_H
#define 废话生成器_READLEXICON_H
#include "../Imported/FinalLib.hpp"
#include "../Imported/Word.hpp"
#include "../Imported/Sentence.hpp"
#include <string>
#include <random>
#include <vector>
using namespace std;
class ReadLexicon{
public:
    static void Dispose(string& Original);
private:
    static void FactorizeWord(string& Data);
    static void AnalyseData(string &Data);
    ReadLexicon(){};

    class KeyInfo{
    public:
        KeyInfo(pair<const string,class ExtractAgent*>&Pos,const string &Data){
            this->Pos = Pos.second;
            this->Key = this->Pos->Information.Key;
            Reloading(Data);
        }
        void Reloading(const string &Data){
            uniform_int_distribution<int> rd(0, (int)Pos->Information.Lib.size() - 1);
            this->Address = (int)Data.find(Key);
            this->Value = Pos->Data();
        }
        class ExtractAgent *Pos;
        string Key;
        string Value;
        int Address;
    };
};
#endif //废话生成器_READLEXICON_H
