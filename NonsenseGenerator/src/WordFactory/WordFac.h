
#ifndef 废话生成器_WORDFAC_H
#define 废话生成器_WORDFAC_H
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <random>
using namespace std;
class Part;
class PartFac;
class PartFac{
private:
   PartFac(){};
public:
    static PartFac &GetBuilder();
    Part &operator()(string Words);
protected:
    static void input(string& Ense,Part& instance);
    Part* instance;
};
class Part{
    friend class PartFac;
public:
    string Random();
protected:
    vector<string> WordLib;
};
class Recorder{
private:
    Recorder(){};
    static void Regist(string& Key,Part& instance);
public:
    static Recorder& GetRecorder();
    static map<string,Part>& GetLexi();
    Part &operator()(string Key,string&& Words);
protected:
    PartFac Builder = PartFac::GetBuilder();
};
static Recorder Build = Recorder::GetRecorder();
#endif //废话生成器_WORDFAC_H
