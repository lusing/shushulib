#pragma once
#include "Yin.h"
#include "Tu.h"
#include "DiZhi.h"

class DiZhi_Chou :
	public Yin, public Tu, public DiZhi	
{
public:
	DiZhi_Chou(void);
	~DiZhi_Chou(void);

	virtual string getName();
	virtual int getXing();
};
