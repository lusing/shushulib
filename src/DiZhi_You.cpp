#include "DiZhi_You.h"

DiZhi_You::DiZhi_You(void)
{
	this->dzid = DZyou;
}

DiZhi_You::~DiZhi_You(void)
{
}

string DiZhi_You::getName()
{
	return "酉";
}

int DiZhi_You::getXing()
{
	return this->feature;
}
