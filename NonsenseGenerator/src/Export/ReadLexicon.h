#ifndef 废话生成器_READLEXICON_H
#define 废话生成器_READLEXICON_H
#include "../Imported/FinalLib.hpp"
#include "../Imported/Word.hpp"
#include "../Imported/Sentence.hpp"
#include <string>
#include <random>
#include <queue>
using namespace std;
class Material;
class ReadLexicon{
public:
    static string AssemblyModel(const string &Mold);
private:
    ReadLexicon() = default;
    static void Initialize(queue<Material>&Materials,const string &Mold);
    static void FillModel(Material &Material,string &Model);
    static void ExcludeMaterial(Material &Material,queue<class Material> &Materials);
    static void FactorizeModel(string &Model);
};

class Material{
    friend class ReadLexicon;
protected:
    Material(ExtractAgent* &Words,const string &Data){
        ExtractAgent = Words;
        detail.key = Words->Information.Key;
    }
    void Reloading(const string &Data){
        detail.PendingPlace = (int)Data.find(detail.key);
        detail.value = ExtractAgent->Extract();
    }
    struct Detail{string key;string value;int PendingPlace;};
    Detail detail;
    struct Detail Detail(){
        return detail;
    }
private:
    class ExtractAgent *ExtractAgent;
};
#endif //废话生成器_READLEXICON_H
