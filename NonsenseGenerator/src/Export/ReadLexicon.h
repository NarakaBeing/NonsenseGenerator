#ifndef 废话生成器_READLEXICON_H
#define 废话生成器_READLEXICON_H
#include "../Imported/FinalLib.hpp"
#include "../Imported/Word.hpp"
#include "../Imported/Sentence.hpp"
#include <string>
#include <random>

using namespace std;
class Material;
class ReadLexicon{
public:
    Material &instance();
    string operator()(const string &Mold);
private:
    inline static void Initialize(vector<Material>&Materials,const string &Mold);
    inline static void FillModel(Material &Material,string &Model);
    inline static void FactorizeModel(string &Model);
};

class Material{
    friend class ReadLexicon;
protected:
    Material() = default;
    static Material Cre(ExtractAgent* &Words){
        unique_ptr<Material>Instance{new Material};
        Instance->ExtractAgent = Words;
        Instance->Detail.key = Words->Information.Key;;
        return *Instance;
    }
    struct Detail{string key;string value;int PendingPlace{-1};};
    Detail Reloading(const string &Data){
        Detail.PendingPlace = (int)Data.find(Detail.key);
        Detail.value = ExtractAgent->Extract();
        return Detail;
    }
    Detail Detail;
    ExtractAgent *ExtractAgent;
};
#endif //废话生成器_READLEXICON_H
