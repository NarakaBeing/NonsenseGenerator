#ifndef 废话生成器_INTERFACE_HPP
#define 废话生成器_INTERFACE_HPP
#include <map>
#include <random>
#include <string>
#include "Word.hpp"
using namespace std;
class Lexicon{
public:
  static void SetLexicon(const string &Key,Word &Pos){
      GetWordLib().insert(make_pair(Key,Pos));
    }
    static map<string,Word>&GetWordLib(void){
        static auto WordLib = new map<string,Word>;
        return *WordLib;
    }
};
#endif //废话生成器_INTERFACE_HPP
