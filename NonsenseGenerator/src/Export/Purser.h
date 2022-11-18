#ifndef 废话生成器_PURSER_H
#define 废话生成器_PURSER_H
#import "../Imported/Word.hpp"
#import "../Imported/Sentence.hpp"
#include <string>
using namespace std;
class Material;
class Purser{
public:
    static Purser &getInstance();
    string operator()(const string &MOLD);
protected:
    Purser() = default;
    inline static void init(vector<Material>&materials);
    inline static void fill(Material &material,string &model);
    inline static void factorize(string &model);
};
class Material{
    friend class Purser;
protected:
    static Material instance(ExtractAgent* &ExtractAgent){
        Material* Instance{new class Material};
        Instance->ExtractAgent = ExtractAgent;
        Instance->Detail.key = ExtractAgent->Information.Key;
        return *Instance;
    }
    struct Detail{string key;string value;int PendingPlace{-1};};
    Detail reloading(const string &DATA){
        this->Detail.PendingPlace = int(DATA.find(Detail.key));
        this->Detail.value = ExtractAgent->extract();
        return Detail;
    }
    Detail Detail;
    ExtractAgent *ExtractAgent;
};
#endif //废话生成器_PURSER_H
