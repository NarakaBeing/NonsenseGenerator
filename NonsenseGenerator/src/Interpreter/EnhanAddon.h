//
// Created by code on 25/9/2022.
//

#ifndef 废话生成器_ENHANADDON_H
#define 废话生成器_ENHANADDON_H
#include <map>
#include <memory>
#include <vector>
#include "../WordFactory/WordFac.h"
#include <random>
using namespace std;
class AddonFRead {
private:
    AddonFRead(){};
public:
    static AddonFRead &GetInstance();
    void operator()(string &str);
protected:
    static vector<char*> lysis(char* Sentence,char* Symbol);
    void Analyse(string &Data);
};
static AddonFRead InPre = AddonFRead::GetInstance();
#endif //废话生成器_ENHANADDON_H
