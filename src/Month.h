#pragma once

#include "DiZhi.h"
#include "DiZhi_Zi.h"
#include "DiZhi_Chou.h"
#include "DiZhi_Mao.h"
#include "DiZhi_Yin.h"
#include "DiZhi_Chen.h"
#include "DiZhi_Si.h"
#include "DiZhi_Wu.h"
#include "DiZhi_Wei.h"
#include "DiZhi_Shen.h"
#include "DiZhi_You.h"
#include "DiZhi_Xu.h"
#include "DiZhi_Hai.h"

#include "Tiangan.h"
#include "TianGan_Jia.h"
#include "TianGan_Yi.h"
#include "TianGan_Bing.h"
#include "TianGan_Ding.h"
#include "TianGan_Wu.h"
#include "TianGan_Ji.h"
#include "TianGan_Geng.h"
#include "TianGan_Xin.h"
#include "TianGan_Ren.h"
#include "TianGan_Gui.h"

#include <memory>

const int JQDongZhi   = 0x10; //冬至
const int JQJingZhe   = 0x11; //惊蛰
const int JQXiaoHai   = 0x12; //
const int JQDaHan     = 0x13; //
const int JQChunFen   = 0x14; //
const int JQMangZhong = 0x15; //
const int JQGuYu      = 0x16; //
const int JQXiaoMan   = 0x17; //
const int JQLiChun    = 0x18; //
const int JQLiXia     = 0x19; //
const int JQQingMing  = 0x1a; //
const int JQYuShui    = 0x1b; //

const int JQXiaZhi    = 0x20; //
const int JQBaiLu     = 0x21;
const int JQXiaoShu   = 0x22;
const int JQQiuFen    = 0x23;
const int JQDaShu     = 0x24;
const int JQLiQiu     = 0x25;
const int JQShuangJiang = 0x26;
const int JQXiaoXue     = 0x27;
const int JQDaXue       = 0x28;
const int JQChuShu      = 0x29;
const int JQLiDong      = 0x2a;
const int JQHanLu       = 0x2b;

/************************************************************************/
/* Month类是主要的工具类的集合
/* 包括：根据数字来构造干支类的对象
/* 求月将的值
/* 五子元遁术
/************************************************************************/

class Month
{
public:
	Month(void);
	~Month(void);
	static std::shared_ptr<TianGan> buildGan(int tgid);
	static std::shared_ptr<DiZhi> buildZhi(int dzid);
	static int getYueJiang(int month);
	static int getYueJiang(std::shared_ptr<DiZhi> pDZ);
	static int getMonthByYueJiang(int yuejiang);
	static std::shared_ptr<TianGan> wuZiYuanDu(std::shared_ptr<TianGan> pTG, std::shared_ptr<DiZhi> pDZ);
	static int getYueJiangByJieQi(int jieqi);

	static int findDiZhiByGuiShen(int riGan, bool isDay, int guiShen);//根据贵神来查对应的地支
};

