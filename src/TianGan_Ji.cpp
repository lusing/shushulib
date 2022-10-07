#include "TianGan_Ji.h"

TianGan_Ji::TianGan_Ji(void)
{
	this->tgid = TGji;
}

TianGan_Ji::~TianGan_Ji()
{
}

string TianGan_Ji::getName()
{
	return "己";
}

int TianGan_Ji::getXing()
{
	return this->feature;
}
