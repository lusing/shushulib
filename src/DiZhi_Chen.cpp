#include "DiZhi_Chen.h"

DiZhi_Chen::DiZhi_Chen(void)
{
	this->dzid = DZchen;
}

DiZhi_Chen::~DiZhi_Chen(void)
{
}

string DiZhi_Chen::getName()
{
	return "辰";
}

int DiZhi_Chen::getXing()
{
	return this->feature;
}
