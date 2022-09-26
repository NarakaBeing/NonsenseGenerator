#include "../WordFactory/WordFac.h"
#ifndef 废话生成器_ENHANWORDS_H
#define 废话生成器_ENHANWORDS_H
static Product Action = Build("/Action","/Rverb|:/Talk|:/Rverb|:/Do/Obj", false);

static Product ToDo = Build("/Do","/1Do|/2Do||", false);
static Product ToDo1 = Build("/1Do","把|被:/noun:/verb/noun|/vebi", false);
static Product ToDo2 = Build("/2Do","/verb/noun/|/vebi", false);

static Product Talk = Build("/Talk","/1Talk|/2Talk||", false);
static Product Talk1 = Build("/1Talk","向:/Obj/say:“", false);
static Product Talk2 = Build("/2Talk","/say:“", false);

static Product Obj = Build("/Obj","/1RObj|/2RObj||::/noun", false);
static Product RObj1 = Build("/1RObj","/para/noun:一样的|一般的|的|:/adj", false);
static Product RObj3 = Build("/2RObj","在|身为|作为:/noun:/prep|:的", false);

static Product RVerb = Build("/Rverb","/1Rverb|/2Rverb||", false);
static Product RVerb1 = Build("/1Rverb","/para/noun:一样:/adv1|", false);
static Product RVerb2 = Build("/2Rverb","/degree|:/adv2/adv1|", false);
#endif //废话生成器_ENHANWORDS_H
