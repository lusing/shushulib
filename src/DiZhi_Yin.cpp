#include "DiZhi_Yin.h"

DiZhi_Yin::DiZhi_Yin(void)
{
	this->dzid = DZyin;
}

DiZhi_Yin::~DiZhi_Yin(void)
{
}

string DiZhi_Yin::getName()
{
	return "寅";
}

int DiZhi_Yin::getXing()
{
	return this->feature;
}

