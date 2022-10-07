#include "TianGan_Ren.h"

TianGan_Ren::TianGan_Ren(void)
{
	this->tgid = TGren;
}

TianGan_Ren::~TianGan_Ren()
{
}

string TianGan_Ren::getName()
{
	return "壬";
}

int TianGan_Ren::getXing()
{
	return this->feature;
}
