#include "WordFactory.h"
#include <iostream>
static WordFactory May;
ostream &operator/(ostream &cout, Adapter &parser) {
    parser.SystemEle();
    return cout;
}
void Adapter::SystemEle(){
}
void AdAction::SystemEle() {
    May(RhetVerb);
    bool said = May(Talk);
    May(RhetVerb);
    Do.element();
    if(said == true){
        cout/Operator;
        cout/"”";
    };
}
void AdObj::SystemEle() {
    May(RhetObj);
    cout/Noun;
}
bool WordFactory::operator()(WordFactory &TypeA){
    if(rand() % 20 > 10){
        TypeA.element();
        return true;
    }
    return false;
}
void TyRhetObj::element() {
    if(rand() % 20 > 10){
        cout/"在|身为|作为"/Noun/Chowod(Prep) /"的";
    } else {
        cout/Para/Noun/"一样的|一般的|的|"/Chowod(Adj);
    }
}
void TyRhetVerb::element(){
    if(rand() % 20 > 10){
        cout/Para/Noun/"一样"/Chowod(Adv1);
    } else {
        cout/Chowod(Degree)/Adv2/ "地"/Chowod(Adv1);
    }
}
void TyTalk::element() {
    if (rand() % 20 > 10) {
        cout/"向"/Obj/Say/"道：“"/Obj;
    } else {
        cout/Say/ "：“"/Obj;
    }
}
void TyDo::element() {
    if(rand() % 20 > 10){
        cout/"被|把"/Obj/Chowod(Verb,Vebi);
    } else {
        if(rand() % 20 > 10){
            cout/Verb/Obj;
        } else {
            cout/Vebi;
        }
    }
}