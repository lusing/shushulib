#include "TianGan_Xin.h"

TianGan_Xin::TianGan_Xin(void)
{
	this->tgid = TGxin;
}

TianGan_Xin::~TianGan_Xin()
{
}

string TianGan_Xin::getName()
{
	return "��";
}

int TianGan_Xin::getXing()
{
	return this->feature;
}
