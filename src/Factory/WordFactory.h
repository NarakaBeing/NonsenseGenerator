#ifndef 废话生成器_WORDFACTORY_H
#define 废话生成器_WORDFACTORY_H
#include <iostream>
using namespace std;
#include"../Headers.h"
class Adapter{
    friend ostream &operator/(ostream &cout, Adapter &parser);
protected:

    virtual void SystemEle();
};
class AdAction :public Adapter{
    void SystemEle();
};
static AdAction Action;
class AdObj :public Adapter{
    void SystemEle();
};
static AdObj Obj;



class WordFactory {
public:
    virtual void element(){};
    bool operator()(WordFactory &TypeA);
};
ostream &operator/(ostream &cout, WordFactory &parser);
class TyRhetObj: public WordFactory{
public:
    void element(void);
};
static TyRhetObj RhetObj;
class TyRhetVerb: public WordFactory{
public:
    void element(void);
};
static TyRhetVerb RhetVerb;
class TyTalk: public WordFactory{
public:
    void element(void);
};
static TyTalk Talk;
class TyDo: public WordFactory{
public:
    void element(void);
};
static TyDo Do;
#endif //废话生成器_WORDFACTORY_H
