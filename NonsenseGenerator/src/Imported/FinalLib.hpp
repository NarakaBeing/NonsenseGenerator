#ifndef 废话生成器_FINALLIB_HPP
#define 废话生成器_FINALLIB_HPP
#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <random>
using namespace std;
class ExtractAgent{
public:
    virtual string Data(){
        return "TransferError";
    }
    struct InFo {
        string Key;
        vector<string>Lib;
    };
    InFo Information;
};

class FinalLib{
private:
    FinalLib(){}
public:
    static map<string,ExtractAgent*>&MainLib(){
        static auto MainLib(new map<string,ExtractAgent*>);
        return *MainLib;
    }
    static ExtractAgent &Register(ExtractAgent &instance){
        MainLib().insert(make_pair(instance.Information.Key,&instance));
        return instance;
    }
};
#endif //废话生成器_FINALLIB_HPP
