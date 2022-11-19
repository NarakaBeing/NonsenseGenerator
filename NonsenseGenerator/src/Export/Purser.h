#ifndef SentenceGenerator_PURSER_H
#define SentenceGenerator_PURSER_H
#import "../Imported/Word.hpp"
#import "../Imported/Sentence.hpp"
#include <string>
using namespace std;
class Material;
class Purser{
public:
    static Purser &form();
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
    Material() = default;
    struct Detail{string Key;string Word;int PendingPlace{-1};};
    static Material form(ExtractAgent* &ExtractAgent){
        Material* Instance{new class Material};
        Instance->ExtractAgent = ExtractAgent;
        Instance->Detail.Key = ExtractAgent->Information.Key;
        return *Instance;
    }
    Detail reloading(const string &DATA){
        this->Detail.PendingPlace = int(DATA.find(Detail.Key));
        this->Detail.Word = ExtractAgent->extract();
        return Detail;
    }
    Detail Detail;
    ExtractAgent *ExtractAgent{nullptr};
};
#endif //SentenceGenerator_PURSER_H
