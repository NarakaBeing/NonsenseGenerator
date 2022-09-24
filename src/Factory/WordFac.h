
#ifndef 废话生成器_WORDFAC_H
#define 废话生成器_WORDFAC_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class WordType;
ostream &operator/(ostream &cout, WordType Type);
ostream &operator/(ostream &cout, string str);
class LibFac{
private:
   LibFac(){
   };
public:
    static LibFac &GetBuilder();
    WordType &Builder(string Words);
protected:
    void Input(string Ense);
    WordType *instance;
};
class WordType{
    friend class LibFac;
public:
    WordType(){
    };
    string Random(void);
protected:
    vector<string> WordLib;
};
static WordType WORDNONE;
class ChooseWords{
private:
    ChooseWords(){
    };
public:
    static ChooseWords &GetInstance();
    WordType &operator()(WordType &Type1,WordType &Type2 = WORDNONE);
};

static LibFac Fac = LibFac::GetBuilder();

static ChooseWords Chowod = ChooseWords::GetInstance();
#endif //废话生成器_WORDFAC_H
