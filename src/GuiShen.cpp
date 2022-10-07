#include "GuiShen.h"
#include "Yin.h"
#include "Yang.h"

#include "Jin.h"
#include "Mu.h"
#include "Shui.h"
#include "Tu.h"
#include "Huo.h"
#include "Month.h"

#include <memory>

GuiShen::GuiShen(std::shared_ptr<TianGan> pTG, bool isDay, std::shared_ptr<DiZhi> pDiFen)
{
    int startForward=0;
    int startReverse=0;
    bool isForward=true;

    //甲戊庚牛羊
    if(pTG->getTgid() == TGjia || pTG->getTgid() == TGwu || pTG->getTgid() == TGgeng)
    {
        startForward = DZchou;
        startReverse = DZwei;
        isForward = isDay;
    }
        //乙已鼠猴乡
    else if(pTG->getTgid()==TGyi || pTG->getTgid()==TGji)
    {
        startForward = DZzi;
        startReverse = DZshen;
        isForward = isDay;
    }
        //丙丁猪鸡位
    else if(pTG->getTgid()==TGbing || pTG->getTgid()==TGding)
    {
        startForward = DZhai;
        startReverse = DZyou;
        isForward = isDay;
    }
        //壬癸蛇兔藏
    else if(pTG->getTgid()==TGren || pTG->getTgid()==TGgui)
    {
        startForward = DZsi;
        startReverse = DZmao;
        isForward = !isDay;
    }
        //六辛逢马虎
    else if(pTG->getTgid()==TGxin)
    {
        startForward = DZwu;
        startReverse = DZyin;
        isForward = !isDay;
    }
        //此是贵人方
    else{
        cout<<"Error! 天干错误！"<<endl;
    }

    gsID = isForward ? (pDiFen->getDzid() - startForward + 12) % 12 : (pDiFen->getDzid() + startReverse + 12) % 12;

    switch(gsID)
    {
        case 0:
            pName = std::make_shared<string>("丑 (天乙贵神 阴土)");
            pYinYang = std::make_shared<Yin>();
            pXing = std::make_shared<Tu>();
            pDZ = Month::buildZhi(DZchou);
            break;
        case 1:
            pName = std::make_shared<string>("巳 (螣蛇 阴火)");
            pDZ = Month::buildZhi(DZsi);
            pYinYang = std::make_shared<Yin>();
            pXing = std::make_shared<Huo>();
            break;
        case 2:
            pName =std::make_shared<string>("午 (朱雀 阳火)");
            pDZ = Month::buildZhi(DZwu);
            pYinYang = std::make_shared<Yang>();
            pXing = std::make_shared<Huo>();
            break;
        case 3:
            pName =std::make_shared<string>("卯 (六合 阴木)");
            pDZ = Month::buildZhi(DZmao);
            pYinYang = std::make_shared<Yin>();
            pXing = std::make_shared<Mu>();
            break;
        case 4:
            pName =std::make_shared<string>("辰 (勾陈 阳土)");
            pDZ = Month::buildZhi(DZchen);
            pYinYang = std::make_shared<Yang>();
            pXing = std::make_shared<Tu>();
            break;
        case 5:
            pName =std::make_shared<string>("寅 (青龙 阳木)");
            pDZ = Month::buildZhi(DZyin);
            pYinYang = std::make_shared<Yang>();
            pXing = std::make_shared<Mu>();
            break;
        case 6:
            pName =std::make_shared<string>("戌 (天空 阳土)");
            pDZ = Month::buildZhi(DZxu);
            pYinYang = std::make_shared<Yang>();
            pXing = std::make_shared<Tu>();
            break;
        case 7:
            pName =std::make_shared<string>("申 (白虎 阳金)");
            pDZ = Month::buildZhi(DZshen);
            pYinYang = std::make_shared<Yang>();
            pXing = std::make_shared<Jin>();
            break;
        case 8:
            pName =std::make_shared<string>("未 (太常 阴土)");
            pDZ = Month::buildZhi(DZwei);
            pYinYang = std::make_shared<Yin>();
            pXing = std::make_shared<Tu>();
            break;
        case 9:
            pName =std::make_shared<string>("子 (玄武 阳水)");
            pDZ = Month::buildZhi(DZzi);
            pYinYang = std::make_shared<Yang>();
            pXing = std::make_shared<Shui>();
            break;
        case 10:
            pName =std::make_shared<string>("酉 (太阴 阴金)");
            pDZ = Month::buildZhi(DZyou);
            pYinYang = std::make_shared<Yin>();
            pXing = std::make_shared<Jin>();
            break;
        case 11:
            pName =std::make_shared<string>("亥 (天后阴水)");
            pDZ = Month::buildZhi(DZhai);
            pYinYang = std::make_shared<Yin>();
            pXing = std::make_shared<Shui>();
            break;
        default:
            pName = std::make_shared<string>("错误！");
            break;
    }
}

string GuiShen::getName()
{
	return *pName;
}

GuiShen::~GuiShen(void)
{

}
