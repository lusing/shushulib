#include "TianGan_Jia.h"

TianGan_Jia::TianGan_Jia(void)
{
	this->tgid = TGjia;
}

TianGan_Jia::~TianGan_Jia()
{
}

string TianGan_Jia::getName()
{
	return "甲";
}

int TianGan_Jia::getXing()
{
	return this->feature;
}
