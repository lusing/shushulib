#include "DiZhi_Shen.h"

DiZhi_Shen::DiZhi_Shen(void)
{
	this->dzid = DZshen;
}

DiZhi_Shen::~DiZhi_Shen(void)
{
}

string DiZhi_Shen::getName()
{
	return "申";
}

int DiZhi_Shen::getXing()
{
	return this->feature;
}