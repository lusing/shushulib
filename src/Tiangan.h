#pragma once

#include "Ganzhi.h"

#include "DiZhi.h"
#include <string>

using namespace std;

const int TGjia  = 0;
const int TGyi   = 1;
const int TGbing = 2;
const int TGding = 3;
const int TGwu   = 4;
const int TGji   = 5;
const int TGgeng = 6;
const int TGxin  = 7;
const int TGren  = 8;
const int TGgui  = 9;

const char qiYiName[10][10] = {"","日奇","月奇","星奇","甲子","甲戌","甲申","甲午","甲辰","甲寅"};

class TianGan : public GanZhi
{
public:
	static int JiGong[];

	//int getDzid(void);
	int getTgid(void);
	int getJiGong();
	int getHe();
	static inline std::shared_ptr<std::string> getQiYiName(int tg)
	{
		return std::make_shared<std::string>(qiYiName[tg%10]);
	}

protected:
	int tgid;
};
