#include "Gan_Zhi.h"
#include "Month.h"

Gan_Zhi::Gan_Zhi(int iTG, int iDZ)
{
	this->pTG = Month::buildGan(iTG);
	this->pDZ = Month::buildZhi(iDZ);

	order = -1;

	for(int iO = 0, g1 = 0, z1 = 0; iO < 60 ; iO++, g1++, z1++ )
	{
		if ( iTG == ( g1 % 10) && iDZ == (z1 % 12))
		{
			order = iO; 
			break;
		}
	}
}

Gan_Zhi::~Gan_Zhi(void)
{
}

int Gan_Zhi::getXing()
{
	return 0;
}

string Gan_Zhi::getName()
{
	return this->pTG->getName()+this->pDZ->getName();
}

bool Gan_Zhi::isXunKong(std::shared_ptr<DiZhi> pDZToBeCheck)
{
	int tgid = pTG->getTgid();
	int dzid = pDZ->getDzid();

	int xunid = (dzid - tgid + 12) % 12;

	bool bResult;

	if(xunid == DZzi)
	{
		bResult = (pDZToBeCheck->getDzid() == DZxu ||pDZToBeCheck->getDzid() == DZhai);
	}
	else if(xunid == DZxu)
	{
		bResult = (pDZToBeCheck->getDzid() == DZshen ||pDZToBeCheck->getDzid() == DZyou);
	}
	else if(xunid == DZshen)
	{
		bResult = (pDZToBeCheck->getDzid() == DZwu ||pDZToBeCheck->getDzid() == DZwei);
	}
	else if(xunid == DZwu)
	{
		bResult = (pDZToBeCheck->getDzid() == DZchen ||pDZToBeCheck->getDzid() == DZsi);
	}
	else if(xunid == DZchen)
	{
		bResult = (pDZToBeCheck->getDzid() == DZyin ||pDZToBeCheck->getDzid() == DZmao);
	}
	else if(xunid == DZyin)
	{
		bResult = (pDZToBeCheck->getDzid() == DZzi ||pDZToBeCheck->getDzid() == DZchou);
	}
	else
		bResult = false;

	return bResult;
}

bool Gan_Zhi::isSiDaKongWang(int xing)
{
	int tgid = pTG->getTgid();
	int dzid = pDZ->getDzid();

	int xunid = (dzid - tgid + 12) % 12;

	bool bResult = false;

	if(xunid == DZzi || xunid == DZwu)
	{
		bResult = xing == SHUI;
	}
	else if(xunid == DZyin || xunid == DZshen)
	{
		bResult = xing == JIN;
	}
	else
		bResult = false;

	return bResult;
}

int Gan_Zhi::getOrder()
{
	return order;
}

int Gan_Zhi::getXunShou()
{
	return (order / 10) * 10;
}

int Gan_Zhi::getXunShouTianGan()
{
	return (getXunShou()/10 + TGwu);
}
