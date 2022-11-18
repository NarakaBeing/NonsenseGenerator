#ifndef 废话生成器_EXTRACTAGENT_HPP
#define 废话生成器_EXTRACTAGENT_HPP
#import <string>
#import <vector>
#import "../CFunction/Func.h"
#import "../Export/Purser.h"
using namespace std;
class ExtractAgent{
    friend class Material;
protected:
    bool init_TF{false};
public:
    void load(){
        if(!init_TF)init();
        this->init_TF = true;
    }
protected:
    virtual void init(){};
    virtual string extract(){
        string Result{choose(this->Information.Lib)};
        return Result;
    }
    struct InFo {string Key;vector<string>Lib;};
    InFo Information;
};
#endif //废话生成器_EXTRACTAGENT_HPP
