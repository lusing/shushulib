#include "DiZhi_Zi.h"

DiZhi_Zi::DiZhi_Zi(void)
{
	this->dzid = DZzi;
}

DiZhi_Zi::~DiZhi_Zi(void)
{
}

string DiZhi_Zi::getName()
{
	return "子";
}

int DiZhi_Zi::getXing()
{
	return this->feature;
}
