#ifndef 废话生成器_Sentence_HPP
#define 废话生成器_Sentence_HPP
#include "FinalLib.hpp"
#include "../CFunction/Func.h"
#include <random>
using namespace std;
class Sentence :public ExtractAgent{
public:
    using ExtractAgent::Extract;
    static Sentence &Cre(string&& Sentence){
        auto Register = [&](shared_ptr<class Sentence> &OnlyInstance) -> void {
            OnlyInstance.reset(new class Sentence);
            OnlyInstance->Information.Key = "/Sentence";
            FinalLib::Register(*OnlyInstance);
        };
        static shared_ptr<class Sentence> OnlyInstance{nullptr};
        if(OnlyInstance == nullptr)
            Register(OnlyInstance);
        OnlyInstance->Information.Lib.push_back(Sentence);
        return *OnlyInstance;
    }
private:
    Sentence() = default;
};
//static auto Sentence = Sentence::Cre("");
static auto Sentence1 = Sentence::Cre("/head, 皇帝/noun/vebi在/noun/prep/punc");

static auto Sentence2 = Sentence::Cre("/noun/noun/degree/adj，被/noun:|和/noun:所:/vebi|/verb:/punc");

static auto Sentence3 = Sentence::Cre("/noun部部长/noun和/adj的/noun在/noun/prep献出/noun/punc");

static auto Sentence4 = Sentence::Cre("/adj的/noun/verb了/noun/punc");

static auto Sentence5 = Sentence::Cre("/noun/verb了/noun，里面是他/adj的新/noun/punc");



static auto Sentence7 = Sentence::Cre("/noun/verb/noun的/noun/punc");

static auto Sentence8 = Sentence::Cre("/prep/verb着一位:|/adj:/noun和/noun们的/noun/punc");

static auto Sentence9 = Sentence::Cre("因为他认为马上就可以/verb到/adj的/noun了/punc");

static auto Sentence10 = Sentence::Cre("我/media把/noun的照片/verb在/noun/prep/punc");

static auto Sentence11 = Sentence::Cre("在/noun/prep/verb/noun/punc");

static auto Sentence12 = Sentence::Cre("不管是在/noun/prep还是/noun/prep，都有/degree多/noun对着/noun:/verb|/vebi:/punc");

static auto Sentence13 = Sentence::Cre("来到/noun，我的/noun对我提出/noun请求/punc");

static auto Sentence14 = Sentence::Cre("根据/noun原则，/noun必须给我所有/noun，否则我将/verb/noun/punc");

static auto Sentence15 = Sentence::Cre("/head，电影《/adj的/noun》由/noun，/noun和/noun上演/punc");

static auto Sentence16 = Sentence::Cre("第一任/noun/vebi了，/noun通过/noun/vebi成为了新的/noun/punc");

static auto Sentence17 = Sentence::Cre("我认为在/vebi时/verb/noun是一件/degree/adj的事情/punc");

static auto Sentence18 = Sentence::Cre("/verb/noun，并对着/noun:/vebi|/verb:，会/verb更多/noun/punc");

static auto Sentence19 = Sentence::Cre("/noun/adv1/vebi了/degree久，因此/noun和/noun发生/noun关系，我/verb/noun制止他们/punc");

static auto Sentence20 = Sentence::Cre("穿/noun的/noun看着我，/verb我/adj的/noun/punc");

static auto Sentence21 = Sentence::Cre("不久后，我的/noun与/noun:/vebi|/verb:/punc这就是为什么/noun人没有/noun/punc");

static auto Sentence22 = Sentence::Cre("/noun皇帝/vebi后，我和/noun一起/verb/noun/punc我对/noun的/vebi感到可惜/punc");

static auto Sentence23 = Sentence::Cre("这一天，/noun朝/noun徒手/verb/noun，并会在不久后/verb/noun/punc");

static auto Sentence24 = Sentence::Cre("不幸的是，/noun在/vebi时被/noun/verb死了/punc");

static auto Sentence25 = Sentence::Cre("老/noun/verb着/adj的/noun，他在我的/noun/prep/verb了/noun的奇迹/punc");

static auto Sentence26 = Sentence::Cre("他把/noun/verb成/number块！真/adj！");

static auto Sentence27 = Sentence::Cre("看，怎么会有/noun，他们都去/noun的/noun/vebi了/punc");

static auto Sentence28 = Sentence::Cre("/noun来了，/noun飞了过来并发出了/noun的声音，/noun结束了/punc");

static auto Sentence29 = Sentence::Cre("/head，当/noun睡醒时，/noun睡着了，因为/noun的/noun睁开了眼睛/punc");

static auto Sentence30 = Sentence::Cre("/noun/verb了起来，/noun/verb了过来/punc");

static auto Sentence31 = Sentence::Cre("/noun/para/noun一样在/noun/prep:/verb|/vebi:，/verb/adj的/noun/punc");

static auto Sentence32 = Sentence::Cre("/adv1用/noun/verb了一个/noun，马上/verb了/number个/noun/punc");

static auto Sentence33 = Sentence::Cre("/vebi，享年/number岁/punc");

static auto Sentence34 = Sentence::Cre("所有人都这么做/punc");

static auto Sentence35 = Sentence::Cre("/noun在/noun/prep/verb/punc");

static auto Sentence36 = Sentence::Cre("把/noun/verb在/noun/prep，用/noun/verb/noun，/verb了一圈/punc");

static auto Sentence37 = Sentence::Cre("/adj的/noun/verb进了/noun/punc");

static auto Sentence38 = Sentence::Cre("他的/noun很/adj，很/adj，很/adj，很适合/punc");

static auto Sentence39 = Sentence::Cre("/noun站在那，她/adv1/adv2/verb了/noun，/noun死了/punc");

static auto Sentence40 = Sentence::Cre("那是一个早上，她/adv2/verb/adj的/noun并/vebi了/punc");

static auto Sentence41 = Sentence::Cre("/noun/para一个/noun一样，/adv2/verb了一位/noun的/noun/punc");

static auto Sentence42 = Sentence::Cre("/vebi的/noun在说话，/adj/verb的/noun在发出恐怖的笑声/punc");

static auto Sentence43 = Sentence::Cre("到处都是/vebi的/noun和/noun/punc");

static auto Sentence44 = Sentence::Cre("她的/noun叫/noun，请叫她/noun，她没有/noun/punc");

static auto Sentence45 = Sentence::Cre("/noun/prep散落着/noun，/media/para/noun一般/vebi/punc");

static auto Sentence46 = Sentence::Cre("我的/noun/noun/prep藏着/noun，声音/para/vebi/punc");

static auto Sentence47 = Sentence::Cre("/noun/prep有/noun的声音/punc");

static auto Sentence48 = Sentence::Cre("/noun/degree/adj，/noun的/noun/degree/adj/punc");

static auto Sentence49 = Sentence::Cre("/noun被/verb在/noun/prep/vebi/punc");

static auto Sentence50 = Sentence::Cre("/noun被/noun走了，只有/noun被/verb/punc");
#endif //废话生成器_Sentence_HPP
