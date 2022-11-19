#ifndef SentenceGenerator_FINALLIB_HPP
#define SentenceGenerator_FINALLIB_HPP
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
#endif //SentenceGenerator_FINALLIB_HPP
