#pragma once
#include "Yin.h"
#include "Mu.h"
#include "DiZhi.h"

class DiZhi_Mao :
	public Yin, public Mu, public DiZhi
{
public:
	DiZhi_Mao(void);
	~DiZhi_Mao(void);

	virtual string getName();
	virtual int getXing();
};
