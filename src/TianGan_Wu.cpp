#include "TianGan_Wu.h"

TianGan_Wu::TianGan_Wu(void)
{
	this->tgid = TGwu;
}

TianGan_Wu::~TianGan_Wu()
{
}

string TianGan_Wu::getName()
{
	return "午";
}

int TianGan_Wu::getXing()
{
	return this->feature;
}
