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
	return "��";
}

int TianGan_Geng::getXing()
{
	return this->feature;
}
