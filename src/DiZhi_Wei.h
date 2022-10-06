#pragma once
#include "Yin.h"
#include "Tu.h"
#include "DiZhi.h"

class DiZhi_Wei :
	public Yin, public Tu, public DiZhi	
{
public:
	DiZhi_Wei(void);
	~DiZhi_Wei(void);

	virtual string getName();
	virtual int getXing();
};
