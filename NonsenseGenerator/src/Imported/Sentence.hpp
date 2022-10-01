#ifndef 废话生成器_SENTENCE_HPP
#define 废话生成器_SENTENCE_HPP
#include "FinalLib.hpp"
#include "../CFunction/Func.h"
#include <random>
using namespace std;
class Senten :public ExtractAgent{
public:
    string Extract() override {
        auto WordLib = Information.Lib;
        uniform_int_distribution<int> rd(0, (int) WordLib.size() - 1);
        string result = WordLib.at(rd(MT19937));
        return result;
    }
    //============================================================================
    static Senten &Cre(string&& Sentence){
        static class Senten *OnlyInstance = nullptr;
        if(OnlyInstance == nullptr){
            OnlyInstance = new class Senten;
            OnlyInstance->Information.Key = "/Sentence";
            FinalLib::Register(*OnlyInstance);
        }
        OnlyInstance->Information.Lib.push_back(Sentence);
        return *OnlyInstance;
    }
};
//static auto Sentence = Senten::Cre("");
static auto Sentence1 = Senten::Cre("/head, 皇帝/noun/vebi在/noun/prep/punc");

static auto Sentence2 = Senten::Cre("/noun/noun/degree/adj，被/noun:|和/noun:所:/vebi|/verb:/punc");

static auto Sentence3 = Senten::Cre("国防部部长/noun和/adj的/noun在/noun/prep献出/noun/punc");

static auto Sentence4 = Senten::Cre("/adj的/noun/verb了/noun/punc");

static auto Sentence5 = Senten::Cre("/noun/verb了/noun，里面是他/adj的新/noun/punc");

static auto Sentence7 = Senten::Cre("/noun/verb/noun的/noun/punc");

static auto Sentence8 = Senten::Cre("/prep/verb着一位:|/adj:/noun和/noun们的/noun/punc");

static auto Sentence9 = Senten::Cre("因为他认为马上就可以/verb到/adj的/noun了/punc");

static auto Sentence10 = Senten::Cre("我/media把/noun的照片/verb在/noun/prep/punc");

static auto Sentence11 = Senten::Cre("在/noun/prep/verb/noun/punc");

static auto Sentence12 = Senten::Cre("不管是在/noun/prep还是/noun/prep，都有/degree多/noun对着/noun:/verb|/vebi:/punc");

static auto Sentence13 = Senten::Cre("来到/noun，我的/noun对我提出/noun请求/punc");

static auto Sentence14 = Senten::Cre("根据/noun原则，/noun必须给我所有/noun，否则我将拿出/noun/punc");

static auto Sentence15 = Senten::Cre("/head，电影《/adj的/noun》由/noun，/noun和/noun上演/punc");

static auto Sentence16 = Senten::Cre("第一任/noun/vebi了，/noun通过/noun/vebi成为了新的/noun/punc");

static auto Sentence17 = Senten::Cre("我认为在/vebi时/verb/noun是一件/degree/adj的事情/punc");

static auto Sentence18 = Senten::Cre("/verb/noun，并对着/noun:/vebi|/verb:，会/verb更多/noun/punc");

static auto Sentence19 = Senten::Cre("/noun/adv1/vebi了/degree久，因此/noun和/noun发生/noun关系，我/verb/noun制止他们/punc");

static auto Sentence20 = Senten::Cre("穿/noun的/noun看着我，/verb我/adj的/noun/punc");

static auto Sentence21 = Senten::Cre("不久后，我的/noun与/noun:/vebi|/verb:/punc这就是为什么/noun人没有/noun/punc");

static auto Sentence22 = Senten::Cre("/noun皇帝/vebi后，我和/noun一起/verb/noun/punc我对/noun的/vebi感到可惜/punc");

static auto Sentence23 = Senten::Cre("这一天，/noun朝/noun徒手/verb/noun，并会在不久后/verb/noun/punc");

static auto Sentence24 = Senten::Cre("不幸的是，/noun在/vebi时被/noun/verb死了/punc");

static auto Sentence25 = Senten::Cre("老/noun/verb着/adj的/noun，他在我的/noun/prep/verb了/noun的奇迹/punc");

static auto Sentence26 = Senten::Cre("他把/noun/verb成七块！真可爱！好吧，我允许/noun骑着我/punc");

static auto Sentence27 = Senten::Cre("看，怎么会有/noun，他们都去/noun的/noun/vebi了/punc");

static auto Sentence28 = Senten::Cre("/noun来了，/noun飞了过来并发出了/noun的声音，/noun结束了/punc");

static auto Sentence29 = Senten::Cre("/head，当/noun睡醒时，/noun睡着了，因为/noun的/noun睁开了眼睛/punc");

static auto Sentence30 = Senten::Cre("/noun/verb了起来，/noun/verb了过来/punc");

static auto Sentence31 = Senten::Cre("/noun/para/noun一样在/noun/prep:/verb|/vebi:，/verb/adj的/noun/punc");

static auto Sentence32 = Senten::Cre("/adv1用/noun/verb了一个/noun，马上/verb了一个/noun/punc");

static auto Sentence33 = Senten::Cre("/vebi，享年三千岁/punc");

static auto Sentence34 = Senten::Cre("所有人都这么做/punc");

static auto Sentence35 = Senten::Cre("/noun在/noun/prep/verb/punc");

static auto Sentence36 = Senten::Cre("把/noun/verb在/noun/prep，用/noun/verb/noun，/verb了一圈/punc");

static auto Sentence37 = Senten::Cre("/adj的/noun/verb进了/noun/punc");

static auto Sentence38 = Senten::Cre("他的/noun很/adj，很/adj，很/adj，很适合/punc");

static auto Sentence39 = Senten::Cre("/noun站在那，她/adv1/adv2/verb了/noun，/noun死了/punc");

static auto Sentence40 = Senten::Cre("那是一个早上，她/adv2/verb/adj的/noun并/vebi了/punc");

static auto Sentence41 = Senten::Cre("/noun/para一个/noun一样，/adv2/verb了一位/noun的/noun/punc");

static auto Sentence42 = Senten::Cre("/vebi的/noun在说话，/adj/verb的/noun在发出恐怖的笑声/punc");

static auto Sentence43 = Senten::Cre("到处都是/vebi的/noun和/noun/punc");

static auto Sentence44 = Senten::Cre("她的/noun叫/noun，请叫她/noun，她没有/noun/punc");

static auto Sentence45 = Senten::Cre("/noun/prep散落着/noun，/media/para/noun一般/vebi/punc");

static auto Sentence46 = Senten::Cre("我的/noun/noun/prep藏着/noun，声音/para/vebi/punc");

static auto Sentence47 = Senten::Cre("/noun/prep有/noun的声音/punc");

static auto Sentence48 = Senten::Cre("/noun/degree/adj，/noun的/noun/degree/adj/punc");

static auto Sentence49 = Senten::Cre("/noun被/verb在/noun/prep/vebi/punc");

static auto Sentence50 = Senten::Cre("/noun被/noun走了，只有/noun被/verb/punc");
#endif //废话生成器_SENTENCE_HPP
