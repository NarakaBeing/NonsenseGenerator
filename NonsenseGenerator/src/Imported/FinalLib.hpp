#ifndef 废话生成器_FINALLIB_HPP
#define 废话生成器_FINALLIB_HPP
#import <string>
#import <vector>
#import "../CFunction/Func.h"
#import "ExtractAgent.hpp"
using namespace std;
class FinalLib{
public:
    static vector<ExtractAgent*>&MainLib(){
        static auto MainLib{new vector<ExtractAgent*>};
        return *MainLib;
    }
    static void Register(ExtractAgent &instance){ MainLib().push_back(&instance); }
};
#endif //废话生成器_FINALLIB_HPP
