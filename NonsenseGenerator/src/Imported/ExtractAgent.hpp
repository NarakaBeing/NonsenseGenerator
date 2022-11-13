#ifndef 废话生成器_EXTRACTAGENT_HPP
#define 废话生成器_EXTRACTAGENT_HPP
#import <string>
#import <vector>
#import <iostream>
#import "../CFunction/Func.h"
#import "../Export/ReadLexicon.h"
using namespace std;
class ExtractAgent{
    friend class Material;
public:
    virtual void load(){
        if(!init_TF)init();
        init_TF = true;
    }
protected:
    bool init_TF{false};
    virtual void init(){
        cout << "init error(by ExtractAgent)" << endl;
    }
    virtual string extract(){
        string result{choose(Information.Lib)};
        return result;
    }
    struct InFo {string Key;vector<string>Lib;};
    InFo Information;
};
#endif //废话生成器_EXTRACTAGENT_HPP
