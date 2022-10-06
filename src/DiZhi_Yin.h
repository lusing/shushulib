#pragma once
#include "Yang.h"
#include "Mu.h"
#include "DiZhi.h"

class DiZhi_Yin :
	public Yang, public Mu, public DiZhi	
{
public:
	DiZhi_Yin(void);
	~DiZhi_Yin(void);

	virtual string getName();
	virtual int getXing();
};
