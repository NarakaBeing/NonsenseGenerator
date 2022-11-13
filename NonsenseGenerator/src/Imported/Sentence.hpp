#ifndef 废话生成器_Sentence_HPP
#define 废话生成器_Sentence_HPP
#import "FinalLib.hpp"
#import "../CFunction/Func.h"
#import <iostream>
using namespace std;
class Sentence :public ExtractAgent{
public:
    Sentence() = default;
    using ExtractAgent::load;
protected:
    using ExtractAgent::extract;
    void init() override{
        Sentence* OnlyInstance{new class Sentence()};
        OnlyInstance->Information.Key = "/Sentence";
        FinalLib::Register(*OnlyInstance);
        auto Cre = [&](string&& Sentence){
            OnlyInstance->Information.Lib.push_back(Sentence);
        };
        Cre("/head, 皇帝/noun/vebi在/noun/prep/punc");
        Cre("/noun/noun/degree/adj，被/noun:|和/noun:所:/vebi|/verb:/punc");
        Cre("/noun部部长/noun和/adj的/noun在/noun/prep献出/noun/punc");
        Cre("/adj的/noun/verb了/noun/punc");
        Cre("/noun/verb了/noun，里面是他/adj的新/noun/punc");
        Cre("/noun/verb/noun的/noun/punc");
        Cre("/prep/verb着一位:|/adj:/noun和/noun们的/noun/punc");
        Cre("因为他认为马上就可以/verb到/adj的/noun了/punc");
        Cre("我/media把/noun的照片/verb在/noun/prep/punc");
        Cre("在/noun/prep/verb/noun/punc");
        Cre("不管是在/noun/prep还是/noun/prep，都有/degree多/noun对着/noun:/verb|/vebi:/punc");
        Cre("来到/noun，我的/noun对我提出/noun请求/punc");
        Cre("根据/noun原则，/noun必须给我所有/noun，否则我将/verb/noun/punc");
        Cre("/head，电影《/adj的/noun》由/noun，/noun和/noun上演/punc");
        Cre("第一任/noun/vebi了，/noun通过/noun/vebi成为了新的/noun/punc");
        Cre("我认为在/vebi时/verb/noun是一件/degree/adj的事情/punc");
        Cre("/verb/noun，并对着/noun:/vebi|/verb:，会/verb更多/noun/punc");
        Cre("/noun/adv1/vebi了/degree久，因此/noun和/noun发生/noun关系，我/verb/noun制止他们/punc");
        Cre("穿/noun的/noun看着我，/verb我/adj的/noun/punc");
        Cre("不久后，我的/noun与/noun:/vebi|/verb:/punc这就是为什么/noun人没有/noun/punc");
        Cre("/noun皇帝/vebi后，我和/noun一起/verb/noun/punc我对/noun的/vebi感到可惜/punc");
        Cre("这一天，/noun朝/noun徒手/verb/noun，并会在不久后/verb/noun/punc");
        Cre("不幸的是，/noun在/vebi时被/noun/verb死了/punc");
        Cre("老/noun/verb着/adj的/noun，他在我的/noun/prep/verb了/noun的奇迹/punc");
        Cre("他把/noun/verb成/number块！真/adj！");
        Cre("看，怎么会有/noun，他们都去/noun的/noun/vebi了/punc");
        Cre("/noun来了，/noun飞了过来并发出了/noun的声音，/noun结束了/punc");
        Cre("/head，当/noun睡醒时，/noun睡着了，因为/noun的/noun睁开了眼睛/punc");
        Cre("/noun/verb了起来，/noun/verb了过来/punc");
        Cre("/noun/para/noun一样在/noun/prep:/verb|/vebi:，/verb/adj的/noun/punc");
        Cre("/adv1用/noun/verb了一个/noun，马上/verb了/number个/noun/punc");
        Cre("/vebi，享年/number岁/punc");
        Cre("所有人都这么做/punc");
        Cre("/noun在/noun/prep/verb/punc");
        Cre("把/noun/verb在/noun/prep，用/noun/verb/noun，/verb了一圈/punc");
        Cre("/adj的/noun/verb进了/noun/punc");
        Cre("他的/noun很/adj，很/adj，很/adj，很适合/punc");
        Cre("/noun站在那，她/adv1/adv2/verb了/noun，/noun死了/punc");
        Cre("那是一个早上，她/adv2/verb/adj的/noun并/vebi了/punc");
        Cre("/noun/para一个/noun一样，/adv2/verb了一位/noun的/noun/punc");
        Cre("/vebi的/noun在说话，/adj/verb的/noun在发出恐怖的笑声/punc");
        Cre("到处都是/vebi的/noun和/noun/punc");
        Cre("她的/noun叫/noun，请叫她/noun，她没有/noun/punc");
        Cre("/noun/prep散落着/noun，/media/para/noun一般/vebi/punc");
        Cre("我的/noun/noun/prep藏着/noun，声音/para/vebi/punc");
        Cre("/noun/prep有/noun的声音/punc");
        Cre("/noun/degree/adj，/noun的/noun/degree/adj/punc");
        Cre("/noun被/verb在/noun/prep/vebi/punc");
        Cre("/noun被/noun走了，只有/noun被/verb/punc");
    }
};
#endif //废话生成器_Sentence_HPP
