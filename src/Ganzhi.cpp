#include "Ganzhi.h"
#include <iostream>

using namespace std;

GanZhi::GanZhi(void)
{
	
}


GanZhi::~GanZhi(void)
{
}

bool GanZhi::ke(std::shared_ptr<GanZhi> pdz)
{
	if (Xing::ke(this->getXing(),pdz->getXing())){
		cout<<this->getName()<<Xing::transFeature(this->getXing());
		cout<<"��"<<pdz->getName()<<Xing::transFeature(pdz->getXing());
		cout<<endl;
		return true;
	}
	else return false;
}

bool GanZhi::sheng(std::shared_ptr<GanZhi> pGZ)
{
	if(Xing::sheng(getXing(),pGZ->getXing())){
		cout<<this->getName()<<Xing::transFeature(this->getXing());
		cout<<"��"<<pGZ->getName()<<Xing::transFeature(pGZ->getXing());
		cout<<endl;
		return true;
	}
	return false;
}

std::shared_ptr<Xing> GanZhi::buildXing()
{
	return Xing::buildXing(this->getXing());
}
