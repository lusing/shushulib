#include "DiZhi_Xu.h"

DiZhi_Xu::DiZhi_Xu(void)
{
	this->dzid = DZxu;
}

DiZhi_Xu::~DiZhi_Xu(void)
{
}

string DiZhi_Xu::getName()
{
	return "戌";
}

int DiZhi_Xu::getXing()
{
	return this->feature;
}
