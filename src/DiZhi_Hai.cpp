#include "DiZhi_Hai.h"

DiZhi_Hai::DiZhi_Hai(void)
{
	this->dzid = DZhai;
}

DiZhi_Hai::~DiZhi_Hai(void)
{
}

string DiZhi_Hai::getName()
{
	return "亥";
}

int DiZhi_Hai::getXing()
{
	return this->feature;
}