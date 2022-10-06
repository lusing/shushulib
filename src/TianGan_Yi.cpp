#include "TianGan_Yi.h"

TianGan_Yi::TianGan_Yi(void)
{
	this->tgid = TGyi;
}

TianGan_Yi::~TianGan_Yi()
{
}

string TianGan_Yi::getName()
{
	return "��";
}

int TianGan_Yi::getXing()
{
	return this->feature;
}
