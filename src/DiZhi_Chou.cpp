#include "DiZhi_Chou.h"

DiZhi_Chou::DiZhi_Chou(void)
{
	this->dzid = DZchou;
}

DiZhi_Chou::~DiZhi_Chou(void)
{
}

string DiZhi_Chou::getName()
{
	return "丑";
}

int DiZhi_Chou::getXing()
{
	return this->feature;
}