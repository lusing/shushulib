#include "DiZhi_Mao.h"

DiZhi_Mao::DiZhi_Mao(void)
{
	this->dzid = DZmao;
}

DiZhi_Mao::~DiZhi_Mao(void)
{
}

string DiZhi_Mao::getName()
{
	return "卯";
}

int DiZhi_Mao::getXing()
{
	return this->feature;
}
