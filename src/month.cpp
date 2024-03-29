#include "Month.h"

#include "GuiShen.h"

using std::make_shared;

std::shared_ptr<DiZhi> Month::buildZhi(int dzid)
{
    dzid = dzid>=0 ? dzid %12: dzid % 12 +12;
    std::shared_ptr<DiZhi> pdz;
    switch(dzid)
    {
        case DZzi:
            //pdz = new DiZhi_Zi();
            pdz = std::make_shared<DiZhi_Zi>();
            break;
        case DZchou:
            pdz = std::make_shared<DiZhi_Chou>();
            break;
        case DZyin:
            pdz = std::make_shared<DiZhi_Yin>();
            break;
        case DZmao:
            pdz = std::make_shared<DiZhi_Mao>();
            break;
        case DZchen:
            pdz = std::make_shared<DiZhi_Chen>();
            break;
        case DZsi:
            pdz = std::make_shared<DiZhi_Si>();
            break;
        case DZwu:
            pdz = std::make_shared<DiZhi_Wu>();
            break;
        case DZwei:
            pdz = std::make_shared<DiZhi_Wei>();
            break;
        case DZshen:
            pdz = std::make_shared<DiZhi_Shen>();
            break;
        case DZyou:
            pdz = std::make_shared<DiZhi_You>();
            break;
        case DZxu:
            pdz = std::make_shared<DiZhi_Xu>();
            break;
        case DZhai:
            pdz = std::make_shared<DiZhi_Hai>();
            break;
    }

    return pdz;
}

std::shared_ptr<TianGan> Month::buildGan(int tgid)
{

    tgid = (tgid + 10) % 10;
    std::shared_ptr<TianGan> ptg;
    switch(tgid)
    {
        case TGjia:
            ptg = std::make_shared<TianGan_Jia>();
            break;
        case TGyi:
            ptg = std::make_shared<TianGan_Yi>();
            break;
        case TGbing:
            ptg = std::make_shared<TianGan_Bing>();
            break;
        case TGding:
            ptg = std::make_shared<TianGan_Ding>();
            break;
        case TGwu:
            ptg = std::make_shared<TianGan_Wu>();
            break;
        case TGji:
            ptg = std::make_shared<TianGan_Ji>();
            break;
        case TGgeng:
            ptg = std::make_shared<TianGan_Geng>();
            break;
        case TGxin:
            ptg = std::make_shared<TianGan_Xin>();
            break;
        case TGren:
            ptg = std::make_shared<TianGan_Ren>();
            break;
        case TGgui:
            ptg = std::make_shared<TianGan_Gui>();
            break;
    }

    return ptg;
}

int Month::getYueJiang(int month)
{
    return (12-month);
}

int Month::getYueJiang(std::shared_ptr<DiZhi> pDZ)
{
    return getYueJiang(pDZ->getMonth());
}

std::shared_ptr<TianGan> Month::wuZiYuanDu(std::shared_ptr<TianGan> pTG, std::shared_ptr<DiZhi> pDZ)
{
    int iTgID = pTG->getTgid();
    int iDzID = pDZ->getDzid();

    int iTG2 = (iTgID % 5) * 2;

    std::shared_ptr<TianGan> pTG2 = buildGan((iTG2+iDzID)%10);

    //cout<<"[debug]TianGan = "<<pTG2->getTgid()<<endl;

    return pTG2;
}

int Month::getMonthByYueJiang(int yuejiang)
{
    return (12-yuejiang);
}

int Month::getYueJiangByJieQi(int jieqi)
{
    switch(jieqi)
    {
        case JQDaHan://12月
        case JQLiChun:
            return DZzi;
            break;
        case JQYuShui://1月
        case JQJingZhe:
            return DZhai;
            break;
        case JQChunFen://2月
        case JQQingMing:
            return DZxu;
            break;
        case JQGuYu://3月
        case JQLiXia:
            return DZyou;
            break;
        case JQXiaoMan://4月
        case JQMangZhong:
            return DZshen;
            break;
        case JQXiaZhi://5月
        case JQXiaoShu:
            return DZwei;
            break;
        case JQDaShu://6月
        case JQLiQiu:
            return DZwu;
            break;
        case JQChuShu://7月
        case JQBaiLu:
            return DZsi;
            break;
        case JQQiuFen://8月
        case JQHanLu:
            return DZchen;
            break;
        case JQShuangJiang://9月
        case JQLiDong:
            return DZmao;
            break;
        case JQXiaoXue://10月
        case JQDaXue:
            return DZyin;
            break;
        case JQDongZhi://11月
        case JQXiaoHai:
            return DZchou;
            break;
    }

    return -1;
}

int Month::findDiZhiByGuiShen( int riGan, bool isDay, int guiShen)
{
    std::shared_ptr<GuiShen> pGS;
    std::shared_ptr<TianGan> pTG = Month::buildGan(riGan);

    for(int i=DZzi;i<DZhai+1;i++)
    {
        std::shared_ptr<DiZhi> pDZ = Month::buildZhi(i);
        pGS = std::make_shared<GuiShen>(pTG,isDay,pDZ);
        if(pGS->gsID == guiShen)
            return i;
    }
    return -1;
}