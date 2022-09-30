#ifndef 废话生成器_WRITELEXICON_H
#define 废话生成器_WRITELEXICON_H
#include"Word/Interface.hpp"
#include <random>
class WriteLexicon{
public:
    static WriteLexicon &GetInstance();
    Word &Register(Word& Type);
private:
    WriteLexicon(){};
};

#endif //废话生成器_WRITELEXICON_H
