#include "JiuXing.h"

std::shared_ptr<std::string> JiuXing::getXingName(int jiu_xing)
{
	return std::make_shared<std::string>(JiuXingName[jiu_xing%9]);
}

std::shared_ptr<std::string> JiuXing::getXingAnotherName(int jiu_xing)
{
	return std::make_shared<std::string>(JiuXingAnotherName[jiu_xing%9]);
}

int JiuXing::getStaticGua(int jiu_xing)
{
	return staticPosition[jiu_xing % 9];
}

int JiuXing::getWuXing(int jiu_xing)
{
	return JiuXingWuXing[jiu_xing % 9];
}
