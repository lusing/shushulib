#include "TianGan_Bing.h"

TianGan_Bing::TianGan_Bing(void)
{
	this->tgid = TGbing;
}

TianGan_Bing::~TianGan_Bing()
{
}

string TianGan_Bing::getName()
{
	return "��";
}

int TianGan_Bing::getXing()
{
	return this->feature;
}
