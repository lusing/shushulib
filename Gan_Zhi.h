#pragma once
#include "ganzhi.h"

#include "Tiangan.h"
#include "DiZhi.h"

#include <memory>

class Gan_Zhi :
	public GanZhi
{
public:
	Gan_Zhi(int iTG, int iDZ);
	virtual ~Gan_Zhi(void);

	virtual int getXing();
	
	virtual string getName();

	std::shared_ptr<TianGan> pTG;
	std::shared_ptr<DiZhi> pDZ;

	bool isXunKong(std::shared_ptr<DiZhi> pDZToBeCheck);
	bool isSiDaKongWang(int xing);

	int getOrder();
	int getXunShou();

	int getXunShouTianGan();

private:
	int order;
};
