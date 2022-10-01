#ifndef 废话生成器_FINALLIB_HPP
#define 废话生成器_FINALLIB_HPP
#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <random>
using namespace std;
static random_device Seed;
static mt19937 MT19937(Seed());
class ExtractAgent{
public:
    virtual string Extract(){
        auto WordLib = Information.Lib;
        uniform_int_distribution<int> rd(0, (int) WordLib.size() - 1);
        string result = WordLib.at(rd(MT19937));
        return result;
    }
    struct InFo {string Key;vector<string>Lib;};
    InFo Information;
};
class FinalLib{
public:
    static map<string,ExtractAgent*>&MainLib(){
        static unique_ptr<map<string,ExtractAgent*>>
        MainLib(new map<string,ExtractAgent*>);
        return *MainLib;
    }
    static void Register(ExtractAgent &instance){
        MainLib().insert(make_pair(instance.Information.Key,&instance));
    }
};
#endif //废话生成器_FINALLIB_HPP
