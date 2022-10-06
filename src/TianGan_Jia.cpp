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
	return "��";
}

int TianGan_Jia::getXing()
{
	return this->feature;
}
