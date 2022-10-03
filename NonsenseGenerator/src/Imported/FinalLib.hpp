#ifndef 废话生成器_FINALLIB_HPP
#define 废话生成器_FINALLIB_HPP
#include <string>
#include <map>
#include <vector>
#include <iostream>
#include "../CFunction/Func.h"
using namespace std;
class ExtractAgent{
public:
    virtual string Extract(){
        auto WordLib = Information.Lib;
        string result{choose(WordLib)};
        return result;
    }
    struct InFo {string Key;vector<string>Lib;};
    InFo Information;
};
class FinalLib{
public:
    static vector<ExtractAgent*>&MainLib(){
        static auto MainLib{new vector<ExtractAgent*>};
        return *MainLib;
    }
    static void Register(ExtractAgent &instance){
        MainLib().push_back(&instance);
    }
};
#endif //废话生成器_FINALLIB_HPP
