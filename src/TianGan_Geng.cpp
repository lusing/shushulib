#include "TianGan_Geng.h"

TianGan_Geng::TianGan_Geng(void)
{
	this->tgid = TGgeng;
}

TianGan_Geng::~TianGan_Geng()
{
}

string TianGan_Geng::getName()
{
	return "庚";
}

int TianGan_Geng::getXing()
{
	return this->feature;
}
