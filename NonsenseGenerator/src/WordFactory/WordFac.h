#ifndef 废话生成器_WORDFAC_H
#define 废话生成器_WORDFAC_H
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <random>
using namespace std;
class Product;
class ProductFac;
class ProductFac{
private:
   ProductFac(){};
public:
    static ProductFac &GetBuilder();
    Product &operator()(string Words,bool ESL);
protected:
    static void input(string& Ense,Product& instance,bool ESL);
    Product* instance;
};
class Product{
    friend class ProductFac;
public:
    string Random();
protected:
    vector<string> WordLib;
};

class Recorder{
private:
    Recorder(){};
public:
    static Recorder& GetRecorder();
    static map<string,Product>& GetLexi();
    Product &operator()(string Key,string&& Words,bool&& ESL);
protected:
    ProductFac Builder = ProductFac::GetBuilder();
    static void Regist(string& Key,Product& instance);
};
static Recorder Build = Recorder::GetRecorder();
#endif //废话生成器_WORDFAC_H
