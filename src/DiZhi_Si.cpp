#include "DiZhi_Si.h"

DiZhi_Si::DiZhi_Si(void)
{
	this->dzid = DZsi;
}

DiZhi_Si::~DiZhi_Si(void)
{
}

string DiZhi_Si::getName()
{
	return "巳";
}

int DiZhi_Si::getXing()
{
	return this->feature;
}