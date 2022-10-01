
#ifndef 废话生成器_READLEXICON_H
#define 废话生成器_READLEXICON_H
#include "../Imported/FinalLib.hpp"
#include "../Imported/Word.hpp"
#include "../Imported/Sentence.hpp"
#include <string>
#include <random>
#include <vector>
#include <deque>
using namespace std;
class ReadLexicon{
public:
    static string AssemblyModel(const string &Mold);
private:
    ReadLexicon() = default;
    class Material;
    static void Initialize(deque<Material>&Materials,const string &Mold);
    static void FillModel(Material &Material,string &Model);
    static void ExcludeMaterial(Material &Material,deque<class Material> &Materials);
    static void FactorizeModel(string &Model);
    class Material{
    public:
        Material(pair<const string,class ExtractAgent*>&Words,const string &Data){
            ExtractAgent = Words.second;
            key = Words.first;
            PendingPlace = (int)Data.find(key);
        }
        void Reloading(const string &Data){
            uniform_int_distribution<int> rd(
                    0, (int)ExtractAgent->Information.Lib.size() - 1);
            PendingPlace = (int)Data.find(key);
            value = ExtractAgent->Extract();
        }
        class ExtractAgent *ExtractAgent;
        string key;
        string value;
        int PendingPlace;
    };
};
#endif //废话生成器_READLEXICON_H
